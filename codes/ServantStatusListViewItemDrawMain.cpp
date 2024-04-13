void __fastcall ServantStatusListViewItemDrawMain___ctor(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__Awake(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusListViewItemDrawMain__GetKind(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall ServantStatusListViewItemDrawMain__GetServantLimitCount(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42ECB5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, svtId, limitCount, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42ECB5F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           limitCount,
           0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyPortrait(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewItemDrawMain_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t SvtId; // w21
  int32_t ConvertOverwritePortraitLimitCount; // w22
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v12; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v15; // w20
  int32_t v16; // w19

  v5 = this;
  if ( (byte_42ECB61 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    this = (ServantStatusListViewItemDrawMain_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v6, v7, v8);
    byte_42ECB61 = 1;
  }
  if ( LOBYTE(v5[1].klass) )
  {
    if ( !item )
      sub_B5D69C(this, item);
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = (ServantStatusListViewItemDrawMain_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                               ConvertOverwritePortraitLimitCount,
                                                                               0LL);
    ServantLimitCount = ServantStatusListViewItemDrawMain__GetServantLimitCount(
                          LimitCountByImageLimitCostumeIn,
                          SvtId,
                          (int32_t)LimitCountByImageLimitCostumeIn,
                          v12);
    levelLabel = (UITexture_o *)v5->fields.levelLabel;
    v15 = ServantLimitCount;
    v16 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v16, v15, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  RandomLimitCountManager_c *v12; // x0
  int32_t SvtId; // w21
  int32_t ConvertOverwritePortraitLimitCount; // w22
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v16; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v19; // w20
  int32_t v20; // w19

  if ( (byte_42ECB62 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    byte_42ECB62 = 1;
  }
  if ( LOBYTE(this[1].klass) )
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
    v12 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v12 = RandomLimitCountManager_TypeInfo;
    }
    if ( v12->static_fields->enableRandomLimitCount )
    {
      if ( !item )
        sub_B5D69C(v12, item);
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
      ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimitCostumeIn = (ServantStatusListViewItemDrawMain_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                                 ConvertOverwritePortraitLimitCount,
                                                                                 0LL);
      ServantLimitCount = ServantStatusListViewItemDrawMain__GetServantLimitCount(
                            LimitCountByImageLimitCostumeIn,
                            SvtId,
                            (int32_t)LimitCountByImageLimitCostumeIn,
                            v16);
      levelLabel = (UITexture_o *)this->fields.levelLabel;
      v19 = ServantLimitCount;
      v20 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__loadStatusFace(levelLabel, v20, v19, 0LL);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyStatus(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewItemDrawMain_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t SvtId; // w0
  int32_t v10; // w20
  int32_t ConvertOverwritePortraitLimitCount; // w21
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v13; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v16; // w19

  v5 = this;
  if ( (byte_42ECB60 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    this = (ServantStatusListViewItemDrawMain_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v6, v7, v8);
    byte_42ECB60 = 1;
  }
  if ( !item )
    sub_B5D69C(this, item);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( SvtId >= 1 )
  {
    v10 = SvtId;
    LOBYTE(v5[1].klass) = 1;
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = (ServantStatusListViewItemDrawMain_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                               ConvertOverwritePortraitLimitCount,
                                                                               0LL);
    ServantLimitCount = ServantStatusListViewItemDrawMain__GetServantLimitCount(
                          LimitCountByImageLimitCostumeIn,
                          v10,
                          (int32_t)LimitCountByImageLimitCostumeIn,
                          v13);
    levelLabel = (UITexture_o *)v5->fields.levelLabel;
    v16 = ServantLimitCount;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v10, v16, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
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
  struct UILabel_o *maxLevelLabel; // x21
  System_String_o *svtEntity; // x0
  __int64 v21; // x1
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  bool IsStatusUp; // w0
  UIIconLabel_o *hpIconLabel; // x21
  bool v26; // w23
  int32_t Atk; // w22
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  UIIconLabel_o *v29; // x21
  int32_t Hp; // w22
  int32_t AdjustAtk; // w0
  UIIconLabel_o *reinforceAttackMaxLabel; // x21
  int32_t v33; // w24
  int v34; // w22
  BalanceConfig_c *v35; // x8
  int32_t AdjustHp; // w0
  UIIconLabel_o *reinforceHpMaxLabel; // x21
  int32_t v38; // w25
  BalanceConfig_c *v39; // x8
  int v40; // w22
  System_String_o *v41; // x1
  UILabel_o *expBar; // x21
  int32_t v43; // w22
  ServantStatusLimitCountGauge_o *tdStrengthStatusSprite; // x21
  struct ServantEntity_o *v45; // x8
  UnityEngine_Object_o *skillStrengthStatusLabelList; // x21
  UISprite_o *v47; // x21
  SkillInfo_array *v48; // x8
  __int64 v49; // x9
  unsigned int v50; // w25
  unsigned __int64 v51; // x26
  signed __int64 v52; // x27
  int *v53; // x22
  int32_t v54; // w21
  int32_t IconCnt; // w21
  int32_t v56; // w22
  int32_t i; // w24
  struct ServantStatusFriendshipGauge_o *friendshipGauge; // x8
  UISprite_o *v59; // x23
  System_String_o *ICON_SKILL_OFF; // x1
  struct ServantStatusFriendshipGauge_o *v61; // x8
  int levelLabel; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *servantTexture; // x21
  int v66; // w21
  int v67; // w22
  int v68; // w8
  UnityEngine_GameObject_o *levelExceedButton; // x0
  int v70; // s0
  bool IsEventJoin; // w0
  struct UnityEngine_GameObject_o *limitCountUpObject; // x8
  struct UnityEngine_GameObject_o *bondLimitUpObject; // x8
  int v74; // s0
  int v76; // s1
  struct UnityEngine_GameObject_o *levelExceedObject; // x8
  __int64 v78; // x8
  __int64 v79; // x0
  int32_t maxFriendshipRank[2]; // [xsp+10h] [xbp-A0h] BYREF
  __int64 fraction; // [xsp+18h] [xbp-98h] BYREF
  int32_t max[2]; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+30h] [xbp-80h] BYREF
  __int64 barExp; // [xsp+38h] [xbp-78h] BYREF
  int32_t exp[2]; // [xsp+40h] [xbp-70h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxAjustAtk; // [xsp+58h] [xbp-58h] BYREF
  int32_t maxAjustHp; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_42ECB5E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42ECB5E = 1;
  }
  maxAjustHp = 0;
  maxAjustAtk = 0;
  *(_QWORD *)exp = 0LL;
  secondMaxAdjustAtk = 0LL;
  tdInfo = 0LL;
  barExp = 0LL;
  *(_QWORD *)max = 0LL;
  skillInfoList = 0LL;
  *(_QWORD *)maxFriendshipRank = 0LL;
  fraction = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    maxLevelLabel = this->fields.maxLevelLabel;
    exp[1] = ServantStatusListViewItem__get_Level(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !maxLevelLabel )
      goto LABEL_181;
    UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, svtEntity, 0LL);
    attackIconLabel = this->fields.attackIconLabel;
    exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !attackIconLabel )
      goto LABEL_181;
    UILabel__set_text((UILabel_o *)attackIconLabel, svtEntity, 0LL);
    expBase = this->fields.expBase;
    exp[1] = ServantStatusListViewItem__get_Cost(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !expBase )
      goto LABEL_181;
    UILabel__set_text((UILabel_o *)expBase, svtEntity, 0LL);
    svtEntity = (System_String_o *)item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_181;
    IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0LL);
    hpIconLabel = this->fields.hpIconLabel;
    v26 = IsStatusUp;
    Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
    if ( v26 )
    {
      svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !hpIconLabel )
        goto LABEL_181;
      UIIconLabel__Set_41886452(
        hpIconLabel,
        39,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * Atk,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      reinforceAttackIconLabel = this->fields.reinforceAttackIconLabel;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_Hp(item, 0LL);
      if ( !reinforceAttackIconLabel )
        goto LABEL_181;
      UIIconLabel__Set_41886452(
        reinforceAttackIconLabel,
        38,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * (_DWORD)svtEntity,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else
    {
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      if ( !hpIconLabel )
        goto LABEL_181;
      UIIconLabel__Set_41886452(hpIconLabel, 5, Atk, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
      v29 = this->fields.reinforceAttackIconLabel;
      Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      if ( !v29 )
        goto LABEL_181;
      UIIconLabel__Set_41886452(v29, 3, Hp, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
    }
    if ( ServantStatusListViewItem__GetAdjustMax(
           item,
           &maxAjustHp,
           &maxAjustAtk,
           (int32_t *)&secondMaxAdjustAtk + 1,
           (int32_t *)&secondMaxAdjustAtk,
           0LL) )
    {
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      reinforceAttackMaxLabel = (UIIconLabel_o *)this->fields.reinforceAttackMaxLabel;
      if ( AdjustAtk >= maxAjustAtk )
        v33 = secondMaxAdjustAtk;
      else
        v33 = maxAjustAtk;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      v34 = (int)svtEntity;
      v35 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceAttackMaxLabel )
        goto LABEL_181;
      UIIconLabel__Set_41886452(
        reinforceAttackMaxLabel,
        45,
        v35->static_fields->StatusUpAdjustHp * v34,
        v35->static_fields->StatusUpAdjustHp * v33,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      reinforceHpMaxLabel = (UIIconLabel_o *)this->fields.reinforceHpMaxLabel;
      if ( AdjustHp >= maxAjustHp )
        v38 = HIDWORD(secondMaxAdjustAtk);
      else
        v38 = maxAjustHp;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      v39 = BalanceConfig_TypeInfo;
      v40 = (int)svtEntity;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v39 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceHpMaxLabel )
        goto LABEL_181;
      UIIconLabel__Set_41886452(
        reinforceHpMaxLabel,
        44,
        v39->static_fields->StatusUpAdjustHp * v40,
        v39->static_fields->StatusUpAdjustHp * v38,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      svtEntity = (System_String_o *)this->fields.costLabel;
      if ( !svtEntity )
        goto LABEL_181;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.costLabel;
      if ( !svtEntity )
        goto LABEL_181;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)svtEntity, v41, 0LL);
    svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                     item,
                                     exp,
                                     (int32_t *)&barExp + 1,
                                     (float *)&barExp,
                                     0LL);
    if ( !this->fields.lateExpBase )
      goto LABEL_181;
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
      svtEntity = (System_String_o *)this->fields.lateExpLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0LL);
      expBar = (UILabel_o *)this->fields.expBar;
      v43 = HIDWORD(barExp);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      svtEntity = LocalizationManager__GetNumberFormat(v43, 0LL);
      if ( !expBar )
        goto LABEL_181;
      UILabel__set_text(expBar, svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.limitCountGauge;
      if ( !svtEntity )
        goto LABEL_181;
      UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
    }
    tdStrengthStatusSprite = (ServantStatusLimitCountGauge_o *)this->fields.tdStrengthStatusSprite;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
    v45 = item->fields.svtEntity;
    if ( !v45 || !tdStrengthStatusSprite )
      goto LABEL_181;
    ServantStatusLimitCountGauge__Set(tdStrengthStatusSprite, (int32_t)svtEntity, v45->fields.limitMax, 0LL);
    skillStrengthStatusLabelList = (UnityEngine_Object_o *)this->fields.skillStrengthStatusLabelList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatusLabelList, 0LL, 0LL) )
    {
      svtEntity = (System_String_o *)ServantStatusListViewItem__GetNpInfo(item, &tdInfo, 0LL);
      if ( !tdInfo )
        goto LABEL_181;
      v47 = (UISprite_o *)this->fields.skillStrengthStatusLabelList;
      svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                    tdInfo->fields.strengthStatus,
                    tdInfo->fields.treasureDeviceNum,
                    0LL);
      if ( !v47 )
        goto LABEL_181;
      UISprite__set_spriteName(v47, svtEntity, 0LL);
    }
    if ( this->fields.friendshipGauge )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
      v48 = skillInfoList;
      if ( skillInfoList )
      {
        v49 = *(_QWORD *)&skillInfoList->max_length;
        if ( (int)v49 >= 1 )
        {
          v50 = 0;
          v51 = 0LL;
          v52 = (int)v49;
          while ( v51 < v48->max_length )
          {
            v53 = (int *)v48->m_Items[v51];
            if ( v53 && v53[4] >= 1 && v53[12] )
            {
              v54 = v53[13];
              if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
              }
              IconCnt = ServantSkillStrengthStatus__GetIconCnt(v54, 0LL);
              svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v53[12], v53[13], 0LL);
              if ( IconCnt >= 1 )
              {
                v56 = (int)svtEntity;
                for ( i = 0; i < IconCnt; ++i )
                {
                  friendshipGauge = this->fields.friendshipGauge;
                  if ( !friendshipGauge )
                    goto LABEL_181;
                  if ( v50 + i >= LODWORD(friendshipGauge->fields.levelLabel) )
                    goto LABEL_182;
                  svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                  v59 = (UISprite_o *)*((_QWORD *)&friendshipGauge->fields.maxLevelLabel + (int)(v50 + i));
                  if ( i >= v56 )
                  {
                    if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    if ( !v59 )
                      goto LABEL_181;
                    ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_OFF;
                  }
                  else
                  {
                    if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    if ( !v59 )
                      goto LABEL_181;
                    ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_ON;
                  }
                  UISprite__set_spriteName(v59, ICON_SKILL_OFF, 0LL);
                }
                v50 += i;
              }
            }
            if ( (__int64)++v51 >= v52 )
              goto LABEL_93;
            v48 = skillInfoList;
            if ( !skillInfoList )
              goto LABEL_181;
          }
LABEL_182:
          v79 = sub_B5D6C8(svtEntity);
          sub_B5D668(v79, 0LL);
        }
      }
      v50 = 0;
LABEL_93:
      v61 = this->fields.friendshipGauge;
      if ( !v61 )
        goto LABEL_181;
      levelLabel = (int)v61->fields.levelLabel;
      if ( (int)v50 < levelLabel )
      {
        while ( v50 < LODWORD(v61->fields.levelLabel) )
        {
          svtEntity = (System_String_o *)*((_QWORD *)&v61->fields.maxLevelLabel + (int)v50);
          if ( !svtEntity )
            goto LABEL_181;
          UISprite__set_spriteName((UISprite_o *)svtEntity, 0LL, 0LL);
          if ( (int)++v50 >= levelLabel )
            goto LABEL_100;
          v61 = this->fields.friendshipGauge;
          if ( !v61 )
            goto LABEL_181;
        }
        goto LABEL_182;
      }
    }
LABEL_100:
    svtEntity = (System_String_o *)this->fields.eventJoinIcon;
    if ( !svtEntity )
      goto LABEL_181;
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
    if ( !svtEntity )
      goto LABEL_181;
    if ( userSvtCollectionEntity )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      ServantStatusListViewItem__GetFriendshipInfo(
        item,
        &max[1],
        max,
        (int32_t *)&fraction + 1,
        (float *)&fraction,
        0LL);
      svtEntity = (System_String_o *)this->fields.eventJoinIcon;
      if ( !svtEntity )
        goto LABEL_181;
      ServantStatusFriendshipGauge__Set(
        (ServantStatusFriendshipGauge_o *)svtEntity,
        max[1],
        max[0],
        SHIDWORD(fraction),
        *(float *)&fraction,
        0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    svtEntity = (System_String_o *)this->fields.baseSprite;
    if ( !svtEntity
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL),
          svtEntity = (System_String_o *)ServantStatusListViewItem__get_IsEventJoin(item, 0LL),
          !gameObject) )
    {
LABEL_181:
      sub_B5D69C(svtEntity, v21);
    }
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0LL);
    servantTexture = (UnityEngine_Object_o *)this->fields.servantTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__op_Inequality(servantTexture, 0LL, 0LL);
    if ( item->fields._IsDisplayCombineButton_k__BackingField )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( svtEntity )
      {
        maxFriendshipRank[0] = -1;
        maxFriendshipRank[1] = -1;
        if ( item->fields.userSvtCollectionEntity )
        {
          UserServantCollectionEntity__getFriendShipRankInfo(
            item->fields.userSvtCollectionEntity,
            &maxFriendshipRank[1],
            maxFriendshipRank,
            0LL);
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
        }
        if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_116;
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL);
        v66 = 0;
        if ( maxFriendshipRank[1] == maxFriendshipRank[0]
          && !IsEventJoin
          && ((maxFriendshipRank[0] | maxFriendshipRank[1]) & 0x80000000) == 0 )
        {
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)svtEntity, 0LL) )
          {
LABEL_116:
            v66 = 0;
            goto LABEL_117;
          }
          svtEntity = (System_String_o *)this->fields.bondLimitUpButton;
          if ( !svtEntity )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          limitCountUpObject = this->fields.limitCountUpObject;
          if ( !limitCountUpObject )
            goto LABEL_181;
          BYTE1(limitCountUpObject[3].fields.m_CachedPtr) = 1;
          svtEntity = (System_String_o *)this->fields.limitCountUpObject;
          if ( !svtEntity )
            goto LABEL_181;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          v66 = 1;
        }
LABEL_117:
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_123;
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_123;
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
LABEL_123:
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_131;
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_131;
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_131;
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__isExceedLvMax((UserServantEntity_o *)svtEntity, 0LL) )
          {
LABEL_131:
            v67 = 0;
LABEL_132:
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0LL) )
              goto LABEL_134;
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
              goto LABEL_153;
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)svtEntity, 0LL) )
              goto LABEL_153;
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)svtEntity, 0LL) )
            {
LABEL_134:
              v68 = 0;
              if ( !v66 )
              {
LABEL_157:
                if ( v67 )
                {
                  if ( v68 )
                    GameObjectExtensions__SetLocalPositionX(
                      (UnityEngine_GameObject_o *)this->fields.reinforceButton,
                      100.0,
                      0LL);
                  GameObjectExtensions__SetLocalPositionX(
                    (UnityEngine_GameObject_o *)this->fields.limitCountUpButton,
                    220.0,
                    0LL);
                  levelExceedButton = (UnityEngine_GameObject_o *)this->fields.levelExceedButton;
                  v70 = 1130102784;
                }
                else
                {
                  if ( !v68 )
                    return;
                  levelExceedButton = (UnityEngine_GameObject_o *)this->fields.reinforceButton;
                  v70 = 1130102784;
                }
                goto LABEL_163;
              }
            }
            else
            {
LABEL_153:
              svtEntity = (System_String_o *)this->fields.reinforceButton;
              if ( !svtEntity )
                goto LABEL_181;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
              bondLimitUpObject = this->fields.bondLimitUpObject;
              if ( !bondLimitUpObject )
                goto LABEL_181;
              BYTE1(bondLimitUpObject[3].fields.m_CachedPtr) = 1;
              svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
              if ( !svtEntity )
                goto LABEL_181;
              UICommonButton__SetEnable(
                (UICommonButton_o *)svtEntity,
                item->fields._CanMoveCombine_k__BackingField,
                0LL);
              v68 = 1;
              if ( !v66 )
                goto LABEL_157;
            }
            if ( ((v67 | v68 ^ 1) & 1) != 0 )
            {
LABEL_164:
              svtEntity = (System_String_o *)this->fields.reinforceObject;
              if ( svtEntity )
              {
                svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
                if ( svtEntity )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
                  svtEntity = (System_String_o *)this->fields.baseCollider;
                  if ( svtEntity )
                  {
                    UIWidget__set_height((UIWidget_o *)svtEntity, 362, 0LL);
                    svtEntity = (System_String_o *)this->fields.baseUi;
                    if ( svtEntity )
                    {
                      *(UnityEngine_Vector3_o *)&v74 = UnityEngine_BoxCollider__get_size(
                                                         (UnityEngine_BoxCollider_o *)svtEntity,
                                                         0LL);
                      svtEntity = (System_String_o *)this->fields.baseUi;
                      if ( svtEntity )
                      {
                        v76 = 1135935488;
                        UnityEngine_BoxCollider__set_size(
                          (UnityEngine_BoxCollider_o *)svtEntity,
                          *(UnityEngine_Vector3_o *)&v74,
                          0LL);
                        GameObjectExtensions__SetLocalPositionY(
                          (UnityEngine_GameObject_o *)this->fields.reinforceMaskSprite,
                          23.0,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
              goto LABEL_181;
            }
            levelExceedButton = (UnityEngine_GameObject_o *)this->fields.reinforceButton;
            v70 = 1120403456;
LABEL_163:
            GameObjectExtensions__SetLocalPositionX(levelExceedButton, *(float *)&v70, 0LL);
            goto LABEL_164;
          }
          svtEntity = (System_String_o *)this->fields.levelExceedButton;
          if ( !svtEntity )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          v78 = *(_QWORD *)&this->fields.isStart;
          if ( !v78 )
            goto LABEL_181;
          *(_BYTE *)(v78 + 89) = 1;
          svtEntity = *(System_String_o **)&this->fields.isStart;
          if ( !svtEntity )
            goto LABEL_181;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          svtEntity = (System_String_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_181;
        }
        else
        {
          svtEntity = (System_String_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          levelExceedObject = this->fields.levelExceedObject;
          if ( !levelExceedObject )
            goto LABEL_181;
          BYTE1(levelExceedObject[3].fields.m_CachedPtr) = 1;
          svtEntity = (System_String_o *)this->fields.levelExceedObject;
          if ( !svtEntity )
            goto LABEL_181;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          svtEntity = (System_String_o *)this->fields.levelExceedButton;
          if ( !svtEntity )
            goto LABEL_181;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        v67 = 1;
        goto LABEL_132;
      }
    }
  }
}