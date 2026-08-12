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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *warningText; // x21
  __int64 v13; // x2
  __int128 v14; // q0
  __int128 v15; // q1
  void *monitor; // x20
  bool v17; // zf
  System_String_o *v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]

  if ( (byte_596C413 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_12048/*"SELECT_NO_SORTIE"*/);
    sub_2213A60(&StringLiteral_20504/*"formation_blank_small"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C413 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_39;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningText;
  if ( !maskSprite )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !maskSprite )
    goto LABEL_39;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !userServantEntity )
  {
    if ( maskSprite )
    {
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)maskSprite, 0);
      if ( equipIdList )
      {
        if ( !LODWORD(equipIdList->max_length) )
          goto LABEL_40;
        v18 = (System_String_o *)StringLiteral_20504/*"formation_blank_small"*/;
        if ( !equipIdList->m_Items[0] )
          goto LABEL_37;
        maskSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskSprite )
          goto LABEL_39;
        maskSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)maskSprite,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !LODWORD(equipIdList->max_length) )
LABEL_40:
          sub_2213CE4(maskSprite);
        if ( maskSprite )
        {
          maskSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)maskSprite,
                                                    equipIdList->m_Items[0],
                                                    (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( this->fields.servantFaceIcon )
          {
            ServantFaceIconComponent__SetEquip(this->fields.servantFaceIcon, (UserServantEntity_o *)maskSprite, 0);
            goto LABEL_37;
          }
        }
      }
    }
LABEL_39:
    sub_2213CDC(maskSprite, userServantEntity);
  }
  if ( !maskSprite )
    goto LABEL_39;
  ServantFaceIconComponent__Set_48049544(
    (ServantFaceIconComponent_o *)maskSprite,
    userServantEntity,
    equipIdList,
    0,
    0,
    1,
    0);
  if ( UserServantEntity__IsHeroine(userServantEntity, 0) )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v8, v9);
    if ( TutorialFlag__Get_47388504(126, 0) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_39;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
      if ( !maskSprite )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
      warningText = this->fields.warningText;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SELECT_NO_SORTIE"*/, 0);
      if ( !warningText )
        goto LABEL_39;
      UILabel__set_text(warningText, (System_String_o *)maskSprite, 0);
    }
  }
  maskSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !maskSprite )
    goto LABEL_39;
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  monitor = maskSprite[5].monitor;
  *(_OWORD *)&v20.fields.currentCryptoKey = v14;
  *(_OWORD *)&v20.fields.fakeValue = v15;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity, v13);
  v19 = v20;
  v17 = monitor == (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v19, 0);
  v18 = 0;
  if ( v17 )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
        v18 = 0;
        goto LABEL_37;
      }
    }
    goto LABEL_39;
  }
LABEL_37:
  maskSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !maskSprite )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)maskSprite, v18, 0);
}