void __fastcall SupportSelectDeckListViewItemDraw___ctor(
        SupportSelectDeckListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B18B7E & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo, v3);
    byte_4B18B7E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_1BCB0A0(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v4->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7);
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
  const MethodInfo *v30; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x24
  __int64 v33; // x21
  int max_length; // w9
  unsigned int v35; // w25
  __int64 v36; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v37; // x8
  __int64 v38; // x8
  UnityEngine_Object_o *v39; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v40; // x8
  __int64 v41; // x8
  System_Int64_array *v42; // x26
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
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v57; // x8
  __int64 v58; // x8
  UILabel_o *maskMessageLabel; // x19
  __int64 *v60; // x8
  bool v61; // [xsp+8h] [xbp-B8h]
  bool v62; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-90h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B18B7D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1BCAFF8(&long___TypeInfo, v11);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v12);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v13);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&SupportSelectListViewObject_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_12417/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/, v17);
    sub_1BCAFF8(&StringLiteral_12430/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, v18);
    sub_1BCAFF8(&StringLiteral_12449/*"SUPPORT_SELECT_NAME"*/, v19);
    sub_1BCAFF8(&StringLiteral_12418/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/, v20);
    byte_4B18B7D = 1;
  }
  entity = 0LL;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportNumberLabel = this->fields.supportNumberLabel;
    v23 = SelfUserGame;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v25 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    Instance = (int64_t)System_String__Format(v24, v25, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_83;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SUPPORT_SELECT_NAME"*/, 0LL);
    Instance = (int64_t)System_String__Format(v29, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_83;
    v61 = isSameKind;
    v62 = isPossibleSelect;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_83;
    v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v33 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v35 = v33 - 4;
      if ( (int)v33 - 4 >= max_length )
        break;
      if ( v35 >= max_length )
        goto LABEL_84;
      v36 = *((_QWORD *)&memberObjectList->obj.klass + v33);
      if ( !v36 )
        goto LABEL_83;
      Instance = *(_QWORD *)(v36 + 24);
      if ( !Instance )
        goto LABEL_83;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0LL);
      v37 = this->fields.memberObjectList;
      if ( !v37 )
        goto LABEL_83;
      if ( v35 >= v37->max_length )
        goto LABEL_84;
      v38 = *((_QWORD *)&v37->obj.klass + v33);
      if ( !v38 )
        goto LABEL_83;
      v39 = *(UnityEngine_Object_o **)(v38 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v40 = this->fields.memberObjectList;
        if ( !v40 )
          goto LABEL_83;
        if ( v35 >= v40->max_length )
          goto LABEL_84;
        v41 = *((_QWORD *)&v40->obj.klass + v33);
        if ( !v41 )
          goto LABEL_83;
        Instance = *(_QWORD *)(v41 + 32);
        if ( !Instance )
          goto LABEL_83;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v42 = (System_Int64_array *)sub_1BCB0A0(long___TypeInfo, 1LL);
      Instance = SupportServantData__getEquip(data, v35, 0LL);
      if ( !v42 )
        goto LABEL_83;
      if ( !v42->max_length )
        goto LABEL_84;
      v42->m_Items[0] = Instance;
      Instance = SupportServantData__getServant(data, v35, 0LL);
      v43 = this->fields.memberObjectList;
      if ( !v43 )
        goto LABEL_83;
      if ( v35 >= v43->max_length )
LABEL_84:
        sub_1BCB25C(Instance, v27, v30);
      v44 = *((_QWORD *)&v43->obj.klass + v33);
      if ( !v44 )
        goto LABEL_83;
      v45 = Instance;
      v46 = *(UISprite_o **)(v44 + 16);
      if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      if ( v45 < 1 )
      {
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v35, 0, v30);
        if ( !v46 )
          goto LABEL_83;
        UISprite__set_spriteName(v46, (System_String_o *)Instance, 0LL);
        if ( !v42->max_length )
          goto LABEL_84;
        v30 = (const MethodInfo *)v42->m_Items[0];
        if ( (__int64)v30 >= 1 )
        {
          if ( !v32 )
            goto LABEL_83;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v32,
                       &entity,
                       (int64_t)v30,
                       (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v57 = this->fields.memberObjectList;
            if ( !v57 )
              goto LABEL_83;
            if ( v35 >= v57->max_length )
              goto LABEL_84;
            v58 = *((_QWORD *)&v57->obj.klass + v33);
            if ( !v58 )
              goto LABEL_83;
            Instance = *(_QWORD *)(v58 + 24);
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
        Instance = (int64_t)SupportSelectListViewObject__GetClassIconSpriteName(v35, 1, v30);
        if ( !v46 )
          goto LABEL_83;
        UISprite__set_spriteName(v46, (System_String_o *)Instance, 0LL);
        Instance = SupportServantData__getServant(data, v35, 0LL);
        if ( !v32 )
          goto LABEL_83;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              v32,
                              Instance,
                              (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v47 = this->fields.memberObjectList;
        if ( !v47 )
          goto LABEL_83;
        if ( v35 >= v47->max_length )
          goto LABEL_84;
        v48 = *((_QWORD *)&v47->obj.klass + v33);
        if ( !v48 )
          goto LABEL_83;
        v49 = Instance;
        Instance = *(_QWORD *)(v48 + 24);
        if ( !Instance )
          goto LABEL_83;
        ServantFaceIconComponent__Set_40190252(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v49,
          v42,
          0LL,
          0LL,
          0LL);
        v50 = this->fields.memberObjectList;
        if ( !v50 )
          goto LABEL_83;
        if ( v35 >= v50->max_length )
          goto LABEL_84;
        v51 = *((_QWORD *)&v50->obj.klass + v33);
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
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(v49 + 16);
          *(_OWORD *)&v64.fields.fakeValue = v53;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v63 = v64;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v63, 0LL);
          if ( pushUserSvtId == Instance )
          {
            v55 = this->fields.memberObjectList;
            if ( !v55 )
              goto LABEL_83;
            if ( v35 >= v55->max_length )
              goto LABEL_84;
            v56 = *((_QWORD *)&v55->obj.klass + v33);
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
      ++v33;
      if ( !memberObjectList )
        goto LABEL_83;
    }
    Instance = (int64_t)this->fields.maskSprite;
    if ( !Instance )
      goto LABEL_83;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !v62, 0LL);
    if ( v61 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = &StringLiteral_12418/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
    }
    else
    {
      if ( v62 )
        return;
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = &StringLiteral_12417/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)*v60, 0LL);
    if ( !maskMessageLabel )
LABEL_83:
      sub_1BCB254(Instance, v27);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}