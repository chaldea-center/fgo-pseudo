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

  if ( (byte_596D33D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UISprite___TypeInfo);
    byte_596D33D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (struct UISprite_array *)sub_2213B20(UISprite___TypeInfo, (unsigned int)v4->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v6;
  sub_2213A04(
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
  UnityEngine_Component_o *baseSprite; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_11;
  v4 = (*(float (__fastcall **)(UnityEngine_Component_o *, _QWORD))&baseSprite->klass[1]._2.field_count)(
         baseSprite,
         *(_QWORD *)&baseSprite->klass[1]._2.interfaces_count);
  baseSprite = (UnityEngine_Component_o *)this->fields.titleSprite;
  this->fields.baseSize.fields.x = v4;
  this->fields.baseSize.fields.y = v5;
  this->fields.baseSize.fields.z = 0.0;
  if ( !baseSprite )
    goto LABEL_11;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_11;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.cardBase;
  this->fields.titleBasePosition = localPosition;
  if ( !baseSprite )
    goto LABEL_11;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)baseSprite,
                                            0);
  if ( !baseSprite )
    goto LABEL_11;
  v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelButtonBase;
  this->fields.cardBasePosition = v7;
  if ( !baseSprite
    || (baseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)baseSprite,
                                                  0)) == 0
    || (v8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0),
        baseSprite = (UnityEngine_Component_o *)this->fields.explanationLabel,
        this->fields.levelButtonBasePosition = v8,
        !baseSprite)
    || (baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(baseSprite, 0)) == 0 )
  {
LABEL_11:
    sub_2213CDC(baseSprite, method);
  }
  this->fields.explanationBasePosition = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSprite,
                                           0);
}


int32_t ServantStatusListViewItemDrawCommand__GetKind(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  return 8;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItemDrawCommand__GetLevelButtonAdditionalHeight(
        ServantStatusListViewItemDrawCommand_o *this,
        int32_t buttonCount,
        const MethodInfo *method)
{
  ServantStatusListViewItemButton_o *levelButtonItem; // x0

  levelButtonItem = this->fields.levelButtonItem;
  if ( !levelButtonItem )
    sub_2213CDC(0, *(_QWORD *)&buttonCount);
  return ServantStatusListViewItemButton__GetAdditionalHeight(levelButtonItem, buttonCount, method);
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

  if ( (byte_596D339 & 1) == 0 )
  {
    sub_2213A60(&RandomLimitCountManager_TypeInfo);
    byte_596D339 = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item, method);
    if ( !byte_596C1A0 )
    {
      sub_2213A60(&RandomLimitCountManager_TypeInfo);
      byte_596C1A0 = 1;
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
  unsigned int v9; // w24
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v11; // x22
  MissionNaviTransitionBoardItem_c *klass; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  unsigned int max_length; // w9
  int32_t v15; // w23
  struct System_Int32_array *commandCardParam; // x8
  unsigned int v17; // w9
  int32_t v18; // w21
  __int64 v19; // x2
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v21; // x21
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
  struct System_Int32_array **p_commandCodeIdList; // x23
  struct System_Int32_array *v45; // x1
  struct System_Int32_array **p_commandCardParam; // x21
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Int32_array *CommandCardIds; // x24
  __int64 v54; // x2
  struct UnityEngine_GameObject_array *v55; // x8
  unsigned __int64 v56; // x22
  unsigned __int64 max_length_low; // x8
  int32_t v58; // w25
  struct System_Int32_array *v59; // x8
  unsigned __int64 v60; // x9
  int32_t v61; // w10
  struct System_Int32_array *v62; // x8
  unsigned __int64 v63; // x9
  int32_t v64; // w27
  Il2CppObject *commandCardPrefab; // x21
  UnityEngine_Object_c **v66; // x24
  ServantStatusListViewItemDrawCommand_o *v67; // x28
  UnityEngine_Transform_o *transform; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  struct UnityEngine_GameObject_array *v74; // x8
  ServantStatusListViewItemDrawCommand_o *v75; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  unsigned int *v83; // x29
  BattleCommandData_o *v84; // x21
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x1
  unsigned int *v92; // x0
  MissionNaviTransitionBoardItem_c *v93; // x8
  struct UnityEngine_GameObject_o *clickEventObject; // x1
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  unsigned int *v101; // x21
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  unsigned int *v108; // x0
  struct UnityEngine_GameObject_array *v109; // x8
  __int64 v110; // x1
  __int64 v111; // x2
  int32_t layer; // w21
  __int64 v113; // x2
  struct UISprite_array *v114; // x8
  UIWidget_o *v115; // x8
  struct UISprite_array *v116; // x8
  UISprite_o *v117; // x21
  struct UISprite_array *v118; // x8
  __int64 v119; // x0
  ServantStatusListViewItem_o *v120; // [xsp+10h] [xbp-A0h]
  System_Int32_array *v121; // [xsp+18h] [xbp-98h]
  int32_t v122; // [xsp+20h] [xbp-90h]
  int32_t SvtId; // [xsp+24h] [xbp-8Ch]
  MissionNaviTransitionBoardItem_o *p_commandCardDataList; // [xsp+28h] [xbp-88h]
  int32_t commandCodeId; // [xsp+38h] [xbp-78h]
  int v126; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4

  v4 = item;
  v5 = this;
  if ( (byte_596D33A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleCommandComponent___TypeInfo);
    sub_2213A60(&BattleCommandData___TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    sub_2213A60(&StringLiteral_4758/*"CommandCard("*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596D33A = 1;
  }
  v6 = &UnityEngine_Object_TypeInfo;
  commandCardDataList = v5->fields.commandCardDataList;
  p_commandCardDataList = (MissionNaviTransitionBoardItem_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  v126 = 0;
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
    sub_2213CDC(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_101;
  v22 = sub_2213B20(BattleCommandData___TypeInfo, LODWORD(commandCardBaseList->max_length));
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v22;
  sub_2213A04(p_commandCardDataList, v22, v23, v24, v25, v26, v27, v28);
  v29 = v5->fields.commandCardBaseList;
  if ( !v29 )
    goto LABEL_101;
  v30 = sub_2213B20(BattleCommandComponent___TypeInfo, LODWORD(v29->max_length));
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v30;
  sub_2213A04(
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
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.commandCodeIdList,
    (int32_t)v43,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = v4->fields.commandCardParam;
  v5->fields.commandCardParam = v45;
  p_commandCardParam = &v5->fields.commandCardParam;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.commandCardParam,
    (int32_t)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0);
  SvtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfterAtStageLimitCount(
                                                     v4,
                                                     1,
                                                     0);
  v55 = v5->fields.commandCardBaseList;
  v122 = (int)this;
  if ( !v55 )
    goto LABEL_101;
  v56 = 0;
  v120 = v4;
  v121 = CommandCardIds;
  while ( (__int64)v56 < SLODWORD(v55->max_length) )
  {
    if ( CommandCardIds && (max_length_low = LODWORD(CommandCardIds->max_length), (__int64)v56 < (int)max_length_low) )
    {
      if ( v56 >= max_length_low )
        goto LABEL_103;
      v58 = CommandCardIds->m_Items[v56];
    }
    else
    {
      v58 = 0;
    }
    v59 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v60 = LODWORD(v59->max_length), (__int64)v56 < (int)v60) )
    {
      if ( v56 >= v60 )
        goto LABEL_103;
      v61 = v59->m_Items[v56];
    }
    else
    {
      v61 = 0;
    }
    v62 = *p_commandCardParam;
    if ( *p_commandCardParam && (v63 = LODWORD(v62->max_length), (__int64)v56 < (int)v63) )
    {
      if ( v56 >= v63 )
        goto LABEL_103;
      v64 = v62->m_Items[v56];
    }
    else
    {
      v64 = 0;
    }
    if ( (unsigned int)(v58 - 1) > 2 )
    {
      v118 = v5->fields.commandCodeSpriteList;
      if ( !v118 )
        goto LABEL_101;
      if ( v56 >= LODWORD(v118->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v118->m_Items[v56];
      if ( !this )
        goto LABEL_101;
      UISprite__set_spriteName((UISprite_o *)this, 0, 0);
      ++v56;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      commandCodeId = v61;
      if ( !*(&(*v6)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v6, item, v54);
      v66 = v6;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_101;
      v67 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v67,
                                                         0);
      if ( !this )
        goto LABEL_101;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v126 = v56 + 1;
      v72 = System_Int32__ToString((int32_t)&v126, 0);
      v73 = System_String__Concat_75694928(
              (System_String_o *)StringLiteral_4758/*"CommandCard("*/,
              v72,
              (System_String_o *)StringLiteral_789/*")"*/,
              0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v67, v73, 0);
      v74 = v5->fields.commandCardBaseList;
      if ( !v74 )
        goto LABEL_101;
      if ( v56 >= LODWORD(v74->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v74->m_Items[v56];
      if ( !this )
        goto LABEL_101;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
      if ( !transform )
        goto LABEL_101;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !byte_5969AE6 )
      {
        sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
        byte_5969AE6 = 1;
      }
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v128.fields.x = x;
      v128.fields.y = y;
      v128.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v128, 0);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v67,
        (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v67,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_101;
      v75 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      v75[1].fields.commandCardPrefab = gameObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v75[1].fields.commandCardPrefab,
        (int32_t)gameObject,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      v83 = (unsigned int *)v5->fields.commandCardDataList;
      v84 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_53637188(v84, v58, SvtId, v122, 0, -1, 0);
      if ( !v83 )
        goto LABEL_101;
      if ( v84 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_2213BB4(v84, *(_QWORD *)(*(_QWORD *)v83 + 64LL));
        if ( !this )
        {
LABEL_104:
          v119 = sub_2213D00(this, v91);
          sub_2213BA0(v119, 0);
        }
      }
      if ( v56 >= v83[6] )
        goto LABEL_103;
      v92 = &v83[2 * v56];
      *((_QWORD *)v92 + 4) = v84;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v92 + 8), (int32_t)v84, v85, v86, v87, v88, v89, v90);
      v93 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_101;
      if ( v56 >= LODWORD(v93->_1.namespaze) )
        goto LABEL_103;
      item = (ServantStatusListViewItem_o *)*((_QWORD *)&v93->_1.byval_arg.data + v56);
      if ( !item )
        goto LABEL_101;
      *(&item->fields.memberNum + 1) = v56 + 1;
      LODWORD(item->fields.servantLeaderInfo) = v56;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v75, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v75, (System_String_o *)StringLiteral_15732/*"Unlit/Transparent Colored"*/, 0);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v75, 1, 0, 1, 0, 0, 0, 0);
      clickEventObject = v5->fields.clickEventObject;
      v75[1].fields.commandCardPrefab = clickEventObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v75[1].fields.commandCardPrefab,
        (int32_t)clickEventObject,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100);
      v101 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v101 )
        goto LABEL_101;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_2213BB4(v75, *(_QWORD *)(*(_QWORD *)v101 + 64LL));
      if ( !this )
        goto LABEL_104;
      if ( v56 >= v101[6] )
        goto LABEL_103;
      v108 = &v101[2 * v56];
      *((_QWORD *)v108 + 4) = v75;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v108 + 8), (int32_t)v75, v102, v103, v104, v105, v106, v107);
      v109 = v5->fields.commandCardBaseList;
      if ( !v109 )
        goto LABEL_101;
      if ( v56 >= LODWORD(v109->max_length) )
        goto LABEL_103;
      this = (ServantStatusListViewItemDrawCommand_o *)v109->m_Items[v56];
      if ( !this )
        goto LABEL_101;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v110, v111);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v67, layer, 0);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v75, v64, 2, 1, 0);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v75, v64, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v75,
                                                         0);
      v6 = v66;
      CommandCardIds = v121;
      if ( (_DWORD)this != -1 )
      {
        v114 = v5->fields.commandCodeSpriteList;
        if ( !v114 )
          goto LABEL_101;
        if ( v56 >= LODWORD(v114->max_length) )
          goto LABEL_103;
        v115 = (UIWidget_o *)v114->m_Items[v56];
        if ( !v115 )
          goto LABEL_101;
        UIWidget__set_depth(v115, (_DWORD)this - 1, 0);
      }
      v116 = v5->fields.commandCodeSpriteList;
      if ( !v116 )
        goto LABEL_101;
      if ( v56 >= LODWORD(v116->max_length) )
LABEL_103:
        sub_2213CE4(this);
      v117 = v116->m_Items[v56];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v113);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v117, commandCodeId, 0);
      ++v56;
      p_commandCardParam = &v5->fields.commandCardParam;
      v4 = v120;
    }
    v55 = v5->fields.commandCardBaseList;
    if ( !v55 )
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
  __int64 ServantStatusExplanationText; // x0
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
  const MethodInfo *v27; // x2
  __int64 v28; // x21
  const MethodInfo *v29; // x2
  int32_t AdditionalHeight; // w0
  int32_t transformedSubHeight; // w24
  int v32; // w25
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v35; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *userSvtEntity; // x0
  BalanceConfig_c *IsEventJoin; // x0
  __int64 v39; // x2
  _BOOL4 v40; // w21
  bool AnyTransformServant; // w8
  UILabel_o *v42; // x22
  bool v43; // w1
  float y; // s0
  int v45; // w8
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *baseCollider; // x22
  UnityEngine_BoxCollider_o *v49; // x22
  int v50; // s0 OVERLAPPED
  int v52; // s2
  int v53; // w22
  float x; // s8
  float v55; // s11
  float z; // s9
  int v57; // w22
  float v58; // s8
  float v59; // s12
  float v60; // s9
  float v61; // s11
  float v62; // s8
  float v63; // s12
  float v64; // s9
  float v65; // s0
  float v66; // s8
  float v67; // s10
  float v68; // s9
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x3
  struct System_Int32_array *commandCardParam; // x21
  int max_length; // w8
  __int64 v73; // x22
  int32_t v74; // w28
  bool v75; // w1
  int v76; // w8
  bool CanMoveCombine_k__BackingField; // w1
  int v78; // w8
  float v79; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D338 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_12428/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/);
    sub_2213A60(&StringLiteral_12426/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/);
    sub_2213A60(&StringLiteral_12427/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/);
    sub_2213A60(&StringLiteral_12425/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/);
    byte_596D338 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, *(_QWORD *)&mode);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12425/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12426/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/;
    }
    else
    {
      explanationLabel = this->fields.explanationLabel;
      v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( !item->fields.servantLeaderInfo )
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
        ServantStatusExplanationText = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0);
        if ( !explanationLabel )
          goto LABEL_129;
        UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
        goto LABEL_33;
      }
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v11 = &StringLiteral_12427/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/;
    }
    ServantStatusExplanationText = (__int64)LocalizationManager__Get((System_String_o *)*v11, 0);
    if ( !explanationLabel )
      goto LABEL_129;
    UILabel__set_text(explanationLabel, (System_String_o *)ServantStatusExplanationText, 0);
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_129;
    v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    *(_QWORD *)&v81.fields.currentCryptoKey = v17;
    *(_QWORD *)&v81.fields.fakeValue = v18;
    ServantStatusExplanationText = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v81, 0);
    if ( (_DWORD)ServantStatusExplanationText )
    {
      if ( !Master_object )
        goto LABEL_129;
      v19 = ServantStatusExplanationText;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(
             (ServantLimitImageMaster_o *)Master_object,
             ServantStatusExplanationText,
             3,
             0) )
      {
        ServantStatusExplanationText = (__int64)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                  (ServantLimitImageMaster_o *)Master_object,
                                                  (System_String_o *)StringLiteral_12428/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                                  v19,
                                                  0);
        v20 = this->fields.explanationLabel;
        if ( !v20 )
          goto LABEL_129;
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
        v25 = System_String__Concat_75651716(mText, v24, 0);
        UILabel__set_text(v20, v25, 0);
        v26 = 1;
LABEL_34:
        ServantStatusExplanationText = (__int64)ServantStatusListViewItem__GetCommandCardLimitCountStageList(item, 0);
        if ( !ServantStatusExplanationText )
          goto LABEL_129;
        v28 = ServantStatusExplanationText;
        ServantStatusListViewItemDrawCommand__SetupLevelButtonObjects(
          this,
          *(_DWORD *)(ServantStatusExplanationText + 24),
          v27);
        ServantStatusExplanationText = (__int64)this->fields.levelButtonItem;
        if ( !ServantStatusExplanationText )
          goto LABEL_129;
        AdditionalHeight = ServantStatusListViewItemButton__GetAdditionalHeight(
                             (ServantStatusListViewItemButton_o *)ServantStatusExplanationText,
                             *(_DWORD *)(v28 + 24),
                             v29);
        if ( v26 )
          transformedSubHeight = AdditionalHeight + 32;
        else
          transformedSubHeight = AdditionalHeight;
        if ( ServantStatusListViewItem__get_AnyTransformServant(item, 0) )
        {
          ServantStatusExplanationText = (__int64)this->fields.levelButtonBase;
          if ( item->fields._IsTransformed_k__BackingField )
          {
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
            ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                      0);
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
            transformedSubHeight = this->fields.transformedSubHeight;
            v26 = 0;
          }
          else
          {
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
            ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                      0);
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
          }
          transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
          TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
          if ( !transformNameLabel )
            goto LABEL_129;
          UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
          transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
          TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
          if ( !transformNameSprite )
            goto LABEL_129;
          UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
          ServantStatusExplanationText = (__int64)this->fields.transformNameSprite;
          if ( !ServantStatusExplanationText )
            goto LABEL_129;
          ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                    0);
          if ( !ServantStatusExplanationText )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
          v35 = this->fields.transformNameLabel;
          ServantStatusExplanationText = (__int64)ServantStatusListViewItem__GetTransformName(item, 0);
          if ( !v35 )
            goto LABEL_129;
          UILabel__set_text(v35, (System_String_o *)ServantStatusExplanationText, 0);
          transformNameAddHeight = this->fields.transformNameAddHeight;
          transformedSubHeight += transformNameAddHeight;
          v32 = -transformNameAddHeight;
        }
        else
        {
          ServantStatusExplanationText = (__int64)this->fields.transformNameSprite;
          if ( !ServantStatusExplanationText )
            goto LABEL_129;
          ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                    0);
          if ( !ServantStatusExplanationText )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
          v32 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_63;
        userSvtEntity = item->fields.userSvtEntity;
        if ( !userSvtEntity || UserServantEntity__IsLeave(userSvtEntity, 0) )
          goto LABEL_63;
        ServantStatusExplanationText = (__int64)item->fields.userSvtEntity;
        if ( !ServantStatusExplanationText )
          goto LABEL_129;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin(
                                           (UserServantEntity_o *)ServantStatusExplanationText,
                                           0);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_63:
          v40 = 0;
          goto LABEL_64;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          max_length = commandCardParam->max_length;
          if ( max_length < 1 )
          {
LABEL_120:
            ServantStatusExplanationText = (__int64)this->fields.engraveCodeObject;
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
            ServantStatusExplanationText = (__int64)this->fields.engraveCodeButton;
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
            *(_BYTE *)(ServantStatusExplanationText + 97) = 1;
            UICommonButton__SetEnable(
              (UICommonButton_o *)ServantStatusExplanationText,
              CanMoveCombine_k__BackingField,
              0);
            v78 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v79 = (float)-(v78 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v79, 0);
            ServantStatusExplanationText = (__int64)this->fields.reinforceMaskSprite;
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                      0);
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
            ServantStatusExplanationText = (__int64)this->fields.reinforceMaskSprite;
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            gameObject = UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)ServantStatusExplanationText,
                           0);
            GameObjectExtensions__SetLocalPositionY(gameObject, v79, 0);
            v40 = 1;
LABEL_64:
            AnyTransformServant = ServantStatusListViewItem__get_AnyTransformServant(item, 0);
            ServantStatusExplanationText = (__int64)this->fields.transformNameSprite;
            if ( AnyTransformServant )
            {
              if ( !ServantStatusExplanationText )
                goto LABEL_129;
              ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                        0);
              if ( !ServantStatusExplanationText )
                goto LABEL_129;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
              v42 = this->fields.transformNameLabel;
              ServantStatusExplanationText = (__int64)ServantStatusListViewItem__GetTransformName(item, 0);
              if ( !v42 )
                goto LABEL_129;
              UILabel__set_text(v42, (System_String_o *)ServantStatusExplanationText, 0);
              ServantStatusExplanationText = (__int64)this->fields.levelButtonBase;
              if ( !item->fields._IsTransformed_k__BackingField )
              {
                if ( !ServantStatusExplanationText )
                  goto LABEL_129;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
                ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
                if ( !ServantStatusExplanationText )
                  goto LABEL_129;
                ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                          0);
                if ( !ServantStatusExplanationText )
                  goto LABEL_129;
                v43 = 1;
                goto LABEL_74;
              }
              if ( !ServantStatusExplanationText )
                goto LABEL_129;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 0, 0);
              ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
            }
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            ServantStatusExplanationText = (__int64)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                      0);
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            v43 = 0;
LABEL_74:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, v43, 0);
            ServantStatusExplanationText = (__int64)this->fields.baseSprite;
            if ( !ServantStatusExplanationText )
              goto LABEL_129;
            y = this->fields.baseSize.fields.y;
            if ( y == INFINITY )
              v45 = 0x80000000;
            else
              v45 = (int)y;
            UIWidget__set_height((UIWidget_o *)ServantStatusExplanationText, v45 + transformedSubHeight, 0);
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
            {
              ServantStatusExplanationText = (__int64)this->fields.baseSprite;
              if ( !ServantStatusExplanationText )
                goto LABEL_129;
              v49 = this->fields.baseCollider;
              ServantStatusExplanationText = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ServantStatusExplanationText
                                                                                        + 664LL))(
                                               ServantStatusExplanationText,
                                               *(_QWORD *)(*(_QWORD *)ServantStatusExplanationText + 672LL));
              if ( !v49 )
                goto LABEL_129;
              v52 = 0;
              UnityEngine_BoxCollider__set_size(v49, *(UnityEngine_Vector3_o *)&v50, 0);
            }
            ServantStatusExplanationText = (__int64)this->fields.titleSprite;
            if ( transformedSubHeight >= 0 )
              v53 = transformedSubHeight;
            else
              v53 = transformedSubHeight + 1;
            if ( ServantStatusExplanationText )
            {
              x = this->fields.titleBasePosition.fields.x;
              v55 = this->fields.titleBasePosition.fields.y;
              z = this->fields.titleBasePosition.fields.z;
              ServantStatusExplanationText = (__int64)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                        0);
              if ( ServantStatusExplanationText )
              {
                v57 = v53 >> 1;
                v82.fields.x = x;
                v82.fields.z = z;
                v82.fields.y = v55 + (float)v57;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)ServantStatusExplanationText,
                  v82,
                  0);
                ServantStatusExplanationText = (__int64)this->fields.cardBase;
                if ( ServantStatusExplanationText )
                {
                  v58 = this->fields.cardBasePosition.fields.x;
                  v59 = this->fields.cardBasePosition.fields.y;
                  v60 = this->fields.cardBasePosition.fields.z;
                  ServantStatusExplanationText = (__int64)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                            0);
                  if ( ServantStatusExplanationText )
                  {
                    v83.fields.x = v58;
                    v83.fields.z = v60;
                    v61 = (float)(v57 + v32);
                    v83.fields.y = v59 + v61;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)ServantStatusExplanationText,
                      v83,
                      0);
                    ServantStatusExplanationText = (__int64)this->fields.levelButtonBase;
                    if ( ServantStatusExplanationText )
                    {
                      v62 = this->fields.levelButtonBasePosition.fields.x;
                      v63 = this->fields.levelButtonBasePosition.fields.y;
                      v64 = this->fields.levelButtonBasePosition.fields.z;
                      ServantStatusExplanationText = (__int64)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)ServantStatusExplanationText,
                                                                0);
                      if ( ServantStatusExplanationText )
                      {
                        v84.fields.y = v63 + v61;
                        v84.fields.x = v62;
                        v84.fields.z = v64;
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)ServantStatusExplanationText,
                          v84,
                          0);
                        ServantStatusExplanationText = (__int64)this->fields.explanationLabel;
                        v65 = this->fields.explanationBasePosition.fields.y - (float)v57;
                        if ( v26 )
                          v65 = v65 + 16.0;
                        v66 = v40 ? v65 + 50.0 : v65;
                        if ( ServantStatusExplanationText )
                        {
                          v67 = this->fields.explanationBasePosition.fields.x;
                          v68 = this->fields.explanationBasePosition.fields.z;
                          ServantStatusExplanationText = (__int64)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)ServantStatusExplanationText,
                                                                    0);
                          if ( ServantStatusExplanationText )
                          {
                            v85.fields.x = v67;
                            v85.fields.y = v66;
                            v85.fields.z = v68;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)ServantStatusExplanationText,
                              v85,
                              0);
                            ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v69);
                            ServantStatusListViewItemDrawCommand__SetupMask(this, item, v40, v70);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_129:
            sub_2213CDC(ServantStatusExplanationText, v14);
          }
          v73 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v73 >= max_length )
              sub_2213CE4(IsEventJoin);
            IsEventJoin = BalanceConfig_TypeInfo;
            v74 = commandCardParam->m_Items[v73];
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v39);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v74 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            max_length = commandCardParam->max_length;
            if ( (int)++v73 >= max_length )
              goto LABEL_120;
          }
        }
        ServantStatusExplanationText = (__int64)this->fields.reinforceObject;
        if ( !ServantStatusExplanationText )
          goto LABEL_129;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ServantStatusExplanationText, 1, 0);
        ServantStatusExplanationText = (__int64)this->fields.reinforceButton;
        if ( !ServantStatusExplanationText )
          goto LABEL_129;
        v75 = item->fields._CanMoveCombine_k__BackingField;
        *(_BYTE *)(ServantStatusExplanationText + 97) = 1;
        UICommonButton__SetEnable((UICommonButton_o *)ServantStatusExplanationText, v75, 0);
        if ( transformedSubHeight >= 0 )
          v76 = transformedSubHeight;
        else
          v76 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v76 >> 1), 0);
        goto LABEL_120;
      }
    }
LABEL_33:
    v26 = 0;
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
  bool v6; // w22
  int32_t CommandCardLimitCountStage; // w23
  const MethodInfo *v8; // x2
  ServantStatusListViewItemDrawCommand_o *v9; // x24
  int m_CancellationTokenSource; // w9
  signed int v11; // w8
  int32_t v12; // w26
  struct ServantStatusListViewItemButton_o *levelButtonItem; // x9
  bool v14; // w27
  bool v15; // w28
  bool v16; // w29
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x4
  ServantCostumeEntity_o *Entity; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x19
  struct ServantStatusListViewItemButton_array *levelButtons; // x8
  const MethodInfo *v28; // x4
  struct ServantStatusListViewItemButton_array *v29; // x8
  int32_t SvtId; // w19
  int32_t LimitCount; // w0
  __int64 v32; // x2
  struct ServantStatusListViewItemButton_array *v33; // x8
  char v34; // w26
  ServantStatusListViewItemButton_o *v35; // x27
  const MethodInfo *v36; // x3
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-70h]
  int v39; // [xsp+Ch] [xbp-64h] BYREF

  v4 = item;
  v5 = this;
  if ( (byte_596D33B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_2213A60(&StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_2213A60(&StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_596D33B = 1;
  }
  v39 = 0;
  if ( !v4 )
    goto LABEL_56;
  if ( v4->fields._IsTransformed_k__BackingField )
    return;
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || ((MasterData_object = DataManager__GetMasterData_object_(
                               (DataManager_o *)this,
                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___),
         v5->fields.isStart)
     && !ServantStatusListViewItem__get_IsConvertOverwriteImage(v4, 0)
      ? (!v4->fields.userSvtEntity
       ? (v6 = v4->fields.userSvtCollectionEntity != 0)
       : (v6 = 1))
      : (v6 = 0),
        CommandCardLimitCountStage = ServantStatusListViewItem__GetCommandCardLimitCountStage(v4, 0, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__GetCommandCardLimitCountStageList(
                                                            v4,
                                                            0)) == 0) )
  {
LABEL_56:
    sub_2213CDC(this, item);
  }
  v9 = this;
  ServantStatusListViewItemDrawCommand__SetupLevelButtonObjects(v5, (int32_t)this->fields.m_CancellationTokenSource, v8);
  m_CancellationTokenSource = (int)v9->fields.m_CancellationTokenSource;
  v39 = 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)m_CancellationTokenSource )
LABEL_57:
        sub_2213CE4(this);
      v12 = *(&v9->fields.dispMode + v11);
      levelButtonItem = v5->fields.levelButtonItem;
      v14 = v12 > 0 && v6;
      v15 = v12 == CommandCardLimitCountStage && v12 > 0;
      if ( !levelButtonItem )
        goto LABEL_56;
      v16 = v6 && v15;
      if ( v11 >= levelButtonItem->fields.columnCount )
      {
        item = (ServantStatusListViewItem_o *)(unsigned int)ServantStatusListViewItem__get_SvtId(v4, 0);
        this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_56;
        Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)item, v12, 0);
        if ( Entity )
        {
          this = (ServantStatusListViewItemDrawCommand_o *)ServantCostumeEntity__getShortName(Entity, 0);
LABEL_35:
          item = (ServantStatusListViewItem_o *)this;
          goto LABEL_43;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
        if ( !byte_596B976 )
        {
          sub_2213A60(&LocalizationManager_TypeInfo);
          byte_596B976 = 1;
        }
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
          this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
        }
        item = (ServantStatusListViewItem_o *)this->fields.reinforceButton->fields.tweenTargets;
      }
      else
      {
        if ( v12 > 0 || !ServantStatusListViewItem__get_IsMine(v4, 0) )
        {
          v23 = System_Int32__ToString((int32_t)&v39, 0);
          v26 = System_String__Concat_75651716((System_String_o *)StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v23, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
          this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(v26, 0);
          goto LABEL_35;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/,
                                                           0);
        item = (ServantStatusListViewItem_o *)this;
        v16 = 0;
      }
LABEL_43:
      levelButtons = v5->fields.levelButtons;
      if ( !levelButtons )
        goto LABEL_56;
      if ( (unsigned int)v39 >= LODWORD(levelButtons->max_length) )
        goto LABEL_57;
      this = (ServantStatusListViewItemDrawCommand_o *)levelButtons->m_Items[v39];
      if ( !this )
        goto LABEL_56;
      ServantStatusListViewItemButton__SetButtonDisplay(
        (ServantStatusListViewItemButton_o *)this,
        (System_String_o *)item,
        v15,
        v16,
        v19);
      v29 = v5->fields.levelButtons;
      if ( !v29 )
        goto LABEL_56;
      if ( (unsigned int)v39 >= LODWORD(v29->max_length) )
        goto LABEL_57;
      this = (ServantStatusListViewItemDrawCommand_o *)v29->m_Items[v39];
      if ( !this )
        goto LABEL_56;
      ServantStatusListViewItemButton__ApplyInteractableState(
        (ServantStatusListViewItemButton_o *)this,
        v15,
        v14,
        isInit,
        v28);
      SvtId = ServantStatusListViewItem__GetSvtId(v4, 0, 0);
      LimitCount = ServantStatusListViewItem__get_LimitCount(v4, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)LimitCountUtility__IsSealed(SvtId, LimitCount, v12, 0, 0);
      v33 = v5->fields.levelButtons;
      if ( !v33 )
        goto LABEL_56;
      if ( (unsigned int)v39 >= LODWORD(v33->max_length) )
        goto LABEL_57;
      v34 = (char)this;
      v35 = v33->m_Items[v39];
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v32);
      this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_8623/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                         0);
      if ( !v35 )
        goto LABEL_56;
      ServantStatusListViewItemButton__SetSealState(v35, v34 & 1, (System_String_o *)this, v36);
      m_CancellationTokenSource = (int)v9->fields.m_CancellationTokenSource;
      v11 = ++v39;
    }
    while ( v39 < m_CancellationTokenSource );
  }
}


void ServantStatusListViewItemDrawCommand__SetupLevelButtonObjects(
        ServantStatusListViewItemDrawCommand_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *ComponentInParent_object__58855988; // x21
  __int64 v8; // x1
  System_Action_int__o *v9; // x22
  UnityEngine_GameObject_o *levelButtonBase; // x0
  ServantStatusListViewItemButton_o *levelButtonItem; // x21
  const MethodInfo *v12; // x4
  struct ServantStatusListViewItemButton_array *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596D337 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewObject_OnClickCommandCharaLevel__);
    byte_596D337 = 1;
  }
  ComponentInParent_object__58855988 = UnityEngine_Component__GetComponentInParent_object__58855988(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3821234 *)Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v9 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__58855988, 0, 0) )
  {
    v9 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v9,
      ComponentInParent_object__58855988,
      Method_ServantStatusListViewObject_OnClickCommandCharaLevel__,
      0);
  }
  levelButtonBase = this->fields.levelButtonBase;
  if ( !levelButtonBase
    || (levelButtonItem = this->fields.levelButtonItem,
        levelButtonBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(levelButtonBase, 0),
        !levelButtonItem) )
  {
    sub_2213CDC(levelButtonBase, v8);
  }
  v13 = ServantStatusListViewItemButton__Setup(
          levelButtonItem,
          count,
          (UnityEngine_Transform_o *)levelButtonBase,
          v9,
          v12);
  this->fields.levelButtons = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.levelButtons,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  if ( (byte_596D33C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_2213A60(&StringLiteral_12474/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/);
    byte_596D33C = 1;
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
  v10 = **(System_String_o ***)(qword_5984390 + 184);
  if ( ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v11);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0);
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
  if ( !this
    || (UILabel__set_overflowMethod((UILabel_o *)this, 2, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0)
    || (UILabel__set_text((UILabel_o *)this, v10, 0),
        (this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel) == 0) )
  {
LABEL_36:
    sub_2213CDC(this, item);
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