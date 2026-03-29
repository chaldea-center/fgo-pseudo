void ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UISprite_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2DB67 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&UISprite___TypeInfo);
    byte_4D2DB67 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UISprite_array *)sub_1C93B7C(UISprite___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeSpriteList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  *(_QWORD *)&this->fields.transformNameAddHeight = 0xFFFFFF9C00000022LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawCommand__Awake(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  ServantStatusListViewItemDrawCommand_o *v3; // x19
  int32_t buttonPitch; // w20
  struct UISprite_array *v5; // x8
  float v6; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v11; // cc
  unsigned int v12; // w8
  int v13; // w8
  int v14; // w8
  float v15; // s8
  float y; // s1
  float v17; // s1
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v19; // 0:kr34_12.12
  UnityEngine_Vector3_o v20; // 0:kr40_12.12
  UnityEngine_Vector3_o v21; // 0:kr54_12.12

  battleCharaLevelSpriteList = this->fields.battleCharaLevelSpriteList;
  if ( !battleCharaLevelSpriteList )
    goto LABEL_30;
  v3 = this;
  if ( SLODWORD(battleCharaLevelSpriteList->max_length) > 3 )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_30;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !this )
      goto LABEL_30;
    y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
    v5 = v3->fields.battleCharaLevelSpriteList;
    if ( !v5 )
      goto LABEL_30;
    if ( LODWORD(v5->max_length) <= 3 )
      sub_1C93D34(this);
    if ( (this = (ServantStatusListViewItemDrawCommand_o *)v5->m_Items[3]) == 0
      || (v6 = y,
          (this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0)
      || ((v17 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y)),
           battleCharaLevelSpriteList = v3->fields.battleCharaLevelSpriteList,
           (float)(v6 - v17) != INFINITY)
        ? (buttonPitch = (int)(float)(v6 - v17))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !battleCharaLevelSpriteList) )
    {
LABEL_30:
      sub_1C93D2C(this, method);
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
  v11 = max_length < 9;
  v12 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.titleSprite;
  v13 = v11 ? -1 : v12 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v13 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v14 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v15 = (float)(v14 >> 1);
  v3->fields.titleBasePosition.fields.x = localPosition.fields.x;
  v3->fields.titleBasePosition.fields.z = localPosition.fields.z;
  v3->fields.titleBasePosition.fields.y = localPosition.fields.y - v15;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.levelButtonBase;
  v3->fields.cardBasePosition.fields.x = v19.fields.x;
  v3->fields.cardBasePosition.fields.z = v19.fields.z;
  v3->fields.cardBasePosition.fields.y = v19.fields.y - v15;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v20.fields.x;
  v3->fields.levelButtonBasePosition.fields.z = v20.fields.z;
  v3->fields.levelButtonBasePosition.fields.y = v20.fields.y - v15;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v21.fields.x;
  v3->fields.explanationBasePosition.fields.z = v21.fields.z;
  v3->fields.explanationBasePosition.fields.y = v21.fields.y + v15;
}


int32_t ServantStatusListViewItemDrawCommand__GetKind(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  return 8;
}


void ServantStatusListViewItemDrawCommand__ModifyCommandCard(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isStart = 1;
  ServantStatusListViewItemDrawCommand__RefreshCommandCard(this, item, method);
}


void ServantStatusListViewItemDrawCommand__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4D2DB63 & 1) == 0 )
  {
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    byte_4D2DB63 = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4D2C259 )
    {
      sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
      byte_4D2C259 = 1;
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


void ServantStatusListViewItemDrawCommand__RefreshCommandCard(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusListViewItem_o *v4; // x19
  ServantStatusListViewItemDrawCommand_o *v5; // x20
  UnityEngine_Object_c **v6; // x29
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  unsigned int v8; // w27
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v10; // x22
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *MasterData_object; // x23
  GrandQuestFolderBoardItem_c *klass; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  unsigned int max_length; // w9
  int32_t v17; // w21
  struct System_Int32_array *commandCardParam; // x8
  unsigned int v19; // w9
  int32_t v20; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v22; // x22
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct UnityEngine_GameObject_array *v30; // x8
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Int32_array *v44; // x1
  struct System_Int32_array **p_commandCodeIdList; // x22
  struct System_Int32_array *v46; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Int32_array *CommandCardIds; // x28
  int32_t v55; // w21
  int32_t v56; // w21
  struct UnityEngine_GameObject_array *v57; // x8
  unsigned __int64 v58; // x23
  unsigned __int64 max_length_low; // x8
  int32_t v60; // w25
  struct System_Int32_array *v61; // x8
  unsigned __int64 v62; // x9
  int32_t v63; // w24
  struct System_Int32_array *v64; // x8
  unsigned __int64 v65; // x9
  int32_t v66; // w9
  Il2CppObject *commandCardPrefab; // x21
  ServantStatusListViewItemDrawCommand_o *v68; // x28
  UnityEngine_Transform_o *transform; // x26
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  struct UnityEngine_GameObject_array *v72; // x8
  ServantStatusListViewItem_o *v73; // x27
  UnityEngine_Object_c **v74; // x19
  ServantStatusListViewItemDrawCommand_o *v75; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  unsigned int *commandCardDataList; // x29
  BattleCommandData_o *v84; // x22
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  unsigned int *v91; // x0
  GrandQuestFolderBoardItem_c *v92; // x8
  struct UnityEngine_GameObject_o *clickEventObject; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  unsigned int *v100; // x21
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  unsigned int *v107; // x0
  struct UnityEngine_GameObject_array *v108; // x8
  int32_t layer; // w21
  struct UISprite_array *v110; // x8
  UIWidget_o *v111; // x8
  struct UISprite_array *v112; // x8
  UISprite_o *v113; // x21
  struct UISprite_array *v114; // x8
  __int64 v115; // x0
  System_Int32_array *v116; // [xsp+0h] [xbp-B0h]
  int32_t v117; // [xsp+18h] [xbp-98h]
  int32_t svtId; // [xsp+1Ch] [xbp-94h]
  GrandQuestFolderBoardItem_o *p_commandCardDataList; // [xsp+20h] [xbp-90h]
  int32_t powerUpValue; // [xsp+38h] [xbp-78h]
  int v121; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  v4 = item;
  v5 = this;
  if ( (byte_4D2DB64 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BattleCommandComponent___TypeInfo);
    sub_1C93AD4(&BattleCommandData___TypeInfo);
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_15233/*"Unlit/Transparent Colored"*/);
    sub_1C93AD4(&StringLiteral_4603/*"CommandCard("*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2DB64 = 1;
  }
  v121 = 0;
  v6 = &UnityEngine_Object_TypeInfo;
  p_commandCardDataList = (GrandQuestFolderBoardItem_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v8 = 0;
      while ( (signed int)v8 < SLODWORD(commandCardBaseList->max_length) )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_109;
        if ( v8 >= LODWORD(commandCardComponentList->max_length) )
          goto LABEL_111;
        if ( !v4 )
          goto LABEL_109;
        v10 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v8];
        if ( !v4->fields._IsTransformed_k__BackingField )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                                      v4,
                                                      0);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                ConvertOverwriteCommandCardLimitCount,
                                                0);
            this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_109;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0);
            if ( !MasterData_object )
              goto LABEL_109;
            this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                               (ServantLimitImageMaster_o *)MasterData_object,
                                                               (int32_t)this,
                                                               LimitCountByImageLimitCostumeIn,
                                                               0);
            klass = p_commandCardDataList->klass;
            if ( !p_commandCardDataList->klass )
              goto LABEL_109;
            if ( v8 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_111;
            item = (ServantStatusListViewItem_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v8);
            if ( !item )
              goto LABEL_109;
            LODWORD(item->fields.partyItem) = (_DWORD)this;
            if ( !v10 )
              goto LABEL_109;
            BattleCommandComponent__setData(
              (BattleCommandComponent_o *)v10,
              (BattleCommandData_o *)item,
              0,
              0,
              1,
              0,
              1,
              0);
            BattleCommandComponent__updateView((BattleCommandComponent_o *)v10, 1, 0, 1, 0, 0, 0);
          }
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v8 < (int)max_length) )
        {
          if ( v8 >= max_length )
            goto LABEL_111;
          v17 = commandCodeIdList->m_Items[v8];
        }
        else
        {
          v17 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v19 = commandCardParam->max_length, (int)v8 < (int)v19) )
        {
          if ( v8 >= v19 )
            goto LABEL_111;
          v20 = commandCardParam->m_Items[v8];
        }
        else
        {
          v20 = 0;
        }
        if ( v10 )
        {
          BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v10, v20, 2, 1, 0);
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v10, v20, 0);
          commandCodeSpriteList = v5->fields.commandCodeSpriteList;
          if ( commandCodeSpriteList )
          {
            if ( v8 >= LODWORD(commandCodeSpriteList->max_length) )
              goto LABEL_111;
            v22 = commandCodeSpriteList->m_Items[v8];
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v22, v17, 0);
            commandCardBaseList = v5->fields.commandCardBaseList;
            ++v8;
            if ( commandCardBaseList )
              continue;
          }
        }
        goto LABEL_109;
      }
      goto LABEL_110;
    }
LABEL_109:
    sub_1C93D2C(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_109;
  v23 = sub_1C93B7C(BattleCommandData___TypeInfo, LODWORD(commandCardBaseList->max_length));
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v23;
  sub_1C93A78(p_commandCardDataList, v23, v24, v25, v26, v27, v28, v29);
  v30 = v5->fields.commandCardBaseList;
  if ( !v30 )
    goto LABEL_109;
  v31 = sub_1C93B7C(BattleCommandComponent___TypeInfo, LODWORD(v30->max_length));
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.commandCardComponentList, v31, v32, v33, v34, v35, v36, v37);
  if ( !v4 )
    goto LABEL_109;
  v44 = v4->fields.commandCodeIdList;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = v44;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.commandCodeIdList, (int32_t)v44, v38, v39, v40, v41, v42, v43);
  v46 = v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = v46;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.commandCardParam, (int32_t)v46, v48, v49, v50, v51, v52, v53);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0);
  svtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0);
  v55 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  v56 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v55, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     (ServantLimitImageMaster_o *)this,
                                                     svtId,
                                                     v56,
                                                     0);
  v57 = v5->fields.commandCardBaseList;
  v117 = (int)this;
  if ( !v57 )
    goto LABEL_109;
  v58 = 0;
  v116 = CommandCardIds;
  while ( (__int64)v58 < SLODWORD(v57->max_length) )
  {
    if ( CommandCardIds && (max_length_low = LODWORD(CommandCardIds->max_length), (__int64)v58 < (int)max_length_low) )
    {
      if ( v58 >= max_length_low )
        goto LABEL_111;
      v60 = CommandCardIds->m_Items[v58];
    }
    else
    {
      v60 = 0;
    }
    v61 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v62 = LODWORD(v61->max_length), (__int64)v58 < (int)v62) )
    {
      if ( v58 >= v62 )
        goto LABEL_111;
      v63 = v61->m_Items[v58];
    }
    else
    {
      v63 = 0;
    }
    v64 = *p_commandCardParam;
    if ( *p_commandCardParam && (v65 = LODWORD(v64->max_length), (__int64)v58 < (int)v65) )
    {
      if ( v58 >= v65 )
        goto LABEL_111;
      v66 = v64->m_Items[v58];
    }
    else
    {
      v66 = 0;
    }
    if ( (unsigned int)(v60 - 1) > 2 )
    {
      v114 = v5->fields.commandCodeSpriteList;
      if ( !v114 )
        goto LABEL_109;
      if ( v58 >= LODWORD(v114->max_length) )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v114->m_Items[v58];
      if ( !this )
        goto LABEL_109;
      UISprite__set_spriteName((UISprite_o *)this, 0, 0);
      ++v58;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      powerUpValue = v66;
      if ( !(*v6)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v6);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_109;
      v68 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v68,
                                                         0);
      if ( !this )
        goto LABEL_109;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      v121 = v58 + 1;
      v70 = System_Int32__ToString((int32_t)&v121, 0);
      v71 = System_String__Concat_64463988(
              (System_String_o *)StringLiteral_4603/*"CommandCard("*/,
              v70,
              (System_String_o *)StringLiteral_757/*")"*/,
              0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v68, v71, 0);
      v72 = v5->fields.commandCardBaseList;
      if ( !v72 )
        goto LABEL_109;
      if ( v58 >= LODWORD(v72->max_length) )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v72->m_Items[v58];
      if ( !this )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
      if ( !transform )
        goto LABEL_109;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      v73 = v4;
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !byte_4D2A13F )
      {
        sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
        byte_4D2A13F = 1;
      }
      v74 = v6;
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      UnityEngine_Transform__set_localScale(transform, localScale, 0);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v68,
        (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v68,
                                                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_109;
      v75 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      v75[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)gameObject;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v75[1].fields.baseCollider,
        (int32_t)gameObject,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v84 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_47371016(v84, v60, svtId, v117, 0, -1, 0);
      if ( !commandCardDataList )
        goto LABEL_109;
      if ( v84 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_1C93C10(
                                                           v84,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_112:
          v115 = sub_1C93D50();
          sub_1C93BFC(v115, 0);
        }
      }
      if ( v58 >= commandCardDataList[6] )
        goto LABEL_111;
      v91 = &commandCardDataList[2 * v58];
      *((_QWORD *)v91 + 4) = v84;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v91 + 8), (int32_t)v84, v85, v86, v87, v88, v89, v90);
      v92 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_109;
      if ( v58 >= LODWORD(v92->_1.namespaze) )
        goto LABEL_111;
      item = (ServantStatusListViewItem_o *)*((_QWORD *)&v92->_1.byval_arg.data + v58);
      if ( !item )
        goto LABEL_109;
      v6 = v74;
      v4 = v73;
      *(&item->fields.memberNum + 1) = v58 + 1;
      LODWORD(item->fields.servantLeaderInfo) = v58;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v75, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v75, (System_String_o *)StringLiteral_15233/*"Unlit/Transparent Colored"*/, 0);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v75, 1, 0, 1, 0, 0, 0);
      clickEventObject = v5->fields.clickEventObject;
      v75[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)clickEventObject;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v75[1].fields.baseCollider,
        (int32_t)clickEventObject,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      v100 = (unsigned int *)v5->fields.commandCardComponentList;
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( !v100 )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_1C93C10(v75, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
      if ( !this )
        goto LABEL_112;
      if ( v58 >= v100[6] )
        goto LABEL_111;
      v107 = &v100[2 * v58];
      *((_QWORD *)v107 + 4) = v75;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v107 + 8), (int32_t)v75, v101, v102, v103, v104, v105, v106);
      v108 = v5->fields.commandCardBaseList;
      if ( !v108 )
        goto LABEL_109;
      if ( v58 >= LODWORD(v108->max_length) )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v108->m_Items[v58];
      if ( !this )
        goto LABEL_109;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v68, layer, 0);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v75, powerUpValue, 2, 1, 0);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v75, powerUpValue, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v75,
                                                         0);
      CommandCardIds = v116;
      if ( (_DWORD)this != -1 )
      {
        v110 = v5->fields.commandCodeSpriteList;
        if ( !v110 )
          goto LABEL_109;
        if ( v58 >= LODWORD(v110->max_length) )
          goto LABEL_111;
        v111 = (UIWidget_o *)v110->m_Items[v58];
        if ( !v111 )
          goto LABEL_109;
        UIWidget__set_depth(v111, (_DWORD)this - 1, 0);
      }
      v112 = v5->fields.commandCodeSpriteList;
      if ( !v112 )
        goto LABEL_109;
      if ( v58 >= LODWORD(v112->max_length) )
LABEL_111:
        sub_1C93D34(this);
      v113 = v112->m_Items[v58];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v113, v63, 0);
      ++v58;
    }
    v57 = v5->fields.commandCardBaseList;
    if ( !v57 )
      goto LABEL_109;
  }
LABEL_110:
  ServantStatusListViewItemDrawCommand__SetupBattleButton(v5, v4, 0, v3);
}


void ServantStatusListViewItemDrawCommand__SetItem(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *levelButtonBase; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  UILabel_o *v14; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v17; // x22
  struct ServantLeaderInfo_o *v18; // x8
  int32_t v19; // w22
  System_String_o *mText; // x25
  System_String_o *v21; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w9
  int32_t buttonPitch; // w8
  int v28; // w10
  int v29; // w10
  int v30; // w8
  int32_t transformedSubHeight; // w24
  int v32; // w25
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *v35; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v37; // w21
  _BOOL4 IsTransformServant_k__BackingField; // w22
  UILabel_o *v39; // x22
  bool v40; // w1
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v45; // s8
  int32_t v46; // w1
  int32_t v47; // w1
  int v48; // w22
  float v49; // s8
  float v50; // s11
  float v51; // s9
  int v52; // w22
  float v53; // s8
  float v54; // s12
  float v55; // s9
  float v56; // s11
  float v57; // s8
  float v58; // s12
  float v59; // s9
  float v60; // s0
  float v61; // s8
  float v62; // s10
  float v63; // s9
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v67; // w8
  __int64 v68; // x22
  int32_t v69; // w28
  int v70; // w8
  int v71; // w8
  float v72; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2DB62 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_12003/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/);
    sub_1C93AD4(&StringLiteral_12001/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/);
    sub_1C93AD4(&StringLiteral_12002/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/);
    sub_1C93AD4(&StringLiteral_12000/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/);
    byte_4D2DB62 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0);
      if ( !explanationLabel )
        goto LABEL_136;
      UILabel__set_text(explanationLabel, levelButtonBase, 0);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_136;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v14 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0);
      if ( !v14 )
        goto LABEL_136;
      UILabel__set_text(v14, levelButtonBase, 0);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_136;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
      v17 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0);
      if ( !v17 )
        goto LABEL_136;
      UILabel__set_text(v17, levelButtonBase, 0);
      if ( !servantLeaderInfo )
      {
LABEL_34:
        commandCardSelectList = item->fields.commandCardSelectList;
        if ( !commandCardSelectList )
          goto LABEL_136;
        max_length = commandCardSelectList->max_length;
        if ( max_length < 4 )
          buttonPitch = 0;
        else
          buttonPitch = this->fields.buttonPitch;
        v28 = max_length / 3;
        if ( max_length != 3 * (max_length / 3) )
          ++v28;
        if ( v28 < 3 )
          v29 = 1;
        else
          v29 = v28 - 1;
        v30 = v29 * buttonPitch;
        if ( (_DWORD)servantLeaderInfo )
          transformedSubHeight = v30 + 32;
        else
          transformedSubHeight = v30;
        if ( item->fields._IsTransformServant_k__BackingField )
        {
          levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
          if ( !levelButtonBase )
            goto LABEL_136;
          if ( item->fields._IsTransformed_k__BackingField )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_136;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
            transformedSubHeight = this->fields.transformedSubHeight;
            LODWORD(servantLeaderInfo) = 0;
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_136;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
          }
          levelButtonBase = (System_String_o *)this->fields.transformNameLabel;
          if ( !levelButtonBase )
            goto LABEL_136;
          UIWidget__set_color((UIWidget_o *)levelButtonBase, item->fields._TransformNameLabelColor_k__BackingField, 0);
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_136;
          UIWidget__set_color((UIWidget_o *)levelButtonBase, item->fields._TransformNameSpriteColor_k__BackingField, 0);
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_136;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0);
          if ( !levelButtonBase )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
          transformNameLabel = this->fields.transformNameLabel;
          levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0);
          if ( !transformNameLabel )
            goto LABEL_136;
          UILabel__set_text(transformNameLabel, levelButtonBase, 0);
          transformNameAddHeight = this->fields.transformNameAddHeight;
          transformedSubHeight += transformNameAddHeight;
          v32 = -transformNameAddHeight;
        }
        else
        {
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_136;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0);
          if ( !levelButtonBase )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
          v32 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_69;
        v35 = item->fields.userSvtEntity;
        if ( !v35 || UserServantEntity__IsLeave(v35, 0) )
          goto LABEL_69;
        levelButtonBase = (System_String_o *)item->fields.userSvtEntity;
        if ( !levelButtonBase )
          goto LABEL_136;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)levelButtonBase, 0);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_69:
          v37 = 0;
          goto LABEL_70;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          v67 = commandCardParam->max_length;
          if ( v67 < 1 )
          {
LABEL_127:
            levelButtonBase = (System_String_o *)this->fields.engraveCodeObject;
            if ( !levelButtonBase )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
            levelButtonBase = (System_String_o *)this->fields.engraveCodeButton;
            if ( !levelButtonBase )
              goto LABEL_136;
            BYTE1(levelButtonBase[4].klass) = 1;
            UICommonButton__SetEnable(
              (UICommonButton_o *)levelButtonBase,
              item->fields._CanMoveCombine_k__BackingField,
              0);
            v71 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v72 = (float)-(v71 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v72, 0);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_136;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_136;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)levelButtonBase, 0);
            GameObjectExtensions__SetLocalPositionY(gameObject, v72, 0);
            v37 = 1;
LABEL_70:
            levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
            if ( !levelButtonBase )
              goto LABEL_136;
            IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_136;
            if ( IsTransformServant_k__BackingField )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
              v39 = this->fields.transformNameLabel;
              levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0);
              if ( !v39 )
                goto LABEL_136;
              UILabel__set_text(v39, levelButtonBase, 0);
              levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
              if ( !levelButtonBase )
                goto LABEL_136;
              if ( !item->fields._IsTransformed_k__BackingField )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
                levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                if ( !levelButtonBase )
                  goto LABEL_136;
                levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)levelButtonBase,
                                                       0);
                if ( !levelButtonBase )
                  goto LABEL_136;
                v40 = 1;
                goto LABEL_82;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
              levelButtonBase = (System_String_o *)this->fields.explanationLabel;
              if ( !levelButtonBase )
                goto LABEL_136;
              levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                     0);
              if ( !levelButtonBase )
                goto LABEL_136;
            }
            v40 = 0;
LABEL_82:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, v40, 0);
            x = this->fields.baseSize.fields.x;
            y = this->fields.baseSize.fields.y;
            z = this->fields.baseSize.fields.z;
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v45 = y + (float)transformedSubHeight;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
            {
              levelButtonBase = (System_String_o *)this->fields.baseCollider;
              if ( !levelButtonBase )
                goto LABEL_136;
              v75.fields.x = x;
              v75.fields.y = v45;
              v75.fields.z = z;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)levelButtonBase, v75, 0);
            }
            levelButtonBase = (System_String_o *)this->fields.baseSprite;
            if ( levelButtonBase )
            {
              v46 = x == INFINITY ? 0x80000000 : (int)x;
              UIWidget__set_width((UIWidget_o *)levelButtonBase, v46, 0);
              levelButtonBase = (System_String_o *)this->fields.baseSprite;
              if ( levelButtonBase )
              {
                v47 = v45 == INFINITY ? 0x80000000 : (int)v45;
                UIWidget__set_height((UIWidget_o *)levelButtonBase, v47, 0);
                levelButtonBase = (System_String_o *)this->fields.titleSprite;
                v48 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                if ( levelButtonBase )
                {
                  v49 = this->fields.titleBasePosition.fields.x;
                  v50 = this->fields.titleBasePosition.fields.y;
                  v51 = this->fields.titleBasePosition.fields.z;
                  levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)levelButtonBase,
                                                         0);
                  if ( levelButtonBase )
                  {
                    v52 = v48 >> 1;
                    v76.fields.y = v50 + (float)v52;
                    v76.fields.x = v49;
                    v76.fields.z = v51;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v76, 0);
                    levelButtonBase = (System_String_o *)this->fields.cardBase;
                    if ( levelButtonBase )
                    {
                      v53 = this->fields.cardBasePosition.fields.x;
                      v54 = this->fields.cardBasePosition.fields.y;
                      v55 = this->fields.cardBasePosition.fields.z;
                      levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)levelButtonBase,
                                                             0);
                      if ( levelButtonBase )
                      {
                        v56 = (float)(v52 + v32);
                        v77.fields.y = v54 + v56;
                        v77.fields.x = v53;
                        v77.fields.z = v55;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v77, 0);
                        levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
                        if ( levelButtonBase )
                        {
                          v57 = this->fields.levelButtonBasePosition.fields.x;
                          v58 = this->fields.levelButtonBasePosition.fields.y;
                          v59 = this->fields.levelButtonBasePosition.fields.z;
                          levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)levelButtonBase,
                                                                 0);
                          if ( levelButtonBase )
                          {
                            v78.fields.y = v58 + v56;
                            v78.fields.x = v57;
                            v78.fields.z = v59;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v78, 0);
                            v60 = this->fields.explanationBasePosition.fields.y - (float)v52;
                            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                            if ( (_DWORD)servantLeaderInfo )
                              v60 = v60 + 16.0;
                            v61 = v37 ? v60 + 50.0 : v60;
                            if ( levelButtonBase )
                            {
                              v62 = this->fields.explanationBasePosition.fields.x;
                              v63 = this->fields.explanationBasePosition.fields.z;
                              levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                                     0);
                              if ( levelButtonBase )
                              {
                                v79.fields.x = v62;
                                v79.fields.y = v61;
                                v79.fields.z = v63;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)levelButtonBase,
                                  v79,
                                  0);
                                ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v64);
                                ServantStatusListViewItemDrawCommand__SetupMask(this, item, v37, v65);
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
LABEL_136:
            sub_1C93D2C(levelButtonBase, v10);
          }
          v68 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v68 >= v67 )
              sub_1C93D34(IsEventJoin);
            IsEventJoin = BalanceConfig_TypeInfo;
            v69 = commandCardParam->m_Items[v68];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v69 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            v67 = commandCardParam->max_length;
            if ( (int)++v68 >= v67 )
              goto LABEL_127;
          }
        }
        levelButtonBase = (System_String_o *)this->fields.reinforceObject;
        if ( !levelButtonBase )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
        levelButtonBase = (System_String_o *)this->fields.reinforceButton;
        if ( !levelButtonBase )
          goto LABEL_136;
        BYTE1(levelButtonBase[4].klass) = 1;
        UICommonButton__SetEnable((UICommonButton_o *)levelButtonBase, item->fields._CanMoveCombine_k__BackingField, 0);
        if ( transformedSubHeight >= 0 )
          v70 = transformedSubHeight;
        else
          v70 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v70 >> 1), 0);
        goto LABEL_127;
      }
      v18 = item->fields.servantLeaderInfo;
      if ( !v18 )
        goto LABEL_136;
      v13 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v74.fields.currentCryptoKey = v13;
    *(_QWORD *)&v74.fields.fakeValue = v12;
    levelButtonBase = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v74, 0);
    if ( !(_DWORD)levelButtonBase )
      goto LABEL_33;
    if ( !Master_object )
      goto LABEL_136;
    v19 = (int)levelButtonBase;
    levelButtonBase = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                           (ServantLimitImageMaster_o *)Master_object,
                                           (int32_t)levelButtonBase,
                                           3,
                                           0);
    if ( ((unsigned __int8)levelButtonBase & 1) != 0 )
    {
      levelButtonBase = ServantLimitImageMaster__GetServantStatusExplanationText(
                          (ServantLimitImageMaster_o *)Master_object,
                          (System_String_o *)StringLiteral_12003/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                          v19,
                          0);
      servantLeaderInfo = this->fields.explanationLabel;
      if ( !servantLeaderInfo )
        goto LABEL_136;
      mText = servantLeaderInfo->fields.mText;
      v21 = levelButtonBase;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v19,
                                                      3,
                                                      0,
                                                      0);
      v23 = System_String__Format(v21, LimitCountSealedServantName, 0);
      v24 = System_String__Concat_64425724(mText, v23, 0);
      UILabel__set_text(servantLeaderInfo, v24, 0);
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


void ServantStatusListViewItemDrawCommand__SetupBattleButton(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x20
  ServantStatusListViewItemDrawCommand_o *v5; // x21
  bool v6; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  int32_t maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v10; // x0
  float *static_fields; // x8
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s11
  float *v16; // x8
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s15
  ServantStatusListViewItemDrawCommand_o *v21; // x25
  int32_t v22; // w8
  _BOOL4 v23; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v25; // x26
  int v26; // w28
  System_String_o *v27; // x27
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v34; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v37; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v39; // x27
  bool IsServantLimitCountSeal; // w28
  ServantStatusListViewItemDrawCommand_o *v41; // x1
  bool v42; // nf
  struct UICommonButton_array *v43; // x8
  __int64 v44; // x22
  unsigned int v45; // w28
  signed int max_length; // w27
  _BOOL4 v47; // w24
  struct UIRangeLabel_array *v48; // x9
  UIRangeLabel_o *v49; // x25
  int v50; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *monitor; // x26
  struct UISprite_array *v56; // x8
  __int64 *v57; // x8
  struct UICommonButton_array *v58; // x8
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-C0h]
  int32_t v60; // [xsp+8h] [xbp-B8h]
  struct System_Int32_array *v62; // [xsp+10h] [xbp-B0h]
  bool v63; // [xsp+18h] [xbp-A8h]
  unsigned int v64; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_4D2DB65 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_8323/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C93AD4(&StringLiteral_12027/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C93AD4(&StringLiteral_17578/*"btn_bg_20"*/);
    sub_1C93AD4(&StringLiteral_12028/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1C93AD4(&StringLiteral_17579/*"btn_bg_21"*/);
    byte_4D2DB65 = 1;
  }
  if ( !v4 )
    goto LABEL_136;
  if ( !v4->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( v5->fields.isStart && !v4->fields.isConvertOverwriteImage )
    {
      if ( v4->fields.userSvtEntity )
        v6 = 1;
      else
        v6 = v4->fields.userSvtCollectionEntity != 0;
      v63 = v6;
    }
    else
    {
      v63 = 0;
    }
    ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0);
    maxCommandCardLimitCount = v4->fields.maxCommandCardLimitCount;
    commandCardSelectList = v4->fields.commandCardSelectList;
    v60 = ConvertOverwriteCommandCardLimitCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4D2AFDF )
    {
      sub_1C93AD4(&LocalizationManager_TypeInfo);
      byte_4D2AFDF = 1;
    }
    v10 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v10->static_fields;
    v12 = static_fields[20];
    v13 = static_fields[21];
    v14 = static_fields[22];
    v15 = static_fields[23];
    if ( !byte_4D2AFE0 )
    {
      sub_1C93AD4(&LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
      byte_4D2AFE0 = 1;
    }
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = LocalizationManager_TypeInfo;
    }
    v16 = (float *)v10->static_fields;
    v17 = v16[24];
    v18 = v16[25];
    v19 = v16[26];
    v20 = v16[27];
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v64 = 0;
    v21 = this;
    v22 = 0;
    while ( 1 )
    {
      if ( v22 <= maxCommandCardLimitCount )
      {
        if ( !commandCardSelectList )
          goto LABEL_136;
        if ( (unsigned int)v22 >= LODWORD(commandCardSelectList->max_length) )
          goto LABEL_137;
        v23 = commandCardSelectList->m_Items[v22] == v60;
      }
      else
      {
        v23 = 0;
      }
      battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
      if ( !battleCharaLevelTitleRangeLabelList )
        goto LABEL_136;
      if ( (unsigned int)v22 >= LODWORD(battleCharaLevelTitleRangeLabelList->max_length) )
        goto LABEL_137;
      v25 = battleCharaLevelTitleRangeLabelList->m_Items[v22];
      v26 = v63 && v22 <= maxCommandCardLimitCount;
      if ( v22 > maxCommandCardLimitCount
        && (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(v4, 0),
            ((unsigned __int8)this & 1) != 0) )
      {
        if ( !v25 )
          goto LABEL_136;
        v65.fields.r = v12;
        v65.fields.g = v13;
        v65.fields.b = v14;
        v65.fields.a = v15;
        UIRangeLabel__set_effectColor(v25, v65, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = (System_String_o *)StringLiteral_12028/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
      }
      else
      {
        v66.fields.a = v15;
        v66.fields.b = v14;
        v66.fields.g = v13;
        v66.fields.r = v12;
        if ( (v23 & v26) != 0 )
        {
          v66.fields.a = v20;
          v66.fields.b = v19;
          v66.fields.g = v18;
          v66.fields.r = v17;
        }
        if ( !v25 )
          goto LABEL_136;
        UIRangeLabel__set_effectColor(v25, v66, 0);
        v31 = System_Int32__ToString((int32_t)&v64, 0);
        v27 = System_String__Concat_64425724((System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v31, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__Get(v27, 0);
      UIRangeLabel__Set(v25, v32, 0, 1, 0, 0, 0);
      battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
      if ( !battleCharaLevelSpriteList )
        goto LABEL_136;
      if ( v64 >= LODWORD(battleCharaLevelSpriteList->max_length) )
LABEL_137:
        sub_1C93D34(this);
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v64];
      if ( !this )
        goto LABEL_136;
      v34 = &StringLiteral_17578/*"btn_bg_20"*/;
      if ( v23 )
        v34 = &StringLiteral_17579/*"btn_bg_21"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v34, 0);
      battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
      if ( !battleCharaLevelButtonList )
        goto LABEL_136;
      if ( v64 >= LODWORD(battleCharaLevelButtonList->max_length) )
        goto LABEL_137;
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v64];
      if ( (v23 & v26) != 0 )
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v26 == 0 || isInit, 0);
      }
      else
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetButtonEnable((UICommonButton_o *)this, v26 & ~v23, v26 == 0 || isInit, 0);
      }
      limitCountSealLabel = v5->fields.limitCountSealLabel;
      if ( limitCountSealLabel )
      {
        if ( v64 >= LODWORD(limitCountSealLabel->max_length) )
          goto LABEL_137;
        v37 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v64];
      }
      else
      {
        v37 = 0;
      }
      limitCountSealObjList = v5->fields.limitCountSealObjList;
      if ( limitCountSealObjList )
      {
        if ( v64 >= LODWORD(limitCountSealObjList->max_length) )
          goto LABEL_137;
        v39 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v64];
      }
      else
      {
        v39 = 0;
      }
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0);
      if ( !commandCardSelectList )
        goto LABEL_136;
      if ( v64 >= LODWORD(commandCardSelectList->max_length) )
        goto LABEL_137;
      if ( !v21 )
        goto LABEL_136;
      IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                  (ServantLimitImageMaster_o *)v21,
                                  (int32_t)this,
                                  commandCardSelectList->m_Items[v64] + 1,
                                  0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v39, 0, 0);
      if ( IsServantLimitCountSeal )
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v39, 1, 0);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v37, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8323/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0);
        if ( !v37 )
          goto LABEL_136;
        v41 = this;
      }
      else
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v39, 0, 0);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v37, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !v37 )
          goto LABEL_136;
        v41 = (ServantStatusListViewItemDrawCommand_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)v37, (System_String_o *)v41, 0);
LABEL_89:
      v42 = (int)(v64 - 2) < 0;
      v22 = ++v64;
      if ( v42 == __OFSUB__(v64, 3) )
      {
        v43 = v5->fields.battleCharaLevelButtonList;
        if ( v43 )
        {
          v44 = 11;
          v62 = commandCardSelectList;
          while ( 1 )
          {
            v45 = v44 - 8;
            if ( (int)v44 - 8 >= SLODWORD(v43->max_length) )
              return;
            max_length = commandCardSelectList->max_length;
            if ( (int)v45 >= max_length )
            {
              v47 = 0;
            }
            else
            {
              if ( v45 >= max_length )
                goto LABEL_137;
              v47 = *((_DWORD *)&commandCardSelectList->obj.klass + v44) == v60;
            }
            v48 = v5->fields.battleCharaLevelTitleRangeLabelList;
            if ( !v48 )
              goto LABEL_136;
            if ( v45 >= LODWORD(v48->max_length) )
              goto LABEL_137;
            v49 = v48->m_Items[v45];
            v50 = v63 && (int)v45 < max_length;
            if ( (int)v45 >= max_length )
            {
              if ( !v49 )
                goto LABEL_136;
              UIRangeLabel__Clear(v49, 0);
            }
            else
            {
              this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0);
              if ( v45 >= LODWORD(v62->max_length) )
                goto LABEL_137;
              item = (ServantStatusListViewItem_o *)(unsigned int)this;
              this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_136;
              Entity = ServantCostumeMaster__GetEntity(
                         (ServantCostumeMaster_o *)MasterData_object,
                         (int32_t)item,
                         v62->m_Items[v45],
                         0);
              if ( Entity )
              {
                this = (ServantStatusListViewItemDrawCommand_o *)ServantCostumeEntity__getShortName(Entity, 0);
                monitor = (System_String_o *)this;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                if ( !byte_4D2BD02 )
                {
                  sub_1C93AD4(&LocalizationManager_TypeInfo);
                  byte_4D2BD02 = 1;
                }
                this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                }
                monitor = (System_String_o *)this->fields.engraveCodeObject[1].monitor;
              }
              v67.fields.a = v15;
              v67.fields.b = v14;
              v67.fields.g = v13;
              v67.fields.r = v12;
              if ( (v47 & v50) != 0 )
              {
                v67.fields.a = v20;
                v67.fields.b = v19;
                v67.fields.g = v18;
                v67.fields.r = v17;
              }
              if ( !v49 )
                goto LABEL_136;
              UIRangeLabel__set_effectColor(v49, v67, 0);
              UIRangeLabel__Set(v49, monitor, 0, 1, 0, 0, 0);
            }
            v56 = v5->fields.battleCharaLevelSpriteList;
            if ( !v56 )
              goto LABEL_136;
            if ( v45 >= LODWORD(v56->max_length) )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v56->m_Items[v45];
            if ( !this )
              goto LABEL_136;
            v57 = &StringLiteral_17578/*"btn_bg_20"*/;
            if ( v47 )
              v57 = &StringLiteral_17579/*"btn_bg_21"*/;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v57, 0);
            v58 = v5->fields.battleCharaLevelButtonList;
            if ( !v58 )
              goto LABEL_136;
            if ( v45 >= LODWORD(v58->max_length) )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v58->m_Items[v45];
            if ( (v47 & v50) != 0 )
              break;
            if ( (int)v45 < max_length )
            {
              if ( !this )
                goto LABEL_136;
              UICommonButton__SetButtonEnable((UICommonButton_o *)this, v50 & ~v47, v50 == 0 || isInit, 0);
              goto LABEL_130;
            }
            if ( !this )
              goto LABEL_136;
            this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
            commandCardSelectList = v62;
            if ( !this )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_131:
            v43 = v5->fields.battleCharaLevelButtonList;
            ++v44;
            if ( !v43 )
              goto LABEL_136;
          }
          if ( !this )
            goto LABEL_136;
          UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v50 == 0 || isInit, 0);
LABEL_130:
          commandCardSelectList = v62;
          goto LABEL_131;
        }
LABEL_136:
        sub_1C93D2C(this, item);
      }
    }
  }
}


void ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x20
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  ServantStatusListViewItemDrawCommand_o *v9; // x22
  float y; // s0
  System_String_o *Empty; // x21
  UnityEngine_GameObject_o *gameObject; // x0

  v6 = this;
  if ( (byte_4D2DB66 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1C93AD4(&StringLiteral_12049/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/);
    byte_4D2DB66 = 1;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_16;
  if ( !this )
    goto LABEL_35;
  if ( item->fields._IsTransformed_k__BackingField )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_35;
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_35;
  mHeight = baseSprite->fields.mHeight;
  if ( isDisplayCombineButton )
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight - 50, 0);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !v6->fields.baseSprite )
      goto LABEL_35;
    v9 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0);
    if ( !this )
      goto LABEL_35;
    y = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y))
      + 25.0;
  }
  else
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight, 0);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !v6->fields.baseSprite )
      goto LABEL_35;
    v9 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0);
    if ( !this )
      goto LABEL_35;
    y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
  }
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v9, y, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_35;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12049/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0);
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this
    || (UILabel__set_overflowMethod((UILabel_o *)this, 2, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0)
    || (UILabel__set_text((UILabel_o *)this, Empty, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0) )
  {
LABEL_35:
    sub_1C93D2C(this, item);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
  if ( isDisplayCombineButton )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, 14.0, 0);
      return;
    }
    goto LABEL_35;
  }
}