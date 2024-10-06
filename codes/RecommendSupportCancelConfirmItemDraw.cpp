void __fastcall RecommendSupportCancelConfirmItemDraw___ctor(
        RecommendSupportCancelConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecommendSupportCancelConfirmItemDraw__Awake(
        RecommendSupportCancelConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportCancelConfirmItemDraw__SetItem(
        RecommendSupportCancelConfirmItemDraw_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *warningText; // x21
  __int128 v17; // q0
  __int128 v18; // q1
  UnityEngine_Component_c *klass; // x20
  bool v20; // zf
  System_String_o *v21; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-50h]

  if ( (byte_4A6C026 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantMaster___, userServantEntity);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B90010(&TutorialFlag_TypeInfo, v11);
    sub_1B90010(&StringLiteral_11514/*"SELECT_NO_SORTIE"*/, v12);
    sub_1B90010(&StringLiteral_19581/*"formation_blank_small"*/, v13);
    sub_1B90010(&StringLiteral_1/*""*/, v14);
    byte_4A6C026 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_38;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningText;
  if ( !maskSprite )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !maskSprite )
    goto LABEL_38;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !maskSprite )
    goto LABEL_38;
  if ( !userServantEntity )
  {
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)maskSprite, 0LL);
    if ( !equipIdList )
      goto LABEL_38;
    if ( !equipIdList->max_length )
      goto LABEL_39;
    v21 = (System_String_o *)StringLiteral_19581/*"formation_blank_small"*/;
    if ( !equipIdList->m_Items[0] )
      goto LABEL_36;
    maskSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !maskSprite )
      goto LABEL_38;
    maskSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)maskSprite,
                                              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !equipIdList->max_length )
LABEL_39:
      sub_1B90274(maskSprite, userServantEntity);
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)maskSprite,
                                                equipIdList->m_Items[0],
                                                (const MethodInfo_312C754 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( this->fields.servantFaceIcon )
      {
        ServantFaceIconComponent__SetEquip(this->fields.servantFaceIcon, (UserServantEntity_o *)maskSprite, 0LL);
        goto LABEL_36;
      }
    }
LABEL_38:
    sub_1B9026C(maskSprite, userServantEntity);
  }
  ServantFaceIconComponent__Set_38273416(
    (ServantFaceIconComponent_o *)maskSprite,
    userServantEntity,
    equipIdList,
    0LL,
    0LL,
    0LL);
  if ( UserServantEntity__IsHeroine(userServantEntity, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37740444(126, 0LL) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_38;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !maskSprite )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      warningText = this->fields.warningText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SELECT_NO_SORTIE"*/, 0LL);
      if ( !warningText )
        goto LABEL_38;
      UILabel__set_text(warningText, (System_String_o *)maskSprite, 0LL);
    }
  }
  maskSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !maskSprite )
    goto LABEL_38;
  v17 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  klass = maskSprite[5].klass;
  *(_OWORD *)&v23.fields.currentCryptoKey = v17;
  *(_OWORD *)&v23.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v22 = v23;
  v20 = klass == (UnityEngine_Component_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(
                                              &v22,
                                              0LL);
  v21 = 0LL;
  if ( v20 )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
        v21 = 0LL;
        goto LABEL_36;
      }
    }
    goto LABEL_38;
  }
LABEL_36:
  maskSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !maskSprite )
    goto LABEL_38;
  UISprite__set_spriteName((UISprite_o *)maskSprite, v21, 0LL);
}