void __fastcall ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.currencySpritePosTypeB.fields.z = 1110441984LL;
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.y = xmmword_3157400;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v13; // x0
  WarQuestSelectionMaster_o *v14; // x0
  int v15; // w8
  UserItemMaster_o *v16; // x19
  int32_t mana; // w19
  LocalizationManager_c *v18; // x0
  int64_t UserId; // x0
  int32_t MasterKind_k__BackingField; // w2
  int64_t v22; // x1
  UserItemMaster_o *v23; // x0
  int64_t v24; // x20
  UserItemEntity_o *EntityDefinitely; // x0

  if ( (byte_40FF835 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v9);
    byte_40FF835 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___),
        (v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_68:
    sub_B170D4();
  }
  v14 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v13,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v15 = kind - 2;
  v16 = (UserItemMaster_o *)v14;
  switch ( v15 )
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
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster || !v16 )
        goto LABEL_68;
      MasterKind_k__BackingField = MasterData_WarQuestSelectionMaster[1].fields._MasterKind_k__BackingField;
      goto LABEL_25;
    case 6:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster || !v16 )
        goto LABEL_68;
      MasterKind_k__BackingField = *(&MasterData_WarQuestSelectionMaster[1].fields._MasterKind_k__BackingField + 1);
LABEL_25:
      v22 = UserId;
      v23 = v16;
      goto LABEL_63;
    case 7:
    case 12:
    case 18:
      if ( !SelfUserGame )
        goto LABEL_68;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v18 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        return LocalizationManager__GetNumberFormat(mana, 0LL);
      goto LABEL_65;
    case 11:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v24 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v16 )
        goto LABEL_68;
      MasterKind_k__BackingField = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_62;
    case 14:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v24 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v16 )
        goto LABEL_68;
      MasterKind_k__BackingField = BalanceConfig_TypeInfo->static_fields->itemIdForShop13;
      goto LABEL_62;
    case 15:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v24 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v16 )
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
      v18 = LocalizationManager_TypeInfo;
      goto LABEL_66;
    case 17:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v24 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !v16 )
        goto LABEL_68;
      MasterKind_k__BackingField = BalanceConfig_TypeInfo->static_fields->itemIdForShop15;
LABEL_62:
      v23 = v16;
      v22 = v24;
LABEL_63:
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(v23, v22, MasterKind_k__BackingField, 0LL);
      if ( !EntityDefinitely )
        goto LABEL_68;
      mana = EntityDefinitely->fields.num;
      v18 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
LABEL_65:
        if ( !v18->_2.cctor_finished )
LABEL_66:
          j_il2cpp_runtime_class_init_0(v18);
      }
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    default:
      return (System_String_o *)StringLiteral_951/*"0"*/;
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

  if ( (byte_40FF834 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19369/*"img_bg_seed"*/, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_19364/*"img_bg_mp"*/, v4);
    sub_B16FFC(&StringLiteral_19361/*"img_bg_evocation"*/, v5);
    sub_B16FFC(&StringLiteral_19362/*"img_bg_fragments"*/, v6);
    sub_B16FFC(&StringLiteral_19354/*"img_bg_ap"*/, v7);
    sub_B16FFC(&StringLiteral_19367/*"img_bg_rp"*/, v8);
    sub_B16FFC(&StringLiteral_19363/*"img_bg_hgd"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    sub_B16FFC(&StringLiteral_19371/*"img_bg_spsummon"*/, v11);
    byte_40FF834 = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x12 )
    v12 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v12 = (System_String_o **)*(&off_3D6AB80 + kind - 2);
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
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserEventEntity_o *v11; // x20
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x0
  bool IsTimeStatusRecord; // w0
  bool v15; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF839 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF839 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  v11 = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, UserId, eventId, 0LL);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v12 )
    goto LABEL_19;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v12,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v13 )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v13,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
      if ( !v11 || IsTimeStatusRecord )
        return 0;
      goto LABEL_16;
    }
LABEL_19:
    sub_B170D4();
  }
  if ( !v11 )
    return 0;
LABEL_16:
  v15 = 1;
  if ( !UserEventEntity__getEventFlag(v11, 1, 0LL) )
    return 0;
  return v15;
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
      v5 = flt_31575A0[textCount - 2];
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
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x22
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Object_o *currencyWindow; // x22
  UnityEngine_Object_o *currencySprite; // x22
  UnityEngine_Object_o *currencyLabel; // x22
  UIAtlas_o **p_baseAtlas; // x22
  UnityEngine_Object_o *baseAtlas; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UISprite_o *v26; // x8
  System_Int32_array **mAtlas; // x1
  UnityEngine_Component_o *shopEventItemWindowPanel; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  ShopCurrencyInfoController_o *v32; // x0
  const MethodInfo *v33; // x2
  struct UISprite_o *v34; // x23
  UISprite_o *v35; // x0
  System_String_o *v36; // x1
  struct UISprite_o *v37; // x23
  int32_t v38; // w1
  System_String_o *v39; // x24
  UISprite_o *v40; // x0
  UISprite_o *v41; // x23
  ShopCurrencyInfoController_o *v42; // x0
  const MethodInfo *v43; // x2
  System_String_o *v44; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_Transform_o *transform; // x0
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeB; // x10
  struct UISprite_o *v50; // x0
  ShopCurrencyInfoController_o *v51; // x0
  UILabel_o *v52; // x23
  const MethodInfo *v53; // x2
  System_String_o *CurrencyNumber; // x0
  UnityEngine_Object_o *itemInfo1; // x21
  UnityEngine_Object_o *itemInfo2; // x21
  UnityEngine_GameObject_o *v57; // x0
  _BOOL4 v58; // w21
  ShopCurrencyInfoController_o *v59; // x0
  const MethodInfo *v60; // x2
  UISprite_o *v61; // x0
  UnityEngine_Component_o **p_currencySprite2; // x23
  UnityEngine_Component_o *v63; // x20
  ShopCurrencyInfoController_o *v64; // x0
  const MethodInfo *v65; // x2
  System_String_o *v66; // x0
  int32_t v67; // w20
  UISprite_o *currencySprite2; // x20
  System_String_o *v69; // x21
  UnityEngine_Transform_o *v70; // x0
  struct UISprite_o *v71; // x0
  ShopCurrencyInfoController_o *v72; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v74; // x2
  System_String_o *v75; // x0
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FF832 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19365/*"img_bg_pp"*/, v8);
    byte_40FF832 = 1;
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
    v10 = (UnityEngine_Component_o *)this->fields.shopEventItemWindow;
    if ( !v10 )
      goto LABEL_91;
    gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
    if ( !gameObject )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0LL, 0LL) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.shopEventItemLimitOverWindow;
    if ( !v13 )
      goto LABEL_91;
    v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
    if ( !v14 )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive(v14, 0, 0LL);
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
  if ( UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL) )
  {
    v26 = this->fields.currencySprite;
    if ( !v26 )
      goto LABEL_91;
    mAtlas = (System_Int32_array **)v26->fields.mAtlas;
    *p_baseAtlas = (UIAtlas_o *)mAtlas;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseAtlas, mAtlas, v20, v21, v22, v23, v24, v25);
  }
  shopEventItemWindowPanel = (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel;
  if ( !shopEventItemWindowPanel )
    goto LABEL_91;
  v29 = UnityEngine_Component__get_gameObject(shopEventItemWindowPanel, 0LL);
  if ( !v29 )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive(v29, 1, 0LL);
  v30 = (UnityEngine_Component_o *)this->fields.currencyWindow;
  if ( !v30 )
    goto LABEL_91;
  v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
  if ( !v31 )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive(v31, ((unsigned int)(kind - 2) < 0x13) & (0x6DBE1u >> (kind - 2)), 0LL);
  if ( kind == 19 )
  {
    v37 = this->fields.currencySprite;
    v38 = 19;
    goto LABEL_48;
  }
  if ( kind == 17 )
  {
    v37 = this->fields.currencySprite;
    v38 = 17;
LABEL_48:
    v39 = ShopCurrencyInfoController__GetCurrencySprite(v32, v38, v33);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v35 = v37;
    v36 = v39;
    goto LABEL_52;
  }
  if ( kind != 16 )
  {
    v40 = this->fields.currencySprite;
    if ( !v40 )
      goto LABEL_91;
    UISprite__set_atlas(v40, this->fields.baseAtlas, 0LL);
    v41 = this->fields.currencySprite;
    v44 = ShopCurrencyInfoController__GetCurrencySprite(v42, kind, v43);
    if ( !v41 )
      goto LABEL_91;
    UISprite__set_spriteName(v41, v44, 0LL);
    goto LABEL_56;
  }
  v34 = this->fields.currencySprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v35 = v34;
  v36 = (System_String_o *)StringLiteral_19365/*"img_bg_pp"*/;
LABEL_52:
  AtlasManager__SetShopBanner_28586476(v35, v36, 0LL);
LABEL_56:
  v45 = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !v45 )
    goto LABEL_91;
  transform = UnityEngine_Component__get_transform(v45, 0LL);
  if ( (unsigned int)kind > 0x14 || ((1 << kind) & 0x1F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    p_currencySpritePosTypeB = &this->fields.currencySpritePosTypeB;
    if ( !transform )
      goto LABEL_91;
  }
  else
  {
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    p_currencySpritePosTypeB = &this->fields.currencySpritePosTypeB + 1;
    if ( !transform )
      goto LABEL_91;
  }
  v76.fields.x = *p_y;
  v76.fields.y = *p_z;
  v76.fields.z = p_currencySpritePosTypeB->fields.x;
  UnityEngine_Transform__set_localPosition(transform, v76, 0LL);
  v50 = this->fields.currencySprite;
  if ( !v50 )
    goto LABEL_91;
  v51 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v50->klass->vtable._33_MakePixelPerfect.method)(
                                          v50,
                                          v50->klass->vtable._34_get_minWidth.methodPtr);
  v52 = this->fields.currencyLabel;
  CurrencyNumber = ShopCurrencyInfoController__GetCurrencyNumber(v51, kind, v53);
  if ( !v52 )
    goto LABEL_91;
  UILabel__set_text(v52, CurrencyNumber, 0LL);
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
      GameObjectExtensions__SetLocalPosition_27419968(this->fields.itemInfo1, 0.0, 0.0, 0LL);
      v57 = this->fields.itemInfo2;
      if ( !v57 )
        goto LABEL_91;
      v58 = ((unsigned int)(state - 15) < 7) & (0x51u >> (state - 15));
      UnityEngine_GameObject__SetActive(v57, v58, 0LL);
      if ( v58 )
      {
        GameObjectExtensions__SetLocalPosition_27419968(this->fields.itemInfo1, -90.0, 0.0, 0LL);
        GameObjectExtensions__SetLocalPosition_27419968(this->fields.itemInfo2, 90.0, 0.0, 0LL);
        switch ( state )
        {
          case 21:
            goto LABEL_75;
          case 19:
            p_currencySprite2 = (UnityEngine_Component_o **)&this->fields.currencySprite2;
            currencySprite2 = this->fields.currencySprite2;
            v69 = ShopCurrencyInfoController__GetCurrencySprite(v59, 18, v60);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            AtlasManager__SetShopBanner_28586476(currencySprite2, v69, 0LL);
            v67 = 18;
LABEL_86:
            if ( *p_currencySprite2 )
            {
              v70 = UnityEngine_Component__get_transform(*p_currencySprite2, 0LL);
              if ( v70 )
              {
                UnityEngine_Transform__set_localPosition(
                  v70,
                  *(UnityEngine_Vector3_o *)&this->fields.currencySpritePosTypeA.fields.y,
                  0LL);
                v71 = this->fields.currencySprite2;
                if ( v71 )
                {
                  v72 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v71->klass->vtable._33_MakePixelPerfect.method)(
                                                          v71,
                                                          v71->klass->vtable._34_get_minWidth.methodPtr);
                  currencyLabel2 = this->fields.currencyLabel2;
                  v75 = ShopCurrencyInfoController__GetCurrencyNumber(v72, v67, v74);
                  if ( currencyLabel2 )
                  {
                    UILabel__set_text(currencyLabel2, v75, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_91:
            sub_B170D4();
          case 15:
LABEL_75:
            p_currencySprite2 = (UnityEngine_Component_o **)&this->fields.currencySprite2;
            v61 = this->fields.currencySprite2;
            if ( !v61 )
              goto LABEL_91;
            UISprite__set_atlas(v61, *p_baseAtlas, 0LL);
            v63 = *p_currencySprite2;
            v66 = ShopCurrencyInfoController__GetCurrencySprite(v64, 2, v65);
            if ( !v63 )
              goto LABEL_91;
            UISprite__set_spriteName((UISprite_o *)v63, v66, 0LL);
            v67 = 2;
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
  const MethodInfo *v24; // x1
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  EventItemDisplayMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_int__o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  int max_length; // w8
  unsigned int v39; // w25
  EventItemDisplayEntity_o *v40; // x8
  UnityEngine_Component_o *shopEventItemWindowPanel; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v43; // x23
  UnityEngine_Transform_o *v44; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  int v48; // s0
  signed __int64 size; // x23
  bool IsLimitOverWindow; // w0
  bool v53; // w25
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *shopEventItemLimitOverWindow; // x0
  UnityEngine_GameObject_o *v56; // x0
  WebViewManager_o *v57; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x0
  EventDetailEntity_o *Entity; // x0
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x3
  UIWidget_o *shopEventItemWindow; // x24
  int32_t EventItemWindowHeight; // w0
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v65; // x24
  unsigned __int64 v66; // x9
  Il2CppClass **v67; // x8
  EventItemComponent_o *v68; // x25
  struct EventItemComponent_array *v69; // x8
  UnityEngine_Component_o *v70; // x0
  UnityEngine_Transform_o *v71; // x25
  int v72; // s0
  UIWidget_o *v75; // x24
  int32_t v76; // w0
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v78; // x24
  unsigned __int64 v79; // x9
  Il2CppClass **v80; // x8
  EventItemComponent_o *v81; // x25
  struct EventItemComponent_array *v82; // x8
  UnityEngine_Component_o *v83; // x0
  UnityEngine_Transform_o *v84; // x25
  int v85; // s0
  UnityEngine_Object_o *infoPanel; // x20
  UnityEngine_Component_o *v89; // x0
  UnityEngine_Transform_o *v90; // x0
  float v91; // s8
  float ItemBaseWindowX; // s0
  UnityEngine_Component_o *v93; // x0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v95; // s9
  UnityEngine_Transform_o *v96; // x0
  const MethodInfo *v97; // x3
  int32_t v98; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FF831 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B16FFC(&EventItemWindowMaker_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40FF831 = 1;
  }
  this->fields.eventId = eventId;
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currencyWindow, 0LL, 0LL) )
  {
    if ( !eventItemList )
      goto LABEL_118;
    if ( !*(_QWORD *)&eventItemList->max_length )
    {
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, v24) )
      {
        case 4:
          v98 = 2;
          goto LABEL_117;
        case 8:
          v98 = 7;
          goto LABEL_117;
        case 9:
          v98 = 8;
          goto LABEL_117;
        case 10:
          v98 = 9;
          goto LABEL_117;
        case 12:
          v98 = 13;
LABEL_117:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v98, 0, v97);
          return;
        default:
          break;
      }
    }
    v25 = (UnityEngine_Component_o *)this->fields.currencyWindow;
    if ( !v25 )
      goto LABEL_118;
    gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
    if ( !gameObject )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  this->fields.kind = kind;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  MasterData_WarQuestSelectionMaster = (EventItemDisplayMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_118;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 MasterData_WarQuestSelectionMaster,
                                 eventId,
                                 8,
                                 0,
                                 0LL);
  v34 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v30,
                                                    v31,
                                                    v32,
                                                    v33);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_118;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
      {
LABEL_119:
        sub_B17100(v35, v36, v37);
        sub_B170A0();
      }
      v40 = ListByEventIdAndScreenFlag->m_Items[v39];
      if ( !v40 )
        break;
      if ( v40->fields.pointType == 1 )
      {
        if ( !v34 )
          break;
        System_Collections_Generic_List_int___Add(
          v34,
          v40->fields.targetId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_23;
    }
LABEL_118:
    sub_B170D4();
  }
LABEL_23:
  if ( isEventShop )
  {
    shopEventItemWindowPanel = (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel;
    if ( !shopEventItemWindowPanel )
      goto LABEL_118;
    transform = UnityEngine_Component__get_transform(shopEventItemWindowPanel, 0LL);
    if ( !this->fields.shopEventItemWindowPanel )
      goto LABEL_118;
    v43 = transform;
    v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel, 0LL);
    if ( !v44 )
      goto LABEL_118;
    localPosition = UnityEngine_Transform__get_localPosition(v44, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    }
    v100.fields.x = x;
    v100.fields.y = y;
    v100.fields.z = z;
    *(UnityEngine_Vector3_o *)&v48 = EventItemWindowMaker__GetPanelPosition(v100, 0LL);
    if ( !v43 )
      goto LABEL_118;
    UnityEngine_Transform__set_localPosition(v43, *(UnityEngine_Vector3_o *)&v48, 0LL);
  }
  if ( !v34 )
    goto LABEL_118;
  size = v34->fields._size;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  IsLimitOverWindow = EventItemWindowMaker__GetIsLimitOverWindow(size, isForcedAdjustment, 0LL);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_118;
  v53 = IsLimitOverWindow;
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.shopEventItemWindow, 0LL);
  if ( !v54 )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive(v54, !v53, 0LL);
  shopEventItemLimitOverWindow = (UnityEngine_Component_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_118;
  v56 = UnityEngine_Component__get_gameObject(shopEventItemLimitOverWindow, 0LL);
  if ( !v56 )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive(v56, v53, 0LL);
  v57 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v57 )
    goto LABEL_118;
  v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v57,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v58 )
    goto LABEL_118;
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v58,
                                    eventId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_118;
  if ( EventDetailEntity__HasFlag(Entity, 0x4000000000LL, 0LL) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v53, v60);
    if ( !v53 )
      goto LABEL_45;
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v53, v61);
    if ( !v53 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      }
      EventItemWindowHeight = EventItemWindowMaker__GetEventItemWindowHeight(isEventShop, size, isForcedAdjustment, 0LL);
      if ( !shopEventItemWindow )
        goto LABEL_118;
      UIWidget__set_height(shopEventItemWindow, EventItemWindowHeight, 0LL);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_118;
      v65 = 0LL;
      while ( 1 )
      {
        v66 = shopEventItemDrawList->max_length;
        if ( (__int64)v65 >= (int)v66 )
          goto LABEL_94;
        if ( v65 >= v66 )
          goto LABEL_119;
        v67 = &shopEventItemDrawList->obj.klass + v65;
        v68 = (EventItemComponent_o *)v67[4];
        if ( (__int64)v65 >= size )
        {
          if ( !v68 )
            goto LABEL_118;
          EventItemComponent__Clear((EventItemComponent_o *)v67[4], 0LL);
        }
        else
        {
          if ( v65 >= (unsigned int)v34->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v68 )
            goto LABEL_118;
          EventItemComponent__Set(v68, v34->fields._items->m_Items[v65 + 1], 0LL);
          v69 = this->fields.shopEventItemDrawList;
          if ( !v69 )
            goto LABEL_118;
          if ( v65 >= v69->max_length )
            goto LABEL_119;
          v70 = (UnityEngine_Component_o *)v69->m_Items[v65];
          if ( !v70 )
            goto LABEL_118;
          v71 = UnityEngine_Component__get_transform(v70, 0LL);
          if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          }
          *(UnityEngine_Vector3_o *)&v72 = EventItemWindowMaker__GetEventItemPosition(
                                             isEventShop,
                                             v65,
                                             size,
                                             isForcedAdjustment,
                                             0LL);
          if ( !v71 )
            goto LABEL_118;
          UnityEngine_Transform__set_localPosition(v71, *(UnityEngine_Vector3_o *)&v72, 0LL);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v65;
        if ( !shopEventItemDrawList )
          goto LABEL_118;
      }
    }
  }
  v75 = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  }
  v76 = EventItemWindowMaker__GetEventItemWindowHeight(isEventShop, size, isForcedAdjustment, 0LL);
  if ( !v75 )
    goto LABEL_118;
  UIWidget__set_height(v75, v76, 0LL);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_118;
  v78 = 0LL;
  while ( 1 )
  {
    v79 = shopEventItemDrawLimitOverList->max_length;
    if ( (__int64)v78 >= (int)v79 )
      break;
    if ( v78 >= v79 )
      goto LABEL_119;
    v80 = &shopEventItemDrawLimitOverList->obj.klass + v78;
    v81 = (EventItemComponent_o *)v80[4];
    if ( (__int64)v78 >= size )
    {
      if ( !v81 )
        goto LABEL_118;
      EventItemComponent__Clear((EventItemComponent_o *)v80[4], 0LL);
    }
    else
    {
      if ( v78 >= (unsigned int)v34->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v81 )
        goto LABEL_118;
      EventItemComponent__Set(v81, v34->fields._items->m_Items[v78 + 1], 0LL);
      v82 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v82 )
        goto LABEL_118;
      if ( v78 >= v82->max_length )
        goto LABEL_119;
      v83 = (UnityEngine_Component_o *)v82->m_Items[v78];
      if ( !v83 )
        goto LABEL_118;
      v84 = UnityEngine_Component__get_transform(v83, 0LL);
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      }
      *(UnityEngine_Vector3_o *)&v85 = EventItemWindowMaker__GetEventItemPosition(
                                         isEventShop,
                                         v78,
                                         size,
                                         isForcedAdjustment,
                                         0LL);
      if ( !v84 )
        goto LABEL_118;
      UnityEngine_Transform__set_localPosition(v84, *(UnityEngine_Vector3_o *)&v85, 0LL);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v78;
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
      v89 = (UnityEngine_Component_o *)this->fields.infoPanel;
      if ( !v89 )
        goto LABEL_118;
      v90 = UnityEngine_Component__get_transform(v89, 0LL);
      if ( !v90 )
        goto LABEL_118;
      v101 = UnityEngine_Transform__get_localPosition(v90, 0LL);
      v91 = v101.fields.z;
      if ( (BYTE3(EventItemWindowMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      }
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
      v93 = (UnityEngine_Component_o *)this->fields.infoPanel;
      if ( !v93 )
        goto LABEL_118;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v95 = ItemBaseWindowX;
      v96 = UnityEngine_Component__get_transform(v93, 0LL);
      if ( !v96 )
        goto LABEL_118;
      v102.fields.x = v95;
      v102.fields.z = v91;
      v102.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition(v96, v102, 0LL);
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
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *EventItemList; // x22
  WebViewManager_o *v15; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x0
  EventDetailEntity_o *Entity; // x0
  bool IsForcedAdjustmentDialog; // w5
  const MethodInfo *v19; // x6

  if ( (byte_40FF830 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FF830 = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
      || (EventItemList = ShopMaster__GetEventItemList(MasterData_WarQuestSelectionMaster, eventId, 0LL),
          (v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v15,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
      || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v16,
                                            eventId,
                                            (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
    {
      sub_B170D4();
    }
    IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(Entity, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x8
  struct UILabel_o *v11; // x1
  UILabel_o **p_eventItemTimeLabel; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x8
  struct UILabel_o *v20; // x1
  UILabel_o **p_eventItemRestLabel; // x20

  if ( (byte_40FF837 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, isLimitOver);
    byte_40FF837 = 1;
  }
  v10 = 152LL;
  if ( isLimitOver )
    v10 = 168LL;
  if ( !this )
    goto LABEL_11;
  v11 = *(struct UILabel_o **)((char *)&this->klass + v10);
  this->fields.eventItemTimeLabel = v11;
  p_eventItemTimeLabel = &this->fields.eventItemTimeLabel;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventItemTimeLabel,
    (System_Int32_array **)v11,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = 160LL;
  if ( isLimitOver )
    v19 = 176LL;
  v20 = *(struct UILabel_o **)((char *)&this->klass + v19);
  p_eventItemRestLabel = &this->fields.eventItemRestLabel;
  this->fields.eventItemRestLabel = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventItemRestLabel,
    (System_Int32_array **)v20,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text(*p_eventItemTimeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL), !*p_eventItemRestLabel) )
  {
LABEL_11:
    sub_B170D4();
  }
  UILabel__set_text(*p_eventItemRestLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x8
  struct UILabel_o *v20; // x1
  ShopCurrencyInfoController_o *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1

  if ( (byte_40FF836 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15003/*"UpdateRemainTime"*/, *(_QWORD *)&eventId);
    byte_40FF836 = 1;
  }
  v11 = 152LL;
  if ( isLimitOver )
    v11 = 168LL;
  if ( !this )
    sub_B170D4();
  v12 = *(struct UILabel_o **)((char *)&this->klass + v11);
  this->fields.eventItemTimeLabel = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventItemTimeLabel,
    (System_Int32_array **)v12,
    (System_String_array **)isLimitOver,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v19 = 160LL;
  if ( isLimitOver )
    v19 = 176LL;
  v20 = *(struct UILabel_o **)((char *)&this->klass + v19);
  this->fields.eventItemRestLabel = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventItemRestLabel,
    (System_Int32_array **)v20,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v21, eventId, v22);
  ShopCurrencyInfoController__UpdateRemainTime(this, v23);
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15003/*"UpdateRemainTime"*/,
    0LL);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15003/*"UpdateRemainTime"*/,
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t finishedAt; // x22
  System_String_o *RestTime2; // x0
  WebViewManager_o *v27; // x0
  ShopMaster_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v34; // x8
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__48_0; // x24
  Il2CppObject *v37; // x25
  struct ShopCurrencyInfoController___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int64_t v45; // x0
  int64_t Time; // x23
  __int64 *v48; // x8
  System_String_o *v49; // x0
  UnityEngine_Transform_o *transform; // x0
  struct System_String_o *mText; // x8
  int v52; // s0
  unsigned int v53; // w8
  int v54; // s1
  int v55; // s2

  if ( (byte_40FF83B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, restLabel);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Max_ShopEntity___, v9);
    sub_B16FFC(&Method_System_Func_ShopEntity__long___ctor__, v10);
    sub_B16FFC(&System_Func_ShopEntity__long__TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__, v15);
    sub_B16FFC(&ShopCurrencyInfoController___c_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_13316/*"TIME_OVER_EVENTREWARD"*/, v17);
    sub_B16FFC(&StringLiteral_12112/*"SHOP_INDEFINITE_PERIOD"*/, v18);
    sub_B16FFC(&StringLiteral_1/*""*/, v19);
    sub_B16FFC(&StringLiteral_13338/*"TIME_REST_EVENTREWARD"*/, v20);
    byte_40FF83B = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_61;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_61;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            (WarEntity_o **)&this->fields.eventEntity,
            this->fields.eventId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
    RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_12112/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
    if ( !timeLabel )
      goto LABEL_61;
  }
  else
  {
    v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v27 )
      goto LABEL_61;
    v28 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)v27,
                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !*p_eventEntity || !v28 )
      goto LABEL_61;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              v28,
                                                                              (*p_eventEntity)->fields.id,
                                                                              0LL);
    v34 = ShopCurrencyInfoController___c_TypeInfo;
    if ( (BYTE3(ShopCurrencyInfoController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo);
      v34 = ShopCurrencyInfoController___c_TypeInfo;
    }
    static_fields = v34->static_fields;
    _9__48_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)static_fields->__9;
      _9__48_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                                 System_Func_ShopEntity__long__TypeInfo,
                                                                                 v29,
                                                                                 v30,
                                                                                 v31,
                                                                                 v32);
      System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
        _9__48_0,
        v37,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__,
        (const MethodInfo_2B6BEAC *)Method_System_Func_ShopEntity__long___ctor__);
      v38 = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      v38->__9__48_0 = (struct System_Func_ShopEntity__long__o *)_9__48_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v38->__9__48_0,
        (System_Int32_array **)_9__48_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = System_Linq_Enumerable__Max_ShopEntity_(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__48_0,
            (const MethodInfo_19BCDD0 *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v45 && v45 > 0 )
      finishedAt = v45;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = LocalizationManager__GetRestTime2(finishedAt, -1LL, 0LL);
    if ( !timeLabel )
LABEL_61:
      sub_B170D4();
  }
  UILabel__set_text(timeLabel, RestTime2, 0LL);
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
    v48 = &StringLiteral_13316/*"TIME_OVER_EVENTREWARD"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = &StringLiteral_13338/*"TIME_REST_EVENTREWARD"*/;
  }
  v49 = LocalizationManager__Get((System_String_o *)*v48, 0LL);
  if ( !restLabel )
    goto LABEL_61;
  UILabel__set_text(restLabel, v49, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0LL);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_61;
  v52 = -1033109504;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v52 = 0;
    v53 = mText->fields.m_stringLength - 2;
    if ( v53 <= 2 )
      v52 = LODWORD(flt_31575A0[v53]);
  }
  if ( !transform )
    goto LABEL_61;
  v54 = -1076258406;
  v55 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v52, 0LL);
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
  sub_B16F98(
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
  if ( (byte_40FF838 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15003/*"UpdateRemainTime"*/, method);
    byte_40FF838 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15003/*"UpdateRemainTime"*/,
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

  if ( (byte_40FF833 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FF833 = 1;
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
      sub_B170D4();
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
  struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList; // x20
  __int64 v7; // x21
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *v11; // x20
  ShopBuyItemListViewObject_o *v12; // x0

  if ( (byte_40FF83A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FF83A = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_18:
    sub_B170D4();
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      break;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
    {
      v11 = this->fields.objectList;
      if ( !v11 )
        goto LABEL_18;
      if ( v8 >= (unsigned int)v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v12 = (ShopBuyItemListViewObject_o *)*((_QWORD *)&v11->fields._items->obj.klass + v7);
      if ( !v12 )
        goto LABEL_18;
      ShopBuyItemListViewObject__UpdateRemaingTime(v12, v10);
    }
    objectList = this->fields.objectList;
    ++v7;
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79E2 & 1) == 0 )
  {
    sub_B16FFC(&ShopCurrencyInfoController___c_TypeInfo, v1);
    byte_40F79E2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ShopCurrencyInfoController___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.closedAt;
}