void __fastcall ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.x = xmmword_B70DF0;
  *(_QWORD *)&this->fields.currencySpritePosTypeB.fields.y = 1110441984LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall ShopCurrencyInfoController__GetApSpritePosition(
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopCurrencyInfoController__GetCurrencyNumber(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserGameEntity_o *SelfUserGame; // x21
  int64_t Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  int v14; // w8
  UserItemMaster_o *v15; // x19
  int32_t mana; // w19
  LocalizationManager_c *v17; // x0
  int32_t monitor; // w2
  int64_t v20; // x1
  UserItemMaster_o *v21; // x0
  int64_t v22; // x20

  if ( (byte_48DEF40 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B00CCC(&StringLiteral_1207/*"0"*/, v9);
    byte_48DEF40 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_57:
    sub_1B00F28(Instance, v12);
  }
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v14 = kind - 2;
  v15 = (UserItemMaster_o *)Instance;
  switch ( v14 )
  {
    case 0:
    case 8:
    case 9:
      if ( !SelfUserGame )
        goto LABEL_57;
      mana = SelfUserGame->fields.mana;
      goto LABEL_10;
    case 5:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object || !v15 )
        goto LABEL_57;
      monitor = (int32_t)MasterData_object[5].monitor;
      goto LABEL_23;
    case 6:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object || !v15 )
        goto LABEL_57;
      monitor = HIDWORD(MasterData_object[5].monitor);
LABEL_23:
      v20 = Instance;
      v21 = v15;
      goto LABEL_51;
    case 7:
    case 12:
    case 18:
      if ( !SelfUserGame )
        goto LABEL_57;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v17 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        goto LABEL_55;
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    case 11:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v22 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_57;
      monitor = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_50;
    case 14:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v22 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_57;
      monitor = BalanceConfig_TypeInfo->static_fields->itemIdForShop13;
      goto LABEL_50;
    case 15:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v22 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_57;
      monitor = BalanceConfig_TypeInfo->static_fields->ApSeedItemId;
      goto LABEL_50;
    case 16:
      if ( !SelfUserGame )
        goto LABEL_57;
      mana = UserGameEntity__getAct(SelfUserGame, 0LL);
      goto LABEL_53;
    case 17:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v22 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_57;
      monitor = BalanceConfig_TypeInfo->static_fields->itemIdForShop15;
LABEL_50:
      v21 = v15;
      v20 = v22;
LABEL_51:
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v21, v20, monitor, 0LL);
      if ( !Instance )
        goto LABEL_57;
      mana = *(_DWORD *)(Instance + 28);
LABEL_53:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        v17 = LocalizationManager_TypeInfo;
LABEL_55:
        j_il2cpp_runtime_class_init_0(v17);
      }
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    default:
      return (System_String_o *)StringLiteral_1207/*"0"*/;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopCurrencyInfoController__GetCurrencySprite(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o **v12; // x8

  if ( (byte_48DEF3F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_19990/*"img_bg_seed"*/, *(_QWORD *)&kind);
    sub_1B00CCC(&StringLiteral_19985/*"img_bg_mp"*/, v4);
    sub_1B00CCC(&StringLiteral_19982/*"img_bg_evocation"*/, v5);
    sub_1B00CCC(&StringLiteral_19983/*"img_bg_fragments"*/, v6);
    sub_1B00CCC(&StringLiteral_19975/*"img_bg_ap"*/, v7);
    sub_1B00CCC(&StringLiteral_19988/*"img_bg_rp"*/, v8);
    sub_1B00CCC(&StringLiteral_19984/*"img_bg_hgd"*/, v9);
    sub_1B00CCC(&StringLiteral_1/*""*/, v10);
    sub_1B00CCC(&StringLiteral_19992/*"img_bg_spsummon"*/, v11);
    byte_48DEF3F = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x12 )
    v12 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v12 = (System_String_o **)*(&off_4357C90 + kind - 2);
  return *v12;
}


UnityEngine_Vector3_o __fastcall ShopCurrencyInfoController__GetCurrencySpritePosition(
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

  if ( (unsigned int)kind > 0x14 || ((1 << kind) & 0x1F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopCurrencyInfoController__GetIsRarePriShopPurchased(
        ShopCurrencyInfoController_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *v11; // x20
  bool IsTimeStatusRecord; // w0
  bool v13; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48DEF44 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_48DEF44 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  v11 = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
      if ( !v11 || IsTimeStatusRecord )
        return 0;
      goto LABEL_15;
    }
LABEL_18:
    sub_1B00F28(Instance, v9);
  }
  if ( !v11 )
    return 0;
LABEL_15:
  v13 = 1;
  if ( !UserEventEntity__getEventFlag(v11, 1, 0LL) )
    return 0;
  return v13;
}


bool __fastcall ShopCurrencyInfoController__GetIsShowCurrencyWindow(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( (unsigned int)(kind - 2) > 0x12 )
    LOBYTE(v3) = 0;
  else
    return (0x6DBE1u >> (kind - 2)) & 1;
  return v3;
}


UnityEngine_Vector3_o __fastcall ShopCurrencyInfoController__GetRestLabelPosition(
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
      v5 = flt_BA95FC[textCount - 2];
  }
  v6 = -1.7;
  v7 = 0.0;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopCurrencyInfoController__RefreshCurrencyInfo(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *shopEventItemWindow; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x22
  UnityEngine_Object_o *currencyWindow; // x22
  UnityEngine_Object_o *currencySprite; // x22
  UnityEngine_Object_o *currencyLabel; // x22
  UnityEngine_Object_o *baseAtlas; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *v22; // x22
  bool IsShowCurrencyWindow; // w0
  ShopCurrencyInfoController_o *v24; // x0
  const MethodInfo *v25; // x2
  struct UISprite_o *v26; // x22
  UISprite_o *v27; // x0
  System_String_o *v28; // x1
  struct UISprite_o *v29; // x22
  int32_t v30; // w1
  System_String_o *v31; // x23
  UISprite_o *v32; // x22
  ShopCurrencyInfoController_o *v33; // x0
  const MethodInfo *v34; // x2
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeA; // x8
  float *p_y; // x9
  float *p_z; // x10
  ShopCurrencyInfoController_o *v38; // x0
  UILabel_o *v39; // x22
  const MethodInfo *v40; // x2
  UnityEngine_Object_o *itemInfo1; // x21
  UnityEngine_Object_o *itemInfo2; // x21
  _BOOL4 v43; // w21
  ShopCurrencyInfoController_o *v44; // x0
  const MethodInfo *v45; // x2
  UISprite_o *v46; // x20
  ShopCurrencyInfoController_o *v47; // x0
  const MethodInfo *v48; // x2
  int32_t v49; // w20
  UISprite_o *currencySprite2; // x20
  System_String_o *v51; // x21
  ShopCurrencyInfoController_o *v52; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v54; // x2
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DEF3D & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_19986/*"img_bg_pp"*/, v8);
    byte_48DEF3D = 1;
  }
  this->fields.kind = kind;
  shopEventItemWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopEventItemWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindow;
    if ( !gameObject )
      goto LABEL_80;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemLimitOverWindow;
    if ( !gameObject )
      goto LABEL_80;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_80;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currencyWindow, 0LL, 0LL) )
    return;
  currencySprite = (UnityEngine_Object_o *)this->fields.currencySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currencySprite, 0LL, 0LL) )
    return;
  currencyLabel = (UnityEngine_Object_o *)this->fields.currencyLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currencyLabel, 0LL, 0LL) )
    return;
  baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v19 = this->fields.currencySprite;
    if ( !v19 )
      goto LABEL_80;
    mAtlas = v19->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v17, v18);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel;
  if ( !gameObject )
    goto LABEL_80;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencyWindow;
  if ( !gameObject )
    goto LABEL_80;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_80;
  v22 = (UnityEngine_GameObject_o *)gameObject;
  IsShowCurrencyWindow = ShopCurrencyInfoController__GetIsShowCurrencyWindow(
                           (ShopCurrencyInfoController_o *)gameObject,
                           kind,
                           v21);
  UnityEngine_GameObject__SetActive(v22, IsShowCurrencyWindow, 0LL);
  if ( kind == 19 )
  {
    v29 = this->fields.currencySprite;
    v30 = 19;
LABEL_41:
    v31 = ShopCurrencyInfoController__GetCurrencySprite(v24, v30, v25);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v27 = v29;
    v28 = v31;
    goto LABEL_44;
  }
  if ( kind == 17 )
  {
    v29 = this->fields.currencySprite;
    v30 = 17;
    goto LABEL_41;
  }
  if ( kind != 16 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
    if ( !gameObject )
      goto LABEL_80;
    UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
    v32 = this->fields.currencySprite;
    gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v33, kind, v34);
    if ( !v32 )
      goto LABEL_80;
    UISprite__set_spriteName(v32, (System_String_o *)gameObject, 0LL);
    goto LABEL_48;
  }
  v26 = this->fields.currencySprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v27 = v26;
  v28 = (System_String_o *)StringLiteral_19986/*"img_bg_pp"*/;
LABEL_44:
  AtlasManager__SetShopBanner_36658392(v27, v28, 0LL);
LABEL_48:
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_80;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( (unsigned int)kind > 0x14 || ((1 << kind) & 0x1F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeA;
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    if ( !gameObject )
      goto LABEL_80;
  }
  else
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeB;
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    if ( !gameObject )
      goto LABEL_80;
  }
  v55.fields.x = p_currencySpritePosTypeA->fields.x;
  v55.fields.y = *p_y;
  v55.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v55, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_80;
  v38 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                          gameObject,
                                          gameObject->klass[2]._1.interopData);
  v39 = this->fields.currencyLabel;
  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v38, kind, v40);
  if ( !v39 )
    goto LABEL_80;
  UILabel__set_text(v39, (System_String_o *)gameObject, 0LL);
  itemInfo1 = (UnityEngine_Object_o *)this->fields.itemInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemInfo1, 0LL, 0LL) )
  {
    itemInfo2 = (UnityEngine_Object_o *)this->fields.itemInfo2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(itemInfo2, 0LL, 0LL) )
    {
      GameObjectExtensions__SetLocalPosition_32535464(this->fields.itemInfo1, 0.0, 0.0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.itemInfo2;
      if ( !gameObject )
        goto LABEL_80;
      v43 = (0x51u >> (state - 15)) & ((unsigned int)(state - 15) < 7);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v43, 0LL);
      if ( v43 )
      {
        GameObjectExtensions__SetLocalPosition_32535464(this->fields.itemInfo1, -90.0, 0.0, 0LL);
        GameObjectExtensions__SetLocalPosition_32535464(this->fields.itemInfo2, 90.0, 0.0, 0LL);
        switch ( state )
        {
          case 21:
            goto LABEL_65;
          case 19:
            currencySprite2 = this->fields.currencySprite2;
            v51 = ShopCurrencyInfoController__GetCurrencySprite(v44, 18, v45);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_36658392(currencySprite2, v51, 0LL);
            v49 = 18;
LABEL_75:
            gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)gameObject,
                  this->fields.currencySpritePosTypeA,
                  0LL);
                gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
                if ( gameObject )
                {
                  v52 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                                          gameObject,
                                                          gameObject->klass[2]._1.interopData);
                  currencyLabel2 = this->fields.currencyLabel2;
                  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v52, v49, v54);
                  if ( currencyLabel2 )
                  {
                    UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_80:
            sub_1B00F28(gameObject, v10);
          case 15:
LABEL_65:
            gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_80;
            UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
            v46 = this->fields.currencySprite2;
            gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v47, 2, v48);
            if ( !v46 )
              goto LABEL_80;
            UISprite__set_spriteName(v46, (System_String_o *)gameObject, 0LL);
            v49 = 2;
            goto LABEL_75;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopCurrencyInfoController__RefreshEventItemInfo(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t eventId,
        bool isEventShop,
        System_Int32_array *eventItemList,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Object_o *currencyWindow; // x25
  EventItemComponent_o *gameObject; // x0
  const MethodInfo *targetId; // x1
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  System_Collections_Generic_List_int__o *v27; // x22
  int max_length; // w8
  unsigned int v29; // w25
  EventItemDisplayEntity_o *v30; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v34; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v38; // s0
  signed __int64 v41; // x23
  char v42; // w25
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  UIWidget_o *shopEventItemWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v47; // x24
  unsigned __int64 v48; // x9
  Il2CppClass **v49; // x8
  EventItemComponent_o *v50; // x25
  struct EventItemComponent_array *v51; // x8
  UnityEngine_Transform_o *transform; // x25
  int v53; // s0
  UIWidget_o *shopEventItemLimitOverWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v58; // x24
  unsigned __int64 v59; // x9
  Il2CppClass **v60; // x8
  EventItemComponent_o *v61; // x25
  struct EventItemComponent_array *v62; // x8
  UnityEngine_Transform_o *v63; // x25
  int v64; // s0
  UnityEngine_Object_o *infoPanel; // x20
  float v68; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v71; // s9
  const MethodInfo *v72; // x3
  int32_t v73; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DEF3C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, v13);
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1B00CCC(&EventItemWindowMaker_TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v21);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_48DEF3C = 1;
  }
  this->fields.eventId = eventId;
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (EventItemComponent_o *)UnityEngine_Object__op_Inequality(currencyWindow, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !eventItemList )
      goto LABEL_107;
    if ( !*(_QWORD *)&eventItemList->max_length )
    {
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, targetId) )
      {
        case 4:
          v73 = 2;
          goto LABEL_106;
        case 8:
          v73 = 7;
          goto LABEL_106;
        case 9:
          v73 = 8;
          goto LABEL_106;
        case 10:
          v73 = 9;
          goto LABEL_106;
        case 12:
          v73 = 13;
LABEL_106:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v73, 0, v72);
          return;
        default:
          break;
      }
    }
    gameObject = (EventItemComponent_o *)this->fields.currencyWindow;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  this->fields.kind = kind;
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_107;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0LL);
  v27 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_107;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
LABEL_108:
        sub_1B00F30(gameObject, targetId);
      v30 = ListByEventIdAndScreenFlag->m_Items[v29];
      if ( !v30 )
        break;
      if ( v30->fields.pointType == 1 )
      {
        if ( !v27 )
          break;
        targetId = (const MethodInfo *)(unsigned int)v30->fields.targetId;
        items = v27->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++v27->fields._version;
        if ( !items )
          break;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v27,
            (int32_t)targetId,
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v27->fields._size = size + 1;
          items->m_Items[size + 1] = (int)targetId;
        }
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_25;
    }
LABEL_107:
    sub_1B00F28(gameObject, targetId);
  }
LABEL_25:
  if ( isEventShop )
  {
    gameObject = (EventItemComponent_o *)this->fields.shopEventItemWindowPanel;
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !this->fields.shopEventItemWindowPanel )
      goto LABEL_107;
    v34 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel,
                                           0LL);
    if ( !gameObject )
      goto LABEL_107;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v75.fields.x = x;
    v75.fields.y = y;
    v75.fields.z = z;
    *(UnityEngine_Vector3_o *)&v38 = EventItemWindowMaker__GetPanelPosition(v75, 0LL);
    if ( !v34 )
      goto LABEL_107;
    UnityEngine_Transform__set_localPosition(v34, *(UnityEngine_Vector3_o *)&v38, 0LL);
  }
  if ( !v27 )
    goto LABEL_107;
  v41 = v27->fields._size;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(v41, isForcedAdjustment, 0LL);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_107;
  v42 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0LL);
  if ( !gameObject )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v42 & 1) == 0, 0LL);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v42 & 1, 0LL);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_107;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0LL) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v42 & 1, v43);
    if ( (v42 & 1) == 0 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                             isEventShop,
                                             v41,
                                             isForcedAdjustment,
                                             0LL);
      if ( !shopEventItemWindow )
        goto LABEL_107;
      UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0LL);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_107;
      v47 = 0LL;
      while ( 1 )
      {
        v48 = shopEventItemDrawList->max_length;
        if ( (__int64)v47 >= (int)v48 )
          goto LABEL_86;
        if ( v47 >= v48 )
          goto LABEL_108;
        v49 = &shopEventItemDrawList->obj.klass + v47;
        v50 = (EventItemComponent_o *)v49[4];
        if ( (__int64)v47 >= v41 )
        {
          if ( !v50 )
            goto LABEL_107;
          EventItemComponent__Clear((EventItemComponent_o *)v49[4], 0LL);
        }
        else
        {
          gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                 v27,
                                                 v47,
                                                 (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v50 )
            goto LABEL_107;
          EventItemComponent__Set(v50, (int32_t)gameObject, 0LL);
          v51 = this->fields.shopEventItemDrawList;
          if ( !v51 )
            goto LABEL_107;
          if ( v47 >= v51->max_length )
            goto LABEL_108;
          gameObject = v51->m_Items[v47];
          if ( !gameObject )
            goto LABEL_107;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          *(UnityEngine_Vector3_o *)&v53 = EventItemWindowMaker__GetEventItemPosition(
                                             isEventShop,
                                             v47,
                                             v41,
                                             isForcedAdjustment,
                                             0LL);
          if ( !transform )
            goto LABEL_107;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v53, 0LL);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v47;
        if ( !shopEventItemDrawList )
          goto LABEL_107;
      }
    }
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v42 & 1, v44);
    if ( (v42 & 1) == 0 )
      goto LABEL_45;
  }
  shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                         isEventShop,
                                         v41,
                                         isForcedAdjustment,
                                         0LL);
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_107;
  UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0LL);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_107;
  v58 = 0LL;
  while ( 1 )
  {
    v59 = shopEventItemDrawLimitOverList->max_length;
    if ( (__int64)v58 >= (int)v59 )
      break;
    if ( v58 >= v59 )
      goto LABEL_108;
    v60 = &shopEventItemDrawLimitOverList->obj.klass + v58;
    v61 = (EventItemComponent_o *)v60[4];
    if ( (__int64)v58 >= v41 )
    {
      if ( !v61 )
        goto LABEL_107;
      EventItemComponent__Clear((EventItemComponent_o *)v60[4], 0LL);
    }
    else
    {
      gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                             v27,
                                             v58,
                                             (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v61 )
        goto LABEL_107;
      EventItemComponent__Set(v61, (int32_t)gameObject, 0LL);
      v62 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v62 )
        goto LABEL_107;
      if ( v58 >= v62->max_length )
        goto LABEL_108;
      gameObject = v62->m_Items[v58];
      if ( !gameObject )
        goto LABEL_107;
      v63 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      *(UnityEngine_Vector3_o *)&v64 = EventItemWindowMaker__GetEventItemPosition(
                                         isEventShop,
                                         v58,
                                         v41,
                                         isForcedAdjustment,
                                         0LL);
      if ( !v63 )
        goto LABEL_107;
      UnityEngine_Transform__set_localPosition(v63, *(UnityEngine_Vector3_o *)&v64, 0LL);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v58;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_107;
  }
LABEL_86:
  if ( isEventShop )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    this->fields._ItemBaseWindowHeight_k__BackingField = EventItemWindowMaker__GetItemBaseWindowHeight(
                                                           v41,
                                                           isForcedAdjustment,
                                                           0LL);
    infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
    {
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_107;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_107;
      v76 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
      v68 = v76.fields.z;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_107;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v71 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_107;
      v77.fields.x = v71;
      v77.fields.z = v68;
      v77.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v77, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopCurrencyInfoController__RefreshEventItemWindow(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t eventId,
        bool isEventShop,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Int32_array *EventItemList; // x22
  bool IsForcedAdjustmentDialog; // w5
  const MethodInfo *v16; // x6

  if ( (byte_48DEF3B & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_48DEF3B = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       eventId,
                       (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
    {
      sub_1B00F28(Instance, v13);
    }
    IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Instance, 0LL);
    ShopCurrencyInfoController__RefreshEventItemInfo(
      this,
      6,
      eventId,
      isEventShop,
      EventItemList,
      IsForcedAdjustmentDialog,
      v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopCurrencyInfoController__ResetEventEnableTime(
        ShopCurrencyInfoController_o *this,
        bool isLimitOver,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ShopCurrencyInfoController_o *v5; // x19
  __int64 v6; // x8
  struct UILabel_o *v7; // x1
  ShopCurrencyInfoController_o **p_eventItemTimeLabel; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  ServantStatusBattleListViewItem_o *p_eventItemRestLabel; // x19

  v5 = this;
  if ( (byte_48DEF42 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1B00CCC(&StringLiteral_1/*""*/, isLimitOver);
    byte_48DEF42 = 1;
  }
  v6 = 160LL;
  if ( isLimitOver )
    v6 = 176LL;
  if ( !v5 )
    goto LABEL_11;
  v7 = *(struct UILabel_o **)((char *)&v5->klass + v6);
  v5->fields.eventItemTimeLabel = v7;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v5->fields.eventItemTimeLabel;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.eventItemTimeLabel, (int32_t)v7, (int32_t)method, v3);
  v11 = 168LL;
  if ( isLimitOver )
    v11 = 184LL;
  v12 = *(struct UILabel_o **)((char *)&v5->klass + v11);
  v5->fields.eventItemRestLabel = v12;
  p_eventItemRestLabel = (ServantStatusBattleListViewItem_o *)&v5->fields.eventItemRestLabel;
  sub_1B00C70(p_eventItemRestLabel, (int32_t)v12, v9, v10);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (this = (ShopCurrencyInfoController_o *)p_eventItemRestLabel->klass) == 0LL) )
  {
LABEL_11:
    sub_1B00F28(this, isLimitOver);
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopCurrencyInfoController__SetEventEnableTime(
        ShopCurrencyInfoController_o *this,
        int32_t eventId,
        bool isLimitOver,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *v6; // x19
  __int64 v7; // x8
  struct UILabel_o *v8; // x1
  char v9; // w2
  int32_t v10; // w3
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  ShopCurrencyInfoController_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  v6 = this;
  if ( (byte_48DEF41 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1B00CCC(&StringLiteral_14958/*"UpdateRemainTime"*/, *(_QWORD *)&eventId);
    byte_48DEF41 = 1;
  }
  v7 = 160LL;
  if ( isLimitOver )
    v7 = 176LL;
  if ( !v6 )
    sub_1B00F28(this, *(_QWORD *)&eventId);
  v8 = *(struct UILabel_o **)((char *)&v6->klass + v7);
  v6->fields.eventItemTimeLabel = v8;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v6->fields.eventItemTimeLabel,
    (int32_t)v8,
    isLimitOver,
    (int32_t)method);
  v11 = 168LL;
  if ( isLimitOver )
    v11 = 184LL;
  v12 = *(struct UILabel_o **)((char *)&v6->klass + v11);
  v6->fields.eventItemRestLabel = v12;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v6->fields.eventItemRestLabel, (int32_t)v12, v9, v10);
  v6->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v13, eventId, v14);
  ShopCurrencyInfoController__UpdateRemainTime(v6, v15);
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_14958/*"UpdateRemainTime"*/,
    0LL);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_14958/*"UpdateRemainTime"*/,
    1.0,
    1.0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopCurrencyInfoController__SetEventItemRestTimeLabels(
        ShopCurrencyInfoController_o *this,
        UILabel_o *restLabel,
        UILabel_o *timeLabel,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_o **p_eventEntity; // x23
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  int64_t finishedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v26; // x8
  System_Func_T__TResult__o *_9__48_0; // x24
  Il2CppObject *v28; // x25
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int64_t v32; // x0
  int64_t Time; // x23
  _BOOL4 v35; // w24
  System_String_o **v36; // x8
  struct System_String_o *mText; // x8
  int v38; // s0
  unsigned int v39; // w8
  int v40; // s1
  int v41; // s2

  if ( (byte_48DEF46 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventMaster___, restLabel);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_1B00CCC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Max_ShopEntity___, v9);
    sub_1B00CCC(&System_Func_ShopEntity__long__TypeInfo, v10);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v11);
    sub_1B00CCC(&NetworkManager_TypeInfo, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B00CCC(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__, v14);
    sub_1B00CCC(&ShopCurrencyInfoController___c_TypeInfo, v15);
    sub_1B00CCC(&StringLiteral_13088/*"TIME_OVER_EVENTREWARD"*/, v16);
    sub_1B00CCC(&StringLiteral_11868/*"SHOP_INDEFINITE_PERIOD"*/, v17);
    sub_1B00CCC(&StringLiteral_1/*""*/, v18);
    sub_1B00CCC(&StringLiteral_13110/*"TIME_REST_EVENTREWARD"*/, v19);
    byte_48DEF46 = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !timeLabel )
        goto LABEL_50;
      UILabel__set_text(timeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !restLabel )
        goto LABEL_50;
      UILabel__set_text(restLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11868/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
    if ( !timeLabel )
      goto LABEL_50;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !*p_eventEntity || !Instance )
      goto LABEL_50;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              (*p_eventEntity)->fields.id,
                                                                              0LL);
    v26 = ShopCurrencyInfoController___c_TypeInfo;
    if ( !ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo);
      v26 = ShopCurrencyInfoController___c_TypeInfo;
    }
    _9__48_0 = (System_Func_T__TResult__o *)v26->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = ShopCurrencyInfoController___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__48_0 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_ShopEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__48_0,
        v28,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__,
        0LL);
      static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Func_ShopEntity__long__o *)_9__48_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v30, v31);
    }
    v32 = System_Linq_Enumerable__Max_object__47745652(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__48_0,
            (const MethodInfo_2D88A74 *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v32 && v32 > 0 )
      finishedAt = v32;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1LL, 0LL);
    if ( !timeLabel )
LABEL_50:
      sub_1B00F28(Instance, v23);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v35 = this->fields.isRarePriShopPurchased || finishedAt < Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = (System_String_o **)&StringLiteral_13110/*"TIME_REST_EVENTREWARD"*/;
  if ( v35 )
    v36 = (System_String_o **)&StringLiteral_13088/*"TIME_OVER_EVENTREWARD"*/;
  Instance = (DataManager_o *)LocalizationManager__Get(*v36, 0LL);
  if ( !restLabel )
    goto LABEL_50;
  UILabel__set_text(restLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0LL);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_50;
  v38 = -1033109504;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v38 = 0;
    v39 = mText->fields._stringLength - 2;
    if ( v39 <= 2 )
      v38 = LODWORD(flt_BA95FC[v39]);
  }
  if ( !Instance )
    goto LABEL_50;
  v40 = -1076258406;
  v41 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, *(UnityEngine_Vector3_o *)&v38, 0LL);
}


void __fastcall ShopCurrencyInfoController__SetObjectList(
        ShopCurrencyInfoController_o *this,
        System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.objectList = objectList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)objectList, (int32_t)method, v3);
}


void __fastcall ShopCurrencyInfoController__StopUpdateRemainTime(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  if ( (byte_48DEF43 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_14958/*"UpdateRemainTime"*/, method);
    byte_48DEF43 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_14958/*"UpdateRemainTime"*/,
    0LL);
}


void __fastcall ShopCurrencyInfoController__Update(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( this->fields.kind == 17 )
    ShopCurrencyInfoController__UpdateApLabel(this, method);
}


void __fastcall ShopCurrencyInfoController__UpdateApLabel(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currencyLabel2; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  UILabel_o *v6; // x19
  System_String_o *CurrencyNumber; // x0
  __int64 v8; // x1

  if ( (byte_48DEF3E & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DEF3E = 1;
  }
  currencyLabel2 = (UnityEngine_Object_o *)this->fields.currencyLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(currencyLabel2, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.currencyLabel2;
    CurrencyNumber = ShopCurrencyInfoController__GetCurrencyNumber((ShopCurrencyInfoController_o *)v4, 18, v5);
    if ( !v6 )
      sub_1B00F28(CurrencyNumber, v8);
    UILabel__set_text(v6, CurrencyNumber, 0LL);
  }
}


void __fastcall ShopCurrencyInfoController__UpdateRemainTime(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v8; // w20
  Il2CppObject *Item; // x21

  if ( (byte_48DEF45 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48DEF45 = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_13:
    sub_1B00F28(objectList, v6);
  v8 = 0;
  while ( v8 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v8,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_13;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v8,
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      if ( !objectList )
        goto LABEL_13;
      ShopBuyItemListViewObject__UpdateRemaingTime((ShopBuyItemListViewObject_o *)objectList, v6);
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v8;
    if ( !objectList )
      goto LABEL_13;
  }
}


int32_t __fastcall ShopCurrencyInfoController__get_ItemBaseWindowHeight(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemBaseWindowHeight_k__BackingField;
}


void __fastcall ShopCurrencyInfoController__set_ItemBaseWindowHeight(
        ShopCurrencyInfoController_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemBaseWindowHeight_k__BackingField = value;
}


void __fastcall ShopCurrencyInfoController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DEF47 & 1) == 0 )
  {
    sub_1B00CCC(&ShopCurrencyInfoController___c_TypeInfo, v1);
    byte_48DEF47 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(ShopCurrencyInfoController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopCurrencyInfoController___c_TypeInfo->static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ShopCurrencyInfoController___c___ctor(ShopCurrencyInfoController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall ShopCurrencyInfoController___c___SetEventItemRestTimeLabels_b__48_0(
        ShopCurrencyInfoController___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.closedAt;
}