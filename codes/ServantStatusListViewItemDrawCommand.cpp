void __fastcall ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct UISprite_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B34182 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&UISprite___TypeInfo, v3);
    byte_4B34182 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UISprite_array *)sub_1BD3500(UISprite___TypeInfo, (unsigned int)v4->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v5;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.commandCodeSpriteList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
      sub_1BD36BC(this, method);
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
      sub_1BD36B4(this, method);
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

  if ( (byte_4B3417E & 1) == 0 )
  {
    sub_1BD3458(&RandomLimitCountManager_TypeInfo, item);
    byte_4B3417E = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4B33101 )
    {
      sub_1BD3458(&RandomLimitCountManager_TypeInfo, item);
      byte_4B33101 = 1;
    }
    v5 = RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
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
  __int64 v7; // x1
  __int64 v8; // x1
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
  UnityEngine_Object_c **v20; // x29
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  il2cpp_array_size_t v22; // w27
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v24; // x22
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *MasterData_object; // x23
  PartyOrganizationUtility_c *klass; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  il2cpp_array_size_t max_length; // w9
  int32_t v31; // w21
  struct System_Int32_array *commandCardParam; // x8
  il2cpp_array_size_t v33; // w9
  int32_t v34; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v36; // x22
  int64_t v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct UnityEngine_GameObject_array *v44; // x8
  int64_t v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  struct System_Int32_array **p_commandCodeIdList; // x22
  int64_t v60; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Int32_array *CommandCardIds; // x28
  int32_t v69; // w21
  int32_t v70; // w21
  struct UnityEngine_GameObject_array *v71; // x8
  unsigned __int64 v72; // x23
  unsigned __int64 v73; // x8
  int32_t v74; // w25
  struct System_Int32_array *v75; // x8
  unsigned __int64 v76; // x9
  int32_t v77; // w24
  struct System_Int32_array *v78; // x8
  unsigned __int64 v79; // x9
  int32_t v80; // w9
  Il2CppObject *commandCardPrefab; // x21
  ServantStatusListViewItemDrawCommand_o *v82; // x28
  UnityEngine_Transform_o *transform; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  struct UnityEngine_GameObject_array *v89; // x8
  __int64 v90; // x1
  ServantStatusListViewItem_o *v91; // x27
  __int64 v92; // x1
  UnityEngine_Object_c **v93; // x19
  ServantStatusListViewItemDrawCommand_o *v94; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  unsigned int *commandCardDataList; // x29
  BattleCommandData_o *v103; // x22
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  unsigned int *v110; // x0
  PartyOrganizationUtility_c *v111; // x8
  int64_t clickEventObject; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  unsigned int *v119; // x21
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  unsigned int *v126; // x0
  struct UnityEngine_GameObject_array *v127; // x8
  int32_t layer; // w21
  struct UISprite_array *v129; // x8
  UIWidget_o *v130; // x8
  struct UISprite_array *v131; // x8
  UISprite_o *v132; // x21
  struct UISprite_array *v133; // x8
  __int64 v134; // x0
  System_Int32_array *v135; // [xsp+0h] [xbp-B0h]
  int32_t v136; // [xsp+18h] [xbp-98h]
  int32_t svtId; // [xsp+1Ch] [xbp-94h]
  PartyOrganizationUtility_o *p_commandCardDataList; // [xsp+20h] [xbp-90h]
  int32_t powerUpValue; // [xsp+38h] [xbp-78h]
  int v140; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  v4 = item;
  v5 = this;
  if ( (byte_4B3417F & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, item);
    sub_1BD3458(&BattleCommandComponent___TypeInfo, v6);
    sub_1BD3458(&BattleCommandData___TypeInfo, v7);
    sub_1BD3458(&BattleCommandData_TypeInfo, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_1BD3458(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v10);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v11);
    sub_1BD3458(&ImageLimitCount_TypeInfo, v12);
    sub_1BD3458(&NGUITools_TypeInfo, v13);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v15);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BD3458(&StringLiteral_15314/*"Unlit/Transparent Colored"*/, v17);
    sub_1BD3458(&StringLiteral_4688/*"CommandCard("*/, v18);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1BD3458(&StringLiteral_809/*")"*/, v19);
    byte_4B3417F = 1;
  }
  v140 = 0;
  v20 = &UnityEngine_Object_TypeInfo;
  p_commandCardDataList = (PartyOrganizationUtility_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v22 = 0;
      while ( (signed int)v22 < (signed int)commandCardBaseList->max_length )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_109;
        if ( v22 >= commandCardComponentList->max_length )
          goto LABEL_111;
        if ( !v4 )
          goto LABEL_109;
        v24 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v22];
        if ( !v4->fields._IsTransformed_k__BackingField )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                                      v4,
                                                      0LL);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                ConvertOverwriteCommandCardLimitCount,
                                                0LL);
            this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_109;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
            if ( v22 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_111;
            item = (ServantStatusListViewItem_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v22);
            if ( !item )
              goto LABEL_109;
            LODWORD(item->fields.partyItem) = (_DWORD)this;
            if ( !v24 )
              goto LABEL_109;
            BattleCommandComponent__setData(
              (BattleCommandComponent_o *)v24,
              (BattleCommandData_o *)item,
              0LL,
              0,
              1,
              0,
              1,
              0LL);
            BattleCommandComponent__updateView((BattleCommandComponent_o *)v24, 1, 0, 1, 0, 0, 0LL);
          }
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v22 < (int)max_length) )
        {
          if ( v22 >= max_length )
            goto LABEL_111;
          v31 = commandCodeIdList->m_Items[v22 + 1];
        }
        else
        {
          v31 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v33 = commandCardParam->max_length, (int)v22 < (int)v33) )
        {
          if ( v22 >= v33 )
            goto LABEL_111;
          v34 = commandCardParam->m_Items[v22 + 1];
        }
        else
        {
          v34 = 0;
        }
        if ( v24 )
        {
          BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v24, v34, 2, 1, 0LL);
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v24, v34, 0LL);
          commandCodeSpriteList = v5->fields.commandCodeSpriteList;
          if ( commandCodeSpriteList )
          {
            if ( v22 >= commandCodeSpriteList->max_length )
              goto LABEL_111;
            v36 = commandCodeSpriteList->m_Items[v22];
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v36, v31, 0LL);
            commandCardBaseList = v5->fields.commandCardBaseList;
            ++v22;
            if ( commandCardBaseList )
              continue;
          }
        }
        goto LABEL_109;
      }
      goto LABEL_110;
    }
LABEL_109:
    sub_1BD36B4(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_109;
  v37 = sub_1BD3500(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v37;
  sub_1BD33FC(p_commandCardDataList, v37, v38, v39, v40, v41, v42, v43);
  v44 = v5->fields.commandCardBaseList;
  if ( !v44 )
    goto LABEL_109;
  v45 = sub_1BD3500(BattleCommandComponent___TypeInfo, v44->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v45;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v5->fields.commandCardComponentList, v45, v46, v47, v48, v49, v50, v51);
  if ( !v4 )
    goto LABEL_109;
  v58 = (int64_t)v4->fields.commandCodeIdList;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v58;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v5->fields.commandCodeIdList, v58, v52, v53, v54, v55, v56, v57);
  v60 = (int64_t)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v60;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v5->fields.commandCardParam, v60, v62, v63, v64, v65, v66, v67);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0LL);
  svtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0LL);
  v69 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  v70 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v69, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     (ServantLimitImageMaster_o *)this,
                                                     svtId,
                                                     v70,
                                                     0LL);
  v71 = v5->fields.commandCardBaseList;
  v136 = (int)this;
  if ( !v71 )
    goto LABEL_109;
  v72 = 0LL;
  v135 = CommandCardIds;
  while ( (__int64)v72 < (int)v71->max_length )
  {
    if ( CommandCardIds && (v73 = CommandCardIds->max_length, (__int64)v72 < (int)v73) )
    {
      if ( v72 >= v73 )
        goto LABEL_111;
      v74 = CommandCardIds->m_Items[v72 + 1];
    }
    else
    {
      v74 = 0;
    }
    v75 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v76 = v75->max_length, (__int64)v72 < (int)v76) )
    {
      if ( v72 >= v76 )
        goto LABEL_111;
      v77 = v75->m_Items[v72 + 1];
    }
    else
    {
      v77 = 0;
    }
    v78 = *p_commandCardParam;
    if ( *p_commandCardParam && (v79 = v78->max_length, (__int64)v72 < (int)v79) )
    {
      if ( v72 >= v79 )
        goto LABEL_111;
      v80 = v78->m_Items[v72 + 1];
    }
    else
    {
      v80 = 0;
    }
    if ( (unsigned int)(v74 - 1) > 2 )
    {
      v133 = v5->fields.commandCodeSpriteList;
      if ( !v133 )
        goto LABEL_109;
      if ( v72 >= v133->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v133->m_Items[v72];
      if ( !this )
        goto LABEL_109;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      ++v72;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      powerUpValue = v80;
      if ( !(*v20)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v20);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_109;
      v82 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v82,
                                                         0LL);
      if ( !this )
        goto LABEL_109;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v140 = v72 + 1;
      v87 = System_Int32__ToString((int32_t)&v140, 0LL);
      v88 = System_String__Concat_62536508(
              (System_String_o *)StringLiteral_4688/*"CommandCard("*/,
              v87,
              (System_String_o *)StringLiteral_809/*")"*/,
              0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v82, v88, 0LL);
      v89 = v5->fields.commandCardBaseList;
      if ( !v89 )
        goto LABEL_109;
      if ( v72 >= v89->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v89->m_Items[v72];
      if ( !this )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_109;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      if ( !byte_4B31941 )
      {
        sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v90);
        byte_4B31941 = 1;
      }
      v91 = v4;
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !byte_4B31947 )
      {
        sub_1BD3458(&UnityEngine_Quaternion_TypeInfo, v92);
        byte_4B31947 = 1;
      }
      v93 = v20;
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      v142.fields.x = x;
      v142.fields.y = y;
      v142.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v142, 0LL);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v82,
        (const MethodInfo_2F81994 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v82,
                                                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_109;
      v94 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v94[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)gameObject;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v94[1].fields.baseCollider,
        (int64_t)gameObject,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v103 = (BattleCommandData_o *)sub_1BD36A4(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_44181340(v103, v74, svtId, v136, 0, -1, 0LL);
      if ( !commandCardDataList )
        goto LABEL_109;
      if ( v103 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_1BD3594(
                                                           v103,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_112:
          v134 = sub_1BD36D8();
          sub_1BD3580(v134, 0LL);
        }
      }
      if ( v72 >= commandCardDataList[6] )
        goto LABEL_111;
      v110 = &commandCardDataList[2 * v72];
      *((_QWORD *)v110 + 4) = v103;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v110 + 8), (int64_t)v103, v104, v105, v106, v107, v108, v109);
      v111 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_109;
      if ( v72 >= LODWORD(v111->_1.namespaze) )
        goto LABEL_111;
      item = (ServantStatusListViewItem_o *)*((_QWORD *)&v111->_1.byval_arg.data + v72);
      if ( !item )
        goto LABEL_109;
      v20 = v93;
      v4 = v91;
      *(&item->fields.memberNum + 1) = v72 + 1;
      LODWORD(item->fields.servantLeaderInfo) = v72;
      BattleCommandComponent__setData(
        (BattleCommandComponent_o *)v94,
        (BattleCommandData_o *)item,
        0LL,
        0,
        1,
        0,
        1,
        0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v94, (System_String_o *)StringLiteral_15314/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v94, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (int64_t)v5->fields.clickEventObject;
      v94[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)clickEventObject;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v94[1].fields.baseCollider,
        clickEventObject,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
      v119 = (unsigned int *)v5->fields.commandCardComponentList;
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( !v119 )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_1BD3594(v94, *(_QWORD *)(*(_QWORD *)v119 + 64LL));
      if ( !this )
        goto LABEL_112;
      if ( v72 >= v119[6] )
        goto LABEL_111;
      v126 = &v119[2 * v72];
      *((_QWORD *)v126 + 4) = v94;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v126 + 8), (int64_t)v94, v120, v121, v122, v123, v124, v125);
      v127 = v5->fields.commandCardBaseList;
      if ( !v127 )
        goto LABEL_109;
      if ( v72 >= v127->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v127->m_Items[v72];
      if ( !this )
        goto LABEL_109;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v82, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v94, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v94, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v94,
                                                         0LL);
      CommandCardIds = v135;
      if ( (_DWORD)this != -1 )
      {
        v129 = v5->fields.commandCodeSpriteList;
        if ( !v129 )
          goto LABEL_109;
        if ( v72 >= v129->max_length )
          goto LABEL_111;
        v130 = (UIWidget_o *)v129->m_Items[v72];
        if ( !v130 )
          goto LABEL_109;
        UIWidget__set_depth(v130, (_DWORD)this - 1, 0LL);
      }
      v131 = v5->fields.commandCodeSpriteList;
      if ( !v131 )
        goto LABEL_109;
      if ( v72 >= v131->max_length )
LABEL_111:
        sub_1BD36BC(this, item);
      v132 = v131->m_Items[v72];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v132, v77, 0LL);
      ++v72;
    }
    v71 = v5->fields.commandCardBaseList;
    if ( !v71 )
      goto LABEL_109;
  }
LABEL_110:
  ServantStatusListViewItemDrawCommand__SetupBattleButton(v5, v4, 0, v3);
}


void __fastcall ServantStatusListViewItemDrawCommand__SetItem(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *levelButtonBase; // x0
  __int64 v19; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  UILabel_o *v23; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v26; // x22
  struct ServantLeaderInfo_o *v27; // x8
  int32_t v28; // w22
  System_String_o *mText; // x25
  System_String_o *v30; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w9
  int32_t buttonPitch; // w8
  int v37; // w10
  int v38; // w10
  int v39; // w8
  int32_t transformedSubHeight; // w24
  int v41; // w25
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *v44; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v46; // w21
  _BOOL4 IsTransformServant_k__BackingField; // w22
  UILabel_o *v48; // x22
  bool v49; // w1
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v54; // s8
  int32_t v55; // w1
  int32_t v56; // w1
  int v57; // w22
  float v58; // s8
  float v59; // s11
  float v60; // s9
  int v61; // w22
  float v62; // s8
  float v63; // s12
  float v64; // s9
  float v65; // s11
  float v66; // s8
  float v67; // s12
  float v68; // s9
  float v69; // s0
  float v70; // s8
  float v71; // s10
  float v72; // s9
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v76; // w8
  __int64 v77; // x22
  int32_t v78; // w28
  int v79; // w8
  int v80; // w8
  float v81; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3417D & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, item);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BD3458(&DataManager_TypeInfo, v8);
    sub_1BD3458(&LocalizationManager_TypeInfo, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_12020/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/, v12);
    sub_1BD3458(&StringLiteral_12018/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, v13);
    sub_1BD3458(&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, v14);
    sub_1BD3458(&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v15);
    byte_4B3417D = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_134;
      UILabel__set_text(explanationLabel, levelButtonBase, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_134;
      v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v23 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v23 )
        goto LABEL_134;
      UILabel__set_text(v23, levelButtonBase, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_134;
      v22 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
      v26 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v26 )
        goto LABEL_134;
      UILabel__set_text(v26, levelButtonBase, 0LL);
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
        v37 = max_length / 3;
        if ( max_length != 3 * (max_length / 3) )
          ++v37;
        if ( v37 < 3 )
          v38 = 1;
        else
          v38 = v37 - 1;
        v39 = v38 * buttonPitch;
        if ( (_DWORD)servantLeaderInfo )
          transformedSubHeight = v39 + 32;
        else
          transformedSubHeight = v39;
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
          v41 = -transformNameAddHeight;
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
          v41 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_67;
        v44 = item->fields.userSvtEntity;
        if ( !v44 || UserServantEntity__IsLeave(v44, 0LL) )
          goto LABEL_67;
        levelButtonBase = (System_String_o *)item->fields.userSvtEntity;
        if ( !levelButtonBase )
          goto LABEL_134;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)levelButtonBase, 0LL);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_67:
          v46 = 0;
          goto LABEL_68;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          v76 = commandCardParam->max_length;
          if ( v76 < 1 )
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
            v80 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v81 = (float)-(v80 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v81, 0LL);
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
            GameObjectExtensions__SetLocalPositionY(gameObject, v81, 0LL);
            v46 = 1;
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
              v48 = this->fields.transformNameLabel;
              levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0LL);
              if ( !v48 )
                goto LABEL_134;
              UILabel__set_text(v48, levelButtonBase, 0LL);
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
                v49 = 1;
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
            v49 = 0;
LABEL_80:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, v49, 0LL);
            x = this->fields.baseSize.fields.x;
            y = this->fields.baseSize.fields.y;
            z = this->fields.baseSize.fields.z;
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v54 = y + (float)transformedSubHeight;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
            {
              levelButtonBase = (System_String_o *)this->fields.baseCollider;
              if ( !levelButtonBase )
                goto LABEL_134;
              v84.fields.x = x;
              v84.fields.y = v54;
              v84.fields.z = z;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)levelButtonBase, v84, 0LL);
            }
            levelButtonBase = (System_String_o *)this->fields.baseSprite;
            if ( levelButtonBase )
            {
              v55 = x == INFINITY ? 0x80000000 : (int)x;
              UIWidget__set_width((UIWidget_o *)levelButtonBase, v55, 0LL);
              levelButtonBase = (System_String_o *)this->fields.baseSprite;
              if ( levelButtonBase )
              {
                v56 = v54 == INFINITY ? 0x80000000 : (int)v54;
                UIWidget__set_height((UIWidget_o *)levelButtonBase, v56, 0LL);
                levelButtonBase = (System_String_o *)this->fields.titleSprite;
                v57 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                if ( levelButtonBase )
                {
                  v58 = this->fields.titleBasePosition.fields.x;
                  v59 = this->fields.titleBasePosition.fields.y;
                  v60 = this->fields.titleBasePosition.fields.z;
                  levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)levelButtonBase,
                                                         0LL);
                  if ( levelButtonBase )
                  {
                    v61 = v57 >> 1;
                    v85.fields.y = v59 + (float)v61;
                    v85.fields.x = v58;
                    v85.fields.z = v60;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v85, 0LL);
                    levelButtonBase = (System_String_o *)this->fields.cardBase;
                    if ( levelButtonBase )
                    {
                      v62 = this->fields.cardBasePosition.fields.x;
                      v63 = this->fields.cardBasePosition.fields.y;
                      v64 = this->fields.cardBasePosition.fields.z;
                      levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)levelButtonBase,
                                                             0LL);
                      if ( levelButtonBase )
                      {
                        v65 = (float)(v61 + v41);
                        v86.fields.y = v63 + v65;
                        v86.fields.x = v62;
                        v86.fields.z = v64;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v86, 0LL);
                        levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
                        if ( levelButtonBase )
                        {
                          v66 = this->fields.levelButtonBasePosition.fields.x;
                          v67 = this->fields.levelButtonBasePosition.fields.y;
                          v68 = this->fields.levelButtonBasePosition.fields.z;
                          levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)levelButtonBase,
                                                                 0LL);
                          if ( levelButtonBase )
                          {
                            v87.fields.y = v67 + v65;
                            v87.fields.x = v66;
                            v87.fields.z = v68;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)levelButtonBase,
                              v87,
                              0LL);
                            v69 = this->fields.explanationBasePosition.fields.y - (float)v61;
                            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                            if ( (_DWORD)servantLeaderInfo )
                              v69 = v69 + 16.0;
                            v70 = v46 ? v69 + 50.0 : v69;
                            if ( levelButtonBase )
                            {
                              v71 = this->fields.explanationBasePosition.fields.x;
                              v72 = this->fields.explanationBasePosition.fields.z;
                              levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                                     0LL);
                              if ( levelButtonBase )
                              {
                                v88.fields.x = v71;
                                v88.fields.y = v70;
                                v88.fields.z = v72;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)levelButtonBase,
                                  v88,
                                  0LL);
                                ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v73);
                                ServantStatusListViewItemDrawCommand__SetupMask(this, item, v46, v74);
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
            sub_1BD36B4(levelButtonBase, v19);
          }
          v77 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v77 >= v76 )
              sub_1BD36BC(IsEventJoin, v19);
            IsEventJoin = BalanceConfig_TypeInfo;
            v78 = commandCardParam->m_Items[v77 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v78 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            v76 = commandCardParam->max_length;
            if ( (int)++v77 >= v76 )
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
          v79 = transformedSubHeight;
        else
          v79 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v79 >> 1), 0LL);
        goto LABEL_125;
      }
      v27 = item->fields.servantLeaderInfo;
      if ( !v27 )
        goto LABEL_134;
      v22 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v83.fields.currentCryptoKey = v22;
    *(_QWORD *)&v83.fields.fakeValue = v21;
    levelButtonBase = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v83, 0LL);
    if ( !(_DWORD)levelButtonBase )
      goto LABEL_33;
    if ( !Master_object )
      goto LABEL_134;
    v28 = (int)levelButtonBase;
    levelButtonBase = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                           (ServantLimitImageMaster_o *)Master_object,
                                           (int32_t)levelButtonBase,
                                           3,
                                           0LL);
    if ( ((unsigned __int8)levelButtonBase & 1) != 0 )
    {
      levelButtonBase = ServantLimitImageMaster__GetServantStatusExplanationText(
                          (ServantLimitImageMaster_o *)Master_object,
                          (System_String_o *)StringLiteral_12020/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                          v28,
                          0LL);
      servantLeaderInfo = this->fields.explanationLabel;
      if ( !servantLeaderInfo )
        goto LABEL_134;
      mText = servantLeaderInfo->fields.mText;
      v30 = levelButtonBase;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v28,
                                                      3,
                                                      0LL);
      v32 = System_String__Format(v30, LimitCountSealedServantName, 0LL);
      v33 = System_String__Concat_62525248(mText, v32, 0LL);
      UILabel__set_text(servantLeaderInfo, v33, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  bool v16; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  __int64 v18; // x1
  int maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v21; // x0
  float *static_fields; // x8
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s11
  struct LocalizationManager_StaticFields *v27; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  ServantStatusListViewItemDrawCommand_o *v32; // x25
  int v33; // w8
  _BOOL4 v34; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v36; // x26
  int v37; // w28
  System_String_o *v38; // x27
  float v39; // s3
  float v40; // s2
  float v41; // s1
  float v42; // s0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v46; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v49; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v51; // x27
  bool IsServantLimitCountSeal; // w28
  ServantStatusListViewItemDrawCommand_o *v53; // x1
  bool v54; // nf
  struct UICommonButton_array *v55; // x8
  __int64 v56; // x22
  il2cpp_array_size_t v57; // w28
  signed int max_length; // w27
  _BOOL4 v59; // w24
  struct UIRangeLabel_array *v60; // x9
  UIRangeLabel_o *v61; // x25
  int v62; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *monitor; // x26
  float v65; // s3
  float v66; // s2
  float v67; // s1
  float v68; // s0
  struct UISprite_array *v69; // x8
  __int64 *v70; // x8
  struct UICommonButton_array *v71; // x8
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-C0h]
  int32_t v73; // [xsp+8h] [xbp-B8h]
  struct System_Int32_array *v75; // [xsp+10h] [xbp-B0h]
  bool v76; // [xsp+18h] [xbp-A8h]
  unsigned int v77; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_4B34180 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1BD3458(&LocalizationManager_TypeInfo, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BD3458(&StringLiteral_8388/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_1BD3458(&StringLiteral_12042/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_1BD3458(&StringLiteral_17678/*"btn_bg_20"*/, v12);
    sub_1BD3458(&StringLiteral_12043/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_1BD3458(&StringLiteral_1/*""*/, v14);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1BD3458(&StringLiteral_17679/*"btn_bg_21"*/, v15);
    byte_4B34180 = 1;
  }
  if ( !v4 )
    goto LABEL_136;
  if ( !v4->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( v5->fields.isStart && !v4->fields.isConvertOverwriteImage )
    {
      if ( v4->fields.userSvtEntity )
        v16 = 1;
      else
        v16 = v4->fields.userSvtCollectionEntity != 0LL;
      v76 = v16;
    }
    else
    {
      v76 = 0;
    }
    ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                              v4,
                                              0LL);
    maxCommandCardLimitCount = v4->fields.maxCommandCardLimitCount;
    commandCardSelectList = v4->fields.commandCardSelectList;
    v73 = ConvertOverwriteCommandCardLimitCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B320B5 )
    {
      sub_1BD3458(&LocalizationManager_TypeInfo, v18);
      byte_4B320B5 = 1;
    }
    v21 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v21->static_fields;
    v23 = static_fields[20];
    v24 = static_fields[21];
    v25 = static_fields[22];
    v26 = static_fields[23];
    if ( !byte_4B320B6 )
    {
      sub_1BD3458(&LocalizationManager_TypeInfo, v18);
      v21 = LocalizationManager_TypeInfo;
      byte_4B320B6 = 1;
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = LocalizationManager_TypeInfo;
    }
    v27 = v21->static_fields;
    r = v27->selectEffectColor.fields.r;
    g = v27->selectEffectColor.fields.g;
    b = v27->selectEffectColor.fields.b;
    a = v27->selectEffectColor.fields.a;
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v77 = 0;
    v32 = this;
    v33 = 0;
    while ( 1 )
    {
      if ( v33 <= maxCommandCardLimitCount )
      {
        if ( !commandCardSelectList )
          goto LABEL_136;
        if ( v33 >= commandCardSelectList->max_length )
          goto LABEL_137;
        v34 = commandCardSelectList->m_Items[v33 + 1] == v73;
      }
      else
      {
        v34 = 0;
      }
      battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
      if ( !battleCharaLevelTitleRangeLabelList )
        goto LABEL_136;
      if ( v33 >= battleCharaLevelTitleRangeLabelList->max_length )
        goto LABEL_137;
      v36 = battleCharaLevelTitleRangeLabelList->m_Items[v33];
      v37 = v76 && v33 <= maxCommandCardLimitCount;
      if ( v33 > maxCommandCardLimitCount
        && (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(v4, 0LL),
            ((unsigned __int8)this & 1) != 0) )
      {
        if ( !v36 )
          goto LABEL_136;
        v78.fields.r = v23;
        v78.fields.g = v24;
        v78.fields.b = v25;
        v78.fields.a = v26;
        UIRangeLabel__set_effectColor(v36, v78, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v38 = (System_String_o *)StringLiteral_12043/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
      }
      else
      {
        v39 = v26;
        v40 = v25;
        v41 = v24;
        v42 = v23;
        if ( (v34 & v37) != 0 )
        {
          v39 = a;
          v40 = b;
          v41 = g;
          v42 = r;
        }
        if ( !v36 )
          goto LABEL_136;
        UIRangeLabel__set_effectColor(v36, *(UnityEngine_Color_o *)&v42, 0LL);
        v43 = System_Int32__ToString((int32_t)&v77, 0LL);
        v38 = System_String__Concat_62525248((System_String_o *)StringLiteral_12042/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v43, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = LocalizationManager__Get(v38, 0LL);
      UIRangeLabel__Set(v36, v44, 0LL, 1, 0, 0LL);
      battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
      if ( !battleCharaLevelSpriteList )
        goto LABEL_136;
      if ( v77 >= battleCharaLevelSpriteList->max_length )
LABEL_137:
        sub_1BD36BC(this, item);
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v77];
      if ( !this )
        goto LABEL_136;
      v46 = &StringLiteral_17678/*"btn_bg_20"*/;
      if ( v34 )
        v46 = &StringLiteral_17679/*"btn_bg_21"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v46, 0LL);
      battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
      if ( !battleCharaLevelButtonList )
        goto LABEL_136;
      if ( v77 >= battleCharaLevelButtonList->max_length )
        goto LABEL_137;
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v77];
      if ( (v34 & v37) != 0 )
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v37 == 0 || isInit, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetButtonEnable((UICommonButton_o *)this, v37 & ~v34, v37 == 0 || isInit, 0LL);
      }
      limitCountSealLabel = v5->fields.limitCountSealLabel;
      if ( limitCountSealLabel )
      {
        if ( v77 >= limitCountSealLabel->max_length )
          goto LABEL_137;
        v49 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v77];
      }
      else
      {
        v49 = 0LL;
      }
      limitCountSealObjList = v5->fields.limitCountSealObjList;
      if ( limitCountSealObjList )
      {
        if ( v77 >= limitCountSealObjList->max_length )
          goto LABEL_137;
        v51 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v77];
      }
      else
      {
        v51 = 0LL;
      }
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( !commandCardSelectList )
        goto LABEL_136;
      if ( v77 >= commandCardSelectList->max_length )
        goto LABEL_137;
      if ( !v32 )
        goto LABEL_136;
      IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                  (ServantLimitImageMaster_o *)v32,
                                  (int32_t)this,
                                  commandCardSelectList->m_Items[v77 + 1] + 1,
                                  0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
      if ( IsServantLimitCountSeal )
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v51, 1, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8388/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0LL);
        if ( !v49 )
          goto LABEL_136;
        v53 = this;
      }
      else
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v51, 0, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !v49 )
          goto LABEL_136;
        v53 = (ServantStatusListViewItemDrawCommand_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)v49, (System_String_o *)v53, 0LL);
LABEL_89:
      v54 = (int)(v77 - 2) < 0;
      v33 = ++v77;
      if ( v54 == __OFSUB__(v77, 3) )
      {
        v55 = v5->fields.battleCharaLevelButtonList;
        if ( v55 )
        {
          v56 = 11LL;
          v75 = commandCardSelectList;
          while ( 1 )
          {
            v57 = v56 - 8;
            if ( (int)v56 - 8 >= (signed int)v55->max_length )
              return;
            max_length = commandCardSelectList->max_length;
            if ( (int)v57 >= max_length )
            {
              v59 = 0;
            }
            else
            {
              if ( v57 >= max_length )
                goto LABEL_137;
              v59 = *((_DWORD *)&commandCardSelectList->obj.klass + v56) == v73;
            }
            v60 = v5->fields.battleCharaLevelTitleRangeLabelList;
            if ( !v60 )
              goto LABEL_136;
            if ( v57 >= v60->max_length )
              goto LABEL_137;
            v61 = v60->m_Items[v57];
            v62 = v76 && (int)v57 < max_length;
            if ( (int)v57 >= max_length )
            {
              if ( !v61 )
                goto LABEL_136;
              UIRangeLabel__Clear(v61, 0LL);
            }
            else
            {
              this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
              if ( v57 >= v75->max_length )
                goto LABEL_137;
              item = (ServantStatusListViewItem_o *)(unsigned int)this;
              this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_136;
              Entity = ServantCostumeMaster__GetEntity(
                         (ServantCostumeMaster_o *)MasterData_object,
                         (int32_t)item,
                         v75->m_Items[v57 + 1],
                         0LL);
              if ( Entity )
              {
                this = (ServantStatusListViewItemDrawCommand_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
                monitor = (System_String_o *)this;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                if ( !byte_4B32906 )
                {
                  sub_1BD3458(&LocalizationManager_TypeInfo, item);
                  byte_4B32906 = 1;
                }
                this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                }
                monitor = (System_String_o *)this->fields.engraveCodeObject[1].monitor;
              }
              v65 = v26;
              v66 = v25;
              v67 = v24;
              v68 = v23;
              if ( (v59 & v62) != 0 )
              {
                v65 = a;
                v66 = b;
                v67 = g;
                v68 = r;
              }
              if ( !v61 )
                goto LABEL_136;
              UIRangeLabel__set_effectColor(v61, *(UnityEngine_Color_o *)&v68, 0LL);
              UIRangeLabel__Set(v61, monitor, 0LL, 1, 0, 0LL);
            }
            v69 = v5->fields.battleCharaLevelSpriteList;
            if ( !v69 )
              goto LABEL_136;
            if ( v57 >= v69->max_length )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v69->m_Items[v57];
            if ( !this )
              goto LABEL_136;
            v70 = &StringLiteral_17678/*"btn_bg_20"*/;
            if ( v59 )
              v70 = &StringLiteral_17679/*"btn_bg_21"*/;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v70, 0LL);
            v71 = v5->fields.battleCharaLevelButtonList;
            if ( !v71 )
              goto LABEL_136;
            if ( v57 >= v71->max_length )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v71->m_Items[v57];
            if ( (v59 & v62) != 0 )
              break;
            if ( (int)v57 < max_length )
            {
              if ( !this )
                goto LABEL_136;
              UICommonButton__SetButtonEnable((UICommonButton_o *)this, v62 & ~v59, v62 == 0 || isInit, 0LL);
              goto LABEL_130;
            }
            if ( !this )
              goto LABEL_136;
            this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
            commandCardSelectList = v75;
            if ( !this )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_131:
            v55 = v5->fields.battleCharaLevelButtonList;
            ++v56;
            if ( !v55 )
              goto LABEL_136;
          }
          if ( !this )
            goto LABEL_136;
          UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v62 == 0 || isInit, 0LL);
LABEL_130:
          commandCardSelectList = v75;
          goto LABEL_131;
        }
LABEL_136:
        sub_1BD36B4(this, item);
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  ServantStatusListViewItemDrawCommand_o *v11; // x22
  float y; // s0
  System_String_o *Empty; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B34181 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, item);
    sub_1BD3458(&string_TypeInfo, v7);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1BD3458(&StringLiteral_12063/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v8);
    byte_4B34181 = 1;
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
    v11 = this;
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
    v11 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_35;
    v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = v16.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v11, y, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_35;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12063/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL);
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
    sub_1BD36B4(this, item);
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