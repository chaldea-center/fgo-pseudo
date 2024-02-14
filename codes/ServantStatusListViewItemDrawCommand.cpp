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

  if ( (byte_4219D6F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UISprite___TypeInfo, v3);
    byte_4219D6F = 1;
  }
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UISprite_array *)sub_B0D8BC(UISprite___TypeInfo, (unsigned int)v4->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v5;
  sub_B0D840(
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
      v19 = sub_B0D9A8(this);
      sub_B0D948(v19, 0LL);
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
      sub_B0D97C(this);
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
  v17 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v14;
  v3->fields.titleBasePosition.fields.z = v16;
  v3->fields.titleBasePosition.fields.y = v15 - v18;
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
  v3->fields.cardBasePosition.fields.z = v21.fields.z;
  v3->fields.cardBasePosition.fields.y = v21.fields.y - v18;
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

  if ( (byte_4219D6B & 1) == 0 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, item);
    byte_4219D6B = 1;
  }
  if ( this->fields.isStart )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4212D36 )
    {
      sub_B0D8A4(&RandomLimitCountManager_TypeInfo, item);
      byte_4212D36 = 1;
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
  const MethodInfo *v24; // x1
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v28; // x1
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
  struct UnityEngine_GameObject_array *v47; // x8
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  struct System_Int32_array **p_commandCodeIdList; // x24
  System_Int32_array **v63; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  const MethodInfo *v71; // x1
  struct ServantEntity_o *svtEntity; // x9
  struct UnityEngine_GameObject_array *v73; // x8
  struct System_Int32_array *cardIds; // x28
  ImageLimitCount_c **v75; // x23
  unsigned __int64 v76; // x26
  const MethodInfo *v77; // x1
  int32_t v78; // w21
  int32_t v79; // w21
  ServantLimitImageMaster_o *v80; // x22
  const MethodInfo *v81; // x1
  unsigned __int64 v82; // x8
  int32_t v83; // w10
  struct System_Int32_array *v84; // x8
  unsigned __int64 v85; // x9
  int32_t v86; // w22
  struct System_Int32_array *v87; // x8
  unsigned __int64 v88; // x9
  int32_t v89; // w9
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v91; // x27
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  struct UnityEngine_GameObject_array *v98; // x8
  ImageLimitCount_c **v99; // x25
  ServantStatusListViewItem_o *v100; // x23
  struct System_Int32_array *v101; // x19
  ServantStatusListViewItemDrawCommand_o *v102; // x22
  System_Int32_array **gameObject; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  unsigned int *commandCardDataList; // x28
  __int64 v111; // x1
  __int64 v112; // x2
  BattleCommandData_o *v113; // x24
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  unsigned int *v120; // x0
  BattleServantConfConponent_c *v121; // x8
  __int64 v122; // x8
  BattleServantConfConponent_c *v123; // x8
  System_Int32_array **clickEventObject; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  unsigned int *v131; // x21
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  unsigned int *v138; // x0
  struct UnityEngine_GameObject_array *v139; // x8
  int32_t layer; // w21
  struct UISprite_array *v141; // x8
  UIWidget_o *v142; // x8
  struct UISprite_array *v143; // x8
  UISprite_o *v144; // x21
  struct UISprite_array *v145; // x8
  __int64 v146; // x0
  __int64 v147; // x0
  int32_t v148; // [xsp+10h] [xbp-90h]
  int32_t v149; // [xsp+14h] [xbp-8Ch]
  int32_t powerUpValue; // [xsp+18h] [xbp-88h]
  int32_t commandCodeId; // [xsp+1Ch] [xbp-84h]
  BattleServantConfConponent_o *p_commandCardDataList; // [xsp+28h] [xbp-78h]
  int32_t svtId; // [xsp+38h] [xbp-68h]
  int v154; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_4219D6C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&BattleCommandComponent___TypeInfo, v6);
    sub_B0D8A4(&BattleCommandData___TypeInfo, v7);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v11);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v12);
    sub_B0D8A4(&NGUITools_TypeInfo, v13);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&StringLiteral_15060/*"Unlit/Transparent Colored"*/, v17);
    sub_B0D8A4(&StringLiteral_4176/*"CommandCard("*/, v18);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v19);
    byte_4219D6C = 1;
  }
  v154 = 0;
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
                                                    v24);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              ConvertOverwriteCommandCardLimitCount,
                                              0LL);
          this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_116;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)this,
                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v28);
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
    sub_B0D97C(this);
  }
  if ( !commandCardBaseList )
    goto LABEL_116;
  v40 = (System_Int32_array **)sub_B0D8BC(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v40;
  sub_B0D840(p_commandCardDataList, v40, v41, v42, v43, v44, v45, v46);
  v47 = v5->fields.commandCardBaseList;
  if ( !v47 )
    goto LABEL_116;
  v48 = (System_Int32_array **)sub_B0D8BC(BattleCommandComponent___TypeInfo, v47->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v48;
  sub_B0D840((BattleServantConfConponent_o *)&v5->fields.commandCardComponentList, v48, v49, v50, v51, v52, v53, v54);
  if ( !v4 )
    goto LABEL_116;
  v61 = (System_Int32_array **)v4->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v61;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  sub_B0D840((BattleServantConfConponent_o *)&v5->fields.commandCodeIdList, v61, v55, v56, v57, v58, v59, v60);
  v63 = (System_Int32_array **)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v63;
  sub_B0D840((BattleServantConfConponent_o *)&v5->fields.commandCardParam, v63, v65, v66, v67, v68, v69, v70);
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
    svtId = ServantStatusListViewItem__get_SvtId(v4, v71);
    v78 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, v77);
    if ( (BYTE3((*v75)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v75)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v75);
    v79 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v78, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_116;
    v80 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v81);
    if ( !v80 )
      goto LABEL_116;
    this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       v80,
                                                       (int32_t)this,
                                                       v79,
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
      v145 = v5->fields.commandCodeSpriteList;
      if ( !v145 )
        goto LABEL_116;
      if ( v76 >= v145->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v145->m_Items[v76];
      if ( !this )
        goto LABEL_116;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      ++v76;
    }
    else
    {
      v148 = v83;
      v149 = (int)this;
      powerUpValue = v89;
      commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.commandCardPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_116;
      v91 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(v91, 0LL);
      if ( !this )
        goto LABEL_116;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v154 = v76 + 1;
      v96 = System_Int32__ToString((int32_t)&v154, 0LL);
      v97 = System_String__Concat_43852188(
              (System_String_o *)StringLiteral_4176/*"CommandCard("*/,
              v96,
              (System_String_o *)StringLiteral_658/*")"*/,
              0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v91, v97, 0LL);
      v98 = v5->fields.commandCardBaseList;
      if ( !v98 )
        goto LABEL_116;
      if ( v76 >= v98->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v98->m_Items[v76];
      if ( !this )
        goto LABEL_116;
      v99 = v75;
      commandCodeId = v86;
      v100 = v4;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_116;
      v101 = cardIds;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
      identity = UnityEngine_Quaternion__get_identity(0LL);
      UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
      v157.fields.x = x;
      v157.fields.y = y;
      v157.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v157, 0LL);
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        v91,
        (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v91,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_116;
      v102 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v102[1].fields.titleSprite = (struct UISprite_o *)gameObject;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v102[1].fields.titleSprite,
        gameObject,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v113 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v111, v112);
      BattleCommandData___ctor_18472988(v113, v148, svtId, v149, 0, 0LL);
      if ( !commandCardDataList )
        goto LABEL_116;
      if ( v113 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_B0D964(
                                                           v113,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_119:
          v147 = sub_B0D99C(this);
          sub_B0D948(v147, 0LL);
        }
      }
      if ( v76 >= commandCardDataList[6] )
        goto LABEL_118;
      v120 = &commandCardDataList[2 * v76];
      *((_QWORD *)v120 + 4) = v113;
      sub_B0D840(
        (BattleServantConfConponent_o *)(v120 + 8),
        (System_Int32_array **)v113,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      v121 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      if ( v76 >= LODWORD(v121->_1.namespaze) )
        goto LABEL_118;
      v122 = *((_QWORD *)&v121->_1.byval_arg.data + v76);
      if ( !v122 )
        goto LABEL_116;
      *(_DWORD *)(v122 + 44) = v76 + 1;
      v123 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      cardIds = v101;
      v4 = v100;
      v75 = v99;
      if ( v76 >= LODWORD(v123->_1.namespaze) )
        goto LABEL_118;
      BattleCommandComponent__setData(
        (BattleCommandComponent_o *)v102,
        *((BattleCommandData_o **)&v123->_1.byval_arg.data + v76),
        0LL,
        0,
        1,
        0,
        0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v102, (System_String_o *)StringLiteral_15060/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v102, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (System_Int32_array **)v5->fields.clickEventObject;
      v102[1].fields.titleSprite = (struct UISprite_o *)clickEventObject;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v102[1].fields.titleSprite,
        clickEventObject,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      v131 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v131 )
        goto LABEL_116;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_B0D964(v102, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
      if ( !this )
        goto LABEL_119;
      if ( v76 >= v131[6] )
        goto LABEL_118;
      v138 = &v131[2 * v76];
      *((_QWORD *)v138 + 4) = v102;
      sub_B0D840(
        (BattleServantConfConponent_o *)(v138 + 8),
        (System_Int32_array **)v102,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
      v139 = v5->fields.commandCardBaseList;
      if ( !v139 )
        goto LABEL_116;
      if ( v76 >= v139->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v139->m_Items[v76];
      if ( !this )
        goto LABEL_116;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v91, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v102, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v102, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v102,
                                                         0LL);
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( (_DWORD)this != -1 )
      {
        v141 = v5->fields.commandCodeSpriteList;
        if ( !v141 )
          goto LABEL_116;
        if ( v76 >= v141->max_length )
          goto LABEL_118;
        v142 = (UIWidget_o *)v141->m_Items[v76];
        if ( !v142 )
          goto LABEL_116;
        UIWidget__set_depth(v142, (_DWORD)this - 1, 0LL);
      }
      v143 = v5->fields.commandCodeSpriteList;
      if ( !v143 )
        goto LABEL_116;
      if ( v76 >= v143->max_length )
      {
LABEL_118:
        v146 = sub_B0D9A8(this);
        sub_B0D948(v146, 0LL);
      }
      v144 = v143->m_Items[v76];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v144, commandCodeId, 0LL);
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
  __int64 v15; // x1
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
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
  int v33; // w23
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w9
  int32_t buttonPitch; // w8
  int v37; // w10
  int v38; // w10
  int v39; // w8
  int v40; // w24
  UserServantEntity_o *v41; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v43; // w21
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v48; // s8
  double v49; // d0
  double v50; // d0
  int v51; // w22
  float v52; // s8
  float v53; // s11
  float v54; // s9
  float v55; // s10
  float v56; // s8
  float v57; // s11
  float v58; // s9
  float v59; // s8
  float v60; // s11
  float v61; // s9
  float v62; // s0
  float v63; // s8
  float v64; // s10
  float v65; // s9
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v69; // w8
  __int64 v70; // x22
  int32_t v71; // w27
  struct UICommonButton_o *reinforceButton; // x8
  int v73; // w8
  struct UICommonButton_o *engraveCodeButton; // x8
  int v75; // w8
  float v76; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v78; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219D6A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_12003/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/, v12);
    sub_B0D8A4(&StringLiteral_12001/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, v13);
    sub_B0D8A4(&StringLiteral_12002/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, v14);
    sub_B0D8A4(&StringLiteral_12000/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v15);
    byte_4219D6A = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_118;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_118;
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
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v22 )
        goto LABEL_118;
      UILabel__set_text(v22, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_118;
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
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
        if ( !v24 )
          goto LABEL_118;
        UILabel__set_text(v24, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v24 )
        goto LABEL_118;
      UILabel__set_text(v24, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_118;
      v21 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v79.fields.currentCryptoKey = v21;
    *(_QWORD *)&v79.fields.fakeValue = v20;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   v79,
                                                   0LL);
    if ( (_DWORD)IsServantLimitCountSeal )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_118;
      v26 = (int)IsServantLimitCountSeal;
      IsServantLimitCountSeal = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                     Master_WarQuestSelectionMaster,
                                                     (int32_t)IsServantLimitCountSeal,
                                                     3,
                                                     0LL);
      if ( ((unsigned __int8)IsServantLimitCountSeal & 1) != 0 )
      {
        IsServantLimitCountSeal = ServantLimitImageMaster__GetServantStatusExplanationText(
                                    Master_WarQuestSelectionMaster,
                                    (System_String_o *)StringLiteral_12003/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                    v26,
                                    0LL);
        v27 = this->fields.explanationLabel;
        if ( !v27 )
          goto LABEL_118;
        mText = v27->fields.mText;
        v29 = IsServantLimitCountSeal;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        Master_WarQuestSelectionMaster,
                                                        v26,
                                                        3,
                                                        0LL);
        v31 = System_String__Format(v29, LimitCountSealedServantName, 0LL);
        v32 = System_String__Concat_43849904(mText, v31, 0LL);
        UILabel__set_text(v27, v32, 0LL);
        v33 = 1;
        goto LABEL_44;
      }
    }
LABEL_43:
    v33 = 0;
LABEL_44:
    commandCardSelectList = item->fields.commandCardSelectList;
    if ( !commandCardSelectList )
      goto LABEL_118;
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
    if ( v33 )
      v40 = v39 + 32;
    else
      v40 = v39;
    if ( !item->fields._IsDisplayCombineButton_k__BackingField )
      goto LABEL_61;
    v41 = item->fields.userSvtEntity;
    if ( !v41 || UserServantEntity__IsLeave(v41, 0LL) )
      goto LABEL_61;
    IsServantLimitCountSeal = (System_String_o *)item->fields.userSvtEntity;
    if ( !IsServantLimitCountSeal )
      goto LABEL_118;
    IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)IsServantLimitCountSeal, 0LL);
    if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
    {
LABEL_61:
      v43 = 0;
LABEL_62:
      x = this->fields.baseSize.fields.x;
      y = this->fields.baseSize.fields.y;
      z = this->fields.baseSize.fields.z;
      baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v48 = y + (float)v40;
      if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
      {
        IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        v80.fields.x = x;
        v80.fields.y = v48;
        v80.fields.z = z;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v80, 0LL);
      }
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v49 = x;
        if ( x == INFINITY )
          v49 = -x;
        UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v49, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
        if ( IsServantLimitCountSeal )
        {
          v50 = v48;
          if ( v48 == INFINITY )
            v50 = -INFINITY;
          UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v50, 0LL);
          IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
          v51 = v40 >= 0 ? v40 : v40 + 1;
          if ( IsServantLimitCountSeal )
          {
            v52 = this->fields.titleBasePosition.fields.x;
            v53 = this->fields.titleBasePosition.fields.y;
            v54 = this->fields.titleBasePosition.fields.z;
            IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                           0LL);
            if ( IsServantLimitCountSeal )
            {
              v55 = (float)(v51 >> 1);
              v81.fields.y = v53 + v55;
              v81.fields.x = v52;
              v81.fields.z = v54;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v81, 0LL);
              IsServantLimitCountSeal = (System_String_o *)this->fields.cardBase;
              if ( IsServantLimitCountSeal )
              {
                v56 = this->fields.cardBasePosition.fields.x;
                v57 = this->fields.cardBasePosition.fields.y;
                v58 = this->fields.cardBasePosition.fields.z;
                IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                               0LL);
                if ( IsServantLimitCountSeal )
                {
                  v82.fields.y = v57 + v55;
                  v82.fields.x = v56;
                  v82.fields.z = v58;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v82, 0LL);
                  IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
                  if ( IsServantLimitCountSeal )
                  {
                    v59 = this->fields.levelButtonBasePosition.fields.x;
                    v60 = this->fields.levelButtonBasePosition.fields.y;
                    v61 = this->fields.levelButtonBasePosition.fields.z;
                    IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                                   0LL);
                    if ( IsServantLimitCountSeal )
                    {
                      v83.fields.y = v60 + v55;
                      v83.fields.x = v59;
                      v83.fields.z = v61;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                        v83,
                        0LL);
                      v62 = this->fields.explanationBasePosition.fields.y - v55;
                      IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                      if ( v33 )
                        v62 = v62 + 16.0;
                      v63 = v43 ? v62 + 50.0 : v62;
                      if ( IsServantLimitCountSeal )
                      {
                        v64 = this->fields.explanationBasePosition.fields.x;
                        v65 = this->fields.explanationBasePosition.fields.z;
                        IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                       0LL);
                        if ( IsServantLimitCountSeal )
                        {
                          v84.fields.x = v64;
                          v84.fields.y = v63;
                          v84.fields.z = v65;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                            v84,
                            0LL);
                          ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v66);
                          ServantStatusListViewItemDrawCommand__SetupMask(this, item, v43, v67);
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
LABEL_118:
      sub_B0D97C(IsServantLimitCountSeal);
    }
    commandCardParam = item->fields.commandCardParam;
    v40 += 50;
    if ( commandCardParam )
    {
      v69 = commandCardParam->max_length;
      if ( v69 < 1 )
      {
LABEL_108:
        IsServantLimitCountSeal = (System_String_o *)this->fields.engraveCodeObject;
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
        engraveCodeButton = this->fields.engraveCodeButton;
        if ( !engraveCodeButton )
          goto LABEL_118;
        engraveCodeButton->fields.isAlwaysValidOnClick = 1;
        IsServantLimitCountSeal = (System_String_o *)this->fields.engraveCodeButton;
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        UICommonButton__SetEnable(
          (UICommonButton_o *)IsServantLimitCountSeal,
          item->fields._CanMoveCombine_k__BackingField,
          0LL);
        v75 = v40 >= 0 ? v40 : v40 + 1;
        v76 = (float)-(v75 >> 1);
        GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v76, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceMaskSprite;
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                       0LL);
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceMaskSprite;
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsServantLimitCountSeal, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, v76, 0LL);
        v43 = 1;
        goto LABEL_62;
      }
      v70 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v70 >= v69 )
        {
          v78 = sub_B0D9A8(IsEventJoin);
          sub_B0D948(v78, 0LL);
        }
        IsEventJoin = BalanceConfig_TypeInfo;
        v71 = commandCardParam->m_Items[v70 + 1];
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsEventJoin = BalanceConfig_TypeInfo;
        }
        if ( v71 < IsEventJoin->static_fields->CommandCardParamUpMax )
          break;
        v69 = commandCardParam->max_length;
        if ( (int)++v70 >= v69 )
          goto LABEL_108;
      }
    }
    IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceObject;
    if ( !IsServantLimitCountSeal )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
    reinforceButton = this->fields.reinforceButton;
    if ( !reinforceButton )
      goto LABEL_118;
    reinforceButton->fields.isAlwaysValidOnClick = 1;
    IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceButton;
    if ( !IsServantLimitCountSeal )
      goto LABEL_118;
    UICommonButton__SetEnable(
      (UICommonButton_o *)IsServantLimitCountSeal,
      item->fields._CanMoveCombine_k__BackingField,
      0LL);
    if ( v40 >= 0 )
      v73 = v40;
    else
      v73 = v40 + 1;
    GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v73 >> 1), 0LL);
    goto LABEL_108;
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
  const MethodInfo *v59; // x1
  System_String_o *v60; // x1
  bool v61; // nf
  struct UICommonButton_array *v62; // x8
  __int64 v63; // x22
  il2cpp_array_size_t v64; // w27
  signed int max_length; // w24
  _BOOL4 v66; // w19
  struct UIRangeLabel_array *v67; // x9
  UIRangeLabel_o *v68; // x25
  int v69; // w20
  int32_t v70; // w1
  ServantCostumeEntity_o *Entity; // x0
  __int64 v72; // x1
  System_String_o *v73; // x26
  int v74; // w8
  float v75; // s3
  float v76; // s2
  float v77; // s1
  float v78; // s0
  struct UISprite_array *v79; // x8
  __int64 *v80; // x8
  struct UICommonButton_array *v81; // x8
  __int64 v82; // x0
  ServantCostumeMaster_o *v83; // [xsp+8h] [xbp-B8h]
  int32_t v84; // [xsp+14h] [xbp-ACh]
  _BOOL4 v86; // [xsp+1Ch] [xbp-A4h]
  ServantStatusListViewItemDrawCommand_o *v87; // [xsp+20h] [xbp-A0h]
  unsigned int v88; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4219D6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_8410/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_B0D8A4(&StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v12);
    sub_B0D8A4(&StringLiteral_12026/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v15);
    byte_4219D6D = 1;
  }
  v88 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_168:
    sub_B0D97C(Instance);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v83 = (ServantCostumeMaster_o *)Instance;
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
    v86 = 0;
    goto LABEL_13;
  }
  if ( item->fields.userSvtEntity )
    v18 = 1;
  else
    v18 = item->fields.userSvtCollectionEntity != 0LL;
  v86 = v18;
LABEL_13:
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            v17);
  maxCommandCardLimitCount = item->fields.maxCommandCardLimitCount;
  commandCardSelectList = item->fields.commandCardSelectList;
  v84 = ConvertOverwriteCommandCardLimitCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    byte_4211435 = 1;
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
  if ( !byte_4211436 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    v23 = LocalizationManager_TypeInfo;
    byte_4211436 = 1;
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
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_168;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v88 = 0;
  v34 = (ServantLimitImageMaster_o *)Instance;
  v35 = 0;
  v36 = this;
  v87 = this;
  do
  {
    if ( v35 <= maxCommandCardLimitCount )
    {
      if ( !commandCardSelectList )
        goto LABEL_168;
      if ( v35 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v39 = commandCardSelectList->m_Items[v35 + 1] == v84;
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
      v82 = sub_B0D9A8(Instance);
      sub_B0D948(v82, 0LL);
    }
    v41 = battleCharaLevelTitleRangeLabelList->m_Items[v35];
    v42 = v38 & v86;
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
      v48 = System_Int32__ToString((int32_t)&v88, 0LL);
      v49 = System_String__Concat_43849904((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v48, 0LL);
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
      v89.fields.r = v25;
      v89.fields.g = v26;
      v89.fields.b = v27;
      v89.fields.a = v28;
      UIRangeLabel__set_effectColor(v41, v89, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = (System_String_o *)StringLiteral_12026/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v50 = LocalizationManager__Get(v37, 0LL);
    UIRangeLabel__Set(v41, v50, 0LL, 1, 0, 0LL);
    battleCharaLevelSpriteList = v36->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_168;
    if ( v88 >= battleCharaLevelSpriteList->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)battleCharaLevelSpriteList->m_Items[v88];
    if ( !Instance )
      goto LABEL_168;
    v52 = &StringLiteral_17016/*"btn_bg_20"*/;
    if ( v39 )
      v52 = &StringLiteral_17017/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v52, 0LL);
    battleCharaLevelButtonList = v36->fields.battleCharaLevelButtonList;
    if ( !battleCharaLevelButtonList )
      goto LABEL_168;
    if ( v88 >= battleCharaLevelButtonList->max_length )
      goto LABEL_170;
    Instance = battleCharaLevelButtonList->m_Items[v88];
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
      if ( v88 >= limitCountSealLabel->max_length )
        goto LABEL_170;
      v56 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v88];
    }
    else
    {
      v56 = 0LL;
    }
    limitCountSealObjList = v87->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v88 >= limitCountSealObjList->max_length )
        goto LABEL_170;
      v58 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v88];
    }
    else
    {
      v58 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v54);
    if ( !commandCardSelectList )
      goto LABEL_168;
    if ( v88 >= commandCardSelectList->max_length )
      goto LABEL_170;
    if ( !v34 )
      goto LABEL_168;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(
           v34,
           (int32_t)Instance,
           commandCardSelectList->m_Items[v88 + 1] + 1,
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
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8410/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v56 )
          goto LABEL_168;
        v60 = (System_String_o *)Instance;
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
        v60 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_110:
        UILabel__set_text((UILabel_o *)v56, v60, 0LL);
      }
    }
    this = v87;
    v61 = (int)(v88 - 2) < 0;
    v35 = ++v88;
  }
  while ( v61 != __OFSUB__(v88, 3) );
  v62 = v87->fields.battleCharaLevelButtonList;
  if ( !v62 )
    goto LABEL_168;
  v63 = 11LL;
  while ( 1 )
  {
    v64 = v63 - 8;
    if ( (int)v63 - 8 >= (signed int)v62->max_length )
      break;
    max_length = commandCardSelectList->max_length;
    if ( (int)v64 >= max_length )
    {
      v66 = 0;
    }
    else
    {
      if ( v64 >= max_length )
        goto LABEL_170;
      v66 = *((_DWORD *)&commandCardSelectList->obj.klass + v63) == v84;
    }
    v67 = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !v67 )
      goto LABEL_168;
    if ( v64 >= v67->max_length )
      goto LABEL_170;
    v68 = v67->m_Items[v64];
    v69 = v86 && (int)v64 < max_length;
    if ( (int)v64 >= max_length )
    {
      if ( !v68 )
        goto LABEL_168;
      UIRangeLabel__Clear(v68, 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v59);
      if ( v64 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v70 = (int)Instance;
      Instance = (UICommonButton_o *)v83;
      if ( !v83 )
        goto LABEL_168;
      Entity = ServantCostumeMaster__GetEntity(v83, v70, commandCardSelectList->m_Items[v64 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v73 = (System_String_o *)Instance;
        if ( !v68 )
          goto LABEL_168;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_4212885 )
        {
          sub_B0D8A4(&LocalizationManager_TypeInfo, v72);
          byte_4212885 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v73 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v68 )
          goto LABEL_168;
      }
      v74 = v66 & v69;
      if ( (v66 & v69) != 0 )
        v75 = v33;
      else
        v75 = v28;
      if ( v74 )
        v76 = v32;
      else
        v76 = v27;
      if ( v74 )
        v77 = v31;
      else
        v77 = v26;
      if ( v74 )
        v78 = v30;
      else
        v78 = v25;
      UIRangeLabel__set_effectColor(v68, *(UnityEngine_Color_o *)(&v75 - 3), 0LL);
      UIRangeLabel__Set(v68, v73, 0LL, 1, 0, 0LL);
      this = v87;
    }
    v79 = this->fields.battleCharaLevelSpriteList;
    if ( !v79 )
      goto LABEL_168;
    if ( v64 >= v79->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)v79->m_Items[v64];
    if ( !Instance )
      goto LABEL_168;
    v80 = &StringLiteral_17016/*"btn_bg_20"*/;
    if ( v66 )
      v80 = &StringLiteral_17017/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v80, 0LL);
    v81 = this->fields.battleCharaLevelButtonList;
    if ( !v81 )
      goto LABEL_168;
    if ( v64 >= v81->max_length )
      goto LABEL_170;
    Instance = v81->m_Items[v64];
    if ( (v66 & v69) != 0 )
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(Instance, 0, v69 == 0 || isInit, 0LL);
    }
    else if ( (int)v64 >= max_length )
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
      UICommonButton__SetButtonEnable(Instance, v69 & ~v66, v69 == 0 || isInit, 0LL);
    }
    v62 = this->fields.battleCharaLevelButtonList;
    ++v63;
    if ( !v62 )
      goto LABEL_168;
  }
}


void __fastcall ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  UnityEngine_GameObject_o *v13; // x22
  float y; // s0
  System_String_o *Empty; // x22
  __int64 *v16; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4219D6E & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&OptionManager_TypeInfo, v7);
    sub_B0D8A4(&string_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_12050/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v9);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B0D8A4(&StringLiteral_12046/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_COMMAND"*/, v10);
    byte_4219D6E = 1;
  }
  if ( !item )
    goto LABEL_46;
  if ( !item->fields.userSvtEntity )
    goto LABEL_18;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetRandomLimitCountOwn(0LL) && !item->fields.isEnableOwnRandomSetting )
  {
LABEL_18:
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_46;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_46;
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  mHeight = baseSprite->fields.mHeight;
  if ( isDisplayCombineButton )
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight - 50, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_46;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_46;
    v13 = (UnityEngine_GameObject_o *)this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = localPosition.fields.y + 25.0;
  }
  else
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_46;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_46;
    v13 = (UnityEngine_GameObject_o *)this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_46;
    v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = v19.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY(v13, y, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
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
    v16 = &StringLiteral_12046/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_COMMAND"*/;
LABEL_38:
    Empty = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    goto LABEL_39;
  }
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_12050/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/;
    goto LABEL_38;
  }
LABEL_39:
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_46;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)this, Empty, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this )
    goto LABEL_46;
  UILabel__SetCondensedScale((UILabel_o *)this, *(&v6->fields.MASK_LABEL_MAX_WIDTH + 1), 0LL);
  if ( isDisplayCombineButton )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, 14.0, 0LL);
      return;
    }
LABEL_46:
    sub_B0D97C(this);
  }
}