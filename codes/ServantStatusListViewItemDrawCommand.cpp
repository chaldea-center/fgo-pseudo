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

  if ( (byte_4E74603 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&UISprite___TypeInfo);
    byte_4E74603 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UISprite_array *)sub_1D0F15C(UISprite___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v4;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeSpriteList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  float y; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v11; // cc
  unsigned int v12; // w8
  int v13; // w8
  int v14; // w8
  float v15; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

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
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v5 = v3->fields.battleCharaLevelSpriteList;
    if ( !v5 )
      goto LABEL_30;
    if ( LODWORD(v5->max_length) <= 3 )
      sub_1D0F314(this);
    if ( (this = (ServantStatusListViewItemDrawCommand_o *)v5->m_Items[3]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0)
      || ((v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           battleCharaLevelSpriteList = v3->fields.battleCharaLevelSpriteList,
           (float)(y - v17.fields.y) != INFINITY)
        ? (buttonPitch = (int)(float)(y - v17.fields.y))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !battleCharaLevelSpriteList) )
    {
LABEL_30:
      sub_1D0F30C(this, method);
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
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v14 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v15 = (float)(v14 >> 1);
  v3->fields.titleBasePosition.fields.x = v18.fields.x;
  v3->fields.titleBasePosition.fields.z = v18.fields.z;
  v3->fields.titleBasePosition.fields.y = v18.fields.y - v15;
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

  if ( (byte_4E745FF & 1) == 0 )
  {
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E745FF = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4E72E18 )
    {
      sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
      byte_4E72E18 = 1;
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
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  UnityEngine_Object_c **v7; // x26
  unsigned int v8; // w24
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v10; // x22
  GrandQuestFolderBoardItem_c *klass; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  unsigned int max_length; // w9
  int32_t v14; // w21
  struct System_Int32_array *commandCardParam; // x8
  unsigned int v16; // w9
  int32_t v17; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v19; // x22
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct UnityEngine_GameObject_array *v27; // x8
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Int32_array *v41; // x1
  struct System_Int32_array **p_commandCodeIdList; // x22
  struct System_Int32_array *v43; // x1
  struct System_Int32_array **p_commandCardParam; // x24
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Int32_array *CommandCardIds; // x29
  struct UnityEngine_GameObject_array *v52; // x8
  unsigned __int64 v53; // x23
  unsigned __int64 max_length_low; // x8
  int32_t v55; // w25
  struct System_Int32_array *v56; // x8
  unsigned __int64 v57; // x9
  int32_t v58; // w10
  struct System_Int32_array *v59; // x8
  unsigned __int64 v60; // x9
  int32_t v61; // w27
  Il2CppObject *commandCardPrefab; // x21
  ServantStatusListViewItemDrawCommand_o *v63; // x28
  UnityEngine_Object_c **v64; // x19
  UnityEngine_Transform_o *transform; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  struct UnityEngine_GameObject_array *v71; // x8
  ServantStatusListViewItemDrawCommand_o *v72; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  unsigned int *commandCardDataList; // x24
  BattleCommandData_o *v81; // x22
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  unsigned int *v88; // x0
  GrandQuestFolderBoardItem_c *v89; // x8
  struct UISprite_o *clickEventObject; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  unsigned int *v97; // x21
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  unsigned int *v104; // x0
  struct UnityEngine_GameObject_array *v105; // x8
  int32_t layer; // w21
  struct UISprite_array *v107; // x8
  UIWidget_o *v108; // x8
  struct UISprite_array *v109; // x8
  UISprite_o *v110; // x21
  struct UISprite_array *v111; // x8
  __int64 v112; // x0
  System_Int32_array *v113; // [xsp+0h] [xbp-B0h]
  ServantStatusListViewItem_o *v114; // [xsp+18h] [xbp-98h]
  int32_t v115; // [xsp+20h] [xbp-90h]
  int32_t SvtId; // [xsp+24h] [xbp-8Ch]
  GrandQuestFolderBoardItem_o *p_commandCardDataList; // [xsp+28h] [xbp-88h]
  int32_t commandCodeId; // [xsp+38h] [xbp-78h]
  int v119; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  v4 = item;
  v5 = this;
  if ( (byte_4E74600 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&BattleCommandComponent___TypeInfo);
    sub_1D0F0B4(&BattleCommandData___TypeInfo);
    sub_1D0F0B4(&BattleCommandData_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1D0F0B4(&NGUITools_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_15334/*"Unlit/Transparent Colored"*/);
    sub_1D0F0B4(&StringLiteral_4625/*"CommandCard("*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1D0F0B4(&StringLiteral_758/*")"*/);
    byte_4E74600 = 1;
  }
  v119 = 0;
  p_commandCardDataList = (GrandQuestFolderBoardItem_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  v7 = &UnityEngine_Object_TypeInfo;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v8 = 0;
      while ( (signed int)v8 < SLODWORD(commandCardBaseList->max_length) )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_101;
        if ( v8 >= LODWORD(commandCardComponentList->max_length) )
          goto LABEL_103;
        if ( !v4 )
          goto LABEL_101;
        v10 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v8];
        if ( !v4->fields._IsTransformed_k__BackingField )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfterAtStageLimitCount(
                                                               v4,
                                                               0,
                                                               0);
            klass = p_commandCardDataList->klass;
            if ( !p_commandCardDataList->klass )
              goto LABEL_101;
            if ( v8 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_103;
            item = (ServantStatusListViewItem_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v8);
            if ( !item )
              goto LABEL_101;
            LODWORD(item->fields.partyItem) = (_DWORD)this;
            if ( !v10 )
              goto LABEL_101;
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
            goto LABEL_103;
          v14 = commandCodeIdList->m_Items[v8];
        }
        else
        {
          v14 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v16 = commandCardParam->max_length, (int)v8 < (int)v16) )
        {
          if ( v8 >= v16 )
            goto LABEL_103;
          v17 = commandCardParam->m_Items[v8];
        }
        else
        {
          v17 = 0;
        }
        if ( v10 )
        {
          BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v10, v17, 2, 1, 0);
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v10, v17, 0);
          commandCodeSpriteList = v5->fields.commandCodeSpriteList;
          if ( commandCodeSpriteList )
          {
            if ( v8 >= LODWORD(commandCodeSpriteList->max_length) )
              goto LABEL_103;
            v19 = commandCodeSpriteList->m_Items[v8];
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v19, v14, 0);
            commandCardBaseList = v5->fields.commandCardBaseList;
            ++v8;
            if ( commandCardBaseList )
              continue;
          }
        }
        goto LABEL_101;
      }
      goto LABEL_102;
    }
LABEL_101:
    sub_1D0F30C(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_101;
  v20 = sub_1D0F15C(BattleCommandData___TypeInfo, LODWORD(commandCardBaseList->max_length));
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v20;
  sub_1D0F058(p_commandCardDataList, v20, v21, v22, v23, v24, v25, v26);
  v27 = v5->fields.commandCardBaseList;
  if ( !v27 )
    goto LABEL_101;
  v28 = sub_1D0F15C(BattleCommandComponent___TypeInfo, LODWORD(v27->max_length));
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v28;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v5->fields.commandCardComponentList, v28, v29, v30, v31, v32, v33, v34);
  if ( !v4 )
    goto LABEL_101;
  v41 = v4->fields.commandCodeIdList;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = v41;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v5->fields.commandCodeIdList, (int32_t)v41, v35, v36, v37, v38, v39, v40);
  v43 = v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = v43;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v5->fields.commandCardParam, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0);
  SvtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfterAtStageLimitCount(
                                                     v4,
                                                     1,
                                                     0);
  v52 = v5->fields.commandCardBaseList;
  v115 = (int)this;
  if ( !v52 )
    goto LABEL_101;
  v53 = 0;
  v114 = v4;
  v113 = CommandCardIds;
  while ( (__int64)v53 < SLODWORD(v52->max_length) )
  {
    if ( CommandCardIds && (max_length_low = LODWORD(CommandCardIds->max_length), (__int64)v53 < (int)max_length_low) )
    {
      if ( v53 >= max_length_low )
        goto LABEL_103;
      v55 = CommandCardIds->m_Items[v53];
    }
    else
    {
      v55 = 0;
    }
    v56 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v57 = LODWORD(v56->max_length), (__int64)v53 < (int)v57) )
    {
      if ( v53 >= v57 )
        goto LABEL_103;
      v58 = v56->m_Items[v53];
    }
    else
    {
      v58 = 0;
    }
    v59 = *p_commandCardParam;
    if ( *p_commandCardParam && (v60 = LODWORD(v59->max_length), (__int64)v53 < (int)v60) )
    {
      if ( v53 >= v60 )
        goto LABEL_103;
      v61 = v59->m_Items[v53];
    }
    else
    {
      v61 = 0;
    }
    if ( (unsigned int)(v55 - 1) > 2 )
    {
      v111 = v5->fields.commandCodeSpriteList;
      if ( !v111 )
        goto LABEL_101;
      if ( v53 >= LODWORD(v111->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v111->m_Items[v53];
      if ( !this )
        goto LABEL_101;
      UISprite__set_spriteName((UISprite_o *)this, 0, 0);
      ++v53;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      commandCodeId = v58;
      if ( !(*v7)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v7);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_101;
      v63 = this;
      v64 = v7;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v63,
                                                         0);
      if ( !this )
        goto LABEL_101;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v119 = v53 + 1;
      v69 = System_Int32__ToString((int32_t)&v119, 0);
      v70 = System_String__Concat_65601036(
              (System_String_o *)StringLiteral_4625/*"CommandCard("*/,
              v69,
              (System_String_o *)StringLiteral_758/*")"*/,
              0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v63, v70, 0);
      v71 = v5->fields.commandCardBaseList;
      if ( !v71 )
        goto LABEL_101;
      if ( v53 >= LODWORD(v71->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v71->m_Items[v53];
      if ( !this )
        goto LABEL_101;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
      if ( !transform )
        goto LABEL_101;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      if ( !byte_4E70C99 )
      {
        sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
        byte_4E70C99 = 1;
      }
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !byte_4E70C9F )
      {
        sub_1D0F0B4(&UnityEngine_Quaternion_TypeInfo);
        byte_4E70C9F = 1;
      }
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v121.fields.x = x;
      v121.fields.y = y;
      v121.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v121, 0);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v63,
        (const MethodInfo_32A835C *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v63,
                                                         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_101;
      v72 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      v72[1].fields.baseSprite = (struct UISprite_o *)gameObject;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v72[1].fields.baseSprite,
        (int32_t)gameObject,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v81 = (BattleCommandData_o *)sub_1D0F300(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_48086632(v81, v55, SvtId, v115, 0, -1, 0);
      if ( !commandCardDataList )
        goto LABEL_101;
      if ( v81 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_1D0F1F0(
                                                           v81,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_104:
          v112 = sub_1D0F330();
          sub_1D0F1DC(v112, 0);
        }
      }
      if ( v53 >= commandCardDataList[6] )
        goto LABEL_103;
      v88 = &commandCardDataList[2 * v53];
      *((_QWORD *)v88 + 4) = v81;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v88 + 8), (int32_t)v81, v82, v83, v84, v85, v86, v87);
      v89 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_101;
      if ( v53 >= LODWORD(v89->_1.namespaze) )
        goto LABEL_103;
      item = (ServantStatusListViewItem_o *)*((_QWORD *)&v89->_1.byval_arg.data + v53);
      if ( !item )
        goto LABEL_101;
      *(&item->fields.memberNum + 1) = v53 + 1;
      LODWORD(item->fields.servantLeaderInfo) = v53;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v72, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v72, (System_String_o *)StringLiteral_15334/*"Unlit/Transparent Colored"*/, 0);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v72, 1, 0, 1, 0, 0, 0);
      clickEventObject = (struct UISprite_o *)v5->fields.clickEventObject;
      v72[1].fields.baseSprite = clickEventObject;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v72[1].fields.baseSprite,
        (int32_t)clickEventObject,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96);
      v97 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v97 )
        goto LABEL_101;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_1D0F1F0(v72, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
      if ( !this )
        goto LABEL_104;
      if ( v53 >= v97[6] )
        goto LABEL_103;
      v104 = &v97[2 * v53];
      *((_QWORD *)v104 + 4) = v72;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v104 + 8), (int32_t)v72, v98, v99, v100, v101, v102, v103);
      v105 = v5->fields.commandCardBaseList;
      if ( !v105 )
        goto LABEL_101;
      if ( v53 >= LODWORD(v105->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v105->m_Items[v53];
      if ( !this )
        goto LABEL_101;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v63, layer, 0);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v72, v61, 2, 1, 0);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v72, v61, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v72,
                                                         0);
      if ( (_DWORD)this != -1 )
      {
        v107 = v5->fields.commandCodeSpriteList;
        if ( !v107 )
          goto LABEL_101;
        if ( v53 >= LODWORD(v107->max_length) )
          goto LABEL_103;
        v108 = (UIWidget_o *)v107->m_Items[v53];
        if ( !v108 )
          goto LABEL_101;
        UIWidget__set_depth(v108, (_DWORD)this - 1, 0);
      }
      v109 = v5->fields.commandCodeSpriteList;
      if ( !v109 )
        goto LABEL_101;
      if ( v53 >= LODWORD(v109->max_length) )
LABEL_103:
        sub_1D0F314(this);
      v110 = v109->m_Items[v53];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v110, commandCodeId, 0);
      ++v53;
      v7 = v64;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      v4 = v114;
      CommandCardIds = v113;
      p_commandCardParam = &v5->fields.commandCardParam;
    }
    v52 = v5->fields.commandCardBaseList;
    if ( !v52 )
      goto LABEL_101;
  }
LABEL_102:
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
  __int64 *v9; // x8
  void *CommandCardLimitCountStageList; // x0
  __int64 v11; // x1
  struct ServantEntity_o *svtEntity; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w22
  UILabel_o *servantLeaderInfo; // x23
  System_String_o *mText; // x25
  System_String_o *v18; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int v22; // w8
  int32_t buttonPitch; // w9
  int v24; // w8
  int v25; // w8
  int v26; // w8
  int32_t transformedSubHeight; // w24
  int v28; // w25
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v31; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *userSvtEntity; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v35; // w21
  char v36; // w22
  UILabel_o *v37; // x22
  bool v38; // w1
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v43; // s8
  int32_t v44; // w1
  int32_t v45; // w1
  int v46; // w22
  float v47; // s8
  float v48; // s11
  float v49; // s9
  int v50; // w22
  float v51; // s8
  float v52; // s12
  float v53; // s9
  float v54; // s11
  float v55; // s8
  float v56; // s12
  float v57; // s9
  float v58; // s0
  float v59; // s8
  float v60; // s10
  float v61; // s9
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  UILabel_o *v64; // x22
  struct System_Int32_array *commandCardParam; // x21
  int max_length; // w8
  __int64 v67; // x22
  int32_t v68; // w28
  int v69; // w8
  int v70; // w8
  float v71; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E745FE & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12087/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/);
    sub_1D0F0B4(&StringLiteral_12085/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/);
    sub_1D0F0B4(&StringLiteral_12086/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/);
    sub_1D0F0B4(&StringLiteral_12084/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/);
    byte_4E745FE = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_12084/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/;
    }
    else
    {
      if ( !item->fields.userSvtCollectionEntity )
      {
        servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
        v64 = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        CommandCardLimitCountStageList = LocalizationManager__Get((System_String_o *)StringLiteral_12086/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0);
        if ( !v64 )
          goto LABEL_135;
        UILabel__set_text(v64, (System_String_o *)CommandCardLimitCountStageList, 0);
        if ( !servantLeaderInfo )
        {
LABEL_27:
          CommandCardLimitCountStageList = ServantStatusListViewItem__GetCommandCardLimitCountStageList(item, 0);
          if ( !CommandCardLimitCountStageList )
            goto LABEL_135;
          v22 = *((_DWORD *)CommandCardLimitCountStageList + 6);
          if ( v22 < 4 )
            buttonPitch = 0;
          else
            buttonPitch = this->fields.buttonPitch;
          if ( v22 == 3 * (v22 / 3) )
            v24 = v22 / 3;
          else
            v24 = v22 / 3 + 1;
          if ( v24 < 3 )
            v25 = 1;
          else
            v25 = v24 - 1;
          v26 = v25 * buttonPitch;
          if ( (_DWORD)servantLeaderInfo )
            transformedSubHeight = v26 + 32;
          else
            transformedSubHeight = v26;
          if ( ServantStatusListViewItem__get_AnyTransformServant(item, 0) )
          {
            CommandCardLimitCountStageList = this->fields.levelButtonBase;
            if ( !CommandCardLimitCountStageList )
              goto LABEL_135;
            if ( item->fields._IsTransformed_k__BackingField )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 0, 0);
              CommandCardLimitCountStageList = this->fields.explanationLabel;
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                                 0);
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 0, 0);
              transformedSubHeight = this->fields.transformedSubHeight;
              LODWORD(servantLeaderInfo) = 0;
            }
            else
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
              CommandCardLimitCountStageList = this->fields.explanationLabel;
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                                 0);
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
            }
            transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
            TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
            if ( !transformNameLabel )
              goto LABEL_135;
            UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
            transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
            TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
            if ( !transformNameSprite )
              goto LABEL_135;
            UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
            CommandCardLimitCountStageList = this->fields.transformNameSprite;
            if ( !CommandCardLimitCountStageList )
              goto LABEL_135;
            CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                               0);
            if ( !CommandCardLimitCountStageList )
              goto LABEL_135;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
            v31 = this->fields.transformNameLabel;
            CommandCardLimitCountStageList = ServantStatusListViewItem__GetTransformName(item, 0);
            if ( !v31 )
              goto LABEL_135;
            UILabel__set_text(v31, (System_String_o *)CommandCardLimitCountStageList, 0);
            transformNameAddHeight = this->fields.transformNameAddHeight;
            transformedSubHeight += transformNameAddHeight;
            v28 = -transformNameAddHeight;
          }
          else
          {
            CommandCardLimitCountStageList = this->fields.transformNameSprite;
            if ( !CommandCardLimitCountStageList )
              goto LABEL_135;
            CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                               0);
            if ( !CommandCardLimitCountStageList )
              goto LABEL_135;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 0, 0);
            v28 = 0;
          }
          if ( !item->fields._IsDisplayCombineButton_k__BackingField )
            goto LABEL_63;
          userSvtEntity = item->fields.userSvtEntity;
          if ( !userSvtEntity || UserServantEntity__IsLeave(userSvtEntity, 0) )
            goto LABEL_63;
          CommandCardLimitCountStageList = item->fields.userSvtEntity;
          if ( !CommandCardLimitCountStageList )
            goto LABEL_135;
          IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin(
                                             (UserServantEntity_o *)CommandCardLimitCountStageList,
                                             0);
          if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
          {
LABEL_63:
            v35 = 0;
            goto LABEL_64;
          }
          commandCardParam = item->fields.commandCardParam;
          transformedSubHeight += 50;
          if ( commandCardParam )
          {
            max_length = commandCardParam->max_length;
            if ( max_length < 1 )
            {
LABEL_126:
              CommandCardLimitCountStageList = this->fields.engraveCodeObject;
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
              CommandCardLimitCountStageList = this->fields.engraveCodeButton;
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              *((_BYTE *)CommandCardLimitCountStageList + 97) = 1;
              UICommonButton__SetEnable(
                (UICommonButton_o *)CommandCardLimitCountStageList,
                item->fields._CanMoveCombine_k__BackingField,
                0);
              v70 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
              v71 = (float)-(v70 >> 1);
              GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v71, 0);
              CommandCardLimitCountStageList = this->fields.reinforceMaskSprite;
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                                 0);
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
              CommandCardLimitCountStageList = this->fields.reinforceMaskSprite;
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                             0);
              GameObjectExtensions__SetLocalPositionY(gameObject, v71, 0);
              v35 = 1;
LABEL_64:
              CommandCardLimitCountStageList = (void *)ServantStatusListViewItem__get_AnyTransformServant(item, 0);
              if ( !this->fields.transformNameSprite )
                goto LABEL_135;
              v36 = (char)CommandCardLimitCountStageList;
              CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.transformNameSprite,
                                                 0);
              if ( !CommandCardLimitCountStageList )
                goto LABEL_135;
              if ( (v36 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
                v37 = this->fields.transformNameLabel;
                CommandCardLimitCountStageList = ServantStatusListViewItem__GetTransformName(item, 0);
                if ( !v37 )
                  goto LABEL_135;
                UILabel__set_text(v37, (System_String_o *)CommandCardLimitCountStageList, 0);
                CommandCardLimitCountStageList = this->fields.levelButtonBase;
                if ( !CommandCardLimitCountStageList )
                  goto LABEL_135;
                if ( !item->fields._IsTransformed_k__BackingField )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
                  CommandCardLimitCountStageList = this->fields.explanationLabel;
                  if ( !CommandCardLimitCountStageList )
                    goto LABEL_135;
                  CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                                     0);
                  if ( !CommandCardLimitCountStageList )
                    goto LABEL_135;
                  v38 = 1;
                  goto LABEL_73;
                }
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 0, 0);
                CommandCardLimitCountStageList = this->fields.explanationLabel;
                if ( !CommandCardLimitCountStageList )
                  goto LABEL_135;
                CommandCardLimitCountStageList = UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                                   0);
                if ( !CommandCardLimitCountStageList )
                  goto LABEL_135;
              }
              v38 = 0;
LABEL_73:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, v38, 0);
              x = this->fields.baseSize.fields.x;
              y = this->fields.baseSize.fields.y;
              z = this->fields.baseSize.fields.z;
              baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v43 = y + (float)transformedSubHeight;
              if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
              {
                CommandCardLimitCountStageList = this->fields.baseCollider;
                if ( !CommandCardLimitCountStageList )
                  goto LABEL_135;
                v74.fields.x = x;
                v74.fields.y = v43;
                v74.fields.z = z;
                UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)CommandCardLimitCountStageList, v74, 0);
              }
              CommandCardLimitCountStageList = this->fields.baseSprite;
              if ( CommandCardLimitCountStageList )
              {
                v44 = x == INFINITY ? 0x80000000 : (int)x;
                UIWidget__set_width((UIWidget_o *)CommandCardLimitCountStageList, v44, 0);
                CommandCardLimitCountStageList = this->fields.baseSprite;
                if ( CommandCardLimitCountStageList )
                {
                  v45 = v43 == INFINITY ? 0x80000000 : (int)v43;
                  UIWidget__set_height((UIWidget_o *)CommandCardLimitCountStageList, v45, 0);
                  CommandCardLimitCountStageList = this->fields.titleSprite;
                  v46 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                  if ( CommandCardLimitCountStageList )
                  {
                    v47 = this->fields.titleBasePosition.fields.x;
                    v48 = this->fields.titleBasePosition.fields.y;
                    v49 = this->fields.titleBasePosition.fields.z;
                    CommandCardLimitCountStageList = UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                                       0);
                    if ( CommandCardLimitCountStageList )
                    {
                      v50 = v46 >> 1;
                      v75.fields.y = v48 + (float)v50;
                      v75.fields.x = v47;
                      v75.fields.z = v49;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)CommandCardLimitCountStageList,
                        v75,
                        0);
                      CommandCardLimitCountStageList = this->fields.cardBase;
                      if ( CommandCardLimitCountStageList )
                      {
                        v51 = this->fields.cardBasePosition.fields.x;
                        v52 = this->fields.cardBasePosition.fields.y;
                        v53 = this->fields.cardBasePosition.fields.z;
                        CommandCardLimitCountStageList = UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)CommandCardLimitCountStageList,
                                                           0);
                        if ( CommandCardLimitCountStageList )
                        {
                          v54 = (float)(v50 + v28);
                          v76.fields.y = v52 + v54;
                          v76.fields.x = v51;
                          v76.fields.z = v53;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)CommandCardLimitCountStageList,
                            v76,
                            0);
                          CommandCardLimitCountStageList = this->fields.levelButtonBase;
                          if ( CommandCardLimitCountStageList )
                          {
                            v55 = this->fields.levelButtonBasePosition.fields.x;
                            v56 = this->fields.levelButtonBasePosition.fields.y;
                            v57 = this->fields.levelButtonBasePosition.fields.z;
                            CommandCardLimitCountStageList = UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)CommandCardLimitCountStageList,
                                                               0);
                            if ( CommandCardLimitCountStageList )
                            {
                              v77.fields.y = v56 + v54;
                              v77.fields.x = v55;
                              v77.fields.z = v57;
                              UnityEngine_Transform__set_localPosition(
                                (UnityEngine_Transform_o *)CommandCardLimitCountStageList,
                                v77,
                                0);
                              v58 = this->fields.explanationBasePosition.fields.y - (float)v50;
                              CommandCardLimitCountStageList = this->fields.explanationLabel;
                              if ( (_DWORD)servantLeaderInfo )
                                v58 = v58 + 16.0;
                              v59 = v35 ? v58 + 50.0 : v58;
                              if ( CommandCardLimitCountStageList )
                              {
                                v60 = this->fields.explanationBasePosition.fields.x;
                                v61 = this->fields.explanationBasePosition.fields.z;
                                CommandCardLimitCountStageList = UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)CommandCardLimitCountStageList,
                                                                   0);
                                if ( CommandCardLimitCountStageList )
                                {
                                  v78.fields.x = v60;
                                  v78.fields.y = v59;
                                  v78.fields.z = v61;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)CommandCardLimitCountStageList,
                                    v78,
                                    0);
                                  ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v62);
                                  ServantStatusListViewItemDrawCommand__SetupMask(this, item, v35, v63);
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
LABEL_135:
              sub_1D0F30C(CommandCardLimitCountStageList, v11);
            }
            v67 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v67 >= max_length )
                sub_1D0F314(IsEventJoin);
              IsEventJoin = BalanceConfig_TypeInfo;
              v68 = commandCardParam->m_Items[v67];
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                IsEventJoin = BalanceConfig_TypeInfo;
              }
              if ( v68 < IsEventJoin->static_fields->CommandCardParamUpMax )
                break;
              max_length = commandCardParam->max_length;
              if ( (int)++v67 >= max_length )
                goto LABEL_126;
            }
          }
          CommandCardLimitCountStageList = this->fields.reinforceObject;
          if ( !CommandCardLimitCountStageList )
            goto LABEL_135;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CommandCardLimitCountStageList, 1, 0);
          CommandCardLimitCountStageList = this->fields.reinforceButton;
          if ( !CommandCardLimitCountStageList )
            goto LABEL_135;
          *((_BYTE *)CommandCardLimitCountStageList + 97) = 1;
          UICommonButton__SetEnable(
            (UICommonButton_o *)CommandCardLimitCountStageList,
            item->fields._CanMoveCombine_k__BackingField,
            0);
          if ( transformedSubHeight >= 0 )
            v69 = transformedSubHeight;
          else
            v69 = transformedSubHeight + 1;
          GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v69 >> 1), 0);
          goto LABEL_126;
        }
LABEL_18:
        svtEntity = item->fields.svtEntity;
        if ( !svtEntity )
          goto LABEL_135;
        v14 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
        v13 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v73.fields.currentCryptoKey = v14;
        *(_QWORD *)&v73.fields.fakeValue = v13;
        CommandCardLimitCountStageList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                   v73,
                                                   0);
        if ( !(_DWORD)CommandCardLimitCountStageList )
          goto LABEL_26;
        if ( !Master_object )
          goto LABEL_135;
        v15 = (int)CommandCardLimitCountStageList;
        if ( ServantLimitImageMaster__IsServantLimitCountSeal(
               (ServantLimitImageMaster_o *)Master_object,
               (int32_t)CommandCardLimitCountStageList,
               3,
               0) )
        {
          CommandCardLimitCountStageList = ServantLimitImageMaster__GetServantStatusExplanationText(
                                             (ServantLimitImageMaster_o *)Master_object,
                                             (System_String_o *)StringLiteral_12087/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                             v15,
                                             0);
          servantLeaderInfo = this->fields.explanationLabel;
          if ( !servantLeaderInfo )
            goto LABEL_135;
          mText = servantLeaderInfo->fields.mText;
          v18 = (System_String_o *)CommandCardLimitCountStageList;
          LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                          (ServantLimitImageMaster_o *)Master_object,
                                                          v15,
                                                          3,
                                                          0,
                                                          0,
                                                          0);
          v20 = System_String__Format(v18, LimitCountSealedServantName, 0);
          v21 = System_String__Concat_65562772(mText, v20, 0);
          UILabel__set_text(servantLeaderInfo, v21, 0);
          LODWORD(servantLeaderInfo) = 1;
        }
        else
        {
LABEL_26:
          LODWORD(servantLeaderInfo) = 0;
        }
        goto LABEL_27;
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_12085/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/;
    }
    CommandCardLimitCountStageList = LocalizationManager__Get((System_String_o *)*v9, 0);
    if ( !explanationLabel )
      goto LABEL_135;
    UILabel__set_text(explanationLabel, (System_String_o *)CommandCardLimitCountStageList, 0);
    goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawCommand__SetupBattleButton(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x20
  ServantStatusListViewItemDrawCommand_o *v5; // x21
  _BOOL4 v6; // w8
  System_Int32_array *CommandCardLimitCountStageList; // x27
  struct UnityEngine_GameObject_o *engraveCodeObject; // x8
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s11
  struct UnityEngine_GameObject_o *v13; // x8
  float v14; // s12
  float v15; // s13
  float v16; // s14
  float v17; // s15
  unsigned int v18; // w8
  int32_t v19; // w26
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x11
  _BOOL4 v21; // w9
  UIRangeLabel_o *v22; // x27
  int v23; // w23
  int v24; // w19
  System_String_o *v25; // x28
  float v26; // s3
  float v27; // s2
  float v28; // s1
  float v29; // s0 OVERLAPPED
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v33; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v36; // x27
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v38; // x28
  int32_t SvtId; // w29
  int32_t LimitCount; // w0
  bool IsSealed; // w26
  ServantStatusListViewItemDrawCommand_o *v42; // x1
  bool v43; // nf
  struct UICommonButton_array *v44; // x8
  __int64 v45; // x22
  unsigned int v46; // w29
  signed int max_length; // w28
  _BOOL4 v48; // w23
  struct UIRangeLabel_array *v49; // x9
  UIRangeLabel_o *v50; // x26
  int v51; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *monitor; // x27
  float v54; // s3
  float v55; // s2
  float v56; // s1
  float v57; // s0 OVERLAPPED
  struct UISprite_array *v58; // x8
  __int64 *v59; // x8
  struct UICommonButton_array *v60; // x8
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-C0h]
  System_Int32_array *v62; // [xsp+8h] [xbp-B8h]
  int32_t CommandCardLimitCountStage; // [xsp+10h] [xbp-B0h]
  _BOOL4 v65; // [xsp+18h] [xbp-A8h]
  unsigned int v66; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_4E74601 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1D0F0B4(&StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1D0F0B4(&StringLiteral_17707/*"btn_bg_20"*/);
    sub_1D0F0B4(&StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1D0F0B4(&StringLiteral_17709/*"btn_bg_21"*/);
    byte_4E74601 = 1;
  }
  if ( !v4 )
    goto LABEL_127;
  if ( v4->fields._IsTransformed_k__BackingField )
    return;
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_127;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( v5->fields.isStart && !ServantStatusListViewItem__get_IsConvertOverwriteImage(v4, 0) )
  {
    if ( v4->fields.userSvtEntity )
      v6 = 1;
    else
      v6 = v4->fields.userSvtCollectionEntity != 0;
    v65 = v6;
  }
  else
  {
    v65 = 0;
  }
  CommandCardLimitCountStage = ServantStatusListViewItem__GetCommandCardLimitCountStage(v4, 0, 0);
  CommandCardLimitCountStageList = ServantStatusListViewItem__GetCommandCardLimitCountStageList(v4, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4E71D15 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E71D15 = 1;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
  }
  engraveCodeObject = this->fields.engraveCodeObject;
  v9 = *(float *)&engraveCodeObject[3].monitor;
  v10 = *((float *)&engraveCodeObject[3].monitor + 1);
  v11 = *(float *)&engraveCodeObject[3].fields.m_CachedPtr;
  v12 = *((float *)&engraveCodeObject[3].fields.m_CachedPtr + 1);
  if ( !byte_4E71D16 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
    byte_4E71D16 = 1;
  }
  if ( !LODWORD(this->fields.transformNameSprite) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
  }
  v13 = this->fields.engraveCodeObject;
  v14 = *(float *)&v13[4].klass;
  v15 = *((float *)&v13[4].klass + 1);
  v16 = *(float *)&v13[4].monitor;
  v17 = *((float *)&v13[4].monitor + 1);
  v66 = 0;
  if ( !CommandCardLimitCountStageList )
LABEL_127:
    sub_1D0F30C(this, item);
  v18 = 0;
  v62 = CommandCardLimitCountStageList;
  do
  {
    if ( v18 >= LODWORD(CommandCardLimitCountStageList->max_length) )
      goto LABEL_128;
    v19 = CommandCardLimitCountStageList->m_Items[v18];
    battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
    v21 = v19 > 0;
    if ( !battleCharaLevelTitleRangeLabelList )
      goto LABEL_127;
    if ( v18 >= LODWORD(battleCharaLevelTitleRangeLabelList->max_length) )
      goto LABEL_128;
    v22 = battleCharaLevelTitleRangeLabelList->m_Items[v18];
    v23 = v21 && v19 == CommandCardLimitCountStage;
    v24 = v65 && v21;
    if ( v19 <= 0
      && (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(v4, 0),
          ((unsigned __int8)this & 1) != 0) )
    {
      if ( !v22 )
        goto LABEL_127;
      v67.fields.r = v9;
      v67.fields.g = v10;
      v67.fields.b = v11;
      v67.fields.a = v12;
      UIRangeLabel__set_effectColor(v22, v67, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = (System_String_o *)StringLiteral_12112/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v26 = v12;
      v27 = v11;
      v28 = v10;
      v29 = v9;
      if ( (v24 & v23) != 0 )
      {
        v26 = v17;
        v27 = v16;
        v28 = v15;
        v29 = v14;
      }
      if ( !v22 )
        goto LABEL_127;
      UIRangeLabel__set_effectColor(v22, *(UnityEngine_Color_o *)&v29, 0);
      v30 = System_Int32__ToString((int32_t)&v66, 0);
      v25 = System_String__Concat_65562772((System_String_o *)StringLiteral_12111/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v30, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get(v25, 0);
    UIRangeLabel__Set(v22, v31, 0, 1, 0, 0, 0);
    battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_127;
    if ( v66 >= LODWORD(battleCharaLevelSpriteList->max_length) )
LABEL_128:
      sub_1D0F314(this);
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v66];
    if ( !this )
      goto LABEL_127;
    v33 = &StringLiteral_17709/*"btn_bg_21"*/;
    if ( !v23 )
      v33 = &StringLiteral_17707/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v33, 0);
    battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
    if ( !battleCharaLevelButtonList )
      goto LABEL_127;
    if ( v66 >= LODWORD(battleCharaLevelButtonList->max_length) )
      goto LABEL_128;
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v66];
    if ( (v24 & v23) != 0 )
    {
      if ( !this )
        goto LABEL_127;
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v24 == 0 || isInit, 0);
    }
    else
    {
      if ( !this )
        goto LABEL_127;
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, v24 & ~(_BYTE)v23, v24 == 0 || isInit, 0);
    }
    limitCountSealLabel = v5->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v66 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_128;
      v36 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v66];
    }
    else
    {
      v36 = 0;
    }
    limitCountSealObjList = v5->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v66 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_128;
      v38 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v66];
    }
    else
    {
      v38 = 0;
    }
    SvtId = ServantStatusListViewItem__GetSvtId(v4, 0, 0);
    LimitCount = ServantStatusListViewItem__get_LimitCount(v4, 0);
    IsSealed = LimitCountUtility__IsSealed(SvtId, LimitCount, v19, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v38, 0, 0);
    if ( IsSealed )
    {
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_127;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v38, 1, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8375/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0);
        if ( !v36 )
          goto LABEL_127;
        v42 = this;
        goto LABEL_81;
      }
    }
    else
    {
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_127;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v38, 0, 0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_127;
        v42 = (ServantStatusListViewItemDrawCommand_o *)StringLiteral_1/*""*/;
LABEL_81:
        UILabel__set_text((UILabel_o *)v36, (System_String_o *)v42, 0);
      }
    }
    CommandCardLimitCountStageList = v62;
    v43 = (int)(v66 - 2) < 0;
    v18 = ++v66;
  }
  while ( v43 != __OFSUB__(v66, 3) );
  v44 = v5->fields.battleCharaLevelButtonList;
  if ( !v44 )
    goto LABEL_127;
  v45 = 11;
  while ( 1 )
  {
    v46 = v45 - 8;
    if ( (int)v45 - 8 >= SLODWORD(v44->max_length) )
      break;
    max_length = CommandCardLimitCountStageList->max_length;
    if ( (int)v46 >= max_length )
    {
      v48 = 0;
    }
    else
    {
      if ( v46 >= max_length )
        goto LABEL_128;
      v48 = *((_DWORD *)&CommandCardLimitCountStageList->obj.klass + v45) == CommandCardLimitCountStage;
    }
    v49 = v5->fields.battleCharaLevelTitleRangeLabelList;
    if ( !v49 )
      goto LABEL_127;
    if ( v46 >= LODWORD(v49->max_length) )
      goto LABEL_128;
    v50 = v49->m_Items[v46];
    v51 = v65 && (int)v46 < max_length;
    if ( (int)v46 >= max_length )
    {
      if ( !v50 )
        goto LABEL_127;
      UIRangeLabel__Clear(v50, 0);
    }
    else
    {
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0);
      if ( v46 >= LODWORD(CommandCardLimitCountStageList->max_length) )
        goto LABEL_128;
      item = (ServantStatusListViewItem_o *)(unsigned int)this;
      this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_127;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)MasterData_object,
                 (int32_t)item,
                 CommandCardLimitCountStageList->m_Items[v46],
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
        if ( !byte_4E72907 )
        {
          sub_1D0F0B4(&LocalizationManager_TypeInfo);
          byte_4E72907 = 1;
        }
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        }
        monitor = (System_String_o *)this->fields.engraveCodeObject[1].monitor;
      }
      v54 = v12;
      v55 = v11;
      v56 = v10;
      v57 = v9;
      if ( (v48 & v51) != 0 )
      {
        v54 = v17;
        v55 = v16;
        v56 = v15;
        v57 = v14;
      }
      if ( !v50 )
        goto LABEL_127;
      UIRangeLabel__set_effectColor(v50, *(UnityEngine_Color_o *)&v57, 0);
      UIRangeLabel__Set(v50, monitor, 0, 1, 0, 0, 0);
      CommandCardLimitCountStageList = v62;
    }
    v58 = v5->fields.battleCharaLevelSpriteList;
    if ( !v58 )
      goto LABEL_127;
    if ( v46 >= LODWORD(v58->max_length) )
      goto LABEL_128;
    this = (ServantStatusListViewItemDrawCommand_o *)v58->m_Items[v46];
    if ( !this )
      goto LABEL_127;
    v59 = &StringLiteral_17709/*"btn_bg_21"*/;
    if ( !v48 )
      v59 = &StringLiteral_17707/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v59, 0);
    v60 = v5->fields.battleCharaLevelButtonList;
    if ( !v60 )
      goto LABEL_127;
    if ( v46 >= LODWORD(v60->max_length) )
      goto LABEL_128;
    this = (ServantStatusListViewItemDrawCommand_o *)v60->m_Items[v46];
    if ( (v48 & v51) != 0 )
    {
      if ( !this )
        goto LABEL_127;
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v51 == 0 || isInit, 0);
    }
    else if ( (int)v46 >= max_length )
    {
      if ( !this )
        goto LABEL_127;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
      if ( !this )
        goto LABEL_127;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    else
    {
      if ( !this )
        goto LABEL_127;
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, v51 & ~v48, v51 == 0 || isInit, 0);
    }
    v44 = v5->fields.battleCharaLevelButtonList;
    ++v45;
    if ( !v44 )
      goto LABEL_127;
  }
}


void ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x20
  struct UnityEngine_GameObject_o *maskBase; // x8
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  ServantStatusListViewItemDrawCommand_o *v10; // x22
  float y; // s0
  System_String_o *Empty; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4E74602 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1D0F0B4(&StringLiteral_12133/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/);
    byte_4E74602 = 1;
  }
  if ( !item )
    goto LABEL_36;
  if ( !item->fields.userSvtEntity )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
    if ( !this )
      goto LABEL_36;
LABEL_19:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
  maskBase = v6->fields.maskBase;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !maskBase )
      goto LABEL_36;
    goto LABEL_18;
  }
  if ( !maskBase )
    goto LABEL_36;
  if ( item->fields._IsTransformed_k__BackingField )
  {
LABEL_18:
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
    goto LABEL_19;
  }
  UnityEngine_GameObject__SetActive(v6->fields.maskBase, 1, 0);
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_36;
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_36;
  mHeight = baseSprite->fields.mHeight;
  if ( isDisplayCombineButton )
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight - 50, 0);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !v6->fields.baseSprite )
      goto LABEL_36;
    v10 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0);
    if ( !this )
      goto LABEL_36;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    y = localPosition.fields.y + 25.0;
  }
  else
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight, 0);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !v6->fields.baseSprite )
      goto LABEL_36;
    v10 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0);
    if ( !this )
      goto LABEL_36;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    y = v15.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v10, y, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_36;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0);
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this
    || (UILabel__set_overflowMethod((UILabel_o *)this, 2, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0)
    || (UILabel__set_text((UILabel_o *)this, Empty, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0) )
  {
LABEL_36:
    sub_1D0F30C(this, item);
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
    goto LABEL_36;
  }
}