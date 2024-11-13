void __fastcall BattleServantSkillIConComponent___ctor(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isNoSkillSprite = 1;
  this->fields.changeTimeSealSprite = 3.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__ClickSkillIconFunc(
        BattleServantSkillIConComponent_o *this,
        bool isLong,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *target; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  Il2CppObject *v14; // x21

  if ( (byte_4B19321 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, isLong, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19321 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_16;
    BattleServantParamComponent__clickSkillIcon(
      (BattleServantParamComponent_o *)Component_object,
      this->fields.skillInfo,
      isLong,
      v12);
  }
  target = this->fields.target;
  if ( !target )
LABEL_16:
    sub_1BCAA3C(target, isLong);
  v14 = UnityEngine_GameObject__GetComponent_object_(
          target,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v14 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v14, this->fields.skillInfo, isLong, 0LL);
      return;
    }
    goto LABEL_16;
  }
}


void __fastcall BattleServantSkillIConComponent__DeleteRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_rankupEffect; // x20
  UnityEngine_Object_o *rankupEffect; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B19324 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19324 = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
  {
    if ( !*p_rankupEffect )
      sub_1BCAA3C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rankupEffect, 0LL, v9, v10, v11, v12, v13, v14);
    this->fields.rankupSprite = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rankupSprite, 0LL, v15, v16, v17, v18, v19, v20);
  }
}


int32_t __fastcall BattleServantSkillIConComponent__GetRankUpState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 methodPtr_low; // x11
  BattleRankUpSkillInfoData_c *v6; // x10
  BattleRankUpSkillInfoData_o *v7; // x0

  if ( (byte_4B19326 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRankUpSkillInfoData_TypeInfo, method, v2);
    byte_4B19326 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return -1;
  methodPtr_low = LOBYTE(BattleRankUpSkillInfoData_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return -1;
  v6 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1];
  v7 = v6 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
  if ( v6 != BattleRankUpSkillInfoData_TypeInfo )
    return -1;
  if ( !v7 )
    sub_1BCAA3C(0LL, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v7, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B19320 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19320 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 0, v5);
}


void __fastcall BattleServantSkillIConComponent__OnLongTapIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B1931F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1931F = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 1, v5);
}


bool __fastcall BattleServantSkillIConComponent__PlayRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        System_String_o *resPath,
        UnityEngine_GameObject_o *root,
        bool isSkip,
        const MethodInfo *method)
{
  BattleServantSkillIConComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *Object_38952608; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  v8 = this;
  if ( (byte_4B19325 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, resPath, root);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9, v10);
    this = (BattleServantSkillIConComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B19325 = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_38952608 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_38952608(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0LL,
                                              0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_38952608, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_38952608 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_38952608,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v8->fields.rankupEffect,
      (int64_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    rankupEffect = (UnityEngine_Object_o *)v8->fields.rankupEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
    {
      this = *p_rankupEffect;
      if ( *p_rankupEffect )
      {
        CommonEffectComponent__Init((CommonEffectComponent_o *)this, isSkip, 0, 0LL);
        this = *p_rankupEffect;
        if ( *p_rankupEffect )
        {
          ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__49322392;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v8->fields.rankupSprite,
            (int64_t)ComponentInChildren_object__49322392,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          return 1;
        }
      }
LABEL_15:
      sub_1BCAA3C(this, resPath);
    }
  }
  return 0;
}


void __fastcall BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !BattleServantSkillIConComponent__GetRankUpState(this, method) )
    BattleServantSkillIConComponent__DeleteRankUpEffect(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__SetSkillInfo(
        BattleServantSkillIConComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isActSkill,
        int32_t sealSkillTurn,
        int32_t noActTurn,
        bool IsSealSkillSelect,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int32_t v10; // w21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v27; // x2
  struct UISprite_o *skillIcon; // x8
  float v29; // s0
  float v30; // s3
  float v31; // s1
  float v32; // s2
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  int32_t ChargeTurn; // w0
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v38; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UISprite_o *v46; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  UISprite_o *v53; // x22
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1

  v10 = sealSkillTurn;
  if ( (byte_4B19316 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, skillInfo, isActSkill);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_20389/*"icon_sealact_skill"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_20387/*"icon_sealact_disable"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_20388/*"icon_sealact_seal"*/, v20, v21);
    byte_4B19316 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillInfo,
    (int64_t)skillInfo,
    isActSkill,
    sealSkillTurn,
    *(System_String_o **)&noActTurn,
    (BattleSetupInfo_o *)IsSealSkillSelect,
    (FollowerInfo_o *)method,
    v7);
  root = this->fields.root;
  if ( !root )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v24);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( !skillInfo )
      goto LABEL_49;
    if ( skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)this->fields.turnNoLabelBase;
      if ( !root )
        goto LABEL_49;
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL);
      if ( !root )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive(root, 0, 0LL);
    }
  }
  if ( this->fields.showType == 2 )
  {
    BattleServantSkillIConComponent__setCollider(this, 0, v27);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_49;
    if ( !skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)BattleSkillInfoData__IsAvailable(skillInfo, 0LL);
      skillIcon = this->fields.skillIcon;
      if ( ((unsigned __int8)root & 1) != 0 )
      {
        if ( !skillIcon )
          goto LABEL_49;
        v29 = 1.0;
        v30 = 1.0;
      }
      else
      {
        if ( !skillIcon )
          goto LABEL_49;
        v30 = 1.0;
        v29 = 0.5;
      }
      v31 = v29;
      v32 = v29;
      UIWidget__set_color((UIWidget_o *)this->fields.skillIcon, *(UnityEngine_Color_o *)&v29, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v33);
      BattleServantSkillIConComponent__updateFlashSkill(this, v34);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v36);
    }
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
  {
    defaultNoActAtlas = (UnityEngine_Object_o *)this->fields.defaultNoActAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(defaultNoActAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)root & 1) != 0 )
    {
      v46 = this->fields.noActSprite;
      if ( !v46 )
        goto LABEL_49;
      mAtlas = v46->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.defaultNoActAtlas,
        (int64_t)mAtlas,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
    if ( root )
    {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL);
      if ( root )
      {
        if ( !(noActTurn | v10) )
        {
          UnityEngine_GameObject__SetActive(root, 0, 0LL);
          BattleServantSkillIConComponent__stopSealActSprite(this, v54);
          goto LABEL_46;
        }
        UnityEngine_GameObject__SetActive(root, 1, 0LL);
        this->fields.flashFlg = 0;
        BattleServantSkillIConComponent__updateFlashSkill(this, v48);
        if ( !v10 || noActTurn )
        {
          if ( v10 || !noActTurn )
          {
            BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v10, 0, v50);
            if ( isActSkill )
              goto LABEL_46;
            goto LABEL_45;
          }
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20389/*"icon_sealact_skill"*/,
            v49);
          BattleServantSkillIConComponent__stopSealActSprite(this, v55);
          v10 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20388/*"icon_sealact_seal"*/,
            v49);
          BattleServantSkillIConComponent__stopSealActSprite(this, v51);
          if ( IsSealSkillSelect )
          {
            v53 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
            AtlasManager__SetEventSprite(v53, (System_String_o *)StringLiteral_20387/*"icon_sealact_disable"*/, 0LL);
            if ( isActSkill )
              goto LABEL_46;
LABEL_45:
            BattleServantSkillIConComponent__setTurnLabel(this, v10, v52);
            goto LABEL_46;
          }
        }
        if ( isActSkill )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1BCAA3C(root, v22);
  }
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v38);
  BattleServantSkillIConComponent__SetUseCond(this, v56);
}


void __fastcall BattleServantSkillIConComponent__SetUseCond(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *useCondRoot; // x20
  __int64 v35; // x1
  int64_t skillInfo; // x0
  __int64 v37; // x1
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x22
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x22
  UISprite_o *v59; // x22
  int32_t monitor; // w23
  int32_t v61; // w0
  __int64 v62; // x1
  int num; // w8
  __int64 v64; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t v66; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v68; // x1
  UnityEngine_Object_o *v69; // x23
  UserItemEntity_o *v70; // x22
  bool v71; // w0
  UISprite_o *v72; // x21
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x23
  ItemMaster_o *v76; // x22
  UISprite_o *v77; // x21
  Il2CppObject *v78; // x0
  __int64 v79; // x1
  System_String_o *v80; // x22
  UnityEngine_Object_o *v81; // x21
  UILabel_o *v82; // x19
  Il2CppObject *v83; // x1
  System_String_o *v84; // x0
  bool IsOpenCond; // w0
  __int64 v86; // x1
  System_String_o *v87; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t CondItemNumber; // [xsp+18h] [xbp-48h] BYREF
  int v90; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B19328 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v12, v13);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v24, v25);
    sub_1BCA7E0(&string_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_1042/*"-{0}"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_2938/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_23597/*"skill_item_{0}"*/, v32, v33);
    byte_4B19328 = 1;
  }
  entity = 0LL;
  useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(useCondRoot, 0LL, 0LL) )
    return;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_82;
  skillInfo = BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)skillInfo, 0LL);
  if ( !this->fields.useCondRoot )
    goto LABEL_82;
  if ( (skillInfo & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
  v90 = 0;
  p_useCondItemIcon = &this->fields.useCondItemIcon;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Equality(useCondItemIcon, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_82;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)skillInfo,
                                   (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.useCondItemIcon,
      (int64_t)ComponentInChildren_object,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  p_useCondItemCountLabel = &this->fields.useCondItemCountLabel;
  useCondItemCountLabel = (UnityEngine_Object_o *)this->fields.useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Equality(useCondItemCountLabel, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_82;
    v49 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v49;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.useCondItemCountLabel,
      (int64_t)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  skillInfo = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v56 )
    goto LABEL_82;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v56,
          &entity,
          skillInfo,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v58 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  skillInfo = UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_82;
    v59 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
    skillInfo = AtlasManager__SetItem(v59, monitor, 0LL);
  }
  if ( !entity )
LABEL_82:
    sub_1BCAA3C(skillInfo, v35);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_82;
    v61 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v61 >= 999 )
      num = 999;
    else
      num = v61;
    goto LABEL_63;
  }
LABEL_38:
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v64);
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v66 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !MasterData_object )
    goto LABEL_82;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, v66, skillInfo, 0LL);
  v69 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v70 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
  v71 = UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
  if ( v70 )
  {
    if ( v71 )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v70, 0LL);
      v72 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        CondItemNumber = *(_DWORD *)(skillInfo + 40);
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
        v75 = System_String__Format((System_String_o *)StringLiteral_23597/*"skill_item_{0}"*/, v73, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v74);
        AtlasManager__SetEventSprite(v72, v75, 0LL);
      }
      else
      {
        if ( !v72 )
          goto LABEL_82;
        UISprite__set_spriteName(v72, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v70->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_63:
    v90 = num;
    goto LABEL_64;
  }
  if ( v71 )
  {
    skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_82;
    skillInfo = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)skillInfo,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_82;
    v76 = (ItemMaster_o *)skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !v76 )
      goto LABEL_82;
    skillInfo = (int64_t)ItemMaster__GetItemData(v76, skillInfo, 0LL);
    v77 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      CondItemNumber = *(_DWORD *)(skillInfo + 40);
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v80 = System_String__Format((System_String_o *)StringLiteral_23597/*"skill_item_{0}"*/, v78, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v79);
      AtlasManager__SetEventSprite(v77, v80, 0LL);
    }
    else
    {
      if ( !v77 )
        goto LABEL_82;
      UISprite__set_spriteName(v77, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
LABEL_64:
  v81 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_82;
    if ( *(_DWORD *)(skillInfo + 136) )
    {
      v82 = *p_useCondItemCountLabel;
      CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0LL);
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v84 = (System_String_o *)StringLiteral_1042/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0LL);
      v82 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&v90, 0LL);
        if ( !v82 )
          goto LABEL_82;
        goto LABEL_77;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      CondItemNumber = v90;
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v84 = v87;
    }
    skillInfo = (int64_t)System_String__Format(v84, v83, 0LL);
    if ( !v82 )
      goto LABEL_82;
LABEL_77:
    UILabel__set_text(v82, (System_String_o *)skillInfo, 0LL);
    skillInfo = (int64_t)*p_useCondItemCountLabel;
    if ( *p_useCondItemCountLabel )
    {
      UILabel__SetCondensedScale((UILabel_o *)skillInfo, 32, 0LL);
      return;
    }
    goto LABEL_82;
  }
}


void __fastcall BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
        BattleServantSkillIConComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *noActSprite; // x0

  noActSprite = this->fields.noActSprite;
  if ( !noActSprite
    || (UISprite__set_atlas(noActSprite, this->fields.defaultNoActAtlas, 0LL),
        (noActSprite = this->fields.noActSprite) == 0LL) )
  {
    sub_1BCAA3C(noActSprite, spriteName);
  }
  UISprite__set_spriteName(noActSprite, spriteName, 0LL);
}


void __fastcall BattleServantSkillIConComponent__UpdateRankUpEffectState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *noActSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  float v7; // s9
  float v8; // s8
  UnityEngine_Object_o *rankupSprite; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19327 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19327 = 1;
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noActSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v7 = 1.0;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
      v8 = 0.5;
    else
      v8 = 1.0;
  }
  else
  {
    v8 = 1.0;
    v7 = 1.0;
  }
  rankupSprite = (UnityEngine_Object_o *)this->fields.rankupSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(rankupSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
    if ( gameObject )
    {
      v10.fields.r = v8;
      v10.fields.g = v8;
      v10.fields.b = v8;
      v10.fields.a = v7;
      UIWidget__set_color((UIWidget_o *)gameObject, v10, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
      if ( gameObject )
      {
        (*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
          gameObject,
          gameObject->klass[2]._1.element_class);
        return;
      }
    }
LABEL_19:
    sub_1BCAA3C(gameObject, v5);
  }
}


bool __fastcall BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 methodPtr_low; // x11
  BattleRankUpSkillInfoData_c *v10; // x10
  BattleRankUpSkillInfoData_o *v11; // x0
  bool v12; // w21
  int32_t RankUpState; // w0
  int32_t v15; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v17; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B19323 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRankUpSkillInfoData_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_19077/*"effect/data/effect/ef_skill_rankup01"*/, v6, v7);
    byte_4B19323 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    methodPtr_low = LOBYTE(BattleRankUpSkillInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v10 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1];
      v11 = v10 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
      if ( v10 == BattleRankUpSkillInfoData_TypeInfo )
      {
        if ( v11 )
        {
          RankUpState = BattleRankUpSkillInfoData__GetRankUpState(v11, 0LL);
          if ( RankUpState )
          {
            v15 = RankUpState;
            if ( (unsigned int)(RankUpState - 1) <= 1 )
            {
              rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0LL, 0LL) )
              {
                v12 = BattleServantSkillIConComponent__PlayRankUpEffect(
                        this,
                        (System_String_o *)StringLiteral_19077/*"effect/data/effect/ef_skill_rankup01"*/,
                        this->fields.rankupRoot,
                        v15 != 1,
                        v17);
LABEL_24:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, method);
                return v12;
              }
            }
LABEL_23:
            v12 = 0;
            goto LABEL_24;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v19 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
            goto LABEL_23;
          v11 = (BattleRankUpSkillInfoData_o *)*p_rankupEffect;
          if ( *p_rankupEffect )
          {
            v12 = 1;
            ((void (__fastcall *)(BattleRankUpSkillInfoData_o *, __int64, _QWORD, Il2CppMethodPointer))v11->klass->vtable._8_PreLoad.method)(
              v11,
              1LL,
              0LL,
              v11->klass->vtable._9_UnLoad.methodPtr);
            *p_rankupEffect = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rankupEffect, 0LL, v20, v21, v22, v23, v24, v25);
            goto LABEL_24;
          }
        }
        sub_1BCAA3C(v11, method);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__changeTurnCount(
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
  if ( (byte_4B1931E & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&turn, method);
    byte_4B1931E = 1;
  }
  skillInfo = v4->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_27;
  if ( skillInfo->fields.isPassive )
    return;
  turnNoLabelBase = (UnityEngine_Object_o *)v4->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
  if ( UnityEngine_Object__op_Equality(turnNoLabelBase, 0LL, 0LL) )
  {
    turnNoLabel = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    if ( UnityEngine_Object__op_Inequality(turnNoLabel, 0LL, 0LL) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabel;
      if ( !this )
        goto LABEL_27;
      this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_27;
      if ( turn < 1 )
      {
LABEL_26:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        return;
      }
LABEL_22:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v9 = v4->fields.turnNoLabel;
      this = (BattleServantSkillIConComponent_o *)System_Int32__ToString((int32_t)&v10, 0LL);
      if ( v9 )
      {
        UILabel__set_text(v9, (System_String_o *)this, 0LL);
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
                                                      0LL);
        if ( this )
          goto LABEL_26;
      }
LABEL_27:
      sub_1BCAA3C(this, *(_QWORD *)&turn);
    }
    v8 = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabelBase;
      if ( !this )
        goto LABEL_27;
      this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_27;
      goto LABEL_22;
    }
  }
}


void __fastcall BattleServantSkillIConComponent__completeSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _BOOL4 isTweenReverse; // w8
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *noActSprite; // x19
  const MethodInfo *v15; // x2

  if ( (byte_4B1931B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20389/*"icon_sealact_skill"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_20387/*"icon_sealact_disable"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_20388/*"icon_sealact_seal"*/, v8, v9);
    byte_4B1931B = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20388/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v11);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20387/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20389/*"icon_sealact_skill"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v15);
      this->fields.isNoSkillSprite = 1;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__setCollider(
        BattleServantSkillIConComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x19

  if ( (byte_4B19315 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19315 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_20;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_1BCAA3C(gameObject, v10);
  v14 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) && !flg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v16 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B109C6 )
      {
        gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v15);
        byte_4B109C6 = 1;
      }
      if ( v16 )
      {
        UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        return;
      }
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__setNoSkill(
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
      sub_1BCAA3C(0LL, *(_QWORD *)&val);
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__setSkillIcon(
        BattleServantSkillIConComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleServantSkillIConComponent_o *v4; // x19
  bool isItemIcon; // w0
  __int64 v6; // x1
  UISprite_o *skillIcon; // x19
  int32_t itemImageId; // w20
  __int64 v9; // x1
  int32_t v10; // w20

  v4 = this;
  if ( (byte_4B19317 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1BCA7E0(&AtlasManager_TypeInfo, skillInfo, method);
    byte_4B19317 = 1;
  }
  if ( !skillInfo )
    sub_1BCAA3C(this, skillInfo);
  isItemIcon = BattleSkillInfoData__isItemIcon(skillInfo, 0LL);
  skillIcon = v4->fields.skillIcon;
  if ( isItemIcon )
  {
    itemImageId = skillInfo->fields.itemImageId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetItem(skillIcon, itemImageId, 0LL);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetSkillIcon(skillIcon, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__setTurnLabel(
        BattleServantSkillIConComponent_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *turnNoLabel; // x20
  int v13; // w8
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19318 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&turn, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v7, v8);
    byte_4B19318 = 1;
  }
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    if ( (turn & 0x80000000) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    turnNoLabel = this->fields.turnNoLabel;
    v13 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v15 = BattleUtility__FloorToInt((float)(v13 >> 1), 0LL);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, v14, 0LL);
    if ( !turnNoLabel )
LABEL_16:
      sub_1BCAA3C(gameObject, v10);
    UILabel__set_text(turnNoLabel, (System_String_o *)gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__setflashFlg(
        BattleServantSkillIConComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.flashFlg = flg;
  BattleServantSkillIConComponent__updateFlashSkill(this, (const MethodInfo *)flg);
}


bool __fastcall BattleServantSkillIConComponent__showChageEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleSkillInfoData_o *skillInfo; // x8
  bool result; // w0
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B19322 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19085/*"effect/ef_command_flash01"*/, method, v2);
    byte_4B19322 = 1;
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
      sub_1BCAA3C(0LL, method);
    transform = UnityEngine_GameObject__get_transform(root, 0LL);
    BaseMonoBehaviour__createObject_38952608(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_19085/*"effect/ef_command_flash01"*/,
      transform,
      0LL,
      0LL);
    return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__startChangeSealActSprite(
        BattleServantSkillIConComponent_o *this,
        int32_t noActTurn,
        int32_t sealSkillTurn,
        bool IsSealSkillSelect,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  UISprite_o *noActSprite; // x22
  UnityEngine_GameObject_o *v46; // x20
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Object_array *v55; // x21
  __int64 v56; // x0
  int64_t v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x22
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x19
  __int64 v139; // x1
  System_Collections_Hashtable_o *v140; // x0
  __int64 v141; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v143; // [xsp+18h] [xbp-38h] BYREF
  int v144; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B19319 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&noActTurn, *(_QWORD *)&sealSkillTurn);
    sub_1BCA7E0(&object___TypeInfo, v8, v9);
    sub_1BCA7E0(&float_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21441/*"loopType"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22778/*"pingPong"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_18940/*"easeOutCirc"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_24564/*"updateSealActSpriteValues"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_18367/*"completeSealActSpriteValues"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_18948/*"easeType"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_20387/*"icon_sealact_disable"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_20388/*"icon_sealact_seal"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v36, v37);
    sub_1BCA7E0(&iTween_TypeInfo, v38, v39);
    byte_4B19319 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v40);
  if ( iTween__Count_61048092(gameObject, 0LL) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20388/*"icon_sealact_seal"*/, v42);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20387/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v44);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v47 = sub_1BCA888(object___TypeInfo, 14LL);
    if ( !v47 )
      sub_1BCAA3C(0LL, v48);
    v55 = (System_Object_array *)v47;
    v56 = StringLiteral_19858/*"from"*/;
    if ( StringLiteral_19858/*"from"*/ )
    {
      v56 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v55->obj.klass->_1.element_class);
      if ( !v56 )
        goto LABEL_80;
      v57 = StringLiteral_19858/*"from"*/;
    }
    else
    {
      v57 = 0LL;
    }
    if ( !v55->max_length )
      goto LABEL_79;
    v55->m_Items[0] = (Il2CppObject *)v57;
    sub_1BCA784((PartyOrganizationUtility_o *)v55->m_Items, v57, v49, v50, v51, v52, v53, v54);
    v144 = 0;
    v56 = j_il2cpp_value_box_0(float_TypeInfo, &v144);
    v64 = v56;
    if ( !v56 || (v56 = sub_1BCA91C(v56, v55->obj.klass->_1.element_class)) != 0 )
    {
      if ( v55->max_length <= 1 )
        goto LABEL_79;
      v55->m_Items[1] = (Il2CppObject *)v64;
      sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[1], v64, v58, v59, v60, v61, v62, v63);
      v56 = StringLiteral_24219/*"to"*/;
      if ( StringLiteral_24219/*"to"*/ )
      {
        v56 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v55->obj.klass->_1.element_class);
        if ( !v56 )
          goto LABEL_80;
        v57 = StringLiteral_24219/*"to"*/;
      }
      else
      {
        v57 = 0LL;
      }
      if ( v55->max_length <= 2 )
        goto LABEL_79;
      v55->m_Items[2] = (Il2CppObject *)v57;
      sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[2], v57, v65, v66, v67, v68, v69, v70);
      v143 = 1065353216;
      v56 = j_il2cpp_value_box_0(float_TypeInfo, &v143);
      v77 = v56;
      if ( !v56 || (v56 = sub_1BCA91C(v56, v55->obj.klass->_1.element_class)) != 0 )
      {
        if ( v55->max_length <= 3 )
          goto LABEL_79;
        v55->m_Items[3] = (Il2CppObject *)v77;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[3], v77, v71, v72, v73, v74, v75, v76);
        v56 = StringLiteral_22521/*"onupdate"*/;
        if ( StringLiteral_22521/*"onupdate"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_22521/*"onupdate"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 4 )
          goto LABEL_79;
        v55->m_Items[4] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[4], v57, v78, v79, v80, v81, v82, v83);
        v56 = StringLiteral_24564/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24564/*"updateSealActSpriteValues"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_24564/*"updateSealActSpriteValues"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_24564/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 5 )
          goto LABEL_79;
        v55->m_Items[5] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[5], v57, v84, v85, v86, v87, v88, v89);
        v56 = StringLiteral_22513/*"oncomplete"*/;
        if ( StringLiteral_22513/*"oncomplete"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_22513/*"oncomplete"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 6 )
          goto LABEL_79;
        v55->m_Items[6] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[6], v57, v90, v91, v92, v93, v94, v95);
        v56 = StringLiteral_18367/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18367/*"completeSealActSpriteValues"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_18367/*"completeSealActSpriteValues"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_18367/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 7 )
          goto LABEL_79;
        v55->m_Items[7] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[7], v57, v96, v97, v98, v99, v100, v101);
        v56 = StringLiteral_21441/*"loopType"*/;
        if ( StringLiteral_21441/*"loopType"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_21441/*"loopType"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_21441/*"loopType"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 8 )
          goto LABEL_79;
        v55->m_Items[8] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[8], v57, v102, v103, v104, v105, v106, v107);
        v56 = StringLiteral_22778/*"pingPong"*/;
        if ( StringLiteral_22778/*"pingPong"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_22778/*"pingPong"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_22778/*"pingPong"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 9 )
          goto LABEL_79;
        v55->m_Items[9] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[9], v57, v108, v109, v110, v111, v112, v113);
        v56 = StringLiteral_18948/*"easeType"*/;
        if ( StringLiteral_18948/*"easeType"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_18948/*"easeType"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_18948/*"easeType"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 0xA )
          goto LABEL_79;
        v55->m_Items[10] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[10], v57, v114, v115, v116, v117, v118, v119);
        v56 = StringLiteral_18940/*"easeOutCirc"*/;
        if ( StringLiteral_18940/*"easeOutCirc"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_18940/*"easeOutCirc"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_18940/*"easeOutCirc"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 0xB )
          goto LABEL_79;
        v55->m_Items[11] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[11], v57, v120, v121, v122, v123, v124, v125);
        v56 = StringLiteral_24178/*"time"*/;
        if ( StringLiteral_24178/*"time"*/ )
        {
          v56 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v55->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_80;
          v57 = StringLiteral_24178/*"time"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v55->max_length <= 0xC )
          goto LABEL_79;
        v55->m_Items[12] = (Il2CppObject *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[12], v57, v126, v127, v128, v129, v130, v131);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v56 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite);
        v138 = v56;
        if ( !v56 || (v56 = sub_1BCA91C(v56, v55->obj.klass->_1.element_class)) != 0 )
        {
          if ( v55->max_length > 0xD )
          {
            v55->m_Items[13] = (Il2CppObject *)v138;
            sub_1BCA784((PartyOrganizationUtility_o *)&v55->m_Items[13], v138, v132, v133, v134, v135, v136, v137);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v139);
            v140 = iTween__Hash(v55, 0LL);
            iTween__ValueTo(v46, v140, 0LL);
            return;
          }
LABEL_79:
          sub_1BCAA44(v56, v57);
        }
      }
    }
LABEL_80:
    v141 = sub_1BCAA60(v56);
    sub_1BCA908(v141, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4B1931C & 1) == 0 )
  {
    sub_1BCA7E0(&iTween_TypeInfo, method, v2);
    byte_4B1931C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v4);
  iTween__Stop_61049892(gameObject, 0LL);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v6);
}


void __fastcall BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *flashIcon; // x20
  __int64 v5; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  _BOOL4 flashFlg; // w8
  struct UnityEngine_GameObject_o *v8; // x19
  bool v9; // w1

  if ( (byte_4B1931D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1931D = 1;
  }
  flashIcon = (UnityEngine_Object_o *)this->fields.flashIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(flashIcon, 0LL, 0LL) )
  {
    skillInfo = this->fields.skillInfo;
    if ( skillInfo )
    {
      flashFlg = this->fields.flashFlg;
      v8 = this->fields.flashIcon;
      if ( flashFlg )
      {
        skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
        if ( v8 )
        {
          v9 = (int)skillInfo < 1;
          skillInfo = (BattleSkillInfoData_o *)v8;
LABEL_15:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, v9, 0LL);
          return;
        }
LABEL_16:
        sub_1BCAA3C(skillInfo, v5);
      }
      if ( !v8 )
        goto LABEL_16;
      skillInfo = (BattleSkillInfoData_o *)v8;
    }
    else
    {
      skillInfo = (BattleSkillInfoData_o *)this->fields.flashIcon;
      if ( !skillInfo )
        goto LABEL_16;
    }
    v9 = 0;
    goto LABEL_15;
  }
}


void __fastcall BattleServantSkillIConComponent__updateSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        float value,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *noActSprite; // x0
  float v9; // s9
  float v10; // s10
  float v11; // s11
  __int64 v12; // x1
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1931A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1931A = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_14;
  v9 = *((float *)noActSprite + 37);
  v10 = *((float *)noActSprite + 38);
  v11 = *((float *)noActSprite + 39);
  v14.fields.r = v9;
  v14.fields.g = v10;
  v14.fields.b = v11;
  v14.fields.a = value;
  UIWidget__set_color((UIWidget_o *)noActSprite, v14, 0LL);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL) )
  {
    noActSprite = this->fields.turnNoLabelBase;
    if ( noActSprite )
    {
      noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
      if ( noActSprite )
      {
        noActSprite = UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)noActSprite,
                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          v15.fields.r = v9;
          v15.fields.a = value;
          v15.fields.g = v10;
          v15.fields.b = v11;
          UIWidget__set_color((UIWidget_o *)noActSprite, v15, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(noActSprite, method);
  }
}