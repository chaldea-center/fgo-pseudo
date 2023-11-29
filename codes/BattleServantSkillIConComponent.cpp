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
  BattleServantParamComponent_o *Component_srcLineSprite; // x21
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_o *v10; // x0
  BattlePerformanceMaster_o *v11; // x21

  if ( (byte_40FCD36 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, isLong);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FCD36 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_18;
  Component_srcLineSprite = (BattleServantParamComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               target,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_18;
    BattleServantParamComponent__clickSkillIcon(Component_srcLineSprite, this->fields.skillInfo, isLong, v9);
  }
  v10 = this->fields.target;
  if ( !v10 )
LABEL_18:
    sub_B170D4();
  v11 = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v10,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    if ( v11 )
    {
      BattlePerformanceMaster__clickSkillIcon(v11, this->fields.skillInfo, isLong, 0LL);
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
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FCD39 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD39 = 1;
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
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.rankupSprite = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.rankupSprite, 0LL, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_40FCD3B & 1) == 0 )
  {
    sub_B16FFC(&BattleRankUpSkillInfoData_TypeInfo, method);
    byte_40FCD3B = 1;
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
    sub_B170D4();
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_40FCD35 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD35 = 1;
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

  if ( (byte_40FCD34 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD34 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object_19257936; // x21
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  CommonEffectComponent_o **p_rankupEffect; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *rankupEffect; // x22
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FCD3A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, resPath);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FCD3A = 1;
  }
  if ( !root )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_19257936 = BaseMonoBehaviour__createObject_19257936((BaseMonoBehaviour_o *)this, resPath, transform, 0LL, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_19257936, 0LL, 0LL) )
  {
    if ( !Object_19257936 )
      goto LABEL_17;
    Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Object_19257936,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this->fields.rankupEffect = Component_srcLineSprite;
    p_rankupEffect = &this->fields.rankupEffect;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.rankupEffect,
      (System_Int32_array **)Component_srcLineSprite,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
    {
      if ( *p_rankupEffect )
      {
        CommonEffectComponent__Init(*p_rankupEffect, isSkip, 0, 0LL);
        if ( *p_rankupEffect )
        {
          ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           (UnityEngine_Component_o *)*p_rankupEffect,
                                           (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          this->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_UIWidget;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.rankupSprite,
            (System_Int32_array **)ComponentInChildren_UIWidget,
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
      sub_B170D4();
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
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *skillIcon; // x25
  int v26; // s0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v34; // x1
  UIAtlas_o **p_defaultNoActAtlas; // x24
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  bool v37; // w0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UISprite_o *v44; // x8
  System_Int32_array **mAtlas; // x1
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x4
  UISprite_o *v51; // x0
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  UISprite_o *v54; // x22
  const MethodInfo *v55; // x1
  UISprite_o *v56; // x0
  const MethodInfo *v57; // x1

  v10 = sealSkillTurn;
  if ( (byte_40FCD2B & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, skillInfo);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_19287, v15);
    sub_B16FFC(&StringLiteral_19285, v16);
    sub_B16FFC(&StringLiteral_19286, v17);
    byte_40FCD2B = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_B16F98(
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
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v19);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL) )
  {
    if ( !skillInfo )
      goto LABEL_57;
    if ( skillInfo->fields.isPassive )
    {
      v23 = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
      if ( !v23 )
        goto LABEL_57;
      gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !gameObject )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
        && BattleSkillInfoData__IsOpenCond(skillInfo, v21) )
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
        if ( !skillIcon )
          goto LABEL_57;
      }
      else
      {
        skillIcon = (UIWidget_o *)this->fields.skillIcon;
        *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
        if ( !skillIcon )
          goto LABEL_57;
      }
      UIWidget__set_color(skillIcon, *(UnityEngine_Color_o *)&v26, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v30);
      BattleServantSkillIConComponent__updateFlashSkill(this, v31);
      BattleServantSkillIConComponent__changeTurnCount(
        this,
        skillInfo->fields.sealedTurn + skillInfo->fields.chargeTurn,
        v32);
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
  v37 = UnityEngine_Object__op_Equality(defaultNoActAtlas, 0LL, 0LL);
  v44 = this->fields.noActSprite;
  if ( v37 )
  {
    if ( !v44 )
      goto LABEL_57;
    mAtlas = (System_Int32_array **)v44->fields.mAtlas;
    *p_defaultNoActAtlas = (UIAtlas_o *)mAtlas;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.defaultNoActAtlas, mAtlas, v38, v39, v40, v41, v42, v43);
  }
  else
  {
    if ( !v44 )
      goto LABEL_57;
    UISprite__set_atlas(this->fields.noActSprite, *p_defaultNoActAtlas, 0LL);
  }
  v46 = (UnityEngine_Component_o *)this->fields.noActSprite;
  if ( !v46 || (v47 = UnityEngine_Component__get_gameObject(v46, 0LL)) == 0LL )
LABEL_57:
    sub_B170D4();
  if ( !(noActTurn | v10) )
  {
    UnityEngine_GameObject__SetActive(v47, 0, 0LL);
    BattleServantSkillIConComponent__stopSealActSprite(this, v48);
    goto LABEL_49;
  }
  UnityEngine_GameObject__SetActive(v47, 1, 0LL);
  this->fields.flashFlg = 0;
  BattleServantSkillIConComponent__updateFlashSkill(this, v49);
  if ( !v10 || noActTurn )
  {
    if ( v10 || !noActTurn )
    {
      BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v10, IsSealSkillSelect, v50);
      if ( isActSkill )
        goto LABEL_49;
      goto LABEL_48;
    }
    v56 = this->fields.noActSprite;
    if ( v56 )
    {
      UISprite__set_spriteName(v56, (System_String_o *)StringLiteral_19287, 0LL);
      BattleServantSkillIConComponent__stopSealActSprite(this, v57);
      v10 = noActTurn;
      if ( isActSkill )
        goto LABEL_49;
      goto LABEL_48;
    }
    goto LABEL_57;
  }
  v51 = this->fields.noActSprite;
  if ( !v51 )
    goto LABEL_57;
  UISprite__set_spriteName(v51, (System_String_o *)StringLiteral_19286, 0LL);
  BattleServantSkillIConComponent__stopSealActSprite(this, v52);
  if ( IsSealSkillSelect )
  {
    v54 = this->fields.noActSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v54, (System_String_o *)StringLiteral_19285, 0LL);
  }
  if ( !isActSkill )
LABEL_48:
    BattleServantSkillIConComponent__setTurnLabel(this, v10, v53);
LABEL_49:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v34);
  BattleServantSkillIConComponent__SetUseCond(this, v55);
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
  BattleSkillInfoData_o *skillInfo; // x0
  bool HasCond; // w0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  UnityEngine_GameObject_o *v21; // x0
  System_Int32_array **ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  UnityEngine_GameObject_o *v31; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  const MethodInfo *v42; // x1
  int64_t v43; // x23
  int32_t CondItemId; // w0
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v46; // x23
  UserItemEntity_o *v47; // x22
  ItemEntity_o *ItemInfo; // x0
  UISprite_o *v49; // x21
  Il2CppObject *v50; // x0
  System_String_o *v51; // x23
  WebViewManager_o *v52; // x0
  WarQuestSelectionMaster_o *v53; // x0
  const MethodInfo *v54; // x1
  ItemMaster_o *v55; // x22
  int32_t v56; // w0
  ItemEntity_o *ItemData; // x0
  UISprite_o *v58; // x21
  Il2CppObject *v59; // x0
  System_String_o *v60; // x22
  UnityEngine_Object_o *v61; // x21
  const MethodInfo *v62; // x1
  BattleSkillInfoData_o *v63; // x0
  bool IsOpenCond; // w0
  UILabel_o *v65; // x19
  System_String_o *v66; // x0
  System_String_o *v67; // x21
  Il2CppObject *v68; // x0
  int32_t imageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FCD3D & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&string_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2443, v13);
    sub_B16FFC(&StringLiteral_22057, v14);
    byte_40FCD3D = 1;
  }
  v70 = 0;
  useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(useCondRoot, 0LL, 0LL) )
    return;
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_71;
  HasCond = BattleSkillInfoData__HasCond(skillInfo, v16);
  if ( !this->fields.useCondRoot )
    goto LABEL_71;
  if ( !HasCond )
  {
    UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(this->fields.useCondRoot, 1, 0LL);
  v70 = 0;
  p_useCondItemIcon = &this->fields.useCondItemIcon;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(useCondItemIcon, 0LL, 0LL) )
  {
    v21 = this->fields.useCondRoot;
    if ( !v21 )
      goto LABEL_71;
    ComponentInChildren_Dropdown_DropdownItem = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                         v21,
                                                                         (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_Dropdown_DropdownItem;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.useCondItemIcon,
      ComponentInChildren_Dropdown_DropdownItem,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
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
    v31 = this->fields.useCondRoot;
    if ( !v31 )
      goto LABEL_71;
    v32 = (System_Int32_array **)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                   v31,
                                   (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (UILabel_o *)v32;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.useCondItemCountLabel, v32, v33, v34, v35, v36, v37, v38);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_71;
  v43 = UserId;
  CondItemId = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v42);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_71;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, v43, CondItemId, 0LL);
  v46 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( EntityDefinitely )
  {
    v47 = EntityDefinitely;
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    {
      ItemInfo = UserItemEntity__getItemInfo(v47, 0LL);
      v49 = *p_useCondItemIcon;
      if ( ItemInfo )
      {
        imageId = ItemInfo->fields.imageId;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
        v51 = System_String__Format((System_String_o *)StringLiteral_22057, v50, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v49, v51, 0LL);
      }
      else
      {
        if ( !v49 )
          goto LABEL_71;
        UISprite__set_spriteName(v49, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    v70 = UnityEngine_Mathf__Min_40727532(v47->fields.num, 999, 0LL);
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    {
      v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v52 )
        goto LABEL_71;
      v53 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v52,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !this->fields.skillInfo )
        goto LABEL_71;
      v55 = (ItemMaster_o *)v53;
      v56 = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, v54);
      if ( !v55 )
        goto LABEL_71;
      ItemData = ItemMaster__GetItemData(v55, v56, 0LL);
      v58 = *p_useCondItemIcon;
      if ( ItemData )
      {
        imageId = ItemData->fields.imageId;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
        v60 = System_String__Format((System_String_o *)StringLiteral_22057, v59, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v58, v60, 0LL);
      }
      else
      {
        if ( !v58 )
          goto LABEL_71;
        UISprite__set_spriteName(v58, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
  }
  v61 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
    return;
  v63 = this->fields.skillInfo;
  if ( !v63 )
    goto LABEL_71;
  IsOpenCond = BattleSkillInfoData__IsOpenCond(v63, v62);
  v65 = *p_useCondItemCountLabel;
  if ( IsOpenCond )
  {
    v66 = System_Int32__ToString((int32_t)&v70, 0LL);
    if ( !v65 )
      goto LABEL_71;
    goto LABEL_66;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2443, 0LL);
  imageId = v70;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  v66 = System_String__Format(v67, v68, 0LL);
  if ( !v65 )
LABEL_71:
    sub_B170D4();
LABEL_66:
  UILabel__set_text(v65, v66, 0LL);
  if ( !*p_useCondItemCountLabel )
    goto LABEL_71;
  UILabel__SetCondensedScale(*p_useCondItemCountLabel, 32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSkillIConComponent__UpdateRankUpEffectState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noActSprite; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w21
  UnityEngine_Object_o *rankupSprite; // x20
  UIWidget_o *v8; // x20
  int v9; // s0
  struct UISprite_o *v13; // x0

  if ( (byte_40FCD3C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD3C = 1;
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.noActSprite;
    if ( !v4 || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_22:
      sub_B170D4();
    activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
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
    v13 = this->fields.rankupSprite;
    if ( !v13 )
      goto LABEL_22;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v13->klass->vtable._30_MarkAsChanged.method)(
      v13,
      v13->klass->vtable._31_Awake.methodPtr);
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
  const MethodInfo *v12; // x1
  int32_t v13; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v15; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FCD38 & 1) == 0 )
  {
    sub_B16FFC(&BattleRankUpSkillInfoData_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_18168, v4);
    byte_40FCD38 = 1;
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
            v13 = RankUpState;
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
                       (System_String_o *)StringLiteral_18168,
                       this->fields.rankupRoot,
                       v13 != 1,
                       v15);
LABEL_26:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v12);
                return v9;
              }
            }
LABEL_25:
            v9 = 0;
            goto LABEL_26;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v17 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
            goto LABEL_25;
          if ( *p_rankupEffect )
          {
            v9 = 1;
            ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))(*p_rankupEffect)->klass->vtable._8_Stop.method)(
              *p_rankupEffect,
              1LL,
              0LL,
              (*p_rankupEffect)->klass->vtable._9_ForceStop.methodPtr);
            *p_rankupEffect = 0LL;
            sub_B16F98((BattleServantConfConponent_o *)&this->fields.rankupEffect, 0LL, v18, v19, v20, v21, v22, v23);
            goto LABEL_26;
          }
        }
        sub_B170D4();
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
  struct BattleSkillInfoData_o *skillInfo; // x8
  UnityEngine_Object_o *turnNoLabelBase; // x21
  UnityEngine_Object_o *turnNoLabel; // x21
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Component_o *v11; // x0
  UILabel_o *v12; // x19
  System_String_o *v13; // x0
  UnityEngine_Component_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = turn;
  if ( (byte_40FCD33 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    byte_40FCD33 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_30;
  if ( skillInfo->fields.isPassive )
    return;
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(turnNoLabelBase, 0LL, 0LL) )
  {
    turnNoLabel = (UnityEngine_Object_o *)this->fields.turnNoLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(turnNoLabel, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Component_o *)this->fields.turnNoLabel;
      if ( !v8 )
        goto LABEL_30;
      gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      if ( turn < 1 )
      {
LABEL_29:
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        return;
      }
LABEL_25:
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v12 = this->fields.turnNoLabel;
      v13 = System_Int32__ToString((int32_t)&v15, 0LL);
      if ( v12 )
      {
        UILabel__set_text(v12, v13, 0LL);
        return;
      }
      goto LABEL_30;
    }
  }
  else
  {
    if ( turn < 1 )
    {
      v14 = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
      if ( v14 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
        if ( gameObject )
          goto LABEL_29;
      }
LABEL_30:
      sub_B170D4();
    }
    v10 = (UnityEngine_Object_o *)this->fields.turnNoLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      v11 = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
      if ( !v11 )
        goto LABEL_30;
      gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !gameObject )
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
  UISprite_o *v8; // x0
  const MethodInfo *v9; // x2
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *v11; // x19
  const MethodInfo *v12; // x2

  if ( (byte_40FCD30 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19287, v3);
    sub_B16FFC(&StringLiteral_19285, v4);
    sub_B16FFC(&StringLiteral_19286, v5);
    byte_40FCD30 = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    noActSprite = this->fields.noActSprite;
    if ( !noActSprite
      || (UISprite__set_atlas(noActSprite, this->fields.defaultNoActAtlas, 0LL), (v8 = this->fields.noActSprite) == 0LL) )
    {
      sub_B170D4();
    }
    if ( this->fields.isNoSkillSprite )
    {
      UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_19286, 0LL);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v9);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        v11 = this->fields.noActSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v11, (System_String_o *)StringLiteral_19285, 0LL);
      }
    }
    else
    {
      UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_19287, 0LL);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v12);
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
  UnityEngine_Collider_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *v10; // x21
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Transform_o *transform; // x19
  int v13; // s0

  if ( (byte_40FCD2A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FCD2A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_20;
    UnityEngine_Collider__set_enabled(Component_srcLineSprite, flg, 0LL);
  }
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v9 )
LABEL_20:
    sub_B170D4();
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v9,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) && !flg )
  {
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v11 )
    {
      transform = UnityEngine_GameObject__get_transform(v11, 0LL);
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
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
      sub_B170D4();
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__setSkillIcon(
        BattleServantSkillIConComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  int32_t itemImageId; // w21
  UISprite_o *skillIcon; // x19
  int32_t v7; // w20

  if ( (byte_40FCD2C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, skillInfo);
    byte_40FCD2C = 1;
  }
  if ( !skillInfo )
    sub_B170D4();
  itemImageId = skillInfo->fields.itemImageId;
  skillIcon = this->fields.skillIcon;
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
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *turnNoLabel; // x20
  int v11; // w8
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FCD2D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&turn);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23445, v6);
    byte_40FCD2D = 1;
  }
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
    if ( !v8 )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    if ( (turn & 0x80000000) != 0 )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    turnNoLabel = this->fields.turnNoLabel;
    v11 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v14 = BattleUtility__FloorToInt((float)(v11 >> 1), 0LL);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v13 = System_String__Format((System_String_o *)StringLiteral_23445, v12, 0LL);
    if ( !turnNoLabel )
LABEL_17:
      sub_B170D4();
    UILabel__set_text(turnNoLabel, v13, 0LL);
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

  if ( (byte_40FCD37 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18176, method);
    byte_40FCD37 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo || !skillInfo->fields.isCharge )
    return 0;
  root = this->fields.root;
  if ( !root
    || (transform = UnityEngine_GameObject__get_transform(root, 0LL),
        BaseMonoBehaviour__createObject_19257936(
          (BaseMonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_18176,
          transform,
          0LL,
          0LL),
        (v6 = this->fields.skillInfo) == 0LL) )
  {
    sub_B170D4();
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
  UISprite_o *noActSprite; // x0
  UISprite_o *v27; // x0
  const MethodInfo *v28; // x2
  UISprite_o *v29; // x22
  UnityEngine_GameObject_o *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Object_array *v39; // x21
  __int64 v40; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x19
  System_Collections_Hashtable_o *v110; // x0
  float changeTimeSealSprite; // [xsp+4h] [xbp-3Ch] BYREF
  int v112; // [xsp+8h] [xbp-38h] BYREF
  int v113; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FCD2E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&noActTurn);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&float_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_18842, v11);
    sub_B16FFC(&StringLiteral_20241, v12);
    sub_B16FFC(&StringLiteral_22584, v13);
    sub_B16FFC(&StringLiteral_21182, v14);
    sub_B16FFC(&StringLiteral_21385, v15);
    sub_B16FFC(&StringLiteral_18037, v16);
    sub_B16FFC(&StringLiteral_22621, v17);
    sub_B16FFC(&StringLiteral_22850, v18);
    sub_B16FFC(&StringLiteral_17561, v19);
    sub_B16FFC(&StringLiteral_18045, v20);
    sub_B16FFC(&StringLiteral_19285, v21);
    sub_B16FFC(&StringLiteral_19286, v22);
    sub_B16FFC(&StringLiteral_21173, v23);
    sub_B16FFC(&iTween_TypeInfo, v24);
    byte_40FCD2E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_18550200(gameObject, 0LL) <= 0 )
  {
    noActSprite = this->fields.noActSprite;
    if ( !noActSprite )
      goto LABEL_86;
    UISprite__set_atlas(noActSprite, this->fields.defaultNoActAtlas, 0LL);
    v27 = this->fields.noActSprite;
    if ( !v27 )
      goto LABEL_86;
    UISprite__set_spriteName(v27, (System_String_o *)StringLiteral_19286, 0LL);
    this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
    if ( IsSealSkillSelect )
    {
      v29 = this->fields.noActSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v29, (System_String_o *)StringLiteral_19285, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v28);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v32 = sub_B17014(object___TypeInfo, 14LL, v31);
    if ( !v32 )
LABEL_86:
      sub_B170D4();
    v39 = (System_Object_array *)v32;
    v40 = StringLiteral_18842;
    if ( StringLiteral_18842 )
    {
      v40 = sub_B170BC(StringLiteral_18842, v39->obj.klass->_1.element_class);
      if ( !v40 )
        goto LABEL_85;
      v41 = (System_Int32_array **)StringLiteral_18842;
    }
    else
    {
      v41 = 0LL;
    }
    if ( !v39->max_length )
      goto LABEL_84;
    v39->m_Items[0] = (Il2CppObject *)v41;
    sub_B16F98((BattleServantConfConponent_o *)v39->m_Items, v41, v33, v34, v35, v36, v37, v38);
    v113 = 0;
    v40 = j_il2cpp_value_box_0(float_TypeInfo, &v113);
    v47 = (System_Int32_array **)v40;
    if ( !v40 || (v40 = sub_B170BC(v40, v39->obj.klass->_1.element_class)) != 0 )
    {
      if ( v39->max_length <= 1 )
        goto LABEL_84;
      v39->m_Items[1] = (Il2CppObject *)v47;
      sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[1], v47, v33, v42, v43, v44, v45, v46);
      v40 = StringLiteral_22621;
      if ( StringLiteral_22621 )
      {
        v40 = sub_B170BC(StringLiteral_22621, v39->obj.klass->_1.element_class);
        if ( !v40 )
          goto LABEL_85;
        v41 = (System_Int32_array **)StringLiteral_22621;
      }
      else
      {
        v41 = 0LL;
      }
      if ( v39->max_length <= 2 )
        goto LABEL_84;
      v39->m_Items[2] = (Il2CppObject *)v41;
      sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[2], v41, v33, v48, v49, v50, v51, v52);
      v112 = 1065353216;
      v40 = j_il2cpp_value_box_0(float_TypeInfo, &v112);
      v58 = (System_Int32_array **)v40;
      if ( !v40 || (v40 = sub_B170BC(v40, v39->obj.klass->_1.element_class)) != 0 )
      {
        if ( v39->max_length <= 3 )
          goto LABEL_84;
        v39->m_Items[3] = (Il2CppObject *)v58;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[3], v58, v33, v53, v54, v55, v56, v57);
        v40 = StringLiteral_21182;
        if ( StringLiteral_21182 )
        {
          v40 = sub_B170BC(StringLiteral_21182, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_21182;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 4 )
          goto LABEL_84;
        v39->m_Items[4] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[4], v41, v33, v59, v60, v61, v62, v63);
        v40 = StringLiteral_22850;
        if ( StringLiteral_22850 )
        {
          v40 = sub_B170BC(StringLiteral_22850, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_22850;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 5 )
          goto LABEL_84;
        v39->m_Items[5] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[5], v41, v33, v64, v65, v66, v67, v68);
        v40 = StringLiteral_21173;
        if ( StringLiteral_21173 )
        {
          v40 = sub_B170BC(StringLiteral_21173, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_21173;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 6 )
          goto LABEL_84;
        v39->m_Items[6] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[6], v41, v33, v69, v70, v71, v72, v73);
        v40 = StringLiteral_17561;
        if ( StringLiteral_17561 )
        {
          v40 = sub_B170BC(StringLiteral_17561, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_17561;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 7 )
          goto LABEL_84;
        v39->m_Items[7] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[7], v41, v33, v74, v75, v76, v77, v78);
        v40 = StringLiteral_20241;
        if ( StringLiteral_20241 )
        {
          v40 = sub_B170BC(StringLiteral_20241, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_20241;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 8 )
          goto LABEL_84;
        v39->m_Items[8] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[8], v41, v33, v79, v80, v81, v82, v83);
        v40 = StringLiteral_21385;
        if ( StringLiteral_21385 )
        {
          v40 = sub_B170BC(StringLiteral_21385, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_21385;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 9 )
          goto LABEL_84;
        v39->m_Items[9] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[9], v41, v33, v84, v85, v86, v87, v88);
        v40 = StringLiteral_18045;
        if ( StringLiteral_18045 )
        {
          v40 = sub_B170BC(StringLiteral_18045, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_18045;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 0xA )
          goto LABEL_84;
        v39->m_Items[10] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[10], v41, v33, v89, v90, v91, v92, v93);
        v40 = StringLiteral_18037;
        if ( StringLiteral_18037 )
        {
          v40 = sub_B170BC(StringLiteral_18037, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_18037;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 0xB )
          goto LABEL_84;
        v39->m_Items[11] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[11], v41, v33, v94, v95, v96, v97, v98);
        v40 = StringLiteral_22584;
        if ( StringLiteral_22584 )
        {
          v40 = sub_B170BC(StringLiteral_22584, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_85;
          v41 = (System_Int32_array **)StringLiteral_22584;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v39->max_length <= 0xC )
          goto LABEL_84;
        v39->m_Items[12] = (Il2CppObject *)v41;
        sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[12], v41, v33, v99, v100, v101, v102, v103);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v40 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite);
        v109 = (System_Int32_array **)v40;
        if ( !v40 || (v40 = sub_B170BC(v40, v39->obj.klass->_1.element_class)) != 0 )
        {
          if ( v39->max_length > 0xD )
          {
            v39->m_Items[13] = (Il2CppObject *)v109;
            sub_B16F98((BattleServantConfConponent_o *)&v39->m_Items[13], v109, v33, v104, v105, v106, v107, v108);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v110 = iTween__Hash(v39, 0LL);
            iTween__ValueTo(v30, v110, 0LL);
            return;
          }
LABEL_84:
          sub_B17100(v40, v41, v33);
          sub_B170A0();
        }
      }
    }
LABEL_85:
    sub_B170F4(v40);
    sub_B170A0();
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_40FCD31 & 1) == 0 )
  {
    sub_B16FFC(&iTween_TypeInfo, method);
    byte_40FCD31 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v4);
}


void __fastcall BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashIcon; // x20
  struct BattleSkillInfoData_o *skillInfo; // x8
  UnityEngine_GameObject_o *v5; // x0
  bool v6; // w1

  if ( (byte_40FCD32 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD32 = 1;
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
      v5 = this->fields.flashIcon;
      if ( this->fields.flashFlg )
      {
        if ( v5 )
        {
          v6 = skillInfo->fields.chargeTurn + skillInfo->fields.sealedTurn < 1;
LABEL_13:
          UnityEngine_GameObject__SetActive(v5, v6, 0LL);
          return;
        }
LABEL_15:
        sub_B170D4();
      }
      if ( !v5 )
        goto LABEL_15;
    }
    else
    {
      v5 = this->fields.flashIcon;
      if ( !v5 )
        goto LABEL_15;
    }
    v6 = 0;
    goto LABEL_13;
  }
}


void __fastcall BattleServantSkillIConComponent__updateSealActSpriteValues(
        BattleServantSkillIConComponent_o *this,
        float value,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *noActSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float *Component_srcLineSprite; // x0
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s7
  UIWidget_o *v13; // x20
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UIWidget_o *v17; // x0
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCD2F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FCD2F = 1;
  }
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  noActSprite = (UnityEngine_Component_o *)this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(noActSprite, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  Component_srcLineSprite = (float *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       gameObject,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v19.fields.r = Component_srcLineSprite[35];
  v19.fields.g = Component_srcLineSprite[36];
  v19.fields.b = Component_srcLineSprite[37];
  v13 = (UIWidget_o *)Component_srcLineSprite;
  v19.fields.a = value;
  UnityEngine_Color___ctor(v19, v9, v10, v11, v12, (const MethodInfo *)&v18);
  UIWidget__set_color(v13, v18, 0LL);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
    if ( v15 )
    {
      v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( v16 )
      {
        v17 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v16,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( v17 )
        {
          UIWidget__set_color(v17, v18, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
}