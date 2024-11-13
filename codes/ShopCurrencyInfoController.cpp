void __fastcall ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.x = xmmword_BD2BD0;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UserGameEntity_o *SelfUserGame; // x21
  int64_t Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  int v20; // w8
  UserItemMaster_o *v21; // x19
  int32_t mana; // w19
  LocalizationManager_c *v23; // x0
  int32_t monitor; // w2
  int64_t v26; // x20
  int64_t v27; // x1
  UserItemMaster_o *v28; // x0

  if ( (byte_4B1270A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v14, v15);
    byte_4B1270A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_62:
    sub_1BCAA3C(Instance, v18);
  }
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v20 = kind - 2;
  v21 = (UserItemMaster_o *)Instance;
  switch ( v20 )
  {
    case 0:
    case 8:
    case 9:
      if ( !SelfUserGame )
        goto LABEL_62;
      mana = SelfUserGame->fields.mana;
      goto LABEL_10;
    case 5:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object || !v21 )
        goto LABEL_62;
      monitor = (int32_t)MasterData_object[5].monitor;
      goto LABEL_40;
    case 6:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object || !v21 )
        goto LABEL_62;
      monitor = HIDWORD(MasterData_object[5].monitor);
      goto LABEL_40;
    case 7:
    case 12:
    case 19:
      if ( !SelfUserGame )
        goto LABEL_62;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v23 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        goto LABEL_60;
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    case 11:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      v26 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      if ( !v21 )
        goto LABEL_62;
      monitor = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_55;
    case 14:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      v26 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      if ( !v21 )
        goto LABEL_62;
      monitor = BalanceConfig_TypeInfo->static_fields->PurePriItemId;
      goto LABEL_55;
    case 15:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object || !v21 )
        goto LABEL_62;
      monitor = (int32_t)MasterData_object[6].klass;
LABEL_40:
      v27 = Instance;
      v28 = v21;
      goto LABEL_56;
    case 16:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      v26 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      if ( !v21 )
        goto LABEL_62;
      monitor = BalanceConfig_TypeInfo->static_fields->ApSeedItemId;
      goto LABEL_55;
    case 17:
      if ( !SelfUserGame )
        goto LABEL_62;
      mana = UserGameEntity__getAct(SelfUserGame, 0LL);
      goto LABEL_58;
    case 18:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      Instance = NetworkManager__get_UserId(0LL);
      v26 = Instance;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      if ( !v21 )
        goto LABEL_62;
      monitor = BalanceConfig_TypeInfo->static_fields->RevivalItemId;
LABEL_55:
      v28 = v21;
      v27 = v26;
LABEL_56:
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v28, v27, monitor, 0LL);
      if ( !Instance )
        goto LABEL_62;
      mana = *(_DWORD *)(Instance + 28);
LABEL_58:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        v23 = LocalizationManager_TypeInfo;
LABEL_60:
        j_il2cpp_runtime_class_init_0(v23, v18);
      }
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    default:
      return (System_String_o *)StringLiteral_1209/*"0"*/;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopCurrencyInfoController__GetCurrencySprite(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o **v22; // x8

  if ( (byte_4B12709 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20479/*"img_bg_seed"*/, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&StringLiteral_20473/*"img_bg_mp"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_20470/*"img_bg_evocation"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_20471/*"img_bg_fragments"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20475/*"img_bg_pureprism_itemstock_resetticket"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20463/*"img_bg_ap"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20477/*"img_bg_rp"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_20472/*"img_bg_hgd"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_20481/*"img_bg_spsummon"*/, v20, v21);
    byte_4B12709 = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x13 )
    v22 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v22 = (System_String_o **)*(&off_455AC80 + kind - 2);
  return *v22;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopCurrencyInfoController__GetIsRarePriShopPurchased(
        ShopCurrencyInfoController_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *v16; // x20
  bool IsTimeStatusRecord; // w0
  bool v18; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1270E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B1270E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_18;
  v16 = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
      if ( !v16 || IsTimeStatusRecord )
        return 0;
      goto LABEL_15;
    }
LABEL_18:
    sub_1BCAA3C(Instance, v13);
  }
  if ( !v16 )
    return 0;
LABEL_15:
  v18 = 1;
  if ( !UserEventEntity__getEventFlag(v16, 1, 0LL) )
    return 0;
  return v18;
}


bool __fastcall ShopCurrencyInfoController__GetIsShowCurrencyWindow(
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
      v5 = flt_C0C2A4[textCount - 2];
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *shopEventItemWindow; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x22
  UnityEngine_Object_o *currencyWindow; // x22
  __int64 v16; // x1
  UnityEngine_Object_o *currencySprite; // x22
  __int64 v18; // x1
  UnityEngine_Object_o *currencyLabel; // x22
  __int64 v20; // x1
  UnityEngine_Object_o *baseAtlas; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UISprite_o *v28; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x22
  bool IsShowCurrencyWindow; // w0
  ShopCurrencyInfoController_o *v33; // x0
  const MethodInfo *v34; // x2
  struct UISprite_o *v35; // x22
  UISprite_o *v36; // x0
  System_String_o *v37; // x1
  struct UISprite_o *v38; // x22
  int32_t v39; // w1
  __int64 v40; // x1
  System_String_o *v41; // x23
  UISprite_o *v42; // x22
  ShopCurrencyInfoController_o *v43; // x0
  const MethodInfo *v44; // x2
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeA; // x8
  float *p_y; // x9
  float *p_z; // x10
  ShopCurrencyInfoController_o *v48; // x0
  UILabel_o *v49; // x22
  const MethodInfo *v50; // x2
  __int64 v51; // x1
  UnityEngine_Object_o *itemInfo1; // x21
  __int64 v53; // x1
  UnityEngine_Object_o *itemInfo2; // x21
  int v55; // w21
  bool IsFLAG20241004; // w20
  ShopCurrencyInfoController_o *v57; // x0
  const MethodInfo *v58; // x2
  UISprite_o *currencySprite2; // x20
  ShopCurrencyInfoController_o *v60; // x0
  const MethodInfo *v61; // x2
  int32_t v62; // w20
  UISprite_o *v63; // x20
  __int64 v64; // x1
  System_String_o *v65; // x21
  UISprite_o *v66; // x20
  __int64 v67; // x1
  System_String_o *v68; // x21
  ShopCurrencyInfoController_o *v69; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v71; // x2
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12707 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&state);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_20474/*"img_bg_pp"*/, v9, v10);
    byte_4B12707 = 1;
  }
  this->fields.kind = kind;
  shopEventItemWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
  if ( UnityEngine_Object__op_Inequality(shopEventItemWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindow;
    if ( !gameObject )
      goto LABEL_84;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemLimitOverWindow;
    if ( !gameObject )
      goto LABEL_84;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality(currencyWindow, 0LL, 0LL) )
    return;
  currencySprite = (UnityEngine_Object_o *)this->fields.currencySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Equality(currencySprite, 0LL, 0LL) )
    return;
  currencyLabel = (UnityEngine_Object_o *)this->fields.currencyLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Equality(currencyLabel, 0LL, 0LL) )
    return;
  baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v28 = this->fields.currencySprite;
    if ( !v28 )
      goto LABEL_84;
    mAtlas = v28->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v22, v23, v24, v25, v26, v27);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel;
  if ( !gameObject )
    goto LABEL_84;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencyWindow;
  if ( !gameObject )
    goto LABEL_84;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v31 = (UnityEngine_GameObject_o *)gameObject;
  IsShowCurrencyWindow = ShopCurrencyInfoController__GetIsShowCurrencyWindow(
                           (ShopCurrencyInfoController_o *)gameObject,
                           kind,
                           v30);
  UnityEngine_GameObject__SetActive(v31, IsShowCurrencyWindow, 0LL);
  if ( kind == 20 )
  {
    v38 = this->fields.currencySprite;
    v39 = 20;
LABEL_41:
    v41 = ShopCurrencyInfoController__GetCurrencySprite(v33, v39, v34);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40);
    v36 = v38;
    v37 = v41;
    goto LABEL_44;
  }
  if ( kind == 18 )
  {
    v38 = this->fields.currencySprite;
    v39 = 18;
    goto LABEL_41;
  }
  if ( kind != 16 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
    if ( !gameObject )
      goto LABEL_84;
    UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
    v42 = this->fields.currencySprite;
    gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v43, kind, v44);
    if ( !v42 )
      goto LABEL_84;
    UISprite__set_spriteName(v42, (System_String_o *)gameObject, 0LL);
    goto LABEL_48;
  }
  v35 = this->fields.currencySprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
  v36 = v35;
  v37 = (System_String_o *)StringLiteral_20474/*"img_bg_pp"*/;
LABEL_44:
  AtlasManager__SetShopBanner_38576124(v36, v37, 0LL);
LABEL_48:
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_84;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( (unsigned int)kind > 0x15 || ((1 << kind) & 0x3F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeA;
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    if ( !gameObject )
      goto LABEL_84;
  }
  else
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeB;
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    if ( !gameObject )
      goto LABEL_84;
  }
  v72.fields.x = p_currencySpritePosTypeA->fields.x;
  v72.fields.y = *p_y;
  v72.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v72, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_84;
  v48 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                          gameObject,
                                          gameObject->klass[2]._1.interopData);
  v49 = this->fields.currencyLabel;
  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v48, kind, v50);
  if ( !v49 )
    goto LABEL_84;
  UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
  itemInfo1 = (UnityEngine_Object_o *)this->fields.itemInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( !UnityEngine_Object__op_Equality(itemInfo1, 0LL, 0LL) )
  {
    itemInfo2 = (UnityEngine_Object_o *)this->fields.itemInfo2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
    if ( !UnityEngine_Object__op_Equality(itemInfo2, 0LL, 0LL) )
    {
      v55 = state - 15;
      IsFLAG20241004 = 1;
      switch ( v55 )
      {
        case 0:
        case 4:
        case 6:
          break;
        case 3:
          IsFLAG20241004 = ConstantMaster__IsFLAG20241004(0LL);
          break;
        default:
          IsFLAG20241004 = 0;
          break;
      }
      GameObjectExtensions__SetLocalPosition_34331044(this->fields.itemInfo1, 0.0, 0.0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.itemInfo2;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, IsFLAG20241004, 0LL);
        if ( IsFLAG20241004 )
        {
          GameObjectExtensions__SetLocalPosition_34331044(this->fields.itemInfo1, -90.0, 0.0, 0LL);
          GameObjectExtensions__SetLocalPosition_34331044(this->fields.itemInfo2, 90.0, 0.0, 0LL);
          switch ( v55 )
          {
            case 0:
            case 6:
              gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
              if ( !gameObject )
                goto LABEL_84;
              UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
              currencySprite2 = this->fields.currencySprite2;
              gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v60, 2, v61);
              if ( !currencySprite2 )
                goto LABEL_84;
              UISprite__set_spriteName(currencySprite2, (System_String_o *)gameObject, 0LL);
              v62 = 2;
LABEL_79:
              gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
              if ( !gameObject )
                goto LABEL_84;
              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_84;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)gameObject,
                this->fields.currencySpritePosTypeA,
                0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
              if ( !gameObject )
                goto LABEL_84;
              v69 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                                      gameObject,
                                                      gameObject->klass[2]._1.interopData);
              currencyLabel2 = this->fields.currencyLabel2;
              gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v69, v62, v71);
              if ( !currencyLabel2 )
                goto LABEL_84;
              UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0LL);
              break;
            case 3:
              v63 = this->fields.currencySprite2;
              v65 = ShopCurrencyInfoController__GetCurrencySprite(v57, 17, v58);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v64);
              AtlasManager__SetShopBanner_38576124(v63, v65, 0LL);
              v62 = 17;
              goto LABEL_79;
            case 4:
              v66 = this->fields.currencySprite2;
              v68 = ShopCurrencyInfoController__GetCurrencySprite(v57, 19, v58);
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v67);
              AtlasManager__SetShopBanner_38576124(v66, v68, 0LL);
              v62 = 19;
              goto LABEL_79;
            default:
              return;
          }
        }
        return;
      }
LABEL_84:
      sub_1BCAA3C(gameObject, v12);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *currencyWindow; // x25
  EventItemComponent_o *gameObject; // x0
  const MethodInfo *targetId; // x1
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_int__o *v42; // x22
  int max_length; // w8
  unsigned int v44; // w25
  EventItemDisplayEntity_o *v45; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v49; // x23
  __int64 v50; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  int v54; // s0
  signed __int64 v57; // x23
  char v58; // w25
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  __int64 v61; // x1
  UIWidget_o *shopEventItemWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v64; // x24
  unsigned __int64 v65; // x9
  Il2CppClass **v66; // x8
  EventItemComponent_o *v67; // x25
  struct EventItemComponent_array *v68; // x8
  __int64 v69; // x1
  UnityEngine_Transform_o *transform; // x25
  int v71; // s0
  UIWidget_o *shopEventItemLimitOverWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v76; // x24
  unsigned __int64 v77; // x9
  Il2CppClass **v78; // x8
  EventItemComponent_o *v79; // x25
  struct EventItemComponent_array *v80; // x8
  __int64 v81; // x1
  UnityEngine_Transform_o *v82; // x25
  int v83; // s0
  __int64 v86; // x1
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v88; // x1
  float v89; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v92; // s9
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12706 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&EventItemWindowMaker_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    byte_4B12706 = 1;
  }
  this->fields.eventId = eventId;
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
  gameObject = (EventItemComponent_o *)UnityEngine_Object__op_Inequality(currencyWindow, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !eventItemList )
      goto LABEL_109;
    if ( !*(_QWORD *)&eventItemList->max_length )
    {
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, targetId);
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, targetId) )
      {
        case 4:
          v94 = 2;
          goto LABEL_108;
        case 8:
          v94 = 7;
          goto LABEL_108;
        case 9:
          v94 = 8;
          goto LABEL_108;
        case 10:
          v94 = 9;
          goto LABEL_108;
        case 12:
          v94 = 13;
LABEL_108:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v94, 0, v93);
          return;
        default:
          break;
      }
    }
    gameObject = (EventItemComponent_o *)this->fields.currencyWindow;
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  this->fields.kind = kind;
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_109;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0LL);
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v39,
                                                    v40,
                                                    v41);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_109;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= max_length )
LABEL_110:
        sub_1BCAA44(gameObject, targetId);
      v45 = ListByEventIdAndScreenFlag->m_Items[v44];
      if ( !v45 )
        break;
      if ( v45->fields.pointType == 1 )
      {
        if ( !v42 )
          break;
        targetId = (const MethodInfo *)(unsigned int)v45->fields.targetId;
        items = v42->fields._items;
        v47 = Method_System_Collections_Generic_List_int__Add__;
        ++v42->fields._version;
        if ( !items )
          break;
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v42,
            (int32_t)targetId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size + 1] = (int)targetId;
        }
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_25;
    }
LABEL_109:
    sub_1BCAA3C(gameObject, targetId);
  }
LABEL_25:
  if ( isEventShop )
  {
    gameObject = (EventItemComponent_o *)this->fields.shopEventItemWindowPanel;
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !this->fields.shopEventItemWindowPanel )
      goto LABEL_109;
    v49 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel,
                                           0LL);
    if ( !gameObject )
      goto LABEL_109;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v50);
    v96.fields.x = x;
    v96.fields.y = y;
    v96.fields.z = z;
    *(UnityEngine_Vector3_o *)&v54 = EventItemWindowMaker__GetPanelPosition(v96, 0LL);
    if ( !v49 )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition(v49, *(UnityEngine_Vector3_o *)&v54, 0LL);
  }
  if ( !v42 )
    goto LABEL_109;
  v57 = v42->fields._size;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, targetId);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(v57, isForcedAdjustment, 0LL);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_109;
  v58 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0LL);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v58 & 1) == 0, 0LL);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v58 & 1, 0LL);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_109;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0LL) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v58 & 1, v59);
    if ( (v58 & 1) == 0 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v61);
      gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                             isEventShop,
                                             v57,
                                             isForcedAdjustment,
                                             0LL);
      if ( !shopEventItemWindow )
        goto LABEL_109;
      UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0LL);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_109;
      v64 = 0LL;
      while ( 1 )
      {
        v65 = shopEventItemDrawList->max_length;
        if ( (__int64)v64 >= (int)v65 )
          goto LABEL_86;
        if ( v64 >= v65 )
          goto LABEL_110;
        v66 = &shopEventItemDrawList->obj.klass + v64;
        v67 = (EventItemComponent_o *)v66[4];
        if ( (__int64)v64 >= v57 )
        {
          if ( !v67 )
            goto LABEL_109;
          EventItemComponent__Clear((EventItemComponent_o *)v66[4], 0LL);
        }
        else
        {
          gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                 v42,
                                                 v64,
                                                 (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v67 )
            goto LABEL_109;
          EventItemComponent__Set(v67, (int32_t)gameObject, 0LL);
          v68 = this->fields.shopEventItemDrawList;
          if ( !v68 )
            goto LABEL_109;
          if ( v64 >= v68->max_length )
            goto LABEL_110;
          gameObject = v68->m_Items[v64];
          if ( !gameObject )
            goto LABEL_109;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v69);
          *(UnityEngine_Vector3_o *)&v71 = EventItemWindowMaker__GetEventItemPosition(
                                             isEventShop,
                                             v64,
                                             v57,
                                             isForcedAdjustment,
                                             0LL);
          if ( !transform )
            goto LABEL_109;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v71, 0LL);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v64;
        if ( !shopEventItemDrawList )
          goto LABEL_109;
      }
    }
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v58 & 1, v60);
    if ( (v58 & 1) == 0 )
      goto LABEL_45;
  }
  shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v61);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                         isEventShop,
                                         v57,
                                         isForcedAdjustment,
                                         0LL);
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_109;
  UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0LL);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_109;
  v76 = 0LL;
  while ( 1 )
  {
    v77 = shopEventItemDrawLimitOverList->max_length;
    if ( (__int64)v76 >= (int)v77 )
      break;
    if ( v76 >= v77 )
      goto LABEL_110;
    v78 = &shopEventItemDrawLimitOverList->obj.klass + v76;
    v79 = (EventItemComponent_o *)v78[4];
    if ( (__int64)v76 >= v57 )
    {
      if ( !v79 )
        goto LABEL_109;
      EventItemComponent__Clear((EventItemComponent_o *)v78[4], 0LL);
    }
    else
    {
      gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                             v42,
                                             v76,
                                             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v79 )
        goto LABEL_109;
      EventItemComponent__Set(v79, (int32_t)gameObject, 0LL);
      v80 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v80 )
        goto LABEL_109;
      if ( v76 >= v80->max_length )
        goto LABEL_110;
      gameObject = v80->m_Items[v76];
      if ( !gameObject )
        goto LABEL_109;
      v82 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v81);
      *(UnityEngine_Vector3_o *)&v83 = EventItemWindowMaker__GetEventItemPosition(
                                         isEventShop,
                                         v76,
                                         v57,
                                         isForcedAdjustment,
                                         0LL);
      if ( !v82 )
        goto LABEL_109;
      UnityEngine_Transform__set_localPosition(v82, *(UnityEngine_Vector3_o *)&v83, 0LL);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v76;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_109;
  }
LABEL_86:
  if ( isEventShop )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, targetId);
    this->fields._ItemBaseWindowHeight_k__BackingField = EventItemWindowMaker__GetItemBaseWindowHeight(
                                                           v57,
                                                           isForcedAdjustment,
                                                           0LL);
    infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
    if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
    {
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_109;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_109;
      v97 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
      v89 = v97.fields.z;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v88);
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_109;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v92 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_109;
      v98.fields.x = v92;
      v98.fields.z = v89;
      v98.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v98, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  System_Int32_array *EventItemList; // x22
  bool IsForcedAdjustmentDialog; // w5
  const MethodInfo *v19; // x6

  if ( (byte_4B12705 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B12705 = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       eventId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
    {
      sub_1BCAA3C(Instance, v16);
    }
    IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Instance, 0LL);
    ShopCurrencyInfoController__RefreshEventItemInfo(
      this,
      6,
      eventId,
      isEventShop,
      EventItemList,
      IsForcedAdjustmentDialog,
      v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopCurrencyInfoController__ResetEventEnableTime(
        ShopCurrencyInfoController_o *this,
        bool isLimitOver,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopCurrencyInfoController_o *v9; // x19
  __int64 v10; // x8
  int64_t v11; // x1
  ShopCurrencyInfoController_o **p_eventItemTimeLabel; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x8
  int64_t v20; // x1
  PartyOrganizationUtility_o *p_eventItemRestLabel; // x19

  v9 = this;
  if ( (byte_4B1270C & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, isLimitOver, method);
    byte_4B1270C = 1;
  }
  v10 = 160LL;
  if ( isLimitOver )
    v10 = 176LL;
  if ( !v9 )
    goto LABEL_11;
  v11 = *(int64_t *)((char *)&v9->klass + v10);
  v9->fields.eventItemTimeLabel = (struct UILabel_o *)v11;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v9->fields.eventItemTimeLabel;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.eventItemTimeLabel, v11, (int64_t)method, v3, v4, v5, v6, v7);
  v19 = 168LL;
  if ( isLimitOver )
    v19 = 184LL;
  v20 = *(int64_t *)((char *)&v9->klass + v19);
  v9->fields.eventItemRestLabel = (struct UILabel_o *)v20;
  p_eventItemRestLabel = (PartyOrganizationUtility_o *)&v9->fields.eventItemRestLabel;
  sub_1BCA784(p_eventItemRestLabel, v20, v13, v14, v15, v16, v17, v18);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (this = (ShopCurrencyInfoController_o *)p_eventItemRestLabel->klass) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, isLimitOver);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ShopCurrencyInfoController_o *v10; // x19
  __int64 v11; // x8
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x8
  int64_t v20; // x1
  ShopCurrencyInfoController_o *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1

  v10 = this;
  if ( (byte_4B1270B & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1BCA7E0(&StringLiteral_15353/*"UpdateRemainTime"*/, *(_QWORD *)&eventId, isLimitOver);
    byte_4B1270B = 1;
  }
  v11 = 160LL;
  if ( isLimitOver )
    v11 = 176LL;
  if ( !v10 )
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  v12 = *(int64_t *)((char *)&v10->klass + v11);
  v10->fields.eventItemTimeLabel = (struct UILabel_o *)v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields.eventItemTimeLabel,
    v12,
    isLimitOver,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v19 = 168LL;
  if ( isLimitOver )
    v19 = 184LL;
  v20 = *(int64_t *)((char *)&v10->klass + v19);
  v10->fields.eventItemRestLabel = (struct UILabel_o *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.eventItemRestLabel, v20, v13, v14, v15, v16, v17, v18);
  v10->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v21, eventId, v22);
  ShopCurrencyInfoController__UpdateRemainTime(v10, v23);
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15353/*"UpdateRemainTime"*/,
    0LL);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15353/*"UpdateRemainTime"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_o **p_eventEntity; // x23
  DataManager_o *Instance; // x0
  int64_t finishedAt; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v41; // x8
  System_Func_T__TResult__o *_9__48_0; // x24
  Il2CppObject *v43; // x25
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x0
  __int64 v52; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  int64_t Time; // x23
  _BOOL4 v57; // w24
  System_String_o **v58; // x8
  struct System_String_o *mText; // x8
  int v60; // s0
  unsigned int v61; // w8
  int v62; // s1
  int v63; // s2

  if ( (byte_4B12710 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, restLabel, timeLabel);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Max_ShopEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_ShopEntity__long__TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__, v21, v22);
    sub_1BCA7E0(&ShopCurrencyInfoController___c_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_13468/*"TIME_OVER_EVENTREWARD"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12204/*"SHOP_INDEFINITE_PERIOD"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13490/*"TIME_REST_EVENTREWARD"*/, v31, v32);
    byte_4B12710 = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, restLabel);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12204/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
    if ( !timeLabel )
      goto LABEL_50;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !*p_eventEntity || !Instance )
      goto LABEL_50;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              (*p_eventEntity)->fields.id,
                                                                              0LL);
    v41 = ShopCurrencyInfoController___c_TypeInfo;
    if ( !ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo, v37);
      v41 = ShopCurrencyInfoController___c_TypeInfo;
    }
    _9__48_0 = (System_Func_T__TResult__o *)v41->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41, v37);
        v41 = ShopCurrencyInfoController___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v41->static_fields->__9;
      _9__48_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_ShopEntity__long__TypeInfo, v37, v38, v39);
      System_Func_object__long____ctor(
        _9__48_0,
        v43,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__,
        0LL);
      static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Func_ShopEntity__long__o *)_9__48_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__48_0,
        (int64_t)_9__48_0,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    v51 = System_Linq_Enumerable__Max_object__49520784(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__48_0,
            (const MethodInfo_2F3A090 *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v51 && v51 > 0 )
      finishedAt = v51;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1LL, 0LL);
    if ( !timeLabel )
LABEL_50:
      sub_1BCAA3C(Instance, restLabel);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54);
  Time = NetworkManager__getTime(0LL);
  v57 = this->fields.isRarePriShopPurchased || finishedAt < Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  v58 = (System_String_o **)&StringLiteral_13490/*"TIME_REST_EVENTREWARD"*/;
  if ( v57 )
    v58 = (System_String_o **)&StringLiteral_13468/*"TIME_OVER_EVENTREWARD"*/;
  Instance = (DataManager_o *)LocalizationManager__Get(*v58, 0LL);
  if ( !restLabel )
    goto LABEL_50;
  UILabel__set_text(restLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0LL);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_50;
  v60 = -1033109504;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v60 = 0;
    v61 = mText->fields._stringLength - 2;
    if ( v61 <= 2 )
      v60 = LODWORD(flt_C0C2A4[v61]);
  }
  if ( !Instance )
    goto LABEL_50;
  v62 = -1076258406;
  v63 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, *(UnityEngine_Vector3_o *)&v60, 0LL);
}


void __fastcall ShopCurrencyInfoController__SetObjectList(
        ShopCurrencyInfoController_o *this,
        System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.objectList = objectList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.objectList,
    (int64_t)objectList,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopCurrencyInfoController__StopUpdateRemainTime(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1270D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15353/*"UpdateRemainTime"*/, method, v2);
    byte_4B1270D = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15353/*"UpdateRemainTime"*/,
    0LL);
}


void __fastcall ShopCurrencyInfoController__Update(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( this->fields.kind == 18 )
    ShopCurrencyInfoController__UpdateApLabel(this, method);
}


void __fastcall ShopCurrencyInfoController__UpdateApLabel(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currencyLabel2; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2
  UILabel_o *v7; // x19
  System_String_o *CurrencyNumber; // x0
  __int64 v9; // x1

  if ( (byte_4B12708 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12708 = 1;
  }
  currencyLabel2 = (UnityEngine_Object_o *)this->fields.currencyLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(currencyLabel2, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.currencyLabel2;
    CurrencyNumber = ShopCurrencyInfoController__GetCurrencyNumber((ShopCurrencyInfoController_o *)v5, 19, v6);
    if ( !v7 )
      sub_1BCAA3C(CurrencyNumber, v9);
    UILabel__set_text(v7, CurrencyNumber, 0LL);
  }
}


void __fastcall ShopCurrencyInfoController__UpdateRemainTime(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v11; // w20
  __int64 v12; // x1
  Il2CppObject *Item; // x21

  if ( (byte_4B1270F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B1270F = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v3);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_13:
    sub_1BCAA3C(objectList, v9);
  v11 = 0;
  while ( v11 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v11,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_13;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v11,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      if ( !objectList )
        goto LABEL_13;
      ShopBuyItemListViewObject__UpdateRemaingTime((ShopBuyItemListViewObject_o *)objectList, v9);
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v11;
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12711 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopCurrencyInfoController___c_TypeInfo, v1, v2);
    byte_4B12711 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ShopCurrencyInfoController___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ShopCurrencyInfoController___c_TypeInfo->static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.closedAt;
}