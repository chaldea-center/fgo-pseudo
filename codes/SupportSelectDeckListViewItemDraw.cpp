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

  if ( (byte_4217076 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo, v3);
    byte_4217076 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_B0D8BC(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v4->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_B0D840(
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
  UILabel_o *deckNameLabel; // x24
  System_String_o *v28; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v30; // x24
  __int64 v31; // x28
  int max_length; // w9
  unsigned int v33; // w25
  __int64 v34; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v35; // x8
  __int64 v36; // x8
  UnityEngine_Object_o *v37; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v38; // x8
  __int64 v39; // x8
  System_Int64_array *v40; // x26
  const MethodInfo *v41; // x2
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

  if ( (byte_4217075 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B0D8A4(&long___TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&SupportSelectListViewObject_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_12552/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/, v17);
    sub_B0D8A4(&StringLiteral_12565/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, v18);
    sub_B0D8A4(&StringLiteral_12584/*"SUPPORT_SELECT_NAME"*/, v19);
    sub_B0D8A4(&StringLiteral_12553/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/, v20);
    byte_4217075 = 1;
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
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12565/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v25 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    Instance = (__int64)System_String__Format(v24, v25, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_93;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12584/*"SUPPORT_SELECT_NAME"*/, 0LL);
    Instance = (__int64)System_String__Format(v28, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_93;
    v61 = isSameKind;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_93;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_93;
    v30 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v31 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v33 = v31 - 4;
      if ( (int)v31 - 4 >= max_length )
        break;
      if ( v33 >= max_length )
        goto LABEL_94;
      v34 = *((_QWORD *)&memberObjectList->obj.klass + v31);
      if ( !v34 )
        goto LABEL_93;
      Instance = *(_QWORD *)(v34 + 24);
      if ( !Instance )
        goto LABEL_93;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0LL);
      v35 = this->fields.memberObjectList;
      if ( !v35 )
        goto LABEL_93;
      if ( v33 >= v35->max_length )
        goto LABEL_94;
      v36 = *((_QWORD *)&v35->obj.klass + v31);
      if ( !v36 )
        goto LABEL_93;
      v37 = *(UnityEngine_Object_o **)(v36 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v38 = this->fields.memberObjectList;
        if ( !v38 )
          goto LABEL_93;
        if ( v33 >= v38->max_length )
          goto LABEL_94;
        v39 = *((_QWORD *)&v38->obj.klass + v31);
        if ( !v39 )
          goto LABEL_93;
        Instance = *(_QWORD *)(v39 + 32);
        if ( !Instance )
          goto LABEL_93;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v40 = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, 1LL);
      Instance = SupportServantData__getEquip(data, v33, 0LL);
      if ( !v40 )
        goto LABEL_93;
      if ( !v40->max_length )
        goto LABEL_94;
      v40->m_Items[0] = Instance;
      Instance = SupportServantData__getServant(data, v33, 0LL);
      v42 = this->fields.memberObjectList;
      if ( !v42 )
        goto LABEL_93;
      if ( v33 >= v42->max_length )
      {
LABEL_94:
        v60 = sub_B0D9A8(Instance);
        sub_B0D948(v60, 0LL);
      }
      v43 = *((_QWORD *)&v42->obj.klass + v31);
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
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v33, 0, v41);
        if ( !v44 )
          goto LABEL_93;
        UISprite__set_spriteName(v44, (System_String_o *)Instance, 0LL);
        if ( !v40->max_length )
          goto LABEL_94;
        v55 = v40->m_Items[0];
        if ( v55 >= 1 )
        {
          if ( !v30 )
            goto LABEL_93;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v30,
                       &entity,
                       v55,
                       (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v56 = this->fields.memberObjectList;
            if ( !v56 )
              goto LABEL_93;
            if ( v33 >= v56->max_length )
              goto LABEL_94;
            v57 = *((_QWORD *)&v56->obj.klass + v31);
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
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v33, 1, v41);
        if ( !v44 )
          goto LABEL_93;
        UISprite__set_spriteName(v44, (System_String_o *)Instance, 0LL);
        Instance = SupportServantData__getServant(data, v33, 0LL);
        if ( !v30 )
          goto LABEL_93;
        Instance = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              v30,
                              Instance,
                              (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v45 = this->fields.memberObjectList;
        if ( !v45 )
          goto LABEL_93;
        if ( v33 >= v45->max_length )
          goto LABEL_94;
        v46 = *((_QWORD *)&v45->obj.klass + v31);
        if ( !v46 )
          goto LABEL_93;
        v47 = Instance;
        Instance = *(_QWORD *)(v46 + 24);
        if ( !Instance )
          goto LABEL_93;
        ServantFaceIconComponent__Set_29627208(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v47,
          v40,
          0LL,
          0LL,
          0LL);
        v48 = this->fields.memberObjectList;
        if ( !v48 )
          goto LABEL_93;
        if ( v33 >= v48->max_length )
          goto LABEL_94;
        v49 = *((_QWORD *)&v48->obj.klass + v31);
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
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v62, 0LL);
          if ( pushUserSvtId == Instance )
          {
            v53 = this->fields.memberObjectList;
            if ( !v53 )
              goto LABEL_93;
            if ( v33 >= v53->max_length )
              goto LABEL_94;
            v54 = *((_QWORD *)&v53->obj.klass + v31);
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
      ++v31;
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
      v59 = &StringLiteral_12553/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
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
      v59 = &StringLiteral_12552/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)*v59, 0LL);
    if ( !maskMessageLabel )
LABEL_93:
      sub_B0D97C(Instance);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}