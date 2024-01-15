void __fastcall SupportSelectDeckListViewItemDraw___ctor(
        SupportSelectDeckListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FD50F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo, v4);
    byte_40FD50F = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_B17014(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v5->static_fields->SupportDeckMemberMax,
                                                                     v2);
  this->fields.memberObjectList = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectDeckListViewItemDraw__SetSupportData(
        SupportSelectDeckListViewItemDraw_o *this,
        SupportServantData_o *data,
        bool isSameKind,
        bool isPossibleSelect,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *supportNumberLabel; // x24
  UserGameEntity_o *v23; // x23
  System_String_o *v24; // x25
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UILabel_o *deckNameLabel; // x24
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  WebViewManager_o *Instance; // x0
  __int64 MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v35; // x24
  __int64 v36; // x28
  int max_length; // w9
  unsigned int v38; // w25
  __int64 v39; // x8
  ServantFaceIconComponent_o *v40; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v41; // x8
  __int64 v42; // x8
  UnityEngine_Object_o *v43; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v44; // x8
  __int64 v45; // x8
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int64_array *v48; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v49; // x9
  __int64 v50; // x9
  UISprite_o *v51; // x27
  System_String_o *v52; // x0
  int64_t Servant; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v54; // x8
  __int64 v55; // x8
  __int64 v56; // x27
  ServantFaceIconComponent_o *v57; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v58; // x8
  __int64 v59; // x8
  UnityEngine_Object_o *v60; // x26
  __int128 v61; // q0
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v63; // x8
  __int64 v64; // x8
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  System_String_o *ClassIconSpriteName; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v68; // x8
  __int64 v69; // x8
  ServantFaceIconComponent_o *v70; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v72; // x0
  UILabel_o *maskMessageLabel; // x19
  __int64 *v74; // x8
  System_String_o *v75; // x0
  bool v76; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+30h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40FD50E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B16FFC(&long___TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&SupportSelectListViewObject_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_12458/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/, v17);
    sub_B16FFC(&StringLiteral_12471/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, v18);
    sub_B16FFC(&StringLiteral_12490/*"SUPPORT_SELECT_NAME"*/, v19);
    sub_B16FFC(&StringLiteral_12459/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/, v20);
    byte_40FD50E = 1;
  }
  entity = 0LL;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportNumberLabel = this->fields.supportNumberLabel;
    v23 = SelfUserGame;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12471/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v25 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    v26 = System_String__Format(v24, v25, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_93;
    UILabel__set_text(supportNumberLabel, v26, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12490/*"SUPPORT_SELECT_NAME"*/, 0LL);
    v29 = System_String__Format(v28, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_93;
    v76 = isSameKind;
    UILabel__set_text(deckNameLabel, v29, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_93;
    MasterData_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_93;
    v35 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
    v36 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v38 = v36 - 4;
      if ( (int)v36 - 4 >= max_length )
        break;
      if ( v38 >= max_length )
        goto LABEL_94;
      v39 = *((_QWORD *)&memberObjectList->obj.klass + v36);
      if ( !v39 )
        goto LABEL_93;
      v40 = *(ServantFaceIconComponent_o **)(v39 + 24);
      if ( !v40 )
        goto LABEL_93;
      ServantFaceIconComponent__Clear(v40, 0LL);
      v41 = this->fields.memberObjectList;
      if ( !v41 )
        goto LABEL_93;
      if ( v38 >= v41->max_length )
        goto LABEL_94;
      v42 = *((_QWORD *)&v41->obj.klass + v36);
      if ( !v42 )
        goto LABEL_93;
      v43 = *(UnityEngine_Object_o **)(v42 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      MasterData_WarQuestSelectionMaster = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( (MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        v44 = this->fields.memberObjectList;
        if ( !v44 )
          goto LABEL_93;
        if ( v38 >= v44->max_length )
          goto LABEL_94;
        v45 = *((_QWORD *)&v44->obj.klass + v36);
        if ( !v45 )
          goto LABEL_93;
        v46 = *(UnityEngine_Component_o **)(v45 + 32);
        if ( !v46 )
          goto LABEL_93;
        gameObject = UnityEngine_Component__get_gameObject(v46, 0LL);
        if ( !gameObject )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      v48 = (System_Int64_array *)sub_B17014(long___TypeInfo, 1LL, v33);
      MasterData_WarQuestSelectionMaster = SupportServantData__getEquip(data, v38, 0LL);
      if ( !v48 )
        goto LABEL_93;
      if ( !v48->max_length )
        goto LABEL_94;
      v48->m_Items[0] = MasterData_WarQuestSelectionMaster;
      MasterData_WarQuestSelectionMaster = SupportServantData__getServant(data, v38, 0LL);
      v49 = this->fields.memberObjectList;
      if ( !v49 )
        goto LABEL_93;
      if ( v38 >= v49->max_length )
      {
LABEL_94:
        sub_B17100(MasterData_WarQuestSelectionMaster, v32, v33);
        sub_B170A0();
      }
      v50 = *((_QWORD *)&v49->obj.klass + v36);
      if ( !v50 )
        goto LABEL_93;
      v51 = *(UISprite_o **)(v50 + 16);
      if ( MasterData_WarQuestSelectionMaster < 1 )
      {
        if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
        }
        ClassIconSpriteName = SupportSelectListViewObject__GetClassIconSpriteName(v38, 0, 0LL);
        if ( !v51 )
          goto LABEL_93;
        UISprite__set_spriteName(v51, ClassIconSpriteName, 0LL);
        if ( !v48->max_length )
          goto LABEL_94;
        v33 = v48->m_Items[0];
        if ( v33 >= 1 )
        {
          if ( !v35 )
            goto LABEL_93;
          MasterData_WarQuestSelectionMaster = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                 v35,
                                                 &entity,
                                                 v33,
                                                 (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (MasterData_WarQuestSelectionMaster & 1) != 0 )
          {
            v68 = this->fields.memberObjectList;
            if ( !v68 )
              goto LABEL_93;
            if ( v38 >= v68->max_length )
              goto LABEL_94;
            v69 = *((_QWORD *)&v68->obj.klass + v36);
            if ( !v69 )
              goto LABEL_93;
            v70 = *(ServantFaceIconComponent_o **)(v69 + 24);
            if ( !v70 )
              goto LABEL_93;
            ServantFaceIconComponent__SetEquip(v70, entity, 0LL);
          }
        }
      }
      else
      {
        if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
        }
        v52 = SupportSelectListViewObject__GetClassIconSpriteName(v38, 1, 0LL);
        if ( !v51 )
          goto LABEL_93;
        UISprite__set_spriteName(v51, v52, 0LL);
        Servant = SupportServantData__getServant(data, v38, 0LL);
        if ( !v35 )
          goto LABEL_93;
        MasterData_WarQuestSelectionMaster = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                        v35,
                                                        Servant,
                                                        (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v54 = this->fields.memberObjectList;
        if ( !v54 )
          goto LABEL_93;
        if ( v38 >= v54->max_length )
          goto LABEL_94;
        v55 = *((_QWORD *)&v54->obj.klass + v36);
        if ( !v55 )
          goto LABEL_93;
        v56 = MasterData_WarQuestSelectionMaster;
        v57 = *(ServantFaceIconComponent_o **)(v55 + 24);
        if ( !v57 )
          goto LABEL_93;
        ServantFaceIconComponent__Set_30706244(v57, (UserServantEntity_o *)v56, v48, 0LL, 0LL, 0LL);
        v58 = this->fields.memberObjectList;
        if ( !v58 )
          goto LABEL_93;
        if ( v38 >= v58->max_length )
          goto LABEL_94;
        v59 = *((_QWORD *)&v58->obj.klass + v36);
        if ( !v59 )
          goto LABEL_93;
        v60 = *(UnityEngine_Object_o **)(v59 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        MasterData_WarQuestSelectionMaster = UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
        if ( (MasterData_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !v23 || !v56 )
            goto LABEL_93;
          v61 = *(_OWORD *)(v56 + 32);
          pushUserSvtId = v23->fields.pushUserSvtId;
          *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v56 + 16);
          *(_OWORD *)&v78.fields.fakeValue = v61;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v77 = v78;
          MasterData_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                                                 &v77,
                                                 0LL);
          if ( pushUserSvtId == MasterData_WarQuestSelectionMaster )
          {
            v63 = this->fields.memberObjectList;
            if ( !v63 )
              goto LABEL_93;
            if ( v38 >= v63->max_length )
              goto LABEL_94;
            v64 = *((_QWORD *)&v63->obj.klass + v36);
            if ( !v64 )
              goto LABEL_93;
            v65 = *(UnityEngine_Component_o **)(v64 + 32);
            if ( !v65 )
              goto LABEL_93;
            v66 = UnityEngine_Component__get_gameObject(v65, 0LL);
            if ( !v66 )
              goto LABEL_93;
            UnityEngine_GameObject__SetActive(v66, 1, 0LL);
          }
        }
      }
      memberObjectList = this->fields.memberObjectList;
      ++v36;
      if ( !memberObjectList )
        goto LABEL_93;
    }
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_93;
    v72 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !v72 )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive(v72, !isPossibleSelect, 0LL);
    if ( v76 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v74 = &StringLiteral_12459/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
    }
    else
    {
      if ( isPossibleSelect )
        return;
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v74 = &StringLiteral_12458/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    v75 = LocalizationManager__Get((System_String_o *)*v74, 0LL);
    if ( !maskMessageLabel )
LABEL_93:
      sub_B170D4();
    UILabel__set_text(maskMessageLabel, v75, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}