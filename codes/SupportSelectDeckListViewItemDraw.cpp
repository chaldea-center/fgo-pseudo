void __fastcall SupportSelectDeckListViewItemDraw___ctor(
        SupportSelectDeckListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12ADE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo, v4, v5);
    byte_4B12ADE = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_1BCA888(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v6->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.memberObjectList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectDeckListViewItemDraw__SetSupportData(
        SupportSelectDeckListViewItemDraw_o *this,
        SupportServantData_o *data,
        bool isSameKind,
        bool isPossibleSelect,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v34; // x1
  UILabel_o *supportNumberLabel; // x24
  UserGameEntity_o *v36; // x23
  System_String_o *v37; // x25
  Il2CppObject *v38; // x0
  int64_t Instance; // x0
  __int64 v40; // x1
  UILabel_o *deckNameLabel; // x24
  System_String_o *v42; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x24
  __int64 v45; // x21
  int max_length; // w9
  unsigned int v47; // w25
  __int64 v48; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v49; // x8
  __int64 v50; // x8
  UnityEngine_Object_o *v51; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v52; // x8
  __int64 v53; // x8
  System_Int64_array *v54; // x26
  const MethodInfo *v55; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v56; // x8
  __int64 v57; // x8
  __int64 v58; // x28
  UISprite_o *v59; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v60; // x8
  __int64 v61; // x8
  int64_t v62; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v63; // x8
  __int64 v64; // x8
  UnityEngine_Object_o *v65; // x26
  __int128 v66; // q0
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v68; // x8
  __int64 v69; // x8
  int64_t v70; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v71; // x8
  __int64 v72; // x8
  __int64 v73; // x1
  UILabel_o *maskMessageLabel; // x19
  __int64 *v75; // x8
  bool v76; // [xsp+8h] [xbp-B8h]
  bool v77; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-90h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B12ADD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, data, isSameKind);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&long___TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&SupportSelectListViewObject_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_12577/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12590/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12609/*"SUPPORT_SELECT_NAME"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12578/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/, v31, v32);
    byte_4B12ADD = 1;
  }
  entity = 0LL;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportNumberLabel = this->fields.supportNumberLabel;
    v36 = SelfUserGame;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12590/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v38 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    Instance = (int64_t)System_String__Format(v37, v38, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_83;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12609/*"SUPPORT_SELECT_NAME"*/, 0LL);
    Instance = (int64_t)System_String__Format(v42, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_83;
    v76 = isSameKind;
    v77 = isPossibleSelect;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_83;
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v45 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v47 = v45 - 4;
      if ( (int)v45 - 4 >= max_length )
        break;
      if ( v47 >= max_length )
        goto LABEL_84;
      v48 = *((_QWORD *)&memberObjectList->obj.klass + v45);
      if ( !v48 )
        goto LABEL_83;
      Instance = *(_QWORD *)(v48 + 24);
      if ( !Instance )
        goto LABEL_83;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0LL);
      v49 = this->fields.memberObjectList;
      if ( !v49 )
        goto LABEL_83;
      if ( v47 >= v49->max_length )
        goto LABEL_84;
      v50 = *((_QWORD *)&v49->obj.klass + v45);
      if ( !v50 )
        goto LABEL_83;
      v51 = *(UnityEngine_Object_o **)(v50 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
      Instance = UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v52 = this->fields.memberObjectList;
        if ( !v52 )
          goto LABEL_83;
        if ( v47 >= v52->max_length )
          goto LABEL_84;
        v53 = *((_QWORD *)&v52->obj.klass + v45);
        if ( !v53 )
          goto LABEL_83;
        Instance = *(_QWORD *)(v53 + 32);
        if ( !Instance )
          goto LABEL_83;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v54 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 1LL);
      Instance = SupportServantData__getEquip(data, v47, 0LL);
      if ( !v54 )
        goto LABEL_83;
      if ( !v54->max_length )
        goto LABEL_84;
      v54->m_Items[0] = Instance;
      Instance = SupportServantData__getServant(data, v47, 0LL);
      v56 = this->fields.memberObjectList;
      if ( !v56 )
        goto LABEL_83;
      if ( v47 >= v56->max_length )
LABEL_84:
        sub_1BCAA44(Instance, v40);
      v57 = *((_QWORD *)&v56->obj.klass + v45);
      if ( !v57 )
        goto LABEL_83;
      v58 = Instance;
      v59 = *(UISprite_o **)(v57 + 16);
      if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo, v40);
      if ( v58 < 1 )
      {
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v47, 0, v55);
        if ( !v59 )
          goto LABEL_83;
        UISprite__set_spriteName(v59, (System_String_o *)Instance, 0LL);
        if ( !v54->max_length )
          goto LABEL_84;
        v70 = v54->m_Items[0];
        if ( v70 >= 1 )
        {
          if ( !v44 )
            goto LABEL_83;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v44,
                       &entity,
                       v70,
                       (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v71 = this->fields.memberObjectList;
            if ( !v71 )
              goto LABEL_83;
            if ( v47 >= v71->max_length )
              goto LABEL_84;
            v72 = *((_QWORD *)&v71->obj.klass + v45);
            if ( !v72 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v72 + 24);
            if ( !Instance )
              goto LABEL_83;
            ServantFaceIconComponent__SetEquip(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              0LL);
          }
        }
      }
      else
      {
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v47, 1, v55);
        if ( !v59 )
          goto LABEL_83;
        UISprite__set_spriteName(v59, (System_String_o *)Instance, 0LL);
        Instance = SupportServantData__getServant(data, v47, 0LL);
        if ( !v44 )
          goto LABEL_83;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              v44,
                              Instance,
                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v60 = this->fields.memberObjectList;
        if ( !v60 )
          goto LABEL_83;
        if ( v47 >= v60->max_length )
          goto LABEL_84;
        v61 = *((_QWORD *)&v60->obj.klass + v45);
        if ( !v61 )
          goto LABEL_83;
        v62 = Instance;
        Instance = *(_QWORD *)(v61 + 24);
        if ( !Instance )
          goto LABEL_83;
        ServantFaceIconComponent__Set_38932288(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v62,
          v54,
          0LL,
          0LL,
          0LL);
        v63 = this->fields.memberObjectList;
        if ( !v63 )
          goto LABEL_83;
        if ( v47 >= v63->max_length )
          goto LABEL_84;
        v64 = *((_QWORD *)&v63->obj.klass + v45);
        if ( !v64 )
          goto LABEL_83;
        v65 = *(UnityEngine_Object_o **)(v64 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
        Instance = UnityEngine_Object__op_Inequality(v65, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v36 || !v62 )
            goto LABEL_83;
          v66 = *(_OWORD *)(v62 + 32);
          pushUserSvtId = v36->fields.pushUserSvtId;
          *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)(v62 + 16);
          *(_OWORD *)&v79.fields.fakeValue = v66;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
          v78 = v79;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v78, 0LL);
          if ( pushUserSvtId == Instance )
          {
            v68 = this->fields.memberObjectList;
            if ( !v68 )
              goto LABEL_83;
            if ( v47 >= v68->max_length )
              goto LABEL_84;
            v69 = *((_QWORD *)&v68->obj.klass + v45);
            if ( !v69 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v69 + 32);
            if ( !Instance )
              goto LABEL_83;
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_83;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          }
        }
      }
      memberObjectList = this->fields.memberObjectList;
      ++v45;
      if ( !memberObjectList )
        goto LABEL_83;
    }
    Instance = (int64_t)this->fields.maskSprite;
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v77, 0LL);
    if ( v76 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
      v75 = &StringLiteral_12578/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
    }
    else
    {
      if ( v77 )
        return;
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
      v75 = &StringLiteral_12577/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v75, 0LL);
    if ( !maskMessageLabel )
LABEL_83:
      sub_1BCAA3C(Instance, v40);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}