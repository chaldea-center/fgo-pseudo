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
  __int64 v6; // x1
  UnityEngine_GameObject_o *target; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v9; // x21

  if ( (byte_4B47FB4 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, isLong);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B47FB4 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      0LL);
  }
  target = this->fields.target;
  if ( !target )
LABEL_16:
    sub_1BDBAD4(target, isLong);
  v9 = UnityEngine_GameObject__GetComponent_object_(
         target,
         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v9 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v9, this->fields.skillInfo, isLong, 0LL);
      return;
    }
    goto LABEL_16;
  }
}


void __fastcall BattleServantSkillIConComponent__DeleteRankUpEffect(
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

  if ( (byte_4B47FB7 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FB7 = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
  {
    if ( !*p_rankupEffect )
      sub_1BDBAD4(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.rankupEffect, 0, v7, v8);
    this->fields.rankupSprite = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.rankupSprite, 0, v9, v10);
  }
}


int32_t __fastcall BattleServantSkillIConComponent__GetRankUpState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 methodPtr_low; // x11
  BattleRankUpSkillInfoData_c *v5; // x10
  BattleRankUpSkillInfoData_o *v6; // x0

  if ( (byte_4B47FB9 & 1) == 0 )
  {
    sub_1BDB878(&BattleRankUpSkillInfoData_TypeInfo, method);
    byte_4B47FB9 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return -1;
  methodPtr_low = LOBYTE(BattleRankUpSkillInfoData_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return -1;
  v5 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1];
  v6 = v5 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
  if ( v5 != BattleRankUpSkillInfoData_TypeInfo )
    return -1;
  if ( !v6 )
    sub_1BDBAD4(0LL, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4B47FB3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FB3 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 0, v4);
}


void __fastcall BattleServantSkillIConComponent__OnLongTapIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4B47FB2 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FB2 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 1, v4);
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
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object_40191676; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__50504592; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  v8 = this;
  if ( (byte_4B47FB8 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, resPath);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9);
    this = (BattleServantSkillIConComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B47FB8 = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_40191676 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_40191676(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0LL,
                                              0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_40191676, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_40191676 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_40191676,
                         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1BDB81C((CGThumbnailListItem_o *)&v8->fields.rankupEffect, (int32_t)Component_object, v15, v16);
    rankupEffect = (UnityEngine_Object_o *)v8->fields.rankupEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
    {
      this = *p_rankupEffect;
      if ( *p_rankupEffect )
      {
        CommonEffectComponent__Init((CommonEffectComponent_o *)this, isSkip, 0, 0LL);
        this = *p_rankupEffect;
        if ( *p_rankupEffect )
        {
          ComponentInChildren_object__50504592 = UnityEngine_Component__GetComponentInChildren_object__50504592(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_302A390 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__50504592;
          sub_1BDB81C(
            (CGThumbnailListItem_o *)&v8->fields.rankupSprite,
            (int32_t)ComponentInChildren_object__50504592,
            v19,
            v20);
          return 1;
        }
      }
LABEL_15:
      sub_1BDBAD4(this, resPath);
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
  int32_t v9; // w21
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v21; // x2
  struct UISprite_o *skillIcon; // x8
  float v23; // s0
  float v24; // s3
  float v25; // s1
  float v26; // s2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int32_t ChargeTurn; // w0
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v32; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  char v34; // w2
  const MethodInfo *v35; // x3
  struct UISprite_o *v36; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  UISprite_o *v43; // x22
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1

  v9 = sealSkillTurn;
  if ( (byte_4B47FA9 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, skillInfo);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_20245/*"icon_sealact_skill"*/, v14);
    sub_1BDB878(&StringLiteral_20243/*"icon_sealact_disable"*/, v15);
    sub_1BDB878(&StringLiteral_20244/*"icon_sealact_seal"*/, v16);
    byte_4B47FA9 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    isActSkill,
    *(const MethodInfo **)&sealSkillTurn);
  root = this->fields.root;
  if ( !root )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v19);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    BattleServantSkillIConComponent__setCollider(this, 0, v21);
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
        v23 = 1.0;
        v24 = 1.0;
      }
      else
      {
        if ( !skillIcon )
          goto LABEL_49;
        v24 = 1.0;
        v23 = 0.5;
      }
      v25 = v23;
      v26 = v23;
      UIWidget__set_color((UIWidget_o *)this->fields.skillIcon, *(UnityEngine_Color_o *)&v23, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v27);
      BattleServantSkillIConComponent__updateFlashSkill(this, v28);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v30);
    }
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
  {
    defaultNoActAtlas = (UnityEngine_Object_o *)this->fields.defaultNoActAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(defaultNoActAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)root & 1) != 0 )
    {
      v36 = this->fields.noActSprite;
      if ( !v36 )
        goto LABEL_49;
      mAtlas = v36->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.defaultNoActAtlas, (int32_t)mAtlas, v34, v35);
    }
    root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
    if ( root )
    {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL);
      if ( root )
      {
        if ( !(noActTurn | v9) )
        {
          UnityEngine_GameObject__SetActive(root, 0, 0LL);
          BattleServantSkillIConComponent__stopSealActSprite(this, v44);
          goto LABEL_46;
        }
        UnityEngine_GameObject__SetActive(root, 1, 0LL);
        this->fields.flashFlg = 0;
        BattleServantSkillIConComponent__updateFlashSkill(this, v38);
        if ( !v9 || noActTurn )
        {
          if ( v9 || !noActTurn )
          {
            BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v9, 0, v40);
            if ( isActSkill )
              goto LABEL_46;
            goto LABEL_45;
          }
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20245/*"icon_sealact_skill"*/,
            v39);
          BattleServantSkillIConComponent__stopSealActSprite(this, v45);
          v9 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20244/*"icon_sealact_seal"*/,
            v39);
          BattleServantSkillIConComponent__stopSealActSprite(this, v41);
          if ( IsSealSkillSelect )
          {
            v43 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(v43, (System_String_o *)StringLiteral_20243/*"icon_sealact_disable"*/, 0LL);
            if ( isActSkill )
              goto LABEL_46;
LABEL_45:
            BattleServantSkillIConComponent__setTurnLabel(this, v9, v42);
            goto LABEL_46;
          }
        }
        if ( isActSkill )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1BDBAD4(root, v17);
  }
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v32);
  BattleServantSkillIConComponent__SetUseCond(this, v46);
}


void __fastcall BattleServantSkillIConComponent__SetUseCond(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  UnityEngine_Object_o *useCondRoot; // x20
  __int64 v19; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x22
  UnityEngine_Object_o *v32; // x22
  UISprite_o *v33; // x22
  int32_t monitor; // w23
  int32_t v35; // w0
  int num; // w8
  Il2CppObject *MasterData_object; // x22
  int64_t v38; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v40; // x23
  UserItemEntity_o *v41; // x22
  bool v42; // w0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  UISprite_o *v46; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x23
  ItemMaster_o *v49; // x22
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  UISprite_o *v53; // x21
  Il2CppObject *v54; // x0
  System_String_o *v55; // x22
  UnityEngine_Object_o *v56; // x21
  UILabel_o *v57; // x19
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x1
  System_String_o *v62; // x0
  bool IsOpenCond; // w0
  System_String_o *v64; // x21
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  int32_t chargeTurn; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int v70; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B47FBB & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v7);
    sub_1BDB878(&int_TypeInfo, v8);
    sub_1BDB878(&LocalizationManager_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&Method_SingletonTemplate_BattleItemData__get_Instance__, v13);
    sub_1BDB878(&string_TypeInfo, v14);
    sub_1BDB878(&StringLiteral_993/*"-{0}"*/, v15);
    sub_1BDB878(&StringLiteral_2827/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v16);
    sub_1BDB878(&StringLiteral_23552/*"skill_item_{0}"*/, v17);
    byte_4B47FBB = 1;
  }
  entity = 0LL;
  useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondRoot, 0LL, 0LL) )
    return;
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_86;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__HasCond(skillInfo, 0LL);
  if ( !this->fields.useCondRoot )
    goto LABEL_86;
  if ( ((unsigned __int8)skillInfo & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
  v70 = 0;
  p_useCondItemIcon = &this->fields.useCondItemIcon;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondItemIcon, 0LL, 0LL) )
  {
    skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_86;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)skillInfo,
                                   (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.useCondItemIcon, (int32_t)ComponentInChildren_object, v24, v25);
  }
  p_useCondItemCountLabel = &this->fields.useCondItemCountLabel;
  useCondItemCountLabel = (UnityEngine_Object_o *)this->fields.useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondItemCountLabel, 0LL, 0LL) )
  {
    skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_86;
    v28 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v28;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.useCondItemCountLabel, (int32_t)v28, v29, v30);
  }
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)skillInfo,
                                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v31 )
    goto LABEL_86;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v31,
          &entity,
          (int32_t)skillInfo,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v32 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = (BattleSkillInfoData_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
  if ( ((unsigned __int8)skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_86;
    v33 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)AtlasManager__SetItem(v33, monitor, 0LL);
  }
  if ( !entity )
LABEL_86:
    sub_1BDBAD4(skillInfo, v19);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_86;
    v35 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v35 >= 999 )
      num = 999;
    else
      num = v35;
    goto LABEL_67;
  }
LABEL_38:
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v19);
    byte_4B3ED56 = 1;
  }
  skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v38 = *((_QWORD *)skillInfo[1].monitor + 8);
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !MasterData_object )
    goto LABEL_86;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)MasterData_object,
                       v38,
                       (int32_t)skillInfo,
                       0LL);
  v40 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v41 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v42 = UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
  if ( v41 )
  {
    if ( v42 )
    {
      skillInfo = (BattleSkillInfoData_o *)UserItemEntity__getItemInfo(v41, 0LL);
      v46 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        chargeTurn = skillInfo->fields.chargeTurn;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v43, v44, v45);
        v48 = System_String__Format((System_String_o *)StringLiteral_23552/*"skill_item_{0}"*/, v47, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v46, v48, 0LL);
      }
      else
      {
        if ( !v46 )
          goto LABEL_86;
        UISprite__set_spriteName(v46, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v41->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_67:
    v70 = num;
    goto LABEL_68;
  }
  if ( v42 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)skillInfo,
                                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_86;
    v49 = (ItemMaster_o *)skillInfo;
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !v49 )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)ItemMaster__GetItemData(v49, (int32_t)skillInfo, -1, 0LL);
    v53 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      chargeTurn = skillInfo->fields.chargeTurn;
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v50, v51, v52);
      v55 = System_String__Format((System_String_o *)StringLiteral_23552/*"skill_item_{0}"*/, v54, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v53, v55, 0LL);
    }
    else
    {
      if ( !v53 )
        goto LABEL_86;
      UISprite__set_spriteName(v53, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
LABEL_68:
  v56 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
  {
    skillInfo = this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_86;
    if ( skillInfo->fields.battleItemDispType )
    {
      v57 = *p_useCondItemCountLabel;
      chargeTurn = BattleSkillInfoData__GetCondItemNumber(skillInfo, 0LL);
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v58, v59, v60);
      v62 = (System_String_o *)StringLiteral_993/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond(skillInfo, 0LL);
      v57 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (BattleSkillInfoData_o *)System_Int32__ToString((int32_t)&v70, 0LL);
        if ( !v57 )
          goto LABEL_86;
        goto LABEL_81;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_2827/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      chargeTurn = v70;
      v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v65, v66, v67);
      v62 = v64;
    }
    skillInfo = (BattleSkillInfoData_o *)System_String__Format(v62, v61, 0LL);
    if ( !v57 )
      goto LABEL_86;
LABEL_81:
    UILabel__set_text(v57, (System_String_o *)skillInfo, 0LL);
    skillInfo = (BattleSkillInfoData_o *)*p_useCondItemCountLabel;
    if ( *p_useCondItemCountLabel )
    {
      UILabel__SetCondensedScale((UILabel_o *)skillInfo, 32, 0, 0LL);
      return;
    }
    goto LABEL_86;
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
    sub_1BDBAD4(noActSprite, spriteName);
  }
  UISprite__set_spriteName(noActSprite, spriteName, 0LL);
}


void __fastcall BattleServantSkillIConComponent__UpdateRankUpEffectState(
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

  if ( (byte_4B47FBA & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FBA = 1;
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noActSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v6 = 1.0;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(rankupSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
    if ( gameObject )
    {
      v9.fields.r = v7;
      v9.fields.g = v7;
      v9.fields.b = v7;
      v9.fields.a = v6;
      UIWidget__set_color((UIWidget_o *)gameObject, v9, 0LL);
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
    sub_1BDBAD4(gameObject, v4);
  }
}


bool __fastcall BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 methodPtr_low; // x11
  BattleRankUpSkillInfoData_c *v7; // x10
  BattleRankUpSkillInfoData_o *v8; // x0
  bool v9; // w21
  int32_t RankUpState; // w0
  int32_t v12; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v14; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B47FB6 & 1) == 0 )
  {
    sub_1BDB878(&BattleRankUpSkillInfoData_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_18896/*"effect/data/effect/ef_skill_rankup01"*/, v4);
    byte_4B47FB6 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    methodPtr_low = LOBYTE(BattleRankUpSkillInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v7 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1];
      v8 = v7 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
      if ( v7 == BattleRankUpSkillInfoData_TypeInfo )
      {
        if ( v8 )
        {
          RankUpState = BattleRankUpSkillInfoData__GetRankUpState(v8, 0LL);
          if ( RankUpState )
          {
            v12 = RankUpState;
            if ( (unsigned int)(RankUpState - 1) <= 1 )
            {
              rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0LL, 0LL) )
              {
                v9 = BattleServantSkillIConComponent__PlayRankUpEffect(
                       this,
                       (System_String_o *)StringLiteral_18896/*"effect/data/effect/ef_skill_rankup01"*/,
                       this->fields.rankupRoot,
                       v12 != 1,
                       v14);
LABEL_24:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, method);
                return v9;
              }
            }
LABEL_23:
            v9 = 0;
            goto LABEL_24;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v16 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
            goto LABEL_23;
          v8 = (BattleRankUpSkillInfoData_o *)*p_rankupEffect;
          if ( *p_rankupEffect )
          {
            v9 = 1;
            ((void (__fastcall *)(BattleRankUpSkillInfoData_o *, __int64, _QWORD, Il2CppMethodPointer))v8->klass->vtable._8_PreLoad.method)(
              v8,
              1LL,
              0LL,
              v8->klass->vtable._9_UnLoad.methodPtr);
            *p_rankupEffect = 0LL;
            sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.rankupEffect, 0, v17, v18);
            goto LABEL_24;
          }
        }
        sub_1BDBAD4(v8, method);
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
  if ( (byte_4B47FB1 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    byte_4B47FB1 = 1;
  }
  skillInfo = v4->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_27;
  if ( skillInfo->fields.isPassive )
    return;
  turnNoLabelBase = (UnityEngine_Object_o *)v4->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(turnNoLabelBase, 0LL, 0LL) )
  {
    turnNoLabel = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1BDBAD4(this, *(_QWORD *)&turn);
    }
    v8 = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL4 isTweenReverse; // w8
  const MethodInfo *v8; // x2
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *noActSprite; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4B47FAE & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_20245/*"icon_sealact_skill"*/, v4);
    sub_1BDB878(&StringLiteral_20243/*"icon_sealact_disable"*/, v5);
    sub_1BDB878(&StringLiteral_20244/*"icon_sealact_seal"*/, v6);
    byte_4B47FAE = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20244/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v8);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20243/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20245/*"icon_sealact_skill"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v11);
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
  __int64 v6; // x1
  __int64 gameObject; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v10; // x21
  UnityEngine_Transform_o *v11; // x19

  if ( (byte_4B47FA8 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B47FA8 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BDBAD4(gameObject, v8);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)gameObject,
          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) && !flg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v11 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4B3E916 )
      {
        gameObject = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v8);
        byte_4B3E916 = 1;
      }
      if ( v11 )
      {
        UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        return;
      }
    }
    goto LABEL_20;
  }
}


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
      sub_1BDBAD4(0LL, val);
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
  UISprite_o *skillIcon; // x19
  int32_t itemImageId; // w20
  int32_t v8; // w20

  v4 = this;
  if ( (byte_4B47FAA & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1BDB878(&AtlasManager_TypeInfo, skillInfo);
    byte_4B47FAA = 1;
  }
  if ( !skillInfo )
    sub_1BDBAD4(this, skillInfo);
  isItemIcon = BattleSkillInfoData__isItemIcon(skillInfo, 0LL);
  skillIcon = v4->fields.skillIcon;
  if ( isItemIcon )
  {
    itemImageId = skillInfo->fields.itemImageId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(skillIcon, itemImageId, 0LL);
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
           skillInfo,
           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSkillIcon(skillIcon, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__setTurnLabel(
        BattleServantSkillIConComponent_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *turnNoLabelBase; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *turnNoLabel; // x20
  int v11; // w8
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B47FAB & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&turn);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v6);
    byte_4B47FAB = 1;
  }
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v11 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v16 = BattleUtility__FloorToInt((float)(v11 >> 1), 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v12, v13, v14);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25175/*"{0}"*/, v15, 0LL);
    if ( !turnNoLabel )
LABEL_16:
      sub_1BDBAD4(gameObject, v8);
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
  struct BattleSkillInfoData_o *skillInfo; // x8
  bool result; // w0
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B47FB5 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18904/*"effect/ef_command_flash01"*/, method);
    byte_4B47FB5 = 1;
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
      sub_1BDBAD4(0LL, method);
    transform = UnityEngine_GameObject__get_transform(root, 0LL);
    BaseMonoBehaviour__createObject_40191676(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_18904/*"effect/ef_command_flash01"*/,
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  UISprite_o *noActSprite; // x22
  UnityEngine_GameObject_o *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  System_Object_array *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x22
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x22
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  const MethodInfo *v59; // x3
  Il2CppObject *v60; // x19
  System_Collections_Hashtable_o *v61; // x0
  __int64 v62; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v64; // [xsp+18h] [xbp-38h] BYREF
  int v65; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B47FAC & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&noActTurn);
    sub_1BDB878(&object___TypeInfo, v8);
    sub_1BDB878(&float_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_19705/*"from"*/, v10);
    sub_1BDB878(&StringLiteral_21367/*"loopType"*/, v11);
    sub_1BDB878(&StringLiteral_24121/*"time"*/, v12);
    sub_1BDB878(&StringLiteral_22457/*"onupdate"*/, v13);
    sub_1BDB878(&StringLiteral_22722/*"pingPong"*/, v14);
    sub_1BDB878(&StringLiteral_18755/*"easeOutCirc"*/, v15);
    sub_1BDB878(&StringLiteral_24160/*"to"*/, v16);
    sub_1BDB878(&StringLiteral_24501/*"updateSealActSpriteValues"*/, v17);
    sub_1BDB878(&StringLiteral_18194/*"completeSealActSpriteValues"*/, v18);
    sub_1BDB878(&StringLiteral_18763/*"easeType"*/, v19);
    sub_1BDB878(&StringLiteral_20243/*"icon_sealact_disable"*/, v20);
    sub_1BDB878(&StringLiteral_20244/*"icon_sealact_seal"*/, v21);
    sub_1BDB878(&StringLiteral_22449/*"oncomplete"*/, v22);
    sub_1BDB878(&iTween_TypeInfo, v23);
    byte_4B47FAC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_62318364(gameObject, 0LL) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20244/*"icon_sealact_seal"*/, v25);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20243/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v26);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v29 = sub_1BDB920(object___TypeInfo, 14LL);
    if ( !v29 )
      sub_1BDBAD4(0LL, v30);
    v33 = (System_Object_array *)v29;
    v34 = StringLiteral_19705/*"from"*/;
    if ( StringLiteral_19705/*"from"*/ )
    {
      v34 = sub_1BDB9B4(StringLiteral_19705/*"from"*/, v33->obj.klass->_1.element_class);
      if ( !v34 )
        goto LABEL_80;
      v35 = StringLiteral_19705/*"from"*/;
    }
    else
    {
      v35 = 0LL;
    }
    if ( !v33->max_length )
      goto LABEL_79;
    v33->m_Items[0] = (Il2CppObject *)v35;
    sub_1BDB81C((CGThumbnailListItem_o *)v33->m_Items, v35, v31, v32);
    v65 = 0;
    v34 = j_il2cpp_value_box_0(float_TypeInfo, &v65, v36, v37, v38);
    v40 = (Il2CppObject *)v34;
    if ( !v34 || (v34 = sub_1BDB9B4(v34, v33->obj.klass->_1.element_class)) != 0 )
    {
      if ( v33->max_length <= 1 )
        goto LABEL_79;
      v33->m_Items[1] = v40;
      sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[1], (int32_t)v40, v31, v39);
      v34 = StringLiteral_24160/*"to"*/;
      if ( StringLiteral_24160/*"to"*/ )
      {
        v34 = sub_1BDB9B4(StringLiteral_24160/*"to"*/, v33->obj.klass->_1.element_class);
        if ( !v34 )
          goto LABEL_80;
        v35 = StringLiteral_24160/*"to"*/;
      }
      else
      {
        v35 = 0LL;
      }
      if ( v33->max_length <= 2 )
        goto LABEL_79;
      v33->m_Items[2] = (Il2CppObject *)v35;
      sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[2], v35, v31, v41);
      v64 = 1065353216;
      v34 = j_il2cpp_value_box_0(float_TypeInfo, &v64, v42, v43, v44);
      v46 = (Il2CppObject *)v34;
      if ( !v34 || (v34 = sub_1BDB9B4(v34, v33->obj.klass->_1.element_class)) != 0 )
      {
        if ( v33->max_length <= 3 )
          goto LABEL_79;
        v33->m_Items[3] = v46;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[3], (int32_t)v46, v31, v45);
        v34 = StringLiteral_22457/*"onupdate"*/;
        if ( StringLiteral_22457/*"onupdate"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_22457/*"onupdate"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_22457/*"onupdate"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 4 )
          goto LABEL_79;
        v33->m_Items[4] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[4], v35, v31, v47);
        v34 = StringLiteral_24501/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24501/*"updateSealActSpriteValues"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_24501/*"updateSealActSpriteValues"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_24501/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 5 )
          goto LABEL_79;
        v33->m_Items[5] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[5], v35, v31, v48);
        v34 = StringLiteral_22449/*"oncomplete"*/;
        if ( StringLiteral_22449/*"oncomplete"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_22449/*"oncomplete"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_22449/*"oncomplete"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 6 )
          goto LABEL_79;
        v33->m_Items[6] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[6], v35, v31, v49);
        v34 = StringLiteral_18194/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18194/*"completeSealActSpriteValues"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_18194/*"completeSealActSpriteValues"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_18194/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 7 )
          goto LABEL_79;
        v33->m_Items[7] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[7], v35, v31, v50);
        v34 = StringLiteral_21367/*"loopType"*/;
        if ( StringLiteral_21367/*"loopType"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_21367/*"loopType"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_21367/*"loopType"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 8 )
          goto LABEL_79;
        v33->m_Items[8] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[8], v35, v31, v51);
        v34 = StringLiteral_22722/*"pingPong"*/;
        if ( StringLiteral_22722/*"pingPong"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_22722/*"pingPong"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_22722/*"pingPong"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 9 )
          goto LABEL_79;
        v33->m_Items[9] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[9], v35, v31, v52);
        v34 = StringLiteral_18763/*"easeType"*/;
        if ( StringLiteral_18763/*"easeType"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_18763/*"easeType"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_18763/*"easeType"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 0xA )
          goto LABEL_79;
        v33->m_Items[10] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[10], v35, v31, v53);
        v34 = StringLiteral_18755/*"easeOutCirc"*/;
        if ( StringLiteral_18755/*"easeOutCirc"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_18755/*"easeOutCirc"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_18755/*"easeOutCirc"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 0xB )
          goto LABEL_79;
        v33->m_Items[11] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[11], v35, v31, v54);
        v34 = StringLiteral_24121/*"time"*/;
        if ( StringLiteral_24121/*"time"*/ )
        {
          v34 = sub_1BDB9B4(StringLiteral_24121/*"time"*/, v33->obj.klass->_1.element_class);
          if ( !v34 )
            goto LABEL_80;
          v35 = StringLiteral_24121/*"time"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( v33->max_length <= 0xC )
          goto LABEL_79;
        v33->m_Items[12] = (Il2CppObject *)v35;
        sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[12], v35, v31, v55);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v34 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite, v56, v57, v58);
        v60 = (Il2CppObject *)v34;
        if ( !v34 || (v34 = sub_1BDB9B4(v34, v33->obj.klass->_1.element_class)) != 0 )
        {
          if ( v33->max_length > 0xD )
          {
            v33->m_Items[13] = v60;
            sub_1BDB81C((CGThumbnailListItem_o *)&v33->m_Items[13], (int32_t)v60, v31, v59);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v61 = iTween__Hash(v33, 0LL);
            iTween__ValueTo(v28, v61, 0LL);
            return;
          }
LABEL_79:
          sub_1BDBADC(v34, v35, v31);
        }
      }
    }
LABEL_80:
    v62 = sub_1BDBAF8(v34);
    sub_1BDB9A0(v62, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4B47FAF & 1) == 0 )
  {
    sub_1BDB878(&iTween_TypeInfo, method);
    byte_4B47FAF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62320164(gameObject, 0LL);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v4);
}


void __fastcall BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashIcon; // x20
  __int64 v4; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  _BOOL4 flashFlg; // w8
  struct UnityEngine_GameObject_o *v7; // x19
  bool v8; // w1

  if ( (byte_4B47FB0 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B47FB0 = 1;
  }
  flashIcon = (UnityEngine_Object_o *)this->fields.flashIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(flashIcon, 0LL, 0LL) )
  {
    skillInfo = this->fields.skillInfo;
    if ( skillInfo )
    {
      flashFlg = this->fields.flashFlg;
      v7 = this->fields.flashIcon;
      if ( flashFlg )
      {
        skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
        if ( v7 )
        {
          v8 = (int)skillInfo < 1;
          skillInfo = (BattleSkillInfoData_o *)v7;
LABEL_15:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, v8, 0LL);
          return;
        }
LABEL_16:
        sub_1BDBAD4(skillInfo, v4);
      }
      if ( !v7 )
        goto LABEL_16;
      skillInfo = (BattleSkillInfoData_o *)v7;
    }
    else
    {
      skillInfo = (BattleSkillInfoData_o *)this->fields.flashIcon;
      if ( !skillInfo )
        goto LABEL_16;
    }
    v8 = 0;
    goto LABEL_15;
  }
}


void __fastcall BattleServantSkillIConComponent__updateSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        float value,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *noActSprite; // x0
  float v7; // s9
  float v8; // s10
  float v9; // s11
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B47FAD & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B47FAD = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_14;
  v7 = *((float *)noActSprite + 37);
  v8 = *((float *)noActSprite + 38);
  v9 = *((float *)noActSprite + 39);
  v11.fields.r = v7;
  v11.fields.g = v8;
  v11.fields.b = v9;
  v11.fields.a = value;
  UIWidget__set_color((UIWidget_o *)noActSprite, v11, 0LL);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                        (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          v12.fields.r = v7;
          v12.fields.a = value;
          v12.fields.g = v8;
          v12.fields.b = v9;
          UIWidget__set_color((UIWidget_o *)noActSprite, v12, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BDBAD4(noActSprite, method);
  }
}