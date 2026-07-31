void ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.x = xmmword_E92D80;
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
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v8; // x2
  int v9; // w8
  UserItemMaster_o *v10; // x19
  int32_t mana; // w19
  LocalizationManager_c *v12; // x0
  __int64 v13; // x8
  int32_t monitor_high; // w2
  int64_t v15; // x20
  int64_t v16; // x1
  UserItemMaster_o *v17; // x0

  if ( (byte_5934701 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_5934701 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_90:
    sub_21FFECC(Instance, v6);
  }
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v9 = kind - 2;
  v10 = (UserItemMaster_o *)Instance;
  switch ( v9 )
  {
    case 0:
    case 8:
    case 9:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = SelfUserGame->fields.mana;
      goto LABEL_10;
    case 5:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v10 )
        goto LABEL_90;
      v13 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[5].monitor);
      goto LABEL_69;
    case 6:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v10 )
        goto LABEL_90;
      v13 = *((_QWORD *)Instance + 23);
      monitor_high = (int32_t)MasterData_object[6].klass;
      goto LABEL_69;
    case 7:
    case 12:
    case 19:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v12 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_87;
      return LocalizationManager__GetNumberFormat(mana, 0);
    case 11:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v8);
      if ( !v10 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_82;
    case 14:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v8);
      if ( !v10 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->PurePriItemId;
      goto LABEL_82;
    case 15:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v10 )
        goto LABEL_90;
      v13 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[6].klass);
LABEL_69:
      v16 = *(_QWORD *)(v13 + 64);
      v17 = v10;
      goto LABEL_83;
    case 16:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v8);
      if ( !v10 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->ApSeedItemId;
      goto LABEL_82;
    case 17:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = UserGameEntity__getAct(SelfUserGame, 0);
      goto LABEL_85;
    case 18:
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v8);
        Instance = NetworkManager_TypeInfo;
      }
      v15 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v8);
      if ( !v10 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->RevivalItemId;
LABEL_82:
      v17 = v10;
      v16 = v15;
LABEL_83:
      Instance = UserItemMaster__GetEntityDefinitely(v17, v16, monitor_high, 0);
      if ( !Instance )
        goto LABEL_90;
      mana = *((_DWORD *)Instance + 7);
LABEL_85:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        v12 = LocalizationManager_TypeInfo;
LABEL_87:
        j_il2cpp_runtime_class_init_0(v12, v6, v8);
      }
      return LocalizationManager__GetNumberFormat(mana, 0);
    default:
      return (System_String_o *)StringLiteral_1198/*"0"*/;
  }
}


System_String_o *ShopCurrencyInfoController__GetCurrencySprite(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_5934700 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21272/*"img_bg_seed"*/);
    sub_21FFC50(&StringLiteral_21265/*"img_bg_mp"*/);
    sub_21FFC50(&StringLiteral_21256/*"img_bg_evocation"*/);
    sub_21FFC50(&StringLiteral_21257/*"img_bg_fragments"*/);
    sub_21FFC50(&StringLiteral_21267/*"img_bg_pureprism_itemstock_resetticket"*/);
    sub_21FFC50(&StringLiteral_21247/*"img_bg_ap"*/);
    sub_21FFC50(&StringLiteral_21269/*"img_bg_rp"*/);
    sub_21FFC50(&StringLiteral_21264/*"img_bg_hgd"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_21274/*"img_bg_spsummon"*/);
    sub_21FFC50(&StringLiteral_21526/*"img_shopbg04"*/);
    byte_5934700 = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x16 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_5296288 + (unsigned int)(kind - 2));
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *v8; // x20
  bool v9; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5934705 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934705 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_20;
  v8 = UserEventMaster__GetEntity(
         (UserEventMaster_o *)MasterData_object,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         eventId,
         0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_20:
    sub_21FFECC(Instance, v5);
  if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
    return 0;
LABEL_16:
  if ( !v8 )
    return 0;
  v9 = 1;
  if ( !UserEventEntity__getEventFlag(v8, 1, 0) )
    return 0;
  return v9;
}


bool ShopCurrencyInfoController__GetIsShowCurrencyWindow(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  return ((unsigned int)kind < 0x16) & (0x356F84u >> kind);
}


UnityEngine_Vector3_o ShopCurrencyInfoController__GetRestLabelPosition(
        ShopCurrencyInfoController_o *this,
        bool isRarepriShopPurchased,
        bool isFinished,
        int32_t textCount,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s2
  float v7; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5 = -59.0;
  if ( !isRarepriShopPurchased && !isFinished )
  {
    v5 = 0.0;
    if ( (unsigned int)(textCount - 2) <= 2 )
      v5 = flt_ED0340[textCount - 2];
  }
  v6 = 0.0;
  v7 = -1.7;
  result.fields.z = v6;
  result.fields.y = v7;
  result.fields.x = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void ShopCurrencyInfoController__RefreshCurrencyInfo(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *shopEventItemWindow; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  void *gameObject; // x0
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x22
  __int64 v13; // x2
  UnityEngine_Object_o *currencyWindow; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *currencySprite; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *currencyLabel; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *baseAtlas; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UISprite_o *v30; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v32; // x2
  UnityEngine_GameObject_o *v33; // x22
  bool IsShowCurrencyWindow; // w0
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *overCurrencyWindow; // x22
  const MethodInfo *v38; // x2
  struct UISprite_o *v39; // x22
  UISprite_o *v40; // x0
  System_String_o *v41; // x1
  int32_t v42; // w1
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *v45; // x23
  UISprite_o *v46; // x22
  ShopCurrencyInfoController_o *v47; // x0
  const MethodInfo *v48; // x2
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeA; // x8
  float *p_y; // x9
  float *p_z; // x10
  ShopCurrencyInfoController_o *v52; // x0
  UILabel_o *v53; // x22
  const MethodInfo *v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_Object_o *itemInfo1; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  UnityEngine_Object_o *itemInfo2; // x21
  _BOOL4 v61; // w9
  unsigned int v62; // w21
  ShopCurrencyInfoController_o *v63; // x0
  const MethodInfo *v64; // x2
  UISprite_o *currencySprite2; // x20
  __int64 v66; // x1
  __int64 v67; // x2
  System_String_o *v68; // x21
  int32_t v69; // w20
  __int64 v70; // x1
  __int64 v71; // x2
  Il2CppObject *Master_object; // x20
  ItemEntity_array *EntityList; // x21
  const MethodInfo *v74; // x2
  int max_length; // w8
  System_String_o *v76; // x22
  unsigned int v77; // w26
  struct ShopCurrencyInfoController_OverCurrencyInfoObject_array *overCurrencyInfos; // x9
  unsigned int v79; // w10
  ItemEntity_o *v80; // x8
  ShopCurrencyInfoController_OverCurrencyInfoObject_o *v81; // x25
  int32_t id; // w24
  __int64 v83; // x2
  __int64 v84; // x2
  UILabel_o *v85; // x24
  int32_t v86; // w25
  UISprite_o *v87; // x20
  ShopCurrencyInfoController_o *v88; // x0
  const MethodInfo *v89; // x2
  UISprite_o *v90; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  System_String_o *v93; // x21
  ShopCurrencyInfoController_o *v94; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v96; // x2
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59346FD & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21266/*"img_bg_pp"*/);
    byte_59346FD = 1;
  }
  v7 = UnityEngine_Object_TypeInfo;
  shopEventItemWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
  this->fields.kind = kind;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&kind, *(_QWORD *)&state);
  if ( UnityEngine_Object__op_Inequality(shopEventItemWindow, 0, 0) )
  {
    gameObject = this->fields.shopEventItemWindow;
    if ( !gameObject )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_121;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0, 0) )
  {
    gameObject = this->fields.shopEventItemLimitOverWindow;
    if ( !gameObject )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_121;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v13);
  if ( UnityEngine_Object__op_Equality(currencyWindow, 0, 0) )
    return;
  currencySprite = (UnityEngine_Object_o *)this->fields.currencySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Equality(currencySprite, 0, 0) )
    return;
  currencyLabel = (UnityEngine_Object_o *)this->fields.currencyLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Equality(currencyLabel, 0, 0) )
    return;
  baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  gameObject = (void *)UnityEngine_Object__op_Equality(baseAtlas, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v30 = this->fields.currencySprite;
    if ( !v30 )
      goto LABEL_121;
    mAtlas = v30->fields.mAtlas;
    this->fields.baseAtlas = mAtlas;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
      (int32_t)mAtlas,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  gameObject = this->fields.shopEventItemWindowPanel;
  if ( !gameObject )
    goto LABEL_121;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.currencyWindow;
  if ( !gameObject )
    goto LABEL_121;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_121;
  v33 = (UnityEngine_GameObject_o *)gameObject;
  IsShowCurrencyWindow = ShopCurrencyInfoController__GetIsShowCurrencyWindow(
                           (ShopCurrencyInfoController_o *)gameObject,
                           kind,
                           v32);
  UnityEngine_GameObject__SetActive(v33, IsShowCurrencyWindow, 0);
  overCurrencyWindow = (UnityEngine_Object_o *)this->fields.overCurrencyWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
  gameObject = (void *)UnityEngine_Object__op_Inequality(overCurrencyWindow, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( state == 22
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.overCurrencyInfos, 0) )
    {
      gameObject = this->fields.overCurrencyWindow;
      if ( !gameObject )
        goto LABEL_121;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v70, v71);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
      gameObject = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !gameObject )
        goto LABEL_121;
      EntityList = ItemMaster__GetEntityList((ItemMaster_o *)gameObject, 41, 0);
      gameObject = ShopCurrencyInfoController__GetCurrencySprite((ShopCurrencyInfoController_o *)EntityList, 23, v74);
      if ( !EntityList )
        goto LABEL_121;
      max_length = EntityList->max_length;
      if ( max_length >= 1 )
      {
        v76 = (System_String_o *)gameObject;
        v77 = 0;
        while ( 1 )
        {
          overCurrencyInfos = this->fields.overCurrencyInfos;
          if ( !overCurrencyInfos )
            goto LABEL_121;
          v79 = overCurrencyInfos->max_length;
          if ( (int)v77 >= (int)v79 )
            return;
          if ( v77 >= max_length )
            goto LABEL_122;
          v80 = EntityList->m_Items[v77];
          if ( !v80 )
            goto LABEL_121;
          if ( v77 >= v79 )
LABEL_122:
            sub_21FFED4(gameObject);
          v81 = overCurrencyInfos->m_Items[v77];
          if ( !v81 )
            goto LABEL_121;
          gameObject = v81->fields.itemIcon;
          if ( !gameObject )
            goto LABEL_121;
          id = v80->fields.id;
          ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, id, -1, 1, 0);
          gameObject = v81->fields.currencySprite;
          if ( !gameObject )
            goto LABEL_121;
          UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0);
          gameObject = v81->fields.currencySprite;
          if ( !gameObject )
            goto LABEL_121;
          UISprite__set_spriteName((UISprite_o *)gameObject, v76, 0);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v83);
          if ( !byte_5931D52 )
          {
            sub_21FFC50(&NetworkManager_TypeInfo);
            byte_5931D52 = 1;
          }
          gameObject = NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v83);
            gameObject = NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_121;
          gameObject = UserItemMaster__GetEntityDefinitely(
                         (UserItemMaster_o *)Master_object,
                         *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                         id,
                         0);
          if ( !gameObject )
            goto LABEL_121;
          v85 = v81->fields.currencyLabel;
          v86 = *((_DWORD *)gameObject + 7);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v84);
          gameObject = LocalizationManager__GetNumberFormat(v86, 0);
          if ( !v85 )
            goto LABEL_121;
          UILabel__set_text(v85, (System_String_o *)gameObject, 0);
          max_length = EntityList->max_length;
          if ( (int)++v77 >= max_length )
            return;
        }
      }
      return;
    }
    gameObject = this->fields.overCurrencyWindow;
    if ( !gameObject )
      goto LABEL_121;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v39 = this->fields.currencySprite;
  switch ( kind )
  {
    case 20:
      v42 = 20;
      goto LABEL_48;
    case 18:
      v42 = 18;
LABEL_48:
      v45 = ShopCurrencyInfoController__GetCurrencySprite((ShopCurrencyInfoController_o *)gameObject, v42, v38);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43, v44);
      v40 = v39;
      v41 = v45;
      goto LABEL_51;
    case 16:
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v38);
      v40 = v39;
      v41 = (System_String_o *)StringLiteral_21266/*"img_bg_pp"*/;
LABEL_51:
      AtlasManager__SetShopBanner_47539868(v40, v41, 0);
      goto LABEL_55;
  }
  if ( !v39 )
    goto LABEL_121;
  UISprite__set_atlas(this->fields.currencySprite, this->fields.baseAtlas, 0);
  v46 = this->fields.currencySprite;
  gameObject = ShopCurrencyInfoController__GetCurrencySprite(v47, kind, v48);
  if ( !v46 )
    goto LABEL_121;
  UISprite__set_spriteName(v46, (System_String_o *)gameObject, 0);
LABEL_55:
  gameObject = this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_121;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( (unsigned int)kind > 0x15 || ((1 << kind) & 0x3F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeA;
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    if ( !gameObject )
      goto LABEL_121;
  }
  else
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeB;
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    if ( !gameObject )
      goto LABEL_121;
  }
  v97.fields.x = p_currencySpritePosTypeA->fields.x;
  v97.fields.y = *p_y;
  v97.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v97, 0);
  gameObject = this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_121;
  v52 = (ShopCurrencyInfoController_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                                          gameObject,
                                          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
  v53 = this->fields.currencyLabel;
  gameObject = ShopCurrencyInfoController__GetCurrencyNumber(v52, kind, v54);
  if ( !v53 )
    goto LABEL_121;
  UILabel__set_text(v53, (System_String_o *)gameObject, 0);
  itemInfo1 = (UnityEngine_Object_o *)this->fields.itemInfo1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
  if ( UnityEngine_Object__op_Equality(itemInfo1, 0, 0) )
    return;
  itemInfo2 = (UnityEngine_Object_o *)this->fields.itemInfo2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58, v59);
  if ( UnityEngine_Object__op_Equality(itemInfo2, 0, 0) )
    return;
  GameObjectExtensions__SetLocalPosition_42876120(this->fields.itemInfo1, 0.0, 0.0, 0);
  gameObject = this->fields.itemInfo2;
  if ( !gameObject )
    goto LABEL_121;
  v61 = (unsigned int)state < 0x16;
  v62 = v61 & (0x2C8000u >> state);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v61 & (0x2C8000u >> state), 0);
  if ( v62 != 1 )
    return;
  GameObjectExtensions__SetLocalPosition_42876120(this->fields.itemInfo1, -90.0, 0.0, 0);
  GameObjectExtensions__SetLocalPosition_42876120(this->fields.itemInfo2, 90.0, 0.0, 0);
  if ( state <= 18 )
  {
    if ( state != 15 )
    {
      if ( state == 18 )
      {
        currencySprite2 = this->fields.currencySprite2;
        v68 = ShopCurrencyInfoController__GetCurrencySprite(v63, 17, v64);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v66, v67);
        AtlasManager__SetShopBanner_47539868(currencySprite2, v68, 0);
        v69 = 17;
        goto LABEL_116;
      }
      return;
    }
LABEL_109:
    gameObject = this->fields.currencySprite2;
    if ( !gameObject )
      goto LABEL_121;
    UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0);
    v87 = this->fields.currencySprite2;
    gameObject = ShopCurrencyInfoController__GetCurrencySprite(v88, 2, v89);
    if ( !v87 )
      goto LABEL_121;
    UISprite__set_spriteName(v87, (System_String_o *)gameObject, 0);
    v69 = 2;
    goto LABEL_116;
  }
  if ( state == 19 )
  {
    v90 = this->fields.currencySprite2;
    v93 = ShopCurrencyInfoController__GetCurrencySprite(v63, 19, v64);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v91, v92);
    AtlasManager__SetShopBanner_47539868(v90, v93, 0);
    v69 = 19;
LABEL_116:
    gameObject = this->fields.currencySprite2;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)gameObject,
          this->fields.currencySpritePosTypeA,
          0);
        gameObject = this->fields.currencySprite2;
        if ( gameObject )
        {
          v94 = (ShopCurrencyInfoController_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                                                  gameObject,
                                                  *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
          currencyLabel2 = this->fields.currencyLabel2;
          gameObject = ShopCurrencyInfoController__GetCurrencyNumber(v94, v69, v96);
          if ( currencyLabel2 )
          {
            UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0);
            return;
          }
        }
      }
    }
LABEL_121:
    sub_21FFECC(gameObject, v9);
  }
  if ( state == 21 )
    goto LABEL_109;
}


// local variable allocation has failed, the output may be wrong!
void ShopCurrencyInfoController__RefreshCurrencyInfoForExRoom(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        System_Collections_Generic_List_ShopEntity__o *targetShopEntities,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *baseAtlas; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *currencySprite; // x20
  UnityEngine_Object_o *currencyWindow; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *mAtlas; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *shopEventItemWindow; // x20
  __int64 v24; // x2
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x20
  __int64 v26; // x2
  UnityEngine_Object_o *overCurrencyWindow; // x20
  __int64 v28; // x2
  UnityEngine_Object_o *exRoomShopCurrencyWindow; // x20
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_int__o *v31; // x20
  __int64 v32; // x1
  __int64 ItemID; // x0
  __int64 v34; // x1
  int32_t v35; // w21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  struct ShopCurrencyInfoController_OverCurrencyInfoObject_array *exRoomShopCurrencyInfos; // x8
  UserItemMaster_o *v44; // x21
  signed __int64 v45; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o **v47; // x27
  UnityEngine_Object_o *v48; // x24
  UnityEngine_Object_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Object_o *v52; // x24
  int32_t v53; // w24
  UISprite_o *v54; // x25
  ShopCurrencyInfoController_o *v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_Object_o *v59; // x25
  __int64 v60; // x2
  __int64 v61; // x2
  UILabel_o *v62; // x24
  int32_t klass_high; // w25
  __int64 v64; // x1
  __int64 v65; // x2
  UnityEngine_Object_o *v66; // x24
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59346FE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346FE = 1;
  }
  v7 = UnityEngine_Object_TypeInfo;
  this->fields.kind = kind;
  baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
  memset(&v68, 0, sizeof(v68));
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&kind, targetShopEntities);
  if ( UnityEngine_Object__op_Equality(baseAtlas, 0, 0) )
  {
    currencySprite = (UnityEngine_Object_o *)this->fields.currencySprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    currencyWindow = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(currencySprite, 0, 0);
    if ( ((unsigned __int8)currencyWindow & 1) != 0 )
    {
      v19 = this->fields.currencySprite;
      if ( !v19 )
        goto LABEL_111;
      mAtlas = v19->fields.mAtlas;
      this->fields.baseAtlas = mAtlas;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
        (int32_t)mAtlas,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
  }
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !currencyWindow )
    goto LABEL_111;
  currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)currencyWindow,
                                             0);
  if ( !currencyWindow )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
  shopEventItemWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(shopEventItemWindow, 0, 0) )
  {
    currencyWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
    if ( !currencyWindow )
      goto LABEL_111;
    currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)currencyWindow,
                                               0);
    if ( !currencyWindow )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v24);
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0, 0) )
  {
    currencyWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
    if ( !currencyWindow )
      goto LABEL_111;
    currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)currencyWindow,
                                               0);
    if ( !currencyWindow )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
  }
  overCurrencyWindow = (UnityEngine_Object_o *)this->fields.overCurrencyWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v26);
  if ( UnityEngine_Object__op_Inequality(overCurrencyWindow, 0, 0) )
  {
    currencyWindow = (UnityEngine_Object_o *)this->fields.overCurrencyWindow;
    if ( !currencyWindow )
      goto LABEL_111;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
  }
  exRoomShopCurrencyWindow = (UnityEngine_Object_o *)this->fields.exRoomShopCurrencyWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v28);
  if ( UnityEngine_Object__op_Equality(exRoomShopCurrencyWindow, 0, 0)
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exRoomShopCurrencyInfos, 0)
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetShopEntities, 0) )
  {
    ShopCurrencyInfoController__RefreshCurrencyInfo(this, 0, 0, v30);
    return;
  }
  v31 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !targetShopEntities )
    goto LABEL_111;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    (System_Collections_Generic_List_object__o *)targetShopEntities,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
  v68 = v67;
  v67.fields._list = 0;
  *(_QWORD *)&v67.fields._index = &v68;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__) )
  {
    if ( !v68.fields._current )
      sub_21FFECC(0, v32);
    if ( HIDWORD(v68.fields._current[4].klass) == 11 )
    {
      ItemID = ShopEntity__GetItemID((ShopEntity_o *)v68.fields._current, 0);
      v35 = ItemID;
      if ( (int)ItemID >= 1 )
      {
        if ( !v31 )
          sub_21FFECC(ItemID, v34);
        v36 = System_Collections_Generic_List_int___Contains(
                v31,
                ItemID,
                (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v36 )
        {
          items = v31->fields._items;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++v31->fields._version;
          if ( !items )
            sub_21FFECC(v36, v37);
          size = v31->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v31,
              v35,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v31->fields._size = size + 1;
            items->m_Items[size] = v35;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v31, 0) )
  {
    ShopCurrencyInfoController__RefreshCurrencyInfo(this, 0, 0, v41);
    return;
  }
  currencyWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindowPanel;
  if ( !currencyWindow
    || (currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)currencyWindow,
                                                   0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 1, 0),
        (currencyWindow = (UnityEngine_Object_o *)this->fields.exRoomShopCurrencyWindow) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 1, 0),
        (currencyWindow = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (currencyWindow = (UnityEngine_Object_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)currencyWindow,
                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___),
        (exRoomShopCurrencyInfos = this->fields.exRoomShopCurrencyInfos) == 0) )
  {
LABEL_111:
    sub_21FFECC(currencyWindow, v9);
  }
  v44 = (UserItemMaster_o *)currencyWindow;
  v45 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(exRoomShopCurrencyInfos->max_length);
    if ( v45 >= (int)max_length_low )
      break;
    if ( v45 >= max_length_low )
      sub_21FFED4(currencyWindow);
    v47 = (UnityEngine_Object_o **)exRoomShopCurrencyInfos->m_Items[v45];
    if ( v47 )
    {
      v48 = v47[3];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v42);
      currencyWindow = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v48, 0, 0);
      if ( ((unsigned __int8)currencyWindow & 1) == 0 )
      {
        v49 = v47[4];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v42);
        currencyWindow = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v49, 0, 0);
        if ( ((unsigned __int8)currencyWindow & 1) == 0 )
        {
          if ( !v31 )
            goto LABEL_111;
          currencyWindow = v47[3];
          if ( v45 >= v31->fields._size )
          {
            if ( !currencyWindow )
              goto LABEL_111;
            currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)currencyWindow,
                                                       0);
            if ( !currencyWindow )
              goto LABEL_111;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
            currencyWindow = v47[4];
            if ( !currencyWindow )
              goto LABEL_111;
            currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)currencyWindow,
                                                       0);
            if ( !currencyWindow )
              goto LABEL_111;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
            v66 = v47[2];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64, v65);
            currencyWindow = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v66, 0, 0);
            if ( ((unsigned __int8)currencyWindow & 1) != 0 )
            {
              currencyWindow = v47[2];
              if ( !currencyWindow )
                goto LABEL_111;
              currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)currencyWindow,
                                                         0);
              if ( !currencyWindow )
                goto LABEL_111;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
            }
          }
          else
          {
            if ( !currencyWindow )
              goto LABEL_111;
            currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)currencyWindow,
                                                       0);
            if ( !currencyWindow )
              goto LABEL_111;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 1, 0);
            currencyWindow = v47[4];
            if ( !currencyWindow )
              goto LABEL_111;
            currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)currencyWindow,
                                                       0);
            if ( !currencyWindow )
              goto LABEL_111;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 1, 0);
            v52 = v47[2];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50, v51);
            if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
            {
              currencyWindow = v47[2];
              if ( !currencyWindow )
                goto LABEL_111;
              currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)currencyWindow,
                                                         0);
              if ( !currencyWindow )
                goto LABEL_111;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 0, 0);
            }
            currencyWindow = (UnityEngine_Object_o *)System_Collections_Generic_List_int___get_Item(
                                                       v31,
                                                       v45,
                                                       (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( !v47[3] )
              goto LABEL_111;
            v53 = (int)currencyWindow;
            UISprite__set_atlas((UISprite_o *)v47[3], this->fields.baseAtlas, 0);
            v54 = (UISprite_o *)v47[3];
            currencyWindow = (UnityEngine_Object_o *)ShopCurrencyInfoController__GetCurrencySprite(v55, 24, v56);
            if ( !v54 )
              goto LABEL_111;
            UISprite__set_spriteName(v54, (System_String_o *)currencyWindow, 0);
            currencyWindow = v47[3];
            if ( !currencyWindow )
              goto LABEL_111;
            ((void (__fastcall *)(UnityEngine_Object_o *, void *))currencyWindow->klass[2]._1.parent)(
              currencyWindow,
              currencyWindow->klass[2]._1.generic_class);
            v59 = v47[2];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
            if ( UnityEngine_Object__op_Inequality(v59, 0, 0) )
            {
              currencyWindow = v47[2];
              if ( !currencyWindow )
                goto LABEL_111;
              currencyWindow = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)currencyWindow,
                                                         0);
              if ( !currencyWindow )
                goto LABEL_111;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyWindow, 1, 0);
              currencyWindow = v47[2];
              if ( !currencyWindow )
                goto LABEL_111;
              ItemIconComponent__SetItem((ItemIconComponent_o *)currencyWindow, v53, -1, 1, 0);
            }
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v60);
            if ( !byte_5931D52 )
            {
              sub_21FFC50(&NetworkManager_TypeInfo);
              byte_5931D52 = 1;
            }
            currencyWindow = (UnityEngine_Object_o *)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v60);
              currencyWindow = (UnityEngine_Object_o *)NetworkManager_TypeInfo;
            }
            if ( !v44 )
              goto LABEL_111;
            currencyWindow = (UnityEngine_Object_o *)UserItemMaster__GetEntityDefinitely(
                                                       v44,
                                                       *(_QWORD *)(currencyWindow[7].fields.m_CachedPtr + 64),
                                                       v53,
                                                       0);
            if ( !currencyWindow )
              goto LABEL_111;
            v62 = (UILabel_o *)v47[4];
            klass_high = HIDWORD(currencyWindow[1].klass);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v61);
            currencyWindow = (UnityEngine_Object_o *)LocalizationManager__GetNumberFormat(klass_high, 0);
            if ( !v62 )
              goto LABEL_111;
            UILabel__set_text(v62, (System_String_o *)currencyWindow, 0);
          }
        }
      }
    }
    exRoomShopCurrencyInfos = this->fields.exRoomShopCurrencyInfos;
    ++v45;
    if ( !exRoomShopCurrencyInfos )
      goto LABEL_111;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopCurrencyInfoController__RefreshEventItemInfo(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t eventId,
        bool isEventShop,
        System_Int32_array *eventItemList,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v13; // x0
  UnityEngine_Object_o *currencyWindow; // x25
  EventItemComponent_o *gameObject; // x0
  const MethodInfo *targetId; // x1
  __int64 v17; // x2
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x24
  System_Collections_Generic_List_int__o *v19; // x22
  __int64 v20; // x2
  int max_length; // w8
  unsigned int v22; // w27
  EventItemDisplayEntity_o *v23; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  signed __int64 v33; // x24
  char v34; // w25
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  __int64 v38; // x2
  int v39; // w8
  UIWidget_o *shopEventItemLimitOverWindow; // x23
  __int64 v41; // x2
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v43; // x23
  unsigned __int64 max_length_low; // x9
  EventItemComponent_o *v45; // x25
  struct EventItemComponent_array *v46; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Transform_o *transform; // x25
  UIWidget_o *shopEventItemWindow; // x23
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v52; // x23
  unsigned __int64 v53; // x9
  EventItemComponent_o *v54; // x25
  struct EventItemComponent_array *v55; // x8
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Transform_o *v58; // x25
  __int64 v59; // x1
  __int64 v60; // x2
  int32_t ItemBaseWindowHeight; // w8
  UnityEngine_Object_c *v62; // x0
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  float v66; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v69; // s9
  int32_t PayType; // w0
  const MethodInfo *v71; // x3
  ShopCurrencyInfoController_o *v72; // x0
  int32_t v73; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PanelPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o EventItemPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59346FC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventItemDisplayMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&EventItemWindowMaker_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ShopBuyItemListViewManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346FC = 1;
  }
  v13 = UnityEngine_Object_TypeInfo;
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  this->fields.eventId = eventId;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&kind, *(_QWORD *)&eventId);
  gameObject = (EventItemComponent_o *)UnityEngine_Object__op_Inequality(currencyWindow, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !eventItemList )
      goto LABEL_88;
    if ( eventItemList->max_length )
      goto LABEL_8;
    if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, targetId, v17);
    PayType = ShopBuyItemListViewManager__GetPayType(eventId, targetId);
    if ( PayType <= 8 )
    {
      if ( PayType == 4 )
      {
        v72 = this;
        v73 = 2;
        goto LABEL_116;
      }
      if ( PayType == 8 )
      {
        v72 = this;
        v73 = 7;
        goto LABEL_116;
      }
    }
    else
    {
      switch ( PayType )
      {
        case 9:
          v72 = this;
          v73 = 8;
          goto LABEL_116;
        case 10:
          v72 = this;
          v73 = 9;
          goto LABEL_116;
        case 12:
          v72 = this;
          v73 = 13;
LABEL_116:
          ShopCurrencyInfoController__RefreshCurrencyInfo(v72, v73, 0, v71);
          return;
      }
    }
LABEL_8:
    gameObject = (EventItemComponent_o *)this->fields.currencyWindow;
    if ( !gameObject )
      goto LABEL_88;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  this->fields.kind = kind;
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_88;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_88;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0);
  v19 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_88;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
LABEL_117:
        sub_21FFED4(gameObject);
      v23 = ListByEventIdAndScreenFlag->m_Items[v22];
      if ( !v23 )
        break;
      if ( v23->fields.pointType == 1 )
      {
        if ( !v19 )
          break;
        items = v19->fields._items;
        targetId = (const MethodInfo *)(unsigned int)v23->fields.targetId;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          break;
        size = v19->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            (int32_t)targetId,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size] = (int)targetId;
        }
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_25;
    }
LABEL_88:
    sub_21FFECC(gameObject, targetId);
  }
LABEL_25:
  if ( isEventShop )
  {
    gameObject = (EventItemComponent_o *)this->fields.shopEventItemWindowPanel;
    if ( !gameObject )
      goto LABEL_88;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !this->fields.shopEventItemWindowPanel )
      goto LABEL_88;
    v27 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel,
                                           0);
    if ( !gameObject )
      goto LABEL_88;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v28, v29);
    v75.fields.x = x;
    v75.fields.y = y;
    v75.fields.z = z;
    PanelPosition = EventItemWindowMaker__GetPanelPosition(v75, 0);
    if ( !v27 )
      goto LABEL_88;
    UnityEngine_Transform__set_localPosition(v27, PanelPosition, 0);
  }
  if ( !v19 )
    goto LABEL_88;
  v33 = v19->fields._size;
  if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, targetId, v20);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(v33, isForcedAdjustment, 0);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_88;
  v34 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0);
  if ( !gameObject )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v34 & 1) == 0, 0);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_88;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v34 & 1, 0);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_88;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_88;
  gameObject = (EventItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_88;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0) )
    ShopCurrencyInfoController__ResetEventEnableTime(this, v34 & 1, v35);
  else
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v34 & 1, v36);
  v39 = *(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1);
  if ( (v34 & 1) != 0 )
  {
    shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
    if ( !v39 )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v37, v38);
    gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                           isEventShop,
                                           v33,
                                           isForcedAdjustment,
                                           0);
    if ( !shopEventItemLimitOverWindow )
      goto LABEL_88;
    UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0);
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_88;
    v43 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(shopEventItemDrawLimitOverList->max_length);
      if ( (__int64)v43 >= (int)max_length_low )
        break;
      if ( (__int64)v43 >= v33 )
      {
        if ( v43 >= max_length_low )
          goto LABEL_117;
        gameObject = shopEventItemDrawLimitOverList->m_Items[v43];
        if ( !gameObject )
          goto LABEL_88;
        EventItemComponent__Clear(gameObject, 0);
      }
      else
      {
        if ( v43 >= max_length_low )
          goto LABEL_117;
        v45 = shopEventItemDrawLimitOverList->m_Items[v43];
        gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                               v19,
                                               v43,
                                               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v45 )
          goto LABEL_88;
        EventItemComponent__Set(v45, (int32_t)gameObject, 0);
        v46 = this->fields.shopEventItemDrawLimitOverList;
        if ( !v46 )
          goto LABEL_88;
        if ( v43 >= LODWORD(v46->max_length) )
          goto LABEL_117;
        gameObject = v46->m_Items[v43];
        if ( !gameObject )
          goto LABEL_88;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v47, v48);
        EventItemPosition = EventItemWindowMaker__GetEventItemPosition(isEventShop, v43, v33, isForcedAdjustment, 0);
        if ( !transform )
          goto LABEL_88;
        UnityEngine_Transform__set_localPosition(transform, EventItemPosition, 0);
      }
      shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
      ++v43;
      if ( !shopEventItemDrawLimitOverList )
        goto LABEL_88;
    }
  }
  else
  {
    shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
    if ( !v39 )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v37, v38);
    gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                           isEventShop,
                                           v33,
                                           isForcedAdjustment,
                                           0);
    if ( !shopEventItemWindow )
      goto LABEL_88;
    UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0);
    shopEventItemDrawList = this->fields.shopEventItemDrawList;
    if ( !shopEventItemDrawList )
      goto LABEL_88;
    v52 = 0;
    while ( 1 )
    {
      v53 = LODWORD(shopEventItemDrawList->max_length);
      if ( (__int64)v52 >= (int)v53 )
        break;
      if ( (__int64)v52 >= v33 )
      {
        if ( v52 >= v53 )
          goto LABEL_117;
        gameObject = shopEventItemDrawList->m_Items[v52];
        if ( !gameObject )
          goto LABEL_88;
        EventItemComponent__Clear(gameObject, 0);
      }
      else
      {
        if ( v52 >= v53 )
          goto LABEL_117;
        v54 = shopEventItemDrawList->m_Items[v52];
        gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                               v19,
                                               v52,
                                               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v54 )
          goto LABEL_88;
        EventItemComponent__Set(v54, (int32_t)gameObject, 0);
        v55 = this->fields.shopEventItemDrawList;
        if ( !v55 )
          goto LABEL_88;
        if ( v52 >= LODWORD(v55->max_length) )
          goto LABEL_117;
        gameObject = v55->m_Items[v52];
        if ( !gameObject )
          goto LABEL_88;
        v58 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v56, v57);
        v78 = EventItemWindowMaker__GetEventItemPosition(isEventShop, v52, v33, isForcedAdjustment, 0);
        if ( !v58 )
          goto LABEL_88;
        UnityEngine_Transform__set_localPosition(v58, v78, 0);
      }
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      ++v52;
      if ( !shopEventItemDrawList )
        goto LABEL_88;
    }
  }
  if ( isEventShop )
  {
    if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, targetId, v41);
    ItemBaseWindowHeight = EventItemWindowMaker__GetItemBaseWindowHeight(v33, isForcedAdjustment, 0);
    v62 = UnityEngine_Object_TypeInfo;
    infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
    this->fields._ItemBaseWindowHeight_k__BackingField = ItemBaseWindowHeight;
    if ( !*(&v62->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v62, v59, v60);
    if ( UnityEngine_Object__op_Inequality(infoPanel, 0, 0) )
    {
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_88;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
      if ( !gameObject )
        goto LABEL_88;
      v79 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
      v66 = v79.fields.z;
      if ( !*(&EventItemWindowMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo, v64, v65);
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_88;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v69 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
      if ( !gameObject )
        goto LABEL_88;
      v80.fields.x = v69;
      v80.fields.z = v66;
      v80.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v80, 0);
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
  bool IsForcedAdjustmentDialog; // w0
  const MethodInfo *v13; // x6

  if ( (byte_59346FB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59346FB = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       eventId,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0 )
    {
      sub_21FFECC(Instance, v10);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ShopCurrencyInfoController_o *v9; // x19
  __int64 v10; // x8
  struct UILabel_o *v11; // x1
  __int64 v12; // x21
  ShopCurrencyInfoController_o **p_eventItemTimeLabel; // x20
  struct UILabel_o *v14; // x1
  MissionNaviTransitionBoardItem_o *p_eventItemRestLabel; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  v9 = this;
  if ( (byte_5934703 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934703 = 1;
  }
  if ( !v9 )
    goto LABEL_12;
  v10 = 160;
  if ( isLimitOver )
    v10 = 176;
  v11 = *(struct UILabel_o **)((char *)&v9->klass + v10);
  v12 = isLimitOver ? 184LL : 168LL;
  v9->fields.eventItemTimeLabel = v11;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v9->fields.eventItemTimeLabel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.eventItemTimeLabel,
    (int32_t)v11,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = *(struct UILabel_o **)((char *)&v9->klass + v12);
  v9->fields.eventItemRestLabel = v14;
  p_eventItemRestLabel = (MissionNaviTransitionBoardItem_o *)&v9->fields.eventItemRestLabel;
  sub_21FFBF4(p_eventItemRestLabel, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0),
        (this = (ShopCurrencyInfoController_o *)p_eventItemRestLabel->klass) == 0) )
  {
LABEL_12:
    sub_21FFECC(this, isLimitOver);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ShopCurrencyInfoController_o *v10; // x19
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  __int64 v13; // x22
  struct UILabel_o *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ShopCurrencyInfoController_o *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1

  v10 = this;
  if ( (byte_5934702 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_21FFC50(&StringLiteral_15769/*"UpdateRemainTime"*/);
    byte_5934702 = 1;
  }
  if ( !v10 )
    sub_21FFECC(this, *(_QWORD *)&eventId);
  v11 = 160;
  if ( isLimitOver )
    v11 = 176;
  v12 = *(struct UILabel_o **)((char *)&v10->klass + v11);
  v10->fields.eventItemTimeLabel = v12;
  if ( isLimitOver )
    v13 = 184;
  else
    v13 = 168;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.eventItemTimeLabel,
    (int32_t)v12,
    (System_String_o *)isLimitOver,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v14 = *(struct UILabel_o **)((char *)&v10->klass + v13);
  v10->fields.eventItemRestLabel = v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.eventItemRestLabel,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v10->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v21, eventId, v22);
  ShopCurrencyInfoController__UpdateRemainTime(v10, v23);
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15769/*"UpdateRemainTime"*/,
    0);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v10,
    (System_String_o *)StringLiteral_15769/*"UpdateRemainTime"*/,
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
  DataManager_o *Instance; // x0
  int64_t finishedAt; // x22
  struct EventEntity_o *v10; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v14; // x8
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x9
  System_Func_object__long__o *_9__54_0; // x24
  Il2CppObject *v17; // x25
  struct ShopCurrencyInfoController___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int64_t v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int64_t Time; // x23
  bool v34; // w24
  __int64 *v35; // x8
  struct System_String_o *mText; // x8
  float v37; // s0 OVERLAPPED
  unsigned int v38; // w8
  int v39; // s2
  int v40; // s1

  if ( (byte_5934707 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Max_ShopEntity___);
    sub_21FFC50(&System_Func_ShopEntity__long__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__54_0__);
    sub_21FFC50(&ShopCurrencyInfoController___c_TypeInfo);
    sub_21FFC50(&StringLiteral_13921/*"TIME_OVER_EVENTREWARD"*/);
    sub_21FFC50(&StringLiteral_12618/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_13943/*"TIME_REST_EVENTREWARD"*/);
    byte_5934707 = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
    eventEntity = this->fields.eventEntity;
    if ( !eventEntity )
      goto LABEL_50;
  }
  finishedAt = eventEntity->fields.finishedAt;
  if ( this->fields.isRarePriShopPurchased )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, restLabel, timeLabel);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12618/*"SHOP_INDEFINITE_PERIOD"*/, 0);
    if ( !timeLabel )
      goto LABEL_50;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
    v10 = this->fields.eventEntity;
    if ( !v10 || !Instance )
      goto LABEL_50;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              v10->fields.id,
                                                                              0);
    v14 = ShopCurrencyInfoController___c_TypeInfo;
    if ( !*(&ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo, v11, v12);
      v14 = ShopCurrencyInfoController___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__54_0 = (System_Func_object__long__o *)static_fields->__9__54_0;
    if ( !_9__54_0 )
    {
      if ( !*(&v14->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v14, v11, v12);
        static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__54_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_ShopEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__54_0,
        v17,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__54_0__,
        0);
      v18 = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      v18->__9__54_0 = (struct System_Func_ShopEntity__long__o *)_9__54_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__54_0, (int32_t)_9__54_0, v19, v20, v21, v22, v23, v24);
    }
    v25 = System_Linq_Enumerable__Max_object__59064648(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__54_0,
            (const MethodInfo_3854148 *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v25 && v25 > 0 )
      finishedAt = v25;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1, 0);
    if ( !timeLabel )
LABEL_50:
      sub_21FFECC(Instance, restLabel);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29, v30);
  Time = NetworkManager__getTime(0);
  v34 = this->fields.isRarePriShopPurchased || finishedAt < Time;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
  v35 = &StringLiteral_13943/*"TIME_REST_EVENTREWARD"*/;
  if ( v34 )
    v35 = &StringLiteral_13921/*"TIME_OVER_EVENTREWARD"*/;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v35, 0);
  if ( !restLabel )
    goto LABEL_50;
  UILabel__set_text(restLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_50;
  v37 = -59.0;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v37 = 0.0;
    v38 = mText->fields._stringLength - 2;
    if ( v38 <= 2 )
      v37 = flt_ED0340[v38];
  }
  if ( !Instance )
    goto LABEL_50;
  v39 = 0;
  v40 = -1076258406;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, *(UnityEngine_Vector3_o *)&v37, 0);
}


void ShopCurrencyInfoController__SetObjectList(
        ShopCurrencyInfoController_o *this,
        System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.objectList = objectList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.objectList,
    (int32_t)objectList,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopCurrencyInfoController__StopUpdateRemainTime(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( (byte_5934704 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_15769/*"UpdateRemainTime"*/);
    byte_5934704 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15769/*"UpdateRemainTime"*/,
    0);
}


void ShopCurrencyInfoController__Update(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( this->fields.kind == 18 )
    ShopCurrencyInfoController__UpdateApLabel(this, method);
}


void ShopCurrencyInfoController__UpdateApLabel(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currencyLabel2; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2
  UILabel_o *v7; // x19
  System_String_o *CurrencyNumber; // x0
  __int64 v9; // x1

  if ( (byte_59346FF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59346FF = 1;
  }
  currencyLabel2 = (UnityEngine_Object_o *)this->fields.currencyLabel2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(currencyLabel2, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.currencyLabel2;
    CurrencyNumber = ShopCurrencyInfoController__GetCurrencyNumber((ShopCurrencyInfoController_o *)v5, 19, v6);
    if ( !v7 )
      sub_21FFECC(CurrencyNumber, v9);
    UILabel__set_text(v7, CurrencyNumber, 0);
  }
}


void ShopCurrencyInfoController__UpdateRemainTime(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x21

  if ( (byte_5934706 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934706 = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_13:
    sub_21FFECC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_13;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934708 & 1) == 0 )
  {
    sub_21FFC50(&ShopCurrencyInfoController___c_TypeInfo);
    byte_5934708 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ShopCurrencyInfoController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopCurrencyInfoController___c_TypeInfo->static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields,
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


int64_t ShopCurrencyInfoController___c___SetEventItemRestTimeLabels_b__54_0(
        ShopCurrencyInfoController___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.closedAt;
}