void __fastcall ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct UISprite_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDE93 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UISprite___TypeInfo, v4);
    byte_40FDE93 = 1;
  }
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, (unsigned int)v5->static_fields->SvtCommandCardMax, v2);
  this->fields.commandCodeSpriteList = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSpriteList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommand__Awake(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  int32_t buttonPitch; // w20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s1
  struct UISprite_array *v11; // x8
  UnityEngine_Component_o *v12; // x0
  float v13; // s8
  UnityEngine_Transform_o *v14; // x0
  float v15; // s0
  double v16; // d0
  struct UISprite_o *baseSprite; // x9
  int32_t mHeight; // w11
  int max_length; // kr00_4
  UnityEngine_Component_o *titleSprite; // x0
  int v21; // w8
  UnityEngine_Transform_o *v22; // x0
  float v23; // s0
  float v24; // s1
  float v25; // s2
  UnityEngine_GameObject_o *cardBase; // x0
  int v27; // w8
  float v28; // s8
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_GameObject_o *levelButtonBase; // x0
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Component_o *explanationLabel; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  battleCharaLevelSpriteList = this->fields.battleCharaLevelSpriteList;
  if ( !battleCharaLevelSpriteList )
    goto LABEL_29;
  if ( (int)battleCharaLevelSpriteList->max_length > 3 )
  {
    v5 = (UnityEngine_Component_o *)battleCharaLevelSpriteList->m_Items[0];
    if ( !v5 )
      goto LABEL_29;
    transform = UnityEngine_Component__get_transform(v5, 0LL);
    if ( !transform )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v11 = this->fields.battleCharaLevelSpriteList;
    if ( !v11 )
      goto LABEL_29;
    if ( v11->max_length <= 3 )
    {
      sub_B17100(v7, v8, v9);
      sub_B170A0();
    }
    v12 = (UnityEngine_Component_o *)v11->m_Items[3];
    if ( !v12 )
      goto LABEL_29;
    v13 = v10;
    v14 = UnityEngine_Component__get_transform(v12, 0LL);
    if ( !v14 )
      goto LABEL_29;
    localPosition = UnityEngine_Transform__get_localPosition(v14, 0LL);
    v15 = v13 - localPosition.fields.y;
    battleCharaLevelSpriteList = this->fields.battleCharaLevelSpriteList;
    v16 = (float)(v13 - localPosition.fields.y) == INFINITY ? -v15 : v15;
    buttonPitch = (int)v16;
    this->fields.buttonPitch = (int)v16;
    if ( !battleCharaLevelSpriteList )
LABEL_29:
      sub_B170D4();
  }
  else
  {
    buttonPitch = this->fields.buttonPitch;
  }
  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_29;
  mHeight = baseSprite->fields.mHeight;
  max_length = battleCharaLevelSpriteList->max_length;
  titleSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
  v21 = max_length / 3 - 1;
  if ( max_length < 9 )
    v21 = 1;
  this->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  this->fields.baseSize.fields.y = (float)(mHeight - v21 * buttonPitch);
  this->fields.baseSize.fields.z = 0.0;
  if ( !titleSprite )
    goto LABEL_29;
  v22 = UnityEngine_Component__get_transform(titleSprite, 0LL);
  if ( !v22 )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(v22, 0LL);
  cardBase = this->fields.cardBase;
  v27 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v28 = (float)(v27 >> 1);
  this->fields.titleBasePosition.fields.x = v23;
  this->fields.titleBasePosition.fields.y = v24 - v28;
  this->fields.titleBasePosition.fields.z = v25;
  if ( !cardBase )
    goto LABEL_29;
  v29 = UnityEngine_GameObject__get_transform(cardBase, 0LL);
  if ( !v29 )
    goto LABEL_29;
  v35 = UnityEngine_Transform__get_localPosition(v29, 0LL);
  levelButtonBase = this->fields.levelButtonBase;
  this->fields.cardBasePosition.fields.x = v35.fields.x;
  this->fields.cardBasePosition.fields.y = v35.fields.y - v28;
  this->fields.cardBasePosition.fields.z = v35.fields.z;
  if ( !levelButtonBase )
    goto LABEL_29;
  v31 = UnityEngine_GameObject__get_transform(levelButtonBase, 0LL);
  if ( !v31 )
    goto LABEL_29;
  v36 = UnityEngine_Transform__get_localPosition(v31, 0LL);
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  this->fields.levelButtonBasePosition.fields.x = v36.fields.x;
  this->fields.levelButtonBasePosition.fields.z = v36.fields.z;
  this->fields.levelButtonBasePosition.fields.y = v36.fields.y - v28;
  if ( !explanationLabel )
    goto LABEL_29;
  v33 = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !v33 )
    goto LABEL_29;
  v37 = UnityEngine_Transform__get_localPosition(v33, 0LL);
  this->fields.explanationBasePosition.fields.x = v37.fields.x;
  this->fields.explanationBasePosition.fields.z = v37.fields.z;
  this->fields.explanationBasePosition.fields.y = v37.fields.y + v28;
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

  if ( (byte_40FDE8F & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, item);
    byte_40FDE8F = 1;
  }
  if ( this->fields.isStart )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_40F8215 )
    {
      sub_B16FFC(&RandomLimitCountManager_TypeInfo, item);
      byte_40F8215 = 1;
    }
    v5 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  __int64 v21; // x24
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v23; // x22
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t v28; // w0
  BattleServantConfConponent_c *klass; // x8
  __int64 v30; // x8
  BattleServantConfConponent_c *v31; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  int max_length; // w9
  int32_t v34; // w21
  struct System_Int32_array *commandCardParam; // x8
  int v36; // w9
  int32_t v37; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v39; // x22
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  struct UnityEngine_GameObject_array *v48; // x8
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  struct System_Int32_array **p_commandCodeIdList; // x24
  System_Int32_array **v64; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct ServantEntity_o *svtEntity; // x9
  struct UnityEngine_GameObject_array *v73; // x8
  struct System_Int32_array *cardIds; // x28
  ImageLimitCount_c **v75; // x23
  unsigned __int64 v76; // x26
  int32_t v77; // w21
  int32_t v78; // w21
  WebViewManager_o *v79; // x0
  ServantLimitImageMaster_o *v80; // x22
  int32_t v81; // w0
  unsigned __int64 v82; // x8
  int32_t v83; // w10
  struct System_Int32_array *v84; // x8
  unsigned __int64 v85; // x9
  int32_t v86; // w22
  struct System_Int32_array *v87; // x8
  unsigned __int64 v88; // x9
  int32_t v89; // w9
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x27
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v94; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  struct UnityEngine_GameObject_array *v100; // x8
  UnityEngine_GameObject_o *v101; // x0
  ImageLimitCount_c **v102; // x25
  ServantStatusListViewItem_o *v103; // x23
  UnityEngine_Transform_o *v104; // x0
  struct System_Int32_array *v105; // x19
  BattleCommandComponent_o *Component_srcLineSprite; // x0
  BattleCommandComponent_o *v107; // x22
  System_Int32_array **gameObject; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  unsigned int *commandCardDataList; // x28
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  BattleCommandData_o *v120; // x24
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  unsigned int *v126; // x0
  BattleServantConfConponent_c *v127; // x8
  __int64 v128; // x8
  BattleServantConfConponent_c *v129; // x8
  System_Int32_array **clickEventObject; // x1
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  unsigned int *v137; // x21
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  unsigned int *v143; // x0
  struct UnityEngine_GameObject_array *v144; // x8
  UnityEngine_GameObject_o *v145; // x0
  int32_t layer; // w21
  struct UISprite_array *v147; // x8
  UIWidget_o *v148; // x8
  struct UISprite_array *v149; // x8
  UISprite_o *v150; // x21
  struct UISprite_array *v151; // x8
  UISprite_o *v152; // x0
  int32_t v153; // [xsp+10h] [xbp-90h]
  int32_t v154; // [xsp+14h] [xbp-8Ch]
  int32_t powerUpValue; // [xsp+18h] [xbp-88h]
  int32_t commandCodeId; // [xsp+1Ch] [xbp-84h]
  BattleServantConfConponent_o *p_commandCardDataList; // [xsp+28h] [xbp-78h]
  int32_t svtId; // [xsp+38h] [xbp-68h]
  int v159; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_40FDE90 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&BattleCommandComponent___TypeInfo, v6);
    sub_B16FFC(&BattleCommandData___TypeInfo, v7);
    sub_B16FFC(&BattleCommandData_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v11);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v12);
    sub_B16FFC(&NGUITools_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_14954/*"Unlit/Transparent Colored"*/, v17);
    sub_B16FFC(&StringLiteral_4145/*"CommandCard("*/, v18);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B16FFC(&StringLiteral_651/*")"*/, v19);
    byte_40FDE90 = 1;
  }
  v159 = 0;
  p_commandCardDataList = (BattleServantConfConponent_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v21 = 0LL;
      while ( (int)v21 < (signed int)commandCardBaseList->max_length )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_116;
        if ( (unsigned int)v21 >= commandCardComponentList->max_length )
          goto LABEL_118;
        v23 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v21];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v4 )
            goto LABEL_116;
          ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                                    v4,
                                                    0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              ConvertOverwriteCommandCardLimitCount,
                                              0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_116;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          v28 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_116;
          this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                             MasterData_WarQuestSelectionMaster,
                                                             v28,
                                                             LimitCountByImageLimitCostumeIn,
                                                             0LL);
          klass = p_commandCardDataList->klass;
          if ( !p_commandCardDataList->klass )
            goto LABEL_116;
          if ( (unsigned int)v21 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_118;
          v30 = *((_QWORD *)&klass->_1.byval_arg.data + v21);
          if ( !v30 )
            goto LABEL_116;
          *(_DWORD *)(v30 + 24) = (_DWORD)this;
          v31 = p_commandCardDataList->klass;
          if ( !p_commandCardDataList->klass )
            goto LABEL_116;
          if ( (unsigned int)v21 >= LODWORD(v31->_1.namespaze) )
            goto LABEL_118;
          if ( !v23 )
            goto LABEL_116;
          BattleCommandComponent__setData(
            (BattleCommandComponent_o *)v23,
            *((BattleCommandData_o **)&v31->_1.byval_arg.data + v21),
            0LL,
            0,
            1,
            0,
            0LL);
          BattleCommandComponent__updateView((BattleCommandComponent_o *)v23, 1, 0, 1, 0, 0, 0LL);
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v21 < max_length) )
        {
          if ( (unsigned int)v21 >= max_length )
            goto LABEL_118;
          v34 = commandCodeIdList->m_Items[v21 + 1];
        }
        else
        {
          v34 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v36 = commandCardParam->max_length, (int)v21 < v36) )
        {
          if ( (unsigned int)v21 >= v36 )
            goto LABEL_118;
          v37 = commandCardParam->m_Items[v21 + 1];
          if ( !v23 )
            goto LABEL_116;
        }
        else
        {
          v37 = 0;
          if ( !v23 )
            goto LABEL_116;
        }
        BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v23, v37, 2, 1, 0LL);
        BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v23, v37, 0LL);
        commandCodeSpriteList = v5->fields.commandCodeSpriteList;
        if ( !commandCodeSpriteList )
          goto LABEL_116;
        if ( (unsigned int)v21 >= commandCodeSpriteList->max_length )
          goto LABEL_118;
        v39 = commandCodeSpriteList->m_Items[v21];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v39, v34, 0LL);
        commandCardBaseList = v5->fields.commandCardBaseList;
        ++v21;
        if ( !commandCardBaseList )
          goto LABEL_116;
      }
      goto LABEL_117;
    }
LABEL_116:
    sub_B170D4();
  }
  if ( !commandCardBaseList )
    goto LABEL_116;
  v40 = (System_Int32_array **)sub_B17014(BattleCommandData___TypeInfo, commandCardBaseList->max_length, method);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v40;
  sub_B16F98(p_commandCardDataList, v40, v41, v42, v43, v44, v45, v46);
  v48 = v5->fields.commandCardBaseList;
  if ( !v48 )
    goto LABEL_116;
  v49 = (System_Int32_array **)sub_B17014(BattleCommandComponent___TypeInfo, v48->max_length, v47);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v49;
  sub_B16F98((BattleServantConfConponent_o *)&v5->fields.commandCardComponentList, v49, v50, v51, v52, v53, v54, v55);
  if ( !v4 )
    goto LABEL_116;
  v62 = (System_Int32_array **)v4->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v62;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  sub_B16F98((BattleServantConfConponent_o *)&v5->fields.commandCodeIdList, v62, v56, v57, v58, v59, v60, v61);
  v64 = (System_Int32_array **)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v64;
  sub_B16F98((BattleServantConfConponent_o *)&v5->fields.commandCardParam, v64, v66, v67, v68, v69, v70, v71);
  svtEntity = v4->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_116;
  v73 = v5->fields.commandCardBaseList;
  if ( !v73 )
    goto LABEL_116;
  cardIds = svtEntity->fields.cardIds;
  v75 = &ImageLimitCount_TypeInfo;
  v76 = 0LL;
  while ( (__int64)v76 < (int)v73->max_length )
  {
    svtId = ServantStatusListViewItem__get_SvtId(v4, 0LL);
    v77 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0LL);
    if ( (BYTE3((*v75)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v75)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v75);
    v78 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v77, 0LL);
    v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v79 )
      goto LABEL_116;
    v80 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v79,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v81 = ServantStatusListViewItem__get_SvtId(v4, 0LL);
    if ( !v80 )
      goto LABEL_116;
    this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       v80,
                                                       v81,
                                                       v78,
                                                       0LL);
    if ( cardIds && (v82 = cardIds->max_length, (__int64)v76 < (int)v82) )
    {
      if ( v76 >= v82 )
        goto LABEL_118;
      v83 = cardIds->m_Items[v76 + 1];
    }
    else
    {
      v83 = 0;
    }
    v84 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v85 = v84->max_length, (__int64)v76 < (int)v85) )
    {
      if ( v76 >= v85 )
        goto LABEL_118;
      v86 = v84->m_Items[v76 + 1];
    }
    else
    {
      v86 = 0;
    }
    v87 = *p_commandCardParam;
    if ( *p_commandCardParam && (v88 = v87->max_length, (__int64)v76 < (int)v88) )
    {
      if ( v76 >= v88 )
        goto LABEL_118;
      v89 = v87->m_Items[v76 + 1];
    }
    else
    {
      v89 = 0;
    }
    if ( (unsigned int)(v83 - 1) > 2 )
    {
      v151 = v5->fields.commandCodeSpriteList;
      if ( !v151 )
        goto LABEL_116;
      if ( v76 >= v151->max_length )
        goto LABEL_118;
      v152 = v151->m_Items[v76];
      if ( !v152 )
        goto LABEL_116;
      UISprite__set_spriteName(v152, 0LL, 0LL);
      ++v76;
    }
    else
    {
      v153 = v83;
      v154 = (int)this;
      powerUpValue = v89;
      commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.commandCardPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v91 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          commandCardPrefab,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v91 )
        goto LABEL_116;
      v92 = v91;
      transform = UnityEngine_GameObject__get_transform(v91, 0LL);
      v94 = UnityEngine_GameObject__get_transform(v92, 0LL);
      if ( !v94 )
        goto LABEL_116;
      localScale = UnityEngine_Transform__get_localScale(v94, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v159 = v76 + 1;
      v98 = System_Int32__ToString((int32_t)&v159, 0LL);
      v99 = System_String__Concat_43746016(
              (System_String_o *)StringLiteral_4145/*"CommandCard("*/,
              v98,
              (System_String_o *)StringLiteral_651/*")"*/,
              0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v92, v99, 0LL);
      v100 = v5->fields.commandCardBaseList;
      if ( !v100 )
        goto LABEL_116;
      if ( v76 >= v100->max_length )
        goto LABEL_118;
      v101 = v100->m_Items[v76];
      if ( !v101 )
        goto LABEL_116;
      v102 = v75;
      commandCodeId = v86;
      v103 = v4;
      v104 = UnityEngine_GameObject__get_transform(v101, 0LL);
      if ( !transform )
        goto LABEL_116;
      v105 = cardIds;
      UnityEngine_Transform__set_parent(transform, v104, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
      identity = UnityEngine_Quaternion__get_identity(0LL);
      UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
      v162.fields.x = x;
      v162.fields.y = y;
      v162.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v162, 0LL);
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        v92,
        (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v92,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !Component_srcLineSprite )
        goto LABEL_116;
      v107 = Component_srcLineSprite;
      BattleCommandComponent__setDepth(Component_srcLineSprite, 110, 0LL);
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v107->fields.target = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B16F98((BattleServantConfConponent_o *)&v107->fields.target, gameObject, v109, v110, v111, v112, v113, v114);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v120 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v116, v117, v118, v119);
      BattleCommandData___ctor_18691260(v120, v153, svtId, v154, 0, 0LL);
      if ( !commandCardDataList )
        goto LABEL_116;
      if ( v120 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_B170BC(
                                                           v120,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_119:
          sub_B170F4(this);
          sub_B170A0();
        }
      }
      if ( v76 >= commandCardDataList[6] )
        goto LABEL_118;
      v126 = &commandCardDataList[2 * v76];
      *((_QWORD *)v126 + 4) = v120;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v126 + 8),
        (System_Int32_array **)v120,
        (System_String_array **)method,
        v121,
        v122,
        v123,
        v124,
        v125);
      v127 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      if ( v76 >= LODWORD(v127->_1.namespaze) )
        goto LABEL_118;
      v128 = *((_QWORD *)&v127->_1.byval_arg.data + v76);
      if ( !v128 )
        goto LABEL_116;
      *(_DWORD *)(v128 + 44) = v76 + 1;
      v129 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      cardIds = v105;
      v4 = v103;
      v75 = v102;
      if ( v76 >= LODWORD(v129->_1.namespaze) )
        goto LABEL_118;
      BattleCommandComponent__setData(
        v107,
        *((BattleCommandData_o **)&v129->_1.byval_arg.data + v76),
        0LL,
        0,
        1,
        0,
        0LL);
      BattleCommandComponent__setShader(v107, (System_String_o *)StringLiteral_14954/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView(v107, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (System_Int32_array **)v5->fields.clickEventObject;
      v107->fields.target = (struct UnityEngine_GameObject_o *)clickEventObject;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v107->fields.target,
        clickEventObject,
        v131,
        v132,
        v133,
        v134,
        v135,
        v136);
      v137 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v137 )
        goto LABEL_116;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_B170BC(v107, *(_QWORD *)(*(_QWORD *)v137 + 64LL));
      if ( !this )
        goto LABEL_119;
      if ( v76 >= v137[6] )
        goto LABEL_118;
      v143 = &v137[2 * v76];
      *((_QWORD *)v143 + 4) = v107;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v143 + 8),
        (System_Int32_array **)v107,
        (System_String_array **)method,
        v138,
        v139,
        v140,
        v141,
        v142);
      v144 = v5->fields.commandCardBaseList;
      if ( !v144 )
        goto LABEL_116;
      if ( v76 >= v144->max_length )
        goto LABEL_118;
      v145 = v144->m_Items[v76];
      if ( !v145 )
        goto LABEL_116;
      layer = UnityEngine_GameObject__get_layer(v145, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v92, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon(v107, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue(v107, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(v107, 0LL);
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( (_DWORD)this != -1 )
      {
        v147 = v5->fields.commandCodeSpriteList;
        if ( !v147 )
          goto LABEL_116;
        if ( v76 >= v147->max_length )
          goto LABEL_118;
        v148 = (UIWidget_o *)v147->m_Items[v76];
        if ( !v148 )
          goto LABEL_116;
        UIWidget__set_depth(v148, (_DWORD)this - 1, 0LL);
      }
      v149 = v5->fields.commandCodeSpriteList;
      if ( !v149 )
        goto LABEL_116;
      if ( v76 >= v149->max_length )
      {
LABEL_118:
        sub_B17100(this, item, method);
        sub_B170A0();
      }
      v150 = v149->m_Items[v76];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommandCodeMiniImage(v150, commandCodeId, 0LL);
      ++v76;
    }
    v73 = v5->fields.commandCardBaseList;
    if ( !v73 )
      goto LABEL_116;
  }
LABEL_117:
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
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *v17; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v19; // x22
  __int64 v20; // x23
  UILabel_o *v21; // x22
  System_String_o *v22; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v24; // x22
  System_String_o *v25; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v27; // w22
  System_String_o *ServantStatusExplanationText; // x0
  struct UILabel_o *v29; // x23
  System_String_o *mText; // x25
  System_String_o *v31; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v42; // w10
  bool v43; // cc
  int v44; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v46; // w9
  int v47; // w23
  float v48; // s9
  UnityEngine_BoxCollider_o *v49; // x0
  UIWidget_o *baseSprite; // x0
  double v51; // d0
  UIWidget_o *v52; // x0
  double v53; // d0
  UnityEngine_Component_o *titleSprite; // x0
  int v55; // w21
  float v56; // s8
  float v57; // s11
  float v58; // s9
  UnityEngine_Transform_o *transform; // x0
  float v60; // s10
  UnityEngine_GameObject_o *cardBase; // x0
  float v62; // s8
  float v63; // s11
  float v64; // s9
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_GameObject_o *levelButtonBase; // x0
  float v67; // s8
  float v68; // s11
  float v69; // s9
  UnityEngine_Transform_o *v70; // x0
  UnityEngine_Component_o *v71; // x0
  float v72; // s8
  float v73; // s10
  float v74; // s9
  UnityEngine_Transform_o *v75; // x0
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE8E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_11916/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/, v11);
    sub_B16FFC(&StringLiteral_11914/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, v12);
    sub_B16FFC(&StringLiteral_11915/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, v13);
    sub_B16FFC(&StringLiteral_11913/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v14);
    byte_40FDE8E = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_83;
      UILabel__set_text(explanationLabel, v17, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_83;
      v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v21 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v21 )
        goto LABEL_83;
      UILabel__set_text(v21, v22, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_83;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      v24 = this->fields.explanationLabel;
      if ( !item->fields.servantLeaderInfo )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11915/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
        if ( !v24 )
          goto LABEL_83;
        UILabel__set_text(v24, v35, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11915/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v24 )
        goto LABEL_83;
      UILabel__set_text(v24, v25, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_83;
      v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v78.fields.currentCryptoKey = v20;
    *(_QWORD *)&v78.fields.fakeValue = v19;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v78, 0LL);
    if ( !v27 )
      goto LABEL_44;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_83;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(Master_WarQuestSelectionMaster, v27, 3, 0LL) )
    {
      ServantStatusExplanationText = ServantLimitImageMaster__GetServantStatusExplanationText(
                                       Master_WarQuestSelectionMaster,
                                       (System_String_o *)StringLiteral_11916/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                       v27,
                                       0LL);
      v29 = this->fields.explanationLabel;
      if ( !v29 )
        goto LABEL_83;
      mText = v29->fields.mText;
      v31 = ServantStatusExplanationText;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      Master_WarQuestSelectionMaster,
                                                      v27,
                                                      3,
                                                      0LL);
      v33 = System_String__Format(v31, LimitCountSealedServantName, 0LL);
      v34 = System_String__Concat_43743732(mText, v33, 0LL);
      UILabel__set_text(v29, v34, 0LL);
      v27 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v27 = 0;
LABEL_44:
    commandCardSelectList = item->fields.commandCardSelectList;
    if ( !commandCardSelectList )
      goto LABEL_83;
    max_length = commandCardSelectList->max_length;
    if ( max_length < 4 )
      buttonPitch = 0;
    else
      buttonPitch = this->fields.buttonPitch;
    x = this->fields.baseSize.fields.x;
    y = this->fields.baseSize.fields.y;
    z = this->fields.baseSize.fields.z;
    v42 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v42;
    v43 = v42 < 3;
    v44 = v42 - 1;
    if ( v43 )
      v44 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v46 = v44 * buttonPitch;
    if ( v27 )
      v47 = v46 + 32;
    else
      v47 = v46;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v48 = y + (float)v47;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      v49 = this->fields.baseCollider;
      if ( !v49 )
        goto LABEL_83;
      v79.fields.x = x;
      v79.fields.y = v48;
      v79.fields.z = z;
      UnityEngine_BoxCollider__set_size(v49, v79, 0LL);
    }
    baseSprite = (UIWidget_o *)this->fields.baseSprite;
    if ( baseSprite )
    {
      v51 = x;
      if ( x == INFINITY )
        v51 = -x;
      UIWidget__set_width(baseSprite, (int)v51, 0LL);
      v52 = (UIWidget_o *)this->fields.baseSprite;
      if ( v52 )
      {
        v53 = v48;
        if ( v48 == INFINITY )
          v53 = -INFINITY;
        UIWidget__set_height(v52, (int)v53, 0LL);
        titleSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
        v55 = v47 >= 0 ? v47 : v47 + 1;
        if ( titleSprite )
        {
          v56 = this->fields.titleBasePosition.fields.x;
          v57 = this->fields.titleBasePosition.fields.y;
          v58 = this->fields.titleBasePosition.fields.z;
          transform = UnityEngine_Component__get_transform(titleSprite, 0LL);
          if ( transform )
          {
            v60 = (float)(v55 >> 1);
            v80.fields.y = v57 + v60;
            v80.fields.x = v56;
            v80.fields.z = v58;
            UnityEngine_Transform__set_localPosition(transform, v80, 0LL);
            cardBase = this->fields.cardBase;
            if ( cardBase )
            {
              v62 = this->fields.cardBasePosition.fields.x;
              v63 = this->fields.cardBasePosition.fields.y;
              v64 = this->fields.cardBasePosition.fields.z;
              v65 = UnityEngine_GameObject__get_transform(cardBase, 0LL);
              if ( v65 )
              {
                v81.fields.y = v63 + v60;
                v81.fields.x = v62;
                v81.fields.z = v64;
                UnityEngine_Transform__set_localPosition(v65, v81, 0LL);
                levelButtonBase = this->fields.levelButtonBase;
                if ( levelButtonBase )
                {
                  v67 = this->fields.levelButtonBasePosition.fields.x;
                  v68 = this->fields.levelButtonBasePosition.fields.y;
                  v69 = this->fields.levelButtonBasePosition.fields.z;
                  v70 = UnityEngine_GameObject__get_transform(levelButtonBase, 0LL);
                  if ( v70 )
                  {
                    v82.fields.y = v68 + v60;
                    v82.fields.x = v67;
                    v82.fields.z = v69;
                    UnityEngine_Transform__set_localPosition(v70, v82, 0LL);
                    v71 = (UnityEngine_Component_o *)this->fields.explanationLabel;
                    v72 = v27
                        ? (float)(this->fields.explanationBasePosition.fields.y - v60) + 16.0
                        : this->fields.explanationBasePosition.fields.y - v60;
                    if ( v71 )
                    {
                      v73 = this->fields.explanationBasePosition.fields.x;
                      v74 = this->fields.explanationBasePosition.fields.z;
                      v75 = UnityEngine_Component__get_transform(v71, 0LL);
                      if ( v75 )
                      {
                        v83.fields.x = v73;
                        v83.fields.y = v72;
                        v83.fields.z = v74;
                        UnityEngine_Transform__set_localPosition(v75, v83, 0LL);
                        ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v76);
                        ServantStatusListViewItemDrawCommand__SetupMask(this, item, v77);
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
LABEL_83:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommand__SetupBattleButton(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x0
  _BOOL4 v17; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  __int64 v19; // x1
  int32_t maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v22; // x0
  float *static_fields; // x8
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float v27; // s11
  float *v28; // x8
  float v29; // s12
  float v30; // s13
  float v31; // s14
  float v32; // s15
  WebViewManager_o *v33; // x0
  WarQuestSelectionMaster_o *SvtId; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  ServantLimitImageMaster_o *v37; // x25
  int v38; // w8
  ServantStatusListViewItemDrawCommand_o *v39; // x21
  int v40; // w9
  _BOOL4 v41; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v43; // x26
  int v44; // w20
  System_String_o *v45; // x0
  int v46; // w8
  float v47; // s3
  float v48; // s2
  float v49; // s1
  float v50; // s0
  System_String_o *v51; // x0
  System_String_o *v52; // x27
  System_String_o *v53; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  UISprite_o *v55; // x0
  __int64 *v56; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  UICommonButton_o *v58; // x0
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v60; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_GameObject_o *v62; // x27
  System_String_o *v63; // x0
  System_String_o *v64; // x1
  bool v65; // nf
  struct UICommonButton_array *v66; // x8
  __int64 v67; // x22
  il2cpp_array_size_t v68; // w27
  signed int max_length; // w24
  _BOOL4 v70; // w19
  struct UIRangeLabel_array *v71; // x9
  UIRangeLabel_o *v72; // x25
  int v73; // w20
  ServantCostumeEntity_o *Entity; // x0
  __int64 v75; // x1
  System_String_o *ShortName; // x26
  LocalizationManager_c *v77; // x0
  int v78; // w8
  float v79; // s3
  float v80; // s2
  float v81; // s1
  float v82; // s0
  struct UISprite_array *v83; // x8
  UISprite_o *v84; // x0
  __int64 *v85; // x8
  struct UICommonButton_array *v86; // x8
  UICommonButton_o *v87; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-B8h]
  int32_t v90; // [xsp+14h] [xbp-ACh]
  _BOOL4 v92; // [xsp+1Ch] [xbp-A4h]
  ServantStatusListViewItemDrawCommand_o *v93; // [xsp+20h] [xbp-A0h]
  unsigned int v94; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDE91 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_8360/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B16FFC(&StringLiteral_11938/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B16FFC(&StringLiteral_16899/*"btn_bg_20"*/, v12);
    sub_B16FFC(&StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_16900/*"btn_bg_21"*/, v15);
    byte_40FDE91 = 1;
  }
  v94 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_168:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this->fields.isStart )
  {
    if ( !item )
      goto LABEL_168;
    goto LABEL_10;
  }
  if ( !item )
    goto LABEL_168;
  if ( item->fields.isConvertOverwriteImage )
  {
LABEL_10:
    v92 = 0;
    goto LABEL_13;
  }
  if ( item->fields.userSvtEntity )
    v17 = 1;
  else
    v17 = item->fields.userSvtCollectionEntity != 0LL;
  v92 = v17;
LABEL_13:
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            0LL);
  maxCommandCardLimitCount = item->fields.maxCommandCardLimitCount;
  commandCardSelectList = item->fields.commandCardSelectList;
  v90 = ConvertOverwriteCommandCardLimitCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    byte_40F6254 = 1;
  }
  v22 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v22->static_fields;
  v24 = static_fields[20];
  v25 = static_fields[21];
  v26 = static_fields[22];
  v27 = static_fields[23];
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    v22 = LocalizationManager_TypeInfo;
    byte_40F6255 = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = LocalizationManager_TypeInfo;
  }
  v28 = (float *)v22->static_fields;
  v29 = v28[24];
  v30 = v28[25];
  v31 = v28[26];
  v32 = v28[27];
  v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v33 )
    goto LABEL_168;
  SvtId = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v33,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v94 = 0;
  v37 = (ServantLimitImageMaster_o *)SvtId;
  v38 = 0;
  v39 = this;
  v93 = this;
  do
  {
    if ( v38 <= maxCommandCardLimitCount )
    {
      if ( !commandCardSelectList )
        goto LABEL_168;
      if ( v38 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v41 = commandCardSelectList->m_Items[v38 + 1] == v90;
      v40 = 1;
    }
    else
    {
      v40 = 0;
      v41 = 0;
    }
    battleCharaLevelTitleRangeLabelList = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !battleCharaLevelTitleRangeLabelList )
      goto LABEL_168;
    if ( v38 >= battleCharaLevelTitleRangeLabelList->max_length )
    {
LABEL_170:
      sub_B17100(SvtId, v35, v36);
      sub_B170A0();
    }
    v43 = battleCharaLevelTitleRangeLabelList->m_Items[v38];
    v44 = v40 & v92;
    if ( v40 || !ServantStatusListViewItem__get_IsMine(item, 0LL) )
    {
      if ( !v43 )
        goto LABEL_168;
      v46 = v41 & v44;
      if ( (v41 & v44) != 0 )
        v47 = v32;
      else
        v47 = v27;
      if ( v46 )
        v48 = v31;
      else
        v48 = v26;
      if ( v46 )
        v49 = v30;
      else
        v49 = v25;
      if ( v46 )
        v50 = v29;
      else
        v50 = v24;
      UIRangeLabel__set_effectColor(v43, *(UnityEngine_Color_o *)(&v47 - 3), 0LL);
      v51 = System_Int32__ToString((int32_t)&v94, 0LL);
      v52 = System_String__Concat_43743732((System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v51, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = v52;
    }
    else
    {
      if ( !v43 )
        goto LABEL_168;
      v95.fields.r = v24;
      v95.fields.g = v25;
      v95.fields.b = v26;
      v95.fields.a = v27;
      UIRangeLabel__set_effectColor(v43, v95, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = (System_String_o *)StringLiteral_11939/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v53 = LocalizationManager__Get(v45, 0LL);
    UIRangeLabel__Set(v43, v53, 0LL, 1, 0, 0LL);
    battleCharaLevelSpriteList = v39->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_168;
    if ( v94 >= battleCharaLevelSpriteList->max_length )
      goto LABEL_170;
    v55 = battleCharaLevelSpriteList->m_Items[v94];
    if ( !v55 )
      goto LABEL_168;
    v56 = &StringLiteral_16899/*"btn_bg_20"*/;
    if ( v41 )
      v56 = &StringLiteral_16900/*"btn_bg_21"*/;
    UISprite__set_spriteName(v55, (System_String_o *)*v56, 0LL);
    battleCharaLevelButtonList = v39->fields.battleCharaLevelButtonList;
    if ( !battleCharaLevelButtonList )
      goto LABEL_168;
    if ( v94 >= battleCharaLevelButtonList->max_length )
      goto LABEL_170;
    v58 = battleCharaLevelButtonList->m_Items[v94];
    if ( (v41 & v44) != 0 )
    {
      if ( !v58 )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(v58, 0, v44 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !v58 )
        goto LABEL_168;
      UICommonButton__SetButtonEnable(v58, v44 & ~v41, v44 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = v39->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v94 >= limitCountSealLabel->max_length )
        goto LABEL_170;
      v60 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v94];
    }
    else
    {
      v60 = 0LL;
    }
    limitCountSealObjList = v93->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v94 >= limitCountSealObjList->max_length )
        goto LABEL_170;
      v62 = limitCountSealObjList->m_Items[v94];
    }
    else
    {
      v62 = 0LL;
    }
    SvtId = (WarQuestSelectionMaster_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( !commandCardSelectList )
      goto LABEL_168;
    if ( v94 >= commandCardSelectList->max_length )
      goto LABEL_170;
    if ( !v37 )
      goto LABEL_168;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(
           v37,
           (int32_t)SvtId,
           commandCardSelectList->m_Items[v94 + 1] + 1,
           0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v62, 0LL, 0LL) )
      {
        if ( !v62 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive(v62, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SvtId = (WarQuestSelectionMaster_o *)UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
      if ( ((unsigned __int8)SvtId & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_8360/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v60 )
          goto LABEL_168;
        v64 = v63;
        goto LABEL_110;
      }
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v62, 0LL, 0LL) )
      {
        if ( !v62 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive(v62, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SvtId = (WarQuestSelectionMaster_o *)UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
      if ( ((unsigned __int8)SvtId & 1) != 0 )
      {
        if ( !v60 )
          goto LABEL_168;
        v64 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_110:
        UILabel__set_text((UILabel_o *)v60, v64, 0LL);
      }
    }
    this = v93;
    v65 = (int)(v94 - 2) < 0;
    v38 = ++v94;
  }
  while ( v65 != __OFSUB__(v94, 3) );
  v66 = v93->fields.battleCharaLevelButtonList;
  if ( !v66 )
    goto LABEL_168;
  v67 = 11LL;
  while ( 1 )
  {
    v68 = v67 - 8;
    if ( (int)v67 - 8 >= (signed int)v66->max_length )
      break;
    max_length = commandCardSelectList->max_length;
    if ( (int)v68 >= max_length )
    {
      v70 = 0;
    }
    else
    {
      if ( v68 >= max_length )
        goto LABEL_170;
      v70 = *((_DWORD *)&commandCardSelectList->obj.klass + v67) == v90;
    }
    v71 = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !v71 )
      goto LABEL_168;
    if ( v68 >= v71->max_length )
      goto LABEL_170;
    v72 = v71->m_Items[v68];
    v73 = v92 && (int)v68 < max_length;
    if ( (int)v68 >= max_length )
    {
      if ( !v72 )
        goto LABEL_168;
      UIRangeLabel__Clear(v72, 0LL);
    }
    else
    {
      SvtId = (WarQuestSelectionMaster_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( v68 >= commandCardSelectList->max_length )
        goto LABEL_170;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_168;
      Entity = ServantCostumeMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int32_t)SvtId,
                 commandCardSelectList->m_Items[v68 + 1],
                 0LL);
      if ( Entity )
      {
        ShortName = ServantCostumeEntity__getShortName(Entity, 0LL);
        if ( !v72 )
          goto LABEL_168;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_40F87E5 )
        {
          sub_B16FFC(&LocalizationManager_TypeInfo, v75);
          byte_40F87E5 = 1;
        }
        v77 = LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v77 = LocalizationManager_TypeInfo;
        }
        ShortName = v77->static_fields->unknownNameText;
        if ( !v72 )
          goto LABEL_168;
      }
      v78 = v70 & v73;
      if ( (v70 & v73) != 0 )
        v79 = v32;
      else
        v79 = v27;
      if ( v78 )
        v80 = v31;
      else
        v80 = v26;
      if ( v78 )
        v81 = v30;
      else
        v81 = v25;
      if ( v78 )
        v82 = v29;
      else
        v82 = v24;
      UIRangeLabel__set_effectColor(v72, *(UnityEngine_Color_o *)(&v79 - 3), 0LL);
      UIRangeLabel__Set(v72, ShortName, 0LL, 1, 0, 0LL);
      this = v93;
    }
    v83 = this->fields.battleCharaLevelSpriteList;
    if ( !v83 )
      goto LABEL_168;
    if ( v68 >= v83->max_length )
      goto LABEL_170;
    v84 = v83->m_Items[v68];
    if ( !v84 )
      goto LABEL_168;
    v85 = &StringLiteral_16899/*"btn_bg_20"*/;
    if ( v70 )
      v85 = &StringLiteral_16900/*"btn_bg_21"*/;
    UISprite__set_spriteName(v84, (System_String_o *)*v85, 0LL);
    v86 = this->fields.battleCharaLevelButtonList;
    if ( !v86 )
      goto LABEL_168;
    if ( v68 >= v86->max_length )
      goto LABEL_170;
    v87 = v86->m_Items[v68];
    if ( (v70 & v73) != 0 )
    {
      if ( !v87 )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(v87, 0, v73 == 0 || isInit, 0LL);
    }
    else if ( (int)v68 >= max_length )
    {
      if ( !v87 )
        goto LABEL_168;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v87, 0LL);
      if ( !gameObject )
        goto LABEL_168;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    else
    {
      if ( !v87 )
        goto LABEL_168;
      UICommonButton__SetButtonEnable(v87, v73 & ~v70, v73 == 0 || isInit, 0LL);
    }
    v66 = this->fields.battleCharaLevelButtonList;
    ++v67;
    if ( !v66 )
      goto LABEL_168;
  }
}


void __fastcall ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  struct UISprite_o *baseSprite; // x8
  UIWidget_o *maskSprite; // x0
  UIWidget_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Transform_o *transform; // x0
  System_String_o *Empty; // x21
  __int64 *v18; // x8
  UnityEngine_GameObject_o *maskBase; // x0
  UILabel_o *maskInfoLabel; // x0
  UILabel_o *v21; // x0
  UILabel_o *v22; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE92 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    sub_B16FFC(&string_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11962/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v7);
    sub_B16FFC(&StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_COMMAND"*/, v8);
    byte_40FDE92 = 1;
  }
  if ( !item )
    goto LABEL_37;
  if ( !item->fields.userSvtEntity )
    goto LABEL_25;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetRandomLimitCountOwn(0LL) && !item->fields.isEnableOwnRandomSetting )
  {
LABEL_25:
    maskBase = this->fields.maskBase;
    if ( maskBase )
    {
      UnityEngine_GameObject__SetActive(maskBase, 0, 0LL);
      return;
    }
LABEL_37:
    sub_B170D4();
  }
  v9 = this->fields.maskBase;
  if ( !v9 )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(v9, 1, 0LL);
  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_37;
  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_37;
  UIWidget__set_height(maskSprite, baseSprite->fields.mHeight, 0LL);
  v12 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v12 )
    goto LABEL_37;
  UIWidget__ResizeCollider(v12, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v13 )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !this->fields.baseSprite )
    goto LABEL_37;
  v15 = gameObject;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.baseSprite, 0LL);
  if ( !transform )
    goto LABEL_37;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, localPosition.fields.y, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetRandomLimitCountOwn(0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11958/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_COMMAND"*/;
LABEL_32:
    Empty = LocalizationManager__Get((System_String_o *)*v18, 0LL);
    goto LABEL_33;
  }
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_11962/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/;
    goto LABEL_32;
  }
LABEL_33:
  maskInfoLabel = this->fields.maskInfoLabel;
  if ( !maskInfoLabel )
    goto LABEL_37;
  UILabel__set_overflowMethod(maskInfoLabel, 2, 0LL);
  v21 = this->fields.maskInfoLabel;
  if ( !v21 )
    goto LABEL_37;
  UILabel__set_text(v21, Empty, 0LL);
  v22 = this->fields.maskInfoLabel;
  if ( !v22 )
    goto LABEL_37;
  UILabel__SetCondensedScale(v22, *(&this->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}