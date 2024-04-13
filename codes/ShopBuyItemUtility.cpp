void __fastcall ShopBuyItemUtility___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE57E & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemUtility_TypeInfo, v1, v2, v3);
    byte_42EE57E = 1;
  }
  ShopBuyItemUtility_TypeInfo->static_fields->MESSAGE_DEFAULT_FONT_SIZE = 16;
}


void __fastcall ShopBuyItemUtility__SetAddTextOnMask(
        ShopEntity_o *shopEntity,
        UILabel_o *textOnMaskLabel,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  const MethodInfo *v27; // x1
  int64_t Instance; // x0
  __int64 v29; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x21
  const MethodInfo *v33; // x1
  int64_t v34; // x20
  System_String_o *mText; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0

  if ( (byte_42EE57C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)textOnMaskLabel, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12323/*"SHOP_RETURN_EXCHANGE_ITEM"*/, v24, v25, v26);
    byte_42EE57C = 1;
  }
  if ( shopEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)textOnMaskLabel, 0LL, 0LL)
      && ShopEntity__IsSoldOut(shopEntity, v27) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = ShopEntity__GetItemID(shopEntity, v33);
      if ( !v32 )
        goto LABEL_25;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v32,
                            Instance,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        return;
      if ( !textOnMaskLabel )
LABEL_25:
        sub_B5D69C(Instance, v29);
      v34 = Instance;
      mText = textOnMaskLabel->fields.mText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SHOP_RETURN_EXCHANGE_ITEM"*/, 0LL);
      v37 = System_String__Format(v36, *(Il2CppObject **)(v34 + 24), 0LL);
      v38 = System_String__Concat_44577788(mText, v37, 0LL);
      WrapControlText__textAdjust(textOnMaskLabel, v38, textOnMaskLabel->fields.mFontSize, 0, 0, 0LL);
    }
  }
}


void __fastcall ShopBuyItemUtility__SetDefaultMessageLabel(UILabel_o *label, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _BOOL8 v11; // x0
  __int64 v12; // x1
  ShopBuyItemUtility_c *v13; // x0

  if ( (byte_42EE57B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ShopBuyItemUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    byte_42EE57B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !label )
      sub_B5D69C(v11, v12);
    UILabel__set_text(label, string_TypeInfo->static_fields->Empty, 0LL);
    v13 = ShopBuyItemUtility_TypeInfo;
    if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
      v13 = ShopBuyItemUtility_TypeInfo;
    }
    UILabel__set_fontSize(label, v13->static_fields->MESSAGE_DEFAULT_FONT_SIZE, 0LL);
  }
}


void __fastcall ShopBuyItemUtility__SetShopHaveStatusIcon(
        ShopEntity_o *shopEntity,
        UISprite_o *sprite,
        bool isDispFlag,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v16; // x1
  struct System_String_o *Empty; // x21
  System_String_o *v18; // x20

  if ( (byte_42EE57D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isDispFlag, method);
    sub_B5D5C4(&string_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19745/*"img_icon_acquired"*/, v10, v11, v12);
    byte_42EE57D = 1;
  }
  if ( shopEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
    if ( ((unsigned __int8)v13 & 1) == 0 )
    {
      if ( !sprite )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( isDispFlag )
      {
        v13 = (UnityEngine_GameObject_o *)ShopEntity__IsServantGet(shopEntity, v14);
        if ( !gameObject )
LABEL_21:
          sub_B5D69C(v13, v14);
      }
      else
      {
        v13 = 0LL;
        if ( !gameObject )
          goto LABEL_21;
      }
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)v13 & 1, 0LL);
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL);
      if ( !v13 )
        goto LABEL_21;
      if ( UnityEngine_GameObject__get_activeSelf(v13, 0LL) )
      {
        Empty = string_TypeInfo->static_fields->Empty;
        if ( ShopEntity__IsServantGet(shopEntity, v16) )
          v18 = (System_String_o *)StringLiteral_19745/*"img_icon_acquired"*/;
        else
          v18 = Empty;
        if ( !System_String__IsNullOrEmpty(v18, 0LL) )
        {
          UISprite__set_spriteName(sprite, v18, 0LL);
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
            sprite,
            sprite->klass->vtable._34_get_minWidth.methodPtr);
        }
      }
    }
  }
}