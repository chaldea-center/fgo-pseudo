void __fastcall ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct UISprite_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418D19D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UISprite___TypeInfo, v3);
    byte_418D19D = 1;
  }
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UISprite_array *)sub_B2C374(UISprite___TypeInfo, (unsigned int)v4->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSpriteList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  float v8; // s0
  double v9; // d0
  struct UISprite_o *baseSprite; // x9
  int32_t mHeight; // w11
  int max_length; // kr00_4
  int v13; // w8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  int v17; // w8
  float v18; // s8
  __int64 v19; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  battleCharaLevelSpriteList = this->fields.battleCharaLevelSpriteList;
  if ( !battleCharaLevelSpriteList )
    goto LABEL_29;
  v3 = this;
  if ( (int)battleCharaLevelSpriteList->max_length > 3 )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_29;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.battleCharaLevelSpriteList;
    if ( !v6 )
      goto LABEL_29;
    if ( v6->max_length <= 3 )
    {
      v19 = sub_B2C460(this);
      sub_B2C400(v19, 0LL);
    }
    this = (ServantStatusListViewItemDrawCommand_o *)v6->m_Items[3];
    if ( !this )
      goto LABEL_29;
    v7 = v5;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_29;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v8 = v7 - localPosition.fields.y;
    battleCharaLevelSpriteList = v3->fields.battleCharaLevelSpriteList;
    v9 = (float)(v7 - localPosition.fields.y) == INFINITY ? -v8 : v8;
    buttonPitch = (int)v9;
    v3->fields.buttonPitch = (int)v9;
    if ( !battleCharaLevelSpriteList )
LABEL_29:
      sub_B2C434(this, method);
  }
  else
  {
    buttonPitch = this->fields.buttonPitch;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_29;
  mHeight = baseSprite->fields.mHeight;
  max_length = battleCharaLevelSpriteList->max_length;
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.titleSprite;
  v13 = max_length / 3 - 1;
  if ( max_length < 9 )
    v13 = 1;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - v13 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_29;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v17 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v14;
  v3->fields.titleBasePosition.fields.y = v15 - v18;
  v3->fields.titleBasePosition.fields.z = v16;
  if ( !this )
    goto LABEL_29;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_29;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.levelButtonBase;
  v3->fields.cardBasePosition.fields.x = v21.fields.x;
  v3->fields.cardBasePosition.fields.y = v21.fields.y - v18;
  v3->fields.cardBasePosition.fields.z = v21.fields.z;
  if ( !this )
    goto LABEL_29;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_29;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v22.fields.x;
  v3->fields.levelButtonBasePosition.fields.z = v22.fields.z;
  v3->fields.levelButtonBasePosition.fields.y = v22.fields.y - v18;
  if ( !this )
    goto LABEL_29;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_29;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v23.fields.x;
  v3->fields.explanationBasePosition.fields.z = v23.fields.z;
  v3->fields.explanationBasePosition.fields.y = v23.fields.y + v18;
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

  if ( (byte_418D199 & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, item);
    byte_418D199 = 1;
  }
  if ( this->fields.isStart )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4185F2D )
    {
      sub_B2C35C(&RandomLimitCountManager_TypeInfo, item);
      byte_4185F2D = 1;
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
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v27; // x1
  BattleServantConfConponent_c *klass; // x8
  __int64 v29; // x8
  BattleServantConfConponent_c *v30; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  int max_length; // w9
  int32_t v33; // w21
  struct System_Int32_array *commandCardParam; // x8
  int v35; // w9
  int32_t v36; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v38; // x22
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UnityEngine_GameObject_array *v46; // x8
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  struct System_Int32_array **p_commandCodeIdList; // x24
  System_Int32_array **v62; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct ServantEntity_o *svtEntity; // x9
  struct UnityEngine_GameObject_array *v71; // x8
  struct System_Int32_array *cardIds; // x28
  ImageLimitCount_c **v73; // x23
  unsigned __int64 v74; // x26
  const MethodInfo *v75; // x1
  int32_t v76; // w21
  int32_t v77; // w21
  ServantLimitImageMaster_o *v78; // x22
  const MethodInfo *v79; // x1
  unsigned __int64 v80; // x8
  int32_t v81; // w10
  struct System_Int32_array *v82; // x8
  unsigned __int64 v83; // x9
  int32_t v84; // w22
  struct System_Int32_array *v85; // x8
  unsigned __int64 v86; // x9
  int32_t v87; // w9
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v89; // x27
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  struct UnityEngine_GameObject_array *v96; // x8
  ImageLimitCount_c **v97; // x25
  ServantStatusListViewItem_o *v98; // x23
  struct System_Int32_array *v99; // x19
  ServantStatusListViewItemDrawCommand_o *v100; // x22
  System_Int32_array **gameObject; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  unsigned int *commandCardDataList; // x28
  BattleCommandData_o *v109; // x24
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  unsigned int *v116; // x0
  BattleServantConfConponent_c *v117; // x8
  __int64 v118; // x8
  BattleServantConfConponent_c *v119; // x8
  System_Int32_array **clickEventObject; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  unsigned int *v127; // x21
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  unsigned int *v134; // x0
  struct UnityEngine_GameObject_array *v135; // x8
  int32_t layer; // w21
  struct UISprite_array *v137; // x8
  UIWidget_o *v138; // x8
  struct UISprite_array *v139; // x8
  UISprite_o *v140; // x21
  struct UISprite_array *v141; // x8
  __int64 v142; // x0
  __int64 v143; // x0
  int32_t v144; // [xsp+10h] [xbp-90h]
  int32_t v145; // [xsp+14h] [xbp-8Ch]
  int32_t powerUpValue; // [xsp+18h] [xbp-88h]
  int32_t commandCodeId; // [xsp+1Ch] [xbp-84h]
  BattleServantConfConponent_o *p_commandCardDataList; // [xsp+28h] [xbp-78h]
  int32_t svtId; // [xsp+38h] [xbp-68h]
  int v150; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_418D19A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&BattleCommandComponent___TypeInfo, v6);
    sub_B2C35C(&BattleCommandData___TypeInfo, v7);
    sub_B2C35C(&BattleCommandData_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v11);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v12);
    sub_B2C35C(&NGUITools_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_15014/*"Unlit/Transparent Colored"*/, v17);
    sub_B2C35C(&StringLiteral_4163/*"CommandCard("*/, v18);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B2C35C(&StringLiteral_652/*")"*/, v19);
    byte_418D19A = 1;
  }
  v150 = 0;
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
                                                    (const MethodInfo *)item);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              ConvertOverwriteCommandCardLimitCount,
                                              0LL);
          this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_116;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)this,
                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v27);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_116;
          this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                             MasterData_WarQuestSelectionMaster,
                                                             (int32_t)this,
                                                             LimitCountByImageLimitCostumeIn,
                                                             0LL);
          klass = p_commandCardDataList->klass;
          if ( !p_commandCardDataList->klass )
            goto LABEL_116;
          if ( (unsigned int)v21 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_118;
          v29 = *((_QWORD *)&klass->_1.byval_arg.data + v21);
          if ( !v29 )
            goto LABEL_116;
          *(_DWORD *)(v29 + 24) = (_DWORD)this;
          v30 = p_commandCardDataList->klass;
          if ( !p_commandCardDataList->klass )
            goto LABEL_116;
          if ( (unsigned int)v21 >= LODWORD(v30->_1.namespaze) )
            goto LABEL_118;
          if ( !v23 )
            goto LABEL_116;
          BattleCommandComponent__setData(
            (BattleCommandComponent_o *)v23,
            *((BattleCommandData_o **)&v30->_1.byval_arg.data + v21),
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
          v33 = commandCodeIdList->m_Items[v21 + 1];
        }
        else
        {
          v33 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v35 = commandCardParam->max_length, (int)v21 < v35) )
        {
          if ( (unsigned int)v21 >= v35 )
            goto LABEL_118;
          v36 = commandCardParam->m_Items[v21 + 1];
          if ( !v23 )
            goto LABEL_116;
        }
        else
        {
          v36 = 0;
          if ( !v23 )
            goto LABEL_116;
        }
        BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v23, v36, 2, 1, 0LL);
        BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v23, v36, 0LL);
        commandCodeSpriteList = v5->fields.commandCodeSpriteList;
        if ( !commandCodeSpriteList )
          goto LABEL_116;
        if ( (unsigned int)v21 >= commandCodeSpriteList->max_length )
          goto LABEL_118;
        v38 = commandCodeSpriteList->m_Items[v21];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v38, v33, 0LL);
        commandCardBaseList = v5->fields.commandCardBaseList;
        ++v21;
        if ( !commandCardBaseList )
          goto LABEL_116;
      }
      goto LABEL_117;
    }
LABEL_116:
    sub_B2C434(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_116;
  v39 = (System_Int32_array **)sub_B2C374(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v39;
  sub_B2C2F8(p_commandCardDataList, v39, v40, v41, v42, v43, v44, v45);
  v46 = v5->fields.commandCardBaseList;
  if ( !v46 )
    goto LABEL_116;
  v47 = (System_Int32_array **)sub_B2C374(BattleCommandComponent___TypeInfo, v46->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v47;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->fields.commandCardComponentList, v47, v48, v49, v50, v51, v52, v53);
  if ( !v4 )
    goto LABEL_116;
  v60 = (System_Int32_array **)v4->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v60;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->fields.commandCodeIdList, v60, v54, v55, v56, v57, v58, v59);
  v62 = (System_Int32_array **)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v62;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->fields.commandCardParam, v62, v64, v65, v66, v67, v68, v69);
  svtEntity = v4->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_116;
  v71 = v5->fields.commandCardBaseList;
  if ( !v71 )
    goto LABEL_116;
  cardIds = svtEntity->fields.cardIds;
  v73 = &ImageLimitCount_TypeInfo;
  v74 = 0LL;
  while ( (__int64)v74 < (int)v71->max_length )
  {
    svtId = ServantStatusListViewItem__get_SvtId(v4, (const MethodInfo *)item);
    v76 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, v75);
    if ( (BYTE3((*v73)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v73)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v73);
    v77 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v76, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_116;
    v78 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v79);
    if ( !v78 )
      goto LABEL_116;
    this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       v78,
                                                       (int32_t)this,
                                                       v77,
                                                       0LL);
    if ( cardIds && (v80 = cardIds->max_length, (__int64)v74 < (int)v80) )
    {
      if ( v74 >= v80 )
        goto LABEL_118;
      v81 = cardIds->m_Items[v74 + 1];
    }
    else
    {
      v81 = 0;
    }
    v82 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v83 = v82->max_length, (__int64)v74 < (int)v83) )
    {
      if ( v74 >= v83 )
        goto LABEL_118;
      v84 = v82->m_Items[v74 + 1];
    }
    else
    {
      v84 = 0;
    }
    v85 = *p_commandCardParam;
    if ( *p_commandCardParam && (v86 = v85->max_length, (__int64)v74 < (int)v86) )
    {
      if ( v74 >= v86 )
        goto LABEL_118;
      v87 = v85->m_Items[v74 + 1];
    }
    else
    {
      v87 = 0;
    }
    if ( (unsigned int)(v81 - 1) > 2 )
    {
      v141 = v5->fields.commandCodeSpriteList;
      if ( !v141 )
        goto LABEL_116;
      if ( v74 >= v141->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v141->m_Items[v74];
      if ( !this )
        goto LABEL_116;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      ++v74;
    }
    else
    {
      v144 = v81;
      v145 = (int)this;
      powerUpValue = v87;
      commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.commandCardPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_116;
      v89 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(v89, 0LL);
      if ( !this )
        goto LABEL_116;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v150 = v74 + 1;
      v94 = System_Int32__ToString((int32_t)&v150, 0LL);
      v95 = System_String__Concat_44307816(
              (System_String_o *)StringLiteral_4163/*"CommandCard("*/,
              v94,
              (System_String_o *)StringLiteral_652/*")"*/,
              0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v89, v95, 0LL);
      v96 = v5->fields.commandCardBaseList;
      if ( !v96 )
        goto LABEL_116;
      if ( v74 >= v96->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v96->m_Items[v74];
      if ( !this )
        goto LABEL_116;
      v97 = v73;
      commandCodeId = v84;
      v98 = v4;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_116;
      v99 = cardIds;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
      identity = UnityEngine_Quaternion__get_identity(0LL);
      UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
      v153.fields.x = x;
      v153.fields.y = y;
      v153.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v153, 0LL);
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        v89,
        (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v89,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_116;
      v100 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v100[1].fields.levelButtonBase = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v100[1].fields.levelButtonBase,
        gameObject,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v109 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_18363144(v109, v144, svtId, v145, 0, 0LL);
      if ( !commandCardDataList )
        goto LABEL_116;
      if ( v109 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_B2C41C(
                                                           v109,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_119:
          v143 = sub_B2C454(this);
          sub_B2C400(v143, 0LL);
        }
      }
      if ( v74 >= commandCardDataList[6] )
        goto LABEL_118;
      v116 = &commandCardDataList[2 * v74];
      *((_QWORD *)v116 + 4) = v109;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v116 + 8),
        (System_Int32_array **)v109,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      v117 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      if ( v74 >= LODWORD(v117->_1.namespaze) )
        goto LABEL_118;
      v118 = *((_QWORD *)&v117->_1.byval_arg.data + v74);
      if ( !v118 )
        goto LABEL_116;
      *(_DWORD *)(v118 + 44) = v74 + 1;
      v119 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      cardIds = v99;
      v4 = v98;
      v73 = v97;
      if ( v74 >= LODWORD(v119->_1.namespaze) )
        goto LABEL_118;
      BattleCommandComponent__setData(
        (BattleCommandComponent_o *)v100,
        *((BattleCommandData_o **)&v119->_1.byval_arg.data + v74),
        0LL,
        0,
        1,
        0,
        0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v100, (System_String_o *)StringLiteral_15014/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v100, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (System_Int32_array **)v5->fields.clickEventObject;
      v100[1].fields.levelButtonBase = (struct UnityEngine_GameObject_o *)clickEventObject;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v100[1].fields.levelButtonBase,
        clickEventObject,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126);
      v127 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v127 )
        goto LABEL_116;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_B2C41C(v100, *(_QWORD *)(*(_QWORD *)v127 + 64LL));
      if ( !this )
        goto LABEL_119;
      if ( v74 >= v127[6] )
        goto LABEL_118;
      v134 = &v127[2 * v74];
      *((_QWORD *)v134 + 4) = v100;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v134 + 8),
        (System_Int32_array **)v100,
        v128,
        v129,
        v130,
        v131,
        v132,
        v133);
      v135 = v5->fields.commandCardBaseList;
      if ( !v135 )
        goto LABEL_116;
      if ( v74 >= v135->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v135->m_Items[v74];
      if ( !this )
        goto LABEL_116;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v89, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v100, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v100, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v100,
                                                         0LL);
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( (_DWORD)this != -1 )
      {
        v137 = v5->fields.commandCodeSpriteList;
        if ( !v137 )
          goto LABEL_116;
        if ( v74 >= v137->max_length )
          goto LABEL_118;
        v138 = (UIWidget_o *)v137->m_Items[v74];
        if ( !v138 )
          goto LABEL_116;
        UIWidget__set_depth(v138, (_DWORD)this - 1, 0LL);
      }
      v139 = v5->fields.commandCodeSpriteList;
      if ( !v139 )
        goto LABEL_116;
      if ( v74 >= v139->max_length )
      {
LABEL_118:
        v142 = sub_B2C460(this);
        sub_B2C400(v142, 0LL);
      }
      v140 = v139->m_Items[v74];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v140, commandCodeId, 0LL);
      ++v74;
    }
    v71 = v5->fields.commandCardBaseList;
    if ( !v71 )
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
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v20; // x22
  __int64 v21; // x23
  UILabel_o *v22; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v24; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v26; // w22
  struct UILabel_o *v27; // x23
  System_String_o *mText; // x25
  System_String_o *v29; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w8
  int32_t buttonPitch; // w9
  float x; // s8
  float y; // s9
  float z; // s10
  int v39; // w10
  bool v40; // cc
  int v41; // w10
  UnityEngine_Object_o *baseCollider; // x21
  int v43; // w9
  int v44; // w23
  float v45; // s9
  double v46; // d0
  double v47; // d0
  int v48; // w21
  float v49; // s8
  float v50; // s11
  float v51; // s9
  float v52; // s10
  float v53; // s8
  float v54; // s11
  float v55; // s9
  float v56; // s8
  float v57; // s11
  float v58; // s9
  float v59; // s8
  float v60; // s10
  float v61; // s9
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D198 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, item);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_11966/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/, v11);
    sub_B2C35C(&StringLiteral_11964/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, v12);
    sub_B2C35C(&StringLiteral_11965/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, v13);
    sub_B2C35C(&StringLiteral_11963/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v14);
    byte_418D198 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11963/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_83;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_83;
      v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v22 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11964/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v22 )
        goto LABEL_83;
      UILabel__set_text(v22, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_83;
      v21 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
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
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11965/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
        if ( !v24 )
          goto LABEL_83;
        UILabel__set_text(v24, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_11965/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v24 )
        goto LABEL_83;
      UILabel__set_text(v24, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_83;
      v21 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v21;
    *(_QWORD *)&v64.fields.fakeValue = v20;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v64,
                                                   0LL);
    v26 = (int)IsServantLimitCountSeal;
    if ( !(_DWORD)IsServantLimitCountSeal )
      goto LABEL_44;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_83;
    IsServantLimitCountSeal = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                   Master_WarQuestSelectionMaster,
                                                   (int32_t)IsServantLimitCountSeal,
                                                   3,
                                                   0LL);
    if ( ((unsigned __int8)IsServantLimitCountSeal & 1) != 0 )
    {
      IsServantLimitCountSeal = ServantLimitImageMaster__GetServantStatusExplanationText(
                                  Master_WarQuestSelectionMaster,
                                  (System_String_o *)StringLiteral_11966/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                  v26,
                                  0LL);
      v27 = this->fields.explanationLabel;
      if ( !v27 )
        goto LABEL_83;
      mText = v27->fields.mText;
      v29 = IsServantLimitCountSeal;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      Master_WarQuestSelectionMaster,
                                                      v26,
                                                      3,
                                                      0LL);
      v31 = System_String__Format(v29, LimitCountSealedServantName, 0LL);
      v32 = System_String__Concat_44305532(mText, v31, 0LL);
      UILabel__set_text(v27, v32, 0LL);
      v26 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v26 = 0;
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
    v39 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v39;
    v40 = v39 < 3;
    v41 = v39 - 1;
    if ( v40 )
      v41 = 1;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    v43 = v41 * buttonPitch;
    if ( v26 )
      v44 = v43 + 32;
    else
      v44 = v43;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v45 = y + (float)v44;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
      if ( !IsServantLimitCountSeal )
        goto LABEL_83;
      v65.fields.x = x;
      v65.fields.y = v45;
      v65.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v65, 0LL);
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
    if ( IsServantLimitCountSeal )
    {
      v46 = x;
      if ( x == INFINITY )
        v46 = -x;
      UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v46, 0LL);
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v47 = v45;
        if ( v45 == INFINITY )
          v47 = -INFINITY;
        UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v47, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
        v48 = v44 >= 0 ? v44 : v44 + 1;
        if ( IsServantLimitCountSeal )
        {
          v49 = this->fields.titleBasePosition.fields.x;
          v50 = this->fields.titleBasePosition.fields.y;
          v51 = this->fields.titleBasePosition.fields.z;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( IsServantLimitCountSeal )
          {
            v52 = (float)(v48 >> 1);
            v66.fields.y = v50 + v52;
            v66.fields.x = v49;
            v66.fields.z = v51;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v66, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.cardBase;
            if ( IsServantLimitCountSeal )
            {
              v53 = this->fields.cardBasePosition.fields.x;
              v54 = this->fields.cardBasePosition.fields.y;
              v55 = this->fields.cardBasePosition.fields.z;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                             0LL);
              if ( IsServantLimitCountSeal )
              {
                v67.fields.y = v54 + v52;
                v67.fields.x = v53;
                v67.fields.z = v55;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v67, 0LL);
                IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
                if ( IsServantLimitCountSeal )
                {
                  v56 = this->fields.levelButtonBasePosition.fields.x;
                  v57 = this->fields.levelButtonBasePosition.fields.y;
                  v58 = this->fields.levelButtonBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                                 0LL);
                  if ( IsServantLimitCountSeal )
                  {
                    v68.fields.y = v57 + v52;
                    v68.fields.x = v56;
                    v68.fields.z = v58;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                      v68,
                      0LL);
                    IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                    v59 = v26
                        ? (float)(this->fields.explanationBasePosition.fields.y - v52) + 16.0
                        : this->fields.explanationBasePosition.fields.y - v52;
                    if ( IsServantLimitCountSeal )
                    {
                      v60 = this->fields.explanationBasePosition.fields.x;
                      v61 = this->fields.explanationBasePosition.fields.z;
                      IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                     0LL);
                      if ( IsServantLimitCountSeal )
                      {
                        v69.fields.x = v60;
                        v69.fields.y = v59;
                        v69.fields.z = v61;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                          v69,
                          0LL);
                        ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v62);
                        ServantStatusListViewItemDrawCommand__SetupMask(this, item, v63);
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
    sub_B2C434(IsServantLimitCountSeal, v18);
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
  UICommonButton_o *Instance; // x0
  const MethodInfo *v17; // x1
  _BOOL4 v18; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  __int64 v20; // x1
  int32_t maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v23; // x0
  float *static_fields; // x8
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s11
  float *v29; // x8
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s15
  ServantLimitImageMaster_o *v34; // x25
  int v35; // w8
  ServantStatusListViewItemDrawCommand_o *v36; // x21
  System_String_o *v37; // x0
  int v38; // w9
  _BOOL4 v39; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v41; // x26
  int v42; // w20
  int v43; // w8
  float v44; // s3
  float v45; // s2
  float v46; // s1
  float v47; // s0
  System_String_o *v48; // x0
  System_String_o *v49; // x27
  System_String_o *v50; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v52; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  const MethodInfo *v54; // x1
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v56; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v58; // x27
  System_String_o *v59; // x1
  bool v60; // nf
  struct UICommonButton_array *v61; // x8
  __int64 v62; // x22
  il2cpp_array_size_t v63; // w27
  signed int max_length; // w24
  _BOOL4 v65; // w19
  struct UIRangeLabel_array *v66; // x9
  UIRangeLabel_o *v67; // x25
  int v68; // w20
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v70; // x26
  int v71; // w8
  float v72; // s3
  float v73; // s2
  float v74; // s1
  float v75; // s0
  struct UISprite_array *v76; // x8
  __int64 *v77; // x8
  struct UICommonButton_array *v78; // x8
  __int64 v79; // x0
  ServantCostumeMaster_o *v80; // [xsp+8h] [xbp-B8h]
  int32_t v81; // [xsp+14h] [xbp-ACh]
  _BOOL4 v83; // [xsp+1Ch] [xbp-A4h]
  ServantStatusListViewItemDrawCommand_o *v84; // [xsp+20h] [xbp-A0h]
  unsigned int v85; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418D19B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_8389/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B2C35C(&StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, v12);
    sub_B2C35C(&StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v15);
    byte_418D19B = 1;
  }
  v85 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_168:
    sub_B2C434(Instance, v17);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v80 = (ServantCostumeMaster_o *)Instance;
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
    v83 = 0;
    goto LABEL_13;
  }
  if ( item->fields.userSvtEntity )
    v18 = 1;
  else
    v18 = item->fields.userSvtCollectionEntity != 0LL;
  v83 = v18;
LABEL_13:
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            v17);
  maxCommandCardLimitCount = item->fields.maxCommandCardLimitCount;
  commandCardSelectList = item->fields.commandCardSelectList;
  v81 = ConvertOverwriteCommandCardLimitCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    byte_4184963 = 1;
  }
  v23 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v23->static_fields;
  v25 = static_fields[20];
  v26 = static_fields[21];
  v27 = static_fields[22];
  v28 = static_fields[23];
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    v23 = LocalizationManager_TypeInfo;
    byte_4184964 = 1;
  }
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = LocalizationManager_TypeInfo;
  }
  v29 = (float *)v23->static_fields;
  v30 = v29[24];
  v31 = v29[25];
  v32 = v29[26];
  v33 = v29[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_168;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v85 = 0;
  v34 = (ServantLimitImageMaster_o *)Instance;
  v35 = 0;
  v36 = this;
  v84 = this;
  do
  {
    if ( v35 <= maxCommandCardLimitCount )
    {
      if ( !commandCardSelectList )
        goto LABEL_168;
      if ( v35 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v39 = commandCardSelectList->m_Items[v35 + 1] == v81;
      v38 = 1;
    }
    else
    {
      v38 = 0;
      v39 = 0;
    }
    battleCharaLevelTitleRangeLabelList = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !battleCharaLevelTitleRangeLabelList )
      goto LABEL_168;
    if ( v35 >= battleCharaLevelTitleRangeLabelList->max_length )
    {
LABEL_170:
      v79 = sub_B2C460(Instance);
      sub_B2C400(v79, 0LL);
    }
    v41 = battleCharaLevelTitleRangeLabelList->m_Items[v35];
    v42 = v38 & v83;
    if ( v38 || item->fields.servantLeaderInfo )
    {
      if ( !v41 )
        goto LABEL_168;
      v43 = v39 & v42;
      if ( (v39 & v42) != 0 )
        v44 = v33;
      else
        v44 = v28;
      if ( v43 )
        v45 = v32;
      else
        v45 = v27;
      if ( v43 )
        v46 = v31;
      else
        v46 = v26;
      if ( v43 )
        v47 = v30;
      else
        v47 = v25;
      UIRangeLabel__set_effectColor(v41, *(UnityEngine_Color_o *)(&v44 - 3), 0LL);
      v48 = System_Int32__ToString((int32_t)&v85, 0LL);
      v49 = System_String__Concat_44305532((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v48, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = v49;
    }
    else
    {
      if ( !v41 )
        goto LABEL_168;
      v86.fields.r = v25;
      v86.fields.g = v26;
      v86.fields.b = v27;
      v86.fields.a = v28;
      UIRangeLabel__set_effectColor(v41, v86, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = (System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v50 = LocalizationManager__Get(v37, 0LL);
    UIRangeLabel__Set(v41, v50, 0LL, 1, 0, 0LL);
    battleCharaLevelSpriteList = v36->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_168;
    if ( v85 >= battleCharaLevelSpriteList->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)battleCharaLevelSpriteList->m_Items[v85];
    if ( !Instance )
      goto LABEL_168;
    v52 = &StringLiteral_16965/*"btn_bg_20"*/;
    if ( v39 )
      v52 = &StringLiteral_16966/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v52, 0LL);
    battleCharaLevelButtonList = v36->fields.battleCharaLevelButtonList;
    if ( !battleCharaLevelButtonList )
      goto LABEL_168;
    if ( v85 >= battleCharaLevelButtonList->max_length )
      goto LABEL_170;
    Instance = battleCharaLevelButtonList->m_Items[v85];
    if ( (v39 & v42) != 0 )
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(Instance, 0, v42 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetButtonEnable(Instance, v42 & ~v39, v42 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = v36->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v85 >= limitCountSealLabel->max_length )
        goto LABEL_170;
      v56 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v85];
    }
    else
    {
      v56 = 0LL;
    }
    limitCountSealObjList = v84->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v85 >= limitCountSealObjList->max_length )
        goto LABEL_170;
      v58 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v85];
    }
    else
    {
      v58 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v54);
    if ( !commandCardSelectList )
      goto LABEL_168;
    if ( v85 >= commandCardSelectList->max_length )
      goto LABEL_170;
    if ( !v34 )
      goto LABEL_168;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(
           v34,
           (int32_t)Instance,
           commandCardSelectList->m_Items[v85 + 1] + 1,
           0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v58 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v58, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8389/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v56 )
          goto LABEL_168;
        v59 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v58 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v58, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v56 )
          goto LABEL_168;
        v59 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_110:
        UILabel__set_text((UILabel_o *)v56, v59, 0LL);
      }
    }
    this = v84;
    v60 = (int)(v85 - 2) < 0;
    v35 = ++v85;
  }
  while ( v60 != __OFSUB__(v85, 3) );
  v61 = v84->fields.battleCharaLevelButtonList;
  if ( !v61 )
    goto LABEL_168;
  v62 = 11LL;
  while ( 1 )
  {
    v63 = v62 - 8;
    if ( (int)v62 - 8 >= (signed int)v61->max_length )
      break;
    max_length = commandCardSelectList->max_length;
    if ( (int)v63 >= max_length )
    {
      v65 = 0;
    }
    else
    {
      if ( v63 >= max_length )
        goto LABEL_170;
      v65 = *((_DWORD *)&commandCardSelectList->obj.klass + v62) == v81;
    }
    v66 = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !v66 )
      goto LABEL_168;
    if ( v63 >= v66->max_length )
      goto LABEL_170;
    v67 = v66->m_Items[v63];
    v68 = v83 && (int)v63 < max_length;
    if ( (int)v63 >= max_length )
    {
      if ( !v67 )
        goto LABEL_168;
      UIRangeLabel__Clear(v67, 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v17);
      if ( v63 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v17 = (const MethodInfo *)(unsigned int)Instance;
      Instance = (UICommonButton_o *)v80;
      if ( !v80 )
        goto LABEL_168;
      Entity = ServantCostumeMaster__GetEntity(v80, (int32_t)v17, commandCardSelectList->m_Items[v63 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v70 = (System_String_o *)Instance;
        if ( !v67 )
          goto LABEL_168;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_4185BC0 )
        {
          sub_B2C35C(&LocalizationManager_TypeInfo, v17);
          byte_4185BC0 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v70 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v67 )
          goto LABEL_168;
      }
      v71 = v65 & v68;
      if ( (v65 & v68) != 0 )
        v72 = v33;
      else
        v72 = v28;
      if ( v71 )
        v73 = v32;
      else
        v73 = v27;
      if ( v71 )
        v74 = v31;
      else
        v74 = v26;
      if ( v71 )
        v75 = v30;
      else
        v75 = v25;
      UIRangeLabel__set_effectColor(v67, *(UnityEngine_Color_o *)(&v72 - 3), 0LL);
      UIRangeLabel__Set(v67, v70, 0LL, 1, 0, 0LL);
      this = v84;
    }
    v76 = this->fields.battleCharaLevelSpriteList;
    if ( !v76 )
      goto LABEL_168;
    if ( v63 >= v76->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)v76->m_Items[v63];
    if ( !Instance )
      goto LABEL_168;
    v77 = &StringLiteral_16965/*"btn_bg_20"*/;
    if ( v65 )
      v77 = &StringLiteral_16966/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v77, 0LL);
    v78 = this->fields.battleCharaLevelButtonList;
    if ( !v78 )
      goto LABEL_168;
    if ( v63 >= v78->max_length )
      goto LABEL_170;
    Instance = v78->m_Items[v63];
    if ( (v65 & v68) != 0 )
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(Instance, 0, v68 == 0 || isInit, 0LL);
    }
    else if ( (int)v63 >= max_length )
    {
      if ( !Instance )
        goto LABEL_168;
      Instance = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_168;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetButtonEnable(Instance, v68 & ~v65, v68 == 0 || isInit, 0LL);
    }
    v61 = this->fields.battleCharaLevelButtonList;
    ++v62;
    if ( !v61 )
      goto LABEL_168;
  }
}


void __fastcall ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *v10; // x21
  System_String_o *Empty; // x21
  __int64 *v12; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_418D19C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_12012/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v7);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B2C35C(&StringLiteral_12008/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_COMMAND"*/, v8);
    byte_418D19C = 1;
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
    this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskBase;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_37:
    sub_B2C434(this, item);
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_37;
  this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_37;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !v4->fields.baseSprite )
    goto LABEL_37;
  v10 = (UnityEngine_GameObject_o *)this;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)v4->fields.baseSprite,
                                                     0LL);
  if ( !this )
    goto LABEL_37;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, localPosition.fields.y, 0LL);
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
    v12 = &StringLiteral_12008/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_COMMAND"*/;
LABEL_32:
    Empty = LocalizationManager__Get((System_String_o *)*v12, 0LL);
    goto LABEL_33;
  }
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_12012/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/;
    goto LABEL_32;
  }
LABEL_33:
  this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v4->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_37;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v4->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
}