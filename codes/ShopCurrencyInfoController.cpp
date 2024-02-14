void __fastcall ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.currencySpritePosTypeB.fields.z = 1110441984LL;
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.y = xmmword_3225020;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall ShopCurrencyInfoController__GetApSpritePosition(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  float y; // s0
  float z; // s1
  float x; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = this->fields.currencySpritePosTypeA.fields.y;
  z = this->fields.currencySpritePosTypeA.fields.z;
  x = this->fields.currencySpritePosTypeB.fields.x;
  result.fields.z = x;
  result.fields.y = z;
  result.fields.x = y;
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v13; // w8
  UserItemMaster_o *v14; // x19
  int32_t mana; // w19
  LocalizationManager_c *v16; // x0
  int32_t MasterKind_k__BackingField; // w2
  int64_t v19; // x1
  UserItemMaster_o *v20; // x0
  int64_t v21; // x20

  if ( (byte_421A12F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v9);
    byte_421A12F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_68:
    sub_B0D97C(Instance);
  }
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v13 = kind - 2;
  v14 = (UserItemMaster_o *)Instance;
  switch ( v13 )
  {
    case 0:
    case 8:
    case 9:
      if ( !SelfUserGame )
        goto LABEL_68;
      mana = SelfUserGame->fields.mana;
      goto LABEL_10;
    case 5:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster || !v14 )
        goto LABEL_68;
      MasterKind_k__BackingField = MasterData_WarQuestSelectionMaster[1].fields._MasterKind_k__BackingField;
      goto LABEL_25;
    case 6:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster || !v14 )
        goto LABEL_68;
      MasterKind_k__BackingField = *(&MasterData_WarQuestSelectionMaster[1].fields._MasterKind_k__BackingField + 1);
LABEL_25:
      v19 = Instance;
      v20 = v14;
      goto LABEL_63;
    case 7:
    case 12:
    case 18:
      if ( !SelfUserGame )
        goto LABEL_68;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v16 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        return LocalizationManager__GetNumberFormat(mana, 0LL);
      goto LABEL_65;
    case 11:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v21 = Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v14 )
        goto LABEL_68;
      MasterKind_k__BackingField = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_62;
    case 14:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v21 = Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v14 )
        goto LABEL_68;
      MasterKind_k__BackingField = BalanceConfig_TypeInfo->static_fields->itemIdForShop13;
      goto LABEL_62;
    case 15:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v21 = Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v14 )
        goto LABEL_68;
      MasterKind_k__BackingField = BalanceConfig_TypeInfo->static_fields->ApSeedItemId;
      goto LABEL_62;
    case 16:
      if ( !SelfUserGame )
        goto LABEL_68;
      mana = UserGameEntity__getAct(SelfUserGame, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        return LocalizationManager__GetNumberFormat(mana, 0LL);
      }
      v16 = LocalizationManager_TypeInfo;
      goto LABEL_66;
    case 17:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v21 = Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v14 )
        goto LABEL_68;
      MasterKind_k__BackingField = BalanceConfig_TypeInfo->static_fields->itemIdForShop15;
LABEL_62:
      v20 = v14;
      v19 = v21;
LABEL_63:
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v20, v19, MasterKind_k__BackingField, 0LL);
      if ( !Instance )
        goto LABEL_68;
      mana = *(_DWORD *)(Instance + 28);
      v16 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_65:
        if ( !v16->_2.cctor_finished )
LABEL_66:
          j_il2cpp_runtime_class_init_0(v16);
      }
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    default:
      return (System_String_o *)StringLiteral_960/*"0"*/;
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

  if ( (byte_421A12E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19505/*"img_bg_seed"*/, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_19500/*"img_bg_mp"*/, v4);
    sub_B0D8A4(&StringLiteral_19497/*"img_bg_evocation"*/, v5);
    sub_B0D8A4(&StringLiteral_19498/*"img_bg_fragments"*/, v6);
    sub_B0D8A4(&StringLiteral_19490/*"img_bg_ap"*/, v7);
    sub_B0D8A4(&StringLiteral_19503/*"img_bg_rp"*/, v8);
    sub_B0D8A4(&StringLiteral_19499/*"img_bg_hgd"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_19507/*"img_bg_spsummon"*/, v11);
    byte_421A12E = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x12 )
    v12 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v12 = (System_String_o **)*(&off_3E6F140 + kind - 2);
  return *v12;
}


UnityEngine_Vector3_o __fastcall ShopCurrencyInfoController__GetCurrencySpritePosition(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeB; // x10
  float v6; // s1
  float v7; // s0
  float x; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (unsigned int)kind > 0x14 || ((1 << kind) & 0x1F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    p_currencySpritePosTypeB = &this->fields.currencySpritePosTypeB;
  }
  else
  {
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    p_currencySpritePosTypeB = &this->fields.currencySpritePosTypeB + 1;
  }
  v6 = *p_z;
  v7 = *p_y;
  x = p_currencySpritePosTypeB->fields.x;
  result.fields.z = x;
  result.fields.y = v6;
  result.fields.x = v7;
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
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventEntity_o *v10; // x20
  bool IsTimeStatusRecord; // w0
  bool v12; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A133 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421A133 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  v10 = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
      if ( !v10 || IsTimeStatusRecord )
        return 0;
      goto LABEL_16;
    }
LABEL_19:
    sub_B0D97C(Instance);
  }
  if ( !v10 )
    return 0;
LABEL_16:
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
      v5 = flt_32251C0[textCount - 2];
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
  UIAtlas_o **p_baseAtlas; // x22
  UnityEngine_Object_o *baseAtlas; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UISprite_o *v23; // x8
  System_Int32_array **mAtlas; // x1
  ShopCurrencyInfoController_o *v25; // x0
  const MethodInfo *v26; // x2
  struct UISprite_o *v27; // x23
  UISprite_o *v28; // x0
  System_String_o *v29; // x1
  struct UISprite_o *v30; // x23
  int32_t v31; // w1
  System_String_o *v32; // x24
  UISprite_o *v33; // x23
  ShopCurrencyInfoController_o *v34; // x0
  const MethodInfo *v35; // x2
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeB; // x10
  ShopCurrencyInfoController_o *v39; // x0
  UILabel_o *v40; // x23
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *itemInfo1; // x21
  UnityEngine_Object_o *itemInfo2; // x21
  _BOOL4 v44; // w21
  ShopCurrencyInfoController_o *v45; // x0
  const MethodInfo *v46; // x2
  struct UISprite_o **p_currencySprite2; // x23
  UISprite_o *v48; // x20
  ShopCurrencyInfoController_o *v49; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w20
  UISprite_o *currencySprite2; // x20
  System_String_o *v53; // x21
  ShopCurrencyInfoController_o *v54; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v56; // x2
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421A12C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_19501/*"img_bg_pp"*/, v8);
    byte_421A12C = 1;
  }
  this->fields.kind = kind;
  shopEventItemWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shopEventItemWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindow;
    if ( !gameObject )
      goto LABEL_91;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemLimitOverWindow;
    if ( !gameObject )
      goto LABEL_91;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(currencyWindow, 0LL, 0LL) )
    return;
  currencySprite = (UnityEngine_Object_o *)this->fields.currencySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(currencySprite, 0LL, 0LL) )
    return;
  currencyLabel = (UnityEngine_Object_o *)this->fields.currencyLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(currencyLabel, 0LL, 0LL) )
    return;
  p_baseAtlas = &this->fields.baseAtlas;
  baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v23 = this->fields.currencySprite;
    if ( !v23 )
      goto LABEL_91;
    mAtlas = (System_Int32_array **)v23->fields.mAtlas;
    *p_baseAtlas = (UIAtlas_o *)mAtlas;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseAtlas, mAtlas, v17, v18, v19, v20, v21, v22);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel;
  if ( !gameObject )
    goto LABEL_91;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencyWindow;
  if ( !gameObject )
    goto LABEL_91;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)gameObject,
    ((unsigned int)(kind - 2) < 0x13) & (0x6DBE1u >> (kind - 2)),
    0LL);
  if ( kind == 19 )
  {
    v30 = this->fields.currencySprite;
    v31 = 19;
    goto LABEL_48;
  }
  if ( kind == 17 )
  {
    v30 = this->fields.currencySprite;
    v31 = 17;
LABEL_48:
    v32 = ShopCurrencyInfoController__GetCurrencySprite(v25, v31, v26);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v28 = v30;
    v29 = v32;
    goto LABEL_52;
  }
  if ( kind != 16 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
    if ( !gameObject )
      goto LABEL_91;
    UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
    v33 = this->fields.currencySprite;
    gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v34, kind, v35);
    if ( !v33 )
      goto LABEL_91;
    UISprite__set_spriteName(v33, (System_String_o *)gameObject, 0LL);
    goto LABEL_56;
  }
  v27 = this->fields.currencySprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v28 = v27;
  v29 = (System_String_o *)StringLiteral_19501/*"img_bg_pp"*/;
LABEL_52:
  AtlasManager__SetShopBanner_27923456(v28, v29, 0LL);
LABEL_56:
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_91;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( (unsigned int)kind > 0x14 || ((1 << kind) & 0x1F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    p_currencySpritePosTypeB = &this->fields.currencySpritePosTypeB;
    if ( !gameObject )
      goto LABEL_91;
  }
  else
  {
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    p_currencySpritePosTypeB = &this->fields.currencySpritePosTypeB + 1;
    if ( !gameObject )
      goto LABEL_91;
  }
  v57.fields.x = *p_y;
  v57.fields.y = *p_z;
  v57.fields.z = p_currencySpritePosTypeB->fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v57, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_91;
  v39 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                          gameObject,
                                          gameObject->klass[2]._1.interopData);
  v40 = this->fields.currencyLabel;
  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v39, kind, v41);
  if ( !v40 )
    goto LABEL_91;
  UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
  itemInfo1 = (UnityEngine_Object_o *)this->fields.itemInfo1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemInfo1, 0LL, 0LL) )
  {
    itemInfo2 = (UnityEngine_Object_o *)this->fields.itemInfo2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(itemInfo2, 0LL, 0LL) )
    {
      GameObjectExtensions__SetLocalPosition_31178688(this->fields.itemInfo1, 0.0, 0.0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.itemInfo2;
      if ( !gameObject )
        goto LABEL_91;
      v44 = ((unsigned int)(state - 15) < 7) & (0x51u >> (state - 15));
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v44, 0LL);
      if ( v44 )
      {
        GameObjectExtensions__SetLocalPosition_31178688(this->fields.itemInfo1, -90.0, 0.0, 0LL);
        GameObjectExtensions__SetLocalPosition_31178688(this->fields.itemInfo2, 90.0, 0.0, 0LL);
        switch ( state )
        {
          case 21:
            goto LABEL_75;
          case 19:
            p_currencySprite2 = &this->fields.currencySprite2;
            currencySprite2 = this->fields.currencySprite2;
            v53 = ShopCurrencyInfoController__GetCurrencySprite(v45, 18, v46);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            AtlasManager__SetShopBanner_27923456(currencySprite2, v53, 0LL);
            v51 = 18;
LABEL_86:
            gameObject = (UnityEngine_Component_o *)*p_currencySprite2;
            if ( *p_currencySprite2 )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)gameObject,
                  *(UnityEngine_Vector3_o *)&this->fields.currencySpritePosTypeA.fields.y,
                  0LL);
                gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
                if ( gameObject )
                {
                  v54 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                                          gameObject,
                                                          gameObject->klass[2]._1.interopData);
                  currencyLabel2 = this->fields.currencyLabel2;
                  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v54, v51, v56);
                  if ( currencyLabel2 )
                  {
                    UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_91:
            sub_B0D97C(gameObject);
          case 15:
LABEL_75:
            p_currencySprite2 = &this->fields.currencySprite2;
            gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_91;
            UISprite__set_atlas((UISprite_o *)gameObject, *p_baseAtlas, 0LL);
            v48 = *p_currencySprite2;
            gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v49, 2, v50);
            if ( !v48 )
              goto LABEL_91;
            UISprite__set_spriteName(v48, (System_String_o *)gameObject, 0LL);
            v51 = 2;
            goto LABEL_86;
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
  int max_length; // w8
  unsigned int v31; // w25
  EventItemDisplayEntity_o *v32; // x8
  UnityEngine_Transform_o *v33; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v37; // s0
  signed __int64 size; // x23
  char v41; // w25
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  UIWidget_o *shopEventItemWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v46; // x24
  unsigned __int64 v47; // x9
  Il2CppClass **v48; // x8
  EventItemComponent_o *v49; // x25
  struct EventItemComponent_array *v50; // x8
  UnityEngine_Transform_o *transform; // x25
  int v52; // s0
  UIWidget_o *shopEventItemLimitOverWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v57; // x24
  unsigned __int64 v58; // x9
  Il2CppClass **v59; // x8
  EventItemComponent_o *v60; // x25
  struct EventItemComponent_array *v61; // x8
  UnityEngine_Transform_o *v62; // x25
  int v63; // s0
  UnityEngine_Object_o *infoPanel; // x20
  float v67; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v70; // s9
  const MethodInfo *v71; // x3
  int32_t v72; // w1
  __int64 v73; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421A12B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B0D8A4(&EventItemWindowMaker_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_421A12B = 1;
  }
  this->fields.eventId = eventId;
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (EventItemComponent_o *)UnityEngine_Object__op_Inequality(currencyWindow, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !eventItemList )
      goto LABEL_118;
    if ( !*(_QWORD *)&eventItemList->max_length )
    {
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, v25) )
      {
        case 4:
          v72 = 2;
          goto LABEL_117;
        case 8:
          v72 = 7;
          goto LABEL_117;
        case 9:
          v72 = 8;
          goto LABEL_117;
        case 10:
          v72 = 9;
          goto LABEL_117;
        case 12:
          v72 = 13;
LABEL_117:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v72, 0, v71);
          return;
        default:
          break;
      }
    }
    gameObject = (EventItemComponent_o *)this->fields.currencyWindow;
    if ( !gameObject )
      goto LABEL_118;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !gameObject )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  this->fields.kind = kind;
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_118;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_118;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_118;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
      {
LABEL_119:
        v73 = sub_B0D9A8(gameObject);
        sub_B0D948(v73, 0LL);
      }
      v32 = ListByEventIdAndScreenFlag->m_Items[v31];
      if ( !v32 )
        break;
      if ( v32->fields.pointType == 1 )
      {
        if ( !v29 )
          break;
        System_Collections_Generic_List_int___Add(
          v29,
          v32->fields.targetId,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_23;
    }
LABEL_118:
    sub_B0D97C(gameObject);
  }
LABEL_23:
  if ( isEventShop )
  {
    gameObject = (EventItemComponent_o *)this->fields.shopEventItemWindowPanel;
    if ( !gameObject )
      goto LABEL_118;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
    if ( !this->fields.shopEventItemWindowPanel )
      goto LABEL_118;
    v33 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel,
                                           0LL);
    if ( !gameObject )
      goto LABEL_118;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    }
    v75.fields.x = x;
    v75.fields.y = y;
    v75.fields.z = z;
    *(UnityEngine_Vector3_o *)&v37 = EventItemWindowMaker__GetPanelPosition(v75, 0LL);
    if ( !v33 )
      goto LABEL_118;
    UnityEngine_Transform__set_localPosition(v33, *(UnityEngine_Vector3_o *)&v37, 0LL);
  }
  if ( !v29 )
    goto LABEL_118;
  size = v29->fields._size;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(size, isForcedAdjustment, 0LL);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_118;
  v41 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0LL);
  if ( !gameObject )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v41 & 1) == 0, 0LL);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_118;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v41 & 1, 0LL);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_118;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_118;
  gameObject = (EventItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_118;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0LL) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v41 & 1, v42);
    if ( (v41 & 1) == 0 )
      goto LABEL_45;
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v41 & 1, v43);
    if ( (v41 & 1) == 0 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      }
      gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                             isEventShop,
                                             size,
                                             isForcedAdjustment,
                                             0LL);
      if ( !shopEventItemWindow )
        goto LABEL_118;
      UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0LL);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_118;
      v46 = 0LL;
      while ( 1 )
      {
        v47 = shopEventItemDrawList->max_length;
        if ( (__int64)v46 >= (int)v47 )
          goto LABEL_94;
        if ( v46 >= v47 )
          goto LABEL_119;
        v48 = &shopEventItemDrawList->obj.klass + v46;
        v49 = (EventItemComponent_o *)v48[4];
        if ( (__int64)v46 >= size )
        {
          if ( !v49 )
            goto LABEL_118;
          EventItemComponent__Clear((EventItemComponent_o *)v48[4], 0LL);
        }
        else
        {
          if ( v46 >= (unsigned int)v29->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v49 )
            goto LABEL_118;
          EventItemComponent__Set(v49, v29->fields._items->m_Items[v46 + 1], 0LL);
          v50 = this->fields.shopEventItemDrawList;
          if ( !v50 )
            goto LABEL_118;
          if ( v46 >= v50->max_length )
            goto LABEL_119;
          gameObject = v50->m_Items[v46];
          if ( !gameObject )
            goto LABEL_118;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          }
          *(UnityEngine_Vector3_o *)&v52 = EventItemWindowMaker__GetEventItemPosition(
                                             isEventShop,
                                             v46,
                                             size,
                                             isForcedAdjustment,
                                             0LL);
          if ( !transform )
            goto LABEL_118;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v52, 0LL);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v46;
        if ( !shopEventItemDrawList )
          goto LABEL_118;
      }
    }
  }
  shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                         isEventShop,
                                         size,
                                         isForcedAdjustment,
                                         0LL);
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_118;
  UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0LL);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_118;
  v57 = 0LL;
  while ( 1 )
  {
    v58 = shopEventItemDrawLimitOverList->max_length;
    if ( (__int64)v57 >= (int)v58 )
      break;
    if ( v57 >= v58 )
      goto LABEL_119;
    v59 = &shopEventItemDrawLimitOverList->obj.klass + v57;
    v60 = (EventItemComponent_o *)v59[4];
    if ( (__int64)v57 >= size )
    {
      if ( !v60 )
        goto LABEL_118;
      EventItemComponent__Clear((EventItemComponent_o *)v59[4], 0LL);
    }
    else
    {
      if ( v57 >= (unsigned int)v29->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v60 )
        goto LABEL_118;
      EventItemComponent__Set(v60, v29->fields._items->m_Items[v57 + 1], 0LL);
      v61 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v61 )
        goto LABEL_118;
      if ( v57 >= v61->max_length )
        goto LABEL_119;
      gameObject = v61->m_Items[v57];
      if ( !gameObject )
        goto LABEL_118;
      v62 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      }
      *(UnityEngine_Vector3_o *)&v63 = EventItemWindowMaker__GetEventItemPosition(
                                         isEventShop,
                                         v57,
                                         size,
                                         isForcedAdjustment,
                                         0LL);
      if ( !v62 )
        goto LABEL_118;
      UnityEngine_Transform__set_localPosition(v62, *(UnityEngine_Vector3_o *)&v63, 0LL);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v57;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_118;
  }
LABEL_94:
  if ( isEventShop )
  {
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    }
    this->fields._ItemBaseWindowHeight_k__BackingField = EventItemWindowMaker__GetItemBaseWindowHeight(
                                                           size,
                                                           isForcedAdjustment,
                                                           0LL);
    infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
    {
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_118;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_118;
      v76 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
      v67 = v76.fields.z;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      }
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_118;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v70 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_118;
      v77.fields.x = v70;
      v77.fields.z = v67;
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
  DataManager_o *Instance; // x0
  System_Int32_array *EventItemList; // x22
  bool IsForcedAdjustmentDialog; // w5
  const MethodInfo *v15; // x6

  if ( (byte_421A12A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_421A12A = 1;
  }
  if ( kind == 6 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        eventId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
    {
      sub_B0D97C(Instance);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ShopCurrencyInfoController_o *v9; // x19
  __int64 v10; // x8
  System_Int32_array **v11; // x1
  ShopCurrencyInfoController_o **p_eventItemTimeLabel; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x8
  System_Int32_array **v20; // x1
  ShopCurrencyInfoController_o **p_eventItemRestLabel; // x20

  v9 = this;
  if ( (byte_421A131 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_B0D8A4(&StringLiteral_1/*""*/, isLimitOver);
    byte_421A131 = 1;
  }
  v10 = 152LL;
  if ( isLimitOver )
    v10 = 168LL;
  if ( !v9 )
    goto LABEL_11;
  v11 = *(System_Int32_array ***)((char *)&v9->klass + v10);
  v9->fields.eventItemTimeLabel = (struct UILabel_o *)v11;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v9->fields.eventItemTimeLabel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.eventItemTimeLabel,
    v11,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = 160LL;
  if ( isLimitOver )
    v19 = 176LL;
  v20 = *(System_Int32_array ***)((char *)&v9->klass + v19);
  p_eventItemRestLabel = (ShopCurrencyInfoController_o **)&v9->fields.eventItemRestLabel;
  v9->fields.eventItemRestLabel = (struct UILabel_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v9->fields.eventItemRestLabel, v20, v13, v14, v15, v16, v17, v18);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (this = *p_eventItemRestLabel) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(this);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ShopCurrencyInfoController_o *v10; // x19
  __int64 v11; // x8
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x8
  System_Int32_array **v20; // x1
  ShopCurrencyInfoController_o *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1

  v10 = this;
  if ( (byte_421A130 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_B0D8A4(&StringLiteral_15109/*"UpdateRemainTime"*/, *(_QWORD *)&eventId);
    byte_421A130 = 1;
  }
  v11 = 152LL;
  if ( isLimitOver )
    v11 = 168LL;
  if ( !v10 )
    sub_B0D97C(this);
  v12 = *(System_Int32_array ***)((char *)&v10->klass + v11);
  v10->fields.eventItemTimeLabel = (struct UILabel_o *)v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v10->fields.eventItemTimeLabel,
    v12,
    (System_String_array **)isLimitOver,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v19 = 160LL;
  if ( isLimitOver )
    v19 = 176LL;
  v20 = *(System_Int32_array ***)((char *)&v10->klass + v19);
  v10->fields.eventItemRestLabel = (struct UILabel_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.eventItemRestLabel, v20, v13, v14, v15, v16, v17, v18);
  v10->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v21, eventId, v22);
  ShopCurrencyInfoController__UpdateRemainTime(v10, v23);
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15109/*"UpdateRemainTime"*/,
    0LL);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15109/*"UpdateRemainTime"*/,
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
  __int64 v20; // x1
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_o **p_eventEntity; // x23
  DataManager_o *Instance; // x0
  int64_t finishedAt; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v28; // x8
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__48_0; // x24
  Il2CppObject *v31; // x25
  struct ShopCurrencyInfoController___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int64_t v39; // x0
  int64_t Time; // x23
  __int64 *v42; // x8
  struct System_String_o *mText; // x8
  int v44; // s0
  unsigned int v45; // w8
  int v46; // s1
  int v47; // s2

  if ( (byte_421A135 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, restLabel);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Max_ShopEntity___, v9);
    sub_B0D8A4(&Method_System_Func_ShopEntity__long___ctor__, v10);
    sub_B0D8A4(&System_Func_ShopEntity__long__TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__, v15);
    sub_B0D8A4(&ShopCurrencyInfoController___c_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_13416/*"TIME_OVER_EVENTREWARD"*/, v17);
    sub_B0D8A4(&StringLiteral_12202/*"SHOP_INDEFINITE_PERIOD"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    sub_B0D8A4(&StringLiteral_13438/*"TIME_REST_EVENTREWARD"*/, v20);
    byte_421A135 = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_61;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_61;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  (WarEntity_o **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !timeLabel )
        goto LABEL_61;
      UILabel__set_text(timeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !restLabel )
        goto LABEL_61;
      UILabel__set_text(restLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
    eventEntity = *p_eventEntity;
    if ( !*p_eventEntity )
      goto LABEL_61;
  }
  finishedAt = eventEntity->fields.finishedAt;
  if ( this->fields.isRarePriShopPurchased )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12202/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
    if ( !timeLabel )
      goto LABEL_61;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_61;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !*p_eventEntity || !Instance )
      goto LABEL_61;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              (*p_eventEntity)->fields.id,
                                                                              0LL);
    v28 = ShopCurrencyInfoController___c_TypeInfo;
    if ( (BYTE3(ShopCurrencyInfoController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo);
      v28 = ShopCurrencyInfoController___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__48_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__48_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                                 System_Func_ShopEntity__long__TypeInfo,
                                                                                 v25,
                                                                                 v26);
      System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
        _9__48_0,
        v31,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__,
        (const MethodInfo_2619D24 *)Method_System_Func_ShopEntity__long___ctor__);
      v32 = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      v32->__9__48_0 = (struct System_Func_ShopEntity__long__o *)_9__48_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v32->__9__48_0,
        (System_Int32_array **)_9__48_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = System_Linq_Enumerable__Max_ShopEntity_(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__48_0,
            (const MethodInfo_1B4DFA0 *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v39 && v39 > 0 )
      finishedAt = v39;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1LL, 0LL);
    if ( !timeLabel )
LABEL_61:
      sub_B0D97C(Instance);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( finishedAt < Time || this->fields.isRarePriShopPurchased )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_13416/*"TIME_OVER_EVENTREWARD"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = &StringLiteral_13438/*"TIME_REST_EVENTREWARD"*/;
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v42, 0LL);
  if ( !restLabel )
    goto LABEL_61;
  UILabel__set_text(restLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0LL);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_61;
  v44 = -1033109504;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v44 = 0;
    v45 = mText->fields.m_stringLength - 2;
    if ( v45 <= 2 )
      v44 = LODWORD(flt_32251C0[v45]);
  }
  if ( !Instance )
    goto LABEL_61;
  v46 = -1076258406;
  v47 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, *(UnityEngine_Vector3_o *)&v44, 0LL);
}


void __fastcall ShopCurrencyInfoController__SetObjectList(
        ShopCurrencyInfoController_o *this,
        System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.objectList = objectList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)objectList,
    (System_String_array **)method,
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
  if ( (byte_421A132 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15109/*"UpdateRemainTime"*/, method);
    byte_421A132 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15109/*"UpdateRemainTime"*/,
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

  if ( (byte_421A12D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421A12D = 1;
  }
  currencyLabel2 = (UnityEngine_Object_o *)this->fields.currencyLabel2;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(currencyLabel2, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.currencyLabel2;
    CurrencyNumber = ShopCurrencyInfoController__GetCurrencyNumber((ShopCurrencyInfoController_o *)v4, 18, v5);
    if ( !v6 )
      sub_B0D97C(CurrencyNumber);
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
  ShopBuyItemListViewObject_o *v6; // x0
  struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList; // x20
  __int64 v8; // x21
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *v12; // x20

  if ( (byte_421A134 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421A134 = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_B0D97C(v6);
  v8 = 4LL;
  while ( 1 )
  {
    v9 = v8 - 4;
    if ( v8 - 4 >= objectList->fields._size )
      break;
    if ( v9 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v8);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = (ShopBuyItemListViewObject_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      v12 = this->fields.objectList;
      if ( !v12 )
        goto LABEL_18;
      if ( v9 >= (unsigned int)v12->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v6 = (ShopBuyItemListViewObject_o *)*((_QWORD *)&v12->fields._items->obj.klass + v8);
      if ( !v6 )
        goto LABEL_18;
      ShopBuyItemListViewObject__UpdateRemaingTime(v6, v11);
    }
    objectList = this->fields.objectList;
    ++v8;
    if ( !objectList )
      goto LABEL_18;
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
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x0

  if ( (byte_421228C & 1) == 0 )
  {
    sub_B0D8A4(&ShopCurrencyInfoController___c_TypeInfo, v1);
    byte_421228C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ShopCurrencyInfoController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.closedAt;
}