void BattleServantSkillIConComponent___ctor(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  this->fields.isNoSkillSprite = 1;
  this->fields.changeTimeSealSprite = 3.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantSkillIConComponent__ClickSkillIconFunc(
        BattleServantSkillIConComponent_o *this,
        bool isLong,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *target; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v7; // x21

  if ( (byte_4C5A4C5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4C5 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
    sub_1C3E7C0(target, isLong);
  v7 = UnityEngine_GameObject__GetComponent_object_(
         target,
         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
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
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5A4C8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4C8 = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0, 0) )
  {
    if ( !*p_rankupEffect )
      sub_1C3E7C0(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
    this->fields.rankupEffect = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rankupEffect, 0, v7, v8);
    this->fields.rankupSprite = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rankupSprite, 0, v9, v10);
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

  if ( (byte_4C5A4CA & 1) == 0 )
  {
    sub_1C3E564(&BattleRankUpSkillInfoData_TypeInfo);
    byte_4C5A4CA = 1;
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
    sub_1C3E7C0(0, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0);
}


void BattleServantSkillIConComponent__OnClickIcon(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C5A4C4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4C4 = 1;
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

  if ( (byte_4C5A4C3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4C3 = 1;
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
  UnityEngine_Object_o *Object_41233740; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__51315876; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v8 = this;
  if ( (byte_4C5A4C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (BattleServantSkillIConComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4C9 = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0);
  Object_41233740 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_41233740(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0,
                                              0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_41233740, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_41233740 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_41233740,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1C3E508((CGThumbnailListItem_o *)&v8->fields.rankupEffect, (int32_t)Component_object, v13, v14);
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
          ComponentInChildren_object__51315876 = UnityEngine_Component__GetComponentInChildren_object__51315876(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__51315876;
          sub_1C3E508(
            (CGThumbnailListItem_o *)&v8->fields.rankupSprite,
            (int32_t)ComponentInChildren_object__51315876,
            v17,
            v18);
          return 1;
        }
      }
LABEL_15:
      sub_1C3E7C0(this, resPath);
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
  __int64 v13; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v17; // x2
  struct UISprite_o *skillIcon; // x8
  float v19; // s0 OVERLAPPED
  float v20; // s3
  float v21; // s1
  float v22; // s2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  int32_t ChargeTurn; // w0
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  char v30; // w2
  const MethodInfo *v31; // x3
  struct UISprite_o *v32; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  UISprite_o *v39; // x22
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1

  v9 = sealSkillTurn;
  if ( (byte_4C5A4BA & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_20245/*"icon_sealact_skill"*/);
    sub_1C3E564(&StringLiteral_20243/*"icon_sealact_disable"*/);
    sub_1C3E564(&StringLiteral_20244/*"icon_sealact_seal"*/);
    byte_4C5A4BA = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    isActSkill,
    *(const MethodInfo **)&sealSkillTurn);
  root = this->fields.root;
  if ( !root )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(root, 1, 0);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v15);
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
    BattleServantSkillIConComponent__setCollider(this, 0, v17);
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
        v19 = 1.0;
        v20 = 1.0;
      }
      else
      {
        if ( !skillIcon )
          goto LABEL_49;
        v20 = 1.0;
        v19 = 0.5;
      }
      v21 = v19;
      v22 = v19;
      UIWidget__set_color((UIWidget_o *)this->fields.skillIcon, *(UnityEngine_Color_o *)&v19, 0);
      BattleServantSkillIConComponent__setCollider(this, 1, v23);
      BattleServantSkillIConComponent__updateFlashSkill(this, v24);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v26);
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
      v32 = this->fields.noActSprite;
      if ( !v32 )
        goto LABEL_49;
      mAtlas = v32->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.defaultNoActAtlas, (int32_t)mAtlas, v30, v31);
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
          BattleServantSkillIConComponent__stopSealActSprite(this, v40);
          goto LABEL_46;
        }
        UnityEngine_GameObject__SetActive(root, 1, 0);
        this->fields.flashFlg = 0;
        BattleServantSkillIConComponent__updateFlashSkill(this, v34);
        if ( !v9 || noActTurn )
        {
          if ( v9 || !noActTurn )
          {
            BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v9, 0, v36);
            if ( isActSkill )
              goto LABEL_46;
            goto LABEL_45;
          }
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20245/*"icon_sealact_skill"*/,
            v35);
          BattleServantSkillIConComponent__stopSealActSprite(this, v41);
          v9 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20244/*"icon_sealact_seal"*/,
            v35);
          BattleServantSkillIConComponent__stopSealActSprite(this, v37);
          if ( IsSealSkillSelect )
          {
            v39 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_20243/*"icon_sealact_disable"*/, 0);
            if ( isActSkill )
              goto LABEL_46;
LABEL_45:
            BattleServantSkillIConComponent__setTurnLabel(this, v9, v38);
            goto LABEL_46;
          }
        }
        if ( isActSkill )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1C3E7C0(root, v13);
  }
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v28);
  BattleServantSkillIConComponent__SetUseCond(this, v42);
}


void BattleServantSkillIConComponent__SetUseCond(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *useCondRoot; // x20
  __int64 v4; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  UnityEngine_Object_o *v17; // x22
  UISprite_o *v18; // x22
  int32_t monitor; // w23
  int32_t v20; // w0
  int num; // w8
  Il2CppObject *MasterData_object; // x22
  int64_t v23; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v25; // x23
  UserItemEntity_o *v26; // x22
  bool v27; // w0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  UISprite_o *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x23
  ItemMaster_o *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  UISprite_o *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x22
  UnityEngine_Object_o *v47; // x21
  UILabel_o *v48; // x19
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  Il2CppObject *v55; // x1
  System_String_o *v56; // x0
  bool IsOpenCond; // w0
  System_String_o *v58; // x21
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  int32_t chargeTurn_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t v67; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C5A4CC & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_987/*"-{0}"*/);
    sub_1C3E564(&StringLiteral_2800/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_1C3E564(&StringLiteral_23543/*"skill_item_{0}"*/);
    byte_4C5A4CC = 1;
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
  v67 = 0;
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
                                   (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.useCondItemIcon, (int32_t)ComponentInChildren_object, v9, v10);
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
    v13 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v13;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.useCondItemCountLabel, (int32_t)v13, v14, v15);
  }
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)skillInfo,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !v16 )
    goto LABEL_86;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v16,
          &entity,
          (int32_t)skillInfo,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v17 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = (BattleSkillInfoData_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( ((unsigned __int8)skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_86;
    v18 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)AtlasManager__SetItem(v18, monitor, 0);
  }
  if ( !entity )
LABEL_86:
    sub_1C3E7C0(skillInfo, v4);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_86;
    v20 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0);
    if ( v20 >= 999 )
      num = 999;
    else
      num = v20;
    goto LABEL_67;
  }
LABEL_38:
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v23 = *(_QWORD *)(*(_QWORD *)&skillInfo->fields.hasAddBattlePointFunc.fields.hasValue + 64LL);
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !MasterData_object )
    goto LABEL_86;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)MasterData_object,
                       v23,
                       (int32_t)skillInfo,
                       0);
  v25 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v26 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__op_Inequality(v25, 0, 0);
  if ( v26 )
  {
    if ( v27 )
    {
      skillInfo = (BattleSkillInfoData_o *)UserItemEntity__getItemInfo(v26, 0);
      v34 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(
                                int_TypeInfo,
                                &chargeTurn_k__BackingField,
                                v28,
                                v29,
                                v30,
                                v31,
                                v32,
                                v33);
        v36 = System_String__Format((System_String_o *)StringLiteral_23543/*"skill_item_{0}"*/, v35, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v34, v36, 0);
      }
      else
      {
        if ( !v34 )
          goto LABEL_86;
        UISprite__set_spriteName(v34, string_TypeInfo->static_fields->Empty, 0);
      }
    }
    num = v26->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_67:
    v67 = num;
    goto LABEL_68;
  }
  if ( v27 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)skillInfo,
                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_86;
    v37 = (ItemMaster_o *)skillInfo;
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
    if ( !v37 )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)ItemMaster__GetItemData(v37, (int32_t)skillInfo, -1, 0);
    v44 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(
                              int_TypeInfo,
                              &chargeTurn_k__BackingField,
                              v38,
                              v39,
                              v40,
                              v41,
                              v42,
                              v43);
      v46 = System_String__Format((System_String_o *)StringLiteral_23543/*"skill_item_{0}"*/, v45, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v44, v46, 0);
    }
    else
    {
      if ( !v44 )
        goto LABEL_86;
      UISprite__set_spriteName(v44, string_TypeInfo->static_fields->Empty, 0);
    }
  }
LABEL_68:
  v47 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v47, 0, 0) )
  {
    skillInfo = this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_86;
    if ( skillInfo->fields.battleItemDispType )
    {
      v48 = *p_useCondItemCountLabel;
      chargeTurn_k__BackingField = BattleSkillInfoData__GetCondItemNumber(skillInfo, 0);
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(
                              int_TypeInfo,
                              &chargeTurn_k__BackingField,
                              v49,
                              v50,
                              v51,
                              v52,
                              v53,
                              v54);
      v56 = (System_String_o *)StringLiteral_987/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond(skillInfo, 0);
      v48 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (BattleSkillInfoData_o *)System_Int32__ToString((int32_t)&v67, 0);
        if ( !v48 )
          goto LABEL_86;
        goto LABEL_81;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2800/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0);
      chargeTurn_k__BackingField = v67;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(
                              int_TypeInfo,
                              &chargeTurn_k__BackingField,
                              v59,
                              v60,
                              v61,
                              v62,
                              v63,
                              v64);
      v56 = v58;
    }
    skillInfo = (BattleSkillInfoData_o *)System_String__Format(v56, v55, 0);
    if ( !v48 )
      goto LABEL_86;
LABEL_81:
    UILabel__set_text(v48, (System_String_o *)skillInfo, 0);
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
    sub_1C3E7C0(noActSprite, spriteName);
  }
  UISprite__set_spriteName(noActSprite, spriteName, 0);
}


void BattleServantSkillIConComponent__UpdateRankUpEffectState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noActSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  float v6; // s9
  float v7; // s8
  UnityEngine_Object_o *rankupSprite; // x20
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5A4CB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4CB = 1;
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
    v6 = 1.0;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
      v7 = 0.5;
    else
      v7 = 1.0;
  }
  else
  {
    v7 = 1.0;
    v6 = 1.0;
  }
  rankupSprite = (UnityEngine_Object_o *)this->fields.rankupSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
    if ( gameObject )
    {
      v9.fields.r = v7;
      v9.fields.g = v7;
      v9.fields.b = v7;
      v9.fields.a = v6;
      UIWidget__set_color((UIWidget_o *)gameObject, v9, 0);
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
    sub_1C3E7C0(gameObject, v4);
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
  int32_t v10; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v12; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C5A4C7 & 1) == 0 )
  {
    sub_1C3E564(&BattleRankUpSkillInfoData_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_18907/*"effect/data/effect/ef_skill_rankup01"*/);
    byte_4C5A4C7 = 1;
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
            v10 = RankUpState;
            if ( (unsigned int)(RankUpState - 1) <= 1 )
            {
              rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0, 0) )
              {
                v7 = BattleServantSkillIConComponent__PlayRankUpEffect(
                       this,
                       (System_String_o *)StringLiteral_18907/*"effect/data/effect/ef_skill_rankup01"*/,
                       this->fields.rankupRoot,
                       v10 != 1,
                       v12);
LABEL_24:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, method);
                return v7;
              }
            }
LABEL_23:
            v7 = 0;
            goto LABEL_24;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v14 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v14, 0, 0) )
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
            sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rankupEffect, 0, v15, v16);
            goto LABEL_24;
          }
        }
        sub_1C3E7C0(v6, method);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C5A4C2 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4C2 = 1;
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
      sub_1C3E7C0(this, *(_QWORD *)&turn);
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

  if ( (byte_4C5A4BF & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&StringLiteral_20245/*"icon_sealact_skill"*/);
    sub_1C3E564(&StringLiteral_20243/*"icon_sealact_disable"*/);
    sub_1C3E564(&StringLiteral_20244/*"icon_sealact_seal"*/);
    byte_4C5A4BF = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20244/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v5);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20243/*"icon_sealact_disable"*/, 0);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20245/*"icon_sealact_skill"*/, v2);
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
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v8; // x21
  UnityEngine_Transform_o *v9; // x19

  if ( (byte_4C5A4B9 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4B9 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_1C3E7C0(gameObject, v6);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)gameObject,
         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) && !flg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v9 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C506A6 )
      {
        gameObject = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A6 = 1;
      }
      if ( v9 )
      {
        UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        return;
      }
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C3E7C0(0, *(_QWORD *)&val);
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
  if ( (byte_4C5A4BB & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C3E564(&AtlasManager_TypeInfo);
    byte_4C5A4BB = 1;
  }
  if ( !skillInfo )
    sub_1C3E7C0(this, skillInfo);
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
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *turnNoLabel; // x20
  int v9; // w8
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5A4BC & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_25121/*"{0}"*/);
    byte_4C5A4BC = 1;
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
    v9 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v17 = BattleUtility__FloorToInt((float)(v9 >> 1), 0);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12, v13, v14, v15);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25121/*"{0}"*/, v16, 0);
    if ( !turnNoLabel )
LABEL_16:
      sub_1C3E7C0(gameObject, v6);
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

  if ( (byte_4C5A4C6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_18915/*"effect/ef_command_flash01"*/);
    byte_4C5A4C6 = 1;
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
      sub_1C3E7C0(0, method);
    transform = UnityEngine_GameObject__get_transform(root, 0);
    BaseMonoBehaviour__createObject_41233740(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_18915/*"effect/ef_command_flash01"*/,
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
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
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
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x19
  System_Collections_Hashtable_o *v67; // x0
  __int64 v68; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v70; // [xsp+18h] [xbp-38h] BYREF
  int v71; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C5A4BD & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_21373/*"loopType"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_22722/*"pingPong"*/);
    sub_1C3E564(&StringLiteral_18763/*"easeOutCirc"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_24461/*"updateSealActSpriteValues"*/);
    sub_1C3E564(&StringLiteral_18204/*"completeSealActSpriteValues"*/);
    sub_1C3E564(&StringLiteral_18771/*"easeType"*/);
    sub_1C3E564(&StringLiteral_20243/*"icon_sealact_disable"*/);
    sub_1C3E564(&StringLiteral_20244/*"icon_sealact_seal"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A4BD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_63382572(gameObject, 0) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20244/*"icon_sealact_seal"*/, v9);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20243/*"icon_sealact_disable"*/, 0);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v10);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v13 = sub_1C3E60C(object___TypeInfo, 14);
    if ( !v13 )
      sub_1C3E7C0(0, v14);
    v17 = v13;
    v18 = StringLiteral_19710/*"from"*/;
    if ( StringLiteral_19710/*"from"*/ )
    {
      v18 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
      if ( !v18 )
        goto LABEL_80;
      v19 = StringLiteral_19710/*"from"*/;
    }
    else
    {
      v19 = 0;
    }
    if ( !*(_DWORD *)(v17 + 24) )
      goto LABEL_79;
    *(_QWORD *)(v17 + 32) = v19;
    sub_1C3E508((CGThumbnailListItem_o *)(v17 + 32), v19, v15, v16);
    v71 = 0;
    v18 = j_il2cpp_value_box_0(float_TypeInfo, &v71, v20, v21, v22, v23, v24, v25);
    v28 = v18;
    if ( !v18 || (v18 = sub_1C3E6A0(v18, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_79;
      *(_QWORD *)(v17 + 40) = v28;
      sub_1C3E508((CGThumbnailListItem_o *)(v17 + 40), v28, v26, v27);
      v18 = StringLiteral_24130/*"to"*/;
      if ( StringLiteral_24130/*"to"*/ )
      {
        v18 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
        if ( !v18 )
          goto LABEL_80;
        v19 = StringLiteral_24130/*"to"*/;
      }
      else
      {
        v19 = 0;
      }
      if ( *(_DWORD *)(v17 + 24) <= 2u )
        goto LABEL_79;
      *(_QWORD *)(v17 + 48) = v19;
      sub_1C3E508((CGThumbnailListItem_o *)(v17 + 48), v19, v29, v30);
      v70 = 1065353216;
      v18 = j_il2cpp_value_box_0(float_TypeInfo, &v70, v31, v32, v33, v34, v35, v36);
      v39 = v18;
      if ( !v18 || (v18 = sub_1C3E6A0(v18, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v17 + 24) <= 3u )
          goto LABEL_79;
        *(_QWORD *)(v17 + 56) = v39;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 56), v39, v37, v38);
        v18 = StringLiteral_22456/*"onupdate"*/;
        if ( StringLiteral_22456/*"onupdate"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_22456/*"onupdate"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 4u )
          goto LABEL_79;
        *(_QWORD *)(v17 + 64) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 64), v19, v40, v41);
        v18 = StringLiteral_24461/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24461/*"updateSealActSpriteValues"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_24461/*"updateSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_24461/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 5u )
          goto LABEL_79;
        *(_QWORD *)(v17 + 72) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 72), v19, v42, v43);
        v18 = StringLiteral_22448/*"oncomplete"*/;
        if ( StringLiteral_22448/*"oncomplete"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_22448/*"oncomplete"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 6u )
          goto LABEL_79;
        *(_QWORD *)(v17 + 80) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 80), v19, v44, v45);
        v18 = StringLiteral_18204/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18204/*"completeSealActSpriteValues"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_18204/*"completeSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_18204/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 7u )
          goto LABEL_79;
        *(_QWORD *)(v17 + 88) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 88), v19, v46, v47);
        v18 = StringLiteral_21373/*"loopType"*/;
        if ( StringLiteral_21373/*"loopType"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_21373/*"loopType"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_21373/*"loopType"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 8u )
          goto LABEL_79;
        *(_QWORD *)(v17 + 96) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 96), v19, v48, v49);
        v18 = StringLiteral_22722/*"pingPong"*/;
        if ( StringLiteral_22722/*"pingPong"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_22722/*"pingPong"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_22722/*"pingPong"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 9u )
          goto LABEL_79;
        *(_QWORD *)(v17 + 104) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 104), v19, v50, v51);
        v18 = StringLiteral_18771/*"easeType"*/;
        if ( StringLiteral_18771/*"easeType"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_18771/*"easeType"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_18771/*"easeType"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 0xAu )
          goto LABEL_79;
        *(_QWORD *)(v17 + 112) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 112), v19, v52, v53);
        v18 = StringLiteral_18763/*"easeOutCirc"*/;
        if ( StringLiteral_18763/*"easeOutCirc"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_18763/*"easeOutCirc"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_18763/*"easeOutCirc"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 0xBu )
          goto LABEL_79;
        *(_QWORD *)(v17 + 120) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 120), v19, v54, v55);
        v18 = StringLiteral_24091/*"time"*/;
        if ( StringLiteral_24091/*"time"*/ )
        {
          v18 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_24091/*"time"*/;
        }
        else
        {
          v19 = 0;
        }
        if ( *(_DWORD *)(v17 + 24) <= 0xCu )
          goto LABEL_79;
        *(_QWORD *)(v17 + 128) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 128), v19, v56, v57);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v18 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite, v58, v59, v60, v61, v62, v63);
        v66 = v18;
        if ( !v18 || (v18 = sub_1C3E6A0(v18, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v17 + 24) > 0xDu )
          {
            *(_QWORD *)(v17 + 136) = v66;
            sub_1C3E508((CGThumbnailListItem_o *)(v17 + 136), v66, v64, v65);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v67 = iTween__Hash((System_Object_array *)v17, 0);
            iTween__ValueTo(v12, v67, 0);
            return;
          }
LABEL_79:
          sub_1C3E7C8(v18, v19);
        }
      }
    }
LABEL_80:
    v68 = sub_1C3E7E4(v18);
    sub_1C3E68C(v68, 0);
  }
}


void BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C5A4C0 & 1) == 0 )
  {
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A4C0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63384372(gameObject, 0);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v4);
}


void BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashIcon; // x20
  __int64 v4; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4C5A4C1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4C1 = 1;
  }
  flashIcon = (UnityEngine_Object_o *)this->fields.flashIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(flashIcon, 0, 0) )
  {
    skillInfo = this->fields.skillInfo;
    v6 = this->fields.flashIcon;
    if ( skillInfo )
    {
      if ( this->fields.flashFlg )
      {
        skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__IsAvailable(skillInfo, 0);
        if ( !v6 )
LABEL_14:
          sub_1C3E7C0(skillInfo, v4);
      }
      else
      {
        skillInfo = 0;
        if ( !v6 )
          goto LABEL_14;
      }
    }
    else
    {
      if ( !v6 )
        goto LABEL_14;
      LOBYTE(skillInfo) = 0;
    }
    UnityEngine_GameObject__SetActive(v6, (unsigned __int8)skillInfo & 1, 0);
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

  if ( (byte_4C5A4BE & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A4BE = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1C3E7C0(noActSprite, method);
  }
}