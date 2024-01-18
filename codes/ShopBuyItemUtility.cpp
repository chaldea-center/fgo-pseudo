void __fastcall ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418D4BE & 1) == 0 )
  {
    sub_B2C35C(&ShopBuyItemUtility_TypeInfo, v1);
    byte_418D4BE = 1;
  }
  ShopBuyItemUtility_TypeInfo->static_fields->MESSAGE_DEFAULT_FONT_SIZE = 16;
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
  const MethodInfo *v12; // x1
  int64_t Instance; // x0
  __int64 v14; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x21
  const MethodInfo *v18; // x1
  int64_t v19; // x20
  System_String_o *mText; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0

  if ( (byte_418D4BC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, textOnMaskLabel);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_12176/*"SHOP_RETURN_EXCHANGE_ITEM"*/, v11);
    byte_418D4BC = 1;
  }
  if ( shopEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)textOnMaskLabel, 0LL, 0LL)
      && ShopEntity__IsSoldOut(shopEntity, v12) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = ShopEntity__GetItemID(shopEntity, v18);
      if ( !v17 )
        goto LABEL_25;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v17,
                            Instance,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        return;
      if ( !textOnMaskLabel )
LABEL_25:
        sub_B2C434(Instance, v14);
      v19 = Instance;
      mText = textOnMaskLabel->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHOP_RETURN_EXCHANGE_ITEM"*/, 0LL);
      v22 = System_String__Format(v21, *(Il2CppObject **)(v19 + 24), 0LL);
      v23 = System_String__Concat_44305532(mText, v22, 0LL);
      WrapControlText__textAdjust(textOnMaskLabel, v23, textOnMaskLabel->fields.mFontSize, 0, 0, 0LL);
    }
  }
}


void __fastcall ShopBuyItemUtility__SetDefaultMessageLabel(UILabel_o *label, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ShopBuyItemUtility_c *v7; // x0

  if ( (byte_418D4BB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&ShopBuyItemUtility_TypeInfo, v3);
    sub_B2C35C(&string_TypeInfo, v4);
    byte_418D4BB = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !label )
      sub_B2C434(v5, v6);
    UILabel__set_text(label, string_TypeInfo->static_fields->Empty, 0LL);
    v7 = ShopBuyItemUtility_TypeInfo;
    if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
      v7 = ShopBuyItemUtility_TypeInfo;
    }
    UILabel__set_fontSize(label, v7->static_fields->MESSAGE_DEFAULT_FONT_SIZE, 0LL);
  }
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
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v12; // x1
  struct System_String_o *Empty; // x21
  System_String_o *v14; // x20

  if ( (byte_418D4BD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    sub_B2C35C(&string_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_19498/*"img_icon_acquired"*/, v8);
    byte_418D4BD = 1;
  }
  if ( shopEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) == 0 )
    {
      if ( !sprite )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( isDispFlag )
      {
        v9 = (UnityEngine_GameObject_o *)ShopEntity__IsServantGet(shopEntity, v10);
        if ( !gameObject )
LABEL_21:
          sub_B2C434(v9, v10);
      }
      else
      {
        v9 = 0LL;
        if ( !gameObject )
          goto LABEL_21;
      }
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)v9 & 1, 0LL);
      v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( !v9 )
        goto LABEL_21;
      if ( UnityEngine_GameObject__get_activeSelf(v9, 0LL) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, v12) )
          v14 = (System_String_o *)StringLiteral_19498/*"img_icon_acquired"*/;
        else
          v14 = Empty;
        if ( !System_String__IsNullOrEmpty(v14, 0LL) )
        {
          UISprite__set_spriteName(sprite, v14, 0LL);
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
            sprite,
            sprite->klass->vtable._34_get_minWidth.methodPtr);
        }
      }
    }
  }
}