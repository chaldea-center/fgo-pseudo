void __fastcall ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  if ( (byte_4A57787 & 1) == 0 )
  {
    sub_1B885B0(&ShopBuyItemUtility_TypeInfo);
    byte_4A57787 = 1;
  }
  ShopBuyItemUtility_TypeInfo->static_fields->MESSAGE_DEFAULT_FONT_SIZE = 16;
}


void __fastcall ShopBuyItemUtility__SetAddTextOnMask(
        ShopEntity_o *shopEntity,
        UILabel_o *textOnMaskLabel,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  Il2CppObject *v9; // x21
  int64_t v10; // x20
  System_String_o *mText; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0

  if ( (byte_4A57785 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12071/*"SHOP_RETURN_EXCHANGE_ITEM"*/);
    byte_4A57785 = 1;
  }
  if ( shopEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)textOnMaskLabel, 0LL, 0LL)
      && ShopEntity__IsSoldOut(shopEntity, 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      v9 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = ShopEntity__GetItemID(shopEntity, 0LL);
      if ( !v9 )
        goto LABEL_22;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                            Instance,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        return;
      if ( !textOnMaskLabel )
LABEL_22:
        sub_1B8880C(Instance, v6);
      v10 = Instance;
      mText = textOnMaskLabel->fields.mText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SHOP_RETURN_EXCHANGE_ITEM"*/, 0LL);
      v13 = System_String__Format(v12, *(Il2CppObject **)(v10 + 24), 0LL);
      v14 = System_String__Concat_61707032(mText, v13, 0LL);
      WrapControlText__textAdjust(textOnMaskLabel, v14, textOnMaskLabel->fields.mFontSize, 0, 0, 0LL);
    }
  }
}


void __fastcall ShopBuyItemUtility__SetDefaultMessageLabel(UILabel_o *label, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  ShopBuyItemUtility_c *v5; // x0

  if ( (byte_4A57784 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopBuyItemUtility_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A57784 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !label )
      sub_1B8880C(v3, v4);
    UILabel__set_text(label, string_TypeInfo->static_fields->Empty, 0LL);
    v5 = ShopBuyItemUtility_TypeInfo;
    if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  struct System_String_o *Empty; // x21
  System_String_o *v11; // x20

  if ( (byte_4A57786 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_20323/*"img_icon_acquired"*/);
    byte_4A57786 = 1;
  }
  if ( shopEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( !sprite
        || ((gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL), !isDispFlag)
          ? (v7 = 0LL)
          : (v7 = (UnityEngine_GameObject_o *)ShopEntity__IsServantGet(shopEntity, 0LL)),
            !gameObject
         || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)v7 & 1, 0LL),
             (v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL)) )
      {
        sub_1B8880C(v7, v8);
      }
      if ( UnityEngine_GameObject__get_activeSelf(v7, 0LL) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, 0LL) )
          v11 = (System_String_o *)StringLiteral_20323/*"img_icon_acquired"*/;
        else
          v11 = Empty;
        if ( !System_String__IsNullOrEmpty(v11, 0LL) )
        {
          UISprite__set_spriteName(sprite, v11, 0LL);
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
            sprite,
            sprite->klass->vtable._34_get_minWidth.methodPtr);
        }
      }
    }
  }
}