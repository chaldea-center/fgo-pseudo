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
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x21

  if ( (byte_49FF428 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, isLong);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF428 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
      v9);
  }
  target = this->fields.target;
  if ( !target )
LABEL_16:
    sub_1B64324(target);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          target,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v10 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v10, this->fields.skillInfo, isLong, 0LL);
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
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF42B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF42B = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
  {
    if ( !*p_rankupEffect )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rankupEffect, 0, v6, v7);
    this->fields.rankupSprite = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rankupSprite, 0, v8, v9);
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

  if ( (byte_49FF42D & 1) == 0 )
  {
    sub_1B640C8(&BattleRankUpSkillInfoData_TypeInfo, method);
    byte_49FF42D = 1;
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
    sub_1B64324(0LL);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_49FF427 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF427 = 1;
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

  if ( (byte_49FF426 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF426 = 1;
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
  UnityEngine_Object_o *Object_37994916; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  v8 = this;
  if ( (byte_49FF42C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___, resPath);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9);
    this = (BattleServantSkillIConComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FF42C = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_37994916 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_37994916(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0LL,
                                              0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_37994916, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_37994916 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_37994916,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.rankupEffect, (int32_t)Component_object, v15, v16);
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
          ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__48431348;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v8->fields.rankupSprite,
            (int32_t)ComponentInChildren_object__48431348,
            v19,
            v20);
          return 1;
        }
      }
LABEL_15:
      sub_1B64324(this);
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
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v20; // x2
  float v21; // s0
  float v22; // s3
  float v23; // s1
  float v24; // s2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  int32_t ChargeTurn; // w0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v30; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  char v32; // w2
  int32_t v33; // w3
  struct UISprite_o *v34; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  UISprite_o *v41; // x22
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1

  v9 = sealSkillTurn;
  if ( (byte_49FF41D & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, skillInfo);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_20095/*"icon_sealact_skill"*/, v14);
    sub_1B640C8(&StringLiteral_20093/*"icon_sealact_disable"*/, v15);
    sub_1B640C8(&StringLiteral_20094/*"icon_sealact_seal"*/, v16);
    byte_49FF41D = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    isActSkill,
    sealSkillTurn);
  root = this->fields.root;
  if ( !root )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v18);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(turnNoLabelBase, 0LL, 0LL);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( !skillInfo )
      goto LABEL_50;
    if ( skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)this->fields.turnNoLabelBase;
      if ( !root )
        goto LABEL_50;
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL);
      if ( !root )
        goto LABEL_50;
      UnityEngine_GameObject__SetActive(root, 0, 0LL);
    }
  }
  if ( this->fields.showType == 2 )
  {
    BattleServantSkillIConComponent__setCollider(this, 0, v20);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_50;
    if ( !skillInfo->fields.isPassive )
    {
      if ( BattleSkillInfoData__getChargeTurn(skillInfo, 0LL) <= 0 && BattleSkillInfoData__IsOpenCond(skillInfo, 0LL) )
      {
        root = (UnityEngine_GameObject_o *)this->fields.skillIcon;
        if ( !root )
          goto LABEL_50;
        v21 = 1.0;
        v22 = 1.0;
      }
      else
      {
        root = (UnityEngine_GameObject_o *)this->fields.skillIcon;
        if ( !root )
          goto LABEL_50;
        v22 = 1.0;
        v21 = 0.5;
      }
      v23 = v21;
      v24 = v21;
      UIWidget__set_color((UIWidget_o *)root, *(UnityEngine_Color_o *)&v21, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v25);
      BattleServantSkillIConComponent__updateFlashSkill(this, v26);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v28);
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
      v34 = this->fields.noActSprite;
      if ( !v34 )
        goto LABEL_50;
      mAtlas = v34->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultNoActAtlas, (int32_t)mAtlas, v32, v33);
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
          BattleServantSkillIConComponent__stopSealActSprite(this, v42);
          goto LABEL_47;
        }
        UnityEngine_GameObject__SetActive(root, 1, 0LL);
        this->fields.flashFlg = 0;
        BattleServantSkillIConComponent__updateFlashSkill(this, v36);
        if ( !v9 || noActTurn )
        {
          if ( v9 || !noActTurn )
          {
            BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v9, 0, v38);
            if ( isActSkill )
              goto LABEL_47;
            goto LABEL_46;
          }
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20095/*"icon_sealact_skill"*/,
            v37);
          BattleServantSkillIConComponent__stopSealActSprite(this, v43);
          v9 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20094/*"icon_sealact_seal"*/,
            v37);
          BattleServantSkillIConComponent__stopSealActSprite(this, v39);
          if ( IsSealSkillSelect )
          {
            v41 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(v41, (System_String_o *)StringLiteral_20093/*"icon_sealact_disable"*/, 0LL);
            if ( isActSkill )
              goto LABEL_47;
LABEL_46:
            BattleServantSkillIConComponent__setTurnLabel(this, v9, v40);
            goto LABEL_47;
          }
        }
        if ( isActSkill )
          goto LABEL_47;
        goto LABEL_46;
      }
    }
LABEL_50:
    sub_1B64324(root);
  }
LABEL_47:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v30);
  BattleServantSkillIConComponent__SetUseCond(this, v44);
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
  int64_t skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x22
  UnityEngine_Object_o *v31; // x22
  UISprite_o *v32; // x22
  int32_t monitor; // w23
  int32_t v34; // w0
  int num; // w8
  Il2CppObject *MasterData_object; // x22
  int64_t v37; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v39; // x23
  UserItemEntity_o *v40; // x22
  bool v41; // w0
  UISprite_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x23
  ItemMaster_o *v45; // x22
  UISprite_o *v46; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x22
  UnityEngine_Object_o *v49; // x21
  UILabel_o *v50; // x19
  Il2CppObject *v51; // x1
  System_String_o *v52; // x0
  bool IsOpenCond; // w0
  System_String_o *v54; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t CondItemNumber; // [xsp+18h] [xbp-48h] BYREF
  int v57; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FF42F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonTemplate_BattleItemData__get_Instance__, v13);
    sub_1B640C8(&string_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_1047/*"-{0}"*/, v15);
    sub_1B640C8(&StringLiteral_2897/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, v16);
    sub_1B640C8(&StringLiteral_23251/*"skill_item_{0}"*/, v17);
    byte_49FF42F = 1;
  }
  entity = 0LL;
  useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v57 = 0;
  p_useCondItemIcon = &this->fields.useCondItemIcon;
  useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondItemIcon, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_82;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)skillInfo,
                                   (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.useCondItemIcon,
      (int32_t)ComponentInChildren_object,
      v23,
      v24);
  }
  p_useCondItemCountLabel = &this->fields.useCondItemCountLabel;
  useCondItemCountLabel = (UnityEngine_Object_o *)this->fields.useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(useCondItemCountLabel, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_82;
    v27 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.useCondItemCountLabel, (int32_t)v27, v28, v29);
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  skillInfo = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v30 )
    goto LABEL_82;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v30,
          &entity,
          skillInfo,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v31 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_82;
    v32 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = AtlasManager__SetItem(v32, monitor, 0LL);
  }
  if ( !entity )
LABEL_82:
    sub_1B64324(skillInfo);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_82;
    v34 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v34 >= 999 )
      num = 999;
    else
      num = v34;
    goto LABEL_63;
  }
LABEL_38:
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v37 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !MasterData_object )
    goto LABEL_82;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, v37, skillInfo, 0LL);
  v39 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v40 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v41 = UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
  if ( v40 )
  {
    if ( v41 )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v40, 0LL);
      v42 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        CondItemNumber = *(_DWORD *)(skillInfo + 40);
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
        v44 = System_String__Format((System_String_o *)StringLiteral_23251/*"skill_item_{0}"*/, v43, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v42, v44, 0LL);
      }
      else
      {
        if ( !v42 )
          goto LABEL_82;
        UISprite__set_spriteName(v42, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v40->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_63:
    v57 = num;
    goto LABEL_64;
  }
  if ( v41 )
  {
    skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_82;
    skillInfo = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)skillInfo,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_82;
    v45 = (ItemMaster_o *)skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !v45 )
      goto LABEL_82;
    skillInfo = (int64_t)ItemMaster__GetItemData(v45, skillInfo, 0LL);
    v46 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      CondItemNumber = *(_DWORD *)(skillInfo + 40);
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v48 = System_String__Format((System_String_o *)StringLiteral_23251/*"skill_item_{0}"*/, v47, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v46, v48, 0LL);
    }
    else
    {
      if ( !v46 )
        goto LABEL_82;
      UISprite__set_spriteName(v46, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
LABEL_64:
  v49 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_82;
    if ( *(_DWORD *)(skillInfo + 136) )
    {
      v50 = *p_useCondItemCountLabel;
      CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0LL);
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v52 = (System_String_o *)StringLiteral_1047/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0LL);
      v50 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&v57, 0LL);
        if ( !v50 )
          goto LABEL_82;
        goto LABEL_77;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2897/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      CondItemNumber = v57;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber);
      v52 = v54;
    }
    skillInfo = (int64_t)System_String__Format(v52, v51, 0LL);
    if ( !v50 )
      goto LABEL_82;
LABEL_77:
    UILabel__set_text(v50, (System_String_o *)skillInfo, 0LL);
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
    sub_1B64324(noActSprite);
  }
  UISprite__set_spriteName(noActSprite, spriteName, 0LL);
}


void __fastcall BattleServantSkillIConComponent__UpdateRankUpEffectState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noActSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  float v5; // s9
  float v6; // s8
  UnityEngine_Object_o *rankupSprite; // x20
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF42E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF42E = 1;
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
    v5 = 1.0;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(rankupSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rankupSprite;
    if ( gameObject )
    {
      v8.fields.r = v6;
      v8.fields.g = v6;
      v8.fields.b = v6;
      v8.fields.a = v5;
      UIWidget__set_color((UIWidget_o *)gameObject, v8, 0LL);
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
    sub_1B64324(gameObject);
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
  const MethodInfo *v12; // x1
  int32_t v13; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v15; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FF42A & 1) == 0 )
  {
    sub_1B640C8(&BattleRankUpSkillInfoData_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_18810/*"effect/data/effect/ef_skill_rankup01"*/, v4);
    byte_49FF42A = 1;
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
            v13 = RankUpState;
            if ( (unsigned int)(RankUpState - 1) <= 1 )
            {
              rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0LL, 0LL) )
              {
                v9 = BattleServantSkillIConComponent__PlayRankUpEffect(
                       this,
                       (System_String_o *)StringLiteral_18810/*"effect/data/effect/ef_skill_rankup01"*/,
                       this->fields.rankupRoot,
                       v13 != 1,
                       v15);
LABEL_24:
                BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v12);
                return v9;
              }
            }
LABEL_23:
            v9 = 0;
            goto LABEL_24;
          }
          p_rankupEffect = &this->fields.rankupEffect;
          v17 = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
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
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rankupEffect, 0, v18, v19);
            goto LABEL_24;
          }
        }
        sub_1B64324(v8);
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
  if ( (byte_49FF425 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    byte_49FF425 = 1;
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
      sub_1B64324(this);
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

  if ( (byte_49FF422 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_20095/*"icon_sealact_skill"*/, v4);
    sub_1B640C8(&StringLiteral_20093/*"icon_sealact_disable"*/, v5);
    sub_1B640C8(&StringLiteral_20094/*"icon_sealact_seal"*/, v6);
    byte_49FF422 = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20094/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v8);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20093/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20095/*"icon_sealact_skill"*/, v2);
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
  Il2CppObject *Component_object; // x21
  Il2CppObject *v9; // x21
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x19

  if ( (byte_49FF41C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF41C = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_1B64324(gameObject);
  v9 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)gameObject,
         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) && !flg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      v11 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_49F7116 )
      {
        gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
        byte_49F7116 = 1;
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
      sub_1B64324(0LL);
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
  if ( (byte_49FF41E & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1B640C8(&AtlasManager_TypeInfo, skillInfo);
    byte_49FF41E = 1;
  }
  if ( !skillInfo )
    sub_1B64324(this);
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
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *turnNoLabel; // x20
  int v10; // w8
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF41F & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&turn);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v6);
    byte_49FF41F = 1;
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
    v10 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v12 = BattleUtility__FloorToInt((float)(v10 >> 1), 0LL);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, v11, 0LL);
    if ( !turnNoLabel )
LABEL_16:
      sub_1B64324(gameObject);
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

  if ( (byte_49FF429 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18818/*"effect/ef_command_flash01"*/, method);
    byte_49FF429 = 1;
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
      sub_1B64324(0LL);
    transform = UnityEngine_GameObject__get_transform(root, 0LL);
    BaseMonoBehaviour__createObject_37994916(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_18818/*"effect/ef_command_flash01"*/,
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
  int32_t v30; // w2
  int32_t v31; // w3
  System_Object_array *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x19
  System_Collections_Hashtable_o *v64; // x0
  __int64 v65; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v67; // [xsp+18h] [xbp-38h] BYREF
  int v68; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FF420 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&noActTurn);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&float_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v10);
    sub_1B640C8(&StringLiteral_21133/*"loopType"*/, v11);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v12);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v13);
    sub_1B640C8(&StringLiteral_22445/*"pingPong"*/, v14);
    sub_1B640C8(&StringLiteral_18673/*"easeOutCirc"*/, v15);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v16);
    sub_1B640C8(&StringLiteral_24213/*"updateSealActSpriteValues"*/, v17);
    sub_1B640C8(&StringLiteral_18113/*"completeSealActSpriteValues"*/, v18);
    sub_1B640C8(&StringLiteral_18681/*"easeType"*/, v19);
    sub_1B640C8(&StringLiteral_20093/*"icon_sealact_disable"*/, v20);
    sub_1B640C8(&StringLiteral_20094/*"icon_sealact_seal"*/, v21);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v22);
    sub_1B640C8(&iTween_TypeInfo, v23);
    byte_49FF420 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_60021524(gameObject, 0LL) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20094/*"icon_sealact_seal"*/, v25);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20093/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v26);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v29 = sub_1B64170(object___TypeInfo, 14LL);
    if ( !v29 )
      sub_1B64324(0LL);
    v32 = (System_Object_array *)v29;
    v33 = StringLiteral_19577/*"from"*/;
    if ( StringLiteral_19577/*"from"*/ )
    {
      v33 = sub_1B64204(StringLiteral_19577/*"from"*/, v32->obj.klass->_1.element_class);
      if ( !v33 )
        goto LABEL_80;
      v34 = StringLiteral_19577/*"from"*/;
    }
    else
    {
      v34 = 0LL;
    }
    if ( !v32->max_length )
      goto LABEL_79;
    v32->m_Items[0] = (Il2CppObject *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v32->m_Items, v34, v30, v31);
    v68 = 0;
    v33 = j_il2cpp_value_box_0(float_TypeInfo, &v68);
    v37 = (Il2CppObject *)v33;
    if ( !v33 || (v33 = sub_1B64204(v33, v32->obj.klass->_1.element_class)) != 0 )
    {
      if ( v32->max_length <= 1 )
        goto LABEL_79;
      v32->m_Items[1] = v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[1], (int32_t)v37, v35, v36);
      v33 = StringLiteral_23870/*"to"*/;
      if ( StringLiteral_23870/*"to"*/ )
      {
        v33 = sub_1B64204(StringLiteral_23870/*"to"*/, v32->obj.klass->_1.element_class);
        if ( !v33 )
          goto LABEL_80;
        v34 = StringLiteral_23870/*"to"*/;
      }
      else
      {
        v34 = 0LL;
      }
      if ( v32->max_length <= 2 )
        goto LABEL_79;
      v32->m_Items[2] = (Il2CppObject *)v34;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[2], v34, v38, v39);
      v67 = 1065353216;
      v33 = j_il2cpp_value_box_0(float_TypeInfo, &v67);
      v42 = (Il2CppObject *)v33;
      if ( !v33 || (v33 = sub_1B64204(v33, v32->obj.klass->_1.element_class)) != 0 )
      {
        if ( v32->max_length <= 3 )
          goto LABEL_79;
        v32->m_Items[3] = v42;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[3], (int32_t)v42, v40, v41);
        v33 = StringLiteral_22193/*"onupdate"*/;
        if ( StringLiteral_22193/*"onupdate"*/ )
        {
          v33 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_22193/*"onupdate"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 4 )
          goto LABEL_79;
        v32->m_Items[4] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[4], v34, v43, v44);
        v33 = StringLiteral_24213/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24213/*"updateSealActSpriteValues"*/ )
        {
          v33 = sub_1B64204(StringLiteral_24213/*"updateSealActSpriteValues"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_24213/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 5 )
          goto LABEL_79;
        v32->m_Items[5] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[5], v34, v45, v46);
        v33 = StringLiteral_22185/*"oncomplete"*/;
        if ( StringLiteral_22185/*"oncomplete"*/ )
        {
          v33 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_22185/*"oncomplete"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 6 )
          goto LABEL_79;
        v32->m_Items[6] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[6], v34, v47, v48);
        v33 = StringLiteral_18113/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18113/*"completeSealActSpriteValues"*/ )
        {
          v33 = sub_1B64204(StringLiteral_18113/*"completeSealActSpriteValues"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_18113/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 7 )
          goto LABEL_79;
        v32->m_Items[7] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[7], v34, v49, v50);
        v33 = StringLiteral_21133/*"loopType"*/;
        if ( StringLiteral_21133/*"loopType"*/ )
        {
          v33 = sub_1B64204(StringLiteral_21133/*"loopType"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_21133/*"loopType"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 8 )
          goto LABEL_79;
        v32->m_Items[8] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[8], v34, v51, v52);
        v33 = StringLiteral_22445/*"pingPong"*/;
        if ( StringLiteral_22445/*"pingPong"*/ )
        {
          v33 = sub_1B64204(StringLiteral_22445/*"pingPong"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_22445/*"pingPong"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 9 )
          goto LABEL_79;
        v32->m_Items[9] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[9], v34, v53, v54);
        v33 = StringLiteral_18681/*"easeType"*/;
        if ( StringLiteral_18681/*"easeType"*/ )
        {
          v33 = sub_1B64204(StringLiteral_18681/*"easeType"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_18681/*"easeType"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 0xA )
          goto LABEL_79;
        v32->m_Items[10] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[10], v34, v55, v56);
        v33 = StringLiteral_18673/*"easeOutCirc"*/;
        if ( StringLiteral_18673/*"easeOutCirc"*/ )
        {
          v33 = sub_1B64204(StringLiteral_18673/*"easeOutCirc"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_18673/*"easeOutCirc"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 0xB )
          goto LABEL_79;
        v32->m_Items[11] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[11], v34, v57, v58);
        v33 = StringLiteral_23830/*"time"*/;
        if ( StringLiteral_23830/*"time"*/ )
        {
          v33 = sub_1B64204(StringLiteral_23830/*"time"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_80;
          v34 = StringLiteral_23830/*"time"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 0xC )
          goto LABEL_79;
        v32->m_Items[12] = (Il2CppObject *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[12], v34, v59, v60);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v33 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite);
        v63 = (Il2CppObject *)v33;
        if ( !v33 || (v33 = sub_1B64204(v33, v32->obj.klass->_1.element_class)) != 0 )
        {
          if ( v32->max_length > 0xD )
          {
            v32->m_Items[13] = v63;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->m_Items[13], (int32_t)v63, v61, v62);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v64 = iTween__Hash(v32, 0LL);
            iTween__ValueTo(v28, v64, 0LL);
            return;
          }
LABEL_79:
          sub_1B6432C(v33, v34);
        }
      }
    }
LABEL_80:
    v65 = sub_1B64348(v33);
    sub_1B641F0(v65, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_49FF423 & 1) == 0 )
  {
    sub_1B640C8(&iTween_TypeInfo, method);
    byte_49FF423 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60023324(gameObject, 0LL);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v4);
}


void __fastcall BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashIcon; // x20
  BattleSkillInfoData_o *skillInfo; // x0
  _BOOL4 flashFlg; // w8
  struct UnityEngine_GameObject_o *v6; // x19
  bool v7; // w1

  if ( (byte_49FF424 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF424 = 1;
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
      v6 = this->fields.flashIcon;
      if ( flashFlg )
      {
        skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
        if ( v6 )
        {
          v7 = (int)skillInfo < 1;
          skillInfo = (BattleSkillInfoData_o *)v6;
LABEL_15:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, v7, 0LL);
          return;
        }
LABEL_16:
        sub_1B64324(skillInfo);
      }
      if ( !v6 )
        goto LABEL_16;
      skillInfo = (BattleSkillInfoData_o *)v6;
    }
    else
    {
      skillInfo = (BattleSkillInfoData_o *)this->fields.flashIcon;
      if ( !skillInfo )
        goto LABEL_16;
    }
    v7 = 0;
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

  if ( (byte_49FF421 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF421 = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1B64324(noActSprite);
  }
}