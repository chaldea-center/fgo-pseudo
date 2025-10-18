void SupportSelectDeckListViewItemDraw___ctor(SupportSelectDeckListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F625 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo);
    byte_4C3F625 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_1C37100(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportSelectDeckListViewItemDraw__SetSupportData(
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
  int64_t Instance; // x0
  UILabel_o *deckNameLabel; // x24
  System_String_o *v16; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  __int64 v19; // x21
  int max_length; // w9
  unsigned int v21; // w25
  __int64 v22; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v23; // x8
  __int64 v24; // x8
  UnityEngine_Object_o *v25; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v26; // x8
  __int64 v27; // x8
  __int64 v28; // x26
  const MethodInfo *v29; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v30; // x8
  __int64 v31; // x8
  __int64 v32; // x28
  UISprite_o *v33; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v34; // x8
  __int64 v35; // x8
  int64_t v36; // x27
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
  bool v49; // [xsp+8h] [xbp-B8h]
  bool v50; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-90h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3F624 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SupportSelectListViewObject_TypeInfo);
    sub_1C37058(&StringLiteral_12524/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/);
    sub_1C37058(&StringLiteral_12537/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/);
    sub_1C37058(&StringLiteral_12556/*"SUPPORT_SELECT_NAME"*/);
    sub_1C37058(&StringLiteral_12525/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/);
    byte_4C3F624 = 1;
  }
  entity = 0;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    supportNumberLabel = this->fields.supportNumberLabel;
    v11 = SelfUserGame;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12537/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0);
    v13 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0);
    Instance = (int64_t)System_String__Format(v12, v13, 0);
    if ( !supportNumberLabel )
      goto LABEL_83;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0);
    deckNameLabel = this->fields.deckNameLabel;
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12556/*"SUPPORT_SELECT_NAME"*/, 0);
    Instance = (int64_t)System_String__Format(v16, (Il2CppObject *)data->fields._deckName_k__BackingField, 0);
    if ( !deckNameLabel )
      goto LABEL_83;
    v49 = isSameKind;
    v50 = isPossibleSelect;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_83;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v19 = 4;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v21 = v19 - 4;
      if ( (int)v19 - 4 >= max_length )
        break;
      if ( v21 >= max_length )
        goto LABEL_84;
      v22 = *((_QWORD *)&memberObjectList->obj.klass + v19);
      if ( !v22 )
        goto LABEL_83;
      Instance = *(_QWORD *)(v22 + 24);
      if ( !Instance )
        goto LABEL_83;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0);
      v23 = this->fields.memberObjectList;
      if ( !v23 )
        goto LABEL_83;
      if ( v21 >= LODWORD(v23->max_length) )
        goto LABEL_84;
      v24 = *((_QWORD *)&v23->obj.klass + v19);
      if ( !v24 )
        goto LABEL_83;
      v25 = *(UnityEngine_Object_o **)(v24 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Inequality(v25, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        v26 = this->fields.memberObjectList;
        if ( !v26 )
          goto LABEL_83;
        if ( v21 >= LODWORD(v26->max_length) )
          goto LABEL_84;
        v27 = *((_QWORD *)&v26->obj.klass + v19);
        if ( !v27 )
          goto LABEL_83;
        Instance = *(_QWORD *)(v27 + 32);
        if ( !Instance )
          goto LABEL_83;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      v28 = sub_1C37100(long___TypeInfo, 1);
      Instance = SupportServantData__getEquip(data, v21, 0);
      if ( !v28 )
        goto LABEL_83;
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_84;
      *(_QWORD *)(v28 + 32) = Instance;
      Instance = SupportServantData__getServant(data, v21, 0);
      v30 = this->fields.memberObjectList;
      if ( !v30 )
        goto LABEL_83;
      if ( v21 >= LODWORD(v30->max_length) )
LABEL_84:
        sub_1C372BC(Instance);
      v31 = *((_QWORD *)&v30->obj.klass + v19);
      if ( !v31 )
        goto LABEL_83;
      v32 = Instance;
      v33 = *(UISprite_o **)(v31 + 16);
      if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      if ( v32 < 1 )
      {
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v21, 0, v29);
        if ( !v33 )
          goto LABEL_83;
        UISprite__set_spriteName(v33, (System_String_o *)Instance, 0);
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_84;
        v44 = *(_QWORD *)(v28 + 32);
        if ( v44 >= 1 )
        {
          if ( !v18 )
            goto LABEL_83;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v18,
                       &entity,
                       v44,
                       (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v45 = this->fields.memberObjectList;
            if ( !v45 )
              goto LABEL_83;
            if ( v21 >= LODWORD(v45->max_length) )
              goto LABEL_84;
            v46 = *((_QWORD *)&v45->obj.klass + v19);
            if ( !v46 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v46 + 24);
            if ( !Instance )
              goto LABEL_83;
            ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Instance, (UserServantEntity_o *)entity, 0);
          }
        }
      }
      else
      {
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v21, 1, v29);
        if ( !v33 )
          goto LABEL_83;
        UISprite__set_spriteName(v33, (System_String_o *)Instance, 0);
        Instance = SupportServantData__getServant(data, v21, 0);
        if ( !v18 )
          goto LABEL_83;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              v18,
                              Instance,
                              (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v34 = this->fields.memberObjectList;
        if ( !v34 )
          goto LABEL_83;
        if ( v21 >= LODWORD(v34->max_length) )
          goto LABEL_84;
        v35 = *((_QWORD *)&v34->obj.klass + v19);
        if ( !v35 )
          goto LABEL_83;
        v36 = Instance;
        Instance = *(_QWORD *)(v35 + 24);
        if ( !Instance )
          goto LABEL_83;
        ServantFaceIconComponent__Set_41005348(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v36,
          (System_Int64_array *)v28,
          0,
          0,
          0);
        v37 = this->fields.memberObjectList;
        if ( !v37 )
          goto LABEL_83;
        if ( v21 >= LODWORD(v37->max_length) )
          goto LABEL_84;
        v38 = *((_QWORD *)&v37->obj.klass + v19);
        if ( !v38 )
          goto LABEL_83;
        v39 = *(UnityEngine_Object_o **)(v38 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__op_Inequality(v39, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v11 || !v36 )
            goto LABEL_83;
          v40 = *(_OWORD *)(v36 + 32);
          pushUserSvtId = v11->fields.pushUserSvtId;
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v36 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v51, 0);
          if ( pushUserSvtId == Instance )
          {
            v42 = this->fields.memberObjectList;
            if ( !v42 )
              goto LABEL_83;
            if ( v21 >= LODWORD(v42->max_length) )
              goto LABEL_84;
            v43 = *((_QWORD *)&v42->obj.klass + v19);
            if ( !v43 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v43 + 32);
            if ( !Instance )
              goto LABEL_83;
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_83;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          }
        }
      }
      memberObjectList = this->fields.memberObjectList;
      ++v19;
      if ( !memberObjectList )
        goto LABEL_83;
    }
    Instance = (int64_t)this->fields.maskSprite;
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v50, 0);
    if ( v49 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_12525/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
    }
    else
    {
      if ( v50 )
        return;
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_12524/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v48, 0);
    if ( !maskMessageLabel )
LABEL_83:
      sub_1C372B4(Instance);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0);
  }
}


void SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}