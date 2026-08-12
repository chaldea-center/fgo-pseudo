void SupportSelectDeckListViewItemDraw___ctor(SupportSelectDeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CC33 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo);
    byte_596CC33 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_2213B20(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v4->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *supportNumberLabel; // x24
  UserGameEntity_o *v13; // x23
  System_String_o *v14; // x25
  Il2CppObject *v15; // x0
  __int64 Instance; // x0
  __int64 v17; // x1
  UILabel_o *deckNameLabel; // x24
  System_String_o *v19; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  int32_t v22; // w25
  int32_t max_length; // w9
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v24; // x8
  __int64 v25; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v26; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v27; // x8
  UnityEngine_Object_o *pushSprite; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v29; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v30; // x8
  __int64 v31; // x26
  const MethodInfo *v32; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v33; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v34; // x8
  UISprite_o *v35; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v36; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v37; // x8
  __int64 v38; // x27
  __int64 v39; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v40; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v41; // x8
  UnityEngine_Object_o *v42; // x26
  __int64 v43; // x2
  __int128 v44; // q1
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v46; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v47; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v48; // x8
  UISprite_o *classIconSprite; // x27
  int64_t v50; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v51; // x8
  SupportSelectDeckListViewItemDraw_ClassInfo_o *v52; // x8
  __int64 v53; // x1
  __int64 v54; // x2
  UILabel_o *maskMessageLabel; // x19
  __int64 *v56; // x8
  bool v57; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-90h]
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_596CC32 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportSelectListViewObject_TypeInfo);
    sub_2213A60(&StringLiteral_13051/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/);
    sub_2213A60(&StringLiteral_13064/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/);
    sub_2213A60(&StringLiteral_13083/*"SUPPORT_SELECT_NAME"*/);
    sub_2213A60(&StringLiteral_13052/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/);
    byte_596CC32 = 1;
  }
  entity = 0;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    supportNumberLabel = this->fields.supportNumberLabel;
    v13 = SelfUserGame;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13064/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0);
    v15 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0);
    Instance = (__int64)System_String__Format(v14, v15, 0);
    if ( !supportNumberLabel )
      goto LABEL_74;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0);
    deckNameLabel = this->fields.deckNameLabel;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13083/*"SUPPORT_SELECT_NAME"*/, 0);
    Instance = (__int64)System_String__Format(v19, (Il2CppObject *)data->fields._deckName_k__BackingField, 0);
    if ( !deckNameLabel )
      goto LABEL_74;
    v57 = isSameKind;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_74;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_74;
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v22 = 0;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      if ( v22 >= max_length )
        break;
      if ( v22 >= (unsigned int)max_length )
        goto LABEL_88;
      v24 = memberObjectList->m_Items[v22];
      if ( !v24 )
        goto LABEL_74;
      Instance = (__int64)v24->fields.servantFaceIcon;
      if ( !Instance )
        goto LABEL_74;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0);
      v26 = this->fields.memberObjectList;
      if ( !v26 )
        goto LABEL_74;
      if ( (unsigned int)v22 >= LODWORD(v26->max_length) )
        goto LABEL_88;
      v27 = v26->m_Items[v22];
      if ( !v27 )
        goto LABEL_74;
      pushSprite = (UnityEngine_Object_o *)v27->fields.pushSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v25);
      Instance = UnityEngine_Object__op_Inequality(pushSprite, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        v29 = this->fields.memberObjectList;
        if ( !v29 )
          goto LABEL_74;
        if ( (unsigned int)v22 >= LODWORD(v29->max_length) )
          goto LABEL_88;
        v30 = v29->m_Items[v22];
        if ( !v30 )
          goto LABEL_74;
        Instance = (__int64)v30->fields.pushSprite;
        if ( !Instance )
          goto LABEL_74;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_74;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      v31 = sub_2213B20(long___TypeInfo, 1);
      Instance = SupportServantData__getEquip(data, v22, 0);
      if ( !v31 )
        goto LABEL_74;
      if ( !*(_DWORD *)(v31 + 24) )
LABEL_88:
        sub_2213CE4(Instance);
      *(_QWORD *)(v31 + 32) = Instance;
      Instance = SupportServantData__getServant(data, v22, 0);
      v33 = this->fields.memberObjectList;
      if ( Instance < 1 )
      {
        if ( !v33 )
          goto LABEL_74;
        if ( (unsigned int)v22 >= LODWORD(v33->max_length) )
          goto LABEL_88;
        v48 = v33->m_Items[v22];
        if ( !v48 )
          goto LABEL_74;
        classIconSprite = v48->fields.classIconSprite;
        if ( !*(&SupportSelectListViewObject_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo, v17, v32);
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v22, 0, v32);
        if ( !classIconSprite )
          goto LABEL_74;
        UISprite__set_spriteName(classIconSprite, (System_String_o *)Instance, 0);
        if ( !*(_DWORD *)(v31 + 24) )
          goto LABEL_88;
        v50 = *(_QWORD *)(v31 + 32);
        if ( v50 >= 1 )
        {
          if ( !v21 )
            goto LABEL_74;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v21,
                       &entity,
                       v50,
                       (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v51 = this->fields.memberObjectList;
            if ( !v51 )
              goto LABEL_74;
            if ( (unsigned int)v22 >= LODWORD(v51->max_length) )
              goto LABEL_88;
            v52 = v51->m_Items[v22];
            if ( !v52 )
              goto LABEL_74;
            Instance = (__int64)v52->fields.servantFaceIcon;
            if ( !Instance )
              goto LABEL_74;
            ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)Instance, (UserServantEntity_o *)entity, 0);
          }
        }
      }
      else
      {
        if ( !v33 )
          goto LABEL_74;
        if ( (unsigned int)v22 >= LODWORD(v33->max_length) )
          goto LABEL_88;
        v34 = v33->m_Items[v22];
        if ( !v34 )
          goto LABEL_74;
        v35 = v34->fields.classIconSprite;
        if ( !*(&SupportSelectListViewObject_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo, v17, v32);
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v22, 1, v32);
        if ( !v35 )
          goto LABEL_74;
        UISprite__set_spriteName(v35, (System_String_o *)Instance, 0);
        Instance = SupportServantData__getServant(data, v22, 0);
        if ( !v21 )
          goto LABEL_74;
        Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                              v21,
                              Instance,
                              (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v36 = this->fields.memberObjectList;
        if ( !v36 )
          goto LABEL_74;
        if ( (unsigned int)v22 >= LODWORD(v36->max_length) )
          goto LABEL_88;
        v37 = v36->m_Items[v22];
        if ( !v37 )
          goto LABEL_74;
        v38 = Instance;
        Instance = (__int64)v37->fields.servantFaceIcon;
        if ( !Instance )
          goto LABEL_74;
        ServantFaceIconComponent__Set_48049544(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v38,
          (System_Int64_array *)v31,
          0,
          0,
          0,
          0);
        v40 = this->fields.memberObjectList;
        if ( !v40 )
          goto LABEL_74;
        if ( (unsigned int)v22 >= LODWORD(v40->max_length) )
          goto LABEL_88;
        v41 = v40->m_Items[v22];
        if ( !v41 )
          goto LABEL_74;
        v42 = (UnityEngine_Object_o *)v41->fields.pushSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v39);
        Instance = UnityEngine_Object__op_Inequality(v42, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v13 || !v38 )
            goto LABEL_74;
          v44 = *(_OWORD *)(v38 + 32);
          pushUserSvtId = v13->fields.pushUserSvtId;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v38 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v44;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v43);
          v58 = v59;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v58, 0);
          if ( pushUserSvtId == Instance )
          {
            v46 = this->fields.memberObjectList;
            if ( !v46 )
              goto LABEL_74;
            if ( (unsigned int)v22 >= LODWORD(v46->max_length) )
              goto LABEL_88;
            v47 = v46->m_Items[v22];
            if ( !v47 )
              goto LABEL_74;
            Instance = (__int64)v47->fields.pushSprite;
            if ( !Instance )
              goto LABEL_74;
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_74;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          }
        }
      }
      memberObjectList = this->fields.memberObjectList;
      ++v22;
      if ( !memberObjectList )
        goto LABEL_74;
    }
    Instance = (__int64)this->fields.maskSprite;
    if ( !Instance )
      goto LABEL_74;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !isPossibleSelect, 0);
    if ( v57 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
      v56 = &StringLiteral_13052/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
    }
    else
    {
      if ( isPossibleSelect )
        return;
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
      v56 = &StringLiteral_13051/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)*v56, 0);
    if ( !maskMessageLabel )
LABEL_74:
      sub_2213CDC(Instance, v17);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0);
  }
}


void SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}