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
  UnityEngine_GameObject_o *target; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *v8; // x21

  if ( (byte_438E204 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E204 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      target,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_18;
    BattleServantParamComponent__clickSkillIcon(
      (BattleServantParamComponent_o *)Component_srcLineSprite,
      this->fields.skillInfo,
      isLong,
      v7);
  }
  target = this->fields.target;
  if ( !target )
LABEL_18:
    sub_B7769C(target, isLong);
  v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 target,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v8 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v8, this->fields.skillInfo, isLong, 0LL);
      return;
    }
    goto LABEL_18;
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438E207 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E207 = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
  {
    if ( !*p_rankupEffect )
      sub_B7769C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.rankupSprite = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.rankupSprite, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


int32_t __fastcall BattleServantSkillIConComponent__GetRankUpState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 v4; // x11
  BattleRankUpSkillInfoData_c *v5; // x10
  BattleRankUpSkillInfoData_o *v6; // x0

  if ( (byte_438E209 & 1) == 0 )
  {
    sub_B775C4(&BattleRankUpSkillInfoData_TypeInfo);
    byte_438E209 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return -1;
  v4 = *(&BattleRankUpSkillInfoData_TypeInfo->_2.bitflags2 + 1);
  if ( *(&skillInfo->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return -1;
  v5 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[v4 - 1];
  v6 = v5 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
  if ( v5 != BattleRankUpSkillInfoData_TypeInfo )
    return -1;
  if ( !v6 )
    sub_B7769C(0LL, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E203 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E203 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 0, v4);
}


void __fastcall BattleServantSkillIConComponent__OnLongTapIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E202 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E202 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object_22413920; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *rankupEffect; // x22
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  v8 = this;
  if ( (byte_438E208 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (BattleServantSkillIConComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E208 = 1;
  }
  if ( !root )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_22413920 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_22413920(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0LL,
                                              0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_22413920, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_22413920 )
      goto LABEL_17;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)Object_22413920,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_srcLineSprite;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->fields.rankupEffect,
      Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    rankupEffect = (UnityEngine_Object_o *)v8->fields.rankupEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
    {
      this = *p_rankupEffect;
      if ( *p_rankupEffect )
      {
        CommonEffectComponent__Init((CommonEffectComponent_o *)this, isSkip, 0, 0LL);
        this = *p_rankupEffect;
        if ( *p_rankupEffect )
        {
          ComponentInChildren_UIWidget = (System_Int32_array **)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_UIWidget;
          sub_B77560(
            (BattleServantConfConponent_o *)&v8->fields.rankupSprite,
            ComponentInChildren_UIWidget,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          return 1;
        }
      }
LABEL_17:
      sub_B7769C(this, resPath);
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
  System_Int32_array *v7; // x7
  int32_t v10; // w21
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v18; // x2
  UIWidget_o *skillIcon; // x25
  int v20; // s0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UISprite_o *v36; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  UISprite_o *v44; // x22
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1

  v10 = sealSkillTurn;
  if ( (byte_438E1F9 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19754/*"icon_sealact_skill"*/);
    sub_B775C4(&StringLiteral_19752/*"icon_sealact_disable"*/);
    sub_B775C4(&StringLiteral_19753/*"icon_sealact_seal"*/);
    byte_438E1F9 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillInfo,
    (System_Int32_array **)skillInfo,
    (System_String_array **)isActSkill,
    *(System_String_array ***)&sealSkillTurn,
    *(System_Boolean_array ***)&noActTurn,
    (System_Int32_array **)IsSealSkillSelect,
    (System_Int32_array *)method,
    v7);
  root = this->fields.root;
  if ( !root )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v16);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( !skillInfo )
      goto LABEL_53;
    if ( skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)this->fields.turnNoLabelBase;
      if ( !root )
        goto LABEL_53;
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL);
      if ( !root )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive(root, 0, 0LL);
    }
  }
  if ( this->fields.showType == 2 )
  {
    BattleServantSkillIConComponent__setCollider(this, 0, v18);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_53;
    if ( !skillInfo->fields.isPassive )
    {
      if ( skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn <= 0
        && BattleSkillInfoData__IsOpenCond(skillInfo, v14) )
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
        if ( !skillIcon )
          goto LABEL_53;
      }
      else
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_gray(0LL);
        if ( !skillIcon )
          goto LABEL_53;
      }
      UIWidget__set_color(skillIcon, *(UnityEngine_Color_o *)&v20, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v24);
      BattleServantSkillIConComponent__updateFlashSkill(this, v25);
      BattleServantSkillIConComponent__changeTurnCount(
        this,
        skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn,
        v26);
    }
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
    goto LABEL_46;
  defaultNoActAtlas = (UnityEngine_Object_o *)this->fields.defaultNoActAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(defaultNoActAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    v36 = this->fields.noActSprite;
    if ( !v36 )
      goto LABEL_53;
    mAtlas = v36->fields.mAtlas;
    this->fields.defaultNoActAtlas = mAtlas;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.defaultNoActAtlas,
      (System_Int32_array **)mAtlas,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
LABEL_53:
    sub_B7769C(root, v14);
  if ( !(noActTurn | v10) )
  {
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
    BattleServantSkillIConComponent__stopSealActSprite(this, v38);
    goto LABEL_46;
  }
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.flashFlg = 0;
  BattleServantSkillIConComponent__updateFlashSkill(this, v39);
  if ( !v10 || noActTurn )
  {
    if ( v10 || !noActTurn )
    {
      BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v10, 0, v41);
      if ( isActSkill )
        goto LABEL_46;
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
        this,
        (System_String_o *)StringLiteral_19754/*"icon_sealact_skill"*/,
        v40);
      BattleServantSkillIConComponent__stopSealActSprite(this, v46);
      v10 = noActTurn;
      if ( isActSkill )
        goto LABEL_46;
    }
    goto LABEL_45;
  }
  BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_19753/*"icon_sealact_seal"*/, v40);
  BattleServantSkillIConComponent__stopSealActSprite(this, v42);
  if ( IsSealSkillSelect )
  {
    v44 = this->fields.noActSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v44, (System_String_o *)StringLiteral_19752/*"icon_sealact_disable"*/, 0LL);
  }
  if ( !isActSkill )
LABEL_45:
    BattleServantSkillIConComponent__setTurnLabel(this, v10, v43);
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v28);
  BattleServantSkillIConComponent__SetUseCond(this, v45);
}


void __fastcall BattleServantSkillIConComponent__SetUseCond(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v4; // x1
  int64_t skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x22
  UnityEngine_Object_o *v25; // x22
  UISprite_o *v26; // x22
  int32_t longName; // w23
  int32_t num; // w0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t v30; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v32; // x23
  UserItemEntity_o *v33; // x22
  __int64 v34; // x2
  UISprite_o *v35; // x21
  Il2CppObject *v36; // x0
  System_String_o *v37; // x23
  ItemMaster_o *v38; // x22
  __int64 v39; // x2
  UISprite_o *v40; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x22
  UnityEngine_Object_o *v43; // x21
  UILabel_o *v44; // x19
  __int64 v45; // x2
  Il2CppObject *v46; // x1
  System_String_o *v47; // x0
  bool IsOpenCond; // w0
  System_String_o *v49; // x21
  __int64 v50; // x2
  int32_t CondItemNumber; // [xsp+Ch] [xbp-54h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v53; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_438E20B & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_B775C4(&SingletonTemplate_BattleItemData__TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_819/*"-{0}"*/);
    sub_B775C4(&StringLiteral_2558/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_B775C4(&StringLiteral_22622/*"skill_item_{0}"*/);
    byte_438E20B = 1;
  }
  v53 = 0;
  entity = 0LL;
  useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(useCondRoot, 0LL, 0LL) )
    return;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_96;
  skillInfo = BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)skillInfo, v4);
  if ( !this->fields.useCondRoot )
    goto LABEL_96;
  if ( (skillInfo & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
  v53 = 0;
  p_useCondItemIcon = &this->fields.useCondItemIcon;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(useCondItemIcon, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_96;
    ComponentInChildren_Dropdown_DropdownItem = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                         (UnityEngine_GameObject_o *)skillInfo,
                                                                         (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_Dropdown_DropdownItem;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.useCondItemIcon,
      ComponentInChildren_Dropdown_DropdownItem,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  p_useCondItemCountLabel = &this->fields.useCondItemCountLabel;
  useCondItemCountLabel = (UnityEngine_Object_o *)this->fields.useCondItemCountLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(useCondItemCountLabel, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_96;
    v17 = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                   (UnityEngine_GameObject_o *)skillInfo,
                                   (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v17;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.useCondItemCountLabel, v17, v18, v19, v20, v21, v22, v23);
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_96;
  skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_96;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v4);
  if ( !v24 )
    goto LABEL_96;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v24,
          &entity,
          skillInfo,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_44;
  v25 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  skillInfo = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_96;
    v26 = *p_useCondItemIcon;
    longName = (int32_t)entity->fields.longName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    skillInfo = AtlasManager__SetItem(v26, longName, 0LL);
  }
  if ( !entity )
LABEL_96:
    sub_B7769C(skillInfo, v4);
  if ( entity->fields.bannerId == 35 )
  {
    if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
    }
    skillInfo = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_96;
    num = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, entity->fields.id, 0LL);
    goto LABEL_75;
  }
LABEL_44:
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)skillInfo,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_96;
  v30 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v4);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_96;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v30, skillInfo, 0LL);
  v32 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( EntityDefinitely )
  {
    v33 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v33, 0LL);
      v35 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        CondItemNumber = *(_DWORD *)(skillInfo + 40);
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v34);
        v37 = System_String__Format((System_String_o *)StringLiteral_22622/*"skill_item_{0}"*/, v36, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v35, v37, 0LL);
      }
      else
      {
        if ( !v35 )
          goto LABEL_96;
        UISprite__set_spriteName(v35, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v33->fields.num;
LABEL_75:
    v53 = UnityEngine_Mathf__Min_41473676(num, 999, 0LL);
    goto LABEL_76;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_96;
    skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)skillInfo,
                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_96;
    v38 = (ItemMaster_o *)skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v4);
    if ( !v38 )
      goto LABEL_96;
    skillInfo = (int64_t)ItemMaster__GetItemData(v38, skillInfo, 0LL);
    v40 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      CondItemNumber = *(_DWORD *)(skillInfo + 40);
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v39);
      v42 = System_String__Format((System_String_o *)StringLiteral_22622/*"skill_item_{0}"*/, v41, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v40, v42, 0LL);
    }
    else
    {
      if ( !v40 )
        goto LABEL_96;
      UISprite__set_spriteName(v40, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
LABEL_76:
  v43 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_96;
    if ( *(_DWORD *)(skillInfo + 136) )
    {
      v44 = *p_useCondItemCountLabel;
      CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, v4);
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v45);
      v47 = (System_String_o *)StringLiteral_819/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, v4);
      v44 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&v53, 0LL);
        if ( !v44 )
          goto LABEL_96;
        goto LABEL_91;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2558/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      CondItemNumber = v53;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v50);
      v47 = v49;
    }
    skillInfo = (int64_t)System_String__Format(v47, v46, 0LL);
    if ( !v44 )
      goto LABEL_96;
LABEL_91:
    UILabel__set_text(v44, (System_String_o *)skillInfo, 0LL);
    skillInfo = (int64_t)*p_useCondItemCountLabel;
    if ( *p_useCondItemCountLabel )
    {
      UILabel__SetCondensedScale((UILabel_o *)skillInfo, 32, 0LL);
      return;
    }
    goto LABEL_96;
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
    sub_B7769C(noActSprite, spriteName);
  }
  UISprite__set_spriteName(noActSprite, spriteName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__UpdateRankUpEffectState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noActSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool activeSelf; // w21
  UnityEngine_Object_o *rankupSprite; // x20
  UIWidget_o *v8; // x20
  int v9; // s0

  if ( (byte_438E20A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E20A = 1;
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noActSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
LABEL_22:
      sub_B7769C(gameObject, v4);
    }
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  }
  else
  {
    activeSelf = 0;
  }
  rankupSprite = (UnityEngine_Object_o *)this->fields.rankupSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rankupSprite, 0LL, 0LL) )
  {
    v8 = (UIWidget_o *)this->fields.rankupSprite;
    if ( activeSelf )
    {
      *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_gray(0LL);
      if ( !v8 )
        goto LABEL_22;
    }
    else
    {
      *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
      if ( !v8 )
        goto LABEL_22;
    }
    UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
    if ( !gameObject )
      goto LABEL_22;
    (*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
      gameObject,
      gameObject->klass[2]._1.element_class);
  }
}


bool __fastcall BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 v4; // x11
  BattleRankUpSkillInfoData_c *v5; // x10
  BattleRankUpSkillInfoData_o *v6; // x0
  bool v7; // w21
  int32_t RankUpState; // w0
  int32_t v10; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v12; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_438E206 & 1) == 0 )
  {
    sub_B775C4(&BattleRankUpSkillInfoData_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_18602/*"effect/data/effect/ef_skill_rankup01"*/);
    byte_438E206 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    v4 = *(&BattleRankUpSkillInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v4 )
    {
      v5 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[v4 - 1];
      v6 = v5 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
      if ( v5 == BattleRankUpSkillInfoData_TypeInfo )
      {
        if ( v6 )
        {
          RankUpState = BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
          if ( RankUpState )
          {
            v10 = RankUpState;
            if ( (unsigned int)(RankUpState - 1) <= 1 )
            {
              rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0LL, 0LL) )
              {
                v7 = BattleServantSkillIConComponent__PlayRankUpEffect(
                       this,
                       (System_String_o *)StringLiteral_18602/*"effect/data/effect/ef_skill_rankup01"*/,
                       this->fields.rankupRoot,
                       v10 != 1,
                       v12);
LABEL_26:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, method);
                return v7;
              }
            }
LABEL_25:
            v7 = 0;
            goto LABEL_26;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v14 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
            goto LABEL_25;
          v6 = (BattleRankUpSkillInfoData_o *)*p_rankupEffect;
          if ( *p_rankupEffect )
          {
            v7 = 1;
            ((void (__fastcall *)(BattleRankUpSkillInfoData_o *, __int64, _QWORD, Il2CppMethodPointer))v6->klass->vtable._8_PreLoad.method)(
              v6,
              1LL,
              0LL,
              v6->klass->vtable._9_UnLoad.methodPtr);
            *p_rankupEffect = 0LL;
            sub_B77560((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v15, v16, v17, v18, v19, v20);
            goto LABEL_26;
          }
        }
        sub_B7769C(v6, method);
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
  if ( (byte_438E201 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E201 = 1;
  }
  skillInfo = v4->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_30;
  if ( skillInfo->fields.isPassive )
    return;
  turnNoLabelBase = (UnityEngine_Object_o *)v4->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(turnNoLabelBase, 0LL, 0LL) )
  {
    turnNoLabel = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(turnNoLabel, 0LL, 0LL) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabel;
      if ( !this )
        goto LABEL_30;
      this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_30;
      if ( turn < 1 )
      {
LABEL_29:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        return;
      }
LABEL_25:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v9 = v4->fields.turnNoLabel;
      this = (BattleServantSkillIConComponent_o *)System_Int32__ToString((int32_t)&v10, 0LL);
      if ( v9 )
      {
        UILabel__set_text(v9, (System_String_o *)this, 0LL);
        return;
      }
      goto LABEL_30;
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
          goto LABEL_29;
      }
LABEL_30:
      sub_B7769C(this, *(_QWORD *)&turn);
    }
    v8 = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabelBase;
      if ( !this )
        goto LABEL_30;
      this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_30;
      goto LABEL_25;
    }
  }
}


void __fastcall BattleServantSkillIConComponent__completeSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isTweenReverse; // w8
  const MethodInfo *v5; // x2
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *noActSprite; // x19
  const MethodInfo *v8; // x2

  if ( (byte_438E1FE & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&StringLiteral_19754/*"icon_sealact_skill"*/);
    sub_B775C4(&StringLiteral_19752/*"icon_sealact_disable"*/);
    sub_B775C4(&StringLiteral_19753/*"icon_sealact_seal"*/);
    byte_438E1FE = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_19753/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v5);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_19752/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_19754/*"icon_sealact_skill"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v8);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Transform_o *transform; // x19
  int v10; // s0

  if ( (byte_438E1F8 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1F8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_20;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_srcLineSprite, flg, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_B7769C(gameObject, v6);
  v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) && !flg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
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
      sub_B7769C(0LL, val);
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__setSkillIcon(
        BattleServantSkillIConComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleServantSkillIConComponent_o *v4; // x19
  int32_t itemImageId; // w21
  UISprite_o *skillIcon; // x19
  int32_t v7; // w20

  v4 = this;
  if ( (byte_438E1FA & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_B775C4(&AtlasManager_TypeInfo);
    byte_438E1FA = 1;
  }
  if ( !skillInfo )
    sub_B7769C(this, skillInfo);
  itemImageId = skillInfo->fields.itemImageId;
  skillIcon = v4->fields.skillIcon;
  if ( itemImageId == -1 )
  {
    v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
           skillInfo,
           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
           method);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetSkillIcon(skillIcon, v7, 0LL);
  }
  else
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(skillIcon, itemImageId, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__setTurnLabel(
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
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E1FB & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    byte_438E1FB = 1;
  }
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    if ( (turn & 0x80000000) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    turnNoLabel = this->fields.turnNoLabel;
    v9 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v12 = BattleUtility__FloorToInt((float)(v9 >> 1), 0LL);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v10);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_24025/*"{0}"*/, v11, 0LL);
    if ( !turnNoLabel )
LABEL_17:
      sub_B7769C(gameObject, v6);
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

  if ( (byte_438E205 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18610/*"effect/ef_command_flash01"*/);
    byte_438E205 = 1;
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
      sub_B7769C(0LL, method);
    transform = UnityEngine_GameObject__get_transform(root, 0LL);
    BaseMonoBehaviour__createObject_22413920(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_18610/*"effect/ef_command_flash01"*/,
      transform,
      0LL,
      0LL);
    return 1;
  }
  return result;
}


void __fastcall BattleServantSkillIConComponent__startChangeSealActSprite(
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Object_array *v21; // x21
  __int64 v22; // x0
  System_Int32_array **v23; // x1
  __int64 v24; // x2
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  __int64 v39; // x2
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x1
  __int64 v110; // x2
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x19
  System_Collections_Hashtable_o *v118; // x0
  __int64 v119; // x0
  __int64 v120; // x0
  float changeTimeSealSprite; // [xsp+4h] [xbp-3Ch] BYREF
  int v122; // [xsp+8h] [xbp-38h] BYREF
  int v123; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438E1FC & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_20739/*"loopType"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_21929/*"pingPong"*/);
    sub_B775C4(&StringLiteral_18467/*"easeOutCirc"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_23421/*"updateSealActSpriteValues"*/);
    sub_B775C4(&StringLiteral_17982/*"completeSealActSpriteValues"*/);
    sub_B775C4(&StringLiteral_18475/*"easeType"*/);
    sub_B775C4(&StringLiteral_19752/*"icon_sealact_disable"*/);
    sub_B775C4(&StringLiteral_19753/*"icon_sealact_seal"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438E1FC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_43293116(gameObject, 0LL) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_19753/*"icon_sealact_seal"*/, v9);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_19752/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v10);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_B775DC(object___TypeInfo, 14LL);
    if ( !v13 )
      sub_B7769C(0LL, v14);
    v21 = (System_Object_array *)v13;
    v22 = StringLiteral_19296/*"from"*/;
    if ( StringLiteral_19296/*"from"*/ )
    {
      v22 = sub_B77684(StringLiteral_19296/*"from"*/, v21->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_83;
      v23 = (System_Int32_array **)StringLiteral_19296/*"from"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v21->max_length )
      goto LABEL_82;
    v21->m_Items[0] = (Il2CppObject *)v23;
    sub_B77560((BattleServantConfConponent_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
    v123 = 0;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &v123, v24);
    v31 = (System_Int32_array **)v22;
    if ( !v22 || (v22 = sub_B77684(v22, v21->obj.klass->_1.element_class)) != 0 )
    {
      if ( v21->max_length <= 1 )
        goto LABEL_82;
      v21->m_Items[1] = (Il2CppObject *)v31;
      sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
      v22 = StringLiteral_23192/*"to"*/;
      if ( StringLiteral_23192/*"to"*/ )
      {
        v22 = sub_B77684(StringLiteral_23192/*"to"*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_83;
        v38 = (System_Int32_array **)StringLiteral_23192/*"to"*/;
      }
      else
      {
        v38 = 0LL;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_82;
      v21->m_Items[2] = (Il2CppObject *)v38;
      sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
      v122 = 1065353216;
      v22 = j_il2cpp_value_box_0(float_TypeInfo, &v122, v39);
      v46 = (System_Int32_array **)v22;
      if ( !v22 || (v22 = sub_B77684(v22, v21->obj.klass->_1.element_class)) != 0 )
      {
        if ( v21->max_length <= 3 )
          goto LABEL_82;
        v21->m_Items[3] = (Il2CppObject *)v46;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
        v22 = StringLiteral_21711/*"onupdate"*/;
        if ( StringLiteral_21711/*"onupdate"*/ )
        {
          v22 = sub_B77684(StringLiteral_21711/*"onupdate"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v53 = (System_Int32_array **)StringLiteral_21711/*"onupdate"*/;
        }
        else
        {
          v53 = 0LL;
        }
        if ( v21->max_length <= 4 )
          goto LABEL_82;
        v21->m_Items[4] = (Il2CppObject *)v53;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
        v22 = StringLiteral_23421/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_23421/*"updateSealActSpriteValues"*/ )
        {
          v22 = sub_B77684(StringLiteral_23421/*"updateSealActSpriteValues"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v60 = (System_Int32_array **)StringLiteral_23421/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v60 = 0LL;
        }
        if ( v21->max_length <= 5 )
          goto LABEL_82;
        v21->m_Items[5] = (Il2CppObject *)v60;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[5], v60, v54, v55, v56, v57, v58, v59);
        v22 = StringLiteral_21702/*"oncomplete"*/;
        if ( StringLiteral_21702/*"oncomplete"*/ )
        {
          v22 = sub_B77684(StringLiteral_21702/*"oncomplete"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v67 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
        }
        else
        {
          v67 = 0LL;
        }
        if ( v21->max_length <= 6 )
          goto LABEL_82;
        v21->m_Items[6] = (Il2CppObject *)v67;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[6], v67, v61, v62, v63, v64, v65, v66);
        v22 = StringLiteral_17982/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_17982/*"completeSealActSpriteValues"*/ )
        {
          v22 = sub_B77684(StringLiteral_17982/*"completeSealActSpriteValues"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v74 = (System_Int32_array **)StringLiteral_17982/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v74 = 0LL;
        }
        if ( v21->max_length <= 7 )
          goto LABEL_82;
        v21->m_Items[7] = (Il2CppObject *)v74;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[7], v74, v68, v69, v70, v71, v72, v73);
        v22 = StringLiteral_20739/*"loopType"*/;
        if ( StringLiteral_20739/*"loopType"*/ )
        {
          v22 = sub_B77684(StringLiteral_20739/*"loopType"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v81 = (System_Int32_array **)StringLiteral_20739/*"loopType"*/;
        }
        else
        {
          v81 = 0LL;
        }
        if ( v21->max_length <= 8 )
          goto LABEL_82;
        v21->m_Items[8] = (Il2CppObject *)v81;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[8], v81, v75, v76, v77, v78, v79, v80);
        v22 = StringLiteral_21929/*"pingPong"*/;
        if ( StringLiteral_21929/*"pingPong"*/ )
        {
          v22 = sub_B77684(StringLiteral_21929/*"pingPong"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v88 = (System_Int32_array **)StringLiteral_21929/*"pingPong"*/;
        }
        else
        {
          v88 = 0LL;
        }
        if ( v21->max_length <= 9 )
          goto LABEL_82;
        v21->m_Items[9] = (Il2CppObject *)v88;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[9], v88, v82, v83, v84, v85, v86, v87);
        v22 = StringLiteral_18475/*"easeType"*/;
        if ( StringLiteral_18475/*"easeType"*/ )
        {
          v22 = sub_B77684(StringLiteral_18475/*"easeType"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v95 = (System_Int32_array **)StringLiteral_18475/*"easeType"*/;
        }
        else
        {
          v95 = 0LL;
        }
        if ( v21->max_length <= 0xA )
          goto LABEL_82;
        v21->m_Items[10] = (Il2CppObject *)v95;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[10], v95, v89, v90, v91, v92, v93, v94);
        v22 = StringLiteral_18467/*"easeOutCirc"*/;
        if ( StringLiteral_18467/*"easeOutCirc"*/ )
        {
          v22 = sub_B77684(StringLiteral_18467/*"easeOutCirc"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v102 = (System_Int32_array **)StringLiteral_18467/*"easeOutCirc"*/;
        }
        else
        {
          v102 = 0LL;
        }
        if ( v21->max_length <= 0xB )
          goto LABEL_82;
        v21->m_Items[11] = (Il2CppObject *)v102;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[11], v102, v96, v97, v98, v99, v100, v101);
        v22 = StringLiteral_23154/*"time"*/;
        if ( StringLiteral_23154/*"time"*/ )
        {
          v22 = sub_B77684(StringLiteral_23154/*"time"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_83;
          v109 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
        }
        else
        {
          v109 = 0LL;
        }
        if ( v21->max_length <= 0xC )
          goto LABEL_82;
        v21->m_Items[12] = (Il2CppObject *)v109;
        sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[12], v109, v103, v104, v105, v106, v107, v108);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v22 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite, v110);
        v117 = (System_Int32_array **)v22;
        if ( !v22 || (v22 = sub_B77684(v22, v21->obj.klass->_1.element_class)) != 0 )
        {
          if ( v21->max_length > 0xD )
          {
            v21->m_Items[13] = (Il2CppObject *)v117;
            sub_B77560((BattleServantConfConponent_o *)&v21->m_Items[13], v117, v111, v112, v113, v114, v115, v116);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v118 = iTween__Hash(v21, 0LL);
            iTween__ValueTo(v12, v118, 0LL);
            return;
          }
LABEL_82:
          v119 = sub_B776C8(v22);
          sub_B77668(v119, 0LL);
        }
      }
    }
LABEL_83:
    v120 = sub_B776BC(v22);
    sub_B77668(v120, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_438E1FF & 1) == 0 )
  {
    sub_B775C4(&iTween_TypeInfo);
    byte_438E1FF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43295052(gameObject, 0LL);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v4);
}


void __fastcall BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashIcon; // x20
  __int64 v4; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  UnityEngine_GameObject_o *v6; // x0
  bool v7; // w1

  if ( (byte_438E200 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E200 = 1;
  }
  flashIcon = (UnityEngine_Object_o *)this->fields.flashIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(flashIcon, 0LL, 0LL) )
  {
    skillInfo = this->fields.skillInfo;
    if ( skillInfo )
    {
      v6 = this->fields.flashIcon;
      if ( this->fields.flashFlg )
      {
        if ( v6 )
        {
          v7 = skillInfo->fields.chargeTurn + skillInfo->fields.sealedTurn < 1;
LABEL_13:
          UnityEngine_GameObject__SetActive(v6, v7, 0LL);
          return;
        }
LABEL_15:
        sub_B7769C(v6, v4);
      }
      if ( !v6 )
        goto LABEL_15;
    }
    else
    {
      v6 = this->fields.flashIcon;
      if ( !v6 )
        goto LABEL_15;
    }
    v7 = 0;
    goto LABEL_13;
  }
}


void __fastcall BattleServantSkillIConComponent__updateSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        float value,
        const MethodInfo *method)
{
  void *noActSprite; // x0
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  UIWidget_o *v10; // x20
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438E1FD & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1FD = 1;
  }
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_15;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_15;
  noActSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_15;
  v13.fields.r = *((float *)noActSprite + 35);
  v13.fields.g = *((float *)noActSprite + 36);
  v13.fields.b = *((float *)noActSprite + 37);
  v10 = (UIWidget_o *)noActSprite;
  v13.fields.a = value;
  UnityEngine_Color___ctor(v13, v6, v7, v8, v9, (const MethodInfo *)&v12);
  UIWidget__set_color(v10, v12, 0LL);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL) )
  {
    noActSprite = this->fields.turnNoLabelBase;
    if ( noActSprite )
    {
      noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
      if ( noActSprite )
      {
        noActSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)noActSprite,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          UIWidget__set_color((UIWidget_o *)noActSprite, v12, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_B7769C(noActSprite, method);
  }
}