void ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  if ( (byte_4C2354E & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    byte_4C2354E = 1;
  }
  *ShopBuyItemUtility_TypeInfo->static_fields = (struct ShopBuyItemUtility_StaticFields)xmmword_C0A320;
}


void ShopBuyItemUtility__SetAddTextOnMask(
        ShopEntity_o *shopEntity,
        UILabel_o *textOnMaskLabel,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  Il2CppObject *v9; // x21
  DataManager_o *v10; // x20
  System_String_o *mText; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0

  if ( (byte_4C23546 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12146/*"SHOP_RETURN_EXCHANGE_ITEM"*/);
    byte_4C23546 = 1;
  }
  if ( shopEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)textOnMaskLabel, 0, 0)
      && ShopEntity__IsSoldOut(shopEntity, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_26;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                           (UserShopMaster_o *)MasterData_object,
                           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                           shopEntity->fields.id,
                           0);
      if ( !EntityDefinitely || !UserShopEntity__CheckFlagKind(EntityDefinitely, 3, 0) )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      v9 = DataManager__GetMasterData_object_(
             Instance,
             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)ShopEntity__GetItemID(shopEntity, 0);
      if ( !v9 )
        goto LABEL_26;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                                    (int32_t)Instance,
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        return;
      if ( !textOnMaskLabel )
LABEL_26:
        sub_1C2D6EC(Instance, v6);
      v10 = Instance;
      mText = textOnMaskLabel->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SHOP_RETURN_EXCHANGE_ITEM"*/, 0);
      v13 = System_String__Format(v12, (Il2CppObject *)v10->fields.m_CancellationTokenSource, 0);
      v14 = System_String__Concat_63457864(mText, v13, 0);
      WrapControlText__textAdjust(textOnMaskLabel, v14, textOnMaskLabel->fields.mFontSize, 0, 0);
    }
  }
}


void ShopBuyItemUtility__SetBgSprite(
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

  if ( (byte_4C2354D & 1) == 0 )
  {
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    byte_4C2354D = 1;
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
  v15 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)treasureDeviceLevelLabel, 0);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)ShopBuyItemUtility_TypeInfo;
    v16 = treasureDeviceLevelLabel->fields.mWidth;
    if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)ShopBuyItemUtility_TypeInfo;
    }
    v17 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 8) + v16;
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
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionBGSprite, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !grid
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)grid,
                                                   0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0),
        y = localPosition.fields.y,
        z = localPosition.fields.z,
        (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)possessionBGSprite,
                                                    0)) == 0)
    || (LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)grid,
                                                    0)) == 0) )
  {
LABEL_24:
    sub_1C2D6EC(gameObject, possessionNumLabel);
  }
  v24.fields.x = (float)(v22 + (float)v15) + (float)(mWidth + v15);
  v24.fields.y = y;
  v24.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0);
}


void ShopBuyItemUtility__SetDefaultMessageLabel(UILabel_o *label, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  ShopBuyItemUtility_c *v5; // x0

  if ( (byte_4C23545 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C23545 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v3 )
  {
    if ( !label )
      sub_1C2D6EC(v3, v4);
    UILabel__set_text(label, string_TypeInfo->static_fields->Empty, 0);
    v5 = ShopBuyItemUtility_TypeInfo;
    if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
      v5 = ShopBuyItemUtility_TypeInfo;
    }
    UILabel__set_fontSize(label, v5->static_fields->MESSAGE_DEFAULT_FONT_SIZE, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemUtility__SetPossessionInfo(
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
  if ( (byte_4C23548 & 1) == 0 )
  {
    *(_QWORD *)&svtId = sub_1C2D490(&ShopBuyItemUtility_TypeInfo);
    byte_4C23548 = 1;
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
      ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))grid->klass->vtable._8_Reposition.methodPtr)(
        grid,
        grid->klass->vtable._8_Reposition.method);
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
    sub_1C2D6EC(*(_QWORD *)&svtId, grid);
  }
  if ( !possessionNumLabel )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionNumLabel, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0);
  if ( !coinNumLabel )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinNumLabel, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0);
  if ( !coinIcon )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinIcon, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)treasureDeviceLevelLabel, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0);
  if ( !summonedSprite )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonedSprite, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0);
  if ( !possessionBGSprite )
    goto LABEL_22;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionBGSprite, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemUtility__SetPossessionNumLabel(int32_t svtId, UILabel_o *possessionNumLabel, const MethodInfo *method)
{
  int32_t v4; // w20
  UserServantMaster_o *v5; // x22
  int32_t ServantHavingCount; // w21
  bool IsServantHaving; // w20
  System_String_o *v8; // x20
  Il2CppObject *NumberFormat; // x0
  System_String_o *v10; // x0

  v4 = svtId;
  if ( (byte_4C23549 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10398/*"POSSESSION_NUM"*/);
    *(_QWORD *)&svtId = sub_1C2D490(&StringLiteral_11837/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/);
    byte_4C23549 = 1;
  }
  if ( !possessionNumLabel )
    goto LABEL_14;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)possessionNumLabel, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&svtId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !*(_QWORD *)&svtId )
LABEL_14:
    sub_1C2D6EC(*(_QWORD *)&svtId, possessionNumLabel);
  v5 = *(UserServantMaster_o **)&svtId;
  ServantHavingCount = UserServantMaster__GetServantHavingCount(*(UserServantMaster_o **)&svtId, v4, 0, 0);
  IsServantHaving = UserServantMaster__IsServantHaving(v5, v4, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( IsServantHaving )
      goto LABEL_10;
LABEL_12:
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0);
    goto LABEL_13;
  }
  if ( !IsServantHaving )
    goto LABEL_12;
LABEL_10:
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10398/*"POSSESSION_NUM"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(ServantHavingCount, 0);
  v10 = System_String__Format(v8, NumberFormat, 0);
LABEL_13:
  UILabel__set_text(possessionNumLabel, v10, 0);
  UILabel__UpdateCondensedScaleComponent(possessionNumLabel, 0);
}


void ShopBuyItemUtility__SetShopHaveStatusIcon(
        ShopEntity_o *shopEntity,
        UISprite_o *sprite,
        bool isDispFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  struct System_String_o *Empty; // x21
  System_String_o *v11; // x20

  if ( (byte_4C23547 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_20401/*"img_icon_acquired"*/);
    byte_4C23547 = 1;
  }
  if ( shopEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( !sprite
        || ((gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0), !isDispFlag)
          ? (v7 = 0)
          : (v7 = (UnityEngine_GameObject_o *)ShopEntity__IsServantGet(shopEntity, 0)),
            !gameObject
         || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)v7 & 1, 0),
             (v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0)) )
      {
        sub_1C2D6EC(v7, v8);
      }
      if ( UnityEngine_GameObject__get_activeSelf(v7, 0) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, 0) )
          v11 = (System_String_o *)StringLiteral_20401/*"img_icon_acquired"*/;
        else
          v11 = Empty;
        if ( !System_String__IsNullOrEmpty(v11, 0) )
        {
          UISprite__set_spriteName(sprite, v11, 0);
          ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
            sprite,
            sprite->klass->vtable._33_MakePixelPerfect.method);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemUtility__SetSummonedIcon(int32_t svtId, UISprite_o *summonedSprite, const MethodInfo *method)
{
  int32_t v4; // w20
  bool v5; // w0
  __int64 v6; // x21
  __int64 v7; // x22
  bool v8; // w20
  System_String_o *v9; // x1

  v4 = svtId;
  if ( (byte_4C2354C & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_20403/*"img_icon_summoned"*/);
    *(_QWORD *)&svtId = sub_1C2D490(&StringLiteral_20402/*"img_icon_not_summoned"*/);
    byte_4C2354C = 1;
  }
  if ( !summonedSprite )
    goto LABEL_14;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonedSprite, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&svtId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(_QWORD *)&svtId )
LABEL_14:
    sub_1C2D6EC(*(_QWORD *)&svtId, summonedSprite);
  v5 = UserServantCollectionMaster__IsGet(*(UserServantCollectionMaster_o **)&svtId, v4, 0);
  v6 = StringLiteral_20403/*"img_icon_summoned"*/;
  v7 = StringLiteral_20402/*"img_icon_not_summoned"*/;
  v8 = v5;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v8 )
    v9 = (System_String_o *)v6;
  else
    v9 = (System_String_o *)v7;
  AtlasManager__SetEventSprite(summonedSprite, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopBuyItemUtility__SetSvtCoin(
        int32_t svtId,
        UILabel_o *coinNumLabel,
        UISprite_o *coinIcon,
        const MethodInfo *method)
{
  int32_t v6; // w20
  Il2CppObject *Master_object; // x22
  int32_t num; // w22
  System_String_o *v9; // x23
  Il2CppObject *NumberFormat; // x0
  System_String_o *v11; // x0
  int32_t ImageId; // w20
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v6 = svtId;
  if ( (byte_4C2354A & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    *(_QWORD *)&svtId = sub_1C2D490(&StringLiteral_7189/*"HAVE_MULTIPLE_INFO"*/);
    byte_4C2354A = 1;
  }
  entity = 0;
  if ( !coinNumLabel )
    goto LABEL_29;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinNumLabel, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0);
  if ( !coinIcon )
    goto LABEL_29;
  *(_QWORD *)&svtId = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coinIcon, 0);
  if ( !*(_QWORD *)&svtId )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&svtId, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  *(_QWORD *)&svtId = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    *(_QWORD *)&svtId = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_29;
  *(_QWORD *)&svtId = UserSvtCoinMaster__TryGetEntity(
                        (UserSvtCoinMaster_o *)Master_object,
                        &entity,
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&svtId + 184LL) + 64LL),
                        v6,
                        0);
  if ( (svtId & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_29;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_7189/*"HAVE_MULTIPLE_INFO"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0);
  v11 = System_String__Format(v9, NumberFormat, 0);
  UILabel__set_text(coinNumLabel, v11, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&svtId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !*(_QWORD *)&svtId
    || (*(_QWORD *)&svtId = ItemMaster__GetServantCoinItemEntity(*(ItemMaster_o **)&svtId, v6, 0)) == 0 )
  {
LABEL_29:
    sub_1C2D6EC(*(_QWORD *)&svtId, coinNumLabel);
  }
  ImageId = ItemEntity__GetImageId(*(ItemEntity_o **)&svtId, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCoin(coinIcon, ImageId, 0);
}


void ShopBuyItemUtility__SetTreasureDeviceLevelLabel(
        int32_t svtId,
        UILabel_o *treasureDeviceLevelLabel,
        const MethodInfo *method)
{
  UserServantMaster_o *Master_object; // x0
  __int64 v6; // x1
  UserServantMaster_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x22
  int32_t MaxTreasureDeviceLevel; // w20
  System_String_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2354B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8610/*"MAX_NP_LEVEL"*/);
    byte_4C2354B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !treasureDeviceLevelLabel
    || (v7 = Master_object,
        Master_object = (UserServantMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)treasureDeviceLevelLabel,
                                                 0),
        !v7)
    || (v8 = (UnityEngine_GameObject_o *)Master_object,
        Master_object = (UserServantMaster_o *)UserServantMaster__IsServantHaving(v7, svtId, 0, 0),
        !v8) )
  {
    sub_1C2D6EC(Master_object, v6);
  }
  UnityEngine_GameObject__SetActive(v8, (unsigned __int8)Master_object & 1, 0);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(v7, svtId, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8610/*"MAX_NP_LEVEL"*/, 0);
  v16 = MaxTreasureDeviceLevel;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
  v15 = System_String__Format(v10, v14, 0);
  UILabel__set_text(treasureDeviceLevelLabel, v15, 0);
  UILabel__UpdateCondensedScaleComponent(treasureDeviceLevelLabel, 0);
}