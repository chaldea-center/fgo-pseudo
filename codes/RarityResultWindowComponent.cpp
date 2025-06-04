void __fastcall RarityResultWindowComponent___ctor(RarityResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B05EEF & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B05EEF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RarityResultWindowComponent__CloseToNext(
        RarityResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B05EEE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_RarityResultWindowComponent___c__DisplayClass13_0__CloseToNext_b__0__, v5);
    sub_1BC3008(&RarityResultWindowComponent___c__DisplayClass13_0_TypeInfo, v6);
    byte_4B05EEE = 1;
  }
  v7 = sub_1BC3254(RarityResultWindowComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  *(_QWORD *)(v7 + 16) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_RarityResultWindowComponent___c__DisplayClass13_0__CloseToNext_b__0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RarityResultWindowComponent__Open(
        RarityResultWindowComponent_o *this,
        int32_t oldRarity,
        int32_t oldCost,
        int32_t nowRarity,
        int32_t nowCost,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *openedAction,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UISprite_o *windowBgSprite; // x26
  UnityEngine_Component_o *rarityChangeInfoTitle; // x0
  struct UILabel_o *v31; // x26
  System_String_o *v32; // x0
  System_String_o *Empty; // x1
  UILabel_o *rarityChangeInfoSubTitleOld; // x25
  UILabel_o *rarityChangeInfoNameOld; // x25
  System_String_o *v36; // x26
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x24
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  UILabel_o *rarityChangeInfoSubTitleNow; // x23
  UILabel_o *rarityChangeInfoNameNow; // x23
  System_String_o *v47; // x24
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  int32_t v56; // [xsp+8h] [xbp-68h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v58; // [xsp+18h] [xbp-58h] BYREF
  int32_t v59; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B05EED & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&oldRarity);
    sub_1BC3008(&int_TypeInfo, v15);
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    sub_1BC3008(&Method_RarityResultWindowComponent_Open__, v17);
    sub_1BC3008(&string_TypeInfo, v18);
    sub_1BC3008(&StringLiteral_20165/*"img_combine_arrow_sp"*/, v19);
    sub_1BC3008(&StringLiteral_2881/*"BEFORE_CHANGE_RARITY_SUB_TITLE"*/, v20);
    sub_1BC3008(&StringLiteral_3803/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/, v21);
    sub_1BC3008(&StringLiteral_20376/*"img_skillwindow_sp"*/, v22);
    sub_1BC3008(&StringLiteral_3804/*"COSTUME_CHANGE_RARITY_TITLE"*/, v23);
    sub_1BC3008(&StringLiteral_1916/*"AFTER_CHANGE_RARITY_SUB_TITLE"*/, v24);
    byte_4B05EED = 1;
  }
  if ( !this->fields.baseState )
  {
    v25 = Method_RarityResultWindowComponent_Open__;
    if ( (*((_BYTE *)Method_RarityResultWindowComponent_Open__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1BC3020(Method_RarityResultWindowComponent_Open__);
    v26 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 6, 0, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      windowBgSprite = this->fields.windowBgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_20376/*"img_skillwindow_sp"*/, 0LL);
      AtlasManager__SetDownloadCommonSprite(
        this->fields.rarityChangeInfArrowSprite1,
        (System_String_o *)StringLiteral_20165/*"img_combine_arrow_sp"*/,
        0LL);
      AtlasManager__SetDownloadCommonSprite(
        this->fields.rarityChangeInfArrowSprite2,
        (System_String_o *)StringLiteral_20165/*"img_combine_arrow_sp"*/,
        0LL);
      gameObject = this->fields.rarityChangeInfo;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        rarityChangeInfoTitle = (UnityEngine_Component_o *)this->fields.rarityChangeInfoTitle;
        if ( svtCostumeEnt )
        {
          BasicHelper__SetActiveSafely(rarityChangeInfoTitle, 1, 0LL);
          v31 = this->fields.rarityChangeInfoTitle;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COSTUME_CHANGE_RARITY_TITLE"*/, 0LL);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     v32,
                                                     (Il2CppObject *)svtCostumeEnt->fields.name,
                                                     0LL);
          if ( !v31 )
            goto LABEL_25;
          Empty = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)v31;
        }
        else
        {
          BasicHelper__SetActiveSafely(rarityChangeInfoTitle, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.rarityChangeInfoTitle;
          if ( !gameObject )
            goto LABEL_25;
          Empty = string_TypeInfo->static_fields->Empty;
        }
        UILabel__set_text((UILabel_o *)gameObject, Empty, 0LL);
        rarityChangeInfoSubTitleOld = this->fields.rarityChangeInfoSubTitleOld;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2881/*"BEFORE_CHANGE_RARITY_SUB_TITLE"*/, 0LL);
        if ( rarityChangeInfoSubTitleOld )
        {
          UILabel__set_text(rarityChangeInfoSubTitleOld, (System_String_o *)gameObject, 0LL);
          rarityChangeInfoNameOld = this->fields.rarityChangeInfoNameOld;
          v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/, 0LL);
          v59 = oldRarity;
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v37, v38, v39);
          v58 = oldCost;
          v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v41, v42, v43);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(v36, v40, v44, 0LL);
          if ( rarityChangeInfoNameOld )
          {
            UILabel__set_text(rarityChangeInfoNameOld, (System_String_o *)gameObject, 0LL);
            rarityChangeInfoSubTitleNow = this->fields.rarityChangeInfoSubTitleNow;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_1916/*"AFTER_CHANGE_RARITY_SUB_TITLE"*/,
                                                       0LL);
            if ( rarityChangeInfoSubTitleNow )
            {
              UILabel__set_text(rarityChangeInfoSubTitleNow, (System_String_o *)gameObject, 0LL);
              rarityChangeInfoNameNow = this->fields.rarityChangeInfoNameNow;
              v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/, 0LL);
              v57 = nowRarity;
              v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v48, v49, v50);
              v56 = nowCost;
              v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v52, v53, v54);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(v47, v51, v55, 0LL);
              if ( rarityChangeInfoNameNow )
              {
                UILabel__set_text(rarityChangeInfoNameNow, (System_String_o *)gameObject, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BC3264(gameObject, v28);
  }
}


void __fastcall RarityResultWindowComponent__ValidateSerializedField(
        RarityResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RarityResultWindowComponent___c__DisplayClass13_0___ctor(
        RarityResultWindowComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RarityResultWindowComponent___c__DisplayClass13_0___CloseToNext_b__0(
        RarityResultWindowComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}