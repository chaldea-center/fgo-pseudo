void RarityResultWindowComponent___ctor(RarityResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D30A73 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D30A73 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RarityResultWindowComponent__CloseToNext(
        RarityResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x20

  if ( (byte_4D30A72 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RarityResultWindowComponent___c__DisplayClass13_0__CloseToNext_b__0__);
    sub_1C94098(&RarityResultWindowComponent___c__DisplayClass13_0_TypeInfo);
    byte_4D30A72 = 1;
  }
  v5 = sub_1C942E4(RarityResultWindowComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_RarityResultWindowComponent___c__DisplayClass13_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v14, 0);
}


void RarityResultWindowComponent__Open(
        RarityResultWindowComponent_o *this,
        int32_t oldRarity,
        int32_t oldCost,
        int32_t nowRarity,
        int32_t nowCost,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *openedAction,
        const MethodInfo *method)
{
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UISprite_o *windowBgSprite; // x26
  UnityEngine_Component_o *rarityChangeInfoTitle; // x0
  struct UILabel_o *v21; // x26
  System_String_o *v22; // x0
  System_String_o *Empty; // x1
  UILabel_o *rarityChangeInfoSubTitleOld; // x25
  UILabel_o *rarityChangeInfoNameOld; // x25
  System_String_o *v26; // x26
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x0
  UILabel_o *rarityChangeInfoSubTitleNow; // x23
  UILabel_o *rarityChangeInfoNameNow; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x22
  Il2CppObject *v33; // x0
  int32_t v34; // [xsp+8h] [xbp-68h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v36; // [xsp+18h] [xbp-58h] BYREF
  int32_t v37; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4D30A71 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_RarityResultWindowComponent_Open__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_20535/*"img_combine_arrow_sp"*/);
    sub_1C94098(&StringLiteral_2899/*"BEFORE_CHANGE_RARITY_SUB_TITLE"*/);
    sub_1C94098(&StringLiteral_3847/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/);
    sub_1C94098(&StringLiteral_20755/*"img_skillwindow_sp"*/);
    sub_1C94098(&StringLiteral_3848/*"COSTUME_CHANGE_RARITY_TITLE"*/);
    sub_1C94098(&StringLiteral_1921/*"AFTER_CHANGE_RARITY_SUB_TITLE"*/);
    byte_4D30A71 = 1;
  }
  if ( !this->fields.baseState )
  {
    v15 = Method_RarityResultWindowComponent_Open__;
    if ( (*((_BYTE *)Method_RarityResultWindowComponent_Open__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C940B0(Method_RarityResultWindowComponent_Open__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C9407C(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      windowBgSprite = this->fields.windowBgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_20755/*"img_skillwindow_sp"*/, 0);
      AtlasManager__SetDownloadCommonSprite(
        this->fields.rarityChangeInfArrowSprite1,
        (System_String_o *)StringLiteral_20535/*"img_combine_arrow_sp"*/,
        0);
      AtlasManager__SetDownloadCommonSprite(
        this->fields.rarityChangeInfArrowSprite2,
        (System_String_o *)StringLiteral_20535/*"img_combine_arrow_sp"*/,
        0);
      gameObject = this->fields.rarityChangeInfo;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        rarityChangeInfoTitle = (UnityEngine_Component_o *)this->fields.rarityChangeInfoTitle;
        if ( svtCostumeEnt )
        {
          BasicHelper__SetActiveSafely(rarityChangeInfoTitle, 1, 0);
          v21 = this->fields.rarityChangeInfoTitle;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3848/*"COSTUME_CHANGE_RARITY_TITLE"*/, 0);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     v22,
                                                     (Il2CppObject *)svtCostumeEnt->fields.name,
                                                     0);
          if ( !v21 )
            goto LABEL_25;
          Empty = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)v21;
        }
        else
        {
          BasicHelper__SetActiveSafely(rarityChangeInfoTitle, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.rarityChangeInfoTitle;
          if ( !gameObject )
            goto LABEL_25;
          Empty = string_TypeInfo->static_fields->Empty;
        }
        UILabel__set_text((UILabel_o *)gameObject, Empty, 0);
        rarityChangeInfoSubTitleOld = this->fields.rarityChangeInfoSubTitleOld;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2899/*"BEFORE_CHANGE_RARITY_SUB_TITLE"*/, 0);
        if ( rarityChangeInfoSubTitleOld )
        {
          UILabel__set_text(rarityChangeInfoSubTitleOld, (System_String_o *)gameObject, 0);
          rarityChangeInfoNameOld = this->fields.rarityChangeInfoNameOld;
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/, 0);
          v37 = oldRarity;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
          v36 = oldCost;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format_64459052(v26, v27, v28, 0);
          if ( rarityChangeInfoNameOld )
          {
            UILabel__set_text(rarityChangeInfoNameOld, (System_String_o *)gameObject, 0);
            rarityChangeInfoSubTitleNow = this->fields.rarityChangeInfoSubTitleNow;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1921/*"AFTER_CHANGE_RARITY_SUB_TITLE"*/, 0);
            if ( rarityChangeInfoSubTitleNow )
            {
              UILabel__set_text(rarityChangeInfoSubTitleNow, (System_String_o *)gameObject, 0);
              rarityChangeInfoNameNow = this->fields.rarityChangeInfoNameNow;
              v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/, 0);
              v35 = nowRarity;
              v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
              v34 = nowCost;
              v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format_64459052(v31, v32, v33, 0);
              if ( rarityChangeInfoNameNow )
              {
                UILabel__set_text(rarityChangeInfoNameNow, (System_String_o *)gameObject, 0);
                BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C942F0(gameObject, v18);
  }
}


void RarityResultWindowComponent__ValidateSerializedField(
        RarityResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void RarityResultWindowComponent___c__DisplayClass13_0___ctor(
        RarityResultWindowComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RarityResultWindowComponent___c__DisplayClass13_0___CloseToNext_b__0(
        RarityResultWindowComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}