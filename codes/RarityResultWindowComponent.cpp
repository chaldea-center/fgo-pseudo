void RarityResultWindowComponent___ctor(RarityResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932087 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932087 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20

  if ( (byte_5932086 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RarityResultWindowComponent___c__DisplayClass13_0__CloseToNext_b__0__);
    sub_21FFC50(&RarityResultWindowComponent___c__DisplayClass13_0_TypeInfo);
    byte_5932086 = 1;
  }
  v5 = sub_21FFEBC(RarityResultWindowComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  __int64 v19; // x1
  __int64 v20; // x2
  UISprite_o *windowBgSprite; // x26
  UnityEngine_Component_o *rarityChangeInfoTitle; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct UILabel_o *v25; // x26
  System_String_o *v26; // x0
  System_String_o *v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *rarityChangeInfoSubTitleOld; // x25
  UILabel_o *rarityChangeInfoNameOld; // x25
  System_String_o *v32; // x26
  Il2CppObject *v33; // x24
  Il2CppObject *v34; // x0
  UILabel_o *rarityChangeInfoSubTitleNow; // x23
  UILabel_o *rarityChangeInfoNameNow; // x23
  System_String_o *v37; // x24
  Il2CppObject *v38; // x22
  Il2CppObject *v39; // x0
  int32_t v40; // [xsp+8h] [xbp-68h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v42; // [xsp+18h] [xbp-58h] BYREF
  int32_t v43; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_5932085 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_RarityResultWindowComponent_Open__);
    sub_21FFC50(&StringLiteral_21304/*"img_combine_arrow_sp"*/);
    sub_21FFC50(&StringLiteral_3015/*"BEFORE_CHANGE_RARITY_SUB_TITLE"*/);
    sub_21FFC50(&StringLiteral_3981/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/);
    sub_21FFC50(&StringLiteral_21531/*"img_skillwindow_sp"*/);
    sub_21FFC50(&StringLiteral_3982/*"COSTUME_CHANGE_RARITY_TITLE"*/);
    sub_21FFC50(&StringLiteral_2007/*"AFTER_CHANGE_RARITY_SUB_TITLE"*/);
    byte_5932085 = 1;
  }
  if ( !this->fields.baseState )
  {
    v15 = Method_RarityResultWindowComponent_Open__;
    if ( (*((_BYTE *)Method_RarityResultWindowComponent_Open__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_21FFC68(Method_RarityResultWindowComponent_Open__);
    v16 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      windowBgSprite = this->fields.windowBgSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
      AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_21531/*"img_skillwindow_sp"*/, 0);
      AtlasManager__SetDownloadCommonSprite(
        this->fields.rarityChangeInfArrowSprite1,
        (System_String_o *)StringLiteral_21304/*"img_combine_arrow_sp"*/,
        0);
      AtlasManager__SetDownloadCommonSprite(
        this->fields.rarityChangeInfArrowSprite2,
        (System_String_o *)StringLiteral_21304/*"img_combine_arrow_sp"*/,
        0);
      gameObject = this->fields.rarityChangeInfo;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        rarityChangeInfoTitle = (UnityEngine_Component_o *)this->fields.rarityChangeInfoTitle;
        if ( svtCostumeEnt )
        {
          BasicHelper__SetActiveSafely(rarityChangeInfoTitle, 1, 0);
          v25 = this->fields.rarityChangeInfoTitle;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3982/*"COSTUME_CHANGE_RARITY_TITLE"*/, 0);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     v26,
                                                     (Il2CppObject *)svtCostumeEnt->fields.name,
                                                     0);
          if ( !v25 )
            goto LABEL_25;
          v27 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)v25;
        }
        else
        {
          BasicHelper__SetActiveSafely(rarityChangeInfoTitle, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.rarityChangeInfoTitle;
          if ( !gameObject )
            goto LABEL_25;
          v27 = **(System_String_o ***)(qword_594C0B8 + 184);
        }
        UILabel__set_text((UILabel_o *)gameObject, v27, 0);
        rarityChangeInfoSubTitleOld = this->fields.rarityChangeInfoSubTitleOld;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3015/*"BEFORE_CHANGE_RARITY_SUB_TITLE"*/, 0);
        if ( rarityChangeInfoSubTitleOld )
        {
          UILabel__set_text(rarityChangeInfoSubTitleOld, (System_String_o *)gameObject, 0);
          rarityChangeInfoNameOld = this->fields.rarityChangeInfoNameOld;
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3981/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/, 0);
          v43 = oldRarity;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v43);
          v42 = oldCost;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v42);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(v32, v33, v34, 0);
          if ( rarityChangeInfoNameOld )
          {
            UILabel__set_text(rarityChangeInfoNameOld, (System_String_o *)gameObject, 0);
            rarityChangeInfoSubTitleNow = this->fields.rarityChangeInfoSubTitleNow;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"AFTER_CHANGE_RARITY_SUB_TITLE"*/, 0);
            if ( rarityChangeInfoSubTitleNow )
            {
              UILabel__set_text(rarityChangeInfoSubTitleNow, (System_String_o *)gameObject, 0);
              rarityChangeInfoNameNow = this->fields.rarityChangeInfoNameNow;
              v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3981/*"COSTUME_CHANGE_RARITY_DETAIL_FORMAT"*/, 0);
              v41 = nowRarity;
              v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v41);
              v40 = nowCost;
              v39 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v40);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(v37, v38, v39, 0);
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
    sub_21FFECC(gameObject, v18);
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