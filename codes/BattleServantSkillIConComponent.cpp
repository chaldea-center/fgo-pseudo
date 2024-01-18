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
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x21

  if ( (byte_418A57B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, isLong);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A57B = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      target,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
      v9);
  }
  target = this->fields.target;
  if ( !target )
LABEL_18:
    sub_B2C434(target, isLong);
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  target,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v10 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v10, this->fields.skillInfo, isLong, 0LL);
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

  if ( (byte_418A57E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A57E = 1;
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
      sub_B2C434(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.rankupSprite = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rankupSprite, 0LL, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_418A580 & 1) == 0 )
  {
    sub_B2C35C(&BattleRankUpSkillInfoData_TypeInfo, method);
    byte_418A580 = 1;
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
    sub_B2C434(0LL, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_418A57A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A57A = 1;
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

  if ( (byte_418A579 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A579 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object_19214240; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *rankupEffect; // x22
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  v8 = this;
  if ( (byte_418A57F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, resPath);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9);
    this = (BattleServantSkillIConComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A57F = 1;
  }
  if ( !root )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_19214240 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_19214240(
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
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_19214240, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_19214240 )
      goto LABEL_17;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)Object_19214240,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_srcLineSprite;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields.rankupEffect,
      Component_srcLineSprite,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
                                                                  (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_UIWidget;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v8->fields.rankupSprite,
            ComponentInChildren_UIWidget,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          return 1;
        }
      }
LABEL_17:
      sub_B2C434(this, resPath);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v22; // x2
  UIWidget_o *skillIcon; // x25
  int v24; // s0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v32; // x1
  UIAtlas_o **p_defaultNoActAtlas; // x24
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UISprite_o *v41; // x8
  System_Int32_array **mAtlas; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  UISprite_o *v48; // x22
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x1

  v10 = sealSkillTurn;
  if ( (byte_418A570 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, skillInfo);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_19361/*"icon_sealact_skill"*/, v15);
    sub_B2C35C(&StringLiteral_19359/*"icon_sealact_disable"*/, v16);
    sub_B2C35C(&StringLiteral_19360/*"icon_sealact_seal"*/, v17);
    byte_418A570 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_B2C2F8(
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
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v20);
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
      goto LABEL_57;
    if ( skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)this->fields.turnNoLabelBase;
      if ( !root )
        goto LABEL_57;
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL);
      if ( !root )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive(root, 0, 0LL);
    }
  }
  if ( this->fields.showType == 2 )
  {
    BattleServantSkillIConComponent__setCollider(this, 0, v22);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_57;
    if ( !skillInfo->fields.isPassive )
    {
      if ( skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn <= 0
        && BattleSkillInfoData__IsOpenCond(skillInfo, v18) )
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
        if ( !skillIcon )
          goto LABEL_57;
      }
      else
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
        if ( !skillIcon )
          goto LABEL_57;
      }
      UIWidget__set_color(skillIcon, *(UnityEngine_Color_o *)&v24, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v28);
      BattleServantSkillIConComponent__updateFlashSkill(this, v29);
      BattleServantSkillIConComponent__changeTurnCount(
        this,
        skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn,
        v30);
    }
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
    goto LABEL_49;
  p_defaultNoActAtlas = &this->fields.defaultNoActAtlas;
  defaultNoActAtlas = (UnityEngine_Object_o *)this->fields.defaultNoActAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(defaultNoActAtlas, 0LL, 0LL);
  v41 = this->fields.noActSprite;
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_57;
    mAtlas = (System_Int32_array **)v41->fields.mAtlas;
    *p_defaultNoActAtlas = (UIAtlas_o *)mAtlas;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.defaultNoActAtlas, mAtlas, v35, v36, v37, v38, v39, v40);
  }
  else
  {
    if ( !v41 )
      goto LABEL_57;
    UISprite__set_atlas(this->fields.noActSprite, *p_defaultNoActAtlas, 0LL);
  }
  root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
LABEL_57:
    sub_B2C434(root, v18);
  if ( !(noActTurn | v10) )
  {
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
    BattleServantSkillIConComponent__stopSealActSprite(this, v43);
    goto LABEL_49;
  }
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.flashFlg = 0;
  BattleServantSkillIConComponent__updateFlashSkill(this, v44);
  if ( !v10 || noActTurn )
  {
    if ( v10 || !noActTurn )
    {
      BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v10, IsSealSkillSelect, v45);
      if ( isActSkill )
        goto LABEL_49;
      goto LABEL_48;
    }
    root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
    if ( root )
    {
      UISprite__set_spriteName((UISprite_o *)root, (System_String_o *)StringLiteral_19361/*"icon_sealact_skill"*/, 0LL);
      BattleServantSkillIConComponent__stopSealActSprite(this, v50);
      v10 = noActTurn;
      if ( isActSkill )
        goto LABEL_49;
      goto LABEL_48;
    }
    goto LABEL_57;
  }
  root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
  if ( !root )
    goto LABEL_57;
  UISprite__set_spriteName((UISprite_o *)root, (System_String_o *)StringLiteral_19360/*"icon_sealact_seal"*/, 0LL);
  BattleServantSkillIConComponent__stopSealActSprite(this, v46);
  if ( IsSealSkillSelect )
  {
    v48 = this->fields.noActSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v48, (System_String_o *)StringLiteral_19359/*"icon_sealact_disable"*/, 0LL);
  }
  if ( !isActSkill )
LABEL_48:
    BattleServantSkillIConComponent__setTurnLabel(this, v10, v47);
LABEL_49:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v32);
  BattleServantSkillIConComponent__SetUseCond(this, v49);
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
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v16; // x1
  int64_t skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t v37; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v39; // x23
  UserItemEntity_o *v40; // x22
  UISprite_o *v41; // x21
  Il2CppObject *v42; // x0
  System_String_o *v43; // x23
  ItemMaster_o *v44; // x22
  UISprite_o *v45; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x22
  UnityEngine_Object_o *v48; // x21
  bool IsOpenCond; // w0
  UILabel_o *v50; // x19
  System_String_o *v51; // x21
  Il2CppObject *v52; // x0
  int32_t v53; // [xsp+8h] [xbp-38h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418A582 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&string_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_2452/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v13);
    sub_B2C35C(&StringLiteral_22149/*"skill_item_{0}"*/, v14);
    byte_418A582 = 1;
  }
  v54 = 0;
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
    goto LABEL_71;
  skillInfo = BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)skillInfo, v16);
  if ( !this->fields.useCondRoot )
    goto LABEL_71;
  if ( (skillInfo & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
  v54 = 0;
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
      goto LABEL_71;
    ComponentInChildren_Dropdown_DropdownItem = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                         (UnityEngine_GameObject_o *)skillInfo,
                                                                         (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_Dropdown_DropdownItem;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.useCondItemIcon,
      ComponentInChildren_Dropdown_DropdownItem,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
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
      goto LABEL_71;
    v29 = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                   (UnityEngine_GameObject_o *)skillInfo,
                                   (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v29;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.useCondItemCountLabel, v29, v30, v31, v32, v33, v34, v35);
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_71;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)skillInfo,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_71;
  v37 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v16);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_71;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v37, skillInfo, 0LL);
  v39 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( EntityDefinitely )
  {
    v40 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v40, 0LL);
      v41 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        v53 = *(_DWORD *)(skillInfo + 40);
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
        v43 = System_String__Format((System_String_o *)StringLiteral_22149/*"skill_item_{0}"*/, v42, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v41, v43, 0LL);
      }
      else
      {
        if ( !v41 )
          goto LABEL_71;
        UISprite__set_spriteName(v41, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v54 = UnityEngine_Mathf__Min_40694704(v40->fields.num, 999, 0LL);
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !skillInfo )
        goto LABEL_71;
      skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)skillInfo,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !this->fields.skillInfo )
        goto LABEL_71;
      v44 = (ItemMaster_o *)skillInfo;
      skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v16);
      if ( !v44 )
        goto LABEL_71;
      skillInfo = (int64_t)ItemMaster__GetItemData(v44, skillInfo, 0LL);
      v45 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        v53 = *(_DWORD *)(skillInfo + 40);
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
        v47 = System_String__Format((System_String_o *)StringLiteral_22149/*"skill_item_{0}"*/, v46, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v45, v47, 0LL);
      }
      else
      {
        if ( !v45 )
          goto LABEL_71;
        UISprite__set_spriteName(v45, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
  }
  v48 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
    return;
  skillInfo = (int64_t)this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_71;
  IsOpenCond = BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, v16);
  v50 = *p_useCondItemCountLabel;
  if ( IsOpenCond )
  {
    skillInfo = (int64_t)System_Int32__ToString((int32_t)&v54, 0LL);
    if ( !v50 )
      goto LABEL_71;
    goto LABEL_66;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2452/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
  v53 = v54;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  skillInfo = (int64_t)System_String__Format(v51, v52, 0LL);
  if ( !v50 )
LABEL_71:
    sub_B2C434(skillInfo, v16);
LABEL_66:
  UILabel__set_text(v50, (System_String_o *)skillInfo, 0LL);
  skillInfo = (int64_t)*p_useCondItemCountLabel;
  if ( !*p_useCondItemCountLabel )
    goto LABEL_71;
  UILabel__SetCondensedScale((UILabel_o *)skillInfo, 32, 0LL);
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

  if ( (byte_418A581 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A581 = 1;
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
      sub_B2C434(gameObject, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 v6; // x11
  BattleRankUpSkillInfoData_c *v7; // x10
  BattleRankUpSkillInfoData_o *v8; // x0
  bool v9; // w21
  int32_t RankUpState; // w0
  int32_t v12; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v14; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_418A57D & 1) == 0 )
  {
    sub_B2C35C(&BattleRankUpSkillInfoData_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_18236/*"effect/data/effect/ef_skill_rankup01"*/, v4);
    byte_418A57D = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    v6 = *(&BattleRankUpSkillInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      v7 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[v6 - 1];
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
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0LL, 0LL) )
              {
                v9 = BattleServantSkillIConComponent__PlayRankUpEffect(
                       this,
                       (System_String_o *)StringLiteral_18236/*"effect/data/effect/ef_skill_rankup01"*/,
                       this->fields.rankupRoot,
                       v12 != 1,
                       v14);
LABEL_26:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, method);
                return v9;
              }
            }
LABEL_25:
            v9 = 0;
            goto LABEL_26;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v16 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
            goto LABEL_25;
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
            sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v17, v18, v19, v20, v21, v22);
            goto LABEL_26;
          }
        }
        sub_B2C434(v8, method);
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
  if ( (byte_418A578 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    byte_418A578 = 1;
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
      sub_B2C434(this, *(_QWORD *)&turn);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL4 isTweenReverse; // w8
  UISprite_o *noActSprite; // x0
  const MethodInfo *v8; // x2
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_418A575 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_19361/*"icon_sealact_skill"*/, v3);
    sub_B2C35C(&StringLiteral_19359/*"icon_sealact_disable"*/, v4);
    sub_B2C35C(&StringLiteral_19360/*"icon_sealact_seal"*/, v5);
    byte_418A575 = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    noActSprite = this->fields.noActSprite;
    if ( !noActSprite
      || (UISprite__set_atlas(noActSprite, this->fields.defaultNoActAtlas, 0LL),
          (noActSprite = this->fields.noActSprite) == 0LL) )
    {
      sub_B2C434(noActSprite, method);
    }
    if ( this->fields.isNoSkillSprite )
    {
      UISprite__set_spriteName(noActSprite, (System_String_o *)StringLiteral_19360/*"icon_sealact_seal"*/, 0LL);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v8);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        v10 = this->fields.noActSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v10, (System_String_o *)StringLiteral_19359/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      UISprite__set_spriteName(noActSprite, (System_String_o *)StringLiteral_19361/*"icon_sealact_skill"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Transform_o *transform; // x19
  int v12; // s0

  if ( (byte_418A56F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A56F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_B2C434(gameObject, v8);
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) && !flg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_one(0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v12, 0LL);
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
      sub_B2C434(0LL, val);
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
  if ( (byte_418A571 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_B2C35C(&AtlasManager_TypeInfo, skillInfo);
    byte_418A571 = 1;
  }
  if ( !skillInfo )
    sub_B2C434(this, skillInfo);
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
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418A572 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&turn);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v6);
    byte_418A572 = 1;
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
    v11 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v13 = BattleUtility__FloorToInt((float)(v11 >> 1), 0LL);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, v12, 0LL);
    if ( !turnNoLabel )
LABEL_17:
      sub_B2C434(gameObject, v8);
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
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleSkillInfoData_o *v6; // x8
  bool result; // w0

  if ( (byte_418A57C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18244/*"effect/ef_command_flash01"*/, method);
    byte_418A57C = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo || !skillInfo->fields.isCharge )
    return 0;
  root = this->fields.root;
  if ( !root
    || (transform = UnityEngine_GameObject__get_transform(root, 0LL),
        root = BaseMonoBehaviour__createObject_19214240(
                 (BaseMonoBehaviour_o *)this,
                 (System_String_o *)StringLiteral_18244/*"effect/ef_command_flash01"*/,
                 transform,
                 0LL,
                 0LL),
        (v6 = this->fields.skillInfo) == 0LL) )
  {
    sub_B2C434(root, method);
  }
  result = 1;
  v6->fields.isCharge = 0;
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
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  __int64 v26; // x1
  UISprite_o *noActSprite; // x0
  const MethodInfo *v28; // x2
  UISprite_o *v29; // x22
  UnityEngine_GameObject_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Object_array *v37; // x21
  __int64 v38; // x0
  System_Int32_array **v39; // x1
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
  System_Int32_array **v60; // x22
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
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x1
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x1
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x19
  System_Collections_Hashtable_o *v131; // x0
  __int64 v132; // x0
  __int64 v133; // x0
  float changeTimeSealSprite; // [xsp+4h] [xbp-3Ch] BYREF
  int v135; // [xsp+8h] [xbp-38h] BYREF
  int v136; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418A573 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&noActTurn);
    sub_B2C35C(&object___TypeInfo, v9);
    sub_B2C35C(&float_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v11);
    sub_B2C35C(&StringLiteral_20324/*"loopType"*/, v12);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v13);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v14);
    sub_B2C35C(&StringLiteral_21477/*"pingPong"*/, v15);
    sub_B2C35C(&StringLiteral_18105/*"easeOutCirc"*/, v16);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v17);
    sub_B2C35C(&StringLiteral_22943/*"updateSealActSpriteValues"*/, v18);
    sub_B2C35C(&StringLiteral_17628/*"completeSealActSpriteValues"*/, v19);
    sub_B2C35C(&StringLiteral_18113/*"easeType"*/, v20);
    sub_B2C35C(&StringLiteral_19359/*"icon_sealact_disable"*/, v21);
    sub_B2C35C(&StringLiteral_19360/*"icon_sealact_seal"*/, v22);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v23);
    sub_B2C35C(&iTween_TypeInfo, v24);
    byte_418A573 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_42848592(gameObject, 0LL) <= 0 )
  {
    noActSprite = this->fields.noActSprite;
    if ( !noActSprite )
      goto LABEL_86;
    UISprite__set_atlas(noActSprite, this->fields.defaultNoActAtlas, 0LL);
    noActSprite = this->fields.noActSprite;
    if ( !noActSprite )
      goto LABEL_86;
    UISprite__set_spriteName(noActSprite, (System_String_o *)StringLiteral_19360/*"icon_sealact_seal"*/, 0LL);
    this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
    if ( IsSealSkillSelect )
    {
      v29 = this->fields.noActSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_19359/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v28);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    noActSprite = (UISprite_o *)sub_B2C374(object___TypeInfo, 14LL);
    if ( !noActSprite )
LABEL_86:
      sub_B2C434(noActSprite, v26);
    v37 = (System_Object_array *)noActSprite;
    v38 = StringLiteral_18914/*"from"*/;
    if ( StringLiteral_18914/*"from"*/ )
    {
      v38 = sub_B2C41C(StringLiteral_18914/*"from"*/, v37->obj.klass->_1.element_class);
      if ( !v38 )
        goto LABEL_85;
      v39 = (System_Int32_array **)StringLiteral_18914/*"from"*/;
    }
    else
    {
      v39 = 0LL;
    }
    if ( !v37->max_length )
      goto LABEL_84;
    v37->m_Items[0] = (Il2CppObject *)v39;
    sub_B2C2F8((BattleServantConfConponent_o *)v37->m_Items, v39, v31, v32, v33, v34, v35, v36);
    v136 = 0;
    v38 = j_il2cpp_value_box_0(float_TypeInfo, &v136);
    v46 = (System_Int32_array **)v38;
    if ( !v38 || (v38 = sub_B2C41C(v38, v37->obj.klass->_1.element_class)) != 0 )
    {
      if ( v37->max_length <= 1 )
        goto LABEL_84;
      v37->m_Items[1] = (Il2CppObject *)v46;
      sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
      v38 = StringLiteral_22714/*"to"*/;
      if ( StringLiteral_22714/*"to"*/ )
      {
        v38 = sub_B2C41C(StringLiteral_22714/*"to"*/, v37->obj.klass->_1.element_class);
        if ( !v38 )
          goto LABEL_85;
        v53 = (System_Int32_array **)StringLiteral_22714/*"to"*/;
      }
      else
      {
        v53 = 0LL;
      }
      if ( v37->max_length <= 2 )
        goto LABEL_84;
      v37->m_Items[2] = (Il2CppObject *)v53;
      sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[2], v53, v47, v48, v49, v50, v51, v52);
      v135 = 1065353216;
      v38 = j_il2cpp_value_box_0(float_TypeInfo, &v135);
      v60 = (System_Int32_array **)v38;
      if ( !v38 || (v38 = sub_B2C41C(v38, v37->obj.klass->_1.element_class)) != 0 )
      {
        if ( v37->max_length <= 3 )
          goto LABEL_84;
        v37->m_Items[3] = (Il2CppObject *)v60;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[3], v60, v54, v55, v56, v57, v58, v59);
        v38 = StringLiteral_21272/*"onupdate"*/;
        if ( StringLiteral_21272/*"onupdate"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v67 = (System_Int32_array **)StringLiteral_21272/*"onupdate"*/;
        }
        else
        {
          v67 = 0LL;
        }
        if ( v37->max_length <= 4 )
          goto LABEL_84;
        v37->m_Items[4] = (Il2CppObject *)v67;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[4], v67, v61, v62, v63, v64, v65, v66);
        v38 = StringLiteral_22943/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_22943/*"updateSealActSpriteValues"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_22943/*"updateSealActSpriteValues"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v74 = (System_Int32_array **)StringLiteral_22943/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v74 = 0LL;
        }
        if ( v37->max_length <= 5 )
          goto LABEL_84;
        v37->m_Items[5] = (Il2CppObject *)v74;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[5], v74, v68, v69, v70, v71, v72, v73);
        v38 = StringLiteral_21263/*"oncomplete"*/;
        if ( StringLiteral_21263/*"oncomplete"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v81 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
        }
        else
        {
          v81 = 0LL;
        }
        if ( v37->max_length <= 6 )
          goto LABEL_84;
        v37->m_Items[6] = (Il2CppObject *)v81;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[6], v81, v75, v76, v77, v78, v79, v80);
        v38 = StringLiteral_17628/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_17628/*"completeSealActSpriteValues"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_17628/*"completeSealActSpriteValues"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v88 = (System_Int32_array **)StringLiteral_17628/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v88 = 0LL;
        }
        if ( v37->max_length <= 7 )
          goto LABEL_84;
        v37->m_Items[7] = (Il2CppObject *)v88;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[7], v88, v82, v83, v84, v85, v86, v87);
        v38 = StringLiteral_20324/*"loopType"*/;
        if ( StringLiteral_20324/*"loopType"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_20324/*"loopType"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v95 = (System_Int32_array **)StringLiteral_20324/*"loopType"*/;
        }
        else
        {
          v95 = 0LL;
        }
        if ( v37->max_length <= 8 )
          goto LABEL_84;
        v37->m_Items[8] = (Il2CppObject *)v95;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[8], v95, v89, v90, v91, v92, v93, v94);
        v38 = StringLiteral_21477/*"pingPong"*/;
        if ( StringLiteral_21477/*"pingPong"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_21477/*"pingPong"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v102 = (System_Int32_array **)StringLiteral_21477/*"pingPong"*/;
        }
        else
        {
          v102 = 0LL;
        }
        if ( v37->max_length <= 9 )
          goto LABEL_84;
        v37->m_Items[9] = (Il2CppObject *)v102;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[9], v102, v96, v97, v98, v99, v100, v101);
        v38 = StringLiteral_18113/*"easeType"*/;
        if ( StringLiteral_18113/*"easeType"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_18113/*"easeType"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v109 = (System_Int32_array **)StringLiteral_18113/*"easeType"*/;
        }
        else
        {
          v109 = 0LL;
        }
        if ( v37->max_length <= 0xA )
          goto LABEL_84;
        v37->m_Items[10] = (Il2CppObject *)v109;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[10], v109, v103, v104, v105, v106, v107, v108);
        v38 = StringLiteral_18105/*"easeOutCirc"*/;
        if ( StringLiteral_18105/*"easeOutCirc"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_18105/*"easeOutCirc"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v116 = (System_Int32_array **)StringLiteral_18105/*"easeOutCirc"*/;
        }
        else
        {
          v116 = 0LL;
        }
        if ( v37->max_length <= 0xB )
          goto LABEL_84;
        v37->m_Items[11] = (Il2CppObject *)v116;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[11], v116, v110, v111, v112, v113, v114, v115);
        v38 = StringLiteral_22677/*"time"*/;
        if ( StringLiteral_22677/*"time"*/ )
        {
          v38 = sub_B2C41C(StringLiteral_22677/*"time"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_85;
          v123 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
        }
        else
        {
          v123 = 0LL;
        }
        if ( v37->max_length <= 0xC )
          goto LABEL_84;
        v37->m_Items[12] = (Il2CppObject *)v123;
        sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[12], v123, v117, v118, v119, v120, v121, v122);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v38 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite);
        v130 = (System_Int32_array **)v38;
        if ( !v38 || (v38 = sub_B2C41C(v38, v37->obj.klass->_1.element_class)) != 0 )
        {
          if ( v37->max_length > 0xD )
          {
            v37->m_Items[13] = (Il2CppObject *)v130;
            sub_B2C2F8((BattleServantConfConponent_o *)&v37->m_Items[13], v130, v124, v125, v126, v127, v128, v129);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v131 = iTween__Hash(v37, 0LL);
            iTween__ValueTo(v30, v131, 0LL);
            return;
          }
LABEL_84:
          v132 = sub_B2C460(v38);
          sub_B2C400(v132, 0LL);
        }
      }
    }
LABEL_85:
    v133 = sub_B2C454(v38);
    sub_B2C400(v133, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_418A576 & 1) == 0 )
  {
    sub_B2C35C(&iTween_TypeInfo, method);
    byte_418A576 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42850528(gameObject, 0LL);
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

  if ( (byte_418A577 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A577 = 1;
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
        sub_B2C434(v6, v4);
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
  __int64 v5; // x1
  void *noActSprite; // x0
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  UIWidget_o *v11; // x20
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A574 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418A574 = 1;
  }
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_15;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_15;
  noActSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_15;
  v14.fields.r = *((float *)noActSprite + 35);
  v14.fields.g = *((float *)noActSprite + 36);
  v14.fields.b = *((float *)noActSprite + 37);
  v11 = (UIWidget_o *)noActSprite;
  v14.fields.a = value;
  UnityEngine_Color___ctor(v14, v7, v8, v9, v10, (const MethodInfo *)&v13);
  UIWidget__set_color(v11, v13, 0LL);
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
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          UIWidget__set_color((UIWidget_o *)noActSprite, v13, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_B2C434(noActSprite, method);
  }
}