void BattleServantSkillIConComponent___ctor(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  this->fields.isNoSkillSprite = 1;
  this->fields.changeTimeSealSprite = 3.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantSkillIConComponent__ClickSkillIconFunc(
        BattleServantSkillIConComponent_o *this,
        bool isLong,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v7; // x21

  if ( (byte_4C3B0BB & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0BB = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_16;
    BattleServantParamComponent__clickSkillIcon(
      (BattleServantParamComponent_o *)Component_object,
      this->fields.skillInfo,
      isLong,
      0);
  }
  target = this->fields.target;
  if ( !target )
LABEL_16:
    sub_1C32E7C(target);
  v7 = UnityEngine_GameObject__GetComponent_object_(
         target,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v7 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v7, this->fields.skillInfo, isLong, 0);
      return;
    }
    goto LABEL_16;
  }
}


void BattleServantSkillIConComponent__DeleteRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o **p_rankupEffect; // x20
  UnityEngine_Object_o *rankupEffect; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B0BE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0BE = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0, 0) )
  {
    if ( !*p_rankupEffect )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    this->fields.rankupEffect = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rankupEffect, 0, v6, v7);
    this->fields.rankupSprite = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rankupSprite, 0, v8, v9);
  }
}


int32_t BattleServantSkillIConComponent__GetRankUpState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 naturalAligment; // x11
  BattleRankUpSkillInfoData_c *v5; // x10
  BattleRankUpSkillInfoData_o *v6; // x0

  if ( (byte_4C3B0C0 & 1) == 0 )
  {
    sub_1C32C20(&BattleRankUpSkillInfoData_TypeInfo);
    byte_4C3B0C0 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return -1;
  naturalAligment = BattleRankUpSkillInfoData_TypeInfo->_2.naturalAligment;
  if ( skillInfo->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return -1;
  v5 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[naturalAligment - 1];
  v6 = v5 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
  if ( v5 != BattleRankUpSkillInfoData_TypeInfo )
    return -1;
  if ( !v6 )
    sub_1C32E7C(0);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0);
}


void BattleServantSkillIConComponent__OnClickIcon(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3B0BA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0BA = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 0, v4);
}


void BattleServantSkillIConComponent__OnLongTapIcon(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3B0B9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0B9 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 1, v4);
}


bool BattleServantSkillIConComponent__PlayRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        System_String_o *resPath,
        UnityEngine_GameObject_o *root,
        bool isSkip,
        const MethodInfo *method)
{
  BattleServantSkillIConComponent_o *v8; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object_41085732; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v8 = this;
  if ( (byte_4C3B0BF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (BattleServantSkillIConComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0BF = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0);
  Object_41085732 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_41085732(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0,
                                              0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_41085732, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_41085732 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_41085732,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.rankupEffect, (int32_t)Component_object, v13, v14);
    rankupEffect = (UnityEngine_Object_o *)v8->fields.rankupEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rankupEffect, 0, 0) )
    {
      this = *p_rankupEffect;
      if ( *p_rankupEffect )
      {
        CommonEffectComponent__Init((CommonEffectComponent_o *)this, isSkip, 0, 0);
        this = *p_rankupEffect;
        if ( *p_rankupEffect )
        {
          ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__51199524;
          sub_1C32BC4(
            (CGThumbnailListItem_o *)&v8->fields.rankupSprite,
            (int32_t)ComponentInChildren_object__51199524,
            v17,
            v18);
          return 1;
        }
      }
LABEL_15:
      sub_1C32E7C(this);
    }
  }
  return 0;
}


void BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !BattleServantSkillIConComponent__GetRankUpState(this, method) )
    BattleServantSkillIConComponent__DeleteRankUpEffect(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantSkillIConComponent__SetSkillInfo(
        BattleServantSkillIConComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isActSkill,
        int32_t sealSkillTurn,
        int32_t noActTurn,
        bool IsSealSkillSelect,
        const MethodInfo *method)
{
  int32_t v9; // w21
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v16; // x2
  struct UISprite_o *skillIcon; // x8
  float v18; // s0 OVERLAPPED
  float v19; // s3
  float v20; // s1
  float v21; // s2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  int32_t ChargeTurn; // w0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  char v29; // w2
  const MethodInfo *v30; // x3
  struct UISprite_o *v31; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  UISprite_o *v38; // x22
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1

  v9 = sealSkillTurn;
  if ( (byte_4C3B0B0 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20224/*"icon_sealact_skill"*/);
    sub_1C32C20(&StringLiteral_20222/*"icon_sealact_disable"*/);
    sub_1C32C20(&StringLiteral_20223/*"icon_sealact_seal"*/);
    byte_4C3B0B0 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    isActSkill,
    *(const MethodInfo **)&sealSkillTurn);
  root = this->fields.root;
  if ( !root )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(root, 1, 0);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v14);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(turnNoLabelBase, 0, 0);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( !skillInfo )
      goto LABEL_49;
    if ( skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)this->fields.turnNoLabelBase;
      if ( !root )
        goto LABEL_49;
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0);
      if ( !root )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive(root, 0, 0);
    }
  }
  if ( this->fields.showType == 2 )
  {
    BattleServantSkillIConComponent__setCollider(this, 0, v16);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_49;
    if ( !skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)BattleSkillInfoData__IsAvailable(skillInfo, 0);
      skillIcon = this->fields.skillIcon;
      if ( ((unsigned __int8)root & 1) != 0 )
      {
        if ( !skillIcon )
          goto LABEL_49;
        v18 = 1.0;
        v19 = 1.0;
      }
      else
      {
        if ( !skillIcon )
          goto LABEL_49;
        v19 = 1.0;
        v18 = 0.5;
      }
      v20 = v18;
      v21 = v18;
      UIWidget__set_color((UIWidget_o *)this->fields.skillIcon, *(UnityEngine_Color_o *)&v18, 0);
      BattleServantSkillIConComponent__setCollider(this, 1, v22);
      BattleServantSkillIConComponent__updateFlashSkill(this, v23);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v25);
    }
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0, 0) )
  {
    defaultNoActAtlas = (UnityEngine_Object_o *)this->fields.defaultNoActAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(defaultNoActAtlas, 0, 0);
    if ( ((unsigned __int8)root & 1) != 0 )
    {
      v31 = this->fields.noActSprite;
      if ( !v31 )
        goto LABEL_49;
      mAtlas = v31->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultNoActAtlas, (int32_t)mAtlas, v29, v30);
    }
    root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
    if ( root )
    {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0);
      if ( root )
      {
        if ( !(noActTurn | v9) )
        {
          UnityEngine_GameObject__SetActive(root, 0, 0);
          BattleServantSkillIConComponent__stopSealActSprite(this, v39);
          goto LABEL_46;
        }
        UnityEngine_GameObject__SetActive(root, 1, 0);
        this->fields.flashFlg = 0;
        BattleServantSkillIConComponent__updateFlashSkill(this, v33);
        if ( !v9 || noActTurn )
        {
          if ( v9 || !noActTurn )
          {
            BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v9, 0, v35);
            if ( isActSkill )
              goto LABEL_46;
            goto LABEL_45;
          }
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20224/*"icon_sealact_skill"*/,
            v34);
          BattleServantSkillIConComponent__stopSealActSprite(this, v40);
          v9 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20223/*"icon_sealact_seal"*/,
            v34);
          BattleServantSkillIConComponent__stopSealActSprite(this, v36);
          if ( IsSealSkillSelect )
          {
            v38 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(v38, (System_String_o *)StringLiteral_20222/*"icon_sealact_disable"*/, 0);
            if ( isActSkill )
              goto LABEL_46;
LABEL_45:
            BattleServantSkillIConComponent__setTurnLabel(this, v9, v37);
            goto LABEL_46;
          }
        }
        if ( isActSkill )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1C32E7C(root);
  }
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v27);
  BattleServantSkillIConComponent__SetUseCond(this, v41);
}


void BattleServantSkillIConComponent__SetUseCond(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *useCondRoot; // x20
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  UnityEngine_Object_o *v16; // x22
  UISprite_o *v17; // x22
  int32_t monitor; // w23
  int32_t v19; // w0
  int num; // w8
  Il2CppObject *MasterData_object; // x22
  int64_t v22; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v24; // x23
  UserItemEntity_o *v25; // x22
  bool v26; // w0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  UISprite_o *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x23
  ItemMaster_o *v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  UISprite_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x22
  UnityEngine_Object_o *v46; // x21
  UILabel_o *v47; // x19
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  Il2CppObject *v54; // x1
  System_String_o *v55; // x0
  bool IsOpenCond; // w0
  System_String_o *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  int32_t chargeTurn_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t v66; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C3B0C2 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_987/*"-{0}"*/);
    sub_1C32C20(&StringLiteral_2800/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_1C32C20(&StringLiteral_23519/*"skill_item_{0}"*/);
    byte_4C3B0C2 = 1;
  }
  entity = 0;
  useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondRoot, 0, 0) )
    return;
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_86;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__HasCond(skillInfo, 0);
  if ( !this->fields.useCondRoot )
    goto LABEL_86;
  if ( ((unsigned __int8)skillInfo & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0);
  v66 = 0;
  p_useCondItemIcon = &this->fields.useCondItemIcon;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondItemIcon, 0, 0) )
  {
    skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_86;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)skillInfo,
                                   (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useCondItemIcon, (int32_t)ComponentInChildren_object, v8, v9);
  }
  p_useCondItemCountLabel = &this->fields.useCondItemCountLabel;
  useCondItemCountLabel = (UnityEngine_Object_o *)this->fields.useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondItemCountLabel, 0, 0) )
  {
    skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_86;
    v12 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useCondItemCountLabel, (int32_t)v12, v13, v14);
  }
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)skillInfo,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !v15 )
    goto LABEL_86;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v15,
          &entity,
          (int32_t)skillInfo,
          (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v16 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = (BattleSkillInfoData_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( ((unsigned __int8)skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_86;
    v17 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)AtlasManager__SetItem(v17, monitor, 0);
  }
  if ( !entity )
LABEL_86:
    sub_1C32E7C(skillInfo);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_86;
    v19 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0);
    if ( v19 >= 999 )
      num = 999;
    else
      num = v19;
    goto LABEL_67;
  }
LABEL_38:
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v22 = *(_QWORD *)(*(_QWORD *)&skillInfo->fields.hasAddBattlePointFunc.fields.hasValue + 64LL);
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !MasterData_object )
    goto LABEL_86;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)MasterData_object,
                       v22,
                       (int32_t)skillInfo,
                       0);
  v24 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v25 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v26 = UnityEngine_Object__op_Inequality(v24, 0, 0);
  if ( v25 )
  {
    if ( v26 )
    {
      skillInfo = (BattleSkillInfoData_o *)UserItemEntity__getItemInfo(v25, 0);
      v33 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(
                                int_TypeInfo,
                                &chargeTurn_k__BackingField,
                                v27,
                                v28,
                                v29,
                                v30,
                                v31,
                                v32);
        v35 = System_String__Format((System_String_o *)StringLiteral_23519/*"skill_item_{0}"*/, v34, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v33, v35, 0);
      }
      else
      {
        if ( !v33 )
          goto LABEL_86;
        UISprite__set_spriteName(v33, string_TypeInfo->static_fields->Empty, 0);
      }
    }
    num = v25->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_67:
    v66 = num;
    goto LABEL_68;
  }
  if ( v26 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)skillInfo,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_86;
    v36 = (ItemMaster_o *)skillInfo;
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
    if ( !v36 )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)ItemMaster__GetItemData(v36, (int32_t)skillInfo, -1, 0);
    v43 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(
                              int_TypeInfo,
                              &chargeTurn_k__BackingField,
                              v37,
                              v38,
                              v39,
                              v40,
                              v41,
                              v42);
      v45 = System_String__Format((System_String_o *)StringLiteral_23519/*"skill_item_{0}"*/, v44, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v43, v45, 0);
    }
    else
    {
      if ( !v43 )
        goto LABEL_86;
      UISprite__set_spriteName(v43, string_TypeInfo->static_fields->Empty, 0);
    }
  }
LABEL_68:
  v46 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
  {
    skillInfo = this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_86;
    if ( skillInfo->fields.battleItemDispType )
    {
      v47 = *p_useCondItemCountLabel;
      chargeTurn_k__BackingField = BattleSkillInfoData__GetCondItemNumber(skillInfo, 0);
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(
                              int_TypeInfo,
                              &chargeTurn_k__BackingField,
                              v48,
                              v49,
                              v50,
                              v51,
                              v52,
                              v53);
      v55 = (System_String_o *)StringLiteral_987/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond(skillInfo, 0);
      v47 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (BattleSkillInfoData_o *)System_Int32__ToString((int32_t)&v66, 0);
        if ( !v47 )
          goto LABEL_86;
        goto LABEL_81;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2800/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0);
      chargeTurn_k__BackingField = v66;
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(
                              int_TypeInfo,
                              &chargeTurn_k__BackingField,
                              v58,
                              v59,
                              v60,
                              v61,
                              v62,
                              v63);
      v55 = v57;
    }
    skillInfo = (BattleSkillInfoData_o *)System_String__Format(v55, v54, 0);
    if ( !v47 )
      goto LABEL_86;
LABEL_81:
    UILabel__set_text(v47, (System_String_o *)skillInfo, 0);
    skillInfo = (BattleSkillInfoData_o *)*p_useCondItemCountLabel;
    if ( *p_useCondItemCountLabel )
    {
      UILabel__SetCondensedScale((UILabel_o *)skillInfo, 32, 0, 0);
      return;
    }
    goto LABEL_86;
  }
}


void BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
        BattleServantSkillIConComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *noActSprite; // x0

  noActSprite = this->fields.noActSprite;
  if ( !noActSprite
    || (UISprite__set_atlas(noActSprite, this->fields.defaultNoActAtlas, 0),
        (noActSprite = this->fields.noActSprite) == 0) )
  {
    sub_1C32E7C(noActSprite);
  }
  UISprite__set_spriteName(noActSprite, spriteName, 0);
}


void BattleServantSkillIConComponent__UpdateRankUpEffectState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noActSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  float v5; // s9
  float v6; // s8
  UnityEngine_Object_o *rankupSprite; // x20
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B0C1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0C1 = 1;
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noActSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_19;
    v5 = 1.0;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
      v6 = 0.5;
    else
      v6 = 1.0;
  }
  else
  {
    v6 = 1.0;
    v5 = 1.0;
  }
  rankupSprite = (UnityEngine_Object_o *)this->fields.rankupSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
    if ( gameObject )
    {
      v8.fields.r = v6;
      v8.fields.g = v6;
      v8.fields.b = v6;
      v8.fields.a = v5;
      UIWidget__set_color((UIWidget_o *)gameObject, v8, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
      if ( gameObject )
      {
        (*(void (__fastcall **)(UnityEngine_Component_o *, void *))&gameObject->klass[2]._1.byval_arg.bits)(
          gameObject,
          gameObject->klass[2]._1.this_arg.data);
        return;
      }
    }
LABEL_19:
    sub_1C32E7C(gameObject);
  }
}


bool BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 naturalAligment; // x11
  BattleRankUpSkillInfoData_c *v5; // x10
  BattleRankUpSkillInfoData_o *v6; // x0
  bool v7; // w21
  int32_t RankUpState; // w0
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v13; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3B0BD & 1) == 0 )
  {
    sub_1C32C20(&BattleRankUpSkillInfoData_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_18886/*"effect/data/effect/ef_skill_rankup01"*/);
    byte_4C3B0BD = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    naturalAligment = BattleRankUpSkillInfoData_TypeInfo->_2.naturalAligment;
    if ( skillInfo->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v5 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[naturalAligment - 1];
      v6 = v5 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
      if ( v5 == BattleRankUpSkillInfoData_TypeInfo )
      {
        if ( v6 )
        {
          RankUpState = BattleRankUpSkillInfoData__GetRankUpState(v6, 0);
          if ( RankUpState )
          {
            v11 = RankUpState;
            if ( (unsigned int)(RankUpState - 1) <= 1 )
            {
              rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0, 0) )
              {
                v7 = BattleServantSkillIConComponent__PlayRankUpEffect(
                       this,
                       (System_String_o *)StringLiteral_18886/*"effect/data/effect/ef_skill_rankup01"*/,
                       this->fields.rankupRoot,
                       v11 != 1,
                       v13);
LABEL_24:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v10);
                return v7;
              }
            }
LABEL_23:
            v7 = 0;
            goto LABEL_24;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v15 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v15, 0, 0) )
            goto LABEL_23;
          v6 = (BattleRankUpSkillInfoData_o *)*p_rankupEffect;
          if ( *p_rankupEffect )
          {
            v7 = 1;
            ((void (__fastcall *)(BattleRankUpSkillInfoData_o *, __int64, _QWORD, const MethodInfo *))v6->klass->vtable._8_get_IndividualityArray.methodPtr)(
              v6,
              1,
              0,
              v6->klass->vtable._8_get_IndividualityArray.method);
            *p_rankupEffect = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rankupEffect, 0, v16, v17);
            goto LABEL_24;
          }
        }
        sub_1C32E7C(v6);
      }
    }
  }
  return 0;
}


void BattleServantSkillIConComponent__changeTurnCount(
        BattleServantSkillIConComponent_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  BattleServantSkillIConComponent_o *v4; // x19
  struct BattleSkillInfoData_o *skillInfo; // x8
  UnityEngine_Object_o *turnNoLabelBase; // x21
  UnityEngine_Object_o *turnNoLabel; // x21
  UnityEngine_Object_o *v8; // x20
  UILabel_o *v9; // x19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  v10 = turn;
  if ( (byte_4C3B0B8 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0B8 = 1;
  }
  skillInfo = v4->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_27;
  if ( skillInfo->fields.isPassive )
    return;
  turnNoLabelBase = (UnityEngine_Object_o *)v4->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(turnNoLabelBase, 0, 0) )
  {
    turnNoLabel = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(turnNoLabel, 0, 0) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabel;
      if ( !this )
        goto LABEL_27;
      this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      if ( !this )
        goto LABEL_27;
      if ( turn < 1 )
      {
LABEL_26:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        return;
      }
LABEL_22:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v9 = v4->fields.turnNoLabel;
      this = (BattleServantSkillIConComponent_o *)System_Int32__ToString((int32_t)&v10, 0);
      if ( v9 )
      {
        UILabel__set_text(v9, (System_String_o *)this, 0);
        return;
      }
      goto LABEL_27;
    }
  }
  else
  {
    if ( turn < 1 )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabelBase;
      if ( this )
      {
        this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
        if ( this )
          goto LABEL_26;
      }
LABEL_27:
      sub_1C32E7C(this);
    }
    v8 = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabelBase;
      if ( !this )
        goto LABEL_27;
      this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      if ( !this )
        goto LABEL_27;
      goto LABEL_22;
    }
  }
}


void BattleServantSkillIConComponent__completeSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isTweenReverse; // w8
  const MethodInfo *v5; // x2
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *noActSprite; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4C3B0B5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20224/*"icon_sealact_skill"*/);
    sub_1C32C20(&StringLiteral_20222/*"icon_sealact_disable"*/);
    sub_1C32C20(&StringLiteral_20223/*"icon_sealact_seal"*/);
    byte_4C3B0B5 = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20223/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v5);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20222/*"icon_sealact_disable"*/, 0);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20224/*"icon_sealact_skill"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v8);
      this->fields.isNoSkillSprite = 1;
    }
  }
}


void BattleServantSkillIConComponent__setCollider(
        BattleServantSkillIConComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v7; // x21
  UnityEngine_Transform_o *v8; // x19

  if ( (byte_4C3B0AF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0AF = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_20;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_20:
    sub_1C32E7C(gameObject);
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)gameObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) && !flg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v8 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C313D6 )
      {
        gameObject = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      if ( v8 )
      {
        UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        return;
      }
    }
    goto LABEL_20;
  }
}


void BattleServantSkillIConComponent__setNoSkill(
        BattleServantSkillIConComponent_o *this,
        int32_t val,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0

  if ( val == -1 )
  {
    BattleServantSkillIConComponent__setCollider(this, 0, method);
  }
  else if ( !val )
  {
    root = this->fields.root;
    if ( !root )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(root, 0, 0);
  }
}


void BattleServantSkillIConComponent__setSkillIcon(
        BattleServantSkillIConComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleServantSkillIConComponent_o *v4; // x19
  bool isItemIcon; // w0
  UISprite_o *skillIcon; // x19
  int32_t itemImageId; // w20
  int32_t v8; // w20

  v4 = this;
  if ( (byte_4C3B0B1 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C3B0B1 = 1;
  }
  if ( !skillInfo )
    sub_1C32E7C(this);
  isItemIcon = BattleSkillInfoData__isItemIcon(skillInfo, 0);
  skillIcon = v4->fields.skillIcon;
  if ( isItemIcon )
  {
    itemImageId = skillInfo->fields.itemImageId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(skillIcon, itemImageId, 0);
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
           skillInfo,
           skillInfo->klass->vtable._5_get_skillId.method);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSkillIcon(skillIcon, v8, 0);
  }
}


void BattleServantSkillIConComponent__setTurnLabel(
        BattleServantSkillIConComponent_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *turnNoLabelBase; // x21
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *turnNoLabel; // x20
  int v8; // w8
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3B0B2 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C3B0B2 = 1;
  }
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_16;
    if ( turn < 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    turnNoLabel = this->fields.turnNoLabel;
    v8 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v16 = BattleUtility__FloorToInt((float)(v8 >> 1), 0);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11, v12, v13, v14);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, v15, 0);
    if ( !turnNoLabel )
LABEL_16:
      sub_1C32E7C(gameObject);
    UILabel__set_text(turnNoLabel, (System_String_o *)gameObject, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantSkillIConComponent__setflashFlg(
        BattleServantSkillIConComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.flashFlg = flg;
  BattleServantSkillIConComponent__updateFlashSkill(this, (const MethodInfo *)flg);
}


bool BattleServantSkillIConComponent__showChageEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8
  bool result; // w0
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3B0BC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18894/*"effect/ef_command_flash01"*/);
    byte_4C3B0BC = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo || !skillInfo->fields.isCharge )
    return 0;
  skillInfo->fields.isCharge = 0;
  result = 0;
  if ( !this->fields.isTweenSealSkillSelect )
  {
    root = this->fields.root;
    if ( !root )
      sub_1C32E7C(0);
    transform = UnityEngine_GameObject__get_transform(root, 0);
    BaseMonoBehaviour__createObject_41085732(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_18894/*"effect/ef_command_flash01"*/,
      transform,
      0,
      0);
    return 1;
  }
  return result;
}


void BattleServantSkillIConComponent__startChangeSealActSprite(
        BattleServantSkillIConComponent_o *this,
        int32_t noActTurn,
        int32_t sealSkillTurn,
        bool IsSealSkillSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  UISprite_o *noActSprite; // x22
  UnityEngine_GameObject_o *v12; // x20
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  __int64 v75; // x19
  System_Collections_Hashtable_o *v76; // x0
  __int64 v77; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v79; // [xsp+18h] [xbp-38h] BYREF
  int v80; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C3B0B3 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_21352/*"loopType"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_22700/*"pingPong"*/);
    sub_1C32C20(&StringLiteral_18742/*"easeOutCirc"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_24437/*"updateSealActSpriteValues"*/);
    sub_1C32C20(&StringLiteral_18185/*"completeSealActSpriteValues"*/);
    sub_1C32C20(&StringLiteral_18750/*"easeType"*/);
    sub_1C32C20(&StringLiteral_20222/*"icon_sealact_disable"*/);
    sub_1C32C20(&StringLiteral_20223/*"icon_sealact_seal"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3B0B3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_63264648(gameObject, 0) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20223/*"icon_sealact_seal"*/, v9);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20222/*"icon_sealact_disable"*/, 0);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v10);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v13 = sub_1C32CC8(object___TypeInfo, 14);
    if ( !v13 )
      sub_1C32E7C(0);
    v16 = v13;
    v17 = StringLiteral_19689/*"from"*/;
    if ( StringLiteral_19689/*"from"*/ )
    {
      v17 = sub_1C32D5C(StringLiteral_19689/*"from"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !v17 )
        goto LABEL_80;
      v18 = StringLiteral_19689/*"from"*/;
    }
    else
    {
      v18 = 0;
    }
    if ( !*(_DWORD *)(v16 + 24) )
      goto LABEL_79;
    *(_QWORD *)(v16 + 32) = v18;
    sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 32), v18, v14, v15);
    v80 = 0;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v80, v19, v20, v21, v22, v23, v24);
    v27 = v17;
    if ( !v17 || (v17 = sub_1C32D5C(v17, *(_QWORD *)(*(_QWORD *)v16 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v16 + 24) <= 1u )
        goto LABEL_79;
      *(_QWORD *)(v16 + 40) = v27;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 40), v27, v25, v26);
      v17 = StringLiteral_24106/*"to"*/;
      if ( StringLiteral_24106/*"to"*/ )
      {
        v17 = sub_1C32D5C(StringLiteral_24106/*"to"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
        if ( !v17 )
          goto LABEL_80;
        v30 = StringLiteral_24106/*"to"*/;
      }
      else
      {
        v30 = 0;
      }
      if ( *(_DWORD *)(v16 + 24) <= 2u )
        goto LABEL_79;
      *(_QWORD *)(v16 + 48) = v30;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 48), v30, v28, v29);
      v79 = 1065353216;
      v17 = j_il2cpp_value_box_0(float_TypeInfo, &v79, v31, v32, v33, v34, v35, v36);
      v39 = v17;
      if ( !v17 || (v17 = sub_1C32D5C(v17, *(_QWORD *)(*(_QWORD *)v16 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v16 + 24) <= 3u )
          goto LABEL_79;
        *(_QWORD *)(v16 + 56) = v39;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 56), v39, v37, v38);
        v17 = StringLiteral_22435/*"onupdate"*/;
        if ( StringLiteral_22435/*"onupdate"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v42 = StringLiteral_22435/*"onupdate"*/;
        }
        else
        {
          v42 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 4u )
          goto LABEL_79;
        *(_QWORD *)(v16 + 64) = v42;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 64), v42, v40, v41);
        v17 = StringLiteral_24437/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24437/*"updateSealActSpriteValues"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_24437/*"updateSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v45 = StringLiteral_24437/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v45 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 5u )
          goto LABEL_79;
        *(_QWORD *)(v16 + 72) = v45;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 72), v45, v43, v44);
        v17 = StringLiteral_22427/*"oncomplete"*/;
        if ( StringLiteral_22427/*"oncomplete"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v48 = StringLiteral_22427/*"oncomplete"*/;
        }
        else
        {
          v48 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 6u )
          goto LABEL_79;
        *(_QWORD *)(v16 + 80) = v48;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 80), v48, v46, v47);
        v17 = StringLiteral_18185/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18185/*"completeSealActSpriteValues"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_18185/*"completeSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v51 = StringLiteral_18185/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v51 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 7u )
          goto LABEL_79;
        *(_QWORD *)(v16 + 88) = v51;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 88), v51, v49, v50);
        v17 = StringLiteral_21352/*"loopType"*/;
        if ( StringLiteral_21352/*"loopType"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_21352/*"loopType"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v54 = StringLiteral_21352/*"loopType"*/;
        }
        else
        {
          v54 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 8u )
          goto LABEL_79;
        *(_QWORD *)(v16 + 96) = v54;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 96), v54, v52, v53);
        v17 = StringLiteral_22700/*"pingPong"*/;
        if ( StringLiteral_22700/*"pingPong"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_22700/*"pingPong"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v57 = StringLiteral_22700/*"pingPong"*/;
        }
        else
        {
          v57 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 9u )
          goto LABEL_79;
        *(_QWORD *)(v16 + 104) = v57;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 104), v57, v55, v56);
        v17 = StringLiteral_18750/*"easeType"*/;
        if ( StringLiteral_18750/*"easeType"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_18750/*"easeType"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v60 = StringLiteral_18750/*"easeType"*/;
        }
        else
        {
          v60 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 0xAu )
          goto LABEL_79;
        *(_QWORD *)(v16 + 112) = v60;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 112), v60, v58, v59);
        v17 = StringLiteral_18742/*"easeOutCirc"*/;
        if ( StringLiteral_18742/*"easeOutCirc"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_18742/*"easeOutCirc"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v63 = StringLiteral_18742/*"easeOutCirc"*/;
        }
        else
        {
          v63 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 0xBu )
          goto LABEL_79;
        *(_QWORD *)(v16 + 120) = v63;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 120), v63, v61, v62);
        v17 = StringLiteral_24067/*"time"*/;
        if ( StringLiteral_24067/*"time"*/ )
        {
          v17 = sub_1C32D5C(StringLiteral_24067/*"time"*/, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v17 )
            goto LABEL_80;
          v66 = StringLiteral_24067/*"time"*/;
        }
        else
        {
          v66 = 0;
        }
        if ( *(_DWORD *)(v16 + 24) <= 0xCu )
          goto LABEL_79;
        *(_QWORD *)(v16 + 128) = v66;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 128), v66, v64, v65);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v17 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite, v67, v68, v69, v70, v71, v72);
        v75 = v17;
        if ( !v17 || (v17 = sub_1C32D5C(v17, *(_QWORD *)(*(_QWORD *)v16 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v16 + 24) > 0xDu )
          {
            *(_QWORD *)(v16 + 136) = v75;
            sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 136), v75, v73, v74);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v76 = iTween__Hash((System_Object_array *)v16, 0);
            iTween__ValueTo(v12, v76, 0);
            return;
          }
LABEL_79:
          sub_1C32E84(v17);
        }
      }
    }
LABEL_80:
    v77 = sub_1C32EA0(v17);
    sub_1C32D48(v77, 0);
  }
}


void BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C3B0B6 & 1) == 0 )
  {
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3B0B6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63266448(gameObject, 0);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v4);
}


void BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashIcon; // x20
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_GameObject_o *v5; // x20

  if ( (byte_4C3B0B7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0B7 = 1;
  }
  flashIcon = (UnityEngine_Object_o *)this->fields.flashIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(flashIcon, 0, 0) )
  {
    skillInfo = this->fields.skillInfo;
    v5 = this->fields.flashIcon;
    if ( skillInfo )
    {
      if ( this->fields.flashFlg )
      {
        skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__IsAvailable(skillInfo, 0);
        if ( !v5 )
LABEL_14:
          sub_1C32E7C(skillInfo);
      }
      else
      {
        skillInfo = 0;
        if ( !v5 )
          goto LABEL_14;
      }
    }
    else
    {
      if ( !v5 )
        goto LABEL_14;
      LOBYTE(skillInfo) = 0;
    }
    UnityEngine_GameObject__SetActive(v5, (unsigned __int8)skillInfo & 1, 0);
  }
}


void BattleServantSkillIConComponent__updateSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        float value,
        const MethodInfo *method)
{
  void *noActSprite; // x0
  float v6; // s9
  float v7; // s10
  float v8; // s11
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B0B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0B4 = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_14;
  v6 = *((float *)noActSprite + 37);
  v7 = *((float *)noActSprite + 38);
  v8 = *((float *)noActSprite + 39);
  v10.fields.r = v6;
  v10.fields.g = v7;
  v10.fields.b = v8;
  v10.fields.a = value;
  UIWidget__set_color((UIWidget_o *)noActSprite, v10, 0);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0, 0) )
  {
    noActSprite = this->fields.turnNoLabelBase;
    if ( noActSprite )
    {
      noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0);
      if ( noActSprite )
      {
        noActSprite = UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)noActSprite,
                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          v11.fields.r = v6;
          v11.fields.a = value;
          v11.fields.g = v7;
          v11.fields.b = v8;
          UIWidget__set_color((UIWidget_o *)noActSprite, v11, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_1C32E7C(noActSprite);
  }
}