void __fastcall ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FB1C9 & 1) == 0 )
  {
    sub_1B64A00(&ShopBuyItemUtility_TypeInfo, v1);
    byte_49FB1C9 = 1;
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

  if ( (byte_49FB1C7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, textOnMaskLabel);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64A00(&StringLiteral_12020/*"SHOP_RETURN_EXCHANGE_ITEM"*/, v11);
    byte_49FB1C7 = 1;
  }
  if ( shopEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)textOnMaskLabel, 0LL, 0LL)
      && ShopEntity__IsSoldOut(shopEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = ShopEntity__GetItemID(shopEntity, 0LL);
      if ( !v16 )
        goto LABEL_22;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                            Instance,
                            (const MethodInfo_30D6798 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        return;
      if ( !textOnMaskLabel )
LABEL_22:
        sub_1B64C5C(Instance, v13);
      v17 = Instance;
      mText = textOnMaskLabel->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SHOP_RETURN_EXCHANGE_ITEM"*/, 0LL);
      v20 = System_String__Format(v19, *(Il2CppObject **)(v17 + 24), 0LL);
      v21 = System_String__Concat_61385136(mText, v20, 0LL);
      WrapControlText__textAdjust(textOnMaskLabel, v21, textOnMaskLabel->fields.mFontSize, 0, 0, 0LL);
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

  if ( (byte_49FB1C6 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&ShopBuyItemUtility_TypeInfo, v3);
    sub_1B64A00(&string_TypeInfo, v4);
    byte_49FB1C6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !label )
      sub_1B64C5C(v5, v6);
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

  if ( (byte_49FB1C8 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, sprite);
    sub_1B64A00(&string_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_20246/*"img_icon_acquired"*/, v8);
    byte_49FB1C8 = 1;
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
        sub_1B64C5C(v9, v10);
      }
      if ( UnityEngine_GameObject__get_activeSelf(v9, 0LL) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, 0LL) )
          v13 = (System_String_o *)StringLiteral_20246/*"img_icon_acquired"*/;
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