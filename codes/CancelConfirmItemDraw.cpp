void __fastcall CancelConfirmItemDraw___ctor(CancelConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CancelConfirmItemDraw__SetItem(
        CancelConfirmItemDraw_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *warningText; // x21
  __int128 v9; // q0
  __int128 v10; // q1
  UnityEngine_Component_c *klass; // x20
  bool v12; // zf
  System_String_o *v13; // x20
  __int64 v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_438E3E9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TutorialFlag_TypeInfo);
    sub_B775C4(&StringLiteral_11848/*"SELECT_NO_SORTIE"*/);
    sub_B775C4(&StringLiteral_19199/*"formation_blank_small"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E3E9 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_41;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningText;
  if ( !maskSprite )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !maskSprite )
    goto LABEL_41;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !maskSprite )
    goto LABEL_41;
  if ( !userServantEntity )
  {
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)maskSprite, 0LL);
    if ( !equipIdList )
      goto LABEL_41;
    if ( !equipIdList->max_length )
      goto LABEL_42;
    v13 = (System_String_o *)StringLiteral_19199/*"formation_blank_small"*/;
    if ( !equipIdList->m_Items[0] )
      goto LABEL_39;
    maskSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !maskSprite )
      goto LABEL_41;
    maskSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)maskSprite,
                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !equipIdList->max_length )
    {
LABEL_42:
      v14 = sub_B776C8(maskSprite);
      sub_B77668(v14, 0LL);
    }
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)maskSprite,
                                                equipIdList->m_Items[0],
                                                (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( this->fields.servantFaceIcon )
      {
        ServantFaceIconComponent__SetEquip(this->fields.servantFaceIcon, (UserServantEntity_o *)maskSprite, 0LL);
        goto LABEL_39;
      }
    }
LABEL_41:
    sub_B7769C(maskSprite, userServantEntity);
  }
  ServantFaceIconComponent__Set_31758964(
    (ServantFaceIconComponent_o *)maskSprite,
    userServantEntity,
    equipIdList,
    0LL,
    0LL,
    0LL);
  if ( UserServantEntity__IsHeroine(userServantEntity, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29515752(126, 0LL) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_41;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !maskSprite )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      warningText = this->fields.warningText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SELECT_NO_SORTIE"*/, 0LL);
      if ( !warningText )
        goto LABEL_41;
      UILabel__set_text(warningText, (System_String_o *)maskSprite, 0LL);
    }
  }
  maskSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !maskSprite )
    goto LABEL_41;
  v9 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  v10 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  klass = maskSprite[5].klass;
  *(_OWORD *)&v16.fields.currentCryptoKey = v9;
  *(_OWORD *)&v16.fields.fakeValue = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v16;
  v12 = klass == (UnityEngine_Component_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                              &v15,
                                              0LL);
  v13 = 0LL;
  if ( v12 )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
        v13 = 0LL;
        goto LABEL_39;
      }
    }
    goto LABEL_41;
  }
LABEL_39:
  maskSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !maskSprite )
    goto LABEL_41;
  UISprite__set_spriteName((UISprite_o *)maskSprite, v13, 0LL);
}