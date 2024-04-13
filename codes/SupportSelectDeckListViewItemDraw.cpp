void __fastcall SupportSelectDeckListViewItemDraw___ctor(
        SupportSelectDeckListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EB3A0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo, v5, v6, v7);
    byte_42EB3A0 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct SupportSelectDeckListViewItemDraw_ClassInfo_array *)sub_B5D5DC(
                                                                     SupportSelectDeckListViewItemDraw_ClassInfo___TypeInfo,
                                                                     (unsigned int)v8->static_fields->SupportDeckMemberMax);
  this->fields.memberObjectList = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *supportNumberLabel; // x24
  UserGameEntity_o *v47; // x23
  System_String_o *v48; // x25
  Il2CppObject *v49; // x0
  __int64 Instance; // x0
  __int64 v51; // x1
  UILabel_o *deckNameLabel; // x24
  System_String_o *v53; // x0
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *memberObjectList; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v55; // x24
  __int64 v56; // x28
  int max_length; // w9
  unsigned int v58; // w25
  __int64 v59; // x8
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v60; // x8
  __int64 v61; // x8
  UnityEngine_Object_o *v62; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v63; // x8
  __int64 v64; // x8
  System_Int64_array *v65; // x26
  const MethodInfo *v66; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v67; // x9
  __int64 v68; // x9
  UISprite_o *v69; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v70; // x8
  __int64 v71; // x8
  __int64 v72; // x27
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v73; // x8
  __int64 v74; // x8
  UnityEngine_Object_o *v75; // x26
  __int128 v76; // q0
  int64_t pushUserSvtId; // x26
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v78; // x8
  __int64 v79; // x8
  int64_t v80; // x2
  struct SupportSelectDeckListViewItemDraw_ClassInfo_array *v81; // x8
  __int64 v82; // x8
  UILabel_o *maskMessageLabel; // x19
  __int64 *v84; // x8
  __int64 v85; // x0
  bool v86; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42EB39F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)data, isSameKind, isPossibleSelect);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&long___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&SupportSelectListViewObject_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12662/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12675/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12694/*"SUPPORT_SELECT_NAME"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12663/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/, v42, v43, v44);
    byte_42EB39F = 1;
  }
  entity = 0LL;
  if ( data )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    supportNumberLabel = this->fields.supportNumberLabel;
    v47 = SelfUserGame;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12675/*"SUPPORT_SELECT_CONFIRM_DECK_SUPPORT_NUM"*/, 0LL);
    v49 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(data->fields._deckId_k__BackingField, 0LL);
    Instance = (__int64)System_String__Format(v48, v49, 0LL);
    if ( !supportNumberLabel )
      goto LABEL_93;
    UILabel__set_text(supportNumberLabel, (System_String_o *)Instance, 0LL);
    deckNameLabel = this->fields.deckNameLabel;
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12694/*"SUPPORT_SELECT_NAME"*/, 0LL);
    Instance = (__int64)System_String__Format(v53, (Il2CppObject *)data->fields._deckName_k__BackingField, 0LL);
    if ( !deckNameLabel )
      goto LABEL_93;
    v86 = isSameKind;
    UILabel__set_text(deckNameLabel, (System_String_o *)Instance, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_93;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_93;
    v55 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    v56 = 4LL;
    while ( 1 )
    {
      max_length = memberObjectList->max_length;
      v58 = v56 - 4;
      if ( (int)v56 - 4 >= max_length )
        break;
      if ( v58 >= max_length )
        goto LABEL_94;
      v59 = *((_QWORD *)&memberObjectList->obj.klass + v56);
      if ( !v59 )
        goto LABEL_93;
      Instance = *(_QWORD *)(v59 + 24);
      if ( !Instance )
        goto LABEL_93;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)Instance, 0LL);
      v60 = this->fields.memberObjectList;
      if ( !v60 )
        goto LABEL_93;
      if ( v58 >= v60->max_length )
        goto LABEL_94;
      v61 = *((_QWORD *)&v60->obj.klass + v56);
      if ( !v61 )
        goto LABEL_93;
      v62 = *(UnityEngine_Object_o **)(v61 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v63 = this->fields.memberObjectList;
        if ( !v63 )
          goto LABEL_93;
        if ( v58 >= v63->max_length )
          goto LABEL_94;
        v64 = *((_QWORD *)&v63->obj.klass + v56);
        if ( !v64 )
          goto LABEL_93;
        Instance = *(_QWORD *)(v64 + 32);
        if ( !Instance )
          goto LABEL_93;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      v65 = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, 1LL);
      Instance = SupportServantData__getEquip(data, v58, 0LL);
      if ( !v65 )
        goto LABEL_93;
      if ( !v65->max_length )
        goto LABEL_94;
      v65->m_Items[0] = Instance;
      Instance = SupportServantData__getServant(data, v58, 0LL);
      v67 = this->fields.memberObjectList;
      if ( !v67 )
        goto LABEL_93;
      if ( v58 >= v67->max_length )
      {
LABEL_94:
        v85 = sub_B5D6C8(Instance);
        sub_B5D668(v85, 0LL);
      }
      v68 = *((_QWORD *)&v67->obj.klass + v56);
      if ( !v68 )
        goto LABEL_93;
      v69 = *(UISprite_o **)(v68 + 16);
      if ( Instance < 1 )
      {
        if ( (WORD1(SupportSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
        }
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v58, 0, v66);
        if ( !v69 )
          goto LABEL_93;
        UISprite__set_spriteName(v69, (System_String_o *)Instance, 0LL);
        if ( !v65->max_length )
          goto LABEL_94;
        v80 = v65->m_Items[0];
        if ( v80 >= 1 )
        {
          if ( !v55 )
            goto LABEL_93;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v55,
                       &entity,
                       v80,
                       (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            v81 = this->fields.memberObjectList;
            if ( !v81 )
              goto LABEL_93;
            if ( v58 >= v81->max_length )
              goto LABEL_94;
            v82 = *((_QWORD *)&v81->obj.klass + v56);
            if ( !v82 )
              goto LABEL_93;
            Instance = *(_QWORD *)(v82 + 24);
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
        Instance = (__int64)SupportSelectListViewObject__GetClassIconSpriteName(v58, 1, v66);
        if ( !v69 )
          goto LABEL_93;
        UISprite__set_spriteName(v69, (System_String_o *)Instance, 0LL);
        Instance = SupportServantData__getServant(data, v58, 0LL);
        if ( !v55 )
          goto LABEL_93;
        Instance = (__int64)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              v55,
                              Instance,
                              (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v70 = this->fields.memberObjectList;
        if ( !v70 )
          goto LABEL_93;
        if ( v58 >= v70->max_length )
          goto LABEL_94;
        v71 = *((_QWORD *)&v70->obj.klass + v56);
        if ( !v71 )
          goto LABEL_93;
        v72 = Instance;
        Instance = *(_QWORD *)(v71 + 24);
        if ( !Instance )
          goto LABEL_93;
        ServantFaceIconComponent__Set_30850124(
          (ServantFaceIconComponent_o *)Instance,
          (UserServantEntity_o *)v72,
          v65,
          0LL,
          0LL,
          0LL);
        v73 = this->fields.memberObjectList;
        if ( !v73 )
          goto LABEL_93;
        if ( v58 >= v73->max_length )
          goto LABEL_94;
        v74 = *((_QWORD *)&v73->obj.klass + v56);
        if ( !v74 )
          goto LABEL_93;
        v75 = *(UnityEngine_Object_o **)(v74 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v47 || !v72 )
            goto LABEL_93;
          v76 = *(_OWORD *)(v72 + 32);
          pushUserSvtId = v47->fields.pushUserSvtId;
          *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)(v72 + 16);
          *(_OWORD *)&v88.fields.fakeValue = v76;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v87 = v88;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v87, 0LL);
          if ( pushUserSvtId == Instance )
          {
            v78 = this->fields.memberObjectList;
            if ( !v78 )
              goto LABEL_93;
            if ( v58 >= v78->max_length )
              goto LABEL_94;
            v79 = *((_QWORD *)&v78->obj.klass + v56);
            if ( !v79 )
              goto LABEL_93;
            Instance = *(_QWORD *)(v79 + 32);
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
      ++v56;
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
    if ( v86 )
    {
      maskMessageLabel = this->fields.maskMessageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v84 = &StringLiteral_12663/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SAME_KIND"*/;
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
      v84 = &StringLiteral_12662/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_NOT_SELECT"*/;
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)*v84, 0LL);
    if ( !maskMessageLabel )
LABEL_93:
      sub_B5D69C(Instance, v51);
    UILabel__set_text(maskMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall SupportSelectDeckListViewItemDraw_ClassInfo___ctor(
        SupportSelectDeckListViewItemDraw_ClassInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}