void RecommendSupportCancelConfirmItemDraw___ctor(
        RecommendSupportCancelConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecommendSupportCancelConfirmItemDraw__Awake(
        RecommendSupportCancelConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportCancelConfirmItemDraw__SetItem(
        RecommendSupportCancelConfirmItemDraw_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *warningText; // x21
  __int128 v9; // q0
  __int128 v10; // q1
  void *monitor; // x20
  bool v12; // zf
  System_String_o *v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  if ( (byte_4D28505 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&StringLiteral_11587/*"SELECT_NO_SORTIE"*/);
    sub_1C94098(&StringLiteral_19737/*"formation_blank_small"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28505 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_38;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningText;
  if ( !maskSprite )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !maskSprite )
    goto LABEL_38;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !maskSprite )
    goto LABEL_38;
  if ( !userServantEntity )
  {
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)maskSprite, 0);
    if ( !equipIdList )
      goto LABEL_38;
    if ( !LODWORD(equipIdList->max_length) )
      goto LABEL_39;
    v13 = (System_String_o *)StringLiteral_19737/*"formation_blank_small"*/;
    if ( !equipIdList->m_Items[0] )
      goto LABEL_36;
    maskSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !maskSprite )
      goto LABEL_38;
    maskSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)maskSprite,
                                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !LODWORD(equipIdList->max_length) )
LABEL_39:
      sub_1C942F8(maskSprite);
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)maskSprite,
                                                equipIdList->m_Items[0],
                                                (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( this->fields.servantFaceIcon )
      {
        ServantFaceIconComponent__SetEquip(this->fields.servantFaceIcon, (UserServantEntity_o *)maskSprite, 0);
        goto LABEL_36;
      }
    }
LABEL_38:
    sub_1C942F0(maskSprite, userServantEntity);
  }
  ServantFaceIconComponent__Set_41844984(
    (ServantFaceIconComponent_o *)maskSprite,
    userServantEntity,
    equipIdList,
    0,
    0,
    0);
  if ( UserServantEntity__IsHeroine(userServantEntity, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_41176064(126, 0) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_38;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
      if ( !maskSprite )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
      warningText = this->fields.warningText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11587/*"SELECT_NO_SORTIE"*/, 0);
      if ( !warningText )
        goto LABEL_38;
      UILabel__set_text(warningText, (System_String_o *)maskSprite, 0);
    }
  }
  maskSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !maskSprite )
    goto LABEL_38;
  v9 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  v10 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  monitor = maskSprite[5].monitor;
  *(_OWORD *)&v15.fields.currentCryptoKey = v9;
  *(_OWORD *)&v15.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v12 = monitor == (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v14, 0);
  v13 = 0;
  if ( v12 )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
        v13 = 0;
        goto LABEL_36;
      }
    }
    goto LABEL_38;
  }
LABEL_36:
  maskSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !maskSprite )
    goto LABEL_38;
  UISprite__set_spriteName((UISprite_o *)maskSprite, v13, 0);
}