void __fastcall ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6C474 & 1) == 0 )
  {
    sub_1B90010(&ShopBuyItemUtility_TypeInfo, v1);
    byte_4A6C474 = 1;
  }
  *ShopBuyItemUtility_TypeInfo->static_fields = (struct ShopBuyItemUtility_StaticFields)xmmword_BB80F0;
}


void __fastcall ShopBuyItemUtility__SetAddTextOnMask(
        ShopEntity_o *shopEntity,
        UILabel_o *textOnMaskLabel,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  Il2CppObject *v16; // x21
  int64_t v17; // x20
  System_String_o *mText; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0

  if ( (byte_4A6C46C & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, textOnMaskLabel);
    sub_1B90010(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&NetworkManager_TypeInfo, v8);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B90010(&StringLiteral_12096/*"SHOP_RETURN_EXCHANGE_ITEM"*/, v11);
    byte_4A6C46C = 1;
  }
  if ( shopEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)textOnMaskLabel, 0LL, 0LL)
      && ShopEntity__IsSoldOut(shopEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_22;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                           (UserShopMaster_o *)MasterData_object,
                           Instance,
                           shopEntity->fields.id,
                           0LL);
      if ( !EntityDefinitely || !UserShopEntity__CheckFlagKind(EntityDefinitely, 3, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = ShopEntity__GetItemID(shopEntity, 0LL);
      if ( !v16 )
        goto LABEL_22;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                            Instance,
                            (const MethodInfo_312C5A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        return;
      if ( !textOnMaskLabel )
LABEL_22:
        sub_1B9026C(Instance, v13);
      v17 = Instance;
      mText = textOnMaskLabel->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"SHOP_RETURN_EXCHANGE_ITEM"*/, 0LL);
      v20 = System_String__Format(v19, *(Il2CppObject **)(v17 + 24), 0LL);
      v21 = System_String__Concat_61787092(mText, v20, 0LL);
      WrapControlText__textAdjust(textOnMaskLabel, v21, textOnMaskLabel->fields.mFontSize, 0, 0, 0LL);
    }
  }
}


void __fastcall ShopBuyItemUtility__SetBgSprite(
        UIGrid_o *grid,
        UILabel_o *possessionNumLabel,
        UILabel_o *coinNumLabel,
        UISprite_o *coinIcon,
        UILabel_o *treasureDeviceLevelLabel,
        UISprite_o *possessionBGSprite,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t mWidth; // w24
  int v15; // w25
  int32_t v16; // w23
  int v17; // w23
  int32_t v18; // w22
  int32_t v19; // w27
  float y; // s8
  float z; // s9
  float v22; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6C473 & 1) == 0 )
  {
    sub_1B90010(&ShopBuyItemUtility_TypeInfo, possessionNumLabel);
    byte_4A6C473 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)ShopBuyItemUtility_TypeInfo;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)ShopBuyItemUtility_TypeInfo;
  }
  if ( !possessionNumLabel )
    goto LABEL_24;
  if ( !treasureDeviceLevelLabel )
    goto LABEL_24;
  mWidth = possessionNumLabel->fields.mWidth;
  v15 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 4LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)treasureDeviceLevelLabel, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)ShopBuyItemUtility_TypeInfo;
    v16 = treasureDeviceLevelLabel->fields.mWidth;
    if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)ShopBuyItemUtility_TypeInfo;
    }
    v17 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL) + v16;
  }
  else
  {
    v17 = 0;
  }
  if ( !coinIcon || !coinNumLabel )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)ShopBuyItemUtility_TypeInfo;
  v18 = coinIcon->fields.mWidth;
  v19 = coinNumLabel->fields.mWidth;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  if ( !possessionBGSprite )
    goto LABEL_24;
  UIWidget__set_width(
    (UIWidget_o *)possessionBGSprite,
    mWidth + v15 + v15 + v17 + v18 + v19 + ShopBuyItemUtility_TypeInfo->static_fields->COIN_WIDTH_OFFSET_VALUE,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionBGSprite, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !grid
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)grid,
                                                   0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL),
        y = localPosition.fields.y,
        z = localPosition.fields.z,
        (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)possessionBGSprite,
                                                    0LL)) == 0LL)
    || (LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)gameObject,
                                       0LL),
        (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)grid,
                                                    0LL)) == 0LL) )
  {
LABEL_24:
    sub_1B9026C(gameObject, possessionNumLabel);
  }
  v24.fields.x = (float)(v22 + (float)v15) + (float)(mWidth + v15);
  v24.fields.y = y;
  v24.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0LL);
}


void __fastcall ShopBuyItemUtility__SetDefaultMessageLabel(UILabel_o *label, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ShopBuyItemUtility_c *v7; // x0

  if ( (byte_4A6C46B & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&ShopBuyItemUtility_TypeInfo, v3);
    sub_1B90010(&string_TypeInfo, v4);
    byte_4A6C46B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !label )
      sub_1B9026C(v5, v6);
    UILabel__set_text(label, string_TypeInfo->static_fields->Empty, 0LL);
    v7 = ShopBuyItemUtility_TypeInfo;
    if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
      v7 = ShopBuyItemUtility_TypeInfo;
    }
    UILabel__set_fontSize(label, v7->static_fields->MESSAGE_DEFAULT_FONT_SIZE, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemUtility__SetPossessionInfo(
        int32_t svtId,
        UIGrid_o *grid,
        UILabel_o *possessionNumLabel,
        UILabel_o *coinNumLabel,
        UISprite_o *coinIcon,
        UILabel_o *treasureDeviceLevelLabel,
        UISprite_o *summonedSprite,
        UISprite_o *possessionBGSprite,
        bool isDispFlag,
        const MethodInfo *method)
{
  int v17; // w26
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x6

  v17 = svtId;
  if ( (byte_4A6C46E & 1) == 0 )
  {
    *(_QWORD *)&svtId = sub_1B90010(&ShopBuyItemUtility_TypeInfo, grid);
    byte_4A6C46E = 1;
  }
  if ( v17 >= 1 && isDispFlag )
  {
    if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
    ShopBuyItemUtility__SetPossessionNumLabel(v17, possessionNumLabel, (const MethodInfo *)possessionNumLabel);
    ShopBuyItemUtility__SetSvtCoin(v17, coinNumLabel, coinIcon, v18);
    ShopBuyItemUtility__SetTreasureDeviceLevelLabel(v17, treasureDeviceLevelLabel, v19);
    ShopBuyItemUtility__SetSummonedIcon(v17, summonedSprite, v20);
    if ( grid )
    {
      ((void (__fastcall *)(UIGrid_o *, Il2CppMethodPointer))grid->klass->vtable._8_Reposition.method)(
        grid,
        grid->klass->vtable._9_ResetPosition.methodPtr);
      ShopBuyItemUtility__SetBgSprite(
        grid,
        possessionNumLabel,
        coinNumLabel,
        coinIcon,
        treasureDeviceLevelLabel,
        possessionBGSprite,
        v21);
      return;
    }
LABEL_22:
    sub_1B9026C(*(_QWORD *)&svtId, grid);
  }
  if ( !possessionNumLabel )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionNumLabel, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0LL);
  if ( !coinNumLabel )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinNumLabel, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0LL);
  if ( !coinIcon )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinIcon, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0LL);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)treasureDeviceLevelLabel, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0LL);
  if ( !summonedSprite )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonedSprite, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0LL);
  if ( !possessionBGSprite )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionBGSprite, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemUtility__SetPossessionNumLabel(
        int32_t svtId,
        UILabel_o *possessionNumLabel,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantMaster_o *v9; // x22
  int32_t ServantHavingCount; // w21
  bool IsServantHaving; // w20
  System_String_o *v12; // x20
  Il2CppObject *NumberFormat; // x0
  System_String_o *v14; // x0

  v4 = svtId;
  if ( (byte_4A6C46F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_UserServantMaster___, possessionNumLabel);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&LocalizationManager_TypeInfo, v6);
    sub_1B90010(&StringLiteral_10411/*"POSSESSION_NUM"*/, v7);
    *(_QWORD *)&svtId = sub_1B90010(&StringLiteral_11808/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, v8);
    byte_4A6C46F = 1;
  }
  if ( !possessionNumLabel )
    goto LABEL_14;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionNumLabel, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&svtId = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !*(_QWORD *)&svtId )
LABEL_14:
    sub_1B9026C(*(_QWORD *)&svtId, possessionNumLabel);
  v9 = *(UserServantMaster_o **)&svtId;
  ServantHavingCount = UserServantMaster__GetServantHavingCount(*(UserServantMaster_o **)&svtId, v4, 0, 0LL);
  IsServantHaving = UserServantMaster__IsServantHaving(v9, v4, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( IsServantHaving )
      goto LABEL_10;
LABEL_12:
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11808/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0LL);
    goto LABEL_13;
  }
  if ( !IsServantHaving )
    goto LABEL_12;
LABEL_10:
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10411/*"POSSESSION_NUM"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(ServantHavingCount, 0LL);
  v14 = System_String__Format(v12, NumberFormat, 0LL);
LABEL_13:
  UILabel__set_text(possessionNumLabel, v14, 0LL);
  UILabel__UpdateCondensedScaleComponent(possessionNumLabel, 0LL);
}


void __fastcall ShopBuyItemUtility__SetShopHaveStatusIcon(
        ShopEntity_o *shopEntity,
        UISprite_o *sprite,
        bool isDispFlag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  struct System_String_o *Empty; // x21
  System_String_o *v13; // x20

  if ( (byte_4A6C46D & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, sprite);
    sub_1B90010(&string_TypeInfo, v7);
    sub_1B90010(&StringLiteral_20351/*"img_icon_acquired"*/, v8);
    byte_4A6C46D = 1;
  }
  if ( shopEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) == 0 )
    {
      if ( !sprite
        || ((gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL), !isDispFlag)
          ? (v9 = 0LL)
          : (v9 = (UnityEngine_GameObject_o *)ShopEntity__IsServantGet(shopEntity, 0LL)),
            !gameObject
         || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)v9 & 1, 0LL),
             (v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL)) )
      {
        sub_1B9026C(v9, v10);
      }
      if ( UnityEngine_GameObject__get_activeSelf(v9, 0LL) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, 0LL) )
          v13 = (System_String_o *)StringLiteral_20351/*"img_icon_acquired"*/;
        else
          v13 = Empty;
        if ( !System_String__IsNullOrEmpty(v13, 0LL) )
        {
          UISprite__set_spriteName(sprite, v13, 0LL);
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
            sprite,
            sprite->klass->vtable._34_get_minWidth.methodPtr);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemUtility__SetSummonedIcon(
        int32_t svtId,
        UISprite_o *summonedSprite,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool v9; // w0
  __int64 v10; // x21
  __int64 v11; // x22
  bool v12; // w20
  System_String_o *v13; // x1

  v4 = svtId;
  if ( (byte_4A6C472 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, summonedSprite);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5);
    sub_1B90010(&DataManager_TypeInfo, v6);
    sub_1B90010(&StringLiteral_20353/*"img_icon_summoned"*/, v7);
    *(_QWORD *)&svtId = sub_1B90010(&StringLiteral_20352/*"img_icon_not_summoned"*/, v8);
    byte_4A6C472 = 1;
  }
  if ( !summonedSprite )
    goto LABEL_14;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonedSprite, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&svtId = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(_QWORD *)&svtId )
LABEL_14:
    sub_1B9026C(*(_QWORD *)&svtId, summonedSprite);
  v9 = UserServantCollectionMaster__IsGet(*(UserServantCollectionMaster_o **)&svtId, v4, 0LL);
  v10 = StringLiteral_20353/*"img_icon_summoned"*/;
  v11 = StringLiteral_20352/*"img_icon_not_summoned"*/;
  v12 = v9;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v12 )
    v13 = (System_String_o *)v10;
  else
    v13 = (System_String_o *)v11;
  AtlasManager__SetEventSprite(summonedSprite, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopBuyItemUtility__SetSvtCoin(
        int32_t svtId,
        UILabel_o *coinNumLabel,
        UISprite_o *coinIcon,
        const MethodInfo *method)
{
  int32_t v6; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x22
  int32_t num; // w22
  System_String_o *v15; // x23
  Il2CppObject *NumberFormat; // x0
  System_String_o *v17; // x0
  int32_t ImageId; // w20
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v6 = svtId;
  if ( (byte_4A6C470 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, coinNumLabel);
    sub_1B90010(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v8);
    sub_1B90010(&DataManager_TypeInfo, v9);
    sub_1B90010(&LocalizationManager_TypeInfo, v10);
    sub_1B90010(&NetworkManager_TypeInfo, v11);
    *(_QWORD *)&svtId = sub_1B90010(&StringLiteral_7099/*"HAVE_MULTIPLE_INFO"*/, v12);
    byte_4A6C470 = 1;
  }
  entity = 0LL;
  if ( !coinNumLabel )
    goto LABEL_25;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinNumLabel, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0LL);
  if ( !coinIcon )
    goto LABEL_25;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinIcon, 0LL);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)&svtId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_25;
  *(_QWORD *)&svtId = UserSvtCoinMaster__TryGetEntity(
                        (UserSvtCoinMaster_o *)Master_object,
                        &entity,
                        *(int64_t *)&svtId,
                        v6,
                        0LL);
  if ( (svtId & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_25;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_7099/*"HAVE_MULTIPLE_INFO"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0LL);
  v17 = System_String__Format(v15, NumberFormat, 0LL);
  UILabel__set_text(coinNumLabel, v17, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&svtId = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !*(_QWORD *)&svtId
    || (*(_QWORD *)&svtId = ItemMaster__GetServantCoinItemEntity(*(ItemMaster_o **)&svtId, v6, 0LL)) == 0LL )
  {
LABEL_25:
    sub_1B9026C(*(_QWORD *)&svtId, coinNumLabel);
  }
  ImageId = ItemEntity__GetImageId(*(ItemEntity_o **)&svtId, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCoin(coinIcon, ImageId, 0LL);
}


void __fastcall ShopBuyItemUtility__SetTreasureDeviceLevelLabel(
        int32_t svtId,
        UILabel_o *treasureDeviceLevelLabel,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantMaster_o *Master_object; // x0
  __int64 v10; // x1
  UserServantMaster_o *v11; // x21
  UnityEngine_GameObject_o *v12; // x22
  int32_t MaxTreasureDeviceLevel; // w20
  System_String_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A6C471 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_UserServantMaster___, treasureDeviceLevelLabel);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&int_TypeInfo, v6);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&StringLiteral_8592/*"MAX_NP_LEVEL"*/, v8);
    byte_4A6C471 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !treasureDeviceLevelLabel
    || (v11 = Master_object,
        Master_object = (UserServantMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)treasureDeviceLevelLabel,
                                                 0LL),
        !v11)
    || (v12 = (UnityEngine_GameObject_o *)Master_object,
        Master_object = (UserServantMaster_o *)UserServantMaster__IsServantHaving(v11, svtId, 0, 0LL),
        !v12) )
  {
    sub_1B9026C(Master_object, v10);
  }
  UnityEngine_GameObject__SetActive(v12, (unsigned __int8)Master_object & 1, 0LL);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(v11, svtId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8592/*"MAX_NP_LEVEL"*/, 0LL);
  v20 = MaxTreasureDeviceLevel;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v15, v16, v17);
  v19 = System_String__Format(v14, v18, 0LL);
  UILabel__set_text(treasureDeviceLevelLabel, v19, 0LL);
  UILabel__UpdateCondensedScaleComponent(treasureDeviceLevelLabel, 0LL);
}