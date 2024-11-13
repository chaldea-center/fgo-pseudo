void __fastcall ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  struct UISprite_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B131F8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UISprite___TypeInfo, v4, v5);
    byte_4B131F8 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, (unsigned int)v6->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeSpriteList,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)&this->fields.transformNameAddHeight = 0xFFFFFF9C00000022LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommand__Awake(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  ServantStatusListViewItemDrawCommand_o *v3; // x19
  int32_t buttonPitch; // w20
  float v5; // s1
  struct UISprite_array *v6; // x8
  float v7; // s8
  float v8; // s1
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v13; // cc
  unsigned int v14; // w8
  int v15; // w8
  float v16; // s0
  float v17; // s1
  float v18; // s2
  int v19; // w8
  float v20; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  battleCharaLevelSpriteList = this->fields.battleCharaLevelSpriteList;
  if ( !battleCharaLevelSpriteList )
    goto LABEL_30;
  v3 = this;
  if ( (int)battleCharaLevelSpriteList->max_length > 3 )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_30;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.battleCharaLevelSpriteList;
    if ( !v6 )
      goto LABEL_30;
    if ( v6->max_length <= 3 )
      sub_1BCAA44(this, method);
    if ( (this = (ServantStatusListViewItemDrawCommand_o *)v6->m_Items[3]) == 0LL
      || (v7 = v5,
          (this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL)
      || ((*(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL),
           battleCharaLevelSpriteList = v3->fields.battleCharaLevelSpriteList,
           (float)(v7 - v8) != INFINITY)
        ? (buttonPitch = (int)(float)(v7 - v8))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !battleCharaLevelSpriteList) )
    {
LABEL_30:
      sub_1BCAA3C(this, method);
    }
  }
  else
  {
    buttonPitch = this->fields.buttonPitch;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_30;
  max_length = battleCharaLevelSpriteList->max_length;
  mWidth = baseSprite->fields.mWidth;
  mHeight = baseSprite->fields.mHeight;
  v13 = max_length < 9;
  v14 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.titleSprite;
  v15 = v13 ? -1 : v14 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v15 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v19 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v20 = (float)(v19 >> 1);
  v3->fields.titleBasePosition.fields.x = v16;
  v3->fields.titleBasePosition.fields.z = v18;
  v3->fields.titleBasePosition.fields.y = v17 - v20;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.levelButtonBase;
  v3->fields.cardBasePosition.fields.x = localPosition.fields.x;
  v3->fields.cardBasePosition.fields.z = localPosition.fields.z;
  v3->fields.cardBasePosition.fields.y = localPosition.fields.y - v20;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v22.fields.x;
  v3->fields.levelButtonBasePosition.fields.z = v22.fields.z;
  v3->fields.levelButtonBasePosition.fields.y = v22.fields.y - v20;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v23.fields.x;
  v3->fields.explanationBasePosition.fields.z = v23.fields.z;
  v3->fields.explanationBasePosition.fields.y = v23.fields.y + v20;
}


int32_t __fastcall ServantStatusListViewItemDrawCommand__GetKind(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  return 8;
}


void __fastcall ServantStatusListViewItemDrawCommand__ModifyCommandCard(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isStart = 1;
  ServantStatusListViewItemDrawCommand__RefreshCommandCard(this, item, method);
}


void __fastcall ServantStatusListViewItemDrawCommand__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4B131F4 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, item, method);
    byte_4B131F4 = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item);
    if ( !byte_4B12177 )
    {
      sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, item, method);
      byte_4B12177 = 1;
    }
    v5 = RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item);
      v5 = RandomLimitCountManager_TypeInfo;
    }
    if ( v5->static_fields->enableRandomLimitCount )
      ServantStatusListViewItemDrawCommand__RefreshCommandCard(this, item, method);
  }
}


void __fastcall ServantStatusListViewItemDrawCommand__RefreshCommandCard(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusListViewItem_o *v4; // x19
  ServantStatusListViewItemDrawCommand_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_c **v34; // x29
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  il2cpp_array_size_t v36; // w27
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v38; // x22
  __int64 v39; // x1
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *MasterData_object; // x23
  PartyOrganizationUtility_c *klass; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  il2cpp_array_size_t max_length; // w9
  int32_t v46; // w21
  struct System_Int32_array *commandCardParam; // x8
  il2cpp_array_size_t v48; // w9
  int32_t v49; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v51; // x22
  int64_t v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct UnityEngine_GameObject_array *v59; // x8
  int64_t v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x1
  struct System_Int32_array **p_commandCodeIdList; // x22
  int64_t v75; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Int32_array *CommandCardIds; // x28
  __int64 v84; // x1
  int32_t v85; // w21
  int32_t v86; // w21
  struct UnityEngine_GameObject_array *v87; // x8
  unsigned __int64 v88; // x23
  unsigned __int64 v89; // x8
  int32_t v90; // w25
  struct System_Int32_array *v91; // x8
  unsigned __int64 v92; // x9
  int32_t v93; // w24
  struct System_Int32_array *v94; // x8
  unsigned __int64 v95; // x9
  int32_t v96; // w9
  Il2CppObject *commandCardPrefab; // x21
  ServantStatusListViewItemDrawCommand_o *v98; // x28
  UnityEngine_Transform_o *transform; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  struct UnityEngine_GameObject_array *v105; // x8
  __int64 v106; // x1
  __int64 v107; // x2
  ServantStatusListViewItem_o *v108; // x27
  __int64 v109; // x1
  __int64 v110; // x2
  UnityEngine_Object_c **v111; // x19
  ServantStatusListViewItemDrawCommand_o *v112; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  unsigned int *commandCardDataList; // x29
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  BattleCommandData_o *v124; // x22
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  unsigned int *v131; // x0
  PartyOrganizationUtility_c *v132; // x8
  int64_t clickEventObject; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  unsigned int *v140; // x21
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  unsigned int *v147; // x0
  struct UnityEngine_GameObject_array *v148; // x8
  __int64 v149; // x1
  int32_t layer; // w21
  struct UISprite_array *v151; // x8
  UIWidget_o *v152; // x8
  struct UISprite_array *v153; // x8
  UISprite_o *v154; // x21
  struct UISprite_array *v155; // x8
  __int64 v156; // x0
  System_Int32_array *v157; // [xsp+0h] [xbp-B0h]
  int32_t v158; // [xsp+18h] [xbp-98h]
  int32_t svtId; // [xsp+1Ch] [xbp-94h]
  PartyOrganizationUtility_o *p_commandCardDataList; // [xsp+20h] [xbp-90h]
  int32_t powerUpValue; // [xsp+38h] [xbp-78h]
  int v162; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  v4 = item;
  v5 = this;
  if ( (byte_4B131F5 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&BattleCommandComponent___TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleCommandData___TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v16, v17);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v18, v19);
    sub_1BCA7E0(&NGUITools_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_15295/*"Unlit/Transparent Colored"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_4680/*"CommandCard("*/, v30, v31);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v32, v33);
    byte_4B131F5 = 1;
  }
  v162 = 0;
  v34 = &UnityEngine_Object_TypeInfo;
  p_commandCardDataList = (PartyOrganizationUtility_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v36 = 0;
      while ( (signed int)v36 < (signed int)commandCardBaseList->max_length )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_109;
        if ( v36 >= commandCardComponentList->max_length )
          goto LABEL_111;
        if ( !v4 )
          goto LABEL_109;
        v38 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v36];
        if ( !v4->fields._IsTransformed_k__BackingField )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
          this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                                      v4,
                                                      0LL);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v39);
            LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                ConvertOverwriteCommandCardLimitCount,
                                                0LL);
            this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_109;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
            if ( !MasterData_object )
              goto LABEL_109;
            this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                               (ServantLimitImageMaster_o *)MasterData_object,
                                                               (int32_t)this,
                                                               LimitCountByImageLimitCostumeIn,
                                                               0LL);
            klass = p_commandCardDataList->klass;
            if ( !p_commandCardDataList->klass )
              goto LABEL_109;
            if ( v36 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_111;
            item = (ServantStatusListViewItem_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v36);
            if ( !item )
              goto LABEL_109;
            LODWORD(item->fields.partyItem) = (_DWORD)this;
            if ( !v38 )
              goto LABEL_109;
            BattleCommandComponent__setData(
              (BattleCommandComponent_o *)v38,
              (BattleCommandData_o *)item,
              0LL,
              0,
              1,
              0,
              1,
              0LL);
            BattleCommandComponent__updateView((BattleCommandComponent_o *)v38, 1, 0, 1, 0, 0, 0LL);
          }
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v36 < (int)max_length) )
        {
          if ( v36 >= max_length )
            goto LABEL_111;
          v46 = commandCodeIdList->m_Items[v36 + 1];
        }
        else
        {
          v46 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v48 = commandCardParam->max_length, (int)v36 < (int)v48) )
        {
          if ( v36 >= v48 )
            goto LABEL_111;
          v49 = commandCardParam->m_Items[v36 + 1];
        }
        else
        {
          v49 = 0;
        }
        if ( v38 )
        {
          BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v38, v49, 2, 1, 0LL);
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v38, v49, 0LL);
          commandCodeSpriteList = v5->fields.commandCodeSpriteList;
          if ( commandCodeSpriteList )
          {
            if ( v36 >= commandCodeSpriteList->max_length )
              goto LABEL_111;
            v51 = commandCodeSpriteList->m_Items[v36];
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
            this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v51, v46, 0LL);
            commandCardBaseList = v5->fields.commandCardBaseList;
            ++v36;
            if ( commandCardBaseList )
              continue;
          }
        }
        goto LABEL_109;
      }
      goto LABEL_110;
    }
LABEL_109:
    sub_1BCAA3C(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_109;
  v52 = sub_1BCA888(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v52;
  sub_1BCA784(p_commandCardDataList, v52, v53, v54, v55, v56, v57, v58);
  v59 = v5->fields.commandCardBaseList;
  if ( !v59 )
    goto LABEL_109;
  v60 = sub_1BCA888(BattleCommandComponent___TypeInfo, v59->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v60;
  sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.commandCardComponentList, v60, v61, v62, v63, v64, v65, v66);
  if ( !v4 )
    goto LABEL_109;
  v73 = (int64_t)v4->fields.commandCodeIdList;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v73;
  sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.commandCodeIdList, v73, v67, v68, v69, v70, v71, v72);
  v75 = (int64_t)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v75;
  sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.commandCardParam, v75, v77, v78, v79, v80, v81, v82);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0LL);
  svtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0LL);
  v85 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v84);
  v86 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v85, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     (ServantLimitImageMaster_o *)this,
                                                     svtId,
                                                     v86,
                                                     0LL);
  v87 = v5->fields.commandCardBaseList;
  v158 = (int)this;
  if ( !v87 )
    goto LABEL_109;
  v88 = 0LL;
  v157 = CommandCardIds;
  while ( (__int64)v88 < (int)v87->max_length )
  {
    if ( CommandCardIds && (v89 = CommandCardIds->max_length, (__int64)v88 < (int)v89) )
    {
      if ( v88 >= v89 )
        goto LABEL_111;
      v90 = CommandCardIds->m_Items[v88 + 1];
    }
    else
    {
      v90 = 0;
    }
    v91 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v92 = v91->max_length, (__int64)v88 < (int)v92) )
    {
      if ( v88 >= v92 )
        goto LABEL_111;
      v93 = v91->m_Items[v88 + 1];
    }
    else
    {
      v93 = 0;
    }
    v94 = *p_commandCardParam;
    if ( *p_commandCardParam && (v95 = v94->max_length, (__int64)v88 < (int)v95) )
    {
      if ( v88 >= v95 )
        goto LABEL_111;
      v96 = v94->m_Items[v88 + 1];
    }
    else
    {
      v96 = 0;
    }
    if ( (unsigned int)(v90 - 1) > 2 )
    {
      v155 = v5->fields.commandCodeSpriteList;
      if ( !v155 )
        goto LABEL_109;
      if ( v88 >= v155->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v155->m_Items[v88];
      if ( !this )
        goto LABEL_109;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      ++v88;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      powerUpValue = v96;
      if ( !(*v34)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v34, item);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_109;
      v98 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v98,
                                                         0LL);
      if ( !this )
        goto LABEL_109;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v162 = v88 + 1;
      v103 = System_Int32__ToString((int32_t)&v162, 0LL);
      v104 = System_String__Concat_62412480(
               (System_String_o *)StringLiteral_4680/*"CommandCard("*/,
               v103,
               (System_String_o *)StringLiteral_809/*")"*/,
               0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v98, v104, 0LL);
      v105 = v5->fields.commandCardBaseList;
      if ( !v105 )
        goto LABEL_109;
      if ( v88 >= v105->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v105->m_Items[v88];
      if ( !this )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_109;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v106, v107);
        byte_4B109C1 = 1;
      }
      v108 = v4;
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !byte_4B109C7 )
      {
        sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v109, v110);
        byte_4B109C7 = 1;
      }
      v111 = v34;
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      v164.fields.x = x;
      v164.fields.y = y;
      v164.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v164, 0LL);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v98,
        (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v98,
                                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_109;
      v112 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v112[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)gameObject;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v112[1].fields.baseCollider,
        (int64_t)gameObject,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v124 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v121, v122, v123);
      BattleCommandData___ctor_44072696(v124, v90, svtId, v158, 0, -1, 0LL);
      if ( !commandCardDataList )
        goto LABEL_109;
      if ( v124 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_1BCA91C(
                                                           v124,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_112:
          v156 = sub_1BCAA60();
          sub_1BCA908(v156, 0LL);
        }
      }
      if ( v88 >= commandCardDataList[6] )
        goto LABEL_111;
      v131 = &commandCardDataList[2 * v88];
      *((_QWORD *)v131 + 4) = v124;
      sub_1BCA784((PartyOrganizationUtility_o *)(v131 + 8), (int64_t)v124, v125, v126, v127, v128, v129, v130);
      v132 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_109;
      if ( v88 >= LODWORD(v132->_1.namespaze) )
        goto LABEL_111;
      item = (ServantStatusListViewItem_o *)*((_QWORD *)&v132->_1.byval_arg.data + v88);
      if ( !item )
        goto LABEL_109;
      v34 = v111;
      v4 = v108;
      *(&item->fields.memberNum + 1) = v88 + 1;
      LODWORD(item->fields.servantLeaderInfo) = v88;
      BattleCommandComponent__setData(
        (BattleCommandComponent_o *)v112,
        (BattleCommandData_o *)item,
        0LL,
        0,
        1,
        0,
        1,
        0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v112, (System_String_o *)StringLiteral_15295/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v112, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (int64_t)v5->fields.clickEventObject;
      v112[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)clickEventObject;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v112[1].fields.baseCollider,
        clickEventObject,
        v134,
        v135,
        v136,
        v137,
        v138,
        v139);
      v140 = (unsigned int *)v5->fields.commandCardComponentList;
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( !v140 )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_1BCA91C(v112, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
      if ( !this )
        goto LABEL_112;
      if ( v88 >= v140[6] )
        goto LABEL_111;
      v147 = &v140[2 * v88];
      *((_QWORD *)v147 + 4) = v112;
      sub_1BCA784((PartyOrganizationUtility_o *)(v147 + 8), (int64_t)v112, v141, v142, v143, v144, v145, v146);
      v148 = v5->fields.commandCardBaseList;
      if ( !v148 )
        goto LABEL_109;
      if ( v88 >= v148->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v148->m_Items[v88];
      if ( !this )
        goto LABEL_109;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v149);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v98, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v112, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v112, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v112,
                                                         0LL);
      CommandCardIds = v157;
      if ( (_DWORD)this != -1 )
      {
        v151 = v5->fields.commandCodeSpriteList;
        if ( !v151 )
          goto LABEL_109;
        if ( v88 >= v151->max_length )
          goto LABEL_111;
        v152 = (UIWidget_o *)v151->m_Items[v88];
        if ( !v152 )
          goto LABEL_109;
        UIWidget__set_depth(v152, (_DWORD)this - 1, 0LL);
      }
      v153 = v5->fields.commandCodeSpriteList;
      if ( !v153 )
        goto LABEL_109;
      if ( v88 >= v153->max_length )
LABEL_111:
        sub_1BCAA44(this, item);
      v154 = v153->m_Items[v88];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v154, v93, 0LL);
      ++v88;
    }
    v87 = v5->fields.commandCardBaseList;
    if ( !v87 )
      goto LABEL_109;
  }
LABEL_110:
  ServantStatusListViewItemDrawCommand__SetupBattleButton(v5, v4, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommand__SetItem(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *levelButtonBase; // x0
  __int64 v29; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v31; // x22
  __int64 v32; // x23
  UILabel_o *v33; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v36; // x22
  struct ServantLeaderInfo_o *v37; // x8
  int32_t v38; // w22
  System_String_o *mText; // x25
  System_String_o *v40; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w9
  int32_t buttonPitch; // w8
  int v47; // w10
  int v48; // w10
  int v49; // w8
  int32_t transformedSubHeight; // w24
  int v51; // w25
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *v54; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v56; // w21
  _BOOL4 IsTransformServant_k__BackingField; // w22
  UILabel_o *v58; // x22
  bool v59; // w1
  __int64 v60; // x1
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v65; // s8
  int32_t v66; // w1
  int32_t v67; // w1
  int v68; // w22
  float v69; // s8
  float v70; // s11
  float v71; // s9
  int v72; // w22
  float v73; // s8
  float v74; // s12
  float v75; // s9
  float v76; // s11
  float v77; // s8
  float v78; // s12
  float v79; // s9
  float v80; // s0
  float v81; // s8
  float v82; // s10
  float v83; // s9
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v87; // w8
  __int64 v88; // x22
  int32_t v89; // w28
  int v90; // w8
  int v91; // w8
  float v92; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B131F3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_12001/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11999/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12000/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11998/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v23, v24);
    byte_4B131F3 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_134;
      UILabel__set_text(explanationLabel, levelButtonBase, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_134;
      v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v33 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11999/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v33 )
        goto LABEL_134;
      UILabel__set_text(v33, levelButtonBase, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_134;
      v32 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
      v36 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v36 )
        goto LABEL_134;
      UILabel__set_text(v36, levelButtonBase, 0LL);
      if ( !servantLeaderInfo )
      {
LABEL_34:
        commandCardSelectList = item->fields.commandCardSelectList;
        if ( !commandCardSelectList )
          goto LABEL_134;
        max_length = commandCardSelectList->max_length;
        if ( max_length < 4 )
          buttonPitch = 0;
        else
          buttonPitch = this->fields.buttonPitch;
        v47 = max_length / 3;
        if ( max_length != 3 * (max_length / 3) )
          ++v47;
        if ( v47 < 3 )
          v48 = 1;
        else
          v48 = v47 - 1;
        v49 = v48 * buttonPitch;
        if ( (_DWORD)servantLeaderInfo )
          transformedSubHeight = v49 + 32;
        else
          transformedSubHeight = v49;
        if ( item->fields._IsTransformServant_k__BackingField )
        {
          levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
          if ( !levelButtonBase )
            goto LABEL_134;
          if ( item->fields._IsTransformed_k__BackingField )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
            transformedSubHeight = this->fields.transformedSubHeight;
            LODWORD(servantLeaderInfo) = 0;
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
          }
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_134;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0LL);
          if ( !levelButtonBase )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
          transformNameLabel = this->fields.transformNameLabel;
          levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0LL);
          if ( !transformNameLabel )
            goto LABEL_134;
          UILabel__set_text(transformNameLabel, levelButtonBase, 0LL);
          transformNameAddHeight = this->fields.transformNameAddHeight;
          transformedSubHeight += transformNameAddHeight;
          v51 = -transformNameAddHeight;
        }
        else
        {
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_134;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0LL);
          if ( !levelButtonBase )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
          v51 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_67;
        v54 = item->fields.userSvtEntity;
        if ( !v54 || UserServantEntity__IsLeave(v54, 0LL) )
          goto LABEL_67;
        levelButtonBase = (System_String_o *)item->fields.userSvtEntity;
        if ( !levelButtonBase )
          goto LABEL_134;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)levelButtonBase, 0LL);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_67:
          v56 = 0;
          goto LABEL_68;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          v87 = commandCardParam->max_length;
          if ( v87 < 1 )
          {
LABEL_125:
            levelButtonBase = (System_String_o *)this->fields.engraveCodeObject;
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
            levelButtonBase = (System_String_o *)this->fields.engraveCodeButton;
            if ( !levelButtonBase )
              goto LABEL_134;
            BYTE1(levelButtonBase[4].klass) = 1;
            UICommonButton__SetEnable(
              (UICommonButton_o *)levelButtonBase,
              item->fields._CanMoveCombine_k__BackingField,
              0LL);
            v91 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v92 = (float)-(v91 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v92, 0LL);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)levelButtonBase, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, v92, 0LL);
            v56 = 1;
LABEL_68:
            levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            if ( IsTransformServant_k__BackingField )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
              v58 = this->fields.transformNameLabel;
              levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0LL);
              if ( !v58 )
                goto LABEL_134;
              UILabel__set_text(v58, levelButtonBase, 0LL);
              levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
              if ( !levelButtonBase )
                goto LABEL_134;
              if ( !item->fields._IsTransformed_k__BackingField )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
                levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                if ( !levelButtonBase )
                  goto LABEL_134;
                levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)levelButtonBase,
                                                       0LL);
                if ( !levelButtonBase )
                  goto LABEL_134;
                v59 = 1;
                goto LABEL_80;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
              levelButtonBase = (System_String_o *)this->fields.explanationLabel;
              if ( !levelButtonBase )
                goto LABEL_134;
              levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                     0LL);
              if ( !levelButtonBase )
                goto LABEL_134;
            }
            v59 = 0;
LABEL_80:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, v59, 0LL);
            x = this->fields.baseSize.fields.x;
            y = this->fields.baseSize.fields.y;
            z = this->fields.baseSize.fields.z;
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
            v65 = y + (float)transformedSubHeight;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
            {
              levelButtonBase = (System_String_o *)this->fields.baseCollider;
              if ( !levelButtonBase )
                goto LABEL_134;
              v95.fields.x = x;
              v95.fields.y = v65;
              v95.fields.z = z;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)levelButtonBase, v95, 0LL);
            }
            levelButtonBase = (System_String_o *)this->fields.baseSprite;
            if ( levelButtonBase )
            {
              v66 = x == INFINITY ? 0x80000000 : (int)x;
              UIWidget__set_width((UIWidget_o *)levelButtonBase, v66, 0LL);
              levelButtonBase = (System_String_o *)this->fields.baseSprite;
              if ( levelButtonBase )
              {
                v67 = v65 == INFINITY ? 0x80000000 : (int)v65;
                UIWidget__set_height((UIWidget_o *)levelButtonBase, v67, 0LL);
                levelButtonBase = (System_String_o *)this->fields.titleSprite;
                v68 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                if ( levelButtonBase )
                {
                  v69 = this->fields.titleBasePosition.fields.x;
                  v70 = this->fields.titleBasePosition.fields.y;
                  v71 = this->fields.titleBasePosition.fields.z;
                  levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)levelButtonBase,
                                                         0LL);
                  if ( levelButtonBase )
                  {
                    v72 = v68 >> 1;
                    v96.fields.y = v70 + (float)v72;
                    v96.fields.x = v69;
                    v96.fields.z = v71;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v96, 0LL);
                    levelButtonBase = (System_String_o *)this->fields.cardBase;
                    if ( levelButtonBase )
                    {
                      v73 = this->fields.cardBasePosition.fields.x;
                      v74 = this->fields.cardBasePosition.fields.y;
                      v75 = this->fields.cardBasePosition.fields.z;
                      levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)levelButtonBase,
                                                             0LL);
                      if ( levelButtonBase )
                      {
                        v76 = (float)(v72 + v51);
                        v97.fields.y = v74 + v76;
                        v97.fields.x = v73;
                        v97.fields.z = v75;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v97, 0LL);
                        levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
                        if ( levelButtonBase )
                        {
                          v77 = this->fields.levelButtonBasePosition.fields.x;
                          v78 = this->fields.levelButtonBasePosition.fields.y;
                          v79 = this->fields.levelButtonBasePosition.fields.z;
                          levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)levelButtonBase,
                                                                 0LL);
                          if ( levelButtonBase )
                          {
                            v98.fields.y = v78 + v76;
                            v98.fields.x = v77;
                            v98.fields.z = v79;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)levelButtonBase,
                              v98,
                              0LL);
                            v80 = this->fields.explanationBasePosition.fields.y - (float)v72;
                            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                            if ( (_DWORD)servantLeaderInfo )
                              v80 = v80 + 16.0;
                            v81 = v56 ? v80 + 50.0 : v80;
                            if ( levelButtonBase )
                            {
                              v82 = this->fields.explanationBasePosition.fields.x;
                              v83 = this->fields.explanationBasePosition.fields.z;
                              levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                                     0LL);
                              if ( levelButtonBase )
                              {
                                v99.fields.x = v82;
                                v99.fields.y = v81;
                                v99.fields.z = v83;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)levelButtonBase,
                                  v99,
                                  0LL);
                                ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v84);
                                ServantStatusListViewItemDrawCommand__SetupMask(this, item, v56, v85);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_134:
            sub_1BCAA3C(levelButtonBase, v29);
          }
          v88 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v88 >= v87 )
              sub_1BCAA44(IsEventJoin, v29);
            IsEventJoin = BalanceConfig_TypeInfo;
            v89 = commandCardParam->m_Items[v88 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v89 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            v87 = commandCardParam->max_length;
            if ( (int)++v88 >= v87 )
              goto LABEL_125;
          }
        }
        levelButtonBase = (System_String_o *)this->fields.reinforceObject;
        if ( !levelButtonBase )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
        levelButtonBase = (System_String_o *)this->fields.reinforceButton;
        if ( !levelButtonBase )
          goto LABEL_134;
        BYTE1(levelButtonBase[4].klass) = 1;
        UICommonButton__SetEnable(
          (UICommonButton_o *)levelButtonBase,
          item->fields._CanMoveCombine_k__BackingField,
          0LL);
        if ( transformedSubHeight >= 0 )
          v90 = transformedSubHeight;
        else
          v90 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v90 >> 1), 0LL);
        goto LABEL_125;
      }
      v37 = item->fields.servantLeaderInfo;
      if ( !v37 )
        goto LABEL_134;
      v32 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    *(_QWORD *)&v94.fields.currentCryptoKey = v32;
    *(_QWORD *)&v94.fields.fakeValue = v31;
    levelButtonBase = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v94, 0LL);
    if ( !(_DWORD)levelButtonBase )
      goto LABEL_33;
    if ( !Master_object )
      goto LABEL_134;
    v38 = (int)levelButtonBase;
    levelButtonBase = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                           (ServantLimitImageMaster_o *)Master_object,
                                           (int32_t)levelButtonBase,
                                           3,
                                           0LL);
    if ( ((unsigned __int8)levelButtonBase & 1) != 0 )
    {
      levelButtonBase = ServantLimitImageMaster__GetServantStatusExplanationText(
                          (ServantLimitImageMaster_o *)Master_object,
                          (System_String_o *)StringLiteral_12001/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                          v38,
                          0LL);
      servantLeaderInfo = this->fields.explanationLabel;
      if ( !servantLeaderInfo )
        goto LABEL_134;
      mText = servantLeaderInfo->fields.mText;
      v40 = levelButtonBase;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v38,
                                                      3,
                                                      0LL);
      v42 = System_String__Format(v40, LimitCountSealedServantName, 0LL);
      v43 = System_String__Concat_62401220(mText, v42, 0LL);
      UILabel__set_text(servantLeaderInfo, v43, 0LL);
      LODWORD(servantLeaderInfo) = 1;
    }
    else
    {
LABEL_33:
      LODWORD(servantLeaderInfo) = 0;
    }
    goto LABEL_34;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommand__SetupBattleButton(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x20
  ServantStatusListViewItemDrawCommand_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  bool v26; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  __int64 v28; // x1
  __int64 v29; // x2
  int maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v32; // x0
  float *static_fields; // x8
  float v34; // s8
  float v35; // s9
  float v36; // s10
  float v37; // s11
  struct LocalizationManager_StaticFields *v38; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  ServantStatusListViewItemDrawCommand_o *v43; // x25
  int v44; // w8
  _BOOL4 v45; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v47; // x26
  int v48; // w28
  __int64 v49; // x1
  System_String_o *v50; // x27
  float v51; // s3
  float v52; // s2
  float v53; // s1
  float v54; // s0
  System_String_o *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v59; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v62; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v64; // x27
  __int64 v65; // x1
  bool IsServantLimitCountSeal; // w28
  ServantStatusListViewItemDrawCommand_o *v67; // x1
  bool v68; // nf
  struct UICommonButton_array *v69; // x8
  __int64 v70; // x22
  il2cpp_array_size_t v71; // w28
  signed int max_length; // w27
  _BOOL4 v73; // w24
  struct UIRangeLabel_array *v74; // x9
  UIRangeLabel_o *v75; // x25
  int v76; // w19
  ServantCostumeEntity_o *Entity; // x0
  __int64 v78; // x2
  System_String_o *monitor; // x26
  float v80; // s3
  float v81; // s2
  float v82; // s1
  float v83; // s0
  struct UISprite_array *v84; // x8
  __int64 *v85; // x8
  struct UICommonButton_array *v86; // x8
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-C0h]
  int32_t v88; // [xsp+8h] [xbp-B8h]
  struct System_Int32_array *v90; // [xsp+10h] [xbp-B0h]
  bool v91; // [xsp+18h] [xbp-A8h]
  unsigned int v92; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_4B131F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item, isInit);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_8374/*"LIMIT_COUNT_SELECT_SEALED"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v24, v25);
    byte_4B131F6 = 1;
  }
  if ( !v4 )
    goto LABEL_136;
  if ( !v4->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( v5->fields.isStart && !v4->fields.isConvertOverwriteImage )
    {
      if ( v4->fields.userSvtEntity )
        v26 = 1;
      else
        v26 = v4->fields.userSvtCollectionEntity != 0LL;
      v91 = v26;
    }
    else
    {
      v91 = 0;
    }
    ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                              v4,
                                              0LL);
    maxCommandCardLimitCount = v4->fields.maxCommandCardLimitCount;
    commandCardSelectList = v4->fields.commandCardSelectList;
    v88 = ConvertOverwriteCommandCardLimitCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    if ( !byte_4B11133 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
      byte_4B11133 = 1;
    }
    v32 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
      v32 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v32->static_fields;
    v34 = static_fields[20];
    v35 = static_fields[21];
    v36 = static_fields[22];
    v37 = static_fields[23];
    if ( !byte_4B11134 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
      v32 = LocalizationManager_TypeInfo;
      byte_4B11134 = 1;
    }
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v28);
      v32 = LocalizationManager_TypeInfo;
    }
    v38 = v32->static_fields;
    r = v38->selectEffectColor.fields.r;
    g = v38->selectEffectColor.fields.g;
    b = v38->selectEffectColor.fields.b;
    a = v38->selectEffectColor.fields.a;
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v92 = 0;
    v43 = this;
    v44 = 0;
    while ( 1 )
    {
      if ( v44 <= maxCommandCardLimitCount )
      {
        if ( !commandCardSelectList )
          goto LABEL_136;
        if ( v44 >= commandCardSelectList->max_length )
          goto LABEL_137;
        v45 = commandCardSelectList->m_Items[v44 + 1] == v88;
      }
      else
      {
        v45 = 0;
      }
      battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
      if ( !battleCharaLevelTitleRangeLabelList )
        goto LABEL_136;
      if ( v44 >= battleCharaLevelTitleRangeLabelList->max_length )
        goto LABEL_137;
      v47 = battleCharaLevelTitleRangeLabelList->m_Items[v44];
      v48 = v91 && v44 <= maxCommandCardLimitCount;
      if ( v44 > maxCommandCardLimitCount
        && (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(v4, 0LL),
            ((unsigned __int8)this & 1) != 0) )
      {
        if ( !v47 )
          goto LABEL_136;
        v93.fields.r = v34;
        v93.fields.g = v35;
        v93.fields.b = v36;
        v93.fields.a = v37;
        UIRangeLabel__set_effectColor(v47, v93, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
        v50 = (System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
      }
      else
      {
        v51 = v37;
        v52 = v36;
        v53 = v35;
        v54 = v34;
        if ( (v45 & v48) != 0 )
        {
          v51 = a;
          v52 = b;
          v53 = g;
          v54 = r;
        }
        if ( !v47 )
          goto LABEL_136;
        UIRangeLabel__set_effectColor(v47, *(UnityEngine_Color_o *)&v54, 0LL);
        v55 = System_Int32__ToString((int32_t)&v92, 0LL);
        v50 = System_String__Concat_62401220((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v55, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
      }
      v57 = LocalizationManager__Get(v50, 0LL);
      UIRangeLabel__Set(v47, v57, 0LL, 1, 0, 0LL);
      battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
      if ( !battleCharaLevelSpriteList )
        goto LABEL_136;
      if ( v92 >= battleCharaLevelSpriteList->max_length )
LABEL_137:
        sub_1BCAA44(this, item);
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v92];
      if ( !this )
        goto LABEL_136;
      v59 = &StringLiteral_17652/*"btn_bg_20"*/;
      if ( v45 )
        v59 = &StringLiteral_17653/*"btn_bg_21"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v59, 0LL);
      battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
      if ( !battleCharaLevelButtonList )
        goto LABEL_136;
      if ( v92 >= battleCharaLevelButtonList->max_length )
        goto LABEL_137;
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v92];
      if ( (v45 & v48) != 0 )
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v48 == 0 || isInit, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetButtonEnable((UICommonButton_o *)this, v48 & ~v45, v48 == 0 || isInit, 0LL);
      }
      limitCountSealLabel = v5->fields.limitCountSealLabel;
      if ( limitCountSealLabel )
      {
        if ( v92 >= limitCountSealLabel->max_length )
          goto LABEL_137;
        v62 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v92];
      }
      else
      {
        v62 = 0LL;
      }
      limitCountSealObjList = v5->fields.limitCountSealObjList;
      if ( limitCountSealObjList )
      {
        if ( v92 >= limitCountSealObjList->max_length )
          goto LABEL_137;
        v64 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v92];
      }
      else
      {
        v64 = 0LL;
      }
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( !commandCardSelectList )
        goto LABEL_136;
      if ( v92 >= commandCardSelectList->max_length )
        goto LABEL_137;
      if ( !v43 )
        goto LABEL_136;
      IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                  (ServantLimitImageMaster_o *)v43,
                                  (int32_t)this,
                                  commandCardSelectList->m_Items[v92 + 1] + 1,
                                  0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
      if ( IsServantLimitCountSeal )
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v64, 1, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8374/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0LL);
        if ( !v62 )
          goto LABEL_136;
        v67 = this;
      }
      else
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v64, 0, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !v62 )
          goto LABEL_136;
        v67 = (ServantStatusListViewItemDrawCommand_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)v62, (System_String_o *)v67, 0LL);
LABEL_89:
      v68 = (int)(v92 - 2) < 0;
      v44 = ++v92;
      if ( v68 == __OFSUB__(v92, 3) )
      {
        v69 = v5->fields.battleCharaLevelButtonList;
        if ( v69 )
        {
          v70 = 11LL;
          v90 = commandCardSelectList;
          while ( 1 )
          {
            v71 = v70 - 8;
            if ( (int)v70 - 8 >= (signed int)v69->max_length )
              return;
            max_length = commandCardSelectList->max_length;
            if ( (int)v71 >= max_length )
            {
              v73 = 0;
            }
            else
            {
              if ( v71 >= max_length )
                goto LABEL_137;
              v73 = *((_DWORD *)&commandCardSelectList->obj.klass + v70) == v88;
            }
            v74 = v5->fields.battleCharaLevelTitleRangeLabelList;
            if ( !v74 )
              goto LABEL_136;
            if ( v71 >= v74->max_length )
              goto LABEL_137;
            v75 = v74->m_Items[v71];
            v76 = v91 && (int)v71 < max_length;
            if ( (int)v71 >= max_length )
            {
              if ( !v75 )
                goto LABEL_136;
              UIRangeLabel__Clear(v75, 0LL);
            }
            else
            {
              this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
              if ( v71 >= v90->max_length )
                goto LABEL_137;
              item = (ServantStatusListViewItem_o *)(unsigned int)this;
              this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_136;
              Entity = ServantCostumeMaster__GetEntity(
                         (ServantCostumeMaster_o *)MasterData_object,
                         (int32_t)item,
                         v90->m_Items[v71 + 1],
                         0LL);
              if ( Entity )
              {
                this = (ServantStatusListViewItemDrawCommand_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
                monitor = (System_String_o *)this;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
                if ( !byte_4B1194D )
                {
                  sub_1BCA7E0(&LocalizationManager_TypeInfo, item, v78);
                  byte_4B1194D = 1;
                }
                this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
                  this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                }
                monitor = (System_String_o *)this->fields.engraveCodeObject[1].monitor;
              }
              v80 = v37;
              v81 = v36;
              v82 = v35;
              v83 = v34;
              if ( (v73 & v76) != 0 )
              {
                v80 = a;
                v81 = b;
                v82 = g;
                v83 = r;
              }
              if ( !v75 )
                goto LABEL_136;
              UIRangeLabel__set_effectColor(v75, *(UnityEngine_Color_o *)&v83, 0LL);
              UIRangeLabel__Set(v75, monitor, 0LL, 1, 0, 0LL);
            }
            v84 = v5->fields.battleCharaLevelSpriteList;
            if ( !v84 )
              goto LABEL_136;
            if ( v71 >= v84->max_length )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v84->m_Items[v71];
            if ( !this )
              goto LABEL_136;
            v85 = &StringLiteral_17652/*"btn_bg_20"*/;
            if ( v73 )
              v85 = &StringLiteral_17653/*"btn_bg_21"*/;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v85, 0LL);
            v86 = v5->fields.battleCharaLevelButtonList;
            if ( !v86 )
              goto LABEL_136;
            if ( v71 >= v86->max_length )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v86->m_Items[v71];
            if ( (v73 & v76) != 0 )
              break;
            if ( (int)v71 < max_length )
            {
              if ( !this )
                goto LABEL_136;
              UICommonButton__SetButtonEnable((UICommonButton_o *)this, v76 & ~v73, v76 == 0 || isInit, 0LL);
              goto LABEL_130;
            }
            if ( !this )
              goto LABEL_136;
            this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
            commandCardSelectList = v90;
            if ( !this )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_131:
            v69 = v5->fields.battleCharaLevelButtonList;
            ++v70;
            if ( !v69 )
              goto LABEL_136;
          }
          if ( !this )
            goto LABEL_136;
          UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v76 == 0 || isInit, 0LL);
LABEL_130:
          commandCardSelectList = v90;
          goto LABEL_131;
        }
LABEL_136:
        sub_1BCAA3C(this, item);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  ServantStatusListViewItemDrawCommand_o *v13; // x22
  float y; // s0
  System_String_o *Empty; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B131F7 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isDisplayCombineButton);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1BCA7E0(&StringLiteral_12044/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v9, v10);
    byte_4B131F7 = 1;
  }
  if ( !item )
    goto LABEL_35;
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
LABEL_16:
    if ( !this )
      goto LABEL_35;
LABEL_17:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_16;
  if ( !this )
    goto LABEL_35;
  if ( item->fields._IsTransformed_k__BackingField )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_35;
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_35;
  mHeight = baseSprite->fields.mHeight;
  if ( isDisplayCombineButton )
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight - 50, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_35;
    v13 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_35;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = localPosition.fields.y + 25.0;
  }
  else
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_35;
    v13 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_35;
    v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = v18.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v13, y, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_35;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12044/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this
    || (UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)this, Empty, 0LL),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0LL) )
  {
LABEL_35:
    sub_1BCAA3C(this, item);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.MASK_LABEL_MAX_WIDTH, 0LL);
  if ( isDisplayCombineButton )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, 14.0, 0LL);
      return;
    }
    goto LABEL_35;
  }
}