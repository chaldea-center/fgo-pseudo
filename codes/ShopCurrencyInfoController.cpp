void ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.x = xmmword_D00E50;
  *(_QWORD *)&this->fields.currencySpritePosTypeB.fields.y = 1110441984;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o ShopCurrencyInfoController__GetApSpritePosition(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.currencySpritePosTypeA.fields.x;
  result.fields.y = this->fields.currencySpritePosTypeA.fields.y;
  result.fields.z = this->fields.currencySpritePosTypeA.fields.z;
  return result;
}


System_String_o *ShopCurrencyInfoController__GetCurrencyNumber(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  int v8; // w8
  UserItemMaster_o *v9; // x19
  int32_t mana; // w19
  LocalizationManager_c *v11; // x0
  __int64 v13; // x8
  int32_t monitor_high; // w2
  int64_t v15; // x20
  int64_t v16; // x1
  UserItemMaster_o *v17; // x0

  if ( (byte_4D2CB21 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2CB21 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_90:
    sub_1C93D2C(Instance, v6);
  }
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
  v8 = kind - 2;
  v9 = (UserItemMaster_o *)Instance;
  switch ( v8 )
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
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v9 )
        goto LABEL_90;
      v13 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[5].monitor);
      goto LABEL_60;
    case 6:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v9 )
        goto LABEL_90;
      v13 = *((_QWORD *)Instance + 23);
      monitor_high = (int32_t)MasterData_object[6].klass;
      goto LABEL_60;
    case 7:
    case 12:
    case 19:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v11 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        goto LABEL_88;
      return LocalizationManager__GetNumberFormat(mana, 0);
    case 11:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v9 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_83;
    case 14:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v9 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->PurePriItemId;
      goto LABEL_83;
    case 15:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v9 )
        goto LABEL_90;
      v13 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[6].klass);
LABEL_60:
      v16 = *(_QWORD *)(v13 + 64);
      v17 = v9;
      goto LABEL_84;
    case 16:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v9 )
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
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v9 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->RevivalItemId;
LABEL_83:
      v17 = v9;
      v16 = v15;
LABEL_84:
      Instance = UserItemMaster__GetEntityDefinitely(v17, v16, monitor_high, 0);
      if ( !Instance )
        goto LABEL_90;
      mana = *((_DWORD *)Instance + 7);
LABEL_86:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        v11 = LocalizationManager_TypeInfo;
LABEL_88:
        j_il2cpp_runtime_class_init_0(v11);
      }
      return LocalizationManager__GetNumberFormat(mana, 0);
    default:
      return (System_String_o *)StringLiteral_1116/*"0"*/;
  }
}


System_String_o *ShopCurrencyInfoController__GetCurrencySprite(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4D2CB20 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20557/*"img_bg_seed"*/);
    sub_1C93AD4(&StringLiteral_20550/*"img_bg_mp"*/);
    sub_1C93AD4(&StringLiteral_20541/*"img_bg_evocation"*/);
    sub_1C93AD4(&StringLiteral_20542/*"img_bg_fragments"*/);
    sub_1C93AD4(&StringLiteral_20552/*"img_bg_pureprism_itemstock_resetticket"*/);
    sub_1C93AD4(&StringLiteral_20532/*"img_bg_ap"*/);
    sub_1C93AD4(&StringLiteral_20554/*"img_bg_rp"*/);
    sub_1C93AD4(&StringLiteral_20549/*"img_bg_hgd"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_20559/*"img_bg_spsummon"*/);
    sub_1C93AD4(&StringLiteral_20806/*"img_shopbg04"*/);
    byte_4D2CB20 = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x15 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_47416C8 + kind - 2);
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
  result.fields.z = *p_z;
  result.fields.y = *p_y;
  result.fields.x = p_currencySpritePosTypeA->fields.x;
  return result;
}


bool ShopCurrencyInfoController__GetIsRarePriShopPurchased(
        ShopCurrencyInfoController_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *v7; // x20
  bool IsTimeStatusRecord; // w0
  bool v9; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2CB25 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CB25 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  v7 = UserEventMaster__GetEntity(
         (UserEventMaster_o *)MasterData_object,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         eventId,
         0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0);
      if ( !v7 || IsTimeStatusRecord )
        return 0;
      goto LABEL_19;
    }
LABEL_22:
    sub_1C93D2C(Instance, v5);
  }
  if ( !v7 )
    return 0;
LABEL_19:
  v9 = 1;
  if ( !UserEventEntity__getEventFlag(v7, 1, 0) )
    return 0;
  return v9;
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
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = -59.0;
  if ( !isRarepriShopPurchased && !isFinished )
  {
    result.fields.x = 0.0;
    if ( (unsigned int)(textCount - 2) <= 2 )
      LODWORD(result.fields.x) = dword_D344BC[textCount - 2];
  }
  result.fields.y = -1.7;
  result.fields.z = 0.0;
  return result;
}


void ShopCurrencyInfoController__RefreshCurrencyInfo(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shopEventItemWindow; // x22
  __int64 v8; // x1
  void *gameObject; // x0
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x22
  UnityEngine_Object_o *currencyWindow; // x22
  UnityEngine_Object_o *currencySprite; // x22
  UnityEngine_Object_o *currencyLabel; // x22
  UnityEngine_Object_o *baseAtlas; // x23
  UIAtlas_o **p_baseAtlas; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UISprite_o *v22; // x8
  UIAtlas_o *mAtlas; // x1
  const MethodInfo *v24; // x2
  UnityEngine_GameObject_o *v25; // x23
  bool IsShowCurrencyWindow; // w0
  UnityEngine_Object_o *overCurrencyWindow; // x23
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x2
  struct UISprite_o *v30; // x22
  UISprite_o *v31; // x0
  System_String_o *v32; // x1
  struct UISprite_o *v33; // x22
  int32_t v34; // w1
  System_String_o *v35; // x23
  UISprite_o *v36; // x22
  ShopCurrencyInfoController_o *v37; // x0
  const MethodInfo *v38; // x2
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeA; // x8
  float *p_y; // x9
  float *p_z; // x10
  ShopCurrencyInfoController_o *v42; // x0
  UILabel_o *v43; // x22
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *itemInfo1; // x21
  UnityEngine_Object_o *itemInfo2; // x21
  int v47; // w21
  _BOOL4 v48; // w20
  unsigned int v49; // w20
  ShopCurrencyInfoController_o *v50; // x0
  const MethodInfo *v51; // x2
  UISprite_o *currencySprite2; // x20
  ShopCurrencyInfoController_o *v53; // x0
  const MethodInfo *v54; // x2
  int32_t v55; // w20
  Il2CppObject *Master_object; // x20
  ItemEntity_array *EntityList; // x21
  const MethodInfo *v58; // x2
  int max_length; // w8
  System_String_o *v60; // x23
  unsigned int v61; // w27
  struct ShopCurrencyInfoController_OverCurrencyInfoObject_array *overCurrencyInfos; // x9
  unsigned int v63; // w10
  ItemEntity_o *v64; // x8
  ShopCurrencyInfoController_OverCurrencyInfoObject_o *v65; // x26
  int32_t id; // w25
  UILabel_o *v67; // x25
  int32_t v68; // w26
  UISprite_o *v69; // x20
  System_String_o *v70; // x21
  UISprite_o *v71; // x20
  System_String_o *v72; // x21
  ShopCurrencyInfoController_o *v73; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v75; // x2
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2CB1E & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20551/*"img_bg_pp"*/);
    byte_4D2CB1E = 1;
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
    v22 = this->fields.currencySprite;
    if ( !v22 )
      goto LABEL_116;
    mAtlas = v22->fields.mAtlas;
    *p_baseAtlas = mAtlas;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v16, v17, v18, v19, v20, v21);
  }
  gameObject = this->fields.shopEventItemWindowPanel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = this->fields.currencyWindow) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_116:
    sub_1C93D2C(gameObject, v8);
  }
  v25 = (UnityEngine_GameObject_o *)gameObject;
  IsShowCurrencyWindow = ShopCurrencyInfoController__GetIsShowCurrencyWindow(
                           (ShopCurrencyInfoController_o *)gameObject,
                           kind,
                           v24);
  UnityEngine_GameObject__SetActive(v25, IsShowCurrencyWindow, 0);
  overCurrencyWindow = (UnityEngine_Object_o *)this->fields.overCurrencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = UnityEngine_Object__op_Inequality(overCurrencyWindow, 0, 0);
  if ( !v28 )
    goto LABEL_40;
  if ( state == 22 && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.overCurrencyInfos, 0) )
  {
    gameObject = this->fields.overCurrencyWindow;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
      gameObject = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( gameObject )
      {
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)gameObject, 41, 0);
        gameObject = ShopCurrencyInfoController__GetCurrencySprite((ShopCurrencyInfoController_o *)EntityList, 23, v58);
        if ( EntityList )
        {
          max_length = EntityList->max_length;
          if ( max_length < 1 )
            return;
          v60 = (System_String_o *)gameObject;
          v61 = 0;
          while ( 1 )
          {
            overCurrencyInfos = this->fields.overCurrencyInfos;
            if ( !overCurrencyInfos )
              break;
            v63 = overCurrencyInfos->max_length;
            if ( (int)v61 >= (int)v63 )
              return;
            if ( v61 >= max_length )
              goto LABEL_117;
            v64 = EntityList->m_Items[v61];
            if ( !v64 )
              goto LABEL_116;
            if ( v61 >= v63 )
LABEL_117:
              sub_1C93D34(gameObject);
            v65 = overCurrencyInfos->m_Items[v61];
            if ( !v65 )
              break;
            gameObject = v65->fields.itemIcon;
            if ( !gameObject )
              break;
            id = v64->fields.id;
            ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, id, -1, 1, 0);
            gameObject = v65->fields.currencySprite;
            if ( !gameObject )
              break;
            UISprite__set_atlas((UISprite_o *)gameObject, *p_baseAtlas, 0);
            gameObject = v65->fields.currencySprite;
            if ( !gameObject )
              break;
            UISprite__set_spriteName((UISprite_o *)gameObject, v60, 0);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4D2A55B )
            {
              sub_1C93AD4(&NetworkManager_TypeInfo);
              byte_4D2A55B = 1;
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
            v67 = v65->fields.currencyLabel;
            v68 = *((_DWORD *)gameObject + 7);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = LocalizationManager__GetNumberFormat(v68, 0);
            if ( !v67 )
              break;
            UILabel__set_text(v67, (System_String_o *)gameObject, 0);
            max_length = EntityList->max_length;
            if ( (int)++v61 >= max_length )
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
      v33 = this->fields.currencySprite;
      v34 = 20;
LABEL_48:
      v35 = ShopCurrencyInfoController__GetCurrencySprite((ShopCurrencyInfoController_o *)v28, v34, v29);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v31 = v33;
      v32 = v35;
      goto LABEL_51;
    case 18:
      v33 = this->fields.currencySprite;
      v34 = 18;
      goto LABEL_48;
    case 16:
      v30 = this->fields.currencySprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v31 = v30;
      v32 = (System_String_o *)StringLiteral_20551/*"img_bg_pp"*/;
LABEL_51:
      AtlasManager__SetShopBanner_41321904(v31, v32, 0);
      goto LABEL_55;
  }
  gameObject = this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_116;
  UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0);
  v36 = this->fields.currencySprite;
  gameObject = ShopCurrencyInfoController__GetCurrencySprite(v37, kind, v38);
  if ( !v36 )
    goto LABEL_116;
  UISprite__set_spriteName(v36, (System_String_o *)gameObject, 0);
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
  v76.fields.x = p_currencySpritePosTypeA->fields.x;
  v76.fields.y = *p_y;
  v76.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v76, 0);
  gameObject = this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_116;
  v42 = (ShopCurrencyInfoController_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                                          gameObject,
                                          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
  v43 = this->fields.currencyLabel;
  gameObject = ShopCurrencyInfoController__GetCurrencyNumber(v42, kind, v44);
  if ( !v43 )
    goto LABEL_116;
  UILabel__set_text(v43, (System_String_o *)gameObject, 0);
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
      v47 = state - 15;
      v48 = (unsigned int)(state - 15) < 7;
      GameObjectExtensions__SetLocalPosition_36745168(this->fields.itemInfo1, 0.0, 0.0, 0);
      gameObject = this->fields.itemInfo2;
      if ( !gameObject )
        goto LABEL_116;
      v49 = (0x59u >> v47) & v48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v49, 0);
      if ( v49 )
      {
        GameObjectExtensions__SetLocalPosition_36745168(this->fields.itemInfo1, -90.0, 0.0, 0);
        GameObjectExtensions__SetLocalPosition_36745168(this->fields.itemInfo2, 90.0, 0.0, 0);
        switch ( v47 )
        {
          case 0:
          case 6:
            gameObject = this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_116;
            UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0);
            currencySprite2 = this->fields.currencySprite2;
            gameObject = ShopCurrencyInfoController__GetCurrencySprite(v53, 2, v54);
            if ( !currencySprite2 )
              goto LABEL_116;
            UISprite__set_spriteName(currencySprite2, (System_String_o *)gameObject, 0);
            v55 = 2;
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
            v73 = (ShopCurrencyInfoController_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject
                                                                                            + 840LL))(
                                                    gameObject,
                                                    *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
            currencyLabel2 = this->fields.currencyLabel2;
            gameObject = ShopCurrencyInfoController__GetCurrencyNumber(v73, v55, v75);
            if ( !currencyLabel2 )
              goto LABEL_116;
            UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0);
            break;
          case 3:
            v69 = this->fields.currencySprite2;
            v70 = ShopCurrencyInfoController__GetCurrencySprite(v50, 17, v51);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_41321904(v69, v70, 0);
            v55 = 17;
            goto LABEL_111;
          case 4:
            v71 = this->fields.currencySprite2;
            v72 = ShopCurrencyInfoController__GetCurrencySprite(v50, 19, v51);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_41321904(v71, v72, 0);
            v55 = 19;
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
  const MethodInfo *targetId; // x1
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  System_Collections_Generic_List_int__o *v17; // x22
  int max_length; // w8
  unsigned int v19; // w25
  EventItemDisplayEntity_o *v20; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v24; // x23
  signed __int64 v25; // x23
  char v26; // w25
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  UIWidget_o *shopEventItemWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v31; // x24
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v33; // x8
  EventItemComponent_o *v34; // x25
  struct EventItemComponent_array *v35; // x8
  UnityEngine_Transform_o *transform; // x25
  UIWidget_o *shopEventItemLimitOverWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v39; // x24
  unsigned __int64 v40; // x9
  Il2CppClass **v41; // x8
  EventItemComponent_o *v42; // x25
  struct EventItemComponent_array *v43; // x8
  UnityEngine_Transform_o *v44; // x25
  UnityEngine_Object_o *infoPanel; // x20
  float z; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v49; // s9
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PanelPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o EventItemPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2CB1D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventItemDisplayMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&EventItemWindowMaker_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CB1D = 1;
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
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, targetId) )
      {
        case 4:
          v51 = 2;
          goto LABEL_108;
        case 8:
          v51 = 7;
          goto LABEL_108;
        case 9:
          v51 = 8;
          goto LABEL_108;
        case 10:
          v51 = 9;
          goto LABEL_108;
        case 12:
          v51 = 13;
LABEL_108:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v51, 0, v50);
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
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_109;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C93D34(gameObject);
      v20 = ListByEventIdAndScreenFlag->m_Items[v19];
      if ( !v20 )
        break;
      if ( v20->fields.pointType == 1 )
      {
        if ( !v17 )
          break;
        targetId = (const MethodInfo *)(unsigned int)v20->fields.targetId;
        items = v17->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            (int32_t)targetId,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = (int)targetId;
        }
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_25;
    }
LABEL_109:
    sub_1C93D2C(gameObject, targetId);
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
    v24 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel,
                                           0);
    if ( !gameObject )
      goto LABEL_109;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    PanelPosition = EventItemWindowMaker__GetPanelPosition(localPosition, 0);
    if ( !v24 )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition(v24, PanelPosition, 0);
  }
  if ( !v17 )
    goto LABEL_109;
  v25 = v17->fields._size;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(v25, isForcedAdjustment, 0);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_109;
  v26 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v26 & 1) == 0, 0);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v26 & 1, 0);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_109;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v26 & 1, v27);
    if ( (v26 & 1) == 0 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                             isEventShop,
                                             v25,
                                             isForcedAdjustment,
                                             0);
      if ( !shopEventItemWindow )
        goto LABEL_109;
      UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_109;
      v31 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(shopEventItemDrawList->max_length);
        if ( (__int64)v31 >= (int)max_length_low )
          goto LABEL_86;
        if ( v31 >= max_length_low )
          goto LABEL_110;
        v33 = &shopEventItemDrawList->obj.klass + v31;
        v34 = (EventItemComponent_o *)v33[4];
        if ( (__int64)v31 >= v25 )
        {
          if ( !v34 )
            goto LABEL_109;
          EventItemComponent__Clear((EventItemComponent_o *)v33[4], 0);
        }
        else
        {
          gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                 v17,
                                                 v31,
                                                 (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v34 )
            goto LABEL_109;
          EventItemComponent__Set(v34, (int32_t)gameObject, 0);
          v35 = this->fields.shopEventItemDrawList;
          if ( !v35 )
            goto LABEL_109;
          if ( v31 >= LODWORD(v35->max_length) )
            goto LABEL_110;
          gameObject = v35->m_Items[v31];
          if ( !gameObject )
            goto LABEL_109;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
          if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          EventItemPosition = EventItemWindowMaker__GetEventItemPosition(isEventShop, v31, v25, isForcedAdjustment, 0);
          if ( !transform )
            goto LABEL_109;
          UnityEngine_Transform__set_localPosition(transform, EventItemPosition, 0);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v31;
        if ( !shopEventItemDrawList )
          goto LABEL_109;
      }
    }
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v26 & 1, v28);
    if ( (v26 & 1) == 0 )
      goto LABEL_45;
  }
  shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                         isEventShop,
                                         v25,
                                         isForcedAdjustment,
                                         0);
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_109;
  UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_109;
  v39 = 0;
  while ( 1 )
  {
    v40 = LODWORD(shopEventItemDrawLimitOverList->max_length);
    if ( (__int64)v39 >= (int)v40 )
      break;
    if ( v39 >= v40 )
      goto LABEL_110;
    v41 = &shopEventItemDrawLimitOverList->obj.klass + v39;
    v42 = (EventItemComponent_o *)v41[4];
    if ( (__int64)v39 >= v25 )
    {
      if ( !v42 )
        goto LABEL_109;
      EventItemComponent__Clear((EventItemComponent_o *)v41[4], 0);
    }
    else
    {
      gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                             v17,
                                             v39,
                                             (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v42 )
        goto LABEL_109;
      EventItemComponent__Set(v42, (int32_t)gameObject, 0);
      v43 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v43 )
        goto LABEL_109;
      if ( v39 >= LODWORD(v43->max_length) )
        goto LABEL_110;
      gameObject = v43->m_Items[v39];
      if ( !gameObject )
        goto LABEL_109;
      v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v56 = EventItemWindowMaker__GetEventItemPosition(isEventShop, v39, v25, isForcedAdjustment, 0);
      if ( !v44 )
        goto LABEL_109;
      UnityEngine_Transform__set_localPosition(v44, v56, 0);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v39;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_109;
  }
LABEL_86:
  if ( isEventShop )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    this->fields._ItemBaseWindowHeight_k__BackingField = EventItemWindowMaker__GetItemBaseWindowHeight(
                                                           v25,
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
      z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0).fields.z;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_109;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v49 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
      if ( !gameObject )
        goto LABEL_109;
      v53.fields.x = v49;
      v53.fields.z = z;
      v53.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v53, 0);
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
  __int64 v10; // x1
  System_Int32_array *EventItemList; // x22
  bool IsForcedAdjustmentDialog; // w5
  const MethodInfo *v13; // x6

  if ( (byte_4D2CB1C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CB1C = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       eventId,
                       (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0 )
    {
      sub_1C93D2C(Instance, v10);
    }
    IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Instance, 0);
    ShopCurrencyInfoController__RefreshEventItemInfo(
      this,
      6,
      eventId,
      isEventShop,
      EventItemList,
      IsForcedAdjustmentDialog,
      v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopCurrencyInfoController__ResetEventEnableTime(
        ShopCurrencyInfoController_o *this,
        bool isLimitOver,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ShopCurrencyInfoController_o *v9; // x19
  __int64 v10; // x8
  struct UILabel_o *v11; // x1
  ShopCurrencyInfoController_o **p_eventItemTimeLabel; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x8
  struct UILabel_o *v20; // x1
  GrandQuestFolderBoardItem_o *p_eventItemRestLabel; // x19

  v9 = this;
  if ( (byte_4D2CB23 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CB23 = 1;
  }
  v10 = 160;
  if ( isLimitOver )
    v10 = 176;
  if ( !v9 )
    goto LABEL_11;
  v11 = *(struct UILabel_o **)((char *)&v9->klass + v10);
  v9->fields.eventItemTimeLabel = v11;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v9->fields.eventItemTimeLabel;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v9->fields.eventItemTimeLabel,
    (int32_t)v11,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = 168;
  if ( isLimitOver )
    v19 = 184;
  v20 = *(struct UILabel_o **)((char *)&v9->klass + v19);
  v9->fields.eventItemRestLabel = v20;
  p_eventItemRestLabel = (GrandQuestFolderBoardItem_o *)&v9->fields.eventItemRestLabel;
  sub_1C93A78(p_eventItemRestLabel, (int32_t)v20, v13, v14, v15, v16, v17, v18);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0),
        (this = (ShopCurrencyInfoController_o *)p_eventItemRestLabel->klass) == 0) )
  {
LABEL_11:
    sub_1C93D2C(this, isLimitOver);
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopCurrencyInfoController__SetEventEnableTime(
        ShopCurrencyInfoController_o *this,
        int32_t eventId,
        bool isLimitOver,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ShopCurrencyInfoController_o *v10; // x19
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  char v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x8
  struct UILabel_o *v20; // x1
  ShopCurrencyInfoController_o *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1

  v10 = this;
  if ( (byte_4D2CB22 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1C93AD4(&StringLiteral_15292/*"UpdateRemainTime"*/);
    byte_4D2CB22 = 1;
  }
  v11 = 160;
  if ( isLimitOver )
    v11 = 176;
  if ( !v10 )
    sub_1C93D2C(this, *(_QWORD *)&eventId);
  v12 = *(struct UILabel_o **)((char *)&v10->klass + v11);
  v10->fields.eventItemTimeLabel = v12;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v10->fields.eventItemTimeLabel,
    (int32_t)v12,
    isLimitOver,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v19 = 168;
  if ( isLimitOver )
    v19 = 184;
  v20 = *(struct UILabel_o **)((char *)&v10->klass + v19);
  v10->fields.eventItemRestLabel = v20;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v10->fields.eventItemRestLabel,
    (int32_t)v20,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v10->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v21, eventId, v22);
  ShopCurrencyInfoController__UpdateRemainTime(v10, v23);
  UnityEngine_MonoBehaviour__CancelInvoke_72104408(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15292/*"UpdateRemainTime"*/,
    0);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15292/*"UpdateRemainTime"*/,
    1.0,
    1.0,
    0);
}


void ShopCurrencyInfoController__SetEventItemRestTimeLabels(
        ShopCurrencyInfoController_o *this,
        UILabel_o *restLabel,
        UILabel_o *timeLabel,
        const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_o **p_eventEntity; // x23
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int64_t finishedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v13; // x8
  System_Func_object__long__o *_9__51_0; // x24
  Il2CppObject *v15; // x25
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int64_t v23; // x0
  int64_t Time; // x23
  _BOOL4 v26; // w24
  System_String_o **v27; // x8
  struct System_String_o *mText; // x8
  unsigned int v29; // w8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2CB27 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Max_ShopEntity___);
    sub_1C93AD4(&System_Func_ShopEntity__long__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__51_0__);
    sub_1C93AD4(&ShopCurrencyInfoController___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_13493/*"TIME_OVER_EVENTREWARD"*/);
    sub_1C93AD4(&StringLiteral_12215/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_13515/*"TIME_REST_EVENTREWARD"*/);
    byte_4D2CB27 = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SHOP_INDEFINITE_PERIOD"*/, 0);
    if ( !timeLabel )
      goto LABEL_50;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !*p_eventEntity || !Instance )
      goto LABEL_50;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              (*p_eventEntity)->fields.id,
                                                                              0);
    v13 = ShopCurrencyInfoController___c_TypeInfo;
    if ( !ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo);
      v13 = ShopCurrencyInfoController___c_TypeInfo;
    }
    _9__51_0 = (System_Func_object__long__o *)v13->static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = ShopCurrencyInfoController___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__51_0 = (System_Func_object__long__o *)sub_1C93D20(System_Func_ShopEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__51_0,
        v15,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__51_0__,
        0);
      static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = (struct System_Func_ShopEntity__long__o *)_9__51_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__51_0,
        (int32_t)_9__51_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = System_Linq_Enumerable__Max_object__52241652(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__51_0,
            (const MethodInfo_31D24F4 *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v23 && v23 > 0 )
      finishedAt = v23;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1, 0);
    if ( !timeLabel )
LABEL_50:
      sub_1C93D2C(Instance, v10);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v26 = this->fields.isRarePriShopPurchased || finishedAt < Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = (System_String_o **)&StringLiteral_13515/*"TIME_REST_EVENTREWARD"*/;
  if ( v26 )
    v27 = (System_String_o **)&StringLiteral_13493/*"TIME_OVER_EVENTREWARD"*/;
  Instance = (DataManager_o *)LocalizationManager__Get(*v27, 0);
  if ( !restLabel )
    goto LABEL_50;
  UILabel__set_text(restLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_50;
  v30.fields.x = -59.0;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v30.fields.x = 0.0;
    v29 = mText->fields._stringLength - 2;
    if ( v29 <= 2 )
      LODWORD(v30.fields.x) = dword_D344BC[v29];
  }
  if ( !Instance )
    goto LABEL_50;
  v30.fields.y = -1.7;
  v30.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v30, 0);
}


void ShopCurrencyInfoController__SetObjectList(
        ShopCurrencyInfoController_o *this,
        System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.objectList = objectList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.objectList,
    (int32_t)objectList,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopCurrencyInfoController__StopUpdateRemainTime(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CB24 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15292/*"UpdateRemainTime"*/);
    byte_4D2CB24 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_72104408(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15292/*"UpdateRemainTime"*/,
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
  __int64 v8; // x1

  if ( (byte_4D2CB1F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CB1F = 1;
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
      sub_1C93D2C(CurrencyNumber, v8);
    UILabel__set_text(v6, CurrencyNumber, 0);
  }
}


void ShopCurrencyInfoController__UpdateRemainTime(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w20
  Il2CppObject *Item; // x21

  if ( (byte_4D2CB26 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CB26 = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_13:
    sub_1C93D2C(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_13;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      if ( !objectList )
        goto LABEL_13;
      ShopBuyItemListViewObject__UpdateRemaingTime((ShopBuyItemListViewObject_o *)objectList, v4);
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2CB28 & 1) == 0 )
  {
    sub_1C93AD4(&ShopCurrencyInfoController___c_TypeInfo);
    byte_4D2CB28 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ShopCurrencyInfoController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopCurrencyInfoController___c_TypeInfo->static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
  return x->fields.closedAt;
}