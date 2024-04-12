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

  if ( (byte_42B58A9 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&UISprite___TypeInfo);
    byte_42B58A9 = 1;
  }
  *(&this->fields.MASK_LABEL_MAX_WIDTH + 1) = 550;
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UISprite_array *)sub_B5299C(UISprite___TypeInfo, (unsigned int)v3->static_fields->SvtCommandCardMax);
  this->fields.commandCodeSpriteList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeSpriteList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
      v19 = sub_B52A88(this);
      sub_B52A28(v19, 0LL);
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
      sub_B52A5C(this, method);
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

  if ( (byte_42B58A5 & 1) == 0 )
  {
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42B58A5 = 1;
  }
  if ( this->fields.isStart )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_42AE27F )
    {
      sub_B52984(&RandomLimitCountManager_TypeInfo);
      byte_42AE27F = 1;
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
  const MethodInfo *v13; // x1
  BattleServantConfConponent_c *klass; // x8
  __int64 v15; // x8
  BattleServantConfConponent_c *v16; // x8
  struct System_Int32_array *commandCodeIdList; // x8
  int max_length; // w9
  int32_t v19; // w21
  struct System_Int32_array *commandCardParam; // x8
  int v21; // w9
  int32_t v22; // w23
  struct UISprite_array *commandCodeSpriteList; // x8
  UISprite_o *v24; // x22
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UnityEngine_GameObject_array *v32; // x8
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  struct System_Int32_array **p_commandCodeIdList; // x24
  System_Int32_array **v48; // x1
  struct System_Int32_array **p_commandCardParam; // x27
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct ServantEntity_o *svtEntity; // x9
  struct UnityEngine_GameObject_array *v57; // x8
  struct System_Int32_array *cardIds; // x28
  ImageLimitCount_c **v59; // x23
  unsigned __int64 v60; // x26
  const MethodInfo *v61; // x1
  int32_t v62; // w21
  int32_t v63; // w21
  ServantLimitImageMaster_o *v64; // x22
  const MethodInfo *v65; // x1
  unsigned __int64 v66; // x8
  int32_t v67; // w10
  struct System_Int32_array *v68; // x8
  unsigned __int64 v69; // x9
  int32_t v70; // w22
  struct System_Int32_array *v71; // x8
  unsigned __int64 v72; // x9
  int32_t v73; // w9
  UnityEngine_UI_Dropdown_DropdownItem_o *commandCardPrefab; // x21
  UnityEngine_GameObject_o *v75; // x27
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  struct UnityEngine_GameObject_array *v82; // x8
  ImageLimitCount_c **v83; // x25
  ServantStatusListViewItem_o *v84; // x23
  struct System_Int32_array *v85; // x19
  ServantStatusListViewItemDrawCommand_o *v86; // x22
  System_Int32_array **gameObject; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  unsigned int *commandCardDataList; // x28
  BattleCommandData_o *v95; // x24
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  unsigned int *v102; // x0
  BattleServantConfConponent_c *v103; // x8
  __int64 v104; // x8
  BattleServantConfConponent_c *v105; // x8
  System_Int32_array **clickEventObject; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  unsigned int *v113; // x21
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  unsigned int *v120; // x0
  struct UnityEngine_GameObject_array *v121; // x8
  int32_t layer; // w21
  struct UISprite_array *v123; // x8
  UIWidget_o *v124; // x8
  struct UISprite_array *v125; // x8
  UISprite_o *v126; // x21
  struct UISprite_array *v127; // x8
  __int64 v128; // x0
  __int64 v129; // x0
  int32_t v130; // [xsp+10h] [xbp-90h]
  int32_t v131; // [xsp+14h] [xbp-8Ch]
  int32_t powerUpValue; // [xsp+18h] [xbp-88h]
  int32_t commandCodeId; // [xsp+1Ch] [xbp-84h]
  BattleServantConfConponent_o *p_commandCardDataList; // [xsp+28h] [xbp-78h]
  int32_t svtId; // [xsp+38h] [xbp-68h]
  int v136; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = item;
  v5 = this;
  if ( (byte_42B58A6 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BattleCommandComponent___TypeInfo);
    sub_B52984(&BattleCommandData___TypeInfo);
    sub_B52984(&BattleCommandData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_15113/*"Unlit/Transparent Colored"*/);
    sub_B52984(&StringLiteral_4199/*"CommandCard("*/);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B58A6 = 1;
  }
  v136 = 0;
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
        v9 = (UnityEngine_Object_o *)commandCardComponentList->m_Items[v7];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
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
          this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_116;
          MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)this,
                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v13);
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
          v15 = *((_QWORD *)&klass->_1.byval_arg.data + v7);
          if ( !v15 )
            goto LABEL_116;
          *(_DWORD *)(v15 + 24) = (_DWORD)this;
          v16 = p_commandCardDataList->klass;
          if ( !p_commandCardDataList->klass )
            goto LABEL_116;
          if ( (unsigned int)v7 >= LODWORD(v16->_1.namespaze) )
            goto LABEL_118;
          if ( !v9 )
            goto LABEL_116;
          BattleCommandComponent__setData(
            (BattleCommandComponent_o *)v9,
            *((BattleCommandData_o **)&v16->_1.byval_arg.data + v7),
            0LL,
            0,
            1,
            0,
            0LL);
          BattleCommandComponent__updateView((BattleCommandComponent_o *)v9, 1, 0, 1, 0, 0, 0LL);
        }
        commandCodeIdList = v5->fields.commandCodeIdList;
        if ( commandCodeIdList && (max_length = commandCodeIdList->max_length, (int)v7 < max_length) )
        {
          if ( (unsigned int)v7 >= max_length )
            goto LABEL_118;
          v19 = commandCodeIdList->m_Items[v7 + 1];
        }
        else
        {
          v19 = 0;
        }
        commandCardParam = v5->fields.commandCardParam;
        if ( commandCardParam && (v21 = commandCardParam->max_length, (int)v7 < v21) )
        {
          if ( (unsigned int)v7 >= v21 )
            goto LABEL_118;
          v22 = commandCardParam->m_Items[v7 + 1];
          if ( !v9 )
            goto LABEL_116;
        }
        else
        {
          v22 = 0;
          if ( !v9 )
            goto LABEL_116;
        }
        BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v9, v22, 2, 1, 0LL);
        BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v9, v22, 0LL);
        commandCodeSpriteList = v5->fields.commandCodeSpriteList;
        if ( !commandCodeSpriteList )
          goto LABEL_116;
        if ( (unsigned int)v7 >= commandCodeSpriteList->max_length )
          goto LABEL_118;
        v24 = commandCodeSpriteList->m_Items[v7];
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v24, v19, 0LL);
        commandCardBaseList = v5->fields.commandCardBaseList;
        ++v7;
        if ( !commandCardBaseList )
          goto LABEL_116;
      }
      goto LABEL_117;
    }
LABEL_116:
    sub_B52A5C(this, item);
  }
  if ( !commandCardBaseList )
    goto LABEL_116;
  v25 = (System_Int32_array **)sub_B5299C(BattleCommandData___TypeInfo, commandCardBaseList->max_length);
  v5->fields.commandCardDataList = (struct BattleCommandData_array *)v25;
  sub_B52920(p_commandCardDataList, v25, v26, v27, v28, v29, v30, v31);
  v32 = v5->fields.commandCardBaseList;
  if ( !v32 )
    goto LABEL_116;
  v33 = (System_Int32_array **)sub_B5299C(BattleCommandComponent___TypeInfo, v32->max_length);
  v5->fields.commandCardComponentList = (struct BattleCommandComponent_array *)v33;
  sub_B52920((BattleServantConfConponent_o *)&v5->fields.commandCardComponentList, v33, v34, v35, v36, v37, v38, v39);
  if ( !v4 )
    goto LABEL_116;
  v46 = (System_Int32_array **)v4->fields.commandCodeIdList;
  v5->fields.commandCodeIdList = (struct System_Int32_array *)v46;
  p_commandCodeIdList = &v5->fields.commandCodeIdList;
  sub_B52920((BattleServantConfConponent_o *)&v5->fields.commandCodeIdList, v46, v40, v41, v42, v43, v44, v45);
  v48 = (System_Int32_array **)v4->fields.commandCardParam;
  p_commandCardParam = &v5->fields.commandCardParam;
  v5->fields.commandCardParam = (struct System_Int32_array *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v5->fields.commandCardParam, v48, v50, v51, v52, v53, v54, v55);
  svtEntity = v4->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_116;
  v57 = v5->fields.commandCardBaseList;
  if ( !v57 )
    goto LABEL_116;
  cardIds = svtEntity->fields.cardIds;
  v59 = &ImageLimitCount_TypeInfo;
  v60 = 0LL;
  while ( (__int64)v60 < (int)v57->max_length )
  {
    svtId = ServantStatusListViewItem__get_SvtId(v4, (const MethodInfo *)item);
    v62 = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(v4, v61);
    if ( (BYTE3((*v59)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v59)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v59);
    v63 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v62, 0LL);
    this = (ServantStatusListViewItemDrawCommand_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_116;
    v64 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    this = (ServantStatusListViewItemDrawCommand_o *)ServantStatusListViewItem__get_SvtId(v4, v65);
    if ( !v64 )
      goto LABEL_116;
    this = (ServantStatusListViewItemDrawCommand_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       v64,
                                                       (int32_t)this,
                                                       v63,
                                                       0LL);
    if ( cardIds && (v66 = cardIds->max_length, (__int64)v60 < (int)v66) )
    {
      if ( v60 >= v66 )
        goto LABEL_118;
      v67 = cardIds->m_Items[v60 + 1];
    }
    else
    {
      v67 = 0;
    }
    v68 = *p_commandCodeIdList;
    if ( *p_commandCodeIdList && (v69 = v68->max_length, (__int64)v60 < (int)v69) )
    {
      if ( v60 >= v69 )
        goto LABEL_118;
      v70 = v68->m_Items[v60 + 1];
    }
    else
    {
      v70 = 0;
    }
    v71 = *p_commandCardParam;
    if ( *p_commandCardParam && (v72 = v71->max_length, (__int64)v60 < (int)v72) )
    {
      if ( v60 >= v72 )
        goto LABEL_118;
      v73 = v71->m_Items[v60 + 1];
    }
    else
    {
      v73 = 0;
    }
    if ( (unsigned int)(v67 - 1) > 2 )
    {
      v127 = v5->fields.commandCodeSpriteList;
      if ( !v127 )
        goto LABEL_116;
      if ( v60 >= v127->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v127->m_Items[v60];
      if ( !this )
        goto LABEL_116;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
      ++v60;
    }
    else
    {
      v130 = v67;
      v131 = (int)this;
      powerUpValue = v73;
      commandCardPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.commandCardPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         commandCardPrefab,
                                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_116;
      v75 = (UnityEngine_GameObject_o *)this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(v75, 0LL);
      if ( !this )
        goto LABEL_116;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      v136 = v60 + 1;
      v80 = System_Int32__ToString((int32_t)&v136, 0LL);
      v81 = System_String__Concat_44570600(
              (System_String_o *)StringLiteral_4199/*"CommandCard("*/,
              v80,
              (System_String_o *)StringLiteral_661/*")"*/,
              0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v75, v81, 0LL);
      v82 = v5->fields.commandCardBaseList;
      if ( !v82 )
        goto LABEL_116;
      if ( v60 >= v82->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v82->m_Items[v60];
      if ( !this )
        goto LABEL_116;
      v83 = v59;
      commandCodeId = v70;
      v84 = v4;
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
      if ( !transform )
        goto LABEL_116;
      v85 = cardIds;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
      identity = UnityEngine_Quaternion__get_identity(0LL);
      UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
      v139.fields.x = x;
      v139.fields.y = y;
      v139.fields.z = z;
      UnityEngine_Transform__set_localScale(transform, v139, 0LL);
      UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
        v75,
        (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
      this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v75,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( !this )
        goto LABEL_116;
      v86 = this;
      BattleCommandComponent__setDepth((BattleCommandComponent_o *)this, 110, 0LL);
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      v86[1].fields.titleSprite = (struct UISprite_o *)gameObject;
      sub_B52920((BattleServantConfConponent_o *)&v86[1].fields.titleSprite, gameObject, v88, v89, v90, v91, v92, v93);
      commandCardDataList = (unsigned int *)v5->fields.commandCardDataList;
      v95 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_19012556(v95, v130, svtId, v131, 0, 0LL);
      if ( !commandCardDataList )
        goto LABEL_116;
      if ( v95 )
      {
        this = (ServantStatusListViewItemDrawCommand_o *)sub_B52A44(
                                                           v95,
                                                           *(_QWORD *)(*(_QWORD *)commandCardDataList + 64LL));
        if ( !this )
        {
LABEL_119:
          v129 = sub_B52A7C(this);
          sub_B52A28(v129, 0LL);
        }
      }
      if ( v60 >= commandCardDataList[6] )
        goto LABEL_118;
      v102 = &commandCardDataList[2 * v60];
      *((_QWORD *)v102 + 4) = v95;
      sub_B52920((BattleServantConfConponent_o *)(v102 + 8), (System_Int32_array **)v95, v96, v97, v98, v99, v100, v101);
      v103 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      if ( v60 >= LODWORD(v103->_1.namespaze) )
        goto LABEL_118;
      v104 = *((_QWORD *)&v103->_1.byval_arg.data + v60);
      if ( !v104 )
        goto LABEL_116;
      *(_DWORD *)(v104 + 44) = v60 + 1;
      v105 = p_commandCardDataList->klass;
      if ( !p_commandCardDataList->klass )
        goto LABEL_116;
      cardIds = v85;
      v4 = v84;
      v59 = v83;
      if ( v60 >= LODWORD(v105->_1.namespaze) )
        goto LABEL_118;
      BattleCommandComponent__setData(
        (BattleCommandComponent_o *)v86,
        *((BattleCommandData_o **)&v105->_1.byval_arg.data + v60),
        0LL,
        0,
        1,
        0,
        0LL);
      BattleCommandComponent__setShader((BattleCommandComponent_o *)v86, (System_String_o *)StringLiteral_15113/*"Unlit/Transparent Colored"*/, 0LL);
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v86, 1, 0, 1, 0, 0, 0LL);
      clickEventObject = (System_Int32_array **)v5->fields.clickEventObject;
      v86[1].fields.titleSprite = (struct UISprite_o *)clickEventObject;
      sub_B52920(
        (BattleServantConfConponent_o *)&v86[1].fields.titleSprite,
        clickEventObject,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      v113 = (unsigned int *)v5->fields.commandCardComponentList;
      if ( !v113 )
        goto LABEL_116;
      this = (ServantStatusListViewItemDrawCommand_o *)sub_B52A44(v86, *(_QWORD *)(*(_QWORD *)v113 + 64LL));
      if ( !this )
        goto LABEL_119;
      if ( v60 >= v113[6] )
        goto LABEL_118;
      v120 = &v113[2 * v60];
      *((_QWORD *)v120 + 4) = v86;
      sub_B52920(
        (BattleServantConfConponent_o *)(v120 + 8),
        (System_Int32_array **)v86,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      v121 = v5->fields.commandCardBaseList;
      if ( !v121 )
        goto LABEL_116;
      if ( v60 >= v121->max_length )
        goto LABEL_118;
      this = (ServantStatusListViewItemDrawCommand_o *)v121->m_Items[v60];
      if ( !this )
        goto LABEL_116;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v75, layer, 0LL);
      BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)v86, powerUpValue, 2, 1, 0LL);
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)v86, powerUpValue, 0LL);
      this = (ServantStatusListViewItemDrawCommand_o *)BattleCommandComponent__getPowerUpDepth(
                                                         (BattleCommandComponent_o *)v86,
                                                         0LL);
      p_commandCardParam = &v5->fields.commandCardParam;
      p_commandCodeIdList = &v5->fields.commandCodeIdList;
      if ( (_DWORD)this != -1 )
      {
        v123 = v5->fields.commandCodeSpriteList;
        if ( !v123 )
          goto LABEL_116;
        if ( v60 >= v123->max_length )
          goto LABEL_118;
        v124 = (UIWidget_o *)v123->m_Items[v60];
        if ( !v124 )
          goto LABEL_116;
        UIWidget__set_depth(v124, (_DWORD)this - 1, 0LL);
      }
      v125 = v5->fields.commandCodeSpriteList;
      if ( !v125 )
        goto LABEL_116;
      if ( v60 >= v125->max_length )
      {
LABEL_118:
        v128 = sub_B52A88(this);
        sub_B52A28(v128, 0LL);
      }
      v126 = v125->m_Items[v60];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      this = (ServantStatusListViewItemDrawCommand_o *)AtlasManager__SetCommandCodeMiniImage(v126, commandCodeId, 0LL);
      ++v60;
    }
    v57 = v5->fields.commandCardBaseList;
    if ( !v57 )
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
  int v32; // w24
  UserServantEntity_o *v33; // x0
  BalanceConfig_c *IsEventJoin; // x0
  _BOOL4 v35; // w21
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x22
  float v40; // s8
  double v41; // d0
  double v42; // d0
  int v43; // w22
  float v44; // s8
  float v45; // s11
  float v46; // s9
  float v47; // s10
  float v48; // s8
  float v49; // s11
  float v50; // s9
  float v51; // s8
  float v52; // s11
  float v53; // s9
  float v54; // s0
  float v55; // s8
  float v56; // s10
  float v57; // s9
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  struct System_Int32_array *commandCardParam; // x21
  int v61; // w8
  __int64 v62; // x22
  int32_t v63; // w27
  struct UICommonButton_o *reinforceButton; // x8
  int v65; // w8
  struct UICommonButton_o *engraveCodeButton; // x8
  int v67; // w8
  float v68; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v70; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B58A4 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_12058/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/);
    sub_B52984(&StringLiteral_12056/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/);
    sub_B52984(&StringLiteral_12057/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/);
    sub_B52984(&StringLiteral_12055/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/);
    byte_42B58A4 = 1;
  }
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
  if ( item && mode )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( item->fields.userSvtEntity )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_118;
      UILabel__set_text(explanationLabel, IsServantLimitCountSeal, 0LL);
      userSvtEntity = item->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_118;
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
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12056/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD2"*/, 0LL);
      if ( !v14 )
        goto LABEL_118;
      UILabel__set_text(v14, IsServantLimitCountSeal, 0LL);
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_118;
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
        IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12057/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
        if ( !v16 )
          goto LABEL_118;
        UILabel__set_text(v16, IsServantLimitCountSeal, 0LL);
        goto LABEL_43;
      }
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      IsServantLimitCountSeal = LocalizationManager__Get((System_String_o *)StringLiteral_12057/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD3"*/, 0LL);
      if ( !v16 )
        goto LABEL_118;
      UILabel__set_text(v16, IsServantLimitCountSeal, 0LL);
      servantLeaderInfo = item->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_118;
      v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v71.fields.currentCryptoKey = v13;
    *(_QWORD *)&v71.fields.fakeValue = v12;
    IsServantLimitCountSeal = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                   v71,
                                                   0LL);
    if ( (_DWORD)IsServantLimitCountSeal )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_118;
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
                                    (System_String_o *)StringLiteral_12058/*"SERVANT_STATUS_EXPLANATION_COMMAND_CARD_LIMIT_COUNT_SEALED_MSG"*/,
                                    v18,
                                    0LL);
        v19 = this->fields.explanationLabel;
        if ( !v19 )
          goto LABEL_118;
        mText = v19->fields.mText;
        v21 = IsServantLimitCountSeal;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        Master_WarQuestSelectionMaster,
                                                        v18,
                                                        3,
                                                        0LL);
        v23 = System_String__Format(v21, LimitCountSealedServantName, 0LL);
        v24 = System_String__Concat_44568316(mText, v23, 0LL);
        UILabel__set_text(v19, v24, 0LL);
        v25 = 1;
        goto LABEL_44;
      }
    }
LABEL_43:
    v25 = 0;
LABEL_44:
    commandCardSelectList = item->fields.commandCardSelectList;
    if ( !commandCardSelectList )
      goto LABEL_118;
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
      v32 = v31 + 32;
    else
      v32 = v31;
    if ( !item->fields._IsDisplayCombineButton_k__BackingField )
      goto LABEL_61;
    v33 = item->fields.userSvtEntity;
    if ( !v33 || UserServantEntity__IsLeave(v33, 0LL) )
      goto LABEL_61;
    IsServantLimitCountSeal = (System_String_o *)item->fields.userSvtEntity;
    if ( !IsServantLimitCountSeal )
      goto LABEL_118;
    IsEventJoin = (BalanceConfig_c *)UserServantEntity__IsEventJoin((UserServantEntity_o *)IsServantLimitCountSeal, 0LL);
    if ( ((unsigned __int8)IsEventJoin & 1) != 0 )
    {
LABEL_61:
      v35 = 0;
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
      v40 = y + (float)v32;
      if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
      {
        IsServantLimitCountSeal = (System_String_o *)this->fields.baseCollider;
        if ( !IsServantLimitCountSeal )
          goto LABEL_118;
        v72.fields.x = x;
        v72.fields.y = v40;
        v72.fields.z = z;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)IsServantLimitCountSeal, v72, 0LL);
      }
      IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
      if ( IsServantLimitCountSeal )
      {
        v41 = x;
        if ( x == INFINITY )
          v41 = -x;
        UIWidget__set_width((UIWidget_o *)IsServantLimitCountSeal, (int)v41, 0LL);
        IsServantLimitCountSeal = (System_String_o *)this->fields.baseSprite;
        if ( IsServantLimitCountSeal )
        {
          v42 = v40;
          if ( v40 == INFINITY )
            v42 = -INFINITY;
          UIWidget__set_height((UIWidget_o *)IsServantLimitCountSeal, (int)v42, 0LL);
          IsServantLimitCountSeal = (System_String_o *)this->fields.titleSprite;
          v43 = v32 >= 0 ? v32 : v32 + 1;
          if ( IsServantLimitCountSeal )
          {
            v44 = this->fields.titleBasePosition.fields.x;
            v45 = this->fields.titleBasePosition.fields.y;
            v46 = this->fields.titleBasePosition.fields.z;
            IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                           0LL);
            if ( IsServantLimitCountSeal )
            {
              v47 = (float)(v43 >> 1);
              v73.fields.y = v45 + v47;
              v73.fields.x = v44;
              v73.fields.z = v46;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v73, 0LL);
              IsServantLimitCountSeal = (System_String_o *)this->fields.cardBase;
              if ( IsServantLimitCountSeal )
              {
                v48 = this->fields.cardBasePosition.fields.x;
                v49 = this->fields.cardBasePosition.fields.y;
                v50 = this->fields.cardBasePosition.fields.z;
                IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                               0LL);
                if ( IsServantLimitCountSeal )
                {
                  v74.fields.y = v49 + v47;
                  v74.fields.x = v48;
                  v74.fields.z = v50;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsServantLimitCountSeal, v74, 0LL);
                  IsServantLimitCountSeal = (System_String_o *)this->fields.levelButtonBase;
                  if ( IsServantLimitCountSeal )
                  {
                    v51 = this->fields.levelButtonBasePosition.fields.x;
                    v52 = this->fields.levelButtonBasePosition.fields.y;
                    v53 = this->fields.levelButtonBasePosition.fields.z;
                    IsServantLimitCountSeal = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)IsServantLimitCountSeal,
                                                                   0LL);
                    if ( IsServantLimitCountSeal )
                    {
                      v75.fields.y = v52 + v47;
                      v75.fields.x = v51;
                      v75.fields.z = v53;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                        v75,
                        0LL);
                      v54 = this->fields.explanationBasePosition.fields.y - v47;
                      IsServantLimitCountSeal = (System_String_o *)this->fields.explanationLabel;
                      if ( v25 )
                        v54 = v54 + 16.0;
                      v55 = v35 ? v54 + 50.0 : v54;
                      if ( IsServantLimitCountSeal )
                      {
                        v56 = this->fields.explanationBasePosition.fields.x;
                        v57 = this->fields.explanationBasePosition.fields.z;
                        IsServantLimitCountSeal = (System_String_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)IsServantLimitCountSeal,
                                                                       0LL);
                        if ( IsServantLimitCountSeal )
                        {
                          v76.fields.x = v56;
                          v76.fields.y = v55;
                          v76.fields.z = v57;
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)IsServantLimitCountSeal,
                            v76,
                            0LL);
                          ServantStatusListViewItemDrawCommand__SetupBattleButton(this, item, 1, v58);
                          ServantStatusListViewItemDrawCommand__SetupMask(this, item, v35, v59);
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
      sub_B52A5C(IsServantLimitCountSeal, v10);
    }
    commandCardParam = item->fields.commandCardParam;
    v32 += 50;
    if ( commandCardParam )
    {
      v61 = commandCardParam->max_length;
      if ( v61 < 1 )
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
        v67 = v32 >= 0 ? v32 : v32 + 1;
        v68 = (float)-(v67 >> 1);
        GameObjectExtensions__SetLocalPositionY(this->fields.engraveCodeObject, v68, 0LL);
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
        GameObjectExtensions__SetLocalPositionY(gameObject, v68, 0LL);
        v35 = 1;
        goto LABEL_62;
      }
      v62 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v62 >= v61 )
        {
          v70 = sub_B52A88(IsEventJoin);
          sub_B52A28(v70, 0LL);
        }
        IsEventJoin = BalanceConfig_TypeInfo;
        v63 = commandCardParam->m_Items[v62 + 1];
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsEventJoin = BalanceConfig_TypeInfo;
        }
        if ( v63 < IsEventJoin->static_fields->CommandCardParamUpMax )
          break;
        v61 = commandCardParam->max_length;
        if ( (int)++v62 >= v61 )
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
    if ( v32 >= 0 )
      v65 = v32;
    else
      v65 = v32 + 1;
    GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v65 >> 1), 0LL);
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
  UICommonButton_o *Instance; // x0
  const MethodInfo *v7; // x1
  _BOOL4 v8; // w8
  int32_t ConvertOverwriteCommandCardLimitCount; // w0
  int32_t maxCommandCardLimitCount; // w22
  struct System_Int32_array *commandCardSelectList; // x23
  LocalizationManager_c *v12; // x0
  float *static_fields; // x8
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  float *v18; // x8
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  ServantLimitImageMaster_o *v23; // x25
  int v24; // w8
  ServantStatusListViewItemDrawCommand_o *v25; // x21
  System_String_o *v26; // x0
  int v27; // w9
  _BOOL4 v28; // w19
  struct UIRangeLabel_array *battleCharaLevelTitleRangeLabelList; // x10
  UIRangeLabel_o *v30; // x26
  int v31; // w20
  int v32; // w8
  float v33; // s3
  float v34; // s2
  float v35; // s1
  float v36; // s0
  System_String_o *v37; // x0
  System_String_o *v38; // x27
  System_String_o *v39; // x0
  struct UISprite_array *battleCharaLevelSpriteList; // x8
  __int64 *v41; // x8
  struct UICommonButton_array *battleCharaLevelButtonList; // x8
  const MethodInfo *v43; // x1
  struct UILabel_array *limitCountSealLabel; // x8
  UnityEngine_Object_o *v45; // x26
  struct UnityEngine_GameObject_array *limitCountSealObjList; // x8
  UnityEngine_Object_o *v47; // x27
  System_String_o *v48; // x1
  bool v49; // nf
  struct UICommonButton_array *v50; // x8
  __int64 v51; // x22
  il2cpp_array_size_t v52; // w27
  signed int max_length; // w24
  _BOOL4 v54; // w19
  struct UIRangeLabel_array *v55; // x9
  UIRangeLabel_o *v56; // x25
  int v57; // w20
  ServantCostumeEntity_o *Entity; // x0
  System_String_o *v59; // x26
  int v60; // w8
  float v61; // s3
  float v62; // s2
  float v63; // s1
  float v64; // s0
  struct UISprite_array *v65; // x8
  __int64 *v66; // x8
  struct UICommonButton_array *v67; // x8
  __int64 v68; // x0
  ServantCostumeMaster_o *v69; // [xsp+8h] [xbp-B8h]
  int32_t v70; // [xsp+14h] [xbp-ACh]
  _BOOL4 v72; // [xsp+1Ch] [xbp-A4h]
  ServantStatusListViewItemDrawCommand_o *v73; // [xsp+20h] [xbp-A0h]
  unsigned int v74; // [xsp+2Ch] [xbp-94h] BYREF
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B58A7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_8436/*"LIMIT_COUNT_SELECT_SEALED"*/);
    sub_B52984(&StringLiteral_12080/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_B52984(&StringLiteral_17083/*"btn_bg_20"*/);
    sub_B52984(&StringLiteral_12081/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_17084/*"btn_bg_21"*/);
    byte_42B58A7 = 1;
  }
  v74 = 0;
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_168:
    sub_B52A5C(Instance, v7);
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v69 = (ServantCostumeMaster_o *)Instance;
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
    v72 = 0;
    goto LABEL_13;
  }
  if ( item->fields.userSvtEntity )
    v8 = 1;
  else
    v8 = item->fields.userSvtCollectionEntity != 0LL;
  v72 = v8;
LABEL_13:
  ConvertOverwriteCommandCardLimitCount = ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(item, v7);
  maxCommandCardLimitCount = item->fields.maxCommandCardLimitCount;
  commandCardSelectList = item->fields.commandCardSelectList;
  v70 = ConvertOverwriteCommandCardLimitCount;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ACC22 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ACC22 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v12->static_fields;
  v14 = static_fields[20];
  v15 = static_fields[21];
  v16 = static_fields[22];
  v17 = static_fields[23];
  if ( !byte_42ACC23 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
    byte_42ACC23 = 1;
  }
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = LocalizationManager_TypeInfo;
  }
  v18 = (float *)v12->static_fields;
  v19 = v18[24];
  v20 = v18[25];
  v21 = v18[26];
  v22 = v18[27];
  Instance = (UICommonButton_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_168;
  Instance = (UICommonButton_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v74 = 0;
  v23 = (ServantLimitImageMaster_o *)Instance;
  v24 = 0;
  v25 = this;
  v73 = this;
  do
  {
    if ( v24 <= maxCommandCardLimitCount )
    {
      if ( !commandCardSelectList )
        goto LABEL_168;
      if ( v24 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v28 = commandCardSelectList->m_Items[v24 + 1] == v70;
      v27 = 1;
    }
    else
    {
      v27 = 0;
      v28 = 0;
    }
    battleCharaLevelTitleRangeLabelList = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !battleCharaLevelTitleRangeLabelList )
      goto LABEL_168;
    if ( v24 >= battleCharaLevelTitleRangeLabelList->max_length )
    {
LABEL_170:
      v68 = sub_B52A88(Instance);
      sub_B52A28(v68, 0LL);
    }
    v30 = battleCharaLevelTitleRangeLabelList->m_Items[v24];
    v31 = v27 & v72;
    if ( v27 || item->fields.servantLeaderInfo )
    {
      if ( !v30 )
        goto LABEL_168;
      v32 = v28 & v31;
      if ( (v28 & v31) != 0 )
        v33 = v22;
      else
        v33 = v17;
      if ( v32 )
        v34 = v21;
      else
        v34 = v16;
      if ( v32 )
        v35 = v20;
      else
        v35 = v15;
      if ( v32 )
        v36 = v19;
      else
        v36 = v14;
      UIRangeLabel__set_effectColor(v30, *(UnityEngine_Color_o *)(&v33 - 3), 0LL);
      v37 = System_Int32__ToString((int32_t)&v74, 0LL);
      v38 = System_String__Concat_44568316((System_String_o *)StringLiteral_12080/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v37, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = v38;
    }
    else
    {
      if ( !v30 )
        goto LABEL_168;
      v75.fields.r = v14;
      v75.fields.g = v15;
      v75.fields.b = v16;
      v75.fields.a = v17;
      UIRangeLabel__set_effectColor(v30, v75, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = (System_String_o *)StringLiteral_12081/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
    }
    v39 = LocalizationManager__Get(v26, 0LL);
    UIRangeLabel__Set(v30, v39, 0LL, 1, 0, 0LL);
    battleCharaLevelSpriteList = v25->fields.battleCharaLevelSpriteList;
    if ( !battleCharaLevelSpriteList )
      goto LABEL_168;
    if ( v74 >= battleCharaLevelSpriteList->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)battleCharaLevelSpriteList->m_Items[v74];
    if ( !Instance )
      goto LABEL_168;
    v41 = &StringLiteral_17083/*"btn_bg_20"*/;
    if ( v28 )
      v41 = &StringLiteral_17084/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v41, 0LL);
    battleCharaLevelButtonList = v25->fields.battleCharaLevelButtonList;
    if ( !battleCharaLevelButtonList )
      goto LABEL_168;
    if ( v74 >= battleCharaLevelButtonList->max_length )
      goto LABEL_170;
    Instance = battleCharaLevelButtonList->m_Items[v74];
    if ( (v28 & v31) != 0 )
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(Instance, 0, v31 == 0 || isInit, 0LL);
    }
    else
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetButtonEnable(Instance, v31 & ~v28, v31 == 0 || isInit, 0LL);
    }
    limitCountSealLabel = v25->fields.limitCountSealLabel;
    if ( limitCountSealLabel )
    {
      if ( v74 >= limitCountSealLabel->max_length )
        goto LABEL_170;
      v45 = (UnityEngine_Object_o *)limitCountSealLabel->m_Items[v74];
    }
    else
    {
      v45 = 0LL;
    }
    limitCountSealObjList = v73->fields.limitCountSealObjList;
    if ( limitCountSealObjList )
    {
      if ( v74 >= limitCountSealObjList->max_length )
        goto LABEL_170;
      v47 = (UnityEngine_Object_o *)limitCountSealObjList->m_Items[v74];
    }
    else
    {
      v47 = 0LL;
    }
    Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v43);
    if ( !commandCardSelectList )
      goto LABEL_168;
    if ( v74 >= commandCardSelectList->max_length )
      goto LABEL_170;
    if ( !v23 )
      goto LABEL_168;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(
           v23,
           (int32_t)Instance,
           commandCardSelectList->m_Items[v74 + 1] + 1,
           0LL) )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v47, 1, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Instance = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8436/*"LIMIT_COUNT_SELECT_SEALED"*/, 0LL);
        if ( !v45 )
          goto LABEL_168;
        v48 = (System_String_o *)Instance;
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
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_168;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v47, 0, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (UICommonButton_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_168;
        v48 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_110:
        UILabel__set_text((UILabel_o *)v45, v48, 0LL);
      }
    }
    this = v73;
    v49 = (int)(v74 - 2) < 0;
    v24 = ++v74;
  }
  while ( v49 != __OFSUB__(v74, 3) );
  v50 = v73->fields.battleCharaLevelButtonList;
  if ( !v50 )
    goto LABEL_168;
  v51 = 11LL;
  while ( 1 )
  {
    v52 = v51 - 8;
    if ( (int)v51 - 8 >= (signed int)v50->max_length )
      break;
    max_length = commandCardSelectList->max_length;
    if ( (int)v52 >= max_length )
    {
      v54 = 0;
    }
    else
    {
      if ( v52 >= max_length )
        goto LABEL_170;
      v54 = *((_DWORD *)&commandCardSelectList->obj.klass + v51) == v70;
    }
    v55 = this->fields.battleCharaLevelTitleRangeLabelList;
    if ( !v55 )
      goto LABEL_168;
    if ( v52 >= v55->max_length )
      goto LABEL_170;
    v56 = v55->m_Items[v52];
    v57 = v72 && (int)v52 < max_length;
    if ( (int)v52 >= max_length )
    {
      if ( !v56 )
        goto LABEL_168;
      UIRangeLabel__Clear(v56, 0LL);
    }
    else
    {
      Instance = (UICommonButton_o *)ServantStatusListViewItem__get_SvtId(item, v7);
      if ( v52 >= commandCardSelectList->max_length )
        goto LABEL_170;
      v7 = (const MethodInfo *)(unsigned int)Instance;
      Instance = (UICommonButton_o *)v69;
      if ( !v69 )
        goto LABEL_168;
      Entity = ServantCostumeMaster__GetEntity(v69, (int32_t)v7, commandCardSelectList->m_Items[v52 + 1], 0LL);
      if ( Entity )
      {
        Instance = (UICommonButton_o *)ServantCostumeEntity__getShortName(Entity, 0LL);
        v59 = (System_String_o *)Instance;
        if ( !v56 )
          goto LABEL_168;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        if ( !byte_42ADEE6 )
        {
          sub_B52984(&LocalizationManager_TypeInfo);
          byte_42ADEE6 = 1;
        }
        Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UICommonButton_o *)LocalizationManager_TypeInfo;
        }
        v59 = *(System_String_o **)(*(_QWORD *)&Instance[1].fields.specifyPressedColor.fields.b + 32LL);
        if ( !v56 )
          goto LABEL_168;
      }
      v60 = v54 & v57;
      if ( (v54 & v57) != 0 )
        v61 = v22;
      else
        v61 = v17;
      if ( v60 )
        v62 = v21;
      else
        v62 = v16;
      if ( v60 )
        v63 = v20;
      else
        v63 = v15;
      if ( v60 )
        v64 = v19;
      else
        v64 = v14;
      UIRangeLabel__set_effectColor(v56, *(UnityEngine_Color_o *)(&v61 - 3), 0LL);
      UIRangeLabel__Set(v56, v59, 0LL, 1, 0, 0LL);
      this = v73;
    }
    v65 = this->fields.battleCharaLevelSpriteList;
    if ( !v65 )
      goto LABEL_168;
    if ( v52 >= v65->max_length )
      goto LABEL_170;
    Instance = (UICommonButton_o *)v65->m_Items[v52];
    if ( !Instance )
      goto LABEL_168;
    v66 = &StringLiteral_17083/*"btn_bg_20"*/;
    if ( v54 )
      v66 = &StringLiteral_17084/*"btn_bg_21"*/;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v66, 0LL);
    v67 = this->fields.battleCharaLevelButtonList;
    if ( !v67 )
      goto LABEL_168;
    if ( v52 >= v67->max_length )
      goto LABEL_170;
    Instance = v67->m_Items[v52];
    if ( (v54 & v57) != 0 )
    {
      if ( !Instance )
        goto LABEL_168;
      UICommonButton__SetColliderEnable(Instance, 0, v57 == 0 || isInit, 0LL);
    }
    else if ( (int)v52 >= max_length )
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
      UICommonButton__SetButtonEnable(Instance, v57 & ~v54, v57 == 0 || isInit, 0LL);
    }
    v50 = this->fields.battleCharaLevelButtonList;
    ++v51;
    if ( !v50 )
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
  if ( (byte_42B58A8 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawCommand_o *)sub_B52984(&StringLiteral_12101/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/);
    byte_42B58A8 = 1;
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
    v9 = (UnityEngine_GameObject_o *)this;
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
    v9 = (UnityEngine_GameObject_o *)this;
    this = (ServantStatusListViewItemDrawCommand_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v6->fields.baseSprite,
                                                       0LL);
    if ( !this )
      goto LABEL_34;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    y = v14.fields.y;
  }
  GameObjectExtensions__SetLocalPositionY(v9, y, 0LL);
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
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_COMMAND"*/, 0LL);
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
    sub_B52A5C(this, item);
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