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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *target; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x21

  if ( (byte_42EB2A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, isLong, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EB2A1 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      target,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
      v14);
  }
  target = this->fields.target;
  if ( !target )
LABEL_18:
    sub_B5D69C(target, isLong);
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  target,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v15 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v15, this->fields.skillInfo, isLong, 0LL);
      return;
    }
    goto LABEL_18;
  }
}


void __fastcall BattleServantSkillIConComponent__DeleteRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_rankupEffect; // x20
  UnityEngine_Object_o *rankupEffect; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EB2A4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB2A4 = 1;
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
      sub_B5D69C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v9, v10, v11, v12, v13, v14);
    this->fields.rankupSprite = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.rankupSprite, 0LL, v15, v16, v17, v18, v19, v20);
  }
}


int32_t __fastcall BattleServantSkillIConComponent__GetRankUpState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 v6; // x11
  BattleRankUpSkillInfoData_c *v7; // x10
  BattleRankUpSkillInfoData_o *v8; // x0

  if ( (byte_42EB2A6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRankUpSkillInfoData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB2A6 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return -1;
  v6 = *(&BattleRankUpSkillInfoData_TypeInfo->_2.bitflags2 + 1);
  if ( *(&skillInfo->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return -1;
  v7 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[v6 - 1];
  v8 = v7 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
  if ( v7 != BattleRankUpSkillInfoData_TypeInfo )
    return -1;
  if ( !v8 )
    sub_B5D69C(0LL, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v8, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42EB2A0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB2A0 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 0, v6);
}


void __fastcall BattleServantSkillIConComponent__OnLongTapIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42EB29F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB29F = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantSkillIConComponent__PlayRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        System_String_o *resPath,
        UnityEngine_GameObject_o *root,
        bool isSkip,
        const MethodInfo *method)
{
  BattleServantSkillIConComponent_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object_21082944; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *rankupEffect; // x22
  System_Int32_array **ComponentInChildren_UIWidget; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v8 = this;
  if ( (byte_42EB2A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, (_DWORD)resPath, (_DWORD)root, isSkip);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9, v10, v11);
    this = (BattleServantSkillIConComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EB2A5 = 1;
  }
  if ( !root )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_21082944 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_21082944(
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
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_21082944, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_21082944 )
      goto LABEL_17;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       (UnityEngine_GameObject_o *)Object_21082944,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_srcLineSprite;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v8->fields.rankupEffect,
      Component_srcLineSprite,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
                                                                  (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_UIWidget;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v8->fields.rankupSprite,
            ComponentInChildren_UIWidget,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          return 1;
        }
      }
LABEL_17:
      sub_B5D69C(this, resPath);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  const MethodInfo *v26; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v30; // x2
  UIWidget_o *skillIcon; // x25
  int v32; // s0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v40; // x1
  UIAtlas_o **p_defaultNoActAtlas; // x24
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UISprite_o *v49; // x8
  System_Int32_array **mAtlas; // x1
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x2
  UISprite_o *v56; // x22
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1

  v10 = sealSkillTurn;
  if ( (byte_42EB296 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)skillInfo, isActSkill, *(_QWORD *)&sealSkillTurn);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19605/*"icon_sealact_skill"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19603/*"icon_sealact_disable"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19604/*"icon_sealact_seal"*/, v23, v24, v25);
    byte_42EB296 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_B5D560(
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
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v28);
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
    BattleServantSkillIConComponent__setCollider(this, 0, v30);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_57;
    if ( !skillInfo->fields.isPassive )
    {
      if ( skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn <= 0
        && BattleSkillInfoData__IsOpenCond(skillInfo, v26) )
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
        if ( !skillIcon )
          goto LABEL_57;
      }
      else
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_gray(0LL);
        if ( !skillIcon )
          goto LABEL_57;
      }
      UIWidget__set_color(skillIcon, *(UnityEngine_Color_o *)&v32, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v36);
      BattleServantSkillIConComponent__updateFlashSkill(this, v37);
      BattleServantSkillIConComponent__changeTurnCount(
        this,
        skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn,
        v38);
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
  v49 = this->fields.noActSprite;
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( !v49 )
      goto LABEL_57;
    mAtlas = (System_Int32_array **)v49->fields.mAtlas;
    *p_defaultNoActAtlas = (UIAtlas_o *)mAtlas;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.defaultNoActAtlas, mAtlas, v43, v44, v45, v46, v47, v48);
  }
  else
  {
    if ( !v49 )
      goto LABEL_57;
    UISprite__set_atlas(this->fields.noActSprite, *p_defaultNoActAtlas, 0LL);
  }
  root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
LABEL_57:
    sub_B5D69C(root, v26);
  if ( !(noActTurn | v10) )
  {
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
    BattleServantSkillIConComponent__stopSealActSprite(this, v51);
    goto LABEL_49;
  }
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.flashFlg = 0;
  BattleServantSkillIConComponent__updateFlashSkill(this, v52);
  if ( !v10 || noActTurn )
  {
    if ( v10 || !noActTurn )
    {
      BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v10, IsSealSkillSelect, v53);
      if ( isActSkill )
        goto LABEL_49;
      goto LABEL_48;
    }
    root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
    if ( root )
    {
      UISprite__set_spriteName((UISprite_o *)root, (System_String_o *)StringLiteral_19605/*"icon_sealact_skill"*/, 0LL);
      BattleServantSkillIConComponent__stopSealActSprite(this, v58);
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
  UISprite__set_spriteName((UISprite_o *)root, (System_String_o *)StringLiteral_19604/*"icon_sealact_seal"*/, 0LL);
  BattleServantSkillIConComponent__stopSealActSprite(this, v54);
  if ( IsSealSkillSelect )
  {
    v56 = this->fields.noActSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v56, (System_String_o *)StringLiteral_19603/*"icon_sealact_disable"*/, 0LL);
  }
  if ( !isActSkill )
LABEL_48:
    BattleServantSkillIConComponent__setTurnLabel(this, v10, v55);
LABEL_49:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v40);
  BattleServantSkillIConComponent__SetUseCond(this, v57);
}


void __fastcall BattleServantSkillIConComponent__SetUseCond(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  UnityEngine_Object_o *useCondRoot; // x20
  const MethodInfo *v54; // x1
  int64_t skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v74; // x22
  UnityEngine_Object_o *v75; // x22
  UISprite_o *v76; // x22
  int32_t longName; // w23
  int32_t num; // w0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t v80; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v82; // x23
  UserItemEntity_o *v83; // x22
  UISprite_o *v84; // x21
  Il2CppObject *v85; // x0
  System_String_o *v86; // x23
  ItemMaster_o *v87; // x22
  UISprite_o *v88; // x21
  Il2CppObject *v89; // x0
  System_String_o *v90; // x22
  UnityEngine_Object_o *v91; // x21
  UILabel_o *v92; // x19
  Il2CppObject *v93; // x1
  System_String_o *v94; // x0
  bool IsOpenCond; // w0
  System_String_o *v96; // x21
  int32_t CondItemNumber; // [xsp+Ch] [xbp-54h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v99; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EB2A8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&string_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_812/*"-{0}"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_2505/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_22451/*"skill_item_{0}"*/, v50, v51, v52);
    byte_42EB2A8 = 1;
  }
  v99 = 0;
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
  skillInfo = BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)skillInfo, v54);
  if ( !this->fields.useCondRoot )
    goto LABEL_96;
  if ( (skillInfo & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
  v99 = 0;
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
                                                                         (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_Dropdown_DropdownItem;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.useCondItemIcon,
      ComponentInChildren_Dropdown_DropdownItem,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
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
    v67 = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                   (UnityEngine_GameObject_o *)skillInfo,
                                   (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v67;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.useCondItemCountLabel, v67, v68, v69, v70, v71, v72, v73);
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_96;
  skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_96;
  v74 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v54);
  if ( !v74 )
    goto LABEL_96;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v74,
          &entity,
          skillInfo,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_44;
  v75 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  skillInfo = UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_96;
    v76 = *p_useCondItemIcon;
    longName = (int32_t)entity->fields.longName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    skillInfo = AtlasManager__SetItem(v76, longName, 0LL);
  }
  if ( !entity )
LABEL_96:
    sub_B5D69C(skillInfo, v54);
  if ( entity->fields.bannerId == 35 )
  {
    if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
    }
    skillInfo = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_96;
    num = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, entity->fields.id, 0LL);
    goto LABEL_75;
  }
LABEL_44:
  skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)skillInfo,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_96;
  v80 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v54);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_96;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v80, skillInfo, 0LL);
  v82 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( EntityDefinitely )
  {
    v83 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v83, 0LL);
      v84 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        CondItemNumber = *(_DWORD *)(skillInfo + 40);
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
        v86 = System_String__Format((System_String_o *)StringLiteral_22451/*"skill_item_{0}"*/, v85, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v84, v86, 0LL);
      }
      else
      {
        if ( !v84 )
          goto LABEL_96;
        UISprite__set_spriteName(v84, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v83->fields.num;
LABEL_75:
    v99 = UnityEngine_Mathf__Min_41629336(num, 999, 0LL);
    goto LABEL_76;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
  {
    skillInfo = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_96;
    skillInfo = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)skillInfo,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_96;
    v87 = (ItemMaster_o *)skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v54);
    if ( !v87 )
      goto LABEL_96;
    skillInfo = (int64_t)ItemMaster__GetItemData(v87, skillInfo, 0LL);
    v88 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      CondItemNumber = *(_DWORD *)(skillInfo + 40);
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v90 = System_String__Format((System_String_o *)StringLiteral_22451/*"skill_item_{0}"*/, v89, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v88, v90, 0LL);
    }
    else
    {
      if ( !v88 )
        goto LABEL_96;
      UISprite__set_spriteName(v88, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
LABEL_76:
  v91 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_96;
    if ( *(_DWORD *)(skillInfo + 136) )
    {
      v92 = *p_useCondItemCountLabel;
      CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, v54);
      v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v94 = (System_String_o *)StringLiteral_812/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, v54);
      v92 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&v99, 0LL);
        if ( !v92 )
          goto LABEL_96;
        goto LABEL_91;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      CondItemNumber = v99;
      v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v94 = v96;
    }
    skillInfo = (int64_t)System_String__Format(v94, v93, 0LL);
    if ( !v92 )
      goto LABEL_96;
LABEL_91:
    UILabel__set_text(v92, (System_String_o *)skillInfo, 0LL);
    skillInfo = (int64_t)*p_useCondItemCountLabel;
    if ( *p_useCondItemCountLabel )
    {
      UILabel__SetCondensedScale((UILabel_o *)skillInfo, 32, 0LL);
      return;
    }
    goto LABEL_96;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__UpdateRankUpEffectState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *noActSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool activeSelf; // w21
  UnityEngine_Object_o *rankupSprite; // x20
  UIWidget_o *v10; // x20
  int v11; // s0

  if ( (byte_42EB2A7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB2A7 = 1;
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
      sub_B5D69C(gameObject, v6);
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
    v10 = (UIWidget_o *)this->fields.rankupSprite;
    if ( activeSelf )
    {
      *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL);
      if ( !v10 )
        goto LABEL_22;
    }
    else
    {
      *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
      if ( !v10 )
        goto LABEL_22;
    }
    UIWidget__set_color(v10, *(UnityEngine_Color_o *)&v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 v12; // x11
  BattleRankUpSkillInfoData_c *v13; // x10
  BattleRankUpSkillInfoData_o *v14; // x0
  bool v15; // w21
  int32_t RankUpState; // w0
  int32_t v18; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v20; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EB2A3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRankUpSkillInfoData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18465/*"effect/data/effect/ef_skill_rankup01"*/, v8, v9, v10);
    byte_42EB2A3 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    v12 = *(&BattleRankUpSkillInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      v13 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[v12 - 1];
      v14 = v13 == BattleRankUpSkillInfoData_TypeInfo ? (BattleRankUpSkillInfoData_o *)this->fields.skillInfo : 0LL;
      if ( v13 == BattleRankUpSkillInfoData_TypeInfo )
      {
        if ( v14 )
        {
          RankUpState = BattleRankUpSkillInfoData__GetRankUpState(v14, 0LL);
          if ( RankUpState )
          {
            v18 = RankUpState;
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
                v15 = BattleServantSkillIConComponent__PlayRankUpEffect(
                        this,
                        (System_String_o *)StringLiteral_18465/*"effect/data/effect/ef_skill_rankup01"*/,
                        this->fields.rankupRoot,
                        v18 != 1,
                        v20);
LABEL_26:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, method);
                return v15;
              }
            }
LABEL_25:
            v15 = 0;
            goto LABEL_26;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v22 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
            goto LABEL_25;
          v14 = (BattleRankUpSkillInfoData_o *)*p_rankupEffect;
          if ( *p_rankupEffect )
          {
            v15 = 1;
            ((void (__fastcall *)(BattleRankUpSkillInfoData_o *, __int64, _QWORD, Il2CppMethodPointer))v14->klass->vtable._8_PreLoad.method)(
              v14,
              1LL,
              0LL,
              v14->klass->vtable._9_UnLoad.methodPtr);
            *p_rankupEffect = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v23, v24, v25, v26, v27, v28);
            goto LABEL_26;
          }
        }
        sub_B5D69C(v14, method);
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
  __int64 v3; // x3
  BattleServantSkillIConComponent_o *v5; // x19
  struct BattleSkillInfoData_o *skillInfo; // x8
  UnityEngine_Object_o *turnNoLabelBase; // x21
  UnityEngine_Object_o *turnNoLabel; // x21
  UnityEngine_Object_o *v9; // x20
  UILabel_o *v10; // x19
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  v11 = turn;
  if ( (byte_42EB29E & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, turn, (_DWORD)method, v3);
    byte_42EB29E = 1;
  }
  skillInfo = v5->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_30;
  if ( skillInfo->fields.isPassive )
    return;
  turnNoLabelBase = (UnityEngine_Object_o *)v5->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(turnNoLabelBase, 0LL, 0LL) )
  {
    turnNoLabel = (UnityEngine_Object_o *)v5->fields.turnNoLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(turnNoLabel, 0LL, 0LL) )
    {
      this = (BattleServantSkillIConComponent_o *)v5->fields.turnNoLabel;
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
      v10 = v5->fields.turnNoLabel;
      this = (BattleServantSkillIConComponent_o *)System_Int32__ToString((int32_t)&v11, 0LL);
      if ( v10 )
      {
        UILabel__set_text(v10, (System_String_o *)this, 0LL);
        return;
      }
      goto LABEL_30;
    }
  }
  else
  {
    if ( turn < 1 )
    {
      this = (BattleServantSkillIConComponent_o *)v5->fields.turnNoLabelBase;
      if ( this )
      {
        this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
        if ( this )
          goto LABEL_29;
      }
LABEL_30:
      sub_B5D69C(this, *(_QWORD *)&turn);
    }
    v9 = (UnityEngine_Object_o *)v5->fields.turnNoLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      this = (BattleServantSkillIConComponent_o *)v5->fields.turnNoLabelBase;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _BOOL4 isTweenReverse; // w8
  UISprite_o *noActSprite; // x0
  const MethodInfo *v16; // x2
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *v18; // x19
  const MethodInfo *v19; // x2

  if ( (byte_42EB29B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19605/*"icon_sealact_skill"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19603/*"icon_sealact_disable"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19604/*"icon_sealact_seal"*/, v11, v12, v13);
    byte_42EB29B = 1;
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
      sub_B5D69C(noActSprite, method);
    }
    if ( this->fields.isNoSkillSprite )
    {
      UISprite__set_spriteName(noActSprite, (System_String_o *)StringLiteral_19604/*"icon_sealact_seal"*/, 0LL);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v16);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        v18 = this->fields.noActSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_19603/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      UISprite__set_spriteName(noActSprite, (System_String_o *)StringLiteral_19605/*"icon_sealact_skill"*/, 0LL);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v19);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Transform_o *transform; // x19
  int v17; // s0

  if ( (byte_42EB295 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EB295 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_B5D69C(gameObject, v13);
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) && !flg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
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
      sub_B5D69C(0LL, val);
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__setSkillIcon(
        BattleServantSkillIConComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantSkillIConComponent_o *v5; // x19
  int32_t itemImageId; // w21
  UISprite_o *skillIcon; // x19
  int32_t v8; // w20

  v5 = this;
  if ( (byte_42EB297 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_B5D5C4(
                                                  &AtlasManager_TypeInfo,
                                                  (_DWORD)skillInfo,
                                                  (_DWORD)method,
                                                  v3);
    byte_42EB297 = 1;
  }
  if ( !skillInfo )
    sub_B5D69C(this, skillInfo);
  itemImageId = skillInfo->fields.itemImageId;
  skillIcon = v5->fields.skillIcon;
  if ( itemImageId == -1 )
  {
    v8 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
           skillInfo,
           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
           method);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetSkillIcon(skillIcon, v8, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *turnNoLabelBase; // x21
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *turnNoLabel; // x20
  int v16; // w8
  Il2CppObject *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB298 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, turn, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v9, v10, v11);
    byte_42EB298 = 1;
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
    v16 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v18 = BattleUtility__FloorToInt((float)(v16 >> 1), 0LL);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, v17, 0LL);
    if ( !turnNoLabel )
LABEL_17:
      sub_B5D69C(gameObject, v13);
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
  int v2; // w2
  __int64 v3; // x3
  struct BattleSkillInfoData_o *skillInfo; // x8
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleSkillInfoData_o *v8; // x8
  bool result; // w0

  if ( (byte_42EB2A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18473/*"effect/ef_command_flash01"*/, (_DWORD)method, v2, v3);
    byte_42EB2A2 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo || !skillInfo->fields.isCharge )
    return 0;
  root = this->fields.root;
  if ( !root
    || (transform = UnityEngine_GameObject__get_transform(root, 0LL),
        root = BaseMonoBehaviour__createObject_21082944(
                 (BaseMonoBehaviour_o *)this,
                 (System_String_o *)StringLiteral_18473/*"effect/ef_command_flash01"*/,
                 transform,
                 0LL,
                 0LL),
        (v8 = this->fields.skillInfo) == 0LL) )
  {
    sub_B5D69C(root, method);
  }
  result = 1;
  v8->fields.isCharge = 0;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  UnityEngine_GameObject_o *gameObject; // x23
  __int64 v58; // x1
  UISprite_o *noActSprite; // x0
  const MethodInfo *v60; // x2
  UISprite_o *v61; // x22
  UnityEngine_GameObject_o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Object_array *v69; // x21
  __int64 v70; // x0
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x22
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x1
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x1
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x1
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_Int32_array **v162; // x19
  System_Collections_Hashtable_o *v163; // x0
  __int64 v164; // x0
  __int64 v165; // x0
  float changeTimeSealSprite; // [xsp+4h] [xbp-3Ch] BYREF
  int v167; // [xsp+8h] [xbp-38h] BYREF
  int v168; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EB299 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, noActTurn, sealSkillTurn, IsSealSkillSelect);
    sub_B5D5C4(&object___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&float_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_20583/*"loopType"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21766/*"pingPong"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_18332/*"easeOutCirc"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_23248/*"updateSealActSpriteValues"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_17847/*"completeSealActSpriteValues"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_18340/*"easeType"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_19603/*"icon_sealact_disable"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_19604/*"icon_sealact_seal"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v51, v52, v53);
    sub_B5D5C4(&iTween_TypeInfo, v54, v55, v56);
    byte_42EB299 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_43298992(gameObject, 0LL) <= 0 )
  {
    noActSprite = this->fields.noActSprite;
    if ( !noActSprite )
      goto LABEL_86;
    UISprite__set_atlas(noActSprite, this->fields.defaultNoActAtlas, 0LL);
    noActSprite = this->fields.noActSprite;
    if ( !noActSprite )
      goto LABEL_86;
    UISprite__set_spriteName(noActSprite, (System_String_o *)StringLiteral_19604/*"icon_sealact_seal"*/, 0LL);
    this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
    if ( IsSealSkillSelect )
    {
      v61 = this->fields.noActSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v61, (System_String_o *)StringLiteral_19603/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v60);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    noActSprite = (UISprite_o *)sub_B5D5DC(object___TypeInfo, 14LL);
    if ( !noActSprite )
LABEL_86:
      sub_B5D69C(noActSprite, v58);
    v69 = (System_Object_array *)noActSprite;
    v70 = StringLiteral_19153/*"from"*/;
    if ( StringLiteral_19153/*"from"*/ )
    {
      v70 = sub_B5D684(StringLiteral_19153/*"from"*/, v69->obj.klass->_1.element_class);
      if ( !v70 )
        goto LABEL_85;
      v71 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
    }
    else
    {
      v71 = 0LL;
    }
    if ( !v69->max_length )
      goto LABEL_84;
    v69->m_Items[0] = (Il2CppObject *)v71;
    sub_B5D560((BattleServantConfConponent_o *)v69->m_Items, v71, v63, v64, v65, v66, v67, v68);
    v168 = 0;
    v70 = j_il2cpp_value_box_0(float_TypeInfo, &v168);
    v78 = (System_Int32_array **)v70;
    if ( !v70 || (v70 = sub_B5D684(v70, v69->obj.klass->_1.element_class)) != 0 )
    {
      if ( v69->max_length <= 1 )
        goto LABEL_84;
      v69->m_Items[1] = (Il2CppObject *)v78;
      sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[1], v78, v72, v73, v74, v75, v76, v77);
      v70 = StringLiteral_23019/*"to"*/;
      if ( StringLiteral_23019/*"to"*/ )
      {
        v70 = sub_B5D684(StringLiteral_23019/*"to"*/, v69->obj.klass->_1.element_class);
        if ( !v70 )
          goto LABEL_85;
        v85 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
      }
      else
      {
        v85 = 0LL;
      }
      if ( v69->max_length <= 2 )
        goto LABEL_84;
      v69->m_Items[2] = (Il2CppObject *)v85;
      sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[2], v85, v79, v80, v81, v82, v83, v84);
      v167 = 1065353216;
      v70 = j_il2cpp_value_box_0(float_TypeInfo, &v167);
      v92 = (System_Int32_array **)v70;
      if ( !v70 || (v70 = sub_B5D684(v70, v69->obj.klass->_1.element_class)) != 0 )
      {
        if ( v69->max_length <= 3 )
          goto LABEL_84;
        v69->m_Items[3] = (Il2CppObject *)v92;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[3], v92, v86, v87, v88, v89, v90, v91);
        v70 = StringLiteral_21551/*"onupdate"*/;
        if ( StringLiteral_21551/*"onupdate"*/ )
        {
          v70 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v99 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
        }
        else
        {
          v99 = 0LL;
        }
        if ( v69->max_length <= 4 )
          goto LABEL_84;
        v69->m_Items[4] = (Il2CppObject *)v99;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[4], v99, v93, v94, v95, v96, v97, v98);
        v70 = StringLiteral_23248/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_23248/*"updateSealActSpriteValues"*/ )
        {
          v70 = sub_B5D684(StringLiteral_23248/*"updateSealActSpriteValues"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v106 = (System_Int32_array **)StringLiteral_23248/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v106 = 0LL;
        }
        if ( v69->max_length <= 5 )
          goto LABEL_84;
        v69->m_Items[5] = (Il2CppObject *)v106;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[5], v106, v100, v101, v102, v103, v104, v105);
        v70 = StringLiteral_21542/*"oncomplete"*/;
        if ( StringLiteral_21542/*"oncomplete"*/ )
        {
          v70 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v113 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
        }
        else
        {
          v113 = 0LL;
        }
        if ( v69->max_length <= 6 )
          goto LABEL_84;
        v69->m_Items[6] = (Il2CppObject *)v113;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[6], v113, v107, v108, v109, v110, v111, v112);
        v70 = StringLiteral_17847/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_17847/*"completeSealActSpriteValues"*/ )
        {
          v70 = sub_B5D684(StringLiteral_17847/*"completeSealActSpriteValues"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v120 = (System_Int32_array **)StringLiteral_17847/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v120 = 0LL;
        }
        if ( v69->max_length <= 7 )
          goto LABEL_84;
        v69->m_Items[7] = (Il2CppObject *)v120;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[7], v120, v114, v115, v116, v117, v118, v119);
        v70 = StringLiteral_20583/*"loopType"*/;
        if ( StringLiteral_20583/*"loopType"*/ )
        {
          v70 = sub_B5D684(StringLiteral_20583/*"loopType"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v127 = (System_Int32_array **)StringLiteral_20583/*"loopType"*/;
        }
        else
        {
          v127 = 0LL;
        }
        if ( v69->max_length <= 8 )
          goto LABEL_84;
        v69->m_Items[8] = (Il2CppObject *)v127;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[8], v127, v121, v122, v123, v124, v125, v126);
        v70 = StringLiteral_21766/*"pingPong"*/;
        if ( StringLiteral_21766/*"pingPong"*/ )
        {
          v70 = sub_B5D684(StringLiteral_21766/*"pingPong"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v134 = (System_Int32_array **)StringLiteral_21766/*"pingPong"*/;
        }
        else
        {
          v134 = 0LL;
        }
        if ( v69->max_length <= 9 )
          goto LABEL_84;
        v69->m_Items[9] = (Il2CppObject *)v134;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[9], v134, v128, v129, v130, v131, v132, v133);
        v70 = StringLiteral_18340/*"easeType"*/;
        if ( StringLiteral_18340/*"easeType"*/ )
        {
          v70 = sub_B5D684(StringLiteral_18340/*"easeType"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v141 = (System_Int32_array **)StringLiteral_18340/*"easeType"*/;
        }
        else
        {
          v141 = 0LL;
        }
        if ( v69->max_length <= 0xA )
          goto LABEL_84;
        v69->m_Items[10] = (Il2CppObject *)v141;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[10], v141, v135, v136, v137, v138, v139, v140);
        v70 = StringLiteral_18332/*"easeOutCirc"*/;
        if ( StringLiteral_18332/*"easeOutCirc"*/ )
        {
          v70 = sub_B5D684(StringLiteral_18332/*"easeOutCirc"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v148 = (System_Int32_array **)StringLiteral_18332/*"easeOutCirc"*/;
        }
        else
        {
          v148 = 0LL;
        }
        if ( v69->max_length <= 0xB )
          goto LABEL_84;
        v69->m_Items[11] = (Il2CppObject *)v148;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[11], v148, v142, v143, v144, v145, v146, v147);
        v70 = StringLiteral_22982/*"time"*/;
        if ( StringLiteral_22982/*"time"*/ )
        {
          v70 = sub_B5D684(StringLiteral_22982/*"time"*/, v69->obj.klass->_1.element_class);
          if ( !v70 )
            goto LABEL_85;
          v155 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
        }
        else
        {
          v155 = 0LL;
        }
        if ( v69->max_length <= 0xC )
          goto LABEL_84;
        v69->m_Items[12] = (Il2CppObject *)v155;
        sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[12], v155, v149, v150, v151, v152, v153, v154);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v70 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite);
        v162 = (System_Int32_array **)v70;
        if ( !v70 || (v70 = sub_B5D684(v70, v69->obj.klass->_1.element_class)) != 0 )
        {
          if ( v69->max_length > 0xD )
          {
            v69->m_Items[13] = (Il2CppObject *)v162;
            sub_B5D560((BattleServantConfConponent_o *)&v69->m_Items[13], v162, v156, v157, v158, v159, v160, v161);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v163 = iTween__Hash(v69, 0LL);
            iTween__ValueTo(v62, v163, 0LL);
            return;
          }
LABEL_84:
          v164 = sub_B5D6C8(v70);
          sub_B5D668(v164, 0LL);
        }
      }
    }
LABEL_85:
    v165 = sub_B5D6BC(v70);
    sub_B5D668(v165, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v6; // x1

  if ( (byte_42EB29C & 1) == 0 )
  {
    sub_B5D5C4(&iTween_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB29C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v6);
}


void __fastcall BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *flashIcon; // x20
  __int64 v6; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  UnityEngine_GameObject_o *v8; // x0
  bool v9; // w1

  if ( (byte_42EB29D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB29D = 1;
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
      v8 = this->fields.flashIcon;
      if ( this->fields.flashFlg )
      {
        if ( v8 )
        {
          v9 = skillInfo->fields.chargeTurn + skillInfo->fields.sealedTurn < 1;
LABEL_13:
          UnityEngine_GameObject__SetActive(v8, v9, 0LL);
          return;
        }
LABEL_15:
        sub_B5D69C(v8, v6);
      }
      if ( !v8 )
        goto LABEL_15;
    }
    else
    {
      v8 = this->fields.flashIcon;
      if ( !v8 )
        goto LABEL_15;
    }
    v9 = 0;
    goto LABEL_13;
  }
}


void __fastcall BattleServantSkillIConComponent__updateSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        float value,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  void *noActSprite; // x0
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  UIWidget_o *v15; // x20
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v17; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EB29A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EB29A = 1;
  }
  *(_QWORD *)&v17.fields.r = 0LL;
  *(_QWORD *)&v17.fields.b = 0LL;
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_15;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_15;
  noActSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_15;
  v18.fields.r = *((float *)noActSprite + 35);
  v18.fields.g = *((float *)noActSprite + 36);
  v18.fields.b = *((float *)noActSprite + 37);
  v15 = (UIWidget_o *)noActSprite;
  v18.fields.a = value;
  UnityEngine_Color___ctor(v18, v11, v12, v13, v14, (const MethodInfo *)&v17);
  UIWidget__set_color(v15, v17, 0LL);
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
                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          UIWidget__set_color((UIWidget_o *)noActSprite, v17, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_B5D69C(noActSprite, method);
  }
}