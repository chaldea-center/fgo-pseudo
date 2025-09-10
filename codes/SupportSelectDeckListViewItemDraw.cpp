void SupportSelectDeckListViewItemDraw___ctor(SupportSelectDeckListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C2396A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo);
    byte_4C2396A = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_1C2D538(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
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
  __int64 v15; // x1
  UILabel_o *deckNameLabel; // x24
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  __int64 v21; // x21
  int max_length; // w9
  unsigned int v23; // w25
  __int64 v24; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v25; // x8
  __int64 v26; // x8
  UnityEngine_Object_o *v27; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v28; // x8
  __int64 v29; // x8
  __int64 v30; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v31; // x8
  __int64 v32; // x8
  __int64 v33; // x28
  UISprite_o *v34; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v35; // x8
  __int64 v36; // x8
  int64_t v37; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v38; // x8
  __int64 v39; // x8
  UnityEngine_Object_o *v40; // x26
  __int128 v41; // q0
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v43; // x8
  __int64 v44; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v45; // x8
  __int64 v46; // x8
  UILabel_o *maskMessageLabel; // x19
  __int64 *v48; // x8
  bool v49; // [xsp+8h] [xbp-B8h]
  bool v50; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-90h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C23969 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SupportSelectListViewObject_TypeInfo);
    sub_1C2D490(&StringLiteral_12520/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/);
    sub_1C2D490(&StringLiteral_12533/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/);
    sub_1C2D490(&StringLiteral_12552/*"SUPPORT_SELECT_NAME"*/);
    sub_1C2D490(&StringLiteral_12521/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/);
    byte_4C23969 = 1;
  }
  entity = 0;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    supportNumberLabel = this->fields.supportNumberLabel;
    v11 = SelfUserGame;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12533/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0);
    v13 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0);
    Instance = (int64_t)System_String__Format(v12, v13, 0);
    if ( !supportNumberLabel )
      goto LABEL_83;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0);
    deckNameLabel = this->fields.deckNameLabel;
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12552/*"SUPPORT_SELECT_NAME"*/, 0);
    Instance = (int64_t)System_String__Format(v17, (Il2CppObject *)data->fields._deckName_k__BackingField, 0);
    if ( !deckNameLabel )
      goto LABEL_83;
    v49 = isSameKind;
    v50 = isPossibleSelect;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_83;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v21 = 4;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v23 = v21 - 4;
      if ( (int)v21 - 4 >= max_length )
        break;
      if ( v23 >= max_length )
        goto LABEL_84;
      v24 = *((_QWORD *)&memberObjectList->obj.klass + v21);
      if ( !v24 )
        goto LABEL_83;
      Instance = *(_QWORD *)(v24 + 24);
      if ( !Instance )
        goto LABEL_83;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0);
      v25 = this->fields.memberObjectList;
      if ( !v25 )
        goto LABEL_83;
      if ( v23 >= LODWORD(v25->max_length) )
        goto LABEL_84;
      v26 = *((_QWORD *)&v25->obj.klass + v21);
      if ( !v26 )
        goto LABEL_83;
      v27 = *(UnityEngine_Object_o **)(v26 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Inequality(v27, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        v28 = this->fields.memberObjectList;
        if ( !v28 )
          goto LABEL_83;
        if ( v23 >= LODWORD(v28->max_length) )
          goto LABEL_84;
        v29 = *((_QWORD *)&v28->obj.klass + v21);
        if ( !v29 )
          goto LABEL_83;
        Instance = *(_QWORD *)(v29 + 32);
        if ( !Instance )
          goto LABEL_83;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      v30 = sub_1C2D538(long___TypeInfo, 1);
      Instance = SupportServantData__getEquip(data, v23, 0);
      if ( !v30 )
        goto LABEL_83;
      if ( !*(_DWORD *)(v30 + 24) )
        goto LABEL_84;
      *(_QWORD *)(v30 + 32) = Instance;
      Instance = SupportServantData__getServant(data, v23, 0);
      v31 = this->fields.memberObjectList;
      if ( !v31 )
        goto LABEL_83;
      if ( v23 >= LODWORD(v31->max_length) )
LABEL_84:
        sub_1C2D6F4(Instance, v15, v18);
      v32 = *((_QWORD *)&v31->obj.klass + v21);
      if ( !v32 )
        goto LABEL_83;
      v33 = Instance;
      v34 = *(UISprite_o **)(v32 + 16);
      if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      if ( v33 < 1 )
      {
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v23, 0, v18);
        if ( !v34 )
          goto LABEL_83;
        UISprite__set_spriteName(v34, (System_String_o *)Instance, 0);
        if ( !*(_DWORD *)(v30 + 24) )
          goto LABEL_84;
        v18 = *(const MethodInfo **)(v30 + 32);
        if ( (__int64)v18 >= 1 )
        {
          if ( !v20 )
            goto LABEL_83;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v20,
                       &entity,
                       (int64_t)v18,
                       (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v45 = this->fields.memberObjectList;
            if ( !v45 )
              goto LABEL_83;
            if ( v23 >= LODWORD(v45->max_length) )
              goto LABEL_84;
            v46 = *((_QWORD *)&v45->obj.klass + v21);
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
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v23, 1, v18);
        if ( !v34 )
          goto LABEL_83;
        UISprite__set_spriteName(v34, (System_String_o *)Instance, 0);
        Instance = SupportServantData__getServant(data, v23, 0);
        if ( !v20 )
          goto LABEL_83;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              v20,
                              Instance,
                              (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v35 = this->fields.memberObjectList;
        if ( !v35 )
          goto LABEL_83;
        if ( v23 >= LODWORD(v35->max_length) )
          goto LABEL_84;
        v36 = *((_QWORD *)&v35->obj.klass + v21);
        if ( !v36 )
          goto LABEL_83;
        v37 = Instance;
        Instance = *(_QWORD *)(v36 + 24);
        if ( !Instance )
          goto LABEL_83;
        ServantFaceIconComponent__Set_40783764(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v37,
          (System_Int64_array *)v30,
          0,
          0,
          0);
        v38 = this->fields.memberObjectList;
        if ( !v38 )
          goto LABEL_83;
        if ( v23 >= LODWORD(v38->max_length) )
          goto LABEL_84;
        v39 = *((_QWORD *)&v38->obj.klass + v21);
        if ( !v39 )
          goto LABEL_83;
        v40 = *(UnityEngine_Object_o **)(v39 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__op_Inequality(v40, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v11 || !v37 )
            goto LABEL_83;
          v41 = *(_OWORD *)(v37 + 32);
          pushUserSvtId = v11->fields.pushUserSvtId;
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v41;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v51, 0);
          if ( pushUserSvtId == Instance )
          {
            v43 = this->fields.memberObjectList;
            if ( !v43 )
              goto LABEL_83;
            if ( v23 >= LODWORD(v43->max_length) )
              goto LABEL_84;
            v44 = *((_QWORD *)&v43->obj.klass + v21);
            if ( !v44 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v44 + 32);
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
      ++v21;
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
      v48 = &StringLiteral_12521/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
    }
    else
    {
      if ( v50 )
        return;
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_12520/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v48, 0);
    if ( !maskMessageLabel )
LABEL_83:
      sub_1C2D6EC(Instance, v15);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0);
  }
}


void SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}