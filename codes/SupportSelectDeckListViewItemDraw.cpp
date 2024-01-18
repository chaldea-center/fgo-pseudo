void __fastcall SupportSelectDeckListViewItemDraw___ctor(
        SupportSelectDeckListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418AE93 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo, v3);
    byte_418AE93 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_B2C374(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v4->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 Instance; // x0
  __int64 v27; // x1
  UILabel_o *deckNameLabel; // x24
  System_String_o *v29; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v31; // x24
  __int64 v32; // x28
  int max_length; // w9
  unsigned int v34; // w25
  __int64 v35; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v36; // x8
  __int64 v37; // x8
  UnityEngine_Object_o *v38; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v39; // x8
  __int64 v40; // x8
  System_Int64_array *v41; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v42; // x9
  __int64 v43; // x9
  UISprite_o *v44; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v45; // x8
  __int64 v46; // x8
  __int64 v47; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v48; // x8
  __int64 v49; // x8
  UnityEngine_Object_o *v50; // x26
  __int128 v51; // q0
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v53; // x8
  __int64 v54; // x8
  int64_t v55; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v56; // x8
  __int64 v57; // x8
  UILabel_o *maskMessageLabel; // x19
  __int64 *v59; // x8
  __int64 v60; // x0
  bool v61; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_418AE92 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B2C35C(&long___TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&SupportSelectListViewObject_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_12514/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/, v17);
    sub_B2C35C(&StringLiteral_12527/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, v18);
    sub_B2C35C(&StringLiteral_12546/*"SUPPORT_SELECT_NAME"*/, v19);
    sub_B2C35C(&StringLiteral_12515/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/, v20);
    byte_418AE92 = 1;
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
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12527/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v25 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    Instance = (__int64)System_String__Format(v24, v25, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_93;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12546/*"SUPPORT_SELECT_NAME"*/, 0LL);
    Instance = (__int64)System_String__Format(v29, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_93;
    v61 = isSameKind;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_93;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_93;
    v31 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v32 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v34 = v32 - 4;
      if ( (int)v32 - 4 >= max_length )
        break;
      if ( v34 >= max_length )
        goto LABEL_94;
      v35 = *((_QWORD *)&memberObjectList->obj.klass + v32);
      if ( !v35 )
        goto LABEL_93;
      Instance = *(_QWORD *)(v35 + 24);
      if ( !Instance )
        goto LABEL_93;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0LL);
      v36 = this->fields.memberObjectList;
      if ( !v36 )
        goto LABEL_93;
      if ( v34 >= v36->max_length )
        goto LABEL_94;
      v37 = *((_QWORD *)&v36->obj.klass + v32);
      if ( !v37 )
        goto LABEL_93;
      v38 = *(UnityEngine_Object_o **)(v37 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v39 = this->fields.memberObjectList;
        if ( !v39 )
          goto LABEL_93;
        if ( v34 >= v39->max_length )
          goto LABEL_94;
        v40 = *((_QWORD *)&v39->obj.klass + v32);
        if ( !v40 )
          goto LABEL_93;
        Instance = *(_QWORD *)(v40 + 32);
        if ( !Instance )
          goto LABEL_93;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v41 = (System_Int64_array *)sub_B2C374(long___TypeInfo, 1LL);
      Instance = SupportServantData__getEquip(data, v34, 0LL);
      if ( !v41 )
        goto LABEL_93;
      if ( !v41->max_length )
        goto LABEL_94;
      v41->m_Items[0] = Instance;
      Instance = SupportServantData__getServant(data, v34, 0LL);
      v42 = this->fields.memberObjectList;
      if ( !v42 )
        goto LABEL_93;
      if ( v34 >= v42->max_length )
      {
LABEL_94:
        v60 = sub_B2C460(Instance);
        sub_B2C400(v60, 0LL);
      }
      v43 = *((_QWORD *)&v42->obj.klass + v32);
      if ( !v43 )
        goto LABEL_93;
      v44 = *(UISprite_o **)(v43 + 16);
      if ( Instance < 1 )
      {
        if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
        }
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v34, 0, 0LL);
        if ( !v44 )
          goto LABEL_93;
        UISprite__set_spriteName(v44, (System_String_o *)Instance, 0LL);
        if ( !v41->max_length )
          goto LABEL_94;
        v55 = v41->m_Items[0];
        if ( v55 >= 1 )
        {
          if ( !v31 )
            goto LABEL_93;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v31,
                       &entity,
                       v55,
                       (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v56 = this->fields.memberObjectList;
            if ( !v56 )
              goto LABEL_93;
            if ( v34 >= v56->max_length )
              goto LABEL_94;
            v57 = *((_QWORD *)&v56->obj.klass + v32);
            if ( !v57 )
              goto LABEL_93;
            Instance = *(_QWORD *)(v57 + 24);
            if ( !Instance )
              goto LABEL_93;
            ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Instance, entity, 0LL);
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
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v34, 1, 0LL);
        if ( !v44 )
          goto LABEL_93;
        UISprite__set_spriteName(v44, (System_String_o *)Instance, 0LL);
        Instance = SupportServantData__getServant(data, v34, 0LL);
        if ( !v31 )
          goto LABEL_93;
        Instance = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              v31,
                              Instance,
                              (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v45 = this->fields.memberObjectList;
        if ( !v45 )
          goto LABEL_93;
        if ( v34 >= v45->max_length )
          goto LABEL_94;
        v46 = *((_QWORD *)&v45->obj.klass + v32);
        if ( !v46 )
          goto LABEL_93;
        v47 = Instance;
        Instance = *(_QWORD *)(v46 + 24);
        if ( !Instance )
          goto LABEL_93;
        ServantFaceIconComponent__Set_30793916(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v47,
          v41,
          0LL,
          0LL,
          0LL);
        v48 = this->fields.memberObjectList;
        if ( !v48 )
          goto LABEL_93;
        if ( v34 >= v48->max_length )
          goto LABEL_94;
        v49 = *((_QWORD *)&v48->obj.klass + v32);
        if ( !v49 )
          goto LABEL_93;
        v50 = *(UnityEngine_Object_o **)(v49 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v23 || !v47 )
            goto LABEL_93;
          v51 = *(_OWORD *)(v47 + 32);
          pushUserSvtId = v23->fields.pushUserSvtId;
          *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v47 + 16);
          *(_OWORD *)&v63.fields.fakeValue = v51;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v62 = v63;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v62, 0LL);
          if ( pushUserSvtId == Instance )
          {
            v53 = this->fields.memberObjectList;
            if ( !v53 )
              goto LABEL_93;
            if ( v34 >= v53->max_length )
              goto LABEL_94;
            v54 = *((_QWORD *)&v53->obj.klass + v32);
            if ( !v54 )
              goto LABEL_93;
            Instance = *(_QWORD *)(v54 + 32);
            if ( !Instance )
              goto LABEL_93;
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_93;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          }
        }
      }
      memberObjectList = this->fields.memberObjectList;
      ++v32;
      if ( !memberObjectList )
        goto LABEL_93;
    }
    Instance = (__int64)this->fields.maskSprite;
    if ( !Instance )
      goto LABEL_93;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isPossibleSelect, 0LL);
    if ( v61 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_12515/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
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
      v59 = &StringLiteral_12514/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)*v59, 0LL);
    if ( !maskMessageLabel )
LABEL_93:
      sub_B2C434(Instance, v27);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}