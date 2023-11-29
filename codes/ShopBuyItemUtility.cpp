void __fastcall ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FF82F & 1) == 0 )
  {
    sub_B16FFC(&ShopBuyItemUtility_TypeInfo, v1);
    byte_40FF82F = 1;
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
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  WebViewManager_o *v17; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x21
  const MethodInfo *v19; // x1
  int32_t ItemID; // w0
  WarEntity_o *Entity; // x0
  WarEntity_o *v22; // x20
  System_String_o *mText; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0

  if ( (byte_40FF82D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, textOnMaskLabel);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_12123, v11);
    byte_40FF82D = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_25;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                           MasterData_WarQuestSelectionMaster,
                           UserId,
                           shopEntity->fields.id,
                           0LL);
      if ( !EntityDefinitely || !UserShopEntity__CheckFlagKind(EntityDefinitely, 3, 0LL) )
        return;
      v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v17 )
        goto LABEL_25;
      v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v17,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      ItemID = ShopEntity__GetItemID(shopEntity, v19);
      if ( !v18 )
        goto LABEL_25;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v18,
                 ItemID,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        return;
      if ( !textOnMaskLabel )
LABEL_25:
        sub_B170D4();
      v22 = Entity;
      mText = textOnMaskLabel->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12123, 0LL);
      v25 = System_String__Format(v24, (Il2CppObject *)v22->fields.age, 0LL);
      v26 = System_String__Concat_43743732(mText, v25, 0LL);
      WrapControlText__textAdjust(textOnMaskLabel, v26, textOnMaskLabel->fields.mFontSize, 0, 0, 0LL);
    }
  }
}


void __fastcall ShopBuyItemUtility__SetDefaultMessageLabel(UILabel_o *label, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ShopBuyItemUtility_c *v5; // x0

  if ( (byte_40FF82C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ShopBuyItemUtility_TypeInfo, v3);
    sub_B16FFC(&string_TypeInfo, v4);
    byte_40FF82C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label )
      sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  bool v11; // w0
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x1
  struct System_String_o *Empty; // x21
  System_String_o *v15; // x20

  if ( (byte_40FF82E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    sub_B16FFC(&string_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19424, v8);
    byte_40FF82E = 1;
  }
  if ( shopEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
    {
      if ( !sprite )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( isDispFlag )
      {
        v11 = ShopEntity__IsServantGet(shopEntity, v9);
        if ( !gameObject )
LABEL_21:
          sub_B170D4();
      }
      else
      {
        v11 = 0;
        if ( !gameObject )
          goto LABEL_21;
      }
      UnityEngine_GameObject__SetActive(gameObject, v11, 0LL);
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( !v12 )
        goto LABEL_21;
      if ( UnityEngine_GameObject__get_activeSelf(v12, 0LL) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, v13) )
          v15 = (System_String_o *)StringLiteral_19424;
        else
          v15 = Empty;
        if ( !System_String__IsNullOrEmpty(v15, 0LL) )
        {
          UISprite__set_spriteName(sprite, v15, 0LL);
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
            sprite,
            sprite->klass->vtable._34_get_minWidth.methodPtr);
        }
      }
    }
  }
}