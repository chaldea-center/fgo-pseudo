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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *warningText; // x21
  __int128 v33; // q0
  __int128 v34; // q1
  UnityEngine_Component_c *klass; // x20
  bool v36; // zf
  System_String_o *v37; // x20
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-40h]

  if ( (byte_42EB64C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)userServantEntity,
      (_DWORD)equipIdList,
      method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11763/*"SELECT_NO_SORTIE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19056/*"formation_blank_small"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42EB64C = 1;
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
    v37 = (System_String_o *)StringLiteral_19056/*"formation_blank_small"*/;
    if ( !equipIdList->m_Items[0] )
      goto LABEL_39;
    maskSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !maskSprite )
      goto LABEL_41;
    maskSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)maskSprite,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !equipIdList->max_length )
    {
LABEL_42:
      v38 = sub_B5D6C8(maskSprite);
      sub_B5D668(v38, 0LL);
    }
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)maskSprite,
                                                equipIdList->m_Items[0],
                                                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( this->fields.servantFaceIcon )
      {
        ServantFaceIconComponent__SetEquip(this->fields.servantFaceIcon, (UserServantEntity_o *)maskSprite, 0LL);
        goto LABEL_39;
      }
    }
LABEL_41:
    sub_B5D69C(maskSprite, userServantEntity);
  }
  ServantFaceIconComponent__Set_30850124(
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
    if ( TutorialFlag__Get_29295864(126, 0LL) )
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
      maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SELECT_NO_SORTIE"*/, 0LL);
      if ( !warningText )
        goto LABEL_41;
      UILabel__set_text(warningText, (System_String_o *)maskSprite, 0LL);
    }
  }
  maskSprite = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !maskSprite )
    goto LABEL_41;
  v33 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  v34 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  klass = maskSprite[5].klass;
  *(_OWORD *)&v40.fields.currentCryptoKey = v33;
  *(_OWORD *)&v40.fields.fakeValue = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v39 = v40;
  v36 = klass == (UnityEngine_Component_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                              &v39,
                                              0LL);
  v37 = 0LL;
  if ( v36 )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
        v37 = 0LL;
        goto LABEL_39;
      }
    }
    goto LABEL_41;
  }
LABEL_39:
  maskSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !maskSprite )
    goto LABEL_41;
  UISprite__set_spriteName((UISprite_o *)maskSprite, v37, 0LL);
}