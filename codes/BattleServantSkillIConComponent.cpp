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
  Il2CppObject *Component_object; // x21
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x21

  if ( (byte_4A5E1F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1F8 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
      v7);
  }
  target = this->fields.target;
  if ( !target )
LABEL_16:
    sub_1B8880C(target, isLong);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         target,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v8 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v8, this->fields.skillInfo, isLong, 0LL);
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
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5E1FB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1FB = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
  {
    if ( !*p_rankupEffect )
      sub_1B8880C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rankupEffect, 0, v7, v8);
    this->fields.rankupSprite = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rankupSprite, 0, v9, v10);
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

  if ( (byte_4A5E1FD & 1) == 0 )
  {
    sub_1B885B0(&BattleRankUpSkillInfoData_TypeInfo);
    byte_4A5E1FD = 1;
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
    sub_1B8880C(0LL, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5E1F7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1F7 = 1;
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

  if ( (byte_4A5E1F6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1F6 = 1;
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object_38240928; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  v8 = this;
  if ( (byte_4A5E1FC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (BattleServantSkillIConComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1FC = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_38240928 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_38240928(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0LL,
                                              0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_38240928, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_38240928 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_38240928,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.rankupEffect, (int32_t)Component_object, v13, v14);
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
          ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__48719376;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v8->fields.rankupSprite,
            (int32_t)ComponentInChildren_object__48719376,
            v17,
            v18);
          return 1;
        }
      }
LABEL_15:
      sub_1B8880C(this, resPath);
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
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v17; // x2
  struct UISprite_o *skillIcon; // x8
  float v19; // s0
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
  int32_t v31; // w3
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
  if ( (byte_4A5E1ED & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20175/*"icon_sealact_skill"*/);
    sub_1B885B0(&StringLiteral_20173/*"icon_sealact_disable"*/);
    sub_1B885B0(&StringLiteral_20174/*"icon_sealact_seal"*/);
    byte_4A5E1ED = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    isActSkill,
    sealSkillTurn);
  root = this->fields.root;
  if ( !root )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v15);
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
    BattleServantSkillIConComponent__setCollider(this, 0, v17);
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
      UIWidget__set_color((UIWidget_o *)this->fields.skillIcon, *(UnityEngine_Color_o *)&v19, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v23);
      BattleServantSkillIConComponent__updateFlashSkill(this, v24);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v26);
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
      v32 = this->fields.noActSprite;
      if ( !v32 )
        goto LABEL_49;
      mAtlas = v32->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultNoActAtlas, (int32_t)mAtlas, v30, v31);
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
          BattleServantSkillIConComponent__stopSealActSprite(this, v40);
          goto LABEL_46;
        }
        UnityEngine_GameObject__SetActive(root, 1, 0LL);
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
            (System_String_o *)StringLiteral_20175/*"icon_sealact_skill"*/,
            v35);
          BattleServantSkillIConComponent__stopSealActSprite(this, v41);
          v9 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20174/*"icon_sealact_seal"*/,
            v35);
          BattleServantSkillIConComponent__stopSealActSprite(this, v37);
          if ( IsSealSkillSelect )
          {
            v39 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_20173/*"icon_sealact_disable"*/, 0LL);
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
    sub_1B8880C(root, v13);
  }
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v28);
  BattleServantSkillIConComponent__SetUseCond(this, v42);
}


void __fastcall BattleServantSkillIConComponent__SetUseCond(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *useCondRoot; // x20
  __int64 v4; // x1
  int64_t skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
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
  UISprite_o *v31; // x21
  Il2CppObject *v32; // x0
  System_String_o *v33; // x23
  ItemMaster_o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UISprite_o *v38; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x22
  UnityEngine_Object_o *v41; // x21
  UILabel_o *v42; // x19
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x1
  System_String_o *v47; // x0
  bool IsOpenCond; // w0
  System_String_o *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t CondItemNumber; // [xsp+18h] [xbp-48h] BYREF
  int v55; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A5E1FF & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_1046/*"-{0}"*/);
    sub_1B885B0(&StringLiteral_2917/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_1B885B0(&StringLiteral_23349/*"skill_item_{0}"*/);
    byte_4A5E1FF = 1;
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
  v55 = 0;
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
                                   (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.useCondItemIcon,
      (int32_t)ComponentInChildren_object,
      v9,
      v10);
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
    v13 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.useCondItemCountLabel, (int32_t)v13, v14, v15);
  }
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  skillInfo = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)skillInfo,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v16 )
    goto LABEL_82;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v16,
          &entity,
          skillInfo,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v17 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( (skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_82;
    v18 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = AtlasManager__SetItem(v18, monitor, 0LL);
  }
  if ( !entity )
LABEL_82:
    sub_1B8880C(skillInfo, v4);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_82;
    v20 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v20 >= 999 )
      num = 999;
    else
      num = v20;
    goto LABEL_63;
  }
LABEL_38:
  skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  skillInfo = NetworkManager__get_UserId(0LL);
  if ( !this->fields.skillInfo )
    goto LABEL_82;
  v23 = skillInfo;
  skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !MasterData_object )
    goto LABEL_82;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, v23, skillInfo, 0LL);
  v25 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v26 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  if ( v26 )
  {
    if ( v27 )
    {
      skillInfo = (int64_t)UserItemEntity__getItemInfo(v26, 0LL);
      v31 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        CondItemNumber = *(_DWORD *)(skillInfo + 40);
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v28, v29, v30);
        v33 = System_String__Format((System_String_o *)StringLiteral_23349/*"skill_item_{0}"*/, v32, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v31, v33, 0LL);
      }
      else
      {
        if ( !v31 )
          goto LABEL_82;
        UISprite__set_spriteName(v31, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v26->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_63:
    v55 = num;
    goto LABEL_64;
  }
  if ( v27 )
  {
    skillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_82;
    skillInfo = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)skillInfo,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_82;
    v34 = (ItemMaster_o *)skillInfo;
    skillInfo = BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !v34 )
      goto LABEL_82;
    skillInfo = (int64_t)ItemMaster__GetItemData(v34, skillInfo, 0LL);
    v38 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      CondItemNumber = *(_DWORD *)(skillInfo + 40);
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v35, v36, v37);
      v40 = System_String__Format((System_String_o *)StringLiteral_23349/*"skill_item_{0}"*/, v39, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v38, v40, 0LL);
    }
    else
    {
      if ( !v38 )
        goto LABEL_82;
      UISprite__set_spriteName(v38, string_TypeInfo->static_fields->Empty, 0LL);
    }
  }
LABEL_64:
  v41 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    skillInfo = (int64_t)this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_82;
    if ( *(_DWORD *)(skillInfo + 136) )
    {
      v42 = *p_useCondItemCountLabel;
      CondItemNumber = BattleSkillInfoData__GetCondItemNumber((BattleSkillInfoData_o *)skillInfo, 0LL);
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v43, v44, v45);
      v47 = (System_String_o *)StringLiteral_1046/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)skillInfo, 0LL);
      v42 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (int64_t)System_Int32__ToString((int32_t)&v55, 0LL);
        if ( !v42 )
          goto LABEL_82;
        goto LABEL_77;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2917/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      CondItemNumber = v55;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CondItemNumber, v50, v51, v52);
      v47 = v49;
    }
    skillInfo = (int64_t)System_String__Format(v47, v46, 0LL);
    if ( !v42 )
      goto LABEL_82;
LABEL_77:
    UILabel__set_text(v42, (System_String_o *)skillInfo, 0LL);
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
    sub_1B8880C(noActSprite, spriteName);
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

  if ( (byte_4A5E1FE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1FE = 1;
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
    sub_1B8880C(gameObject, v4);
  }
}


bool __fastcall BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x8
  __int64 methodPtr_low; // x11
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
  int32_t v16; // w3

  if ( (byte_4A5E1FA & 1) == 0 )
  {
    sub_1B885B0(&BattleRankUpSkillInfoData_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_18883/*"effect/data/effect/ef_skill_rankup01"*/);
    byte_4A5E1FA = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    methodPtr_low = LOBYTE(BattleRankUpSkillInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v5 = (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1];
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
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(rankupEffect, 0LL, 0LL) )
              {
                v7 = BattleServantSkillIConComponent__PlayRankUpEffect(
                       this,
                       (System_String_o *)StringLiteral_18883/*"effect/data/effect/ef_skill_rankup01"*/,
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
          if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
            goto LABEL_23;
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
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rankupEffect, 0, v15, v16);
            goto LABEL_24;
          }
        }
        sub_1B8880C(v6, method);
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
  if ( (byte_4A5E1F5 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1F5 = 1;
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
      sub_1B8880C(this, *(_QWORD *)&turn);
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
  _BOOL4 isTweenReverse; // w8
  const MethodInfo *v5; // x2
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *noActSprite; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4A5E1F2 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20175/*"icon_sealact_skill"*/);
    sub_1B885B0(&StringLiteral_20173/*"icon_sealact_disable"*/);
    sub_1B885B0(&StringLiteral_20174/*"icon_sealact_seal"*/);
    byte_4A5E1F2 = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20174/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v5);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20173/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20175/*"icon_sealact_skill"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v8);
      this->fields.isNoSkillSprite = 1;
    }
  }
}


void __fastcall BattleServantSkillIConComponent__setCollider(
        BattleServantSkillIConComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v8; // x21
  UnityEngine_Transform_o *v9; // x19

  if ( (byte_4A5E1EC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1EC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_20;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_1B8880C(gameObject, v6);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) && !flg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      v9 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE6 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( v9 )
      {
        UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
      sub_1B8880C(0LL, val);
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
  if ( (byte_4A5E1EE & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5E1EE = 1;
  }
  if ( !skillInfo )
    sub_1B8880C(this, skillInfo);
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
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E1EF & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A5E1EF = 1;
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
    v9 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v14 = BattleUtility__FloorToInt((float)(v9 >> 1), 0LL);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v10, v11, v12);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_24983/*"{0}"*/, v13, 0LL);
    if ( !turnNoLabel )
LABEL_16:
      sub_1B8880C(gameObject, v6);
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

  if ( (byte_4A5E1F9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18891/*"effect/ef_command_flash01"*/);
    byte_4A5E1F9 = 1;
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
      sub_1B8880C(0LL, method);
    transform = UnityEngine_GameObject__get_transform(root, 0LL);
    BaseMonoBehaviour__createObject_38240928(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_18891/*"effect/ef_command_flash01"*/,
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_Object_array *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x19
  System_Collections_Hashtable_o *v58; // x0
  __int64 v59; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v61; // [xsp+18h] [xbp-38h] BYREF
  int v62; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A5E1F0 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_21215/*"loopType"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_22536/*"pingPong"*/);
    sub_1B885B0(&StringLiteral_18746/*"easeOutCirc"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_24312/*"updateSealActSpriteValues"*/);
    sub_1B885B0(&StringLiteral_18183/*"completeSealActSpriteValues"*/);
    sub_1B885B0(&StringLiteral_18754/*"easeType"*/);
    sub_1B885B0(&StringLiteral_20173/*"icon_sealact_disable"*/);
    sub_1B885B0(&StringLiteral_20174/*"icon_sealact_seal"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E1F0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_60353904(gameObject, 0LL) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20174/*"icon_sealact_seal"*/, v9);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20173/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v10);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_1B88658(object___TypeInfo, 14LL);
    if ( !v13 )
      sub_1B8880C(0LL, v14);
    v17 = (System_Object_array *)v13;
    v18 = StringLiteral_19656/*"from"*/;
    if ( StringLiteral_19656/*"from"*/ )
    {
      v18 = sub_1B886EC(StringLiteral_19656/*"from"*/, v17->obj.klass->_1.element_class);
      if ( !v18 )
        goto LABEL_80;
      v19 = StringLiteral_19656/*"from"*/;
    }
    else
    {
      v19 = 0LL;
    }
    if ( !v17->max_length )
      goto LABEL_79;
    v17->m_Items[0] = (Il2CppObject *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v17->m_Items, v19, v15, v16);
    v62 = 0;
    v18 = j_il2cpp_value_box_0(float_TypeInfo, &v62, v20, v21, v22);
    v25 = (Il2CppObject *)v18;
    if ( !v18 || (v18 = sub_1B886EC(v18, v17->obj.klass->_1.element_class)) != 0 )
    {
      if ( v17->max_length <= 1 )
        goto LABEL_79;
      v17->m_Items[1] = v25;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[1], (int32_t)v25, v23, v24);
      v18 = StringLiteral_23969/*"to"*/;
      if ( StringLiteral_23969/*"to"*/ )
      {
        v18 = sub_1B886EC(StringLiteral_23969/*"to"*/, v17->obj.klass->_1.element_class);
        if ( !v18 )
          goto LABEL_80;
        v19 = StringLiteral_23969/*"to"*/;
      }
      else
      {
        v19 = 0LL;
      }
      if ( v17->max_length <= 2 )
        goto LABEL_79;
      v17->m_Items[2] = (Il2CppObject *)v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[2], v19, v26, v27);
      v61 = 1065353216;
      v18 = j_il2cpp_value_box_0(float_TypeInfo, &v61, v28, v29, v30);
      v33 = (Il2CppObject *)v18;
      if ( !v18 || (v18 = sub_1B886EC(v18, v17->obj.klass->_1.element_class)) != 0 )
      {
        if ( v17->max_length <= 3 )
          goto LABEL_79;
        v17->m_Items[3] = v33;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[3], (int32_t)v33, v31, v32);
        v18 = StringLiteral_22281/*"onupdate"*/;
        if ( StringLiteral_22281/*"onupdate"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_22281/*"onupdate"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 4 )
          goto LABEL_79;
        v17->m_Items[4] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[4], v19, v34, v35);
        v18 = StringLiteral_24312/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24312/*"updateSealActSpriteValues"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_24312/*"updateSealActSpriteValues"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_24312/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 5 )
          goto LABEL_79;
        v17->m_Items[5] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[5], v19, v36, v37);
        v18 = StringLiteral_22273/*"oncomplete"*/;
        if ( StringLiteral_22273/*"oncomplete"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_22273/*"oncomplete"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 6 )
          goto LABEL_79;
        v17->m_Items[6] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[6], v19, v38, v39);
        v18 = StringLiteral_18183/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18183/*"completeSealActSpriteValues"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_18183/*"completeSealActSpriteValues"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_18183/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 7 )
          goto LABEL_79;
        v17->m_Items[7] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[7], v19, v40, v41);
        v18 = StringLiteral_21215/*"loopType"*/;
        if ( StringLiteral_21215/*"loopType"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_21215/*"loopType"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_21215/*"loopType"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 8 )
          goto LABEL_79;
        v17->m_Items[8] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[8], v19, v42, v43);
        v18 = StringLiteral_22536/*"pingPong"*/;
        if ( StringLiteral_22536/*"pingPong"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_22536/*"pingPong"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_22536/*"pingPong"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 9 )
          goto LABEL_79;
        v17->m_Items[9] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[9], v19, v44, v45);
        v18 = StringLiteral_18754/*"easeType"*/;
        if ( StringLiteral_18754/*"easeType"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_18754/*"easeType"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_18754/*"easeType"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 0xA )
          goto LABEL_79;
        v17->m_Items[10] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[10], v19, v46, v47);
        v18 = StringLiteral_18746/*"easeOutCirc"*/;
        if ( StringLiteral_18746/*"easeOutCirc"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_18746/*"easeOutCirc"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_18746/*"easeOutCirc"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 0xB )
          goto LABEL_79;
        v17->m_Items[11] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[11], v19, v48, v49);
        v18 = StringLiteral_23929/*"time"*/;
        if ( StringLiteral_23929/*"time"*/ )
        {
          v18 = sub_1B886EC(StringLiteral_23929/*"time"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_80;
          v19 = StringLiteral_23929/*"time"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 0xC )
          goto LABEL_79;
        v17->m_Items[12] = (Il2CppObject *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[12], v19, v50, v51);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v18 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite, v52, v53, v54);
        v57 = (Il2CppObject *)v18;
        if ( !v18 || (v18 = sub_1B886EC(v18, v17->obj.klass->_1.element_class)) != 0 )
        {
          if ( v17->max_length > 0xD )
          {
            v17->m_Items[13] = v57;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->m_Items[13], (int32_t)v57, v55, v56);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v58 = iTween__Hash(v17, 0LL);
            iTween__ValueTo(v12, v58, 0LL);
            return;
          }
LABEL_79:
          sub_1B88814(v18, v19);
        }
      }
    }
LABEL_80:
    v59 = sub_1B88830(v18);
    sub_1B886D8(v59, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4A5E1F3 & 1) == 0 )
  {
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E1F3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
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

  if ( (byte_4A5E1F4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1F4 = 1;
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
        sub_1B8880C(skillInfo, v4);
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
  void *noActSprite; // x0
  float v6; // s9
  float v7; // s10
  float v8; // s11
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E1F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1F1 = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_14;
  v6 = *((float *)noActSprite + 37);
  v7 = *((float *)noActSprite + 38);
  v8 = *((float *)noActSprite + 39);
  v10.fields.r = v6;
  v10.fields.g = v7;
  v10.fields.b = v8;
  v10.fields.a = value;
  UIWidget__set_color((UIWidget_o *)noActSprite, v10, 0LL);
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
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          v11.fields.r = v6;
          v11.fields.a = value;
          v11.fields.g = v7;
          v11.fields.b = v8;
          UIWidget__set_color((UIWidget_o *)noActSprite, v11, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B8880C(noActSprite, method);
  }
}