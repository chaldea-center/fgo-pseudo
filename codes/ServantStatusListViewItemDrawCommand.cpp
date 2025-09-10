void ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UISprite_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C23FC1 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UISprite___TypeInfo);
    byte_4C23FC1 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UISprite_array *)sub_1C2D538(UISprite___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeSpriteList, (int32_t)v4, v5, v6);
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
  __int64 v5; // x2
  struct UISprite_array *v6; // x8
  float y; // s8
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v12; // cc
  unsigned int v13; // w8
  int v14; // w8
  int v15; // w8
  float v16; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

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
    v6 = v3->fields.battleCharaLevelSpriteList;
    if ( !v6 )
      goto LABEL_30;
    if ( LODWORD(v6->max_length) <= 3 )
      sub_1C2D6F4(this, method, v5);
    if ( (this = (ServantStatusListViewItemDrawCommand_o *)v6->m_Items[3]) == 0
      || (y = localPosition.fields.y,
          (this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0)
      || ((v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
           battleCharaLevelSpriteList = v3->fields.battleCharaLevelSpriteList,
           (float)(y - v18.fields.y) != INFINITY)
        ? (buttonPitch = (int)(float)(y - v18.fields.y))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !battleCharaLevelSpriteList) )
    {
LABEL_30:
      sub_1C2D6EC(this, method);
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
  v12 = max_length < 9;
  v13 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.titleSprite;
  v14 = v12 ? -1 : v13 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v14 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v15 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v16 = (float)(v15 >> 1);
  v3->fields.titleBasePosition.fields.x = v19.fields.x;
  v3->fields.titleBasePosition.fields.z = v19.fields.z;
  v3->fields.titleBasePosition.fields.y = v19.fields.y - v16;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.levelButtonBase;
  v3->fields.cardBasePosition.fields.x = v20.fields.x;
  v3->fields.cardBasePosition.fields.z = v20.fields.z;
  v3->fields.cardBasePosition.fields.y = v20.fields.y - v16;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v21.fields.x;
  v3->fields.levelButtonBasePosition.fields.z = v21.fields.z;
  v3->fields.levelButtonBasePosition.fields.y = v21.fields.y - v16;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_30;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.explanationBasePosition.fields.x = v22.fields.x;
  v3->fields.explanationBasePosition.fields.z = v22.fields.z;
  v3->fields.explanationBasePosition.fields.y = v22.fields.y + v16;
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

  if ( (byte_4C23FBD & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C23FBD = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4C2302F )
    {
      sub_1C2D490(&RandomLimitCountManager_TypeInfo);
      byte_4C2302F = 1;
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
  CGThumbnailListItem_c *klass; // x8
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
  const MethodInfo *v25; // x3
  struct UnityEngine_GameObject_array *v26; // x8
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Int32_array *v32; // x1
  struct System_Int32_array **p_commandCodeIdList; // x22
  struct System_Int32_array *v34; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Int32_array *CommandCardIds; // x28
  int32_t v39; // w21
  int32_t v40; // w21
  struct UnityEngine_GameObject_array *v41; // x8
  unsigned __int64 v42; // x23
  unsigned __int64 max_length_low; // x8
  int32_t v44; // w25
  struct System_Int32_array *v45; // x8
  unsigned __int64 v46; // x9
  int32_t v47; // w24
  struct System_Int32_array *v48; // x8
  unsigned __int64 v49; // x9
  int32_t v50; // w9
  Il2CppObject *commandCardPrefab; // x21
  ServantStatusListViewItemDrawCommand_o *v52; // x28
  UnityEngine_Transform_o *transform; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  struct UnityEngine_GameObject_array *v59; // x8
  ServantStatusListViewItem_o *v60; // x27
  UnityEngine_Object_c **v61; // x19
  ServantStatusListViewItemDrawCommand_o *v62; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  unsigned int *commandCardDataList; // x29
  BattleCommandData_o *v67; // x22
  const MethodInfo *v68; // x3
  unsigned int *v69; // x0
  CGThumbnailListItem_c *v70; // x8
  struct UnityEngine_GameObject_o *clickEventObject; // x1
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  unsigned int *v74; // x21
  const MethodInfo *v75; // x3
  unsigned int *v76; // x0
  struct UnityEngine_GameObject_array *v77; // x8
  int32_t layer; // w21
  struct UISprite_array *v79; // x8
  UIWidget_o *v80; // x8
  struct UISprite_array *v81; // x8
  UISprite_o *v82; // x21
  struct UISprite_array *v83; // x8
  __int64 v84; // x0
  System_Int32_array *v85; // [xsp+0h] [xbp-B0h]
  int32_t v86; // [xsp+18h] [xbp-98h]
  int32_t svtId; // [xsp+1Ch] [xbp-94h]
  CGThumbnailListItem_o *p_commandCardDataList; // [xsp+20h] [xbp-90h]
  int32_t powerUpValue; // [xsp+38h] [xbp-78h]
  int v90; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v4 = item;
  v5 = this;
  if ( (byte_4C23FBE & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BattleCommandComponent___TypeInfo);
    sub_1C2D490(&BattleCommandData___TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_15128/*"Unlit/Transparent Colored"*/);
    sub_1C2D490(&StringLiteral_4575/*"CommandCard("*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C23FBE = 1;
  }
  v90 = 0;
  v6 = &UnityEngine_Object_TypeInfo;
  p_commandCardDataList = (CGThumbnailListItem_o *)&v5->fields.commandCardDataList;
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
            this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_109;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    sub_1C2D6EC(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_109;
  v23 = sub_1C2D538(BattleCommandData___TypeInfo, LODWORD(commandCardBaseList->max_length));
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v23;
  sub_1C2D434(p_commandCardDataList, v23, v24, v25);
  v26 = v5->fields.commandCardBaseList;
  if ( !v26 )
    goto LABEL_109;
  v27 = sub_1C2D538(BattleCommandComponent___TypeInfo, LODWORD(v26->max_length));
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v27;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.commandCardComponentList, v27, v28, v29);
  if ( !v4 )
    goto LABEL_109;
  v32 = v4->fields.commandCodeIdList;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.commandCodeIdList, (int32_t)v32, v30, v31);
  v34 = v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.commandCardParam, (int32_t)v34, v36, v37);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0);
  svtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0);
  v39 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  v40 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v39, 0);
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     (ServantLimitImageMaster_o *)this,
                                                     svtId,
                                                     v40,
                                                     0);
  v41 = v5->fields.commandCardBaseList;
  v86 = (int)this;
  if ( !v41 )
    goto LABEL_109;
  v42 = 0;
  v85 = CommandCardIds;
  while ( (__int64)v42 < SLODWORD(v41->max_length) )
  {
    if ( CommandCardIds && (max_length_low = LODWORD(CommandCardIds->max_length), (__int64)v42 < (int)max_length_low) )
    {
      if ( v42 >= max_length_low )
        goto LABEL_111;
      v44 = CommandCardIds->m_Items[v42];
    }
    else
    {
      v44 = 0;
    }
    v45 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v46 = LODWORD(v45->max_length), (__int64)v42 < (int)v46) )
    {
      if ( v42 >= v46 )
        goto LABEL_111;
      v47 = v45->m_Items[v42];
    }
    else
    {
      v47 = 0;
    }
    v48 = *p_commandCardParam;
    if ( *p_commandCardParam && (v49 = LODWORD(v48->max_length), (__int64)v42 < (int)v49) )
    {
      if ( v42 >= v49 )
        goto LABEL_111;
      v50 = v48->m_Items[v42];
    }
    else
    {
      v50 = 0;
    }
    if ( (unsigned int)(v44 - 1) > 2 )
    {
      v83 = v5->fields.commandCodeSpriteList;
      if ( !v83 )
        goto LABEL_109;
      if ( v42 >= LODWORD(v83->max_length) )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v83->m_Items[v42];
      if ( !this )
        goto LABEL_109;
      UISprite__set_spriteName((UISprite_o *)this, 0, 0);
      ++v42;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      powerUpValue = v50;
      if ( !(*v6)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v6);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_109;
      v52 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v52,
                                                         0);
      if ( !this )
        goto LABEL_109;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v90 = v42 + 1;
      v57 = System_Int32__ToString((int32_t)&v90, 0);
      v58 = System_String__Concat_63496112(
              (System_String_o *)StringLiteral_4575/*"CommandCard("*/,
              v57,
              (System_String_o *)StringLiteral_759/*")"*/,
              0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v52, v58, 0);
      v59 = v5->fields.commandCardBaseList;
      if ( !v59 )
        goto LABEL_109;
      if ( v42 >= LODWORD(v59->max_length) )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v59->m_Items[v42];
      if ( !this )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
      if ( !transform )
        goto LABEL_109;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      if ( !byte_4C20DA1 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      v60 = v4;
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      if ( !byte_4C20DA7 )
      {
        sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
        byte_4C20DA7 = 1;
      }
      v61 = v6;
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v92.fields.x = x;
      v92.fields.y = y;
      v92.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v92, 0);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v52,
        (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v52,
                                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_109;
      v62 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      v62[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)gameObject;
      sub_1C2D434((CGThumbnailListItem_o *)&v62[1].fields.baseCollider, (int32_t)gameObject, v64, v65);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v67 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_46333400(v67, v44, svtId, v86, 0, -1, 0);
      if ( !commandCardDataList )
        goto LABEL_109;
      if ( v67 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_1C2D5CC(
                                                           v67,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_112:
          v84 = sub_1C2D710();
          sub_1C2D5B8(v84, 0);
        }
      }
      if ( v42 >= commandCardDataList[6] )
        goto LABEL_111;
      v69 = &commandCardDataList[2 * v42];
      *((_QWORD *)v69 + 4) = v67;
      sub_1C2D434((CGThumbnailListItem_o *)(v69 + 8), (int32_t)v67, (int32_t)method, v68);
      v70 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_109;
      if ( v42 >= LODWORD(v70->_1.namespaze) )
        goto LABEL_111;
      item = (ServantStatusListViewItem_o *)*((_QWORD *)&v70->_1.byval_arg.data + v42);
      if ( !item )
        goto LABEL_109;
      v6 = v61;
      v4 = v60;
      *(&item->fields.memberNum + 1) = v42 + 1;
      LODWORD(item->fields.servantLeaderInfo) = v42;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v62, (BattleCommandData_o *)item, 0, 0, 1, 0, 1, 0);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v62, (System_String_o *)StringLiteral_15128/*"Unlit/Transparent Colored"*/, 0);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v62, 1, 0, 1, 0, 0, 0);
      clickEventObject = v5->fields.clickEventObject;
      v62[1].fields.baseCollider = (struct UnityEngine_BoxCollider_o *)clickEventObject;
      sub_1C2D434((CGThumbnailListItem_o *)&v62[1].fields.baseCollider, (int32_t)clickEventObject, v72, v73);
      v74 = (unsigned int *)v5->fields.commandCardComponentList;
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( !v74 )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_1C2D5CC(v62, *(_QWORD *)(*(_QWORD *)v74 + 64LL));
      if ( !this )
        goto LABEL_112;
      if ( v42 >= v74[6] )
        goto LABEL_111;
      v76 = &v74[2 * v42];
      *((_QWORD *)v76 + 4) = v62;
      sub_1C2D434((CGThumbnailListItem_o *)(v76 + 8), (int32_t)v62, (int32_t)method, v75);
      v77 = v5->fields.commandCardBaseList;
      if ( !v77 )
        goto LABEL_109;
      if ( v42 >= LODWORD(v77->max_length) )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v77->m_Items[v42];
      if ( !this )
        goto LABEL_109;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v52, layer, 0);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v62, powerUpValue, 2, 1, 0);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v62, powerUpValue, 0);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v62,
                                                         0);
      CommandCardIds = v85;
      if ( (_DWORD)this != -1 )
      {
        v79 = v5->fields.commandCodeSpriteList;
        if ( !v79 )
          goto LABEL_109;
        if ( v42 >= LODWORD(v79->max_length) )
          goto LABEL_111;
        v80 = (UIWidget_o *)v79->m_Items[v42];
        if ( !v80 )
          goto LABEL_109;
        UIWidget__set_depth(v80, (_DWORD)this - 1, 0);
      }
      v81 = v5->fields.commandCodeSpriteList;
      if ( !v81 )
        goto LABEL_109;
      if ( v42 >= LODWORD(v81->max_length) )
LABEL_111:
        sub_1C2D6F4(this, item, method);
      v82 = v81->m_Items[v42];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v82, v47, 0);
      ++v42;
    }
    v41 = v5->fields.commandCardBaseList;
    if ( !v41 )
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
  __int64 v37; // x2
  _BOOL4 v38; // w21
  _BOOL4 IsTransformServant_k__BackingField; // w22
  UILabel_o *v40; // x22
  bool v41; // w1
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v46; // s8
  int32_t v47; // w1
  int32_t v48; // w1
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
  int v71; // w8
  int v72; // w8
  float v73; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23FBC & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_11909/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/);
    sub_1C2D490(&StringLiteral_11907/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/);
    sub_1C2D490(&StringLiteral_11908/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/);
    sub_1C2D490(&StringLiteral_11906/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/);
    byte_4C23FBC = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0);
      if ( !explanationLabel )
        goto LABEL_134;
      UILabel__set_text(explanationLabel, levelButtonBase, 0);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_134;
      v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v14 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0);
      if ( !v14 )
        goto LABEL_134;
      UILabel__set_text(v14, levelButtonBase, 0);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_134;
      v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
      v17 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0);
      if ( !v17 )
        goto LABEL_134;
      UILabel__set_text(v17, levelButtonBase, 0);
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
            goto LABEL_134;
          if ( item->fields._IsTransformed_k__BackingField )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
            transformedSubHeight = this->fields.transformedSubHeight;
            LODWORD(servantLeaderInfo) = 0;
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
          }
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_134;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0);
          if ( !levelButtonBase )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
          transformNameLabel = this->fields.transformNameLabel;
          levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0);
          if ( !transformNameLabel )
            goto LABEL_134;
          UILabel__set_text(transformNameLabel, levelButtonBase, 0);
          transformNameAddHeight = this->fields.transformNameAddHeight;
          transformedSubHeight += transformNameAddHeight;
          v32 = -transformNameAddHeight;
        }
        else
        {
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_134;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0);
          if ( !levelButtonBase )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
          v32 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_67;
        v35 = item->fields.userSvtEntity;
        if ( !v35 || UserServantEntity__IsLeave(v35, 0) )
          goto LABEL_67;
        levelButtonBase = (System_String_o *)item->fields.userSvtEntity;
        if ( !levelButtonBase )
          goto LABEL_134;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)levelButtonBase, 0);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_67:
          v38 = 0;
          goto LABEL_68;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          v68 = commandCardParam->max_length;
          if ( v68 < 1 )
          {
LABEL_125:
            levelButtonBase = (System_String_o *)this->fields.engraveCodeObject;
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
            levelButtonBase = (System_String_o *)this->fields.engraveCodeButton;
            if ( !levelButtonBase )
              goto LABEL_134;
            BYTE1(levelButtonBase[4].klass) = 1;
            UICommonButton__SetEnable(
              (UICommonButton_o *)levelButtonBase,
              item->fields._CanMoveCombine_k__BackingField,
              0);
            v72 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v73 = (float)-(v72 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v73, 0);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)levelButtonBase, 0);
            GameObjectExtensions__SetLocalPositionY(gameObject, v73, 0);
            v38 = 1;
LABEL_68:
            levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0);
            if ( !levelButtonBase )
              goto LABEL_134;
            if ( IsTransformServant_k__BackingField )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
              v40 = this->fields.transformNameLabel;
              levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0);
              if ( !v40 )
                goto LABEL_134;
              UILabel__set_text(v40, levelButtonBase, 0);
              levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
              if ( !levelButtonBase )
                goto LABEL_134;
              if ( !item->fields._IsTransformed_k__BackingField )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
                levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                if ( !levelButtonBase )
                  goto LABEL_134;
                levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)levelButtonBase,
                                                       0);
                if ( !levelButtonBase )
                  goto LABEL_134;
                v41 = 1;
                goto LABEL_80;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0);
              levelButtonBase = (System_String_o *)this->fields.explanationLabel;
              if ( !levelButtonBase )
                goto LABEL_134;
              levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                     0);
              if ( !levelButtonBase )
                goto LABEL_134;
            }
            v41 = 0;
LABEL_80:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, v41, 0);
            x = this->fields.baseSize.fields.x;
            y = this->fields.baseSize.fields.y;
            z = this->fields.baseSize.fields.z;
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v46 = y + (float)transformedSubHeight;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
            {
              levelButtonBase = (System_String_o *)this->fields.baseCollider;
              if ( !levelButtonBase )
                goto LABEL_134;
              v76.fields.x = x;
              v76.fields.y = v46;
              v76.fields.z = z;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)levelButtonBase, v76, 0);
            }
            levelButtonBase = (System_String_o *)this->fields.baseSprite;
            if ( levelButtonBase )
            {
              v47 = x == INFINITY ? 0x80000000 : (int)x;
              UIWidget__set_width((UIWidget_o *)levelButtonBase, v47, 0);
              levelButtonBase = (System_String_o *)this->fields.baseSprite;
              if ( levelButtonBase )
              {
                v48 = v46 == INFINITY ? 0x80000000 : (int)v46;
                UIWidget__set_height((UIWidget_o *)levelButtonBase, v48, 0);
                levelButtonBase = (System_String_o *)this->fields.titleSprite;
                v49 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                if ( levelButtonBase )
                {
                  v50 = this->fields.titleBasePosition.fields.x;
                  v51 = this->fields.titleBasePosition.fields.y;
                  v52 = this->fields.titleBasePosition.fields.z;
                  levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)levelButtonBase,
                                                         0);
                  if ( levelButtonBase )
                  {
                    v53 = v49 >> 1;
                    v77.fields.y = v51 + (float)v53;
                    v77.fields.x = v50;
                    v77.fields.z = v52;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v77, 0);
                    levelButtonBase = (System_String_o *)this->fields.cardBase;
                    if ( levelButtonBase )
                    {
                      v54 = this->fields.cardBasePosition.fields.x;
                      v55 = this->fields.cardBasePosition.fields.y;
                      v56 = this->fields.cardBasePosition.fields.z;
                      levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)levelButtonBase,
                                                             0);
                      if ( levelButtonBase )
                      {
                        v57 = (float)(v53 + v32);
                        v78.fields.y = v55 + v57;
                        v78.fields.x = v54;
                        v78.fields.z = v56;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v78, 0);
                        levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
                        if ( levelButtonBase )
                        {
                          v58 = this->fields.levelButtonBasePosition.fields.x;
                          v59 = this->fields.levelButtonBasePosition.fields.y;
                          v60 = this->fields.levelButtonBasePosition.fields.z;
                          levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)levelButtonBase,
                                                                 0);
                          if ( levelButtonBase )
                          {
                            v79.fields.y = v59 + v57;
                            v79.fields.x = v58;
                            v79.fields.z = v60;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v79, 0);
                            v61 = this->fields.explanationBasePosition.fields.y - (float)v53;
                            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                            if ( (_DWORD)servantLeaderInfo )
                              v61 = v61 + 16.0;
                            v62 = v38 ? v61 + 50.0 : v61;
                            if ( levelButtonBase )
                            {
                              v63 = this->fields.explanationBasePosition.fields.x;
                              v64 = this->fields.explanationBasePosition.fields.z;
                              levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                                     0);
                              if ( levelButtonBase )
                              {
                                v80.fields.x = v63;
                                v80.fields.y = v62;
                                v80.fields.z = v64;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)levelButtonBase,
                                  v80,
                                  0);
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
LABEL_134:
            sub_1C2D6EC(levelButtonBase, v10);
          }
          v69 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v69 >= v68 )
              sub_1C2D6F4(IsEventJoin, v10, v37);
            IsEventJoin = BalanceConfig_TypeInfo;
            v70 = commandCardParam->m_Items[v69];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v70 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            v68 = commandCardParam->max_length;
            if ( (int)++v69 >= v68 )
              goto LABEL_125;
          }
        }
        levelButtonBase = (System_String_o *)this->fields.reinforceObject;
        if ( !levelButtonBase )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0);
        levelButtonBase = (System_String_o *)this->fields.reinforceButton;
        if ( !levelButtonBase )
          goto LABEL_134;
        BYTE1(levelButtonBase[4].klass) = 1;
        UICommonButton__SetEnable((UICommonButton_o *)levelButtonBase, item->fields._CanMoveCombine_k__BackingField, 0);
        if ( transformedSubHeight >= 0 )
          v71 = transformedSubHeight;
        else
          v71 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v71 >> 1), 0);
        goto LABEL_125;
      }
      v18 = item->fields.servantLeaderInfo;
      if ( !v18 )
        goto LABEL_134;
      v13 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v75.fields.currentCryptoKey = v13;
    *(_QWORD *)&v75.fields.fakeValue = v12;
    levelButtonBase = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v75, 0);
    if ( !(_DWORD)levelButtonBase )
      goto LABEL_33;
    if ( !Master_object )
      goto LABEL_134;
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
                          (System_String_o *)StringLiteral_11909/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                          v19,
                          0);
      servantLeaderInfo = this->fields.explanationLabel;
      if ( !servantLeaderInfo )
        goto LABEL_134;
      mText = servantLeaderInfo->fields.mText;
      v21 = levelButtonBase;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v19,
                                                      3,
                                                      0,
                                                      0);
      v23 = System_String__Format(v21, LimitCountSealedServantName, 0);
      v24 = System_String__Concat_63457864(mText, v23, 0);
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


// local variable allocation has failed, the output may be wrong!
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
  struct LocalizationManager_StaticFields *v16; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v21; // x2
  ServantStatusListViewItemDrawCommand_o *v22; // x25
  int32_t v23; // w8
  _BOOL4 v24; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v26; // x26
  int v27; // w28
  System_String_o *v28; // x27
  float v29; // s3
  float v30; // s2
  float v31; // s1
  float v32; // s0 OVERLAPPED
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v36; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v39; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v41; // x27
  bool IsServantLimitCountSeal; // w28
  ServantStatusListViewItemDrawCommand_o *v43; // x1
  bool v44; // nf
  struct UICommonButton_array *v45; // x8
  __int64 v46; // x22
  unsigned int v47; // w28
  signed int max_length; // w27
  _BOOL4 v49; // w24
  struct UIRangeLabel_array *v50; // x9
  UIRangeLabel_o *v51; // x25
  int v52; // w19
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *monitor; // x26
  float v55; // s3
  float v56; // s2
  float v57; // s1
  float v58; // s0 OVERLAPPED
  struct UISprite_array *v59; // x8
  __int64 *v60; // x8
  struct UICommonButton_array *v61; // x8
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-C0h]
  int32_t v63; // [xsp+8h] [xbp-B8h]
  struct System_Int32_array *v65; // [xsp+10h] [xbp-B0h]
  bool v66; // [xsp+18h] [xbp-A8h]
  unsigned int v67; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_4C23FBF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8268/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_1C2D490(&StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C23FBF = 1;
  }
  if ( !v4 )
    goto LABEL_136;
  if ( !v4->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( v5->fields.isStart && !v4->fields.isConvertOverwriteImage )
    {
      if ( v4->fields.userSvtEntity )
        v6 = 1;
      else
        v6 = v4->fields.userSvtCollectionEntity != 0;
      v66 = v6;
    }
    else
    {
      v66 = 0;
    }
    ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0);
    maxCommandCardLimitCount = v4->fields.maxCommandCardLimitCount;
    commandCardSelectList = v4->fields.commandCardSelectList;
    v63 = ConvertOverwriteCommandCardLimitCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C21AC5 )
    {
      sub_1C2D490(&LocalizationManager_TypeInfo);
      byte_4C21AC5 = 1;
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
    if ( !byte_4C21AC6 )
    {
      sub_1C2D490(&LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
      byte_4C21AC6 = 1;
    }
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = LocalizationManager_TypeInfo;
    }
    v16 = v10->static_fields;
    r = v16->selectEffectColor.fields.r;
    g = v16->selectEffectColor.fields.g;
    b = v16->selectEffectColor.fields.b;
    a = v16->selectEffectColor.fields.a;
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v67 = 0;
    v22 = this;
    v23 = 0;
    while ( 1 )
    {
      if ( v23 <= maxCommandCardLimitCount )
      {
        if ( !commandCardSelectList )
          goto LABEL_136;
        if ( (unsigned int)v23 >= LODWORD(commandCardSelectList->max_length) )
          goto LABEL_137;
        v24 = commandCardSelectList->m_Items[v23] == v63;
      }
      else
      {
        v24 = 0;
      }
      battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
      if ( !battleCharaLevelTitleRangeLabelList )
        goto LABEL_136;
      if ( (unsigned int)v23 >= LODWORD(battleCharaLevelTitleRangeLabelList->max_length) )
        goto LABEL_137;
      v26 = battleCharaLevelTitleRangeLabelList->m_Items[v23];
      v27 = v66 && v23 <= maxCommandCardLimitCount;
      if ( v23 > maxCommandCardLimitCount
        && (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(v4, 0),
            ((unsigned __int8)this & 1) != 0) )
      {
        if ( !v26 )
          goto LABEL_136;
        v68.fields.r = v12;
        v68.fields.g = v13;
        v68.fields.b = v14;
        v68.fields.a = v15;
        UIRangeLabel__set_effectColor(v26, v68, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v28 = (System_String_o *)StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
      }
      else
      {
        v29 = v15;
        v30 = v14;
        v31 = v13;
        v32 = v12;
        if ( (v24 & v27) != 0 )
        {
          v29 = a;
          v30 = b;
          v31 = g;
          v32 = r;
        }
        if ( !v26 )
          goto LABEL_136;
        UIRangeLabel__set_effectColor(v26, *(UnityEngine_Color_o *)&v32, 0);
        v33 = System_Int32__ToString((int32_t)&v67, 0);
        v28 = System_String__Concat_63457864((System_String_o *)StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v33, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = LocalizationManager__Get(v28, 0);
      UIRangeLabel__Set(v26, v34, 0, 1, 0, 0, 0);
      battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
      if ( !battleCharaLevelSpriteList )
        goto LABEL_136;
      if ( v67 >= LODWORD(battleCharaLevelSpriteList->max_length) )
LABEL_137:
        sub_1C2D6F4(this, item, v21);
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v67];
      if ( !this )
        goto LABEL_136;
      v36 = &StringLiteral_17441/*"btn_bg_20"*/;
      if ( v24 )
        v36 = &StringLiteral_17442/*"btn_bg_21"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v36, 0);
      battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
      if ( !battleCharaLevelButtonList )
        goto LABEL_136;
      if ( v67 >= LODWORD(battleCharaLevelButtonList->max_length) )
        goto LABEL_137;
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v67];
      if ( (v24 & v27) != 0 )
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v27 == 0 || isInit, 0);
      }
      else
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetButtonEnable((UICommonButton_o *)this, v27 & ~v24, v27 == 0 || isInit, 0);
      }
      limitCountSealLabel = v5->fields.limitCountSealLabel;
      if ( limitCountSealLabel )
      {
        if ( v67 >= LODWORD(limitCountSealLabel->max_length) )
          goto LABEL_137;
        v39 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v67];
      }
      else
      {
        v39 = 0;
      }
      limitCountSealObjList = v5->fields.limitCountSealObjList;
      if ( limitCountSealObjList )
      {
        if ( v67 >= LODWORD(limitCountSealObjList->max_length) )
          goto LABEL_137;
        v41 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v67];
      }
      else
      {
        v41 = 0;
      }
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0);
      if ( !commandCardSelectList )
        goto LABEL_136;
      if ( v67 >= LODWORD(commandCardSelectList->max_length) )
        goto LABEL_137;
      if ( !v22 )
        goto LABEL_136;
      IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                  (ServantLimitImageMaster_o *)v22,
                                  (int32_t)this,
                                  commandCardSelectList->m_Items[v67] + 1,
                                  0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v41, 0, 0);
      if ( IsServantLimitCountSeal )
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v41 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v41, 1, 0);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v39, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8268/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0);
        if ( !v39 )
          goto LABEL_136;
        v43 = this;
      }
      else
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v41 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v41, 0, 0);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v39, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !v39 )
          goto LABEL_136;
        v43 = (ServantStatusListViewItemDrawCommand_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)v39, (System_String_o *)v43, 0);
LABEL_89:
      v44 = (int)(v67 - 2) < 0;
      v23 = ++v67;
      if ( v44 == __OFSUB__(v67, 3) )
      {
        v45 = v5->fields.battleCharaLevelButtonList;
        if ( v45 )
        {
          v46 = 11;
          v65 = commandCardSelectList;
          while ( 1 )
          {
            v47 = v46 - 8;
            if ( (int)v46 - 8 >= SLODWORD(v45->max_length) )
              return;
            max_length = commandCardSelectList->max_length;
            if ( (int)v47 >= max_length )
            {
              v49 = 0;
            }
            else
            {
              if ( v47 >= max_length )
                goto LABEL_137;
              v49 = *((_DWORD *)&commandCardSelectList->obj.klass + v46) == v63;
            }
            v50 = v5->fields.battleCharaLevelTitleRangeLabelList;
            if ( !v50 )
              goto LABEL_136;
            if ( v47 >= LODWORD(v50->max_length) )
              goto LABEL_137;
            v51 = v50->m_Items[v47];
            v52 = v66 && (int)v47 < max_length;
            if ( (int)v47 >= max_length )
            {
              if ( !v51 )
                goto LABEL_136;
              UIRangeLabel__Clear(v51, 0);
            }
            else
            {
              this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0);
              if ( v47 >= LODWORD(v65->max_length) )
                goto LABEL_137;
              item = (ServantStatusListViewItem_o *)(unsigned int)this;
              this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_136;
              Entity = ServantCostumeMaster__GetEntity(
                         (ServantCostumeMaster_o *)MasterData_object,
                         (int32_t)item,
                         v65->m_Items[v47],
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
                if ( !byte_4C2267D )
                {
                  sub_1C2D490(&LocalizationManager_TypeInfo);
                  byte_4C2267D = 1;
                }
                this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                }
                monitor = (System_String_o *)this->fields.engraveCodeObject[1].monitor;
              }
              v55 = v15;
              v56 = v14;
              v57 = v13;
              v58 = v12;
              if ( (v49 & v52) != 0 )
              {
                v55 = a;
                v56 = b;
                v57 = g;
                v58 = r;
              }
              if ( !v51 )
                goto LABEL_136;
              UIRangeLabel__set_effectColor(v51, *(UnityEngine_Color_o *)&v58, 0);
              UIRangeLabel__Set(v51, monitor, 0, 1, 0, 0, 0);
            }
            v59 = v5->fields.battleCharaLevelSpriteList;
            if ( !v59 )
              goto LABEL_136;
            if ( v47 >= LODWORD(v59->max_length) )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v59->m_Items[v47];
            if ( !this )
              goto LABEL_136;
            v60 = &StringLiteral_17441/*"btn_bg_20"*/;
            if ( v49 )
              v60 = &StringLiteral_17442/*"btn_bg_21"*/;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v60, 0);
            v61 = v5->fields.battleCharaLevelButtonList;
            if ( !v61 )
              goto LABEL_136;
            if ( v47 >= LODWORD(v61->max_length) )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v61->m_Items[v47];
            if ( (v49 & v52) != 0 )
              break;
            if ( (int)v47 < max_length )
            {
              if ( !this )
                goto LABEL_136;
              UICommonButton__SetButtonEnable((UICommonButton_o *)this, v52 & ~v49, v52 == 0 || isInit, 0);
              goto LABEL_130;
            }
            if ( !this )
              goto LABEL_136;
            this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
            commandCardSelectList = v65;
            if ( !this )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_131:
            v45 = v5->fields.battleCharaLevelButtonList;
            ++v46;
            if ( !v45 )
              goto LABEL_136;
          }
          if ( !this )
            goto LABEL_136;
          UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v52 == 0 || isInit, 0);
LABEL_130:
          commandCardSelectList = v65;
          goto LABEL_131;
        }
LABEL_136:
        sub_1C2D6EC(this, item);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C23FC0 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1C2D490(&StringLiteral_11955/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/);
    byte_4C23FC0 = 1;
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
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    y = localPosition.fields.y + 25.0;
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
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    y = v14.fields.y;
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11955/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0);
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
    sub_1C2D6EC(this, item);
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