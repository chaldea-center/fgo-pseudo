void __fastcall ServantStatusListViewItemDrawCommand___ctor(
        ServantStatusListViewItemDrawCommand_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct UISprite_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F926E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&UISprite___TypeInfo, v3);
    byte_49F926E = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UISprite_array *)sub_1B64170(UISprite___TypeInfo, (unsigned int)v4->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeSpriteList, (int32_t)v5, v6, v7);
  *(_QWORD *)&this->fields.transformNameAddHeight = 0xFFFFFF9C00000022LL;
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
  __int64 v5; // x1
  float v6; // s1
  struct UISprite_array *v7; // x8
  float v8; // s8
  float v9; // s1
  struct UISprite_o *baseSprite; // x9
  int max_length; // w8
  int mWidth; // s0
  int32_t mHeight; // w9
  bool v14; // cc
  unsigned int v15; // w8
  int v16; // w8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  int v20; // w8
  float v21; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  battleCharaLevelSpriteList = this->fields.battleCharaLevelSpriteList;
  if ( !battleCharaLevelSpriteList )
    goto LABEL_30;
  v3 = this;
  if ( (int)battleCharaLevelSpriteList->max_length > 3 )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[0];
    if ( !this )
      goto LABEL_30;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v3->fields.battleCharaLevelSpriteList;
    if ( !v7 )
      goto LABEL_30;
    if ( v7->max_length <= 3 )
      sub_1B6432C(this, v5);
    if ( (this = (ServantStatusListViewItemDrawCommand_o *)v7->m_Items[3]) == 0LL
      || (v8 = v6,
          (this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL)
      || ((*(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL),
           battleCharaLevelSpriteList = v3->fields.battleCharaLevelSpriteList,
           (float)(v8 - v9) != INFINITY)
        ? (buttonPitch = (int)(float)(v8 - v9))
        : (buttonPitch = 0x80000000),
          v3->fields.buttonPitch = buttonPitch,
          !battleCharaLevelSpriteList) )
    {
LABEL_30:
      sub_1B64324(this);
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
  v14 = max_length < 9;
  v15 = ((int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * max_length) >> 32) - max_length) >> 31);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.titleSprite;
  v16 = v14 ? -1 : v15 + 1;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight + v16 * buttonPitch);
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v20 = buttonPitch >= 0 ? buttonPitch : buttonPitch + 1;
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.cardBase;
  v21 = (float)(v20 >> 1);
  v3->fields.titleBasePosition.fields.x = v17;
  v3->fields.titleBasePosition.fields.z = v19;
  v3->fields.titleBasePosition.fields.y = v18 - v21;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.levelButtonBase;
  v3->fields.cardBasePosition.fields.x = localPosition.fields.x;
  v3->fields.cardBasePosition.fields.z = localPosition.fields.z;
  v3->fields.cardBasePosition.fields.y = localPosition.fields.y - v21;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v3->fields.explanationLabel;
  v3->fields.levelButtonBasePosition.fields.x = v23.fields.x;
  v3->fields.levelButtonBasePosition.fields.z = v23.fields.z;
  v3->fields.levelButtonBasePosition.fields.y = v23.fields.y - v21;
  if ( !this )
    goto LABEL_30;
  this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_30;
  v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.explanationBasePosition.fields.x = v24.fields.x;
  v3->fields.explanationBasePosition.fields.z = v24.fields.z;
  v3->fields.explanationBasePosition.fields.y = v24.fields.y + v21;
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

  if ( (byte_49F926A & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, item);
    byte_49F926A = 1;
  }
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_49F81D6 )
    {
      sub_1B640C8(&RandomLimitCountManager_TypeInfo, item);
      byte_49F81D6 = 1;
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
  UnityEngine_Object_c **v20; // x29
  struct UnityEngine_GameObject_array *commandCardBaseList; // x8
  il2cpp_array_size_t v22; // w27
  struct BattleCommandComponent_array *commandCardComponentList; // x8
  UnityEngine_Object_o *v24; // x22
  int32_t ConvertOverwriteCommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *MasterData_object; // x23
  ServantStatusBattleListViewItem_c *klass; // x8
  BattleCommandData_o *v29; // x1
  struct System_Int32_array *commandCodeIdList; // x8
  il2cpp_array_size_t max_length; // w9
  int32_t v32; // w21
  struct System_Int32_array *commandCardParam; // x8
  il2cpp_array_size_t v34; // w9
  int32_t v35; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v37; // x22
  __int64 v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct UnityEngine_GameObject_array *v41; // x8
  __int64 v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Int32_array *v47; // x1
  struct System_Int32_array **p_commandCodeIdList; // x22
  struct System_Int32_array *v49; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  int32_t v51; // w2
  int32_t v52; // w3
  System_Int32_array *CommandCardIds; // x28
  int32_t v54; // w21
  int32_t v55; // w21
  struct UnityEngine_GameObject_array *v56; // x8
  unsigned __int64 v57; // x23
  unsigned __int64 v58; // x8
  int32_t v59; // w25
  struct System_Int32_array *v60; // x8
  unsigned __int64 v61; // x9
  int32_t v62; // w24
  struct System_Int32_array *v63; // x8
  unsigned __int64 v64; // x9
  int32_t v65; // w9
  Il2CppObject *commandCardPrefab; // x21
  ServantStatusListViewItemDrawCommand_o *v67; // x28
  UnityEngine_Transform_o *transform; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  struct UnityEngine_GameObject_array *v74; // x8
  __int64 v75; // x1
  ServantStatusListViewItem_o *v76; // x27
  __int64 v77; // x1
  UnityEngine_Object_c **v78; // x19
  ServantStatusListViewItemDrawCommand_o *v79; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  unsigned int *commandCardDataList; // x29
  __int64 v84; // x1
  __int64 v85; // x2
  BattleCommandData_o *v86; // x22
  int32_t v87; // w2
  int32_t v88; // w3
  unsigned int *v89; // x0
  ServantStatusBattleListViewItem_c *v90; // x8
  BattleCommandData_o *v91; // x1
  struct UnityEngine_GameObject_o *clickEventObject; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  unsigned int *v95; // x21
  int32_t v96; // w2
  int32_t v97; // w3
  unsigned int *v98; // x0
  struct UnityEngine_GameObject_array *v99; // x8
  int32_t layer; // w21
  struct UISprite_array *v101; // x8
  UIWidget_o *v102; // x8
  struct UISprite_array *v103; // x8
  UISprite_o *v104; // x21
  struct UISprite_array *v105; // x8
  __int64 v106; // x0
  System_Int32_array *v107; // [xsp+0h] [xbp-B0h]
  int32_t v108; // [xsp+18h] [xbp-98h]
  int32_t svtId; // [xsp+1Ch] [xbp-94h]
  ServantStatusBattleListViewItem_o *p_commandCardDataList; // [xsp+20h] [xbp-90h]
  int32_t powerUpValue; // [xsp+38h] [xbp-78h]
  int v112; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  v4 = item;
  v5 = this;
  if ( (byte_49F926B & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&BattleCommandComponent___TypeInfo, v6);
    sub_1B640C8(&BattleCommandData___TypeInfo, v7);
    sub_1B640C8(&BattleCommandData_TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v11);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v12);
    sub_1B640C8(&NGUITools_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_15058/*"Unlit/Transparent Colored"*/, v17);
    sub_1B640C8(&StringLiteral_4590/*"CommandCard("*/, v18);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v19);
    byte_49F926B = 1;
  }
  v112 = 0;
  v20 = &UnityEngine_Object_TypeInfo;
  p_commandCardDataList = (ServantStatusBattleListViewItem_o *)&v5->fields.commandCardDataList;
  commandCardBaseList = v5->fields.commandCardBaseList;
  if ( v5->fields.commandCardDataList )
  {
    if ( commandCardBaseList )
    {
      v22 = 0;
      while ( (signed int)v22 < (signed int)commandCardBaseList->max_length )
      {
        commandCardComponentList = v5->fields.commandCardComponentList;
        if ( !commandCardComponentList )
          goto LABEL_109;
        if ( v22 >= commandCardComponentList->max_length )
          goto LABEL_111;
        if ( !v4 )
          goto LABEL_109;
        v24 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v22];
        if ( !v4->fields._IsTransformed_k__BackingField )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                                      v4,
                                                      0LL);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                ConvertOverwriteCommandCardLimitCount,
                                                0LL);
            this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_109;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
            this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, 0LL);
            if ( !MasterData_object )
              goto LABEL_109;
            this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                               (ServantLimitImageMaster_o *)MasterData_object,
                                                               (int32_t)this,
                                                               LimitCountByImageLimitCostumeIn,
                                                               0LL);
            klass = p_commandCardDataList->klass;
            if ( !p_commandCardDataList->klass )
              goto LABEL_109;
            if ( v22 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_111;
            v29 = (BattleCommandData_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v22);
            if ( !v29 )
              goto LABEL_109;
            v29->fields.svtlimit = (int)this;
            if ( !v24 )
              goto LABEL_109;
            BattleCommandComponent__setData((BattleCommandComponent_o *)v24, v29, 0LL, 0, 1, 0, 1, 0LL);
            BattleCommandComponent__updateView((BattleCommandComponent_o *)v24, 1, 0, 1, 0, 0, 0LL);
          }
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v22 < (int)max_length) )
        {
          if ( v22 >= max_length )
            goto LABEL_111;
          v32 = commandCodeIdList->m_Items[v22 + 1];
        }
        else
        {
          v32 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v34 = commandCardParam->max_length, (int)v22 < (int)v34) )
        {
          if ( v22 >= v34 )
            goto LABEL_111;
          v35 = commandCardParam->m_Items[v22 + 1];
        }
        else
        {
          v35 = 0;
        }
        if ( v24 )
        {
          BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v24, v35, 2, 1, 0LL);
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v24, v35, 0LL);
          commandCodeSpriteList = v5->fields.commandCodeSpriteList;
          if ( commandCodeSpriteList )
          {
            if ( v22 >= commandCodeSpriteList->max_length )
              goto LABEL_111;
            v37 = commandCodeSpriteList->m_Items[v22];
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v37, v32, 0LL);
            commandCardBaseList = v5->fields.commandCardBaseList;
            ++v22;
            if ( commandCardBaseList )
              continue;
          }
        }
        goto LABEL_109;
      }
      goto LABEL_110;
    }
LABEL_109:
    sub_1B64324(this);
  }
  if ( !commandCardBaseList )
    goto LABEL_109;
  v38 = sub_1B64170(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v38;
  sub_1B6406C(p_commandCardDataList, v38, v39, v40);
  v41 = v5->fields.commandCardBaseList;
  if ( !v41 )
    goto LABEL_109;
  v42 = sub_1B64170(BattleCommandComponent___TypeInfo, v41->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.commandCardComponentList, v42, v43, v44);
  if ( !v4 )
    goto LABEL_109;
  v47 = v4->fields.commandCodeIdList;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.commandCodeIdList, (int32_t)v47, v45, v46);
  v49 = v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.commandCardParam, (int32_t)v49, v51, v52);
  CommandCardIds = ServantStatusListViewItem__GetCommandCardIds(v4, 1, 0LL);
  svtId = ServantStatusListViewItem__GetSvtId(v4, 1, 0LL);
  v54 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  v55 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v54, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_109;
  this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                     (ServantLimitImageMaster_o *)this,
                                                     svtId,
                                                     v55,
                                                     0LL);
  v56 = v5->fields.commandCardBaseList;
  v108 = (int)this;
  if ( !v56 )
    goto LABEL_109;
  v57 = 0LL;
  v107 = CommandCardIds;
  while ( (__int64)v57 < (int)v56->max_length )
  {
    if ( CommandCardIds && (v58 = CommandCardIds->max_length, (__int64)v57 < (int)v58) )
    {
      if ( v57 >= v58 )
        goto LABEL_111;
      v59 = CommandCardIds->m_Items[v57 + 1];
    }
    else
    {
      v59 = 0;
    }
    v60 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v61 = v60->max_length, (__int64)v57 < (int)v61) )
    {
      if ( v57 >= v61 )
        goto LABEL_111;
      v62 = v60->m_Items[v57 + 1];
    }
    else
    {
      v62 = 0;
    }
    v63 = *p_commandCardParam;
    if ( *p_commandCardParam && (v64 = v63->max_length, (__int64)v57 < (int)v64) )
    {
      if ( v57 >= v64 )
        goto LABEL_111;
      v65 = v63->m_Items[v57 + 1];
    }
    else
    {
      v65 = 0;
    }
    if ( (unsigned int)(v59 - 1) > 2 )
    {
      v105 = v5->fields.commandCodeSpriteList;
      if ( !v105 )
        goto LABEL_109;
      if ( v57 >= v105->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v105->m_Items[v57];
      if ( !this )
        goto LABEL_109;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      ++v57;
    }
    else
    {
      commandCardPrefab = (Il2CppObject *)v5->fields.commandCardPrefab;
      powerUpValue = v65;
      if ( !(*v20)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v20);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_object_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_109;
      v67 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)v67,
                                                         0LL);
      if ( !this )
        goto LABEL_109;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v112 = v57 + 1;
      v72 = System_Int32__ToString((int32_t)&v112, 0LL);
      v73 = System_String__Concat_61386656(
              (System_String_o *)StringLiteral_4590/*"CommandCard("*/,
              v72,
              (System_String_o *)StringLiteral_815/*")"*/,
              0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v67, v73, 0LL);
      v74 = v5->fields.commandCardBaseList;
      if ( !v74 )
        goto LABEL_109;
      if ( v57 >= v74->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v74->m_Items[v57];
      if ( !this )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_109;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v75);
        byte_49F7111 = 1;
      }
      v76 = v4;
      UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      if ( !byte_49F7117 )
      {
        sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v77);
        byte_49F7117 = 1;
      }
      v78 = v20;
      UnityEngine_Transform__set_localRotation(
        transform,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      v114.fields.x = x;
      v114.fields.y = y;
      v114.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v114, 0LL);
      UnityEngine_GameObject__AddComponent_object_(
        (UnityEngine_GameObject_o *)v67,
        (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v67,
                                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_109;
      v79 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      *(_QWORD *)&v79[1].fields.dispMode = gameObject;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v79[1].fields.dispMode, (int32_t)gameObject, v81, v82);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v86 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v84, v85);
      BattleCommandData___ctor_42850076(v86, v59, svtId, v108, 0, -1, 0LL);
      if ( !commandCardDataList )
        goto LABEL_109;
      if ( v86 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_1B64204(
                                                           v86,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_112:
          v106 = sub_1B64348();
          sub_1B641F0(v106, 0LL);
        }
      }
      if ( v57 >= commandCardDataList[6] )
        goto LABEL_111;
      v89 = &commandCardDataList[2 * v57];
      *((_QWORD *)v89 + 4) = v86;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v89 + 8), (int32_t)v86, v87, v88);
      v90 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_109;
      if ( v57 >= LODWORD(v90->_1.namespaze) )
        goto LABEL_111;
      v91 = (BattleCommandData_o *)*((_QWORD *)&v90->_1.byval_arg.data + v57);
      if ( !v91 )
        goto LABEL_109;
      v20 = v78;
      v4 = v76;
      v91->fields.markindex = v57 + 1;
      v91->fields.servantCardIdsIndex = v57;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v79, v91, 0LL, 0, 1, 0, 1, 0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v79, (System_String_o *)StringLiteral_15058/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v79, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = v5->fields.clickEventObject;
      *(_QWORD *)&v79[1].fields.dispMode = clickEventObject;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v79[1].fields.dispMode, (int32_t)clickEventObject, v93, v94);
      v95 = (unsigned int *)v5->fields.commandCardComponentList;
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( !v95 )
        goto LABEL_109;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_1B64204(v79, *(_QWORD *)(*(_QWORD *)v95 + 64LL));
      if ( !this )
        goto LABEL_112;
      if ( v57 >= v95[6] )
        goto LABEL_111;
      v98 = &v95[2 * v57];
      *((_QWORD *)v98 + 4) = v79;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 8), (int32_t)v79, v96, v97);
      v99 = v5->fields.commandCardBaseList;
      if ( !v99 )
        goto LABEL_109;
      if ( v57 >= v99->max_length )
        goto LABEL_111;
      this = (ServantStatusListViewItemDrawCommand_o *)v99->m_Items[v57];
      if ( !this )
        goto LABEL_109;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v67, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v79, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v79, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v79,
                                                         0LL);
      CommandCardIds = v107;
      if ( (_DWORD)this != -1 )
      {
        v101 = v5->fields.commandCodeSpriteList;
        if ( !v101 )
          goto LABEL_109;
        if ( v57 >= v101->max_length )
          goto LABEL_111;
        v102 = (UIWidget_o *)v101->m_Items[v57];
        if ( !v102 )
          goto LABEL_109;
        UIWidget__set_depth(v102, (_DWORD)this - 1, 0LL);
      }
      v103 = v5->fields.commandCodeSpriteList;
      if ( !v103 )
        goto LABEL_109;
      if ( v57 >= v103->max_length )
LABEL_111:
        sub_1B6432C(this, item);
      v104 = v103->m_Items[v57];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v104, v62, 0LL);
      ++v57;
    }
    v56 = v5->fields.commandCardBaseList;
    if ( !v56 )
      goto LABEL_109;
  }
LABEL_110:
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
  Il2CppObject *Master_object; // x21
  UILabel_o *explanationLabel; // x22
  System_String_o *levelButtonBase; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v20; // x22
  __int64 v21; // x23
  UILabel_o *v22; // x22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  UILabel_o *servantLeaderInfo; // x23
  UILabel_o *v25; // x22
  struct ServantLeaderInfo_o *v26; // x8
  int32_t v27; // w22
  System_String_o *mText; // x25
  System_String_o *v29; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  struct System_Int32_array *commandCardSelectList; // x8
  int max_length; // w9
  int32_t buttonPitch; // w8
  int v36; // w10
  int v37; // w10
  int v38; // w8
  int32_t transformedSubHeight; // w24
  int v40; // w25
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w8
  UserServantEntity_o *v43; // x0
  BalanceConfig_c *IsEventJoin; // x0
  __int64 v45; // x1
  _BOOL4 v46; // w21
  _BOOL4 IsTransformServant_k__BackingField; // w22
  UILabel_o *v48; // x22
  bool v49; // w1
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v54; // s8
  int32_t v55; // w1
  int32_t v56; // w1
  int v57; // w22
  float v58; // s8
  float v59; // s11
  float v60; // s9
  int v61; // w22
  float v62; // s8
  float v63; // s12
  float v64; // s9
  float v65; // s11
  float v66; // s8
  float v67; // s12
  float v68; // s9
  float v69; // s0
  float v70; // s8
  float v71; // s10
  float v72; // s9
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v76; // w8
  __int64 v77; // x22
  int32_t v78; // w28
  int v79; // w8
  int v80; // w8
  float v81; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9269 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_11808/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/, v12);
    sub_1B640C8(&StringLiteral_11806/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, v13);
    sub_1B640C8(&StringLiteral_11807/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, v14);
    sub_1B640C8(&StringLiteral_11805/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, v15);
    byte_49F9269 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_134;
      UILabel__set_text(explanationLabel, levelButtonBase, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_134;
      v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    }
    else if ( item->fields.userSvtCollectionEntity )
    {
      v22 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v22 )
        goto LABEL_134;
      UILabel__set_text(v22, levelButtonBase, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_134;
      v21 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
    }
    else
    {
      servantLeaderInfo = (UILabel_o *)item->fields.servantLeaderInfo;
      v25 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      levelButtonBase = LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v25 )
        goto LABEL_134;
      UILabel__set_text(v25, levelButtonBase, 0LL);
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
        v36 = max_length / 3;
        if ( max_length != 3 * (max_length / 3) )
          ++v36;
        if ( v36 < 3 )
          v37 = 1;
        else
          v37 = v36 - 1;
        v38 = v37 * buttonPitch;
        if ( (_DWORD)servantLeaderInfo )
          transformedSubHeight = v38 + 32;
        else
          transformedSubHeight = v38;
        if ( item->fields._IsTransformServant_k__BackingField )
        {
          levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
          if ( !levelButtonBase )
            goto LABEL_134;
          if ( item->fields._IsTransformed_k__BackingField )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
            transformedSubHeight = this->fields.transformedSubHeight;
            LODWORD(servantLeaderInfo) = 0;
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
          }
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_134;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0LL);
          if ( !levelButtonBase )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
          transformNameLabel = this->fields.transformNameLabel;
          levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0LL);
          if ( !transformNameLabel )
            goto LABEL_134;
          UILabel__set_text(transformNameLabel, levelButtonBase, 0LL);
          transformNameAddHeight = this->fields.transformNameAddHeight;
          transformedSubHeight += transformNameAddHeight;
          v40 = -transformNameAddHeight;
        }
        else
        {
          levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
          if ( !levelButtonBase )
            goto LABEL_134;
          levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)levelButtonBase,
                                                 0LL);
          if ( !levelButtonBase )
            goto LABEL_134;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
          v40 = 0;
        }
        if ( !item->fields._IsDisplayCombineButton_k__BackingField )
          goto LABEL_67;
        v43 = item->fields.userSvtEntity;
        if ( !v43 || UserServantEntity__IsLeave(v43, 0LL) )
          goto LABEL_67;
        levelButtonBase = (System_String_o *)item->fields.userSvtEntity;
        if ( !levelButtonBase )
          goto LABEL_134;
        IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)levelButtonBase, 0LL);
        if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
        {
LABEL_67:
          v46 = 0;
          goto LABEL_68;
        }
        commandCardParam = item->fields.commandCardParam;
        transformedSubHeight += 50;
        if ( commandCardParam )
        {
          v76 = commandCardParam->max_length;
          if ( v76 < 1 )
          {
LABEL_125:
            levelButtonBase = (System_String_o *)this->fields.engraveCodeObject;
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
            levelButtonBase = (System_String_o *)this->fields.engraveCodeButton;
            if ( !levelButtonBase )
              goto LABEL_134;
            BYTE1(levelButtonBase[4].klass) = 1;
            UICommonButton__SetEnable(
              (UICommonButton_o *)levelButtonBase,
              item->fields._CanMoveCombine_k__BackingField,
              0LL);
            v80 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
            v81 = (float)-(v80 >> 1);
            GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v81, 0LL);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
            levelButtonBase = (System_String_o *)this->fields.reinforceMaskSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)levelButtonBase, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, v81, 0LL);
            v46 = 1;
LABEL_68:
            levelButtonBase = (System_String_o *)this->fields.transformNameSprite;
            if ( !levelButtonBase )
              goto LABEL_134;
            IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
            levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)levelButtonBase,
                                                   0LL);
            if ( !levelButtonBase )
              goto LABEL_134;
            if ( IsTransformServant_k__BackingField )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
              v48 = this->fields.transformNameLabel;
              levelButtonBase = ServantStatusListViewItem__GetTransformName(item, 0LL);
              if ( !v48 )
                goto LABEL_134;
              UILabel__set_text(v48, levelButtonBase, 0LL);
              levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
              if ( !levelButtonBase )
                goto LABEL_134;
              if ( !item->fields._IsTransformed_k__BackingField )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
                levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                if ( !levelButtonBase )
                  goto LABEL_134;
                levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)levelButtonBase,
                                                       0LL);
                if ( !levelButtonBase )
                  goto LABEL_134;
                v49 = 1;
                goto LABEL_80;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 0, 0LL);
              levelButtonBase = (System_String_o *)this->fields.explanationLabel;
              if ( !levelButtonBase )
                goto LABEL_134;
              levelButtonBase = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                     0LL);
              if ( !levelButtonBase )
                goto LABEL_134;
            }
            v49 = 0;
LABEL_80:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, v49, 0LL);
            x = this->fields.baseSize.fields.x;
            y = this->fields.baseSize.fields.y;
            z = this->fields.baseSize.fields.z;
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v54 = y + (float)transformedSubHeight;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
            {
              levelButtonBase = (System_String_o *)this->fields.baseCollider;
              if ( !levelButtonBase )
                goto LABEL_134;
              v84.fields.x = x;
              v84.fields.y = v54;
              v84.fields.z = z;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)levelButtonBase, v84, 0LL);
            }
            levelButtonBase = (System_String_o *)this->fields.baseSprite;
            if ( levelButtonBase )
            {
              v55 = x == INFINITY ? 0x80000000 : (int)x;
              UIWidget__set_width((UIWidget_o *)levelButtonBase, v55, 0LL);
              levelButtonBase = (System_String_o *)this->fields.baseSprite;
              if ( levelButtonBase )
              {
                v56 = v54 == INFINITY ? 0x80000000 : (int)v54;
                UIWidget__set_height((UIWidget_o *)levelButtonBase, v56, 0LL);
                levelButtonBase = (System_String_o *)this->fields.titleSprite;
                v57 = transformedSubHeight >= 0 ? transformedSubHeight : transformedSubHeight + 1;
                if ( levelButtonBase )
                {
                  v58 = this->fields.titleBasePosition.fields.x;
                  v59 = this->fields.titleBasePosition.fields.y;
                  v60 = this->fields.titleBasePosition.fields.z;
                  levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)levelButtonBase,
                                                         0LL);
                  if ( levelButtonBase )
                  {
                    v61 = v57 >> 1;
                    v85.fields.y = v59 + (float)v61;
                    v85.fields.x = v58;
                    v85.fields.z = v60;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v85, 0LL);
                    levelButtonBase = (System_String_o *)this->fields.cardBase;
                    if ( levelButtonBase )
                    {
                      v62 = this->fields.cardBasePosition.fields.x;
                      v63 = this->fields.cardBasePosition.fields.y;
                      v64 = this->fields.cardBasePosition.fields.z;
                      levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)levelButtonBase,
                                                             0LL);
                      if ( levelButtonBase )
                      {
                        v65 = (float)(v61 + v40);
                        v86.fields.y = v63 + v65;
                        v86.fields.x = v62;
                        v86.fields.z = v64;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)levelButtonBase, v86, 0LL);
                        levelButtonBase = (System_String_o *)this->fields.levelButtonBase;
                        if ( levelButtonBase )
                        {
                          v66 = this->fields.levelButtonBasePosition.fields.x;
                          v67 = this->fields.levelButtonBasePosition.fields.y;
                          v68 = this->fields.levelButtonBasePosition.fields.z;
                          levelButtonBase = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                 (UnityEngine_GameObject_o *)levelButtonBase,
                                                                 0LL);
                          if ( levelButtonBase )
                          {
                            v87.fields.y = v67 + v65;
                            v87.fields.x = v66;
                            v87.fields.z = v68;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)levelButtonBase,
                              v87,
                              0LL);
                            v69 = this->fields.explanationBasePosition.fields.y - (float)v61;
                            levelButtonBase = (System_String_o *)this->fields.explanationLabel;
                            if ( (_DWORD)servantLeaderInfo )
                              v69 = v69 + 16.0;
                            v70 = v46 ? v69 + 50.0 : v69;
                            if ( levelButtonBase )
                            {
                              v71 = this->fields.explanationBasePosition.fields.x;
                              v72 = this->fields.explanationBasePosition.fields.z;
                              levelButtonBase = (System_String_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)levelButtonBase,
                                                                     0LL);
                              if ( levelButtonBase )
                              {
                                v88.fields.x = v71;
                                v88.fields.y = v70;
                                v88.fields.z = v72;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)levelButtonBase,
                                  v88,
                                  0LL);
                                ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v73);
                                ServantStatusListViewItemDrawCommand__SetupMask(this, item, v46, v74);
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
            sub_1B64324(levelButtonBase);
          }
          v77 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v77 >= v76 )
              sub_1B6432C(IsEventJoin, v45);
            IsEventJoin = BalanceConfig_TypeInfo;
            v78 = commandCardParam->m_Items[v77 + 1];
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              IsEventJoin = BalanceConfig_TypeInfo;
            }
            if ( v78 < IsEventJoin->static_fields->CommandCardParamUpMax )
              break;
            v76 = commandCardParam->max_length;
            if ( (int)++v77 >= v76 )
              goto LABEL_125;
          }
        }
        levelButtonBase = (System_String_o *)this->fields.reinforceObject;
        if ( !levelButtonBase )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)levelButtonBase, 1, 0LL);
        levelButtonBase = (System_String_o *)this->fields.reinforceButton;
        if ( !levelButtonBase )
          goto LABEL_134;
        BYTE1(levelButtonBase[4].klass) = 1;
        UICommonButton__SetEnable(
          (UICommonButton_o *)levelButtonBase,
          item->fields._CanMoveCombine_k__BackingField,
          0LL);
        if ( transformedSubHeight >= 0 )
          v79 = transformedSubHeight;
        else
          v79 = transformedSubHeight + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v79 >> 1), 0LL);
        goto LABEL_125;
      }
      v26 = item->fields.servantLeaderInfo;
      if ( !v26 )
        goto LABEL_134;
      v21 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v83.fields.currentCryptoKey = v21;
    *(_QWORD *)&v83.fields.fakeValue = v20;
    levelButtonBase = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v83, 0LL);
    if ( !(_DWORD)levelButtonBase )
      goto LABEL_33;
    if ( !Master_object )
      goto LABEL_134;
    v27 = (int)levelButtonBase;
    levelButtonBase = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                           (ServantLimitImageMaster_o *)Master_object,
                                           (int32_t)levelButtonBase,
                                           3,
                                           0LL);
    if ( ((unsigned __int8)levelButtonBase & 1) != 0 )
    {
      levelButtonBase = ServantLimitImageMaster__GetServantStatusExplanationText(
                          (ServantLimitImageMaster_o *)Master_object,
                          (System_String_o *)StringLiteral_11808/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                          v27,
                          0LL);
      servantLeaderInfo = this->fields.explanationLabel;
      if ( !servantLeaderInfo )
        goto LABEL_134;
      mText = servantLeaderInfo->fields.mText;
      v29 = levelButtonBase;
      LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)Master_object,
                                                      v27,
                                                      3,
                                                      0LL);
      v31 = System_String__Format(v29, LimitCountSealedServantName, 0LL);
      v32 = System_String__Concat_61375396(mText, v31, 0LL);
      UILabel__set_text(servantLeaderInfo, v32, 0LL);
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
void __fastcall ServantStatusListViewItemDrawCommand__SetupBattleButton(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isInit,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v5; // x21
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
  bool v16; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  __int64 v18; // x1
  int32_t maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v21; // x0
  float *static_fields; // x8
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s11
  struct LocalizationManager_StaticFields *v27; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v32; // x1
  ServantStatusListViewItemDrawCommand_o *v33; // x25
  int v34; // w8
  _BOOL4 v35; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v37; // x26
  int v38; // w28
  System_String_o *v39; // x27
  float v40; // s3
  float v41; // s2
  float v42; // s1
  float v43; // s0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v47; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v50; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v52; // x27
  bool IsServantLimitCountSeal; // w28
  ServantStatusListViewItemDrawCommand_o *v54; // x1
  bool v55; // nf
  struct UICommonButton_array *v56; // x8
  __int64 v57; // x22
  unsigned int v58; // w28
  signed int max_length; // w27
  _BOOL4 v60; // w24
  struct UIRangeLabel_array *v61; // x9
  UIRangeLabel_o *v62; // x25
  int v63; // w19
  int32_t v64; // w1
  ServantCostumeEntity_o *Entity; // x0
  __int64 v66; // x1
  System_String_o *monitor; // x26
  float v68; // s3
  float v69; // s2
  float v70; // s1
  float v71; // s0
  struct UISprite_array *v72; // x8
  __int64 *v73; // x8
  struct UICommonButton_array *v74; // x8
  Il2CppObject *MasterData_object; // [xsp+0h] [xbp-C0h]
  int32_t v76; // [xsp+8h] [xbp-B8h]
  struct System_Int32_array *v78; // [xsp+10h] [xbp-B0h]
  bool v79; // [xsp+18h] [xbp-A8h]
  unsigned int v80; // [xsp+1Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_49F926C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_8210/*"LIMIT_COUNT_SELECT_SEALED"*/, v10);
    sub_1B640C8(&StringLiteral_11830/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v11);
    sub_1B640C8(&StringLiteral_17409/*"btn_bg_20"*/, v12);
    sub_1B640C8(&StringLiteral_11831/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1B640C8(&StringLiteral_17410/*"btn_bg_21"*/, v15);
    byte_49F926C = 1;
  }
  if ( !item )
    goto LABEL_136;
  if ( !item->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( v5->fields.isStart && !item->fields.isConvertOverwriteImage )
    {
      if ( item->fields.userSvtEntity )
        v16 = 1;
      else
        v16 = item->fields.userSvtCollectionEntity != 0LL;
      v79 = v16;
    }
    else
    {
      v79 = 0;
    }
    ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
                                              item,
                                              0LL);
    maxCommandCardLimitCount = item->fields.maxCommandCardLimitCount;
    commandCardSelectList = item->fields.commandCardSelectList;
    v76 = ConvertOverwriteCommandCardLimitCount;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_49F779B )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v18);
      byte_49F779B = 1;
    }
    v21 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v21->static_fields;
    v23 = static_fields[20];
    v24 = static_fields[21];
    v25 = static_fields[22];
    v26 = static_fields[23];
    if ( !byte_49F779C )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v18);
      v21 = LocalizationManager_TypeInfo;
      byte_49F779C = 1;
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = LocalizationManager_TypeInfo;
    }
    v27 = v21->static_fields;
    r = v27->selectEffectColor.fields.r;
    g = v27->selectEffectColor.fields.g;
    b = v27->selectEffectColor.fields.b;
    a = v27->selectEffectColor.fields.a;
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_136;
    this = (ServantStatusListViewItemDrawCommand_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v80 = 0;
    v33 = this;
    v34 = 0;
    while ( 1 )
    {
      if ( v34 <= maxCommandCardLimitCount )
      {
        if ( !commandCardSelectList )
          goto LABEL_136;
        if ( v34 >= commandCardSelectList->max_length )
          goto LABEL_137;
        v35 = commandCardSelectList->m_Items[v34 + 1] == v76;
      }
      else
      {
        v35 = 0;
      }
      battleCharaLevelTitleRangeLabelList = v5->fields.battleCharaLevelTitleRangeLabelList;
      if ( !battleCharaLevelTitleRangeLabelList )
        goto LABEL_136;
      if ( v34 >= battleCharaLevelTitleRangeLabelList->max_length )
        goto LABEL_137;
      v37 = battleCharaLevelTitleRangeLabelList->m_Items[v34];
      v38 = v79 && v34 <= maxCommandCardLimitCount;
      if ( v34 > maxCommandCardLimitCount
        && (this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_IsMine(item, 0LL),
            ((unsigned __int8)this & 1) != 0) )
      {
        if ( !v37 )
          goto LABEL_136;
        v81.fields.r = v23;
        v81.fields.g = v24;
        v81.fields.b = v25;
        v81.fields.a = v26;
        UIRangeLabel__set_effectColor(v37, v81, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = (System_String_o *)StringLiteral_11831/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
      }
      else
      {
        v40 = v26;
        v41 = v25;
        v42 = v24;
        v43 = v23;
        if ( (v35 & v38) != 0 )
        {
          v40 = a;
          v41 = b;
          v42 = g;
          v43 = r;
        }
        if ( !v37 )
          goto LABEL_136;
        UIRangeLabel__set_effectColor(v37, *(UnityEngine_Color_o *)&v43, 0LL);
        v44 = System_Int32__ToString((int32_t)&v80, 0LL);
        v39 = System_String__Concat_61375396((System_String_o *)StringLiteral_11830/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v44, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = LocalizationManager__Get(v39, 0LL);
      UIRangeLabel__Set(v37, v45, 0LL, 1, 0, 0LL);
      battleCharaLevelSpriteList = v5->fields.battleCharaLevelSpriteList;
      if ( !battleCharaLevelSpriteList )
        goto LABEL_136;
      if ( v80 >= battleCharaLevelSpriteList->max_length )
LABEL_137:
        sub_1B6432C(this, v32);
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelSpriteList->m_Items[v80];
      if ( !this )
        goto LABEL_136;
      v47 = &StringLiteral_17409/*"btn_bg_20"*/;
      if ( v35 )
        v47 = &StringLiteral_17410/*"btn_bg_21"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v47, 0LL);
      battleCharaLevelButtonList = v5->fields.battleCharaLevelButtonList;
      if ( !battleCharaLevelButtonList )
        goto LABEL_136;
      if ( v80 >= battleCharaLevelButtonList->max_length )
        goto LABEL_137;
      this = (ServantStatusListViewItemDrawCommand_o *)battleCharaLevelButtonList->m_Items[v80];
      if ( (v35 & v38) != 0 )
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v38 == 0 || isInit, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_136;
        UICommonButton__SetButtonEnable((UICommonButton_o *)this, v38 & ~v35, v38 == 0 || isInit, 0LL);
      }
      limitCountSealLabel = v5->fields.limitCountSealLabel;
      if ( limitCountSealLabel )
      {
        if ( v80 >= limitCountSealLabel->max_length )
          goto LABEL_137;
        v50 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v80];
      }
      else
      {
        v50 = 0LL;
      }
      limitCountSealObjList = v5->fields.limitCountSealObjList;
      if ( limitCountSealObjList )
      {
        if ( v80 >= limitCountSealObjList->max_length )
          goto LABEL_137;
        v52 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v80];
      }
      else
      {
        v52 = 0LL;
      }
      this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( !commandCardSelectList )
        goto LABEL_136;
      if ( v80 >= commandCardSelectList->max_length )
        goto LABEL_137;
      if ( !v33 )
        goto LABEL_136;
      IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(
                                  (ServantLimitImageMaster_o *)v33,
                                  (int32_t)this,
                                  commandCardSelectList->m_Items[v80 + 1] + 1,
                                  0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
      if ( IsServantLimitCountSeal )
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v52 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v52, 1, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8210/*"LIMIT_COUNT_SELECT_SEALED"*/,
                                                           0LL);
        if ( !v50 )
          goto LABEL_136;
        v54 = this;
      }
      else
      {
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v52 )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v52, 0, 0LL);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_89;
        if ( !v50 )
          goto LABEL_136;
        v54 = (ServantStatusListViewItemDrawCommand_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)v50, (System_String_o *)v54, 0LL);
LABEL_89:
      v55 = (int)(v80 - 2) < 0;
      v34 = ++v80;
      if ( v55 == __OFSUB__(v80, 3) )
      {
        v56 = v5->fields.battleCharaLevelButtonList;
        if ( v56 )
        {
          v57 = 11LL;
          v78 = commandCardSelectList;
          while ( 1 )
          {
            v58 = v57 - 8;
            if ( (int)v57 - 8 >= (signed int)v56->max_length )
              return;
            max_length = commandCardSelectList->max_length;
            if ( (int)v58 >= max_length )
            {
              v60 = 0;
            }
            else
            {
              if ( v58 >= max_length )
                goto LABEL_137;
              v60 = *((_DWORD *)&commandCardSelectList->obj.klass + v57) == v76;
            }
            v61 = v5->fields.battleCharaLevelTitleRangeLabelList;
            if ( !v61 )
              goto LABEL_136;
            if ( v58 >= v61->max_length )
              goto LABEL_137;
            v62 = v61->m_Items[v58];
            v63 = v79 && (int)v58 < max_length;
            if ( (int)v58 >= max_length )
            {
              if ( !v62 )
                goto LABEL_136;
              UIRangeLabel__Clear(v62, 0LL);
            }
            else
            {
              this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
              if ( v58 >= v78->max_length )
                goto LABEL_137;
              v64 = (int)this;
              this = (ServantStatusListViewItemDrawCommand_o *)MasterData_object;
              if ( !MasterData_object )
                goto LABEL_136;
              Entity = ServantCostumeMaster__GetEntity(
                         (ServantCostumeMaster_o *)MasterData_object,
                         v64,
                         v78->m_Items[v58 + 1],
                         0LL);
              if ( Entity )
              {
                this = (ServantStatusListViewItemDrawCommand_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
                monitor = (System_String_o *)this;
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                if ( !byte_49F7D6A )
                {
                  sub_1B640C8(&LocalizationManager_TypeInfo, v66);
                  byte_49F7D6A = 1;
                }
                this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (ServantStatusListViewItemDrawCommand_o *)LocalizationManager_TypeInfo;
                }
                monitor = (System_String_o *)this->fields.engraveCodeObject[1].monitor;
              }
              v68 = v26;
              v69 = v25;
              v70 = v24;
              v71 = v23;
              if ( (v60 & v63) != 0 )
              {
                v68 = a;
                v69 = b;
                v70 = g;
                v71 = r;
              }
              if ( !v62 )
                goto LABEL_136;
              UIRangeLabel__set_effectColor(v62, *(UnityEngine_Color_o *)&v71, 0LL);
              UIRangeLabel__Set(v62, monitor, 0LL, 1, 0, 0LL);
            }
            v72 = v5->fields.battleCharaLevelSpriteList;
            if ( !v72 )
              goto LABEL_136;
            if ( v58 >= v72->max_length )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v72->m_Items[v58];
            if ( !this )
              goto LABEL_136;
            v73 = &StringLiteral_17409/*"btn_bg_20"*/;
            if ( v60 )
              v73 = &StringLiteral_17410/*"btn_bg_21"*/;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v73, 0LL);
            v74 = v5->fields.battleCharaLevelButtonList;
            if ( !v74 )
              goto LABEL_136;
            if ( v58 >= v74->max_length )
              goto LABEL_137;
            this = (ServantStatusListViewItemDrawCommand_o *)v74->m_Items[v58];
            if ( (v60 & v63) != 0 )
              break;
            if ( (int)v58 < max_length )
            {
              if ( !this )
                goto LABEL_136;
              UICommonButton__SetButtonEnable((UICommonButton_o *)this, v63 & ~v60, v63 == 0 || isInit, 0LL);
              goto LABEL_130;
            }
            if ( !this )
              goto LABEL_136;
            this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
            commandCardSelectList = v78;
            if ( !this )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_131:
            v56 = v5->fields.battleCharaLevelButtonList;
            ++v57;
            if ( !v56 )
              goto LABEL_136;
          }
          if ( !this )
            goto LABEL_136;
          UICommonButton__SetColliderEnable((UICommonButton_o *)this, 0, v63 == 0 || isInit, 0LL);
LABEL_130:
          commandCardSelectList = v78;
          goto LABEL_131;
        }
LABEL_136:
        sub_1B64324(this);
      }
    }
  }
}


void __fastcall ServantStatusListViewItemDrawCommand__SetupMask(
        ServantStatusListViewItemDrawCommand_o *this,
        ServantStatusListViewItem_o *item,
        bool isDisplayCombineButton,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawCommand_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w1
  ServantStatusListViewItemDrawCommand_o *v11; // x22
  float y; // s0
  System_String_o *Empty; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_49F926D & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&string_TypeInfo, v7);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_1B640C8(&StringLiteral_11851/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, v8);
    byte_49F926D = 1;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskBase;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_16;
  if ( !this )
    goto LABEL_35;
  if ( item->fields._IsTransformed_k__BackingField )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_35;
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_35;
  mHeight = baseSprite->fields.mHeight;
  if ( isDisplayCombineButton )
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight - 50, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_35;
    v11 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_35;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = localPosition.fields.y + 25.0;
  }
  else
  {
    UIWidget__set_height((UIWidget_o *)this, mHeight, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !v6->fields.baseSprite )
      goto LABEL_35;
    v11 = this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_35;
    v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = v16.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v11, y, 0LL);
  this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_35;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  if ( item->fields.isEnableOwnRandomSetting )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL);
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
LABEL_35:
    sub_1B64324(this);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.MASK_LABEL_MAX_WIDTH, 0LL);
  if ( isDisplayCombineButton )
  {
    this = (ServantStatusListViewItemDrawCommand_o *)v6->fields.maskInfoLabel;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, 14.0, 0LL);
      return;
    }
    goto LABEL_35;
  }
}