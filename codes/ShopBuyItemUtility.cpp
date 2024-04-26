void __fastcall ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  if ( (byte_4357A06 & 1) == 0 )
  {
    sub_B70694(&ShopBuyItemUtility_TypeInfo);
    byte_4357A06 = 1;
  }
  ShopBuyItemUtility_TypeInfo->static_fields->MESSAGE_DEFAULT_FONT_SIZE = 16;
}


void __fastcall ShopBuyItemUtility__SetAddTextOnMask(
        ShopEntity_o *shopEntity,
        UILabel_o *textOnMaskLabel,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  const MethodInfo *v11; // x1
  int64_t v12; // x20
  System_String_o *mText; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0

  if ( (byte_4357A04 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_12344/*"SHOP_RETURN_EXCHANGE_ITEM"*/);
    byte_4357A04 = 1;
  }
  if ( shopEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)textOnMaskLabel, 0LL, 0LL)
      && ShopEntity__IsSoldOut(shopEntity, v5) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_25;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                           MasterData_WarQuestSelectionMaster,
                           Instance,
                           shopEntity->fields.id,
                           0LL);
      if ( !EntityDefinitely || !UserShopEntity__CheckFlagKind(EntityDefinitely, 3, 0LL) )
        return;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = ShopEntity__GetItemID(shopEntity, v11);
      if ( !v10 )
        goto LABEL_25;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v10,
                            Instance,
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        return;
      if ( !textOnMaskLabel )
LABEL_25:
        sub_B7076C(Instance, v7);
      v12 = Instance;
      mText = textOnMaskLabel->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12344/*"SHOP_RETURN_EXCHANGE_ITEM"*/, 0LL);
      v15 = System_String__Format(v14, *(Il2CppObject **)(v12 + 24), 0LL);
      v16 = System_String__Concat_44758168(mText, v15, 0LL);
      WrapControlText__textAdjust(textOnMaskLabel, v16, textOnMaskLabel->fields.mFontSize, 0, 0, 0LL);
    }
  }
}


void __fastcall ShopBuyItemUtility__SetDefaultMessageLabel(UILabel_o *label, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  ShopBuyItemUtility_c *v5; // x0

  if ( (byte_4357A03 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ShopBuyItemUtility_TypeInfo);
    sub_B70694(&string_TypeInfo);
    byte_4357A03 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !label )
      sub_B7076C(v3, v4);
    UILabel__set_text(label, string_TypeInfo->static_fields->Empty, 0LL);
    v5 = ShopBuyItemUtility_TypeInfo;
    if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
      v5 = ShopBuyItemUtility_TypeInfo;
    }
    UILabel__set_fontSize(label, v5->static_fields->MESSAGE_DEFAULT_FONT_SIZE, 0LL);
  }
}


void __fastcall ShopBuyItemUtility__SetShopHaveStatusIcon(
        ShopEntity_o *shopEntity,
        UISprite_o *sprite,
        bool isDispFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x0
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v10; // x1
  struct System_String_o *Empty; // x21
  System_String_o *v12; // x20

  if ( (byte_4357A05 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_19804/*"img_icon_acquired"*/);
    byte_4357A05 = 1;
  }
  if ( shopEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( !sprite )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( isDispFlag )
      {
        v7 = (UnityEngine_GameObject_o *)ShopEntity__IsServantGet(shopEntity, v8);
        if ( !gameObject )
LABEL_21:
          sub_B7076C(v7, v8);
      }
      else
      {
        v7 = 0LL;
        if ( !gameObject )
          goto LABEL_21;
      }
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)v7 & 1, 0LL);
      v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( !v7 )
        goto LABEL_21;
      if ( UnityEngine_GameObject__get_activeSelf(v7, 0LL) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, v10) )
          v12 = (System_String_o *)StringLiteral_19804/*"img_icon_acquired"*/;
        else
          v12 = Empty;
        if ( !System_String__IsNullOrEmpty(v12, 0LL) )
        {
          UISprite__set_spriteName(sprite, v12, 0LL);
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
            sprite,
            sprite->klass->vtable._34_get_minWidth.methodPtr);
        }
      }
    }
  }
}