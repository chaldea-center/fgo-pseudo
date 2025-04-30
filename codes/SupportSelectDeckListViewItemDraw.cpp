void __fastcall SupportSelectDeckListViewItemDraw___ctor(
        SupportSelectDeckListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4AC05 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo, v3);
    byte_4A4AC05 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_1B86460(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v4->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7);
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
  int64_t Instance; // x0
  __int64 v27; // x1
  UILabel_o *deckNameLabel; // x24
  System_String_o *v29; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x24
  __int64 v32; // x21
  int max_length; // w9
  unsigned int v34; // w25
  __int64 v35; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v36; // x8
  __int64 v37; // x8
  UnityEngine_Object_o *v38; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v39; // x8
  __int64 v40; // x8
  System_Int64_array *v41; // x26
  const MethodInfo *v42; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v43; // x8
  __int64 v44; // x8
  __int64 v45; // x28
  UISprite_o *v46; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v47; // x8
  __int64 v48; // x8
  int64_t v49; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v50; // x8
  __int64 v51; // x8
  UnityEngine_Object_o *v52; // x26
  __int128 v53; // q0
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v55; // x8
  __int64 v56; // x8
  int64_t v57; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v58; // x8
  __int64 v59; // x8
  UILabel_o *maskMessageLabel; // x19
  __int64 *v61; // x8
  bool v62; // [xsp+8h] [xbp-B8h]
  bool v63; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-90h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A4AC04 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1B863B8(&long___TypeInfo, v11);
    sub_1B863B8(&LocalizationManager_TypeInfo, v12);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&SupportSelectListViewObject_TypeInfo, v16);
    sub_1B863B8(&StringLiteral_12301/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/, v17);
    sub_1B863B8(&StringLiteral_12314/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, v18);
    sub_1B863B8(&StringLiteral_12333/*"SUPPORT_SELECT_NAME"*/, v19);
    sub_1B863B8(&StringLiteral_12302/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/, v20);
    byte_4A4AC04 = 1;
  }
  entity = 0LL;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportNumberLabel = this->fields.supportNumberLabel;
    v23 = SelfUserGame;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12314/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v25 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    Instance = (int64_t)System_String__Format(v24, v25, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_83;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12333/*"SUPPORT_SELECT_NAME"*/, 0LL);
    Instance = (int64_t)System_String__Format(v29, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_83;
    v62 = isSameKind;
    v63 = isPossibleSelect;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_83;
    v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v32 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v34 = v32 - 4;
      if ( (int)v32 - 4 >= max_length )
        break;
      if ( v34 >= max_length )
        goto LABEL_84;
      v35 = *((_QWORD *)&memberObjectList->obj.klass + v32);
      if ( !v35 )
        goto LABEL_83;
      Instance = *(_QWORD *)(v35 + 24);
      if ( !Instance )
        goto LABEL_83;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0LL);
      v36 = this->fields.memberObjectList;
      if ( !v36 )
        goto LABEL_83;
      if ( v34 >= v36->max_length )
        goto LABEL_84;
      v37 = *((_QWORD *)&v36->obj.klass + v32);
      if ( !v37 )
        goto LABEL_83;
      v38 = *(UnityEngine_Object_o **)(v37 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v39 = this->fields.memberObjectList;
        if ( !v39 )
          goto LABEL_83;
        if ( v34 >= v39->max_length )
          goto LABEL_84;
        v40 = *((_QWORD *)&v39->obj.klass + v32);
        if ( !v40 )
          goto LABEL_83;
        Instance = *(_QWORD *)(v40 + 32);
        if ( !Instance )
          goto LABEL_83;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v41 = (System_Int64_array *)sub_1B86460(long___TypeInfo, 1LL);
      Instance = SupportServantData__getEquip(data, v34, 0LL);
      if ( !v41 )
        goto LABEL_83;
      if ( !v41->max_length )
        goto LABEL_84;
      v41->m_Items[0] = Instance;
      Instance = SupportServantData__getServant(data, v34, 0LL);
      v43 = this->fields.memberObjectList;
      if ( !v43 )
        goto LABEL_83;
      if ( v34 >= v43->max_length )
LABEL_84:
        sub_1B8661C(Instance, v27);
      v44 = *((_QWORD *)&v43->obj.klass + v32);
      if ( !v44 )
        goto LABEL_83;
      v45 = Instance;
      v46 = *(UISprite_o **)(v44 + 16);
      if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      if ( v45 < 1 )
      {
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v34, 0, v42);
        if ( !v46 )
          goto LABEL_83;
        UISprite__set_spriteName(v46, (System_String_o *)Instance, 0LL);
        if ( !v41->max_length )
          goto LABEL_84;
        v57 = v41->m_Items[0];
        if ( v57 >= 1 )
        {
          if ( !v31 )
            goto LABEL_83;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v31,
                       &entity,
                       v57,
                       (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v58 = this->fields.memberObjectList;
            if ( !v58 )
              goto LABEL_83;
            if ( v34 >= v58->max_length )
              goto LABEL_84;
            v59 = *((_QWORD *)&v58->obj.klass + v32);
            if ( !v59 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v59 + 24);
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
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v34, 1, v42);
        if ( !v46 )
          goto LABEL_83;
        UISprite__set_spriteName(v46, (System_String_o *)Instance, 0LL);
        Instance = SupportServantData__getServant(data, v34, 0LL);
        if ( !v31 )
          goto LABEL_83;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              v31,
                              Instance,
                              (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v47 = this->fields.memberObjectList;
        if ( !v47 )
          goto LABEL_83;
        if ( v34 >= v47->max_length )
          goto LABEL_84;
        v48 = *((_QWORD *)&v47->obj.klass + v32);
        if ( !v48 )
          goto LABEL_83;
        v49 = Instance;
        Instance = *(_QWORD *)(v48 + 24);
        if ( !Instance )
          goto LABEL_83;
        ServantFaceIconComponent__Set_39177016(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v49,
          v41,
          0LL,
          0LL,
          0LL);
        v50 = this->fields.memberObjectList;
        if ( !v50 )
          goto LABEL_83;
        if ( v34 >= v50->max_length )
          goto LABEL_84;
        v51 = *((_QWORD *)&v50->obj.klass + v32);
        if ( !v51 )
          goto LABEL_83;
        v52 = *(UnityEngine_Object_o **)(v51 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v23 || !v49 )
            goto LABEL_83;
          v53 = *(_OWORD *)(v49 + 32);
          pushUserSvtId = v23->fields.pushUserSvtId;
          *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)(v49 + 16);
          *(_OWORD *)&v65.fields.fakeValue = v53;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v64 = v65;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v64, 0LL);
          if ( pushUserSvtId == Instance )
          {
            v55 = this->fields.memberObjectList;
            if ( !v55 )
              goto LABEL_83;
            if ( v34 >= v55->max_length )
              goto LABEL_84;
            v56 = *((_QWORD *)&v55->obj.klass + v32);
            if ( !v56 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v56 + 32);
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
      ++v32;
      if ( !memberObjectList )
        goto LABEL_83;
    }
    Instance = (int64_t)this->fields.maskSprite;
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v63, 0LL);
    if ( v62 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v61 = &StringLiteral_12302/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
    }
    else
    {
      if ( v63 )
        return;
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v61 = &StringLiteral_12301/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v61, 0LL);
    if ( !maskMessageLabel )
LABEL_83:
      sub_1B86614(Instance, v27);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}