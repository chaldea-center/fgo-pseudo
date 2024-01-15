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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *warningText; // x0
  UnityEngine_Component_o *pushSprite; // x0
  UnityEngine_GameObject_o *v19; // x0
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *v23; // x21
  System_String_o *v24; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int128 v26; // q0
  __int128 v27; // q1
  int64_t pushUserSvtId; // x20
  bool v29; // zf
  System_String_o *v30; // x20
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x0
  UISprite_o *baseSprite; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-40h]

  if ( (byte_40FCF0D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userServantEntity);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&TutorialFlag_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11594/*"SELECT_NO_SORTIE"*/, v12);
    sub_B16FFC(&StringLiteral_18748/*"formation_blank_small"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40FCF0D = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  warningText = this->fields.warningText;
  if ( !warningText )
    goto LABEL_41;
  UILabel__set_text(warningText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pushSprite = (UnityEngine_Component_o *)this->fields.pushSprite;
  if ( !pushSprite )
    goto LABEL_41;
  v19 = UnityEngine_Component__get_gameObject(pushSprite, 0LL);
  if ( !v19 )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(v19, 0, 0LL);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_41;
  if ( !userServantEntity )
  {
    ServantFaceIconComponent__Clear(servantFaceIcon, 0LL);
    if ( !equipIdList )
      goto LABEL_41;
    if ( !equipIdList->max_length )
      goto LABEL_42;
    v30 = (System_String_o *)StringLiteral_18748/*"formation_blank_small"*/;
    if ( !equipIdList->m_Items[0] )
      goto LABEL_39;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !equipIdList->max_length )
    {
LABEL_42:
      sub_B17100(MasterData_WarQuestSelectionMaster, v34, v35);
      sub_B170A0();
    }
    if ( MasterData_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 equipIdList->m_Items[0],
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( this->fields.servantFaceIcon )
      {
        ServantFaceIconComponent__SetEquip(this->fields.servantFaceIcon, Entity, 0LL);
        goto LABEL_39;
      }
    }
LABEL_41:
    sub_B170D4();
  }
  ServantFaceIconComponent__Set_30706244(servantFaceIcon, userServantEntity, equipIdList, 0LL, 0LL, 0LL);
  if ( UserServantEntity__IsHeroine(userServantEntity, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(126, 0LL) )
    {
      v21 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v21 )
        goto LABEL_41;
      v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
      if ( !v22 )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(v22, 1, 0LL);
      v23 = this->fields.warningText;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SELECT_NO_SORTIE"*/, 0LL);
      if ( !v23 )
        goto LABEL_41;
      UILabel__set_text(v23, v24, 0LL);
    }
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_41;
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  v27 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v40.fields.currentCryptoKey = v26;
  *(_OWORD *)&v40.fields.fakeValue = v27;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v39 = v40;
  v29 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v39, 0LL);
  v30 = 0LL;
  if ( v29 )
  {
    v31 = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( v31 )
    {
      v32 = UnityEngine_Component__get_gameObject(v31, 0LL);
      if ( v32 )
      {
        UnityEngine_GameObject__SetActive(v32, 1, 0LL);
        v30 = 0LL;
        goto LABEL_39;
      }
    }
    goto LABEL_41;
  }
LABEL_39:
  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_41;
  UISprite__set_spriteName(baseSprite, v30, 0LL);
}