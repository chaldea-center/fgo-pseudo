void __fastcall ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UISprite_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_438F2C5 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&UISprite___TypeInfo);
    byte_438F2C5 = 1;
  }
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UISprite_array *)sub_B775DC(UISprite___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSpriteList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  *(_QWORD *)&this->fields.transformNameAddHeight = 0xFFFFFF9C00000022LL;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
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
      v19 = sub_B776C8(this);
      sub_B77668(v19, 0LL);
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
      sub_B7769C(this, method);
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

  if ( (byte_438F2C1 & 1) == 0 )
  {
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    byte_438F2C1 = 1;
  }
  if ( this->fields.isStart )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4389478 )
    {
      sub_B775C4(&RandomLimitCountManager_TypeInfo);
      byte_4389478 = 1;
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
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  __int64 v7; // x24
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v9; // x22
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  BattleServantConfConponent_c *klass; // x8
  __int64 v14; // x8
  BattleServantConfConponent_c *v15; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  int max_length; // w9
  int32_t v18; // w23
  struct System_Int32_array *commandCardParam; // x8
  int v20; // w9
  int32_t v21; // w21
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v23; // x21
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_GameObject_array *v31; // x8
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  struct System_Int32_array **p_commandCodeIdList; // x23
  System_Int32_array **v47; // x1
  struct System_Int32_array **p_commandCardParam; // x28
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array *CommandCardIds; // x22
  int32_t v56; // w21
  int32_t v57; // w21
  struct UnityEngine_GameObject_array *v58; // x8
  unsigned __int64 v59; // x24
  unsigned __int64 v60; // x8
  int32_t v61; // w26
  struct System_Int32_array *v62; // x8
  unsigned __int64 v63; // x9
  int32_t v64; // w27
  struct System_Int32_array *v65; // x8
  unsigned __int64 v66; // x9
  int32_t v67; // w9
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v69; // x25
  UnityEngine_Transform_o *transform; // x22
  unsigned __int64 v71; // x27
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  struct UnityEngine_GameObject_array *v77; // x8
  ServantStatusListViewItem_o *v78; // x28
  ServantStatusListViewItemDrawCommand_o *v79; // x22
  System_Int32_array **gameObject; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  unsigned int *commandCardDataList; // x19
  BattleCommandData_o *v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  unsigned int *v95; // x0
  BattleServantConfConponent_c *v96; // x8
  __int64 v97; // x8
  BattleServantConfConponent_c *v98; // x8
  System_Int32_array **clickEventObject; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  unsigned int *v106; // x19
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  unsigned int *v113; // x0
  struct UnityEngine_GameObject_array *v114; // x8
  int32_t layer; // w21
  struct UISprite_array *v116; // x8
  UIWidget_o *v117; // x8
  struct UISprite_array *v118; // x8
  UISprite_o *v119; // x21
  struct UISprite_array *v120; // x8
  __int64 v121; // x0
  __int64 v122; // x0
  int32_t limitCount; // [xsp+4h] [xbp-9Ch]
  System_Int32_array *v124; // [xsp+8h] [xbp-98h]
  int32_t svtId; // [xsp+20h] [xbp-80h]
  int32_t powerUpValue; // [xsp+24h] [xbp-7Ch]
  BattleServantConfConponent_o *p_commandCardDataList; // [xsp+28h] [xbp-78h]
  int32_t commandCodeId; // [xsp+38h] [xbp-68h]
  int v129; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_438F2C2 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BattleCommandComponent___TypeInfo);
    sub_B775C4(&BattleCommandData___TypeInfo);
    sub_B775C4(&BattleCommandData_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_15271/*"Unlit/Transparent Colored"*/);
    sub_B775C4(&StringLiteral_4292/*"CommandCard("*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B775C4(&StringLiteral_665/*")"*/);
    byte_438F2C2 = 1;
  }
  v129 = 0;
  p_commandCardDataList = (BattleServantConfConponent_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v7 = 0LL;
      while ( (int)v7 < (signed int)commandCardBaseList->max_length )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_116;
        if ( (unsigned int)v7 >= commandCardComponentList->max_length )
          goto LABEL_118;
        if ( !v4 )
          goto LABEL_116;
        v9 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v7];
        if ( !v4->fields._IsTransformed_k__BackingField )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
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
            this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_116;
            MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)this,
                                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
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
            if ( (unsigned int)v7 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_118;
            v14 = *((_QWORD *)&klass->_1.byval_arg.data + v7);
            if ( !v14 )
              goto LABEL_116;
            *(_DWORD *)(v14 + 24) = (_DWORD)this;
            v15 = p_commandCardDataList->klass;
            if ( !p_commandCardDataList->klass )
              goto LABEL_116;
            if ( (unsigned int)v7 >= LODWORD(v15->_1.namespaze) )
              goto LABEL_118;
            if ( !v9 )
              goto LABEL_116;
            BattleCommandComponent__setData(
              (BattleCommandComponent_o *)v9,
              *((BattleCommandData_o **)&v15->_1.byval_arg.data + v7),
              0LL,
              0,
              1,
              0,
              1,
              0LL);
            BattleCommandComponent__updateView((BattleCommandComponent_o *)v9, 1, 0, 1, 0, 0, 0LL);
          }
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v7 < max_length) )
        {
          if ( (unsigned int)v7 >= max_length )
            goto LABEL_118;
          v18 = commandCodeIdList->m_Items[v7 + 1];
        }
        else
        {
          v18 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v20 = commandCardParam->max_length, (int)v7 < v20) )
        {
          if ( (unsigned int)v7 >= v20 )
            goto LABEL_118;
          v21 = commandCardParam->m_Items[v7 + 1];
          if ( !v9 )
            goto LABEL_116;
        }
        else
        {
          v21 = 0;
          if ( !v9 )
            goto LABEL_116;
        }
        BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v9, v21, 2, 1, 0LL);
        BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v9, v21, 0LL);
        commandCodeSpriteList = v5->fields.commandCodeSpriteList;
        if ( !commandCodeSpriteList )
          goto LABEL_116;
        if ( (unsigned int)v7 >= commandCodeSpriteList->max_length )
          goto LABEL_118;
        v23 = commandCodeSpriteList->m_Items[v7];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v23, v18, 0LL);
        commandCardBaseList = v5->fields.commandCardBaseList;
        ++v7;
        if ( !commandCardBaseList )
          goto LABEL_116;
      }
      goto LABEL_117;
    }
LABEL_116:
    sub_B7769C(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_116;
  v24 = (System_Int32_array **)sub_B775DC(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v24;
  sub_B77560(p_commandCardDataList, v24, v25, v26, v27, v28, v29, v30);
  v31 = v5->fields.commandCardBaseList;
  if ( !v31 )
    goto LABEL_116;
  v32 = (System_Int32_array **)sub_B775DC(BattleCommandComponent___TypeInfo, v31->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v32;
  sub_B77560((BattleServantConfConponent_o *)&v5->fields.commandCardComponentList, v32, v33, v34, v35, v36, v37, v38);
  if ( !v4 )
    goto LABEL_116;
  v45 = (System_Int32_array **)v4->fields.commandCodeIdList;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v45;
  sub_B77560((BattleServantConfConponent_o *)&v5->fields.commandCodeIdList, v45, v39, v40, v41, v42, v43, v44);
  v47 = (System_Int32_array **)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v47;
  sub_B77560((BattleServantConfConponent_o *)&v5->fields.commandCardParam, v47, v49, v50, v51, v52, v53, v54);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0LL);
  svtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0LL);
  v56 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  v57 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v56, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_116;
  this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_116;
  this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     (ServantLimitImageMaster_o *)this,
                                                     svtId,
                                                     v57,
                                                     0LL);
  v58 = v5->fields.commandCardBaseList;
  limitCount = (int)this;
  if ( !v58 )
    goto LABEL_116;
  v59 = 0LL;
  v124 = CommandCardIds;
  while ( (__int64)v59 < (int)v58->max_length )
  {
    if ( CommandCardIds && (v60 = CommandCardIds->max_length, (__int64)v59 < (int)v60) )
    {
      if ( v59 >= v60 )
        goto LABEL_118;
      v61 = CommandCardIds->m_Items[v59 + 1];
    }
    else
    {
      v61 = 0;
    }
    v62 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v63 = v62->max_length, (__int64)v59 < (int)v63) )
    {
      if ( v59 >= v63 )
        goto LABEL_118;
      v64 = v62->m_Items[v59 + 1];
    }
    else
    {
      v64 = 0;
    }
    v65 = *p_commandCardParam;
    if ( *p_commandCardParam && (v66 = v65->max_length, (__int64)v59 < (int)v66) )
    {
      if ( v59 >= v66 )
        goto LABEL_118;
      v67 = v65->m_Items[v59 + 1];
    }
    else
    {
      v67 = 0;
    }
    if ( (unsigned int)(v61 - 1) > 2 )
    {
      v120 = v5->fields.commandCodeSpriteList;
      if ( !v120 )
        goto LABEL_116;
      if ( v59 >= v120->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v120->m_Items[v59];
      if ( !this )
        goto LABEL_116;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      v71 = v59 + 1;
    }
    else
    {
      powerUpValue = v67;
      commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.commandCardPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_116;
      v69 = (UnityEngine_GameObject_o *)this;
      commandCodeId = v64;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(v69, 0LL);
      if ( !this )
        goto LABEL_116;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      v71 = v59 + 1;
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v129 = v59 + 1;
      v75 = System_Int32__ToString((int32_t)&v129, 0LL);
      v76 = System_String__Concat_44904220(
              (System_String_o *)StringLiteral_4292/*"CommandCard("*/,
              v75,
              (System_String_o *)StringLiteral_665/*")"*/,
              0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v69, v76, 0LL);
      v77 = v5->fields.commandCardBaseList;
      if ( !v77 )
        goto LABEL_116;
      if ( v59 >= v77->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v77->m_Items[v59];
      if ( !this )
        goto LABEL_116;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_116;
      v78 = v4;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
      identity = UnityEngine_Quaternion__get_identity(0LL);
      UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
      v132.fields.x = x;
      v132.fields.y = y;
      v132.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v132, 0LL);
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        v69,
        (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v69,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_116;
      v79 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      *(_QWORD *)&v79[1].fields.MASK_LABEL_MAX_WIDTH = gameObject;
      sub_B77560(
        (BattleServantConfConponent_o *)&v79[1].fields.MASK_LABEL_MAX_WIDTH,
        gameObject,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v88 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_19072172(v88, v61, svtId, limitCount, 0, 0LL);
      if ( !commandCardDataList )
        goto LABEL_116;
      if ( v88 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_B77684(
                                                           v88,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_119:
          v122 = sub_B776BC(this);
          sub_B77668(v122, 0LL);
        }
      }
      if ( v59 >= commandCardDataList[6] )
        goto LABEL_118;
      v95 = &commandCardDataList[2 * v59];
      *((_QWORD *)v95 + 4) = v88;
      sub_B77560((BattleServantConfConponent_o *)(v95 + 8), (System_Int32_array **)v88, v89, v90, v91, v92, v93, v94);
      v96 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      if ( v59 >= LODWORD(v96->_1.namespaze) )
        goto LABEL_118;
      v97 = *((_QWORD *)&v96->_1.byval_arg.data + v59);
      if ( !v97 )
        goto LABEL_116;
      *(_DWORD *)(v97 + 44) = v71;
      v98 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      if ( v59 >= LODWORD(v98->_1.namespaze) )
        goto LABEL_118;
      BattleCommandComponent__setData(
        (BattleCommandComponent_o *)v79,
        *((BattleCommandData_o **)&v98->_1.byval_arg.data + v59),
        0LL,
        0,
        1,
        0,
        1,
        0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v79, (System_String_o *)StringLiteral_15271/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v79, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (System_Int32_array **)v5->fields.clickEventObject;
      *(_QWORD *)&v79[1].fields.MASK_LABEL_MAX_WIDTH = clickEventObject;
      sub_B77560(
        (BattleServantConfConponent_o *)&v79[1].fields.MASK_LABEL_MAX_WIDTH,
        clickEventObject,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v106 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v106 )
        goto LABEL_116;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_B77684(v79, *(_QWORD *)(*(_QWORD *)v106 + 64LL));
      if ( !this )
        goto LABEL_119;
      if ( v59 >= v106[6] )
        goto LABEL_118;
      v113 = &v106[2 * v59];
      *((_QWORD *)v113 + 4) = v79;
      sub_B77560(
        (BattleServantConfConponent_o *)(v113 + 8),
        (System_Int32_array **)v79,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      v114 = v5->fields.commandCardBaseList;
      if ( !v114 )
        goto LABEL_116;
      if ( v59 >= v114->max_length )
        goto LABEL_118;
      v4 = v78;
      this = (ServantStatusListViewItemDrawCommand_o *)v114->m_Items[v59];
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( !this )
        goto LABEL_116;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v69, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v79, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v79, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v79,
                                                         0LL);
      CommandCardIds = v124;
      if ( (_DWORD)this != -1 )
      {
        v116 = v5->fields.commandCodeSpriteList;
        if ( !v116 )
          goto LABEL_116;
        if ( v59 >= v116->max_length )
          goto LABEL_118;
        v117 = (UIWidget_o *)v116->m_Items[v59];
        if ( !v117 )
          goto LABEL_116;
        UIWidget__set_depth(v117, (_DWORD)this - 1, 0LL);
      }
      v118 = v5->fields.commandCodeSpriteList;
      if ( !v118 )
        goto LABEL_116;
      if ( v59 >= v118->max_length )
      {
LABEL_118:
        v121 = sub_B776C8(this);
        sub_B77668(v121, 0LL);
      }
      v119 = v118->m_Items[v59];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v119, commandCodeId, 0LL);
    }
    v58 = v5->fields.commandCardBaseList;
    v59 = v71;
    if ( !v58 )
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
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  UILabel_o *v14; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v16; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v18; // w22
  struct UILabel_o *v19; // x23
  System_String_o *mText; // x25
  System_String_o *v21; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int v25; // w23
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w9
  int32_t buttonPitch; // w8
  int v29; // w10
  int v30; // w10
  int v31; // w8
  int32_t transformedSubHeight; // w24
  int v33; // w25
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *v36; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v38; // w21
  _BOOL4 IsTransformServant_k__BackingField; // w22
  UILabel_o *v40; // x22
  bool v41; // w1
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v46; // s8
  double v47; // d0
  double v48; // d0
  int v49; // w22
  float v50; // s8
  float v51; // s11
  float v52; // s9
  int v53; // w22
  float v54; // s8
  float v55; // s12
  float v56; // s9
  float v57; // s11
  float v58; // s8
  float v59; // s12
  float v60; // s9
  float v61; // s0
  float v62; // s8
  float v63; // s10
  float v64; // s9
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v68; // w8
  __int64 v69; // x22
  int32_t v70; // w28
  struct UICommonButton_o *reinforceButton; // x8
  int v72; // w8
  struct UICommonButton_o *engraveCodeButton; // x8
  int v74; // w8
  float v75; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v77; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438F2C0 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&StringLiteral_12200/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/);
    sub_B775C4(&StringLiteral_12198/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/);
    sub_B775C4(&StringLiteral_12199/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/);
    sub_B775C4(&StringLiteral_12197/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/);
    byte_438F2C0 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12197/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_146;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_146;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v14 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12198/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v14 )
        goto LABEL_146;
      UILabel__set_text(v14, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_146;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      v16 = this->fields.explanationLabel;
      if ( !item->fields.servantLeaderInfo )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
        if ( !v16 )
          goto LABEL_146;
        UILabel__set_text(v16, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v16 )
        goto LABEL_146;
      UILabel__set_text(v16, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_146;
      v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v78.fields.currentCryptoKey = v13;
    *(_QWORD *)&v78.fields.fakeValue = v12;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                   v78,
                                                   0LL);
    if ( (_DWORD)IsServantLimitCountSeal )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_146;
      v18 = (int)IsServantLimitCountSeal;
      IsServantLimitCountSeal = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                     Master_WarQuestSelectionMaster,
                                                     (int32_t)IsServantLimitCountSeal,
                                                     3,
                                                     0LL);
      if ( ((unsigned __int8)IsServantLimitCountSeal & 1) != 0 )
      {
        IsServantLimitCountSeal = ServantLimitImageMaster__GetServantStatusExplanationText(
                                    Master_WarQuestSelectionMaster,
                                    (System_String_o *)StringLiteral_12200/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                    v18,
                                    0LL);
        v19 = this->fields.explanationLabel;
        if ( !v19 )
          goto LABEL_146;
        mText = v19->fields.mText;
        v21 = IsServantLimitCountSeal;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        Master_WarQuestSelectionMaster,
                                                        v18,
                                                        3,
                                                        0LL);
        v23 = System_String__Format(v21, LimitCountSealedServantName, 0LL);
        v24 = System_String__Concat_44901936(mText, v23, 0LL);
        UILabel__set_text(v19, v24, 0LL);
        v25 = 1;
LABEL_44:
        commandCardSelectList = item->fields.commandCardSelectList;
        if ( !commandCardSelectList )
          goto LABEL_146;
        max_length = commandCardSelectList->max_length;
        if ( max_length < 4 )
          buttonPitch = 0;
        else
          buttonPitch = this->fields.buttonPitch;
        v29 = max_length / 3;
        if ( max_length != 3 * (max_length / 3) )
          ++v29;
        if ( v29 < 3 )
          v30 = 1;
        else
          v30 = v29 - 1;
        v31 = v30 * buttonPitch;
        if ( v25 )
          transformedSubHeight = v31 + 32;
        else
          transformedSubHeight = v31;
        if ( item->fields._IsTransformServant_k__BackingField )
        {
          IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
          if ( !IsServantLimitCountSeal )
            goto LABEL_146;
          if ( item->fields._IsTransformed_k__BackingField )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 0, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                           0LL);
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 0, 0LL);
            transformedSubHeight = this->fields.transformedSubHeight;
            v25 = 0;
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                           0LL);
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
          }
          IsServantLimitCountSeal = (System_String_o *)this->fields.transformNameSprite;
          if ( !IsServantLimitCountSeal )
            goto LABEL_146;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( !IsServantLimitCountSeal )
            goto LABEL_146;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
          transformNameLabel = this->fields.transformNameLabel;
          IsServantLimitCountSeal = ServantStatusListViewItem__GetTransformName(item, 0LL);
          if ( !transformNameLabel )
            goto LABEL_146;
          UILabel__set_text(transformNameLabel, IsServantLimitCountSeal, 0LL);
          transformNameAddHeight = this->fields.transformNameAddHeight;
          transformedSubHeight += transformNameAddHeight;
          v33 = -transformNameAddHeight;
        }
        else
        {
          IsServantLimitCountSeal = (System_String_o *)this->fields.transformNameSprite;
          if ( !IsServantLimitCountSeal )
            goto LABEL_146;
          IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                         0LL);
          if ( !IsServantLimitCountSeal )
            goto LABEL_146;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 0, 0LL);
          v33 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_77;
        v36 = item->fields.userSvtEntity;
        if ( !v36 || UserServantEntity__IsLeave(v36, 0LL) )
          goto LABEL_77;
        IsServantLimitCountSeal = (System_String_o *)item->fields.userSvtEntity;
        if ( !IsServantLimitCountSeal )
          goto LABEL_146;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin(
                                           (UserServantEntity_o *)IsServantLimitCountSeal,
                                           0LL);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_77:
          v38 = 0;
          goto LABEL_78;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          v68 = commandCardParam->max_length;
          if ( v68 < 1 )
          {
LABEL_136:
            IsServantLimitCountSeal = (System_String_o *)this->fields.engraveCodeObject;
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
            engraveCodeButton = this->fields.engraveCodeButton;
            if ( !engraveCodeButton )
              goto LABEL_146;
            engraveCodeButton->fields.isAlwaysValidOnClick = 1;
            IsServantLimitCountSeal = (System_String_o *)this->fields.engraveCodeButton;
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            UICommonButton__SetEnable(
              (UICommonButton_o *)IsServantLimitCountSeal,
              item->fields._CanMoveCombine_k__BackingField,
              0LL);
            v74 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v75 = (float)-(v74 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v75, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                           0LL);
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
            IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsServantLimitCountSeal, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, v75, 0LL);
            v38 = 1;
LABEL_78:
            IsServantLimitCountSeal = (System_String_o *)this->fields.transformNameSprite;
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
            IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                           0LL);
            if ( !IsServantLimitCountSeal )
              goto LABEL_146;
            if ( IsTransformServant_k__BackingField )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
              v40 = this->fields.transformNameLabel;
              IsServantLimitCountSeal = ServantStatusListViewItem__GetTransformName(item, 0LL);
              if ( !v40 )
                goto LABEL_146;
              UILabel__set_text(v40, IsServantLimitCountSeal, 0LL);
              IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
              if ( !IsServantLimitCountSeal )
                goto LABEL_146;
              if ( !item->fields._IsTransformed_k__BackingField )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
                IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                if ( !IsServantLimitCountSeal )
                  goto LABEL_146;
                IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                               0LL);
                if ( !IsServantLimitCountSeal )
                  goto LABEL_146;
                v41 = 1;
                goto LABEL_90;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 0, 0LL);
              IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
              if ( !IsServantLimitCountSeal )
                goto LABEL_146;
              IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                             0LL);
              if ( !IsServantLimitCountSeal )
                goto LABEL_146;
            }
            v41 = 0;
LABEL_90:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, v41, 0LL);
            x = this->fields.baseSize.fields.x;
            y = this->fields.baseSize.fields.y;
            z = this->fields.baseSize.fields.z;
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v46 = y + (float)transformedSubHeight;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
            {
              IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
              if ( !IsServantLimitCountSeal )
                goto LABEL_146;
              v79.fields.x = x;
              v79.fields.y = v46;
              v79.fields.z = z;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v79, 0LL);
            }
            IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
            if ( IsServantLimitCountSeal )
            {
              v47 = x;
              if ( x == INFINITY )
                v47 = -x;
              UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v47, 0LL);
              IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
              if ( IsServantLimitCountSeal )
              {
                v48 = v46;
                if ( v46 == INFINITY )
                  v48 = -INFINITY;
                UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v48, 0LL);
                IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
                v49 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                if ( IsServantLimitCountSeal )
                {
                  v50 = this->fields.titleBasePosition.fields.x;
                  v51 = this->fields.titleBasePosition.fields.y;
                  v52 = this->fields.titleBasePosition.fields.z;
                  IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                 0LL);
                  if ( IsServantLimitCountSeal )
                  {
                    v53 = v49 >> 1;
                    v80.fields.y = v51 + (float)v53;
                    v80.fields.x = v50;
                    v80.fields.z = v52;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                      v80,
                      0LL);
                    IsServantLimitCountSeal = (System_String_o *)this->fields.cardBase;
                    if ( IsServantLimitCountSeal )
                    {
                      v54 = this->fields.cardBasePosition.fields.x;
                      v55 = this->fields.cardBasePosition.fields.y;
                      v56 = this->fields.cardBasePosition.fields.z;
                      IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                                     0LL);
                      if ( IsServantLimitCountSeal )
                      {
                        v57 = (float)(v53 + v33);
                        v81.fields.y = v55 + v57;
                        v81.fields.x = v54;
                        v81.fields.z = v56;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                          v81,
                          0LL);
                        IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
                        if ( IsServantLimitCountSeal )
                        {
                          v58 = this->fields.levelButtonBasePosition.fields.x;
                          v59 = this->fields.levelButtonBasePosition.fields.y;
                          v60 = this->fields.levelButtonBasePosition.fields.z;
                          IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                                         0LL);
                          if ( IsServantLimitCountSeal )
                          {
                            v82.fields.y = v59 + v57;
                            v82.fields.x = v58;
                            v82.fields.z = v60;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                              v82,
                              0LL);
                            v61 = this->fields.explanationBasePosition.fields.y - (float)v53;
                            IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                            if ( v25 )
                              v61 = v61 + 16.0;
                            v62 = v38 ? v61 + 50.0 : v61;
                            if ( IsServantLimitCountSeal )
                            {
                              v63 = this->fields.explanationBasePosition.fields.x;
                              v64 = this->fields.explanationBasePosition.fields.z;
                              IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                             0LL);
                              if ( IsServantLimitCountSeal )
                              {
                                v83.fields.x = v63;
                                v83.fields.y = v62;
                                v83.fields.z = v64;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                                  v83,
                                  0LL);
                                ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v65);
                                ServantStatusListViewItemDrawCommand__SetupMask(this, item, v38, v66);
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
LABEL_146:
            sub_B7769C(IsServantLimitCountSeal, v10);
          }
          v69 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v69 >= v68 )
            {
              v77 = sub_B776C8(IsEventJoin);
              sub_B77668(v77, 0LL);
            }
            IsEventJoin = BalanceConfig_TypeInfo;
            v70 = commandCardParam->m_Items[v69 + 1];
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v70 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            v68 = commandCardParam->max_length;
            if ( (int)++v69 >= v68 )
              goto LABEL_136;
          }
        }
        IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceObject;
        if ( !IsServantLimitCountSeal )
          goto LABEL_146;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsServantLimitCountSeal, 1, 0LL);
        reinforceButton = this->fields.reinforceButton;
        if ( !reinforceButton )
          goto LABEL_146;
        reinforceButton->fields.isAlwaysValidOnClick = 1;
        IsServantLimitCountSeal = (System_String_o *)this->fields.reinforceButton;
        if ( !IsServantLimitCountSeal )
          goto LABEL_146;
        UICommonButton__SetEnable(
          (UICommonButton_o *)IsServantLimitCountSeal,
          item->fields._CanMoveCombine_k__BackingField,
          0LL);
        if ( transformedSubHeight >= 0 )
          v72 = transformedSubHeight;
        else
          v72 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v72 >> 1), 0LL);
        goto LABEL_136;
      }
    }
LABEL_43:
    v25 = 0;
    goto LABEL_44;
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
  _BOOL4 v6; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  int maxCommandCardLimitCount; // w22
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
  int v22; // w8
  int v23; // w9
  _BOOL4 v24; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v26; // x26
  int v27; // w28
  System_String_o *v28; // x0
  int v29; // w8
  float v30; // s3
  float v31; // s2
  float v32; // s1
  float v33; // s0
  System_String_o *v34; // x0
  System_String_o *v35; // x27
  System_String_o *v36; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v38; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v41; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v43; // x27
  System_String_o *v44; // x1
  bool v45; // nf
  struct UICommonButton_array *v46; // x8
  __int64 v47; // x22
  il2cpp_array_size_t v48; // w27
  signed int max_length; // w24
  _BOOL4 v50; // w19
  struct UIRangeLabel_array *v51; // x9
  UIRangeLabel_o *v52; // x25
  int v53; // w28
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v55; // x26
  int v56; // w8
  float v57; // s3
  float v58; // s2
  float v59; // s1
  float v60; // s0
  struct UISprite_array *v61; // x8
  __int64 *v62; // x8
  struct UICommonButton_array *v63; // x8
  __int64 v64; // x0
  ServantStatusListViewItemDrawCommand_o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-B0h]
  int32_t v66; // [xsp+10h] [xbp-A0h]
  _BOOL4 v68; // [xsp+18h] [xbp-98h]
  unsigned int v69; // [xsp+1Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_438F2C3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_8544/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_B775C4(&StringLiteral_12222/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_B775C4(&StringLiteral_17304/*"btn_bg_20"*/);
    sub_B775C4(&StringLiteral_12223/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B775C4(&StringLiteral_17305/*"btn_bg_21"*/);
    byte_438F2C3 = 1;
  }
  v69 = 0;
  if ( !v4 )
    goto LABEL_168;
  if ( v4->fields._IsTransformed_k__BackingField )
    return;
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_168;
  MasterData_WarQuestSelectionMaster = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)this,
                                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( v5->fields.isStart && !v4->fields.isConvertOverwriteImage )
  {
    if ( v4->fields.userSvtEntity )
      v6 = 1;
    else
      v6 = v4->fields.userSvtCollectionEntity != 0LL;
    v68 = v6;
  }
  else
  {
    v68 = 0;
  }
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0LL);
  maxCommandCardLimitCount = v4->fields.maxCommandCardLimitCount;
  commandCardSelectList = v4->fields.commandCardSelectList;
  v66 = ConvertOverwriteCommandCardLimitCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4387FCE )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4387FCE = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v10->static_fields;
  v12 = static_fields[20];
  v13 = static_fields[21];
  v14 = static_fields[22];
  v15 = static_fields[23];
  if ( !byte_4387FCF )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
    byte_4387FCF = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = LocalizationManager_TypeInfo;
  }
  v16 = (float *)v10->static_fields;
  v17 = v16[24];
  v18 = v16[25];
  v19 = v16[26];
  v20 = v16[27];
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
LABEL_168:
    sub_B7769C(this, item);
  this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v69 = 0;
  v21 = this;
  v22 = 0;
  do
  {
    if ( v22 <= maxCommandCardLimitCount )
    {
      if ( !commandCardSelectList )
        goto LABEL_168;
      if ( v22 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v24 = commandCardSelectList->m_Items[v22 + 1] == v66;
      v23 = 1;
    }
    else
    {
      v23 = 0;
      v24 = 0;
    }
    battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
    if ( !battleCharaLevelTitleRangeLabelList )
      goto LABEL_168;
    if ( v22 >= battleCharaLevelTitleRangeLabelList->max_length )
    {
LABEL_170:
      v64 = sub_B776C8(this);
      sub_B77668(v64, 0LL);
    }
    v26 = battleCharaLevelTitleRangeLabelList->m_Items[v22];
    v27 = v23 & v68;
    if ( v23
      || (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(v4, 0LL),
          ((unsigned __int8)this & 1) == 0) )
    {
      if ( !v26 )
        goto LABEL_168;
      v29 = v24 & v27;
      if ( (v24 & v27) != 0 )
        v30 = v20;
      else
        v30 = v15;
      if ( v29 )
        v31 = v19;
      else
        v31 = v14;
      if ( v29 )
        v32 = v18;
      else
        v32 = v13;
      if ( v29 )
        v33 = v17;
      else
        v33 = v12;
      UIRangeLabel__set_effectColor(v26, *(UnityEngine_Color_o *)(&v30 - 3), 0LL);
      v34 = System_Int32__ToString((int32_t)&v69, 0LL);
      v35 = System_String__Concat_44901936((System_String_o *)StringLiteral_12222/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v34, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = v35;
    }
    else
    {
      if ( !v26 )
        goto LABEL_168;
      v70.fields.r = v12;
      v70.fields.g = v13;
      v70.fields.b = v14;
      v70.fields.a = v15;
      UIRangeLabel__set_effectColor(v26, v70, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = (System_String_o *)StringLiteral_12223/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v36 = LocalizationManager__Get(v28, 0LL);
    UIRangeLabel__Set(v26, v36, 0LL, 1, 0, 0LL);
    battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_168;
    if ( v69 >= battleCharaLevelSpriteList->max_length )
      goto LABEL_170;
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v69];
    if ( !this )
      goto LABEL_168;
    v38 = &StringLiteral_17304/*"btn_bg_20"*/;
    if ( v24 )
      v38 = &StringLiteral_17305/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v38, 0LL);
    battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
    if ( !battleCharaLevelButtonList )
      goto LABEL_168;
    if ( v69 >= battleCharaLevelButtonList->max_length )
      goto LABEL_170;
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v69];
    if ( (v24 & v27) != 0 )
    {
      if ( !this )
        goto LABEL_168;
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v27 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !this )
        goto LABEL_168;
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, v27 & ~v24, v27 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = v5->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v69 >= limitCountSealLabel->max_length )
        goto LABEL_170;
      v41 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v69];
    }
    else
    {
      v41 = 0LL;
    }
    limitCountSealObjList = v5->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v69 >= limitCountSealObjList->max_length )
        goto LABEL_170;
      v43 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v69];
    }
    else
    {
      v43 = 0LL;
    }
    this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
    if ( !commandCardSelectList )
      goto LABEL_168;
    if ( v69 >= commandCardSelectList->max_length )
      goto LABEL_170;
    if ( !v21 )
      goto LABEL_168;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(
           (ServantLimitImageMaster_o *)v21,
           (int32_t)this,
           commandCardSelectList->m_Items[v69 + 1] + 1,
           0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v43, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8544/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0LL);
        if ( !v41 )
          goto LABEL_168;
        v44 = (System_String_o *)this;
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
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v43, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v41 )
          goto LABEL_168;
        v44 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_110:
        UILabel__set_text((UILabel_o *)v41, v44, 0LL);
      }
    }
    v45 = (int)(v69 - 2) < 0;
    v22 = ++v69;
  }
  while ( v45 != __OFSUB__(v69, 3) );
  v46 = v5->fields.battleCharaLevelButtonList;
  if ( !v46 )
    goto LABEL_168;
  v47 = 11LL;
  while ( 1 )
  {
    v48 = v47 - 8;
    if ( (int)v47 - 8 >= (signed int)v46->max_length )
      break;
    max_length = commandCardSelectList->max_length;
    if ( (int)v48 >= max_length )
    {
      v50 = 0;
    }
    else
    {
      if ( v48 >= max_length )
        goto LABEL_170;
      v50 = *((_DWORD *)&commandCardSelectList->obj.klass + v47) == v66;
    }
    v51 = v5->fields.battleCharaLevelTitleRangeLabelList;
    if ( !v51 )
      goto LABEL_168;
    if ( v48 >= v51->max_length )
      goto LABEL_170;
    v52 = v51->m_Items[v48];
    v53 = v68 && (int)v48 < max_length;
    if ( (int)v48 >= max_length )
    {
      if ( !v52 )
        goto LABEL_168;
      UIRangeLabel__Clear(v52, 0LL);
    }
    else
    {
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
      if ( v48 >= commandCardSelectList->max_length )
        goto LABEL_170;
      item = (ServantStatusListViewItem_o *)(unsigned int)this;
      this = MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_168;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster,
                 (int32_t)item,
                 commandCardSelectList->m_Items[v48 + 1],
                 0LL);
      if ( Entity )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v55 = (System_String_o *)this;
        if ( !v52 )
          goto LABEL_168;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_4388DC6 )
        {
          sub_B775C4(&LocalizationManager_TypeInfo);
          byte_4388DC6 = 1;
        }
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        }
        v55 = *(System_String_o **)&this->fields.engraveCodeButton->fields.mInitDone;
        if ( !v52 )
          goto LABEL_168;
      }
      v56 = v50 & v53;
      if ( (v50 & v53) != 0 )
        v57 = v20;
      else
        v57 = v15;
      if ( v56 )
        v58 = v19;
      else
        v58 = v14;
      if ( v56 )
        v59 = v18;
      else
        v59 = v13;
      if ( v56 )
        v60 = v17;
      else
        v60 = v12;
      UIRangeLabel__set_effectColor(v52, *(UnityEngine_Color_o *)(&v57 - 3), 0LL);
      UIRangeLabel__Set(v52, v55, 0LL, 1, 0, 0LL);
    }
    v61 = v5->fields.battleCharaLevelSpriteList;
    if ( !v61 )
      goto LABEL_168;
    if ( v48 >= v61->max_length )
      goto LABEL_170;
    this = (ServantStatusListViewItemDrawCommand_o *)v61->m_Items[v48];
    if ( !this )
      goto LABEL_168;
    v62 = &StringLiteral_17304/*"btn_bg_20"*/;
    if ( v50 )
      v62 = &StringLiteral_17305/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v62, 0LL);
    v63 = v5->fields.battleCharaLevelButtonList;
    if ( !v63 )
      goto LABEL_168;
    if ( v48 >= v63->max_length )
      goto LABEL_170;
    this = (ServantStatusListViewItemDrawCommand_o *)v63->m_Items[v48];
    if ( (v50 & v53) != 0 )
    {
      if ( !this )
        goto LABEL_168;
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v53 == 0 || isInit, 0LL);
    }
    else if ( (int)v48 >= max_length )
    {
      if ( !this )
        goto LABEL_168;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
      if ( !this )
        goto LABEL_168;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    else
    {
      if ( !this )
        goto LABEL_168;
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, v53 & ~v50, v53 == 0 || isInit, 0LL);
    }
    v46 = v5->fields.battleCharaLevelButtonList;
    ++v47;
    if ( !v46 )
      goto LABEL_168;
  }
}


void __fastcall ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x20
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  UnityEngine_GameObject_o *v9; // x22
  float y; // s0
  System_String_o *Empty; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_438F2C4 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B775C4(&StringLiteral_12243/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/);
    byte_438F2C4 = 1;
  }
  if ( !item )
    goto LABEL_36;
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
LABEL_16:
    if ( !this )
      goto LABEL_36;
LABEL_17:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_16;
  if ( !this )
    goto LABEL_36;
  if ( item->fields._IsTransformed_k__BackingField )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_36;
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_36;
  mHeight = baseSprite->fields.mHeight;
  if ( isDisplayCombineButton )
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight - 50, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_36;
    v9 = (UnityEngine_GameObject_o *)this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_36;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = localPosition.fields.y + 25.0;
  }
  else
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_36;
    v9 = (UnityEngine_GameObject_o *)this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_36;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = v14.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY(v9, y, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_36;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12243/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL);
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
LABEL_36:
    sub_B7769C(this, item);
  }
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
    goto LABEL_36;
  }
}