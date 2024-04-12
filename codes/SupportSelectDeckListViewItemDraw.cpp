void __fastcall SupportSelectDeckListViewItemDraw___ctor(
        SupportSelectDeckListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42B296C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo);
    byte_42B296C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_B5299C(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectDeckListViewItemDraw__SetSupportData(
        SupportSelectDeckListViewItemDraw_o *this,
        SupportServantData_o *data,
        bool isSameKind,
        bool isPossibleSelect,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *supportNumberLabel; // x24
  UserGameEntity_o *v11; // x23
  System_String_o *v12; // x25
  Il2CppObject *v13; // x0
  __int64 Instance; // x0
  __int64 v15; // x1
  UILabel_o *deckNameLabel; // x24
  System_String_o *v17; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x24
  __int64 v20; // x28
  int max_length; // w9
  unsigned int v22; // w25
  __int64 v23; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v24; // x8
  __int64 v25; // x8
  UnityEngine_Object_o *v26; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v27; // x8
  __int64 v28; // x8
  System_Int64_array *v29; // x26
  const MethodInfo *v30; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v31; // x9
  __int64 v32; // x9
  UISprite_o *v33; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v34; // x8
  __int64 v35; // x8
  __int64 v36; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v37; // x8
  __int64 v38; // x8
  UnityEngine_Object_o *v39; // x26
  __int128 v40; // q0
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v42; // x8
  __int64 v43; // x8
  int64_t v44; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v45; // x8
  __int64 v46; // x8
  UILabel_o *maskMessageLabel; // x19
  __int64 *v48; // x8
  __int64 v49; // x0
  bool v50; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42B296B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SupportSelectListViewObject_TypeInfo);
    sub_B52984(&StringLiteral_12603/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/);
    sub_B52984(&StringLiteral_12616/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/);
    sub_B52984(&StringLiteral_12635/*"SUPPORT_SELECT_NAME"*/);
    sub_B52984(&StringLiteral_12604/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/);
    byte_42B296B = 1;
  }
  entity = 0LL;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportNumberLabel = this->fields.supportNumberLabel;
    v11 = SelfUserGame;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12616/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v13 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    Instance = (__int64)System_String__Format(v12, v13, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_93;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12635/*"SUPPORT_SELECT_NAME"*/, 0LL);
    Instance = (__int64)System_String__Format(v17, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_93;
    v50 = isSameKind;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_93;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_93;
    v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v20 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v22 = v20 - 4;
      if ( (int)v20 - 4 >= max_length )
        break;
      if ( v22 >= max_length )
        goto LABEL_94;
      v23 = *((_QWORD *)&memberObjectList->obj.klass + v20);
      if ( !v23 )
        goto LABEL_93;
      Instance = *(_QWORD *)(v23 + 24);
      if ( !Instance )
        goto LABEL_93;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0LL);
      v24 = this->fields.memberObjectList;
      if ( !v24 )
        goto LABEL_93;
      if ( v22 >= v24->max_length )
        goto LABEL_94;
      v25 = *((_QWORD *)&v24->obj.klass + v20);
      if ( !v25 )
        goto LABEL_93;
      v26 = *(UnityEngine_Object_o **)(v25 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v27 = this->fields.memberObjectList;
        if ( !v27 )
          goto LABEL_93;
        if ( v22 >= v27->max_length )
          goto LABEL_94;
        v28 = *((_QWORD *)&v27->obj.klass + v20);
        if ( !v28 )
          goto LABEL_93;
        Instance = *(_QWORD *)(v28 + 32);
        if ( !Instance )
          goto LABEL_93;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v29 = (System_Int64_array *)sub_B5299C(long___TypeInfo, 1LL);
      Instance = SupportServantData__getEquip(data, v22, 0LL);
      if ( !v29 )
        goto LABEL_93;
      if ( !v29->max_length )
        goto LABEL_94;
      v29->m_Items[0] = Instance;
      Instance = SupportServantData__getServant(data, v22, 0LL);
      v31 = this->fields.memberObjectList;
      if ( !v31 )
        goto LABEL_93;
      if ( v22 >= v31->max_length )
      {
LABEL_94:
        v49 = sub_B52A88(Instance);
        sub_B52A28(v49, 0LL);
      }
      v32 = *((_QWORD *)&v31->obj.klass + v20);
      if ( !v32 )
        goto LABEL_93;
      v33 = *(UISprite_o **)(v32 + 16);
      if ( Instance < 1 )
      {
        if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
        }
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v22, 0, v30);
        if ( !v33 )
          goto LABEL_93;
        UISprite__set_spriteName(v33, (System_String_o *)Instance, 0LL);
        if ( !v29->max_length )
          goto LABEL_94;
        v44 = v29->m_Items[0];
        if ( v44 >= 1 )
        {
          if ( !v19 )
            goto LABEL_93;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v19,
                       &entity,
                       v44,
                       (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v45 = this->fields.memberObjectList;
            if ( !v45 )
              goto LABEL_93;
            if ( v22 >= v45->max_length )
              goto LABEL_94;
            v46 = *((_QWORD *)&v45->obj.klass + v20);
            if ( !v46 )
              goto LABEL_93;
            Instance = *(_QWORD *)(v46 + 24);
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
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v22, 1, v30);
        if ( !v33 )
          goto LABEL_93;
        UISprite__set_spriteName(v33, (System_String_o *)Instance, 0LL);
        Instance = SupportServantData__getServant(data, v22, 0LL);
        if ( !v19 )
          goto LABEL_93;
        Instance = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              v19,
                              Instance,
                              (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v34 = this->fields.memberObjectList;
        if ( !v34 )
          goto LABEL_93;
        if ( v22 >= v34->max_length )
          goto LABEL_94;
        v35 = *((_QWORD *)&v34->obj.klass + v20);
        if ( !v35 )
          goto LABEL_93;
        v36 = Instance;
        Instance = *(_QWORD *)(v35 + 24);
        if ( !Instance )
          goto LABEL_93;
        ServantFaceIconComponent__Set_30470792(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v36,
          v29,
          0LL,
          0LL,
          0LL);
        v37 = this->fields.memberObjectList;
        if ( !v37 )
          goto LABEL_93;
        if ( v22 >= v37->max_length )
          goto LABEL_94;
        v38 = *((_QWORD *)&v37->obj.klass + v20);
        if ( !v38 )
          goto LABEL_93;
        v39 = *(UnityEngine_Object_o **)(v38 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v11 || !v36 )
            goto LABEL_93;
          v40 = *(_OWORD *)(v36 + 32);
          pushUserSvtId = v11->fields.pushUserSvtId;
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v36 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v40;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v51 = v52;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v51, 0LL);
          if ( pushUserSvtId == Instance )
          {
            v42 = this->fields.memberObjectList;
            if ( !v42 )
              goto LABEL_93;
            if ( v22 >= v42->max_length )
              goto LABEL_94;
            v43 = *((_QWORD *)&v42->obj.klass + v20);
            if ( !v43 )
              goto LABEL_93;
            Instance = *(_QWORD *)(v43 + 32);
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
      ++v20;
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
    if ( v50 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v48 = &StringLiteral_12604/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
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
      v48 = &StringLiteral_12603/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)*v48, 0LL);
    if ( !maskMessageLabel )
LABEL_93:
      sub_B52A5C(Instance, v15);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}