void ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int v5; // w8
  struct UISprite_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5935150 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UISprite___TypeInfo);
    byte_5935150 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (struct UISprite_array *)sub_21FFD10(UISprite___TypeInfo, (unsigned int)v4->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v6;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeSpriteList,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  unsigned int v9; // w8
  int32_t mHeight; // w10
  int v11; // w8
  float v12; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

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
    if ( (v5->max_length & 0xFFFFFFFC) == 0 )
      sub_21FFED4(this);
    if ( (this = (ServantStatusListViewItemDrawCommand_o *)v5->m_Items[3]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0)
      || ((v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           battleCharaLevelSpriteList = v3->fields.battleCharaLevelSpriteList,
           (float)(y - v14.fields.y) != INFINITY)
        ? (buttonPitch = (int)(float)(y - v14.fields.y))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !battleCharaLevelSpriteList) )
    {
LABEL_30:
      sub_21FFECC(this, method);
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
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.titleSprite;
  v9 = max_length >= 9
     ? ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
     + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31)
     + 1
     : -1;
  mHeight = baseSprite->fields.mHeight;
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.y = (float)(int)(mHeight + v9 * buttonPitch);
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v3->fields.titleBasePosition.fields.x = v15.fields.x;
  v11 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  v3->fields.titleBasePosition.fields.z = v15.fields.z;
  v12 = (float)(v11 >> 1);
  v3->fields.titleBasePosition.fields.y = v15.fields.y - v12;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.levelButtonBase;
  v3->fields.cardBasePosition.fields.x = v16.fields.x;
  v3->fields.cardBasePosition.fields.z = v16.fields.z;
  v3->fields.cardBasePosition.fields.y = v16.fields.y - v12;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v17.fields.x;
  v3->fields.levelButtonBasePosition.fields.z = v17.fields.z;
  v3->fields.levelButtonBasePosition.fields.y = v17.fields.y - v12;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v18.fields.x;
  v3->fields.explanationBasePosition.fields.z = v18.fields.z;
  v3->fields.explanationBasePosition.fields.y = v18.fields.y + v12;
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

  if ( (byte_593514C & 1) == 0 )
  {
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_593514C = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item, method);
    if ( !byte_5934082 )
    {
      sub_21FFC50(&RandomLimitCountManager_TypeInfo);
      byte_5934082 = 1;
    }
    v5 = RandomLimitCountManager_TypeInfo;
    if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item, method);
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
  UnityEngine_Object_c **v6; // x26
  struct BattleCommandData_array *commandCardDataList; // x9
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  unsigned int v9; // w21
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v11; // x22
  MissionNaviTransitionBoardItem_c *klass; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  unsigned int max_length; // w9
  int32_t v15; // w23
  struct System_Int32_array *commandCardParam; // x8
  unsigned int v17; // w9
  int32_t v18; // w24
  __int64 v19; // x2
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v21; // x22
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct UnityEngine_GameObject_array *v29; // x8
  __int64 v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Int32_array *v43; // x1
  struct System_Int32_array *v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Int32_array *CommandCardIds; // x21
  __int64 v52; // x2
  struct UnityEngine_GameObject_array *v53; // x8
  unsigned __int64 v54; // x24
  unsigned __int64 max_length_low; // x8
  int32_t v56; // w25
  struct System_Int32_array *v57; // x8
  unsigned __int64 v58; // x9
  int32_t v59; // w10
  struct System_Int32_array *v60; // x8
  unsigned __int64 v61; // x9
  int32_t v62; // w28
  Il2CppObject *commandCardPrefab; // x23
  UnityEngine_Object_c **v64; // x22
  ServantStatusListViewItemDrawCommand_o *v65; // x29
  UnityEngine_Transform_o *transform; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  struct UnityEngine_GameObject_array *v72; // x8
  ServantStatusListViewItemDrawCommand_o *v73; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  unsigned int *v81; // x27
  BattleCommandData_o *v82; // x23
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  __int64 v89; // x1
  unsigned int *v90; // x0
  MissionNaviTransitionBoardItem_c *v91; // x8
  struct UISprite_o *clickEventObject; // x1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  unsigned int *v99; // x23
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  unsigned int *v106; // x0
  struct UnityEngine_GameObject_array *v107; // x8
  __int64 v108; // x1
  __int64 v109; // x2
  int32_t layer; // w23
  __int64 v111; // x2
  struct UISprite_array *v112; // x8
  UIWidget_o *v113; // x8
  struct UISprite_array *v114; // x8
  UISprite_o *v115; // x23
  struct UISprite_array *v116; // x8
  __int64 v117; // x0
  ServantStatusListViewItem_o *v118; // [xsp+8h] [xbp-98h]
  int32_t v119; // [xsp+10h] [xbp-90h]
  int32_t SvtId; // [xsp+14h] [xbp-8Ch]
  MissionNaviTransitionBoardItem_o *p_commandCardDataList; // [xsp+18h] [xbp-88h]
  int32_t commandCodeId; // [xsp+28h] [xbp-78h]
  int v123; // [xsp+2Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  v4 = item;
  v5 = this;
  if ( (byte_593514D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BattleCommandComponent___TypeInfo);
    sub_21FFC50(&BattleCommandData___TypeInfo);
    sub_21FFC50(&BattleCommandData_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_15702/*"Unlit/Transparent Colored"*/);
    sub_21FFC50(&StringLiteral_4750/*"CommandCard("*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_21FFC50(&StringLiteral_789/*")"*/);
    byte_593514D = 1;
  }
  v6 = &UnityEngine_Object_TypeInfo;
  commandCardDataList = v5->fields.commandCardDataList;
  p_commandCardDataList = (MissionNaviTransitionBoardItem_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  v123 = 0;
  if ( commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v9 = 0;
      while ( (signed int)v9 < SLODWORD(commandCardBaseList->max_length) )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_101;
        if ( v9 >= LODWORD(commandCardComponentList->max_length) )
          goto LABEL_103;
        if ( !v4 )
          goto LABEL_101;
        v11 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v9];
        if ( !v4->fields._IsTransformed_k__BackingField )
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
          this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfterAtStageLimitCount(
                                                               v4,
                                                               0,
                                                               0);
            klass = p_commandCardDataList->klass;
            if ( !p_commandCardDataList->klass )
              goto LABEL_101;
            if ( v9 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_103;
            item = (ServantStatusListViewItem_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v9);
            if ( !item )
              goto LABEL_101;
            LODWORD(item->fields.partyItem) = (_DWORD)this;
            if ( !v11 )
              goto LABEL_101;
            BattleCommandComponent__setData(
              (BattleCommandComponent_o *)v11,
              (BattleCommandData_o *)item,
              0,
              0,
              1,
              0,
              1,
              0);
            BattleCommandComponent__updateView((BattleCommandComponent_o *)v11, 1, 0, 1, 0, 0, 0, 0);
          }
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v9 < (int)max_length) )
        {
          if ( v9 >= max_length )
            goto LABEL_103;
          v15 = commandCodeIdList->m_Items[v9];
        }
        else
        {
          v15 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v17 = commandCardParam->max_length, (int)v9 < (int)v17) )
        {
          if ( v9 >= v17 )
            goto LABEL_103;
          v18 = commandCardParam->m_Items[v9];
        }
        else
        {
          v18 = 0;
        }
        if ( v11 )
        {
          BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v11, v18, 2, 1, 0);
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v11, v18, 0);
          commandCodeSpriteList = v5->fields.commandCodeSpriteList;
          if ( commandCodeSpriteList )
          {
            if ( v9 >= LODWORD(commandCodeSpriteList->max_length) )
              goto LABEL_103;
            v21 = commandCodeSpriteList->m_Items[v9];
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v19);
            this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v21, v15, 0);
            commandCardBaseList = v5->fields.commandCardBaseList;
            ++v9;
            if ( commandCardBaseList )
              continue;
          }
        }
        goto LABEL_101;
      }
      goto LABEL_102;
    }
LABEL_101:
    sub_21FFECC(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_101;
  v22 = sub_21FFD10(BattleCommandData___TypeInfo, LODWORD(commandCardBaseList->max_length));
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v22;
  sub_21FFBF4(p_commandCardDataList, v22, v23, v24, v25, v26, v27, v28);
  v29 = v5->fields.commandCardBaseList;
  if ( !v29 )
    goto LABEL_101;
  v30 = sub_21FFD10(BattleCommandComponent___TypeInfo, LODWORD(v29->max_length));
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v30;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.commandCardComponentList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !v4 )
    goto LABEL_101;
  v43 = v4->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = v43;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.commandCodeIdList,
    (int32_t)v43,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v44 = v4->fields.commandCardParam;
  v5->fields.commandCardParam = v44;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.commandCardParam,
    (int32_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0);
  SvtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfterAtStageLimitCount(
                                                     v4,
                                                     1,
                                                     0);
  v53 = v5->fields.commandCardBaseList;
  v119 = (int)this;
  if ( !v53 )
    goto LABEL_101;
  v54 = 0;
  v118 = v4;
  while ( (__int64)v54 < SLODWORD(v53->max_length) )
  {
    if ( CommandCardIds && (max_length_low = LODWORD(CommandCardIds->max_length), (__int64)v54 < (int)max_length_low) )
    {
      if ( v54 >= max_length_low )
        goto LABEL_103;
      v56 = CommandCardIds->m_Items[v54];
    }
    else
    {
      v56 = 0;
    }
    v57 = v5->fields.commandCodeIdList;
    if ( v57 && (v58 = LODWORD(v57->max_length), (__int64)v54 < (int)v58) )
    {
      if ( v54 >= v58 )
        goto LABEL_103;
      v59 = v57->m_Items[v54];
    }
    else
    {
      v59 = 0;
    }
    v60 = v5->fields.commandCardParam;
    if ( v60 && (v61 = LODWORD(v60->max_length), (__int64)v54 < (int)v61) )
    {
      if ( v54 >= v61 )
        goto LABEL_103;
      v62 = v60->m_Items[v54];
    }
    else
    {
      v62 = 0;
    }
    if ( (unsigned int)(v56 - 1) > 2 )
    {
      v116 = v5->fields.commandCodeSpriteList;
      if ( !v116 )
        goto LABEL_101;
      if ( v54 >= LODWORD(v116->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v116->m_Items[v54];
      if ( !this )
        goto LABEL_101;
      UISprite__set_spriteName((UISprite_o *)this, 0, 0);
      ++v54;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      commandCodeId = v59;
      if ( !*(&(*v6)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v6, item, v52);
      v64 = v6;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_101;
      v65 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v65,
                                                         0);
      if ( !this )
        goto LABEL_101;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v123 = v54 + 1;
      v70 = System_Int32__ToString((int32_t)&v123, 0);
      v71 = System_String__Concat_75481624(
              (System_String_o *)StringLiteral_4750/*"CommandCard("*/,
              v70,
              (System_String_o *)StringLiteral_789/*")"*/,
              0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v65, v71, 0);
      v72 = v5->fields.commandCardBaseList;
      if ( !v72 )
        goto LABEL_101;
      if ( v54 >= LODWORD(v72->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v72->m_Items[v54];
      if ( !this )
        goto LABEL_101;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
      if ( !transform )
        goto LABEL_101;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !byte_5931946 )
      {
        sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
        byte_5931946 = 1;
      }
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v125.fields.x = x;
      v125.fields.y = y;
      v125.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v125, 0);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v65,
        (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v65,
                                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_101;
      v73 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      v73[1].fields.baseSprite = (struct UISprite_o *)gameObject;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v73[1].fields.baseSprite,
        (int32_t)gameObject,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      v81 = (unsigned int *)v5->fields.commandCardDataList;
      v82 = (BattleCommandData_o *)sub_21FFEBC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_53546516(v82, v56, SvtId, v119, 0, -1, 0);
      if ( !v81 )
        goto LABEL_101;
      if ( v82 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_21FFDA4(v82, *(_QWORD *)(*(_QWORD *)v81 + 64LL));
        if ( !this )
        {
LABEL_104:
          v117 = sub_21FFEF0(this, v89);
          sub_21FFD90(v117, 0);
        }
      }
      if ( v54 >= v81[6] )
        goto LABEL_103;
      v90 = &v81[2 * v54];
      *((_QWORD *)v90 + 4) = v82;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v90 + 8), (int32_t)v82, v83, v84, v85, v86, v87, v88);
      v91 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_101;
      if ( v54 >= LODWORD(v91->_1.namespaze) )
        goto LABEL_103;
      item = (ServantStatusListViewItem_o *)*((_QWORD *)&v91->_1.byval_arg.data + v54);
      if ( !item )
        goto LABEL_101;
      *(&item->fields.memberNum + 1) = v54 + 1;
      LODWORD(item->fields.servantLeaderInfo) = v54;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v73, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v73, (System_String_o *)StringLiteral_15702/*"Unlit/Transparent Colored"*/, 0);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v73, 1, 0, 1, 0, 0, 0, 0);
      clickEventObject = (struct UISprite_o *)v5->fields.clickEventObject;
      v73[1].fields.baseSprite = clickEventObject;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v73[1].fields.baseSprite,
        (int32_t)clickEventObject,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
      v99 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v99 )
        goto LABEL_101;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_21FFDA4(v73, *(_QWORD *)(*(_QWORD *)v99 + 64LL));
      if ( !this )
        goto LABEL_104;
      if ( v54 >= v99[6] )
        goto LABEL_103;
      v106 = &v99[2 * v54];
      *((_QWORD *)v106 + 4) = v73;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v106 + 8), (int32_t)v73, v100, v101, v102, v103, v104, v105);
      v107 = v5->fields.commandCardBaseList;
      if ( !v107 )
        goto LABEL_101;
      if ( v54 >= LODWORD(v107->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v107->m_Items[v54];
      if ( !this )
        goto LABEL_101;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v108, v109);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v65, layer, 0);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v73, v62, 2, 1, 0);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v73, v62, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v73,
                                                         0);
      v6 = v64;
      if ( (_DWORD)this != -1 )
      {
        v112 = v5->fields.commandCodeSpriteList;
        if ( !v112 )
          goto LABEL_101;
        if ( v54 >= LODWORD(v112->max_length) )
          goto LABEL_103;
        v113 = (UIWidget_o *)v112->m_Items[v54];
        if ( !v113 )
          goto LABEL_101;
        UIWidget__set_depth(v113, (_DWORD)this - 1, 0);
      }
      v114 = v5->fields.commandCodeSpriteList;
      if ( !v114 )
        goto LABEL_101;
      if ( v54 >= LODWORD(v114->max_length) )
LABEL_103:
        sub_21FFED4(this);
      v115 = v114->m_Items[v54];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v111);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v115, commandCodeId, 0);
      ++v54;
      v4 = v118;
    }
    v53 = v5->fields.commandCardBaseList;
    if ( !v53 )
      goto LABEL_101;
  }
LABEL_102:
  ServantStatusListViewItemDrawCommand__SetupBattleButton(v5, v4, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawCommand__SetItem(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  __int64 *v11; // x8
  int v12; // w8
  void *ServantStatusExplanationText; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct ServantEntity_o *svtEntity; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w22
  struct UILabel_o *v20; // x23
  System_String_o *v21; // x24
  System_String_o *mText; // x25
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int v26; // w23
  int v27; // w8
  int32_t buttonPitch; // w9
  int v29; // w8
  int v30; // w8
  int v31; // w8
  int32_t transformedSubHeight; // w24
  int v33; // w25
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v36; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *userSvtEntity; // x0
  BalanceConfig_c *IsEventJoin; // x0
  __int64 v40; // x2
  _BOOL4 v41; // w21
  bool AnyTransformServant; // w8
  UILabel_o *v43; // x22
  bool v44; // w1
  __int64 v45; // x1
  __int64 v46; // x2
  float x; // s9
  float y; // s11
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v51; // s8
  int32_t v52; // w1
  int32_t v53; // w1
  int v54; // w22
  float v55; // s8
  float v56; // s11
  float v57; // s9
  int v58; // w22
  float v59; // s8
  float v60; // s12
  float v61; // s9
  float v62; // s11
  float v63; // s8
  float v64; // s12
  float v65; // s9
  float v66; // s0
  float v67; // s8
  float v68; // s10
  float v69; // s9
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  struct System_Int32_array *commandCardParam; // x21
  int max_length; // w8
  __int64 v74; // x22
  int32_t v75; // w28
  bool v76; // w1
  int v77; // w8
  bool CanMoveCombine_k__BackingField; // w1
  int v79; // w8
  float v80; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593514B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_12405/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/);
    sub_21FFC50(&StringLiteral_12403/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/);
    sub_21FFC50(&StringLiteral_12404/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/);
    sub_21FFC50(&StringLiteral_12402/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/);
    byte_593514B = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, *(_QWORD *)&mode);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12402/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12403/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/;
    }
    else
    {
      explanationLabel = this->fields.explanationLabel;
      v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( !item->fields.servantLeaderInfo )
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
        ServantStatusExplanationText = LocalizationManager__Get((System_String_o *)StringLiteral_12404/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0);
        if ( !explanationLabel )
          goto LABEL_140;
        UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
        goto LABEL_33;
      }
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12404/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/;
    }
    ServantStatusExplanationText = LocalizationManager__Get((System_String_o *)*v11, 0);
    if ( !explanationLabel )
      goto LABEL_140;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_140;
    v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    *(_QWORD *)&v82.fields.currentCryptoKey = v17;
    *(_QWORD *)&v82.fields.fakeValue = v18;
    ServantStatusExplanationText = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v82, 0);
    if ( (_DWORD)ServantStatusExplanationText )
    {
      if ( !Master_object )
        goto LABEL_140;
      v19 = (int)ServantStatusExplanationText;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(
             (ServantLimitImageMaster_o *)Master_object,
             (int32_t)ServantStatusExplanationText,
             3,
             0) )
      {
        ServantStatusExplanationText = ServantLimitImageMaster__GetServantStatusExplanationText(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         (System_String_o *)StringLiteral_12405/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                         v19,
                                         0);
        v20 = this->fields.explanationLabel;
        if ( !v20 )
          goto LABEL_140;
        v21 = (System_String_o *)ServantStatusExplanationText;
        mText = v20->fields.mText;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        (ServantLimitImageMaster_o *)Master_object,
                                                        v19,
                                                        3,
                                                        0,
                                                        0,
                                                        0);
        v24 = System_String__Format(v21, LimitCountSealedServantName, 0);
        v25 = System_String__Concat_75438412(mText, v24, 0);
        UILabel__set_text(v20, v25, 0);
        v26 = 1;
LABEL_34:
        ServantStatusExplanationText = ServantStatusListViewItem__GetCommandCardLimitCountStageList(item, 0);
        if ( !ServantStatusExplanationText )
          goto LABEL_140;
        v27 = *((_DWORD *)ServantStatusExplanationText + 6);
        if ( v27 < 4 )
          buttonPitch = 0;
        else
          buttonPitch = this->fields.buttonPitch;
        if ( v27 == 3 * (v27 / 3) )
          v29 = v27 / 3;
        else
          v29 = v27 / 3 + 1;
        if ( v29 < 3 )
          v30 = 1;
        else
          v30 = v29 - 1;
        v31 = v30 * buttonPitch;
        if ( v26 )
          transformedSubHeight = v31 + 32;
        else
          transformedSubHeight = v31;
        if ( ServantStatusListViewItem__get_AnyTransformServant(item, 0) )
        {
          ServantStatusExplanationText = this->fields.levelButtonBase;
          if ( item->fields._IsTransformed_k__BackingField )
          {
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
            ServantStatusExplanationText = this->fields.explanationLabel;
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ServantStatusExplanationText,
                                             0);
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
            transformedSubHeight = this->fields.transformedSubHeight;
            v26 = 0;
          }
          else
          {
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
            ServantStatusExplanationText = this->fields.explanationLabel;
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ServantStatusExplanationText,
                                             0);
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
          }
          transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
          TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
          if ( !transformNameLabel )
            goto LABEL_140;
          UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
          transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
          TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
          if ( !transformNameSprite )
            goto LABEL_140;
          UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
          ServantStatusExplanationText = this->fields.transformNameSprite;
          if ( !ServantStatusExplanationText )
            goto LABEL_140;
          ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)ServantStatusExplanationText,
                                           0);
          if ( !ServantStatusExplanationText )
            goto LABEL_140;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
          v36 = this->fields.transformNameLabel;
          ServantStatusExplanationText = ServantStatusListViewItem__GetTransformName(item, 0);
          if ( !v36 )
            goto LABEL_140;
          UILabel__set_text(v36, (System_String_o *)ServantStatusExplanationText, 0);
          transformNameAddHeight = this->fields.transformNameAddHeight;
          transformedSubHeight += transformNameAddHeight;
          v33 = -transformNameAddHeight;
        }
        else
        {
          ServantStatusExplanationText = this->fields.transformNameSprite;
          if ( !ServantStatusExplanationText )
            goto LABEL_140;
          ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)ServantStatusExplanationText,
                                           0);
          if ( !ServantStatusExplanationText )
            goto LABEL_140;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
          v33 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_71;
        userSvtEntity = item->fields.userSvtEntity;
        if ( !userSvtEntity || UserServantEntity__IsLeave(userSvtEntity, 0) )
          goto LABEL_71;
        ServantStatusExplanationText = item->fields.userSvtEntity;
        if ( !ServantStatusExplanationText )
          goto LABEL_140;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin(
                                           (UserServantEntity_o *)ServantStatusExplanationText,
                                           0);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_71:
          v41 = 0;
          goto LABEL_72;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length < 1 )
          {
LABEL_131:
            ServantStatusExplanationText = this->fields.engraveCodeObject;
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
            ServantStatusExplanationText = this->fields.engraveCodeButton;
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
            *((_BYTE *)ServantStatusExplanationText + 97) = 1;
            UICommonButton__SetEnable(
              (UICommonButton_o *)ServantStatusExplanationText,
              CanMoveCombine_k__BackingField,
              0);
            v79 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v80 = (float)-(v79 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v80, 0);
            ServantStatusExplanationText = this->fields.reinforceMaskSprite;
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ServantStatusExplanationText,
                                             0);
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
            ServantStatusExplanationText = this->fields.reinforceMaskSprite;
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            gameObject = UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)ServantStatusExplanationText,
                           0);
            GameObjectExtensions__SetLocalPositionY(gameObject, v80, 0);
            v41 = 1;
LABEL_72:
            AnyTransformServant = ServantStatusListViewItem__get_AnyTransformServant(item, 0);
            ServantStatusExplanationText = this->fields.transformNameSprite;
            if ( AnyTransformServant )
            {
              if ( !ServantStatusExplanationText )
                goto LABEL_140;
              ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)ServantStatusExplanationText,
                                               0);
              if ( !ServantStatusExplanationText )
                goto LABEL_140;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
              v43 = this->fields.transformNameLabel;
              ServantStatusExplanationText = ServantStatusListViewItem__GetTransformName(item, 0);
              if ( !v43 )
                goto LABEL_140;
              UILabel__set_text(v43, (System_String_o *)ServantStatusExplanationText, 0);
              ServantStatusExplanationText = this->fields.levelButtonBase;
              if ( !item->fields._IsTransformed_k__BackingField )
              {
                if ( !ServantStatusExplanationText )
                  goto LABEL_140;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
                ServantStatusExplanationText = this->fields.explanationLabel;
                if ( !ServantStatusExplanationText )
                  goto LABEL_140;
                ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                 0);
                if ( !ServantStatusExplanationText )
                  goto LABEL_140;
                v44 = 1;
                goto LABEL_82;
              }
              if ( !ServantStatusExplanationText )
                goto LABEL_140;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
              ServantStatusExplanationText = this->fields.explanationLabel;
            }
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            ServantStatusExplanationText = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ServantStatusExplanationText,
                                             0);
            if ( !ServantStatusExplanationText )
              goto LABEL_140;
            v44 = 0;
LABEL_82:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, v44, 0);
            x = this->fields.baseSize.fields.x;
            y = this->fields.baseSize.fields.y;
            z = this->fields.baseSize.fields.z;
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
            v51 = y + (float)transformedSubHeight;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
            {
              ServantStatusExplanationText = this->fields.baseCollider;
              if ( !ServantStatusExplanationText )
                goto LABEL_140;
              v83.fields.x = x;
              v83.fields.y = y + (float)transformedSubHeight;
              v83.fields.z = z;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ServantStatusExplanationText, v83, 0);
            }
            ServantStatusExplanationText = this->fields.baseSprite;
            if ( ServantStatusExplanationText )
            {
              v52 = x == INFINITY ? 0x80000000 : (int)x;
              UIWidget__set_width((UIWidget_o *)ServantStatusExplanationText, v52, 0);
              ServantStatusExplanationText = this->fields.baseSprite;
              if ( ServantStatusExplanationText )
              {
                v53 = v51 == INFINITY ? 0x80000000 : (int)v51;
                UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v53, 0);
                ServantStatusExplanationText = this->fields.titleSprite;
                v54 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                if ( ServantStatusExplanationText )
                {
                  v55 = this->fields.titleBasePosition.fields.x;
                  v56 = this->fields.titleBasePosition.fields.y;
                  v57 = this->fields.titleBasePosition.fields.z;
                  ServantStatusExplanationText = UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                   0);
                  if ( ServantStatusExplanationText )
                  {
                    v58 = v54 >> 1;
                    v84.fields.x = v55;
                    v84.fields.z = v57;
                    v84.fields.y = v56 + (float)v58;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)ServantStatusExplanationText,
                      v84,
                      0);
                    ServantStatusExplanationText = this->fields.cardBase;
                    if ( ServantStatusExplanationText )
                    {
                      v59 = this->fields.cardBasePosition.fields.x;
                      v60 = this->fields.cardBasePosition.fields.y;
                      v61 = this->fields.cardBasePosition.fields.z;
                      ServantStatusExplanationText = UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                       0);
                      if ( ServantStatusExplanationText )
                      {
                        v85.fields.x = v59;
                        v85.fields.z = v61;
                        v62 = (float)(v58 + v33);
                        v85.fields.y = v60 + v62;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)ServantStatusExplanationText,
                          v85,
                          0);
                        ServantStatusExplanationText = this->fields.levelButtonBase;
                        if ( ServantStatusExplanationText )
                        {
                          v63 = this->fields.levelButtonBasePosition.fields.x;
                          v64 = this->fields.levelButtonBasePosition.fields.y;
                          v65 = this->fields.levelButtonBasePosition.fields.z;
                          ServantStatusExplanationText = UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                           0);
                          if ( ServantStatusExplanationText )
                          {
                            v86.fields.y = v64 + v62;
                            v86.fields.x = v63;
                            v86.fields.z = v65;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)ServantStatusExplanationText,
                              v86,
                              0);
                            ServantStatusExplanationText = this->fields.explanationLabel;
                            v66 = this->fields.explanationBasePosition.fields.y - (float)v58;
                            if ( v26 )
                              v66 = v66 + 16.0;
                            v67 = v41 ? v66 + 50.0 : v66;
                            if ( ServantStatusExplanationText )
                            {
                              v68 = this->fields.explanationBasePosition.fields.x;
                              v69 = this->fields.explanationBasePosition.fields.z;
                              ServantStatusExplanationText = UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                               0);
                              if ( ServantStatusExplanationText )
                              {
                                v87.fields.x = v68;
                                v87.fields.y = v67;
                                v87.fields.z = v69;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)ServantStatusExplanationText,
                                  v87,
                                  0);
                                ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v70);
                                ServantStatusListViewItemDrawCommand__SetupMask(this, item, v41, v71);
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
LABEL_140:
            sub_21FFECC(ServantStatusExplanationText, v14);
          }
          v74 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v74 >= max_length )
              sub_21FFED4(IsEventJoin);
            IsEventJoin = BalanceConfig_TypeInfo;
            v75 = commandCardParam->m_Items[v74];
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v40);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v75 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            max_length = commandCardParam->max_length;
            if ( (int)++v74 >= max_length )
              goto LABEL_131;
          }
        }
        ServantStatusExplanationText = this->fields.reinforceObject;
        if ( !ServantStatusExplanationText )
          goto LABEL_140;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
        ServantStatusExplanationText = this->fields.reinforceButton;
        if ( !ServantStatusExplanationText )
          goto LABEL_140;
        v76 = item->fields._CanMoveCombine_k__BackingField;
        *((_BYTE *)ServantStatusExplanationText + 97) = 1;
        UICommonButton__SetEnable((UICommonButton_o *)ServantStatusExplanationText, v76, 0);
        if ( transformedSubHeight >= 0 )
          v77 = transformedSubHeight;
        else
          v77 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v77 >> 1), 0);
        goto LABEL_131;
      }
    }
LABEL_33:
    v26 = 0;
    goto LABEL_34;
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
  int32_t CommandCardLimitCountStage; // w23
  __int64 v8; // x2
  System_Int32_array *CommandCardLimitCountStageList; // x25
  struct UnityEngine_GameObject_o *engraveCodeObject; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  struct UnityEngine_GameObject_o *v15; // x8
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  unsigned int v20; // w8
  int32_t v21; // w26
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x9
  _BOOL4 v23; // w19
  _BOOL4 v24; // w24
  UIRangeLabel_o *v25; // x27
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x28
  float v29; // s3
  float v30; // s2
  float v31; // s1
  float v32; // s0 OVERLAPPED
  System_String_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *v37; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v39; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v43; // x27
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v45; // x28
  int32_t SvtId; // w29
  int32_t LimitCount; // w0
  __int64 v48; // x1
  __int64 v49; // x2
  bool IsSealed; // w8
  int v51; // w9
  __int64 v52; // x2
  __int64 v53; // x2
  ServantStatusListViewItemDrawCommand_o *v54; // x1
  __int64 v55; // x2
  bool v56; // nf
  struct UICommonButton_array *v57; // x8
  int v58; // w22
  int max_length; // w28
  _BOOL4 v60; // w29
  struct UIRangeLabel_array *v61; // x8
  _BOOL4 v62; // w19
  Il2CppClass **v63; // x8
  UIRangeLabel_o *v64; // x26
  ServantCostumeEntity_o *Entity; // x0
  __int64 v66; // x2
  System_String_o *monitor; // x27
  float v68; // s3
  float v69; // s2
  float v70; // s1
  float v71; // s0 OVERLAPPED
  struct UISprite_array *v72; // x8
  __int64 *v73; // x8
  struct UICommonButton_array *v74; // x8
  Il2CppObject *MasterData_object; // [xsp+8h] [xbp-B8h]
  _BOOL4 v77; // [xsp+18h] [xbp-A8h]
  unsigned int v78; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_593514E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_8610/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_21FFC50(&StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_21FFC50(&StringLiteral_18171/*"btn_bg_20"*/);
    sub_21FFC50(&StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_21FFC50(&StringLiteral_18173/*"btn_bg_21"*/);
    byte_593514E = 1;
  }
  v78 = 0;
  if ( !v4 )
    goto LABEL_150;
  if ( v4->fields._IsTransformed_k__BackingField )
    return;
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( v5->fields.isStart && !ServantStatusListViewItem__get_IsConvertOverwriteImage(v4, 0) )
  {
    if ( v4->fields.userSvtEntity )
      v6 = 1;
    else
      v6 = v4->fields.userSvtCollectionEntity != 0;
    v77 = v6;
  }
  else
  {
    v77 = 0;
  }
  CommandCardLimitCountStage = ServantStatusListViewItem__GetCommandCardLimitCountStage(v4, 0, 0);
  CommandCardLimitCountStageList = ServantStatusListViewItem__GetCommandCardLimitCountStageList(v4, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
  if ( !byte_5932AD3 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD3 = 1;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
  }
  engraveCodeObject = this->fields.engraveCodeObject;
  v11 = *(float *)&engraveCodeObject[3].monitor;
  v12 = *((float *)&engraveCodeObject[3].monitor + 1);
  v13 = *(float *)&engraveCodeObject[3].fields.m_CachedPtr;
  v14 = *((float *)&engraveCodeObject[3].fields.m_CachedPtr + 1);
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
    byte_5932AD4 = 1;
  }
  if ( !HIDWORD(this->fields.transformNameSprite) )
  {
    j_il2cpp_runtime_class_init_0(this, item, v8);
    this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
  }
  v15 = this->fields.engraveCodeObject;
  v78 = 0;
  v16 = *(float *)&v15[4].klass;
  v17 = *((float *)&v15[4].klass + 1);
  v18 = *(float *)&v15[4].monitor;
  v19 = *((float *)&v15[4].monitor + 1);
  if ( !CommandCardLimitCountStageList )
LABEL_150:
    sub_21FFECC(this, item);
  v20 = 0;
  do
  {
    if ( v20 >= LODWORD(CommandCardLimitCountStageList->max_length) )
      goto LABEL_151;
    v21 = CommandCardLimitCountStageList->m_Items[v20];
    battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
    v23 = v21 > 0 && v77;
    v24 = v21 == CommandCardLimitCountStage && v21 > 0;
    if ( !battleCharaLevelTitleRangeLabelList )
      goto LABEL_150;
    if ( v20 >= LODWORD(battleCharaLevelTitleRangeLabelList->max_length) )
      goto LABEL_151;
    v25 = battleCharaLevelTitleRangeLabelList->m_Items[v20];
    if ( v21 <= 0
      && (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(v4, 0),
          ((unsigned __int8)this & 1) != 0) )
    {
      if ( !v25 )
        goto LABEL_150;
      v79.fields.r = v11;
      v79.fields.g = v12;
      v79.fields.b = v13;
      v79.fields.a = v14;
      UIRangeLabel__set_effectColor(v25, v79, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
      v28 = (System_String_o *)StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    else
    {
      v29 = v14;
      v30 = v13;
      v31 = v12;
      v32 = v11;
      if ( v21 == CommandCardLimitCountStage && v23 )
      {
        v29 = v19;
        v30 = v18;
        v31 = v17;
        v32 = v16;
      }
      if ( !v25 )
        goto LABEL_150;
      UIRangeLabel__set_effectColor(v25, *(UnityEngine_Color_o *)&v32, 0);
      v34 = System_Int32__ToString((int32_t)&v78, 0);
      v28 = System_String__Concat_75438412((System_String_o *)StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v34, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
    }
    v37 = LocalizationManager__Get(v28, 0);
    UIRangeLabel__Set(v25, v37, 0, 1, 0, 0, 0);
    battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_150;
    if ( v78 >= LODWORD(battleCharaLevelSpriteList->max_length) )
LABEL_151:
      sub_21FFED4(this);
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v78];
    if ( !this )
      goto LABEL_150;
    v39 = &StringLiteral_18173/*"btn_bg_21"*/;
    if ( !v24 )
      v39 = &StringLiteral_18171/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v39, 0);
    battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
    if ( v21 == CommandCardLimitCountStage && v23 )
    {
      if ( !battleCharaLevelButtonList )
        goto LABEL_150;
      if ( v78 >= LODWORD(battleCharaLevelButtonList->max_length) )
        goto LABEL_151;
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v78];
      if ( !this )
        goto LABEL_150;
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, isInit, 0);
    }
    else
    {
      if ( !battleCharaLevelButtonList )
        goto LABEL_150;
      if ( v78 >= LODWORD(battleCharaLevelButtonList->max_length) )
        goto LABEL_151;
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v78];
      if ( !this )
        goto LABEL_150;
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, v23 && !v24, isInit || !v23, 0);
    }
    limitCountSealLabel = v5->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v78 >= LODWORD(limitCountSealLabel->max_length) )
        goto LABEL_151;
      v43 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v78];
    }
    else
    {
      v43 = 0;
    }
    limitCountSealObjList = v5->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v78 >= LODWORD(limitCountSealObjList->max_length) )
        goto LABEL_151;
      v45 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v78];
    }
    else
    {
      v45 = 0;
    }
    SvtId = ServantStatusListViewItem__GetSvtId(v4, 0, 0);
    LimitCount = ServantStatusListViewItem__get_LimitCount(v4, 0);
    IsSealed = LimitCountUtility__IsSealed(SvtId, LimitCount, v21, 0, 0);
    v51 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( IsSealed )
    {
      if ( !v51 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_150;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v45, 1, 0);
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v52);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v53);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8610/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0);
        if ( !v43 )
          goto LABEL_150;
        v54 = this;
        goto LABEL_97;
      }
    }
    else
    {
      if ( !v51 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_150;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v45, 0, 0);
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v55);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_150;
        v54 = (ServantStatusListViewItemDrawCommand_o *)StringLiteral_1/*""*/;
LABEL_97:
        UILabel__set_text((UILabel_o *)v43, (System_String_o *)v54, 0);
      }
    }
    v56 = (int)(v78 - 2) < 0;
    v20 = ++v78;
  }
  while ( v56 != __OFSUB__(v78, 3) );
  v57 = v5->fields.battleCharaLevelButtonList;
  if ( !v57 )
    goto LABEL_150;
  v58 = 3;
  while ( v58 < SLODWORD(v57->max_length) )
  {
    max_length = CommandCardLimitCountStageList->max_length;
    if ( v58 >= max_length )
    {
      v60 = 0;
    }
    else
    {
      if ( v58 >= (unsigned int)max_length )
        goto LABEL_151;
      v60 = CommandCardLimitCountStageList->m_Items[v58] == CommandCardLimitCountStage;
    }
    v61 = v5->fields.battleCharaLevelTitleRangeLabelList;
    v62 = v58 < max_length && v77;
    if ( !v61 )
      goto LABEL_150;
    if ( (unsigned int)v58 >= LODWORD(v61->max_length) )
      goto LABEL_151;
    v63 = &v61->obj.klass + v58;
    v64 = (UIRangeLabel_o *)v63[4];
    if ( v58 >= max_length )
    {
      if ( !v64 )
        goto LABEL_150;
      UIRangeLabel__Clear((UIRangeLabel_o *)v63[4], 0);
    }
    else
    {
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0);
      if ( (unsigned int)v58 >= LODWORD(CommandCardLimitCountStageList->max_length) )
        goto LABEL_151;
      item = (ServantStatusListViewItem_o *)(unsigned int)this;
      this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
      if ( !MasterData_object )
        goto LABEL_150;
      Entity = ServantCostumeMaster__GetEntity(
                 (ServantCostumeMaster_o *)MasterData_object,
                 (int32_t)item,
                 CommandCardLimitCountStageList->m_Items[v58],
                 0);
      if ( Entity )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)ServantCostumeEntity__getShortName(Entity, 0);
        monitor = (System_String_o *)this;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v66);
        if ( !byte_593385D )
        {
          sub_21FFC50(&LocalizationManager_TypeInfo);
          byte_593385D = 1;
        }
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v66);
          this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        }
        monitor = (System_String_o *)this->fields.engraveCodeObject[1].monitor;
      }
      v68 = v14;
      v69 = v13;
      v70 = v12;
      v71 = v11;
      if ( v62 && v60 )
      {
        v68 = v19;
        v69 = v18;
        v70 = v17;
        v71 = v16;
      }
      if ( !v64 )
        goto LABEL_150;
      UIRangeLabel__set_effectColor(v64, *(UnityEngine_Color_o *)&v71, 0);
      UIRangeLabel__Set(v64, monitor, 0, 1, 0, 0, 0);
    }
    v72 = v5->fields.battleCharaLevelSpriteList;
    if ( !v72 )
      goto LABEL_150;
    if ( (unsigned int)v58 >= LODWORD(v72->max_length) )
      goto LABEL_151;
    this = (ServantStatusListViewItemDrawCommand_o *)v72->m_Items[v58];
    if ( !this )
      goto LABEL_150;
    v73 = &StringLiteral_18173/*"btn_bg_21"*/;
    if ( !v60 )
      v73 = &StringLiteral_18171/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v73, 0);
    v74 = v5->fields.battleCharaLevelButtonList;
    if ( v62 && v60 )
    {
      if ( !v74 )
        goto LABEL_150;
      if ( (unsigned int)v58 >= LODWORD(v74->max_length) )
        goto LABEL_151;
      this = (ServantStatusListViewItemDrawCommand_o *)v74->m_Items[v58];
      if ( !this )
        goto LABEL_150;
      UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, isInit, 0);
    }
    else if ( v58 >= max_length )
    {
      if ( !v74 )
        goto LABEL_150;
      if ( (unsigned int)v58 >= LODWORD(v74->max_length) )
        goto LABEL_151;
      this = (ServantStatusListViewItemDrawCommand_o *)v74->m_Items[v58];
      if ( !this )
        goto LABEL_150;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
      if ( !this )
        goto LABEL_150;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    else
    {
      if ( !v74 )
        goto LABEL_150;
      if ( (unsigned int)v58 >= LODWORD(v74->max_length) )
        goto LABEL_151;
      this = (ServantStatusListViewItemDrawCommand_o *)v74->m_Items[v58];
      if ( !this )
        goto LABEL_150;
      UICommonButton__SetButtonEnable((UICommonButton_o *)this, v62 && !v60, isInit || !v62, 0);
    }
    v57 = v5->fields.battleCharaLevelButtonList;
    ++v58;
    if ( !v57 )
      goto LABEL_150;
  }
}


void ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawCommand_o *v8; // x22
  float y; // s0
  System_String_o *v10; // x22
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_593514F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_21FFC50(&StringLiteral_12451/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/);
    byte_593514F = 1;
  }
  if ( !item )
    goto LABEL_36;
  if ( !item->fields.userSvtEntity || !ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
LABEL_16:
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_36;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
  if ( item->fields._IsTransformed_k__BackingField )
    goto LABEL_16;
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  baseSprite = v6->fields.baseSprite;
  if ( isDisplayCombineButton )
  {
    if ( !baseSprite )
      goto LABEL_36;
    if ( !this )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight - 50, 0);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !v6->fields.baseSprite )
      goto LABEL_36;
    v8 = this;
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
    if ( !baseSprite )
      goto LABEL_36;
    if ( !this )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !v6->fields.baseSprite )
      goto LABEL_36;
    v8 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0);
    if ( !this )
      goto LABEL_36;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    y = v14.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v8, y, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_36;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  v10 = **(System_String_o ***)(qword_594C0B8 + 184);
  if ( ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v11);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0);
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this
    || (UILabel__set_overflowMethod((UILabel_o *)this, 2, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0)
    || (UILabel__set_text((UILabel_o *)this, v10, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0) )
  {
LABEL_36:
    sub_21FFECC(this, item);
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