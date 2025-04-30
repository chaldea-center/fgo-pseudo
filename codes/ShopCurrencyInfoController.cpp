void __fastcall ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.x = xmmword_BC2F20;
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
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  int v14; // w8
  UserItemMaster_o *v15; // x19
  int32_t mana; // w19
  LocalizationManager_c *v17; // x0
  __int64 v19; // x8
  int32_t monitor_high; // w2
  int64_t v21; // x20
  int64_t v22; // x1
  UserItemMaster_o *v23; // x0

  if ( (byte_4A4A7D8 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B863B8(&StringLiteral_1139/*"0"*/, v9);
    byte_4A4A7D8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_90:
    sub_1B86614(Instance, v12);
  }
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v14 = kind - 2;
  v15 = (UserItemMaster_o *)Instance;
  switch ( v14 )
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
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v12);
        byte_4A48C25 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v15 )
        goto LABEL_90;
      v19 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[5].monitor);
      goto LABEL_60;
    case 6:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v12);
        byte_4A48C25 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v15 )
        goto LABEL_90;
      v19 = *((_QWORD *)Instance + 23);
      monitor_high = (int32_t)MasterData_object[6].klass;
      goto LABEL_60;
    case 7:
    case 12:
    case 19:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v17 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        goto LABEL_88;
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    case 11:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v12);
        byte_4A48C25 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_83;
    case 14:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v12);
        byte_4A48C25 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->PurePriItemId;
      goto LABEL_83;
    case 15:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v12);
        byte_4A48C25 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v15 )
        goto LABEL_90;
      v19 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[6].klass);
LABEL_60:
      v22 = *(_QWORD *)(v19 + 64);
      v23 = v15;
      goto LABEL_84;
    case 16:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v12);
        byte_4A48C25 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->ApSeedItemId;
      goto LABEL_83;
    case 17:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = UserGameEntity__getAct(SelfUserGame, 0LL);
      goto LABEL_86;
    case 18:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v12);
        byte_4A48C25 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v21 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v15 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->RevivalItemId;
LABEL_83:
      v23 = v15;
      v22 = v21;
LABEL_84:
      Instance = UserItemMaster__GetEntityDefinitely(v23, v22, monitor_high, 0LL);
      if ( !Instance )
        goto LABEL_90;
      mana = *((_DWORD *)Instance + 7);
LABEL_86:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        v17 = LocalizationManager_TypeInfo;
LABEL_88:
        j_il2cpp_runtime_class_init_0(v17);
      }
      return LocalizationManager__GetNumberFormat(mana, 0LL);
    default:
      return (System_String_o *)StringLiteral_1139/*"0"*/;
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
  __int64 v12; // x1
  System_String_o **v13; // x8

  if ( (byte_4A4A7D7 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_20055/*"img_bg_seed"*/, *(_QWORD *)&kind);
    sub_1B863B8(&StringLiteral_20048/*"img_bg_mp"*/, v4);
    sub_1B863B8(&StringLiteral_20044/*"img_bg_evocation"*/, v5);
    sub_1B863B8(&StringLiteral_20045/*"img_bg_fragments"*/, v6);
    sub_1B863B8(&StringLiteral_20050/*"img_bg_pureprism_itemstock_resetticket"*/, v7);
    sub_1B863B8(&StringLiteral_20037/*"img_bg_ap"*/, v8);
    sub_1B863B8(&StringLiteral_20052/*"img_bg_rp"*/, v9);
    sub_1B863B8(&StringLiteral_20047/*"img_bg_hgd"*/, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    sub_1B863B8(&StringLiteral_20057/*"img_bg_spsummon"*/, v12);
    byte_4A4A7D7 = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x13 )
    v13 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v13 = (System_String_o **)*(&off_4498DC8 + kind - 2);
  return *v13;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *v11; // x20
  bool IsTimeStatusRecord; // w0
  bool v13; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4A7DC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4A7DC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    byte_4A48C25 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  v11 = UserEventMaster__GetEntity(
          (UserEventMaster_o *)MasterData_object,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          eventId,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL);
      if ( !v11 || IsTimeStatusRecord )
        return 0;
      goto LABEL_19;
    }
LABEL_22:
    sub_1B86614(Instance, v9);
  }
  if ( !v11 )
    return 0;
LABEL_19:
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
      v5 = flt_BFB6D0[textCount - 2];
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
  const MethodInfo *v18; // x3
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
  int v43; // w21
  _BOOL4 v44; // w20
  unsigned int v45; // w20
  ShopCurrencyInfoController_o *v46; // x0
  const MethodInfo *v47; // x2
  UISprite_o *currencySprite2; // x20
  ShopCurrencyInfoController_o *v49; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w20
  UISprite_o *v52; // x20
  System_String_o *v53; // x21
  UISprite_o *v54; // x20
  System_String_o *v55; // x21
  ShopCurrencyInfoController_o *v56; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v58; // x2
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A4A7D5 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_20049/*"img_bg_pp"*/, v8);
    byte_4A4A7D5 = 1;
  }
  this->fields.kind = kind;
  shopEventItemWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopEventItemWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindow;
    if ( !gameObject )
      goto LABEL_81;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_81;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemLimitOverWindow;
    if ( !gameObject )
      goto LABEL_81;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_81;
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
      goto LABEL_81;
    mAtlas = v19->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v17, v18);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel;
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.currencyWindow) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
LABEL_81:
    sub_1B86614(gameObject, v10);
  }
  v22 = (UnityEngine_GameObject_o *)gameObject;
  IsShowCurrencyWindow = ShopCurrencyInfoController__GetIsShowCurrencyWindow(
                           (ShopCurrencyInfoController_o *)gameObject,
                           kind,
                           v21);
  UnityEngine_GameObject__SetActive(v22, IsShowCurrencyWindow, 0LL);
  switch ( kind )
  {
    case 20:
      v29 = this->fields.currencySprite;
      v30 = 20;
LABEL_41:
      v31 = ShopCurrencyInfoController__GetCurrencySprite(v24, v30, v25);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v27 = v29;
      v28 = v31;
      goto LABEL_44;
    case 18:
      v29 = this->fields.currencySprite;
      v30 = 18;
      goto LABEL_41;
    case 16:
      v26 = this->fields.currencySprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v27 = v26;
      v28 = (System_String_o *)StringLiteral_20049/*"img_bg_pp"*/;
LABEL_44:
      AtlasManager__SetShopBanner_38817408(v27, v28, 0LL);
      goto LABEL_48;
  }
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_81;
  UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
  v32 = this->fields.currencySprite;
  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v33, kind, v34);
  if ( !v32 )
    goto LABEL_81;
  UISprite__set_spriteName(v32, (System_String_o *)gameObject, 0LL);
LABEL_48:
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_81;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( (unsigned int)kind > 0x15 || ((1 << kind) & 0x3F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeA;
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    if ( !gameObject )
      goto LABEL_81;
  }
  else
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeB;
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    if ( !gameObject )
      goto LABEL_81;
  }
  v59.fields.x = p_currencySpritePosTypeA->fields.x;
  v59.fields.y = *p_y;
  v59.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v59, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_81;
  v38 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                          gameObject,
                                          gameObject->klass[2]._1.interopData);
  v39 = this->fields.currencyLabel;
  gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v38, kind, v40);
  if ( !v39 )
    goto LABEL_81;
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
      v43 = state - 15;
      v44 = (unsigned int)(state - 15) < 7;
      GameObjectExtensions__SetLocalPosition_34382392(this->fields.itemInfo1, 0.0, 0.0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.itemInfo2;
      if ( !gameObject )
        goto LABEL_81;
      v45 = (0x59u >> v43) & v44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v45, 0LL);
      if ( v45 )
      {
        GameObjectExtensions__SetLocalPosition_34382392(this->fields.itemInfo1, -90.0, 0.0, 0LL);
        GameObjectExtensions__SetLocalPosition_34382392(this->fields.itemInfo2, 90.0, 0.0, 0LL);
        switch ( v43 )
        {
          case 0:
          case 6:
            gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_81;
            UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0LL);
            currencySprite2 = this->fields.currencySprite2;
            gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencySprite(v49, 2, v50);
            if ( !currencySprite2 )
              goto LABEL_81;
            UISprite__set_spriteName(currencySprite2, (System_String_o *)gameObject, 0LL);
            v51 = 2;
LABEL_76:
            gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_81;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_81;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)gameObject,
              this->fields.currencySpritePosTypeA,
              0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_81;
            v56 = (ShopCurrencyInfoController_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
                                                    gameObject,
                                                    gameObject->klass[2]._1.interopData);
            currencyLabel2 = this->fields.currencyLabel2;
            gameObject = (UnityEngine_Component_o *)ShopCurrencyInfoController__GetCurrencyNumber(v56, v51, v58);
            if ( !currencyLabel2 )
              goto LABEL_81;
            UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0LL);
            break;
          case 3:
            v52 = this->fields.currencySprite2;
            v53 = ShopCurrencyInfoController__GetCurrencySprite(v46, 17, v47);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_38817408(v52, v53, 0LL);
            v51 = 17;
            goto LABEL_76;
          case 4:
            v54 = this->fields.currencySprite2;
            v55 = ShopCurrencyInfoController__GetCurrencySprite(v46, 19, v47);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_38817408(v54, v55, 0LL);
            v51 = 19;
            goto LABEL_76;
          default:
            return;
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
  __int64 v23; // x1
  UnityEngine_Object_o *currencyWindow; // x25
  EventItemComponent_o *gameObject; // x0
  __int64 targetId; // x1
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  System_Collections_Generic_List_int__o *v28; // x22
  int max_length; // w8
  unsigned int v30; // w25
  EventItemDisplayEntity_o *v31; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v35; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v39; // s0
  signed __int64 v42; // x23
  char v43; // w25
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  UIWidget_o *shopEventItemWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v48; // x24
  unsigned __int64 v49; // x9
  Il2CppClass **v50; // x8
  EventItemComponent_o *v51; // x25
  struct EventItemComponent_array *v52; // x8
  UnityEngine_Transform_o *transform; // x25
  int v54; // s0
  UIWidget_o *shopEventItemLimitOverWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v59; // x24
  unsigned __int64 v60; // x9
  Il2CppClass **v61; // x8
  EventItemComponent_o *v62; // x25
  struct EventItemComponent_array *v63; // x8
  UnityEngine_Transform_o *v64; // x25
  int v65; // s0
  UnityEngine_Object_o *infoPanel; // x20
  float v69; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v72; // s9
  const MethodInfo *v73; // x3
  int32_t v74; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A4A7D4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, v13);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_1B863B8(&EventItemWindowMaker_TypeInfo, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B863B8(&ShopBuyItemListViewManager_TypeInfo, v22);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_4A4A7D4 = 1;
  }
  this->fields.eventId = eventId;
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (EventItemComponent_o *)UnityEngine_Object__op_Inequality(currencyWindow, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !eventItemList )
      goto LABEL_109;
    if ( !*(_QWORD *)&eventItemList->max_length )
    {
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, 0LL) )
      {
        case 4:
          v74 = 2;
          goto LABEL_108;
        case 8:
          v74 = 7;
          goto LABEL_108;
        case 9:
          v74 = 8;
          goto LABEL_108;
        case 10:
          v74 = 9;
          goto LABEL_108;
        case 12:
          v74 = 13;
LABEL_108:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v74, 0, v73);
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
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_109;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0LL);
  v28 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_109;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
LABEL_110:
        sub_1B8661C(gameObject, targetId);
      v31 = ListByEventIdAndScreenFlag->m_Items[v30];
      if ( !v31 )
        break;
      if ( v31->fields.pointType == 1 )
      {
        if ( !v28 )
          break;
        targetId = (unsigned int)v31->fields.targetId;
        items = v28->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v28->fields._version;
        if ( !items )
          break;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v28,
            targetId,
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v28->fields._size = size + 1;
          items->m_Items[size + 1] = targetId;
        }
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_25;
    }
LABEL_109:
    sub_1B86614(gameObject, targetId);
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
    v35 = (UnityEngine_Transform_o *)gameObject;
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
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v76.fields.x = x;
    v76.fields.y = y;
    v76.fields.z = z;
    *(UnityEngine_Vector3_o *)&v39 = EventItemWindowMaker__GetPanelPosition(v76, 0LL);
    if ( !v35 )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v39, 0LL);
  }
  if ( !v28 )
    goto LABEL_109;
  v42 = v28->fields._size;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(v42, isForcedAdjustment, 0LL);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_109;
  v43 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0LL);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v43 & 1) == 0, 0LL);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v43 & 1, 0LL);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_109;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0LL) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v43 & 1, v44);
    if ( (v43 & 1) == 0 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                             isEventShop,
                                             v42,
                                             isForcedAdjustment,
                                             0LL);
      if ( !shopEventItemWindow )
        goto LABEL_109;
      UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0LL);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_109;
      v48 = 0LL;
      while ( 1 )
      {
        v49 = shopEventItemDrawList->max_length;
        if ( (__int64)v48 >= (int)v49 )
          goto LABEL_86;
        if ( v48 >= v49 )
          goto LABEL_110;
        v50 = &shopEventItemDrawList->obj.klass + v48;
        v51 = (EventItemComponent_o *)v50[4];
        if ( (__int64)v48 >= v42 )
        {
          if ( !v51 )
            goto LABEL_109;
          EventItemComponent__Clear((EventItemComponent_o *)v50[4], 0LL);
        }
        else
        {
          gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                 v28,
                                                 v48,
                                                 (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v51 )
            goto LABEL_109;
          EventItemComponent__Set(v51, (int32_t)gameObject, 0LL);
          v52 = this->fields.shopEventItemDrawList;
          if ( !v52 )
            goto LABEL_109;
          if ( v48 >= v52->max_length )
            goto LABEL_110;
          gameObject = v52->m_Items[v48];
          if ( !gameObject )
            goto LABEL_109;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          *(UnityEngine_Vector3_o *)&v54 = EventItemWindowMaker__GetEventItemPosition(
                                             isEventShop,
                                             v48,
                                             v42,
                                             isForcedAdjustment,
                                             0LL);
          if ( !transform )
            goto LABEL_109;
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v54, 0LL);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v48;
        if ( !shopEventItemDrawList )
          goto LABEL_109;
      }
    }
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v43 & 1, v45);
    if ( (v43 & 1) == 0 )
      goto LABEL_45;
  }
  shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                         isEventShop,
                                         v42,
                                         isForcedAdjustment,
                                         0LL);
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_109;
  UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0LL);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_109;
  v59 = 0LL;
  while ( 1 )
  {
    v60 = shopEventItemDrawLimitOverList->max_length;
    if ( (__int64)v59 >= (int)v60 )
      break;
    if ( v59 >= v60 )
      goto LABEL_110;
    v61 = &shopEventItemDrawLimitOverList->obj.klass + v59;
    v62 = (EventItemComponent_o *)v61[4];
    if ( (__int64)v59 >= v42 )
    {
      if ( !v62 )
        goto LABEL_109;
      EventItemComponent__Clear((EventItemComponent_o *)v61[4], 0LL);
    }
    else
    {
      gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                             v28,
                                             v59,
                                             (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v62 )
        goto LABEL_109;
      EventItemComponent__Set(v62, (int32_t)gameObject, 0LL);
      v63 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v63 )
        goto LABEL_109;
      if ( v59 >= v63->max_length )
        goto LABEL_110;
      gameObject = v63->m_Items[v59];
      if ( !gameObject )
        goto LABEL_109;
      v64 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      *(UnityEngine_Vector3_o *)&v65 = EventItemWindowMaker__GetEventItemPosition(
                                         isEventShop,
                                         v59,
                                         v42,
                                         isForcedAdjustment,
                                         0LL);
      if ( !v64 )
        goto LABEL_109;
      UnityEngine_Transform__set_localPosition(v64, *(UnityEngine_Vector3_o *)&v65, 0LL);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v59;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_109;
  }
LABEL_86:
  if ( isEventShop )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    this->fields._ItemBaseWindowHeight_k__BackingField = EventItemWindowMaker__GetItemBaseWindowHeight(
                                                           v42,
                                                           isForcedAdjustment,
                                                           0LL);
    infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v77 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
      v69 = v77.fields.z;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0LL);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_109;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v72 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
      if ( !gameObject )
        goto LABEL_109;
      v78.fields.x = v72;
      v78.fields.z = v69;
      v78.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v78, 0LL);
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

  if ( (byte_4A4A7D3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&kind);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A4A7D3 = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       eventId,
                       (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
    {
      sub_1B86614(Instance, v13);
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
  if ( (byte_4A4A7DA & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1B863B8(&StringLiteral_1/*""*/, isLimitOver);
    byte_4A4A7DA = 1;
  }
  v6 = 160LL;
  if ( isLimitOver )
    v6 = 176LL;
  if ( !v5 )
    goto LABEL_11;
  v7 = *(struct UILabel_o **)((char *)&v5->klass + v6);
  v5->fields.eventItemTimeLabel = v7;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v5->fields.eventItemTimeLabel;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.eventItemTimeLabel, (int32_t)v7, (int32_t)method, v3);
  v11 = 168LL;
  if ( isLimitOver )
    v11 = 184LL;
  v12 = *(struct UILabel_o **)((char *)&v5->klass + v11);
  v5->fields.eventItemRestLabel = v12;
  p_eventItemRestLabel = (CGThumbnailListItem_o *)&v5->fields.eventItemRestLabel;
  sub_1B8635C(p_eventItemRestLabel, (int32_t)v12, v9, v10);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (this = (ShopCurrencyInfoController_o *)p_eventItemRestLabel->klass) == 0LL) )
  {
LABEL_11:
    sub_1B86614(this, isLimitOver);
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
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  ShopCurrencyInfoController_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  v6 = this;
  if ( (byte_4A4A7D9 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1B863B8(&StringLiteral_14962/*"UpdateRemainTime"*/, *(_QWORD *)&eventId);
    byte_4A4A7D9 = 1;
  }
  v7 = 160LL;
  if ( isLimitOver )
    v7 = 176LL;
  if ( !v6 )
    sub_1B86614(this, *(_QWORD *)&eventId);
  v8 = *(struct UILabel_o **)((char *)&v6->klass + v7);
  v6->fields.eventItemTimeLabel = v8;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.eventItemTimeLabel, (int32_t)v8, isLimitOver, method);
  v11 = 168LL;
  if ( isLimitOver )
    v11 = 184LL;
  v12 = *(struct UILabel_o **)((char *)&v6->klass + v11);
  v6->fields.eventItemRestLabel = v12;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.eventItemRestLabel, (int32_t)v12, v9, v10);
  v6->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v13, eventId, v14);
  ShopCurrencyInfoController__UpdateRemainTime(v6, v15);
  UnityEngine_MonoBehaviour__CancelInvoke_69340764(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_14962/*"UpdateRemainTime"*/,
    0LL);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_14962/*"UpdateRemainTime"*/,
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
  const MethodInfo *v31; // x3
  int64_t v32; // x0
  int64_t Time; // x23
  _BOOL4 v35; // w24
  System_String_o **v36; // x8
  struct System_String_o *mText; // x8
  int v38; // s0
  unsigned int v39; // w8
  int v40; // s1
  int v41; // s2

  if ( (byte_4A4A7DE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, restLabel);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_Max_ShopEntity___, v9);
    sub_1B863B8(&System_Func_ShopEntity__long__TypeInfo, v10);
    sub_1B863B8(&LocalizationManager_TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B863B8(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__, v14);
    sub_1B863B8(&ShopCurrencyInfoController___c_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_13172/*"TIME_OVER_EVENTREWARD"*/, v16);
    sub_1B863B8(&StringLiteral_11918/*"SHOP_INDEFINITE_PERIOD"*/, v17);
    sub_1B863B8(&StringLiteral_1/*""*/, v18);
    sub_1B863B8(&StringLiteral_13194/*"TIME_REST_EVENTREWARD"*/, v19);
    byte_4A4A7DE = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SHOP_INDEFINITE_PERIOD"*/, 0LL);
    if ( !timeLabel )
      goto LABEL_50;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopMaster___);
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
      _9__48_0 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_ShopEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__48_0,
        v28,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__48_0__,
        0LL);
      static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Func_ShopEntity__long__o *)_9__48_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v30, v31);
    }
    v32 = System_Linq_Enumerable__Max_object__49911884(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__48_0,
            (const MethodInfo_2F9984C *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v32 && v32 > 0 )
      finishedAt = v32;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1LL, 0LL);
    if ( !timeLabel )
LABEL_50:
      sub_1B86614(Instance, v23);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v35 = this->fields.isRarePriShopPurchased || finishedAt < Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = (System_String_o **)&StringLiteral_13194/*"TIME_REST_EVENTREWARD"*/;
  if ( v35 )
    v36 = (System_String_o **)&StringLiteral_13172/*"TIME_OVER_EVENTREWARD"*/;
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
      v38 = LODWORD(flt_BFB6D0[v39]);
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
  const MethodInfo *v3; // x3

  this->fields.objectList = objectList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)objectList, (int32_t)method, v3);
}


void __fastcall ShopCurrencyInfoController__StopUpdateRemainTime(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4A7DB & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_14962/*"UpdateRemainTime"*/, method);
    byte_4A4A7DB = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69340764(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_14962/*"UpdateRemainTime"*/,
    0LL);
}


void __fastcall ShopCurrencyInfoController__Update(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( this->fields.kind == 18 )
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

  if ( (byte_4A4A7D6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A7D6 = 1;
  }
  currencyLabel2 = (UnityEngine_Object_o *)this->fields.currencyLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(currencyLabel2, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.currencyLabel2;
    CurrencyNumber = ShopCurrencyInfoController__GetCurrencyNumber((ShopCurrencyInfoController_o *)v4, 19, v5);
    if ( !v6 )
      sub_1B86614(CurrencyNumber, v8);
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
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v8; // w20
  Il2CppObject *Item; // x21

  if ( (byte_4A4A7DD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A4A7DD = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_13:
    sub_1B86614(objectList, v6);
  v8 = 0;
  while ( v8 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v8,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
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
                                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      if ( !objectList )
        goto LABEL_13;
      ShopBuyItemListViewObject__UpdateRemaingTime((ShopBuyItemListViewObject_o *)objectList, 0LL);
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
  const MethodInfo *v4; // x3

  if ( (byte_4A4A7DF & 1) == 0 )
  {
    sub_1B863B8(&ShopCurrencyInfoController___c_TypeInfo, v1);
    byte_4A4A7DF = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ShopCurrencyInfoController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopCurrencyInfoController___c_TypeInfo->static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
  return x->fields.closedAt;
}