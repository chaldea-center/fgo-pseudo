void __fastcall ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.x = xmmword_BA3210;
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
  Il2CppObject *MasterData_object; // x20
  int v13; // w8
  UserItemMaster_o *v14; // x19
  int32_t mana; // w19
  LocalizationManager_c *v16; // x0
  int32_t monitor; // w2
  int64_t v19; // x1
  UserItemMaster_o *v20; // x0
  int64_t v21; // x20

  if ( (byte_49F8AC0 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v9);
    byte_49F8AC0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_57:
    sub_1B64324(Instance);
  }
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  v13 = kind - 2;
  v14 = (UserItemMaster_o *)Instance;
  switch ( v13 )
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
      if ( !MasterData_object || !v14 )
        goto LABEL_57;
      monitor = (int32_t)MasterData_object[5].monitor;
      goto LABEL_23;
    case 6:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object || !v14 )
        goto LABEL_57;
      monitor = HIDWORD(MasterData_object[5].monitor);
LABEL_23:
      v19 = Instance;
      v20 = v14;
      goto LABEL_51;
    case 7:
    case 12:
    case 18:
      if ( !SelfUserGame )
        goto LABEL_57;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v16 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        goto LABEL_55;
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    case 11:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v21 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v14 )
        goto LABEL_57;
      monitor = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_50;
    case 14:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v21 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v14 )
        goto LABEL_57;
      monitor = BalanceConfig_TypeInfo->static_fields->itemIdForShop13;
      goto LABEL_50;
    case 15:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v21 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v14 )
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
      v21 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v14 )
        goto LABEL_57;
      monitor = BalanceConfig_TypeInfo->static_fields->itemIdForShop15;
LABEL_50:
      v20 = v14;
      v19 = v21;
LABEL_51:
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v20, v19, monitor, 0LL);
      if ( !Instance )
        goto LABEL_57;
      mana = *(_DWORD *)(Instance + 28);
LABEL_53:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        v16 = LocalizationManager_TypeInfo;
LABEL_55:
        j_il2cpp_runtime_class_init_0(v16);
      }
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    default:
      return (System_String_o *)StringLiteral_1213/*"0"*/;
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

  if ( (byte_49F8ABF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20184/*"img_bg_seed"*/, *(_QWORD *)&kind);
    sub_1B640C8(&StringLiteral_20179/*"img_bg_mp"*/, v4);
    sub_1B640C8(&StringLiteral_20176/*"img_bg_evocation"*/, v5);
    sub_1B640C8(&StringLiteral_20177/*"img_bg_fragments"*/, v6);
    sub_1B640C8(&StringLiteral_20169/*"img_bg_ap"*/, v7);
    sub_1B640C8(&StringLiteral_20182/*"img_bg_rp"*/, v8);
    sub_1B640C8(&StringLiteral_20178/*"img_bg_hgd"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    sub_1B640C8(&StringLiteral_20186/*"img_bg_spsummon"*/, v11);
    byte_49F8ABF = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x12 )
    v12 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v12 = (System_String_o **)*(&off_44585A0 + kind - 2);
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
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *v10; // x20
  bool IsTimeStatusRecord; // w0
  bool v12; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8AC4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49F8AC4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  v10 = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
      if ( !v10 || IsTimeStatusRecord )
        return 0;
      goto LABEL_15;
    }
LABEL_18:
    sub_1B64324(Instance);
  }
  if ( !v10 )
    return 0;
LABEL_15:
  v12 = 1;
  if ( !UserEventEntity__getEventFlag(v10, 1, 0LL) )
    return 0;
  return v12;
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
      v5 = flt_BDC1B8[textCount - 2];
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x22
  UnityEngine_Object_o *currencyWindow; // x22
  UnityEngine_Object_o *currencySprite; // x22
  UnityEngine_Object_o *currencyLabel; // x22
  UnityEngine_Object_o *baseAtlas; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  struct UISprite_o *v18; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *v21; // x22
  bool IsShowCurrencyWindow; // w0
  ShopCurrencyInfoController_o *v23; // x0
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
  _BOOL4 v42; // w21
  ShopCurrencyInfoController_o *v43; // x0
  const MethodInfo *v44; // x2
  UISprite_o *v45; // x20
  ShopCurrencyInfoController_o *v46; // x0
  const MethodInfo *v47; // x2
  int32_t v48; // w20
  UISprite_o *currencySprite2; // x20
  System_String_o *v50; // x21
  ShopCurrencyInfoController_o *v51; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v53; // x2
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8ABD & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_20180/*"img_bg_pp"*/, v8);
    byte_49F8ABD = 1;
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
    v18 = this->fields.currencySprite;
    if ( !v18 )
      goto LABEL_80;
    mAtlas = v18->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v16, v17);
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
  v21 = (UnityEngine_GameObject_o *)gameObject;
  IsShowCurrencyWindow = ShopCurrencyInfoController__GetIsShowCurrencyWindow(
                           (ShopCurrencyInfoController_o *)gameObject,
                           kind,
                           v20);
  UnityEngine_GameObject__SetActive(v21, IsShowCurrencyWindow, 0LL);
  if ( kind == 19 )
  {
    v28 = this->fields.currencySprite;
    v29 = 19;
LABEL_41:
    v30 = ShopCurrencyInfoController__GetCurrencySprite(v23, v29, v24);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v26 = v28;
    v27 = v30;
    goto LABEL_44;
  }
  if ( kind == 17 )
  {
    v28 = this->fields.currencySprite;
    v29 = 17;
    goto LABEL_41;
  }
  if ( kind != 16 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
    if ( !gameObject )
      goto LABEL_80;
    UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
    v31 = this->fields.currencySprite;
    gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v32, kind, v33);
    if ( !v31 )
      goto LABEL_80;
    UISprite__set_spriteName(v31, (System_String_o *)gameObject, 0LL);
    goto LABEL_48;
  }
  v25 = this->fields.currencySprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v26 = v25;
  v27 = (System_String_o *)StringLiteral_20180/*"img_bg_pp"*/;
LABEL_44:
  AtlasManager__SetShopBanner_37546252(v26, v27, 0LL);
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
  v54.fields.x = p_currencySpritePosTypeA->fields.x;
  v54.fields.y = *p_y;
  v54.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v54, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_80;
  v37 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                          gameObject,
                                          gameObject->klass[2]._1.interopData);
  v38 = this->fields.currencyLabel;
  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v37, kind, v39);
  if ( !v38 )
    goto LABEL_80;
  UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
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
      GameObjectExtensions__SetLocalPosition_33375460(this->fields.itemInfo1, 0.0, 0.0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.itemInfo2;
      if ( !gameObject )
        goto LABEL_80;
      v42 = (0x51u >> (state - 15)) & ((unsigned int)(state - 15) < 7);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v42, 0LL);
      if ( v42 )
      {
        GameObjectExtensions__SetLocalPosition_33375460(this->fields.itemInfo1, -90.0, 0.0, 0LL);
        GameObjectExtensions__SetLocalPosition_33375460(this->fields.itemInfo2, 90.0, 0.0, 0LL);
        switch ( state )
        {
          case 21:
            goto LABEL_65;
          case 19:
            currencySprite2 = this->fields.currencySprite2;
            v50 = ShopCurrencyInfoController__GetCurrencySprite(v43, 18, v44);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_37546252(currencySprite2, v50, 0LL);
            v48 = 18;
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
                  v51 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                                          gameObject,
                                                          gameObject->klass[2]._1.interopData);
                  currencyLabel2 = this->fields.currencyLabel2;
                  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v51, v48, v53);
                  if ( currencyLabel2 )
                  {
                    UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_80:
            sub_1B64324(gameObject);
          case 15:
LABEL_65:
            gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_80;
            UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
            v45 = this->fields.currencySprite2;
            gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v46, 2, v47);
            if ( !v45 )
              goto LABEL_80;
            UISprite__set_spriteName(v45, (System_String_o *)gameObject, 0LL);
            v48 = 2;
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
  const MethodInfo *v25; // x1
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x22
  __int64 targetId; // x1
  int max_length; // w8
  unsigned int v32; // w25
  EventItemDisplayEntity_o *v33; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v37; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v41; // s0
  signed __int64 v44; // x23
  char v45; // w25
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x3
  UIWidget_o *shopEventItemWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v50; // x24
  unsigned __int64 v51; // x9
  Il2CppClass **v52; // x8
  EventItemComponent_o *v53; // x25
  struct EventItemComponent_array *v54; // x8
  UnityEngine_Transform_o *transform; // x25
  int v56; // s0
  UIWidget_o *shopEventItemLimitOverWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v61; // x24
  unsigned __int64 v62; // x9
  Il2CppClass **v63; // x8
  EventItemComponent_o *v64; // x25
  struct EventItemComponent_array *v65; // x8
  UnityEngine_Transform_o *v66; // x25
  int v67; // s0
  UnityEngine_Object_o *infoPanel; // x20
  float v71; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v74; // s9
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8ABC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1B640C8(&EventItemWindowMaker_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49F8ABC = 1;
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
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, v25) )
      {
        case 4:
          v76 = 2;
          goto LABEL_106;
        case 8:
          v76 = 7;
          goto LABEL_106;
        case 9:
          v76 = 8;
          goto LABEL_106;
        case 10:
          v76 = 9;
          goto LABEL_106;
        case 12:
          v76 = 13;
LABEL_106:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v76, 0, v75);
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
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_107;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_107;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
LABEL_108:
        sub_1B6432C(gameObject, targetId);
      v33 = ListByEventIdAndScreenFlag->m_Items[v32];
      if ( !v33 )
        break;
      if ( v33->fields.pointType == 1 )
      {
        if ( !v29 )
          break;
        targetId = (unsigned int)v33->fields.targetId;
        items = v29->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v29->fields._version;
        if ( !items )
          break;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v29,
            targetId,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size + 1] = targetId;
        }
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_25;
    }
LABEL_107:
    sub_1B64324(gameObject);
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
    v37 = (UnityEngine_Transform_o *)gameObject;
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
    v78.fields.x = x;
    v78.fields.y = y;
    v78.fields.z = z;
    *(UnityEngine_Vector3_o *)&v41 = EventItemWindowMaker__GetPanelPosition(v78, 0LL);
    if ( !v37 )
      goto LABEL_107;
    UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v41, 0LL);
  }
  if ( !v29 )
    goto LABEL_107;
  v44 = v29->fields._size;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(v44, isForcedAdjustment, 0LL);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_107;
  v45 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0LL);
  if ( !gameObject )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v45 & 1) == 0, 0LL);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v45 & 1, 0LL);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_107;
  gameObject = (EventItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_107;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0LL) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v45 & 1, v46);
    if ( (v45 & 1) == 0 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                             isEventShop,
                                             v44,
                                             isForcedAdjustment,
                                             0LL);
      if ( !shopEventItemWindow )
        goto LABEL_107;
      UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0LL);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_107;
      v50 = 0LL;
      while ( 1 )
      {
        v51 = shopEventItemDrawList->max_length;
        if ( (__int64)v50 >= (int)v51 )
          goto LABEL_86;
        if ( v50 >= v51 )
          goto LABEL_108;
        v52 = &shopEventItemDrawList->obj.klass + v50;
        v53 = (EventItemComponent_o *)v52[4];
        if ( (__int64)v50 >= v44 )
        {
          if ( !v53 )
            goto LABEL_107;
          EventItemComponent__Clear((EventItemComponent_o *)v52[4], 0LL);
        }
        else
        {
          gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                 v29,
                                                 v50,
                                                 (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v53 )
            goto LABEL_107;
          EventItemComponent__Set(v53, (int32_t)gameObject, 0LL);
          v54 = this->fields.shopEventItemDrawList;
          if ( !v54 )
            goto LABEL_107;
          if ( v50 >= v54->max_length )
            goto LABEL_108;
          gameObject = v54->m_Items[v50];
          if ( !gameObject )
            goto LABEL_107;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          *(UnityEngine_Vector3_o *)&v56 = EventItemWindowMaker__GetEventItemPosition(
                                             isEventShop,
                                             v50,
                                             v44,
                                             isForcedAdjustment,
                                             0LL);
          if ( !transform )
            goto LABEL_107;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v56, 0LL);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v50;
        if ( !shopEventItemDrawList )
          goto LABEL_107;
      }
    }
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v45 & 1, v47);
    if ( (v45 & 1) == 0 )
      goto LABEL_45;
  }
  shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                         isEventShop,
                                         v44,
                                         isForcedAdjustment,
                                         0LL);
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_107;
  UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0LL);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_107;
  v61 = 0LL;
  while ( 1 )
  {
    v62 = shopEventItemDrawLimitOverList->max_length;
    if ( (__int64)v61 >= (int)v62 )
      break;
    if ( v61 >= v62 )
      goto LABEL_108;
    v63 = &shopEventItemDrawLimitOverList->obj.klass + v61;
    v64 = (EventItemComponent_o *)v63[4];
    if ( (__int64)v61 >= v44 )
    {
      if ( !v64 )
        goto LABEL_107;
      EventItemComponent__Clear((EventItemComponent_o *)v63[4], 0LL);
    }
    else
    {
      gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                             v29,
                                             v61,
                                             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v64 )
        goto LABEL_107;
      EventItemComponent__Set(v64, (int32_t)gameObject, 0LL);
      v65 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v65 )
        goto LABEL_107;
      if ( v61 >= v65->max_length )
        goto LABEL_108;
      gameObject = v65->m_Items[v61];
      if ( !gameObject )
        goto LABEL_107;
      v66 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      *(UnityEngine_Vector3_o *)&v67 = EventItemWindowMaker__GetEventItemPosition(
                                         isEventShop,
                                         v61,
                                         v44,
                                         isForcedAdjustment,
                                         0LL);
      if ( !v66 )
        goto LABEL_107;
      UnityEngine_Transform__set_localPosition(v66, *(UnityEngine_Vector3_o *)&v67, 0LL);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v61;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_107;
  }
LABEL_86:
  if ( isEventShop )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    this->fields._ItemBaseWindowHeight_k__BackingField = EventItemWindowMaker__GetItemBaseWindowHeight(
                                                           v44,
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
      v79 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
      v71 = v79.fields.z;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_107;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v74 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_107;
      v80.fields.x = v74;
      v80.fields.z = v71;
      v80.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v80, 0LL);
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
  System_Int32_array *EventItemList; // x22
  bool IsForcedAdjustmentDialog; // w5
  const MethodInfo *v15; // x6

  if ( (byte_49F8ABB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49F8ABB = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       eventId,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Instance, 0LL);
    ShopCurrencyInfoController__RefreshEventItemInfo(
      this,
      6,
      eventId,
      isEventShop,
      EventItemList,
      IsForcedAdjustmentDialog,
      v15);
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
  if ( (byte_49F8AC2 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1B640C8(&StringLiteral_1/*""*/, isLimitOver);
    byte_49F8AC2 = 1;
  }
  v6 = 160LL;
  if ( isLimitOver )
    v6 = 176LL;
  if ( !v5 )
    goto LABEL_11;
  v7 = *(struct UILabel_o **)((char *)&v5->klass + v6);
  v5->fields.eventItemTimeLabel = v7;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v5->fields.eventItemTimeLabel;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.eventItemTimeLabel, (int32_t)v7, (int32_t)method, v3);
  v11 = 168LL;
  if ( isLimitOver )
    v11 = 184LL;
  v12 = *(struct UILabel_o **)((char *)&v5->klass + v11);
  v5->fields.eventItemRestLabel = v12;
  p_eventItemRestLabel = (ServantStatusBattleListViewItem_o *)&v5->fields.eventItemRestLabel;
  sub_1B6406C(p_eventItemRestLabel, (int32_t)v12, v9, v10);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (this = (ShopCurrencyInfoController_o *)p_eventItemRestLabel->klass) == 0LL) )
  {
LABEL_11:
    sub_1B64324(this);
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
  if ( (byte_49F8AC1 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1B640C8(&StringLiteral_15117/*"UpdateRemainTime"*/, *(_QWORD *)&eventId);
    byte_49F8AC1 = 1;
  }
  v7 = 160LL;
  if ( isLimitOver )
    v7 = 176LL;
  if ( !v6 )
    sub_1B64324(this);
  v8 = *(struct UILabel_o **)((char *)&v6->klass + v7);
  v6->fields.eventItemTimeLabel = v8;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v6->fields.eventItemTimeLabel,
    (int32_t)v8,
    isLimitOver,
    (int32_t)method);
  v11 = 168LL;
  if ( isLimitOver )
    v11 = 184LL;
  v12 = *(struct UILabel_o **)((char *)&v6->klass + v11);
  v6->fields.eventItemRestLabel = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.eventItemRestLabel, (int32_t)v12, v9, v10);
  v6->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v13, eventId, v14);
  ShopCurrencyInfoController__UpdateRemainTime(v6, v15);
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_15117/*"UpdateRemainTime"*/,
    0LL);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_15117/*"UpdateRemainTime"*/,
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
  int64_t finishedAt; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v27; // x8
  System_Func_T__TResult__o *_9__48_0; // x24
  Il2CppObject *v29; // x25
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int64_t v33; // x0
  int64_t Time; // x23
  _BOOL4 v36; // w24
  System_String_o **v37; // x8
  struct System_String_o *mText; // x8
  int v39; // s0
  unsigned int v40; // w8
  int v41; // s1
  int v42; // s2

  if ( (byte_49F8AC6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, restLabel);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Max_ShopEntity___, v9);
    sub_1B640C8(&System_Func_ShopEntity__long__TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__, v14);
    sub_1B640C8(&ShopCurrencyInfoController___c_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_13241/*"TIME_OVER_EVENTREWARD"*/, v16);
    sub_1B640C8(&StringLiteral_12004/*"SHOP_INDEFINITE_PERIOD"*/, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    sub_1B640C8(&StringLiteral_13263/*"TIME_REST_EVENTREWARD"*/, v19);
    byte_49F8AC6 = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12004/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
    if ( !timeLabel )
      goto LABEL_50;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !*p_eventEntity || !Instance )
      goto LABEL_50;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              (*p_eventEntity)->fields.id,
                                                                              0LL);
    v27 = ShopCurrencyInfoController___c_TypeInfo;
    if ( !ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo);
      v27 = ShopCurrencyInfoController___c_TypeInfo;
    }
    _9__48_0 = (System_Func_T__TResult__o *)v27->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = ShopCurrencyInfoController___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__48_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_ShopEntity__long__TypeInfo, v24, v25);
      System_Func_object__long____ctor(
        _9__48_0,
        v29,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__,
        0LL);
      static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Func_ShopEntity__long__o *)_9__48_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v31, v32);
    }
    v33 = System_Linq_Enumerable__Max_object__48635324(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__48_0,
            (const MethodInfo_2E61DBC *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v33 && v33 > 0 )
      finishedAt = v33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1LL, 0LL);
    if ( !timeLabel )
LABEL_50:
      sub_1B64324(Instance);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v36 = this->fields.isRarePriShopPurchased || finishedAt < Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = (System_String_o **)&StringLiteral_13263/*"TIME_REST_EVENTREWARD"*/;
  if ( v36 )
    v37 = (System_String_o **)&StringLiteral_13241/*"TIME_OVER_EVENTREWARD"*/;
  Instance = (DataManager_o *)LocalizationManager__Get(*v37, 0LL);
  if ( !restLabel )
    goto LABEL_50;
  UILabel__set_text(restLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0LL);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_50;
  v39 = -1033109504;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v39 = 0;
    v40 = mText->fields._stringLength - 2;
    if ( v40 <= 2 )
      v39 = LODWORD(flt_BDC1B8[v40]);
  }
  if ( !Instance )
    goto LABEL_50;
  v41 = -1076258406;
  v42 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, *(UnityEngine_Vector3_o *)&v39, 0LL);
}


void __fastcall ShopCurrencyInfoController__SetObjectList(
        ShopCurrencyInfoController_o *this,
        System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.objectList = objectList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)objectList, (int32_t)method, v3);
}


void __fastcall ShopCurrencyInfoController__StopUpdateRemainTime(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F8AC3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15117/*"UpdateRemainTime"*/, method);
    byte_49F8AC3 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15117/*"UpdateRemainTime"*/,
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

  if ( (byte_49F8ABE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8ABE = 1;
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
      sub_1B64324(CurrencyNumber);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  const MethodInfo *v9; // x1

  if ( (byte_49F8AC5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F8AC5 = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_13:
    sub_1B64324(objectList);
  v7 = 0;
  while ( v7 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v7,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_13;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v7,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      if ( !objectList )
        goto LABEL_13;
      ShopBuyItemListViewObject__UpdateRemaingTime((ShopBuyItemListViewObject_o *)objectList, v9);
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v7;
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8AC7 & 1) == 0 )
  {
    sub_1B640C8(&ShopCurrencyInfoController___c_TypeInfo, v1);
    byte_49F8AC7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ShopCurrencyInfoController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ShopCurrencyInfoController___c_TypeInfo->static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.closedAt;
}