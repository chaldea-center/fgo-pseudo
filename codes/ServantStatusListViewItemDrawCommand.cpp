void __fastcall ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  struct UISprite_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42ED365 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UISprite___TypeInfo, v5, v6, v7);
    byte_42ED365 = 1;
  }
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, (unsigned int)v8->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSpriteList,
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
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
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
      sub_B5D69C(this, method);
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
  __int64 v3; // x3
  RandomLimitCountManager_c *v6; // x0

  if ( (byte_42ED361 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42ED361 = 1;
  }
  if ( this->fields.isStart )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_42E6BE7 )
    {
      sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
      byte_42E6BE7 = 1;
    }
    v6 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v6 = RandomLimitCountManager_TypeInfo;
    }
    if ( v6->static_fields->enableRandomLimitCount )
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  __int64 v49; // x24
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v51; // x22
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v55; // x1
  BattleServantConfConponent_c *klass; // x8
  __int64 v57; // x8
  BattleServantConfConponent_c *v58; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  int max_length; // w9
  int32_t v61; // w21
  struct System_Int32_array *commandCardParam; // x8
  int v63; // w9
  int32_t v64; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v66; // x22
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct UnityEngine_GameObject_array *v74; // x8
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  struct System_Int32_array **p_commandCodeIdList; // x24
  System_Int32_array **v90; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct ServantEntity_o *svtEntity; // x9
  struct UnityEngine_GameObject_array *v99; // x8
  struct System_Int32_array *cardIds; // x28
  ImageLimitCount_c **v101; // x23
  unsigned __int64 v102; // x26
  const MethodInfo *v103; // x1
  int32_t v104; // w21
  int32_t v105; // w21
  ServantLimitImageMaster_o *v106; // x22
  const MethodInfo *v107; // x1
  unsigned __int64 v108; // x8
  int32_t v109; // w10
  struct System_Int32_array *v110; // x8
  unsigned __int64 v111; // x9
  int32_t v112; // w22
  struct System_Int32_array *v113; // x8
  unsigned __int64 v114; // x9
  int32_t v115; // w9
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v117; // x27
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v122; // x0
  System_String_o *v123; // x0
  struct UnityEngine_GameObject_array *v124; // x8
  ImageLimitCount_c **v125; // x25
  ServantStatusListViewItem_o *v126; // x23
  struct System_Int32_array *v127; // x19
  ServantStatusListViewItemDrawCommand_o *v128; // x22
  System_Int32_array **gameObject; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  unsigned int *commandCardDataList; // x28
  BattleCommandData_o *v137; // x24
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  unsigned int *v144; // x0
  BattleServantConfConponent_c *v145; // x8
  __int64 v146; // x8
  BattleServantConfConponent_c *v147; // x8
  System_Int32_array **clickEventObject; // x1
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  unsigned int *v155; // x21
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  unsigned int *v162; // x0
  struct UnityEngine_GameObject_array *v163; // x8
  int32_t layer; // w21
  struct UISprite_array *v165; // x8
  UIWidget_o *v166; // x8
  struct UISprite_array *v167; // x8
  UISprite_o *v168; // x21
  struct UISprite_array *v169; // x8
  __int64 v170; // x0
  __int64 v171; // x0
  int32_t v172; // [xsp+10h] [xbp-90h]
  int32_t v173; // [xsp+14h] [xbp-8Ch]
  int32_t powerUpValue; // [xsp+18h] [xbp-88h]
  int32_t commandCodeId; // [xsp+1Ch] [xbp-84h]
  BattleServantConfConponent_o *p_commandCardDataList; // [xsp+28h] [xbp-78h]
  int32_t svtId; // [xsp+38h] [xbp-68h]
  int v178; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_42ED362 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&BattleCommandComponent___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleCommandData___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v21, v22, v23);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&NGUITools_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_15172/*"Unlit/Transparent Colored"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_4232/*"CommandCard("*/, v42, v43, v44);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v45, v46, v47);
    byte_42ED362 = 1;
  }
  v178 = 0;
  p_commandCardDataList = (BattleServantConfConponent_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v49 = 0LL;
      while ( (int)v49 < (signed int)commandCardBaseList->max_length )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_116;
        if ( (unsigned int)v49 >= commandCardComponentList->max_length )
          goto LABEL_118;
        v51 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v49];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
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
          this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_116;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)this,
                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v55);
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
          if ( (unsigned int)v49 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_118;
          v57 = *((_QWORD *)&klass->_1.byval_arg.data + v49);
          if ( !v57 )
            goto LABEL_116;
          *(_DWORD *)(v57 + 24) = (_DWORD)this;
          v58 = p_commandCardDataList->klass;
          if ( !p_commandCardDataList->klass )
            goto LABEL_116;
          if ( (unsigned int)v49 >= LODWORD(v58->_1.namespaze) )
            goto LABEL_118;
          if ( !v51 )
            goto LABEL_116;
          BattleCommandComponent__setData(
            (BattleCommandComponent_o *)v51,
            *((BattleCommandData_o **)&v58->_1.byval_arg.data + v49),
            0LL,
            0,
            1,
            0,
            0LL);
          BattleCommandComponent__updateView((BattleCommandComponent_o *)v51, 1, 0, 1, 0, 0, 0LL);
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v49 < max_length) )
        {
          if ( (unsigned int)v49 >= max_length )
            goto LABEL_118;
          v61 = commandCodeIdList->m_Items[v49 + 1];
        }
        else
        {
          v61 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v63 = commandCardParam->max_length, (int)v49 < v63) )
        {
          if ( (unsigned int)v49 >= v63 )
            goto LABEL_118;
          v64 = commandCardParam->m_Items[v49 + 1];
          if ( !v51 )
            goto LABEL_116;
        }
        else
        {
          v64 = 0;
          if ( !v51 )
            goto LABEL_116;
        }
        BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v51, v64, 2, 1, 0LL);
        BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v51, v64, 0LL);
        commandCodeSpriteList = v5->fields.commandCodeSpriteList;
        if ( !commandCodeSpriteList )
          goto LABEL_116;
        if ( (unsigned int)v49 >= commandCodeSpriteList->max_length )
          goto LABEL_118;
        v66 = commandCodeSpriteList->m_Items[v49];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v66, v61, 0LL);
        commandCardBaseList = v5->fields.commandCardBaseList;
        ++v49;
        if ( !commandCardBaseList )
          goto LABEL_116;
      }
      goto LABEL_117;
    }
LABEL_116:
    sub_B5D69C(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_116;
  v67 = (System_Int32_array **)sub_B5D5DC(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v67;
  sub_B5D560(p_commandCardDataList, v67, v68, v69, v70, v71, v72, v73);
  v74 = v5->fields.commandCardBaseList;
  if ( !v74 )
    goto LABEL_116;
  v75 = (System_Int32_array **)sub_B5D5DC(BattleCommandComponent___TypeInfo, v74->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v75;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.commandCardComponentList, v75, v76, v77, v78, v79, v80, v81);
  if ( !v4 )
    goto LABEL_116;
  v88 = (System_Int32_array **)v4->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v88;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.commandCodeIdList, v88, v82, v83, v84, v85, v86, v87);
  v90 = (System_Int32_array **)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v90;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.commandCardParam, v90, v92, v93, v94, v95, v96, v97);
  svtEntity = v4->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_116;
  v99 = v5->fields.commandCardBaseList;
  if ( !v99 )
    goto LABEL_116;
  cardIds = svtEntity->fields.cardIds;
  v101 = &ImageLimitCount_TypeInfo;
  v102 = 0LL;
  while ( (__int64)v102 < (int)v99->max_length )
  {
    svtId = ServantStatusListViewItem__get_SvtId(v4, (const MethodInfo *)item);
    v104 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, v103);
    if ( (BYTE3((*v101)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v101)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v101);
    v105 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v104, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_116;
    v106 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v107);
    if ( !v106 )
      goto LABEL_116;
    this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       v106,
                                                       (int32_t)this,
                                                       v105,
                                                       0LL);
    if ( cardIds && (v108 = cardIds->max_length, (__int64)v102 < (int)v108) )
    {
      if ( v102 >= v108 )
        goto LABEL_118;
      v109 = cardIds->m_Items[v102 + 1];
    }
    else
    {
      v109 = 0;
    }
    v110 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v111 = v110->max_length, (__int64)v102 < (int)v111) )
    {
      if ( v102 >= v111 )
        goto LABEL_118;
      v112 = v110->m_Items[v102 + 1];
    }
    else
    {
      v112 = 0;
    }
    v113 = *p_commandCardParam;
    if ( *p_commandCardParam && (v114 = v113->max_length, (__int64)v102 < (int)v114) )
    {
      if ( v102 >= v114 )
        goto LABEL_118;
      v115 = v113->m_Items[v102 + 1];
    }
    else
    {
      v115 = 0;
    }
    if ( (unsigned int)(v109 - 1) > 2 )
    {
      v169 = v5->fields.commandCodeSpriteList;
      if ( !v169 )
        goto LABEL_116;
      if ( v102 >= v169->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v169->m_Items[v102];
      if ( !this )
        goto LABEL_116;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      ++v102;
    }
    else
    {
      v172 = v109;
      v173 = (int)this;
      powerUpValue = v115;
      commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.commandCardPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_116;
      v117 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(v117, 0LL);
      if ( !this )
        goto LABEL_116;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v178 = v102 + 1;
      v122 = System_Int32__ToString((int32_t)&v178, 0LL);
      v123 = System_String__Concat_44580072(
               (System_String_o *)StringLiteral_4232/*"CommandCard("*/,
               v122,
               (System_String_o *)StringLiteral_659/*")"*/,
               0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v117, v123, 0LL);
      v124 = v5->fields.commandCardBaseList;
      if ( !v124 )
        goto LABEL_116;
      if ( v102 >= v124->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v124->m_Items[v102];
      if ( !this )
        goto LABEL_116;
      v125 = v101;
      commandCodeId = v112;
      v126 = v4;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_116;
      v127 = cardIds;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
      identity = UnityEngine_Quaternion__get_identity(0LL);
      UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
      v181.fields.x = x;
      v181.fields.y = y;
      v181.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v181, 0LL);
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        v117,
        (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v117,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_116;
      v128 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v128[1].fields.titleSprite = (struct UISprite_o *)gameObject;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v128[1].fields.titleSprite,
        gameObject,
        v130,
        v131,
        v132,
        v133,
        v134,
        v135);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v137 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_18880712(v137, v172, svtId, v173, 0, 0LL);
      if ( !commandCardDataList )
        goto LABEL_116;
      if ( v137 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_B5D684(
                                                           v137,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_119:
          v171 = sub_B5D6BC(this);
          sub_B5D668(v171, 0LL);
        }
      }
      if ( v102 >= commandCardDataList[6] )
        goto LABEL_118;
      v144 = &commandCardDataList[2 * v102];
      *((_QWORD *)v144 + 4) = v137;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v144 + 8),
        (System_Int32_array **)v137,
        v138,
        v139,
        v140,
        v141,
        v142,
        v143);
      v145 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      if ( v102 >= LODWORD(v145->_1.namespaze) )
        goto LABEL_118;
      v146 = *((_QWORD *)&v145->_1.byval_arg.data + v102);
      if ( !v146 )
        goto LABEL_116;
      *(_DWORD *)(v146 + 44) = v102 + 1;
      v147 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      cardIds = v127;
      v4 = v126;
      v101 = v125;
      if ( v102 >= LODWORD(v147->_1.namespaze) )
        goto LABEL_118;
      BattleCommandComponent__setData(
        (BattleCommandComponent_o *)v128,
        *((BattleCommandData_o **)&v147->_1.byval_arg.data + v102),
        0LL,
        0,
        1,
        0,
        0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v128, (System_String_o *)StringLiteral_15172/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v128, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (System_Int32_array **)v5->fields.clickEventObject;
      v128[1].fields.titleSprite = (struct UISprite_o *)clickEventObject;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v128[1].fields.titleSprite,
        clickEventObject,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
      v155 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v155 )
        goto LABEL_116;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_B5D684(v128, *(_QWORD *)(*(_QWORD *)v155 + 64LL));
      if ( !this )
        goto LABEL_119;
      if ( v102 >= v155[6] )
        goto LABEL_118;
      v162 = &v155[2 * v102];
      *((_QWORD *)v162 + 4) = v128;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v162 + 8),
        (System_Int32_array **)v128,
        v156,
        v157,
        v158,
        v159,
        v160,
        v161);
      v163 = v5->fields.commandCardBaseList;
      if ( !v163 )
        goto LABEL_116;
      if ( v102 >= v163->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v163->m_Items[v102];
      if ( !this )
        goto LABEL_116;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v117, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v128, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v128, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v128,
                                                         0LL);
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( (_DWORD)this != -1 )
      {
        v165 = v5->fields.commandCodeSpriteList;
        if ( !v165 )
          goto LABEL_116;
        if ( v102 >= v165->max_length )
          goto LABEL_118;
        v166 = (UIWidget_o *)v165->m_Items[v102];
        if ( !v166 )
          goto LABEL_116;
        UIWidget__set_depth(v166, (_DWORD)this - 1, 0LL);
      }
      v167 = v5->fields.commandCodeSpriteList;
      if ( !v167 )
        goto LABEL_116;
      if ( v102 >= v167->max_length )
      {
LABEL_118:
        v170 = sub_B5D6C8(this);
        sub_B5D668(v170, 0LL);
      }
      v168 = v167->m_Items[v102];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v168, commandCodeId, 0LL);
      ++v102;
    }
    v99 = v5->fields.commandCardBaseList;
    if ( !v99 )
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *IsServantLimitCountSeal; // x0
  __int64 v37; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v39; // x22
  __int64 v40; // x23
  UILabel_o *v41; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *v43; // x22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int32_t v45; // w22
  struct UILabel_o *v46; // x23
  System_String_o *mText; // x25
  System_String_o *v48; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  int v52; // w23
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w9
  int32_t buttonPitch; // w8
  int v56; // w10
  int v57; // w10
  int v58; // w8
  int v59; // w24
  UserServantEntity_o *v60; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v62; // w21
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v67; // s8
  double v68; // d0
  double v69; // d0
  int v70; // w22
  float v71; // s8
  float v72; // s11
  float v73; // s9
  float v74; // s10
  float v75; // s8
  float v76; // s11
  float v77; // s9
  float v78; // s8
  float v79; // s11
  float v80; // s9
  float v81; // s0
  float v82; // s8
  float v83; // s10
  float v84; // s9
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v88; // w8
  __int64 v89; // x22
  int32_t v90; // w27
  struct UICommonButton_o *reinforceButton; // x8
  int v92; // w8
  struct UICommonButton_o *engraveCodeButton; // x8
  int v94; // w8
  float v95; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v97; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ED360 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12115/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12113/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12114/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12112/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v31, v32, v33);
    byte_42ED360 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12112/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_118;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_118;
      v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v41 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v41 )
        goto LABEL_118;
      UILabel__set_text(v41, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_118;
      v40 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      v43 = this->fields.explanationLabel;
      if ( !item->fields.servantLeaderInfo )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
        if ( !v43 )
          goto LABEL_118;
        UILabel__set_text(v43, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v43 )
        goto LABEL_118;
      UILabel__set_text(v43, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_118;
      v40 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v98.fields.currentCryptoKey = v40;
    *(_QWORD *)&v98.fields.fakeValue = v39;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v98,
                                                   0LL);
    if ( (_DWORD)IsServantLimitCountSeal )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_118;
      v45 = (int)IsServantLimitCountSeal;
      IsServantLimitCountSeal = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                     Master_WarQuestSelectionMaster,
                                                     (int32_t)IsServantLimitCountSeal,
                                                     3,
                                                     0LL);
      if ( ((unsigned __int8)IsServantLimitCountSeal & 1) != 0 )
      {
        IsServantLimitCountSeal = ServantLimitImageMaster__GetServantStatusExplanationText(
                                    Master_WarQuestSelectionMaster,
                                    (System_String_o *)StringLiteral_12115/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                    v45,
                                    0LL);
        v46 = this->fields.explanationLabel;
        if ( !v46 )
          goto LABEL_118;
        mText = v46->fields.mText;
        v48 = IsServantLimitCountSeal;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        Master_WarQuestSelectionMaster,
                                                        v45,
                                                        3,
                                                        0LL);
        v50 = System_String__Format(v48, LimitCountSealedServantName, 0LL);
        v51 = System_String__Concat_44577788(mText, v50, 0LL);
        UILabel__set_text(v46, v51, 0LL);
        v52 = 1;
        goto LABEL_44;
      }
    }
LABEL_43:
    v52 = 0;
LABEL_44:
    commandCardSelectList = item->fields.commandCardSelectList;
    if ( !commandCardSelectList )
      goto LABEL_118;
    max_length = commandCardSelectList->max_length;
    if ( max_length < 4 )
      buttonPitch = 0;
    else
      buttonPitch = this->fields.buttonPitch;
    v56 = max_length / 3;
    if ( max_length != 3 * (max_length / 3) )
      ++v56;
    if ( v56 < 3 )
      v57 = 1;
    else
      v57 = v56 - 1;
    v58 = v57 * buttonPitch;
    if ( v52 )
      v59 = v58 + 32;
    else
      v59 = v58;
    if ( !item->fields._IsDisplayCombineButton_k__BackingField )
      goto LABEL_61;
    v60 = item->fields.userSvtEntity;
    if ( !v60 || UserServantEntity__IsLeave(v60, 0LL) )
      goto LABEL_61;
    IsServantLimitCountSeal = (System_String_o *)item->fields.userSvtEntity;
    if ( !IsServantLimitCountSeal )
      goto LABEL_118;
    IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)IsServantLimitCountSeal, 0LL);
    if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
    {
LABEL_61:
      v62 = 0;
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
      v67 = y + (float)v59;
      if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
      {
        IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        v99.fields.x = x;
        v99.fields.y = v67;
        v99.fields.z = z;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v99, 0LL);
      }
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v68 = x;
        if ( x == INFINITY )
          v68 = -x;
        UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v68, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
        if ( IsServantLimitCountSeal )
        {
          v69 = v67;
          if ( v67 == INFINITY )
            v69 = -INFINITY;
          UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v69, 0LL);
          IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
          v70 = v59 >= 0 ? v59 : v59 + 1;
          if ( IsServantLimitCountSeal )
          {
            v71 = this->fields.titleBasePosition.fields.x;
            v72 = this->fields.titleBasePosition.fields.y;
            v73 = this->fields.titleBasePosition.fields.z;
            IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                           0LL);
            if ( IsServantLimitCountSeal )
            {
              v74 = (float)(v70 >> 1);
              v100.fields.y = v72 + v74;
              v100.fields.x = v71;
              v100.fields.z = v73;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v100, 0LL);
              IsServantLimitCountSeal = (System_String_o *)this->fields.cardBase;
              if ( IsServantLimitCountSeal )
              {
                v75 = this->fields.cardBasePosition.fields.x;
                v76 = this->fields.cardBasePosition.fields.y;
                v77 = this->fields.cardBasePosition.fields.z;
                IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                               0LL);
                if ( IsServantLimitCountSeal )
                {
                  v101.fields.y = v76 + v74;
                  v101.fields.x = v75;
                  v101.fields.z = v77;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                    v101,
                    0LL);
                  IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
                  if ( IsServantLimitCountSeal )
                  {
                    v78 = this->fields.levelButtonBasePosition.fields.x;
                    v79 = this->fields.levelButtonBasePosition.fields.y;
                    v80 = this->fields.levelButtonBasePosition.fields.z;
                    IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                                   0LL);
                    if ( IsServantLimitCountSeal )
                    {
                      v102.fields.y = v79 + v74;
                      v102.fields.x = v78;
                      v102.fields.z = v80;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                        v102,
                        0LL);
                      v81 = this->fields.explanationBasePosition.fields.y - v74;
                      IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                      if ( v52 )
                        v81 = v81 + 16.0;
                      v82 = v62 ? v81 + 50.0 : v81;
                      if ( IsServantLimitCountSeal )
                      {
                        v83 = this->fields.explanationBasePosition.fields.x;
                        v84 = this->fields.explanationBasePosition.fields.z;
                        IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                       0LL);
                        if ( IsServantLimitCountSeal )
                        {
                          v103.fields.x = v83;
                          v103.fields.y = v82;
                          v103.fields.z = v84;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                            v103,
                            0LL);
                          ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v85);
                          ServantStatusListViewItemDrawCommand__SetupMask(this, item, v62, v86);
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
      sub_B5D69C(IsServantLimitCountSeal, v37);
    }
    commandCardParam = item->fields.commandCardParam;
    v59 += 50;
    if ( commandCardParam )
    {
      v88 = commandCardParam->max_length;
      if ( v88 < 1 )
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
        v94 = v59 >= 0 ? v59 : v59 + 1;
        v95 = (float)-(v94 >> 1);
        GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v95, 0LL);
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
        GameObjectExtensions__SetLocalPositionY(gameObject, v95, 0LL);
        v62 = 1;
        goto LABEL_62;
      }
      v89 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v89 >= v88 )
        {
          v97 = sub_B5D6C8(IsEventJoin);
          sub_B5D668(v97, 0LL);
        }
        IsEventJoin = BalanceConfig_TypeInfo;
        v90 = commandCardParam->m_Items[v89 + 1];
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsEventJoin = BalanceConfig_TypeInfo;
        }
        if ( v90 < IsEventJoin->static_fields->CommandCardParamUpMax )
          break;
        v88 = commandCardParam->max_length;
        if ( (int)++v89 >= v88 )
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
    if ( v59 >= 0 )
      v92 = v59;
    else
      v92 = v59 + 1;
    GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v92 >> 1), 0LL);
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
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
  UICommonButton_o *Instance; // x0
  const MethodInfo *v37; // x1
  _BOOL4 v38; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int32_t maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v45; // x0
  float *static_fields; // x8
  float v47; // s8
  float v48; // s9
  float v49; // s10
  float v50; // s11
  float *v51; // x8
  float v52; // s12
  float v53; // s13
  float v54; // s14
  float v55; // s15
  ServantLimitImageMaster_o *v56; // x25
  int v57; // w8
  ServantStatusListViewItemDrawCommand_o *v58; // x21
  System_String_o *v59; // x0
  int v60; // w9
  _BOOL4 v61; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v63; // x26
  int v64; // w20
  int v65; // w8
  float v66; // s3
  float v67; // s2
  float v68; // s1
  float v69; // s0
  System_String_o *v70; // x0
  System_String_o *v71; // x27
  System_String_o *v72; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v74; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  const MethodInfo *v76; // x1
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v78; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v80; // x27
  System_String_o *v81; // x1
  bool v82; // nf
  struct UICommonButton_array *v83; // x8
  __int64 v84; // x22
  il2cpp_array_size_t v85; // w27
  signed int max_length; // w24
  _BOOL4 v87; // w19
  struct UIRangeLabel_array *v88; // x9
  UIRangeLabel_o *v89; // x25
  int v90; // w20
  ServantCostumeEntity_o *Entity; // x0
  char v92; // w2
  __int64 v93; // x3
  System_String_o *unknownNameText; // x26
  int v95; // w8
  float v96; // s3
  float v97; // s2
  float v98; // s1
  float v99; // s0
  struct UISprite_array *v100; // x8
  __int64 *v101; // x8
  struct UICommonButton_array *v102; // x8
  __int64 v103; // x0
  ServantCostumeMaster_o *v104; // [xsp+8h] [xbp-B8h]
  int32_t v105; // [xsp+14h] [xbp-ACh]
  _BOOL4 v107; // [xsp+1Ch] [xbp-A4h]
  ServantStatusListViewItemDrawCommand_o *v108; // [xsp+20h] [xbp-A0h]
  unsigned int v109; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ED363 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, (_DWORD)item, isInit, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v33, v34, v35);
    byte_42ED363 = 1;
  }
  v109 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_168:
    sub_B5D69C(Instance, v37);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v104 = (ServantCostumeMaster_o *)Instance;
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
    v107 = 0;
    goto LABEL_13;
  }
  if ( item->fields.userSvtEntity )
    v38 = 1;
  else
    v38 = item->fields.userSvtCollectionEntity != 0LL;
  v107 = v38;
LABEL_13:
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                            item,
                                            v37);
  maxCommandCardLimitCount = item->fields.maxCommandCardLimitCount;
  commandCardSelectList = item->fields.commandCardSelectList;
  v105 = ConvertOverwriteCommandCardLimitCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    byte_42E563C = 1;
  }
  v45 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v45->static_fields;
  v47 = static_fields[20];
  v48 = static_fields[21];
  v49 = static_fields[22];
  v50 = static_fields[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v40, v41, v42);
    v45 = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = LocalizationManager_TypeInfo;
  }
  v51 = (float *)v45->static_fields;
  v52 = v51[24];
  v53 = v51[25];
  v54 = v51[26];
  v55 = v51[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_168;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v109 = 0;
  v56 = (ServantLimitImageMaster_o *)Instance;
  v57 = 0;
  v58 = this;
  v108 = this;
  do
  {
    if ( v57 <= maxCommandCardLimitCount )
    {
      if ( !commandCardSelectList )
        goto LABEL_168;
      if ( v57 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v61 = commandCardSelectList->m_Items[v57 + 1] == v105;
      v60 = 1;
    }
    else
    {
      v60 = 0;
      v61 = 0;
    }
    battleCharaLevelTitleRangeLabelList = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !battleCharaLevelTitleRangeLabelList )
      goto LABEL_168;
    if ( v57 >= battleCharaLevelTitleRangeLabelList->max_length )
    {
LABEL_170:
      v103 = sub_B5D6C8(Instance);
      sub_B5D668(v103, 0LL);
    }
    v63 = battleCharaLevelTitleRangeLabelList->m_Items[v57];
    v64 = v60 & v107;
    if ( v60 || item->fields.servantLeaderInfo )
    {
      if ( !v63 )
        goto LABEL_168;
      v65 = v61 & v64;
      if ( (v61 & v64) != 0 )
        v66 = v55;
      else
        v66 = v50;
      if ( v65 )
        v67 = v54;
      else
        v67 = v49;
      if ( v65 )
        v68 = v53;
      else
        v68 = v48;
      if ( v65 )
        v69 = v52;
      else
        v69 = v47;
      UIRangeLabel__set_effectColor(v63, *(UnityEngine_Color_o *)(&v66 - 3), 0LL);
      v70 = System_Int32__ToString((int32_t)&v109, 0LL);
      v71 = System_String__Concat_44577788((System_String_o *)StringLiteral_12137/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v70, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = v71;
    }
    else
    {
      if ( !v63 )
        goto LABEL_168;
      v110.fields.r = v47;
      v110.fields.g = v48;
      v110.fields.b = v49;
      v110.fields.a = v50;
      UIRangeLabel__set_effectColor(v63, v110, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = (System_String_o *)StringLiteral_12138/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v72 = LocalizationManager__Get(v59, 0LL);
    UIRangeLabel__Set(v63, v72, 0LL, 1, 0, 0LL);
    battleCharaLevelSpriteList = v58->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_168;
    if ( v109 >= battleCharaLevelSpriteList->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)battleCharaLevelSpriteList->m_Items[v109];
    if ( !Instance )
      goto LABEL_168;
    v74 = &StringLiteral_17174/*"btn_bg_20"*/;
    if ( v61 )
      v74 = &StringLiteral_17175/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v74, 0LL);
    battleCharaLevelButtonList = v58->fields.battleCharaLevelButtonList;
    if ( !battleCharaLevelButtonList )
      goto LABEL_168;
    if ( v109 >= battleCharaLevelButtonList->max_length )
      goto LABEL_170;
    Instance = battleCharaLevelButtonList->m_Items[v109];
    if ( (v61 & v64) != 0 )
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(Instance, 0, v64 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetButtonEnable(Instance, v64 & ~v61, v64 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = v58->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v109 >= limitCountSealLabel->max_length )
        goto LABEL_170;
      v78 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v109];
    }
    else
    {
      v78 = 0LL;
    }
    limitCountSealObjList = v108->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v109 >= limitCountSealObjList->max_length )
        goto LABEL_170;
      v80 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v109];
    }
    else
    {
      v80 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v76);
    if ( !commandCardSelectList )
      goto LABEL_168;
    if ( v109 >= commandCardSelectList->max_length )
      goto LABEL_170;
    if ( !v56 )
      goto LABEL_168;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(
           v56,
           (int32_t)Instance,
           commandCardSelectList->m_Items[v109 + 1] + 1,
           0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v80 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v80, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8473/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v78 )
          goto LABEL_168;
        v81 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v80 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v80, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v78 )
          goto LABEL_168;
        v81 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_110:
        UILabel__set_text((UILabel_o *)v78, v81, 0LL);
      }
    }
    this = v108;
    v82 = (int)(v109 - 2) < 0;
    v57 = ++v109;
  }
  while ( v82 != __OFSUB__(v109, 3) );
  v83 = v108->fields.battleCharaLevelButtonList;
  if ( !v83 )
    goto LABEL_168;
  v84 = 11LL;
  while ( 1 )
  {
    v85 = v84 - 8;
    if ( (int)v84 - 8 >= (signed int)v83->max_length )
      break;
    max_length = commandCardSelectList->max_length;
    if ( (int)v85 >= max_length )
    {
      v87 = 0;
    }
    else
    {
      if ( v85 >= max_length )
        goto LABEL_170;
      v87 = *((_DWORD *)&commandCardSelectList->obj.klass + v84) == v105;
    }
    v88 = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !v88 )
      goto LABEL_168;
    if ( v85 >= v88->max_length )
      goto LABEL_170;
    v89 = v88->m_Items[v85];
    v90 = v107 && (int)v85 < max_length;
    if ( (int)v85 >= max_length )
    {
      if ( !v89 )
        goto LABEL_168;
      UIRangeLabel__Clear(v89, 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v37);
      if ( v85 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v37 = (const MethodInfo *)(unsigned int)Instance;
      Instance = (UICommonButton_o *)v104;
      if ( !v104 )
        goto LABEL_168;
      Entity = ServantCostumeMaster__GetEntity(v104, (int32_t)v37, commandCardSelectList->m_Items[v85 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        unknownNameText = (System_String_o *)Instance;
        if ( !v89 )
          goto LABEL_168;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_42E6772 )
        {
          sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)v37, v92, v93);
          byte_42E6772 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          JUMPOUT(0x20C6F4CLL);
        }
        unknownNameText = LocalizationManager_TypeInfo->static_fields->unknownNameText;
        if ( !v89 )
          goto LABEL_168;
      }
      v95 = v87 & v90;
      if ( (v87 & v90) != 0 )
        v96 = v55;
      else
        v96 = v50;
      if ( v95 )
        v97 = v54;
      else
        v97 = v49;
      if ( v95 )
        v98 = v53;
      else
        v98 = v48;
      if ( v95 )
        v99 = v52;
      else
        v99 = v47;
      UIRangeLabel__set_effectColor(v89, *(UnityEngine_Color_o *)(&v96 - 3), 0LL);
      UIRangeLabel__Set(v89, unknownNameText, 0LL, 1, 0, 0LL);
      this = v108;
    }
    v100 = this->fields.battleCharaLevelSpriteList;
    if ( !v100 )
      goto LABEL_168;
    if ( v85 >= v100->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)v100->m_Items[v85];
    if ( !Instance )
      goto LABEL_168;
    v101 = &StringLiteral_17174/*"btn_bg_20"*/;
    if ( v87 )
      v101 = &StringLiteral_17175/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v101, 0LL);
    v102 = this->fields.battleCharaLevelButtonList;
    if ( !v102 )
      goto LABEL_168;
    if ( v85 >= v102->max_length )
      goto LABEL_170;
    Instance = v102->m_Items[v85];
    if ( (v87 & v90) != 0 )
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(Instance, 0, v90 == 0 || isInit, 0LL);
    }
    else if ( (int)v85 >= max_length )
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
      UICommonButton__SetButtonEnable(Instance, v90 & ~v87, v90 == 0 || isInit, 0LL);
    }
    v83 = this->fields.battleCharaLevelButtonList;
    ++v84;
    if ( !v83 )
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  UnityEngine_GameObject_o *v15; // x22
  float y; // s0
  System_String_o *Empty; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42ED364 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, isDisplayCombineButton, method);
    sub_B5D5C4(&string_TypeInfo, v7, v8, v9);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B5D5C4(&StringLiteral_12158/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v10, v11, v12);
    byte_42ED364 = 1;
  }
  if ( !item )
    goto LABEL_34;
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
    if ( !this )
      goto LABEL_34;
LABEL_15:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
  if ( !this )
    goto LABEL_34;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_34;
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_34;
  mHeight = baseSprite->fields.mHeight;
  if ( isDisplayCombineButton )
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight - 50, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_34;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_34;
    v15 = (UnityEngine_GameObject_o *)this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_34;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = localPosition.fields.y + 25.0;
  }
  else
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_34;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_34;
    v15 = (UnityEngine_GameObject_o *)this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_34;
    v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = v20.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY(v15, y, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_34;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12158/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL);
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
LABEL_34:
    sub_B5D69C(this, item);
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
    goto LABEL_34;
  }
}