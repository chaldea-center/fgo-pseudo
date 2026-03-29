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
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x21

  if ( (byte_4D34222 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34222 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
      v7);
  }
  target = this->fields.target;
  if ( !target )
LABEL_16:
    sub_1C93D2C(target, isLong);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         target,
         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v8 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v8, this->fields.skillInfo, isLong, 0);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D34225 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34225 = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0, 0) )
  {
    if ( !*p_rankupEffect )
      sub_1C93D2C(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    this->fields.rankupEffect = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.rankupEffect, 0, v7, v8, v9, v10, v11, v12);
    this->fields.rankupSprite = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.rankupSprite, 0, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4D34227 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRankUpSkillInfoData_TypeInfo);
    byte_4D34227 = 1;
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
    sub_1C93D2C(0, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0);
}


void BattleServantSkillIConComponent__OnClickIcon(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D34221 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34221 = 1;
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

  if ( (byte_4D34220 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34220 = 1;
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
  UnityEngine_Object_o *Object_41910396; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__52016240; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  v8 = this;
  if ( (byte_4D34226 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (BattleServantSkillIConComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34226 = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0);
  Object_41910396 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_41910396(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0,
                                              0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_41910396, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_41910396 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_41910396,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v8->fields.rankupEffect,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
          ComponentInChildren_object__52016240 = UnityEngine_Component__GetComponentInChildren_object__52016240(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__52016240;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v8->fields.rankupSprite,
            (int32_t)ComponentInChildren_object__52016240,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          return 1;
        }
      }
LABEL_15:
      sub_1C93D2C(this, resPath);
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
  System_String_o *v7; // x7
  int32_t v10; // w21
  __int64 v14; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v18; // x2
  struct UISprite_o *skillIcon; // x8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t ChargeTurn; // w0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  char v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  char v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
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
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = sealSkillTurn;
  if ( (byte_4D34217 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20452/*"icon_sealact_skill"*/);
    sub_1C93AD4(&StringLiteral_20450/*"icon_sealact_disable"*/);
    sub_1C93AD4(&StringLiteral_20451/*"icon_sealact_seal"*/);
    byte_4D34217 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    isActSkill,
    sealSkillTurn,
    *(System_String_o **)&noActTurn,
    IsSealSkillSelect,
    (int64_t)method,
    v7);
  root = this->fields.root;
  if ( !root )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(root, 1, 0);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v16);
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
    BattleServantSkillIConComponent__setCollider(this, 0, v18);
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
        v45.fields.r = 1.0;
        v45.fields.a = 1.0;
      }
      else
      {
        if ( !skillIcon )
          goto LABEL_49;
        v45.fields.a = 1.0;
        v45.fields.r = 0.5;
      }
      v45.fields.g = v45.fields.r;
      v45.fields.b = v45.fields.r;
      UIWidget__set_color((UIWidget_o *)this->fields.skillIcon, v45, 0);
      BattleServantSkillIConComponent__setCollider(this, 1, v21);
      BattleServantSkillIConComponent__updateFlashSkill(this, v22);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v24);
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
      v34 = this->fields.noActSprite;
      if ( !v34 )
        goto LABEL_49;
      mAtlas = v34->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.defaultNoActAtlas,
        (int32_t)mAtlas,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
    if ( root )
    {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0);
      if ( root )
      {
        if ( !(noActTurn | v10) )
        {
          UnityEngine_GameObject__SetActive(root, 0, 0);
          BattleServantSkillIConComponent__stopSealActSprite(this, v42);
          goto LABEL_46;
        }
        UnityEngine_GameObject__SetActive(root, 1, 0);
        this->fields.flashFlg = 0;
        BattleServantSkillIConComponent__updateFlashSkill(this, v36);
        if ( !v10 || noActTurn )
        {
          if ( v10 || !noActTurn )
          {
            BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v10, 0, v38);
            if ( isActSkill )
              goto LABEL_46;
            goto LABEL_45;
          }
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20452/*"icon_sealact_skill"*/,
            v37);
          BattleServantSkillIConComponent__stopSealActSprite(this, v43);
          v10 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20451/*"icon_sealact_seal"*/,
            v37);
          BattleServantSkillIConComponent__stopSealActSprite(this, v39);
          if ( IsSealSkillSelect )
          {
            v41 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(v41, (System_String_o *)StringLiteral_20450/*"icon_sealact_disable"*/, 0);
            if ( isActSkill )
              goto LABEL_46;
LABEL_45:
            BattleServantSkillIConComponent__setTurnLabel(this, v10, v40);
            goto LABEL_46;
          }
        }
        if ( isActSkill )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1C93D2C(root, v14);
  }
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v26);
  BattleServantSkillIConComponent__SetUseCond(this, v44);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x22
  UnityEngine_Object_o *v25; // x22
  UISprite_o *v26; // x22
  int32_t monitor; // w23
  int32_t v28; // w0
  int num; // w8
  Il2CppObject *MasterData_object; // x22
  int64_t v31; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  UnityEngine_Object_o *v33; // x23
  UserItemEntity_o *v34; // x22
  bool v35; // w0
  UISprite_o *v36; // x21
  Il2CppObject *v37; // x0
  System_String_o *v38; // x23
  ItemMaster_o *v39; // x22
  UISprite_o *v40; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x22
  UnityEngine_Object_o *v43; // x21
  UILabel_o *v44; // x19
  Il2CppObject *v45; // x1
  System_String_o *v46; // x0
  bool IsOpenCond; // w0
  System_String_o *v48; // x21
  int32_t chargeTurn_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4D34229 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_981/*"-{0}"*/);
    sub_1C93AD4(&StringLiteral_2809/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_1C93AD4(&StringLiteral_23812/*"skill_item_{0}"*/);
    byte_4D34229 = 1;
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
  v51 = 0;
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
                                   (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.useCondItemIcon,
      (int32_t)ComponentInChildren_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
    v17 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v17;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.useCondItemCountLabel,
      (int32_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)skillInfo,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !v24 )
    goto LABEL_86;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v24,
          &entity,
          (int32_t)skillInfo,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v25 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = (BattleSkillInfoData_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
  if ( ((unsigned __int8)skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_86;
    v26 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)AtlasManager__SetItem(v26, monitor, 0);
  }
  if ( !entity )
LABEL_86:
    sub_1C93D2C(skillInfo, v4);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_86;
    v28 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0);
    if ( v28 >= 999 )
      num = 999;
    else
      num = v28;
    goto LABEL_67;
  }
LABEL_38:
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v31 = *(_QWORD *)&skillInfo->fields.commonReleaseEntity[1].fields.condGroup;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
  if ( !MasterData_object )
    goto LABEL_86;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)MasterData_object,
                       v31,
                       (int32_t)skillInfo,
                       0);
  v33 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v34 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( v34 )
  {
    if ( v35 )
    {
      skillInfo = (BattleSkillInfoData_o *)UserItemEntity__getItemInfo(v34, 0);
      v36 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn_k__BackingField);
        v38 = System_String__Format((System_String_o *)StringLiteral_23812/*"skill_item_{0}"*/, v37, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v36, v38, 0);
      }
      else
      {
        if ( !v36 )
          goto LABEL_86;
        UISprite__set_spriteName(v36, string_TypeInfo->static_fields->Empty, 0);
      }
    }
    num = v34->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_67:
    v51 = num;
    goto LABEL_68;
  }
  if ( v35 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)skillInfo,
                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_86;
    v39 = (ItemMaster_o *)skillInfo;
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
    if ( !v39 )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)ItemMaster__GetItemData(v39, (int32_t)skillInfo, -1, 0);
    v40 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn_k__BackingField);
      v42 = System_String__Format((System_String_o *)StringLiteral_23812/*"skill_item_{0}"*/, v41, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v40, v42, 0);
    }
    else
    {
      if ( !v40 )
        goto LABEL_86;
      UISprite__set_spriteName(v40, string_TypeInfo->static_fields->Empty, 0);
    }
  }
LABEL_68:
  v43 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
  {
    skillInfo = this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_86;
    if ( skillInfo->fields.battleItemDispType )
    {
      v44 = *p_useCondItemCountLabel;
      chargeTurn_k__BackingField = BattleSkillInfoData__GetCondItemNumber(skillInfo, 0);
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn_k__BackingField);
      v46 = (System_String_o *)StringLiteral_981/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond(skillInfo, 0);
      v44 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (BattleSkillInfoData_o *)System_Int32__ToString((int32_t)&v51, 0);
        if ( !v44 )
          goto LABEL_86;
        goto LABEL_81;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2809/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0);
      chargeTurn_k__BackingField = v51;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn_k__BackingField);
      v46 = v48;
    }
    skillInfo = (BattleSkillInfoData_o *)System_String__Format(v46, v45, 0);
    if ( !v44 )
      goto LABEL_86;
LABEL_81:
    UILabel__set_text(v44, (System_String_o *)skillInfo, 0);
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
    sub_1C93D2C(noActSprite, spriteName);
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

  if ( (byte_4D34228 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34228 = 1;
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
    sub_1C93D2C(gameObject, v4);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D34224 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRankUpSkillInfoData_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_19066/*"effect/data/effect/ef_skill_rankup01"*/);
    byte_4D34224 = 1;
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
                       (System_String_o *)StringLiteral_19066/*"effect/data/effect/ef_skill_rankup01"*/,
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
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.rankupEffect, 0, v15, v16, v17, v18, v19, v20);
            goto LABEL_24;
          }
        }
        sub_1C93D2C(v6, method);
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
  if ( (byte_4D3421F & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3421F = 1;
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
      sub_1C93D2C(this, *(_QWORD *)&turn);
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

  if ( (byte_4D3421C & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_20452/*"icon_sealact_skill"*/);
    sub_1C93AD4(&StringLiteral_20450/*"icon_sealact_disable"*/);
    sub_1C93AD4(&StringLiteral_20451/*"icon_sealact_seal"*/);
    byte_4D3421C = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20451/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v5);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20450/*"icon_sealact_disable"*/, 0);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20452/*"icon_sealact_skill"*/, v2);
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

  if ( (byte_4D34216 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34216 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_1C93D2C(gameObject, v6);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)gameObject,
         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) && !flg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v9 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4D2A13E )
      {
        gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
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
      sub_1C93D2C(0, val);
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
  if ( (byte_4D34218 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C93AD4(&AtlasManager_TypeInfo);
    byte_4D34218 = 1;
  }
  if ( !skillInfo )
    sub_1C93D2C(this, skillInfo);
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
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D34219 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    byte_4D34219 = 1;
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
    v11 = BattleUtility__FloorToInt((float)(v9 >> 1), 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25426/*"{0}"*/, v10, 0);
    if ( !turnNoLabel )
LABEL_16:
      sub_1C93D2C(gameObject, v6);
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

  if ( (byte_4D34223 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19074/*"effect/ef_command_flash01"*/);
    byte_4D34223 = 1;
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
      sub_1C93D2C(0, method);
    transform = UnityEngine_GameObject__get_transform(root, 0);
    BaseMonoBehaviour__createObject_41910396(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_19074/*"effect/ef_command_flash01"*/,
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  __int64 v93; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  __int64 v114; // x19
  System_Collections_Hashtable_o *v115; // x0
  __int64 v116; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v118; // [xsp+18h] [xbp-38h] BYREF
  int v119; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D3421A & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&StringLiteral_19902/*"from"*/);
    sub_1C93AD4(&StringLiteral_21618/*"loopType"*/);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_22710/*"onupdate"*/);
    sub_1C93AD4(&StringLiteral_22981/*"pingPong"*/);
    sub_1C93AD4(&StringLiteral_18911/*"easeOutCirc"*/);
    sub_1C93AD4(&StringLiteral_24415/*"to"*/);
    sub_1C93AD4(&StringLiteral_24754/*"updateSealActSpriteValues"*/);
    sub_1C93AD4(&StringLiteral_18335/*"completeSealActSpriteValues"*/);
    sub_1C93AD4(&StringLiteral_18919/*"easeType"*/);
    sub_1C93AD4(&StringLiteral_20450/*"icon_sealact_disable"*/);
    sub_1C93AD4(&StringLiteral_20451/*"icon_sealact_seal"*/);
    sub_1C93AD4(&StringLiteral_22702/*"oncomplete"*/);
    sub_1C93AD4(&iTween_TypeInfo);
    byte_4D3421A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_64171828(gameObject, 0) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20451/*"icon_sealact_seal"*/, v9);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20450/*"icon_sealact_disable"*/, 0);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v10);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v13 = sub_1C93B7C(object___TypeInfo, 14);
    if ( !v13 )
      sub_1C93D2C(0, v14);
    v21 = v13;
    v22 = StringLiteral_19902/*"from"*/;
    if ( StringLiteral_19902/*"from"*/ )
    {
      v22 = sub_1C93C10(StringLiteral_19902/*"from"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
      if ( !v22 )
        goto LABEL_80;
      v23 = StringLiteral_19902/*"from"*/;
    }
    else
    {
      v23 = 0;
    }
    if ( !*(_DWORD *)(v21 + 24) )
      goto LABEL_79;
    *(_QWORD *)(v21 + 32) = v23;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 32), v23, v15, v16, v17, v18, v19, v20);
    v119 = 0;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &v119);
    v30 = v22;
    if ( !v22 || (v22 = sub_1C93C10(v22, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v21 + 24) <= 1u )
        goto LABEL_79;
      *(_QWORD *)(v21 + 40) = v30;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 40), v30, v24, v25, v26, v27, v28, v29);
      v22 = StringLiteral_24415/*"to"*/;
      if ( StringLiteral_24415/*"to"*/ )
      {
        v22 = sub_1C93C10(StringLiteral_24415/*"to"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
        if ( !v22 )
          goto LABEL_80;
        v37 = StringLiteral_24415/*"to"*/;
      }
      else
      {
        v37 = 0;
      }
      if ( *(_DWORD *)(v21 + 24) <= 2u )
        goto LABEL_79;
      *(_QWORD *)(v21 + 48) = v37;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 48), v37, v31, v32, v33, v34, v35, v36);
      v118 = 1065353216;
      v22 = j_il2cpp_value_box_0(float_TypeInfo, &v118);
      v44 = v22;
      if ( !v22 || (v22 = sub_1C93C10(v22, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v21 + 24) <= 3u )
          goto LABEL_79;
        *(_QWORD *)(v21 + 56) = v44;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 56), v44, v38, v39, v40, v41, v42, v43);
        v22 = StringLiteral_22710/*"onupdate"*/;
        if ( StringLiteral_22710/*"onupdate"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_22710/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v51 = StringLiteral_22710/*"onupdate"*/;
        }
        else
        {
          v51 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 4u )
          goto LABEL_79;
        *(_QWORD *)(v21 + 64) = v51;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 64), v51, v45, v46, v47, v48, v49, v50);
        v22 = StringLiteral_24754/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24754/*"updateSealActSpriteValues"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_24754/*"updateSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v58 = StringLiteral_24754/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v58 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 5u )
          goto LABEL_79;
        *(_QWORD *)(v21 + 72) = v58;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 72), v58, v52, v53, v54, v55, v56, v57);
        v22 = StringLiteral_22702/*"oncomplete"*/;
        if ( StringLiteral_22702/*"oncomplete"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_22702/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v65 = StringLiteral_22702/*"oncomplete"*/;
        }
        else
        {
          v65 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 6u )
          goto LABEL_79;
        *(_QWORD *)(v21 + 80) = v65;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 80), v65, v59, v60, v61, v62, v63, v64);
        v22 = StringLiteral_18335/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18335/*"completeSealActSpriteValues"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_18335/*"completeSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v72 = StringLiteral_18335/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v72 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 7u )
          goto LABEL_79;
        *(_QWORD *)(v21 + 88) = v72;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 88), v72, v66, v67, v68, v69, v70, v71);
        v22 = StringLiteral_21618/*"loopType"*/;
        if ( StringLiteral_21618/*"loopType"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_21618/*"loopType"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v79 = StringLiteral_21618/*"loopType"*/;
        }
        else
        {
          v79 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 8u )
          goto LABEL_79;
        *(_QWORD *)(v21 + 96) = v79;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 96), v79, v73, v74, v75, v76, v77, v78);
        v22 = StringLiteral_22981/*"pingPong"*/;
        if ( StringLiteral_22981/*"pingPong"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_22981/*"pingPong"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v86 = StringLiteral_22981/*"pingPong"*/;
        }
        else
        {
          v86 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 9u )
          goto LABEL_79;
        *(_QWORD *)(v21 + 104) = v86;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 104), v86, v80, v81, v82, v83, v84, v85);
        v22 = StringLiteral_18919/*"easeType"*/;
        if ( StringLiteral_18919/*"easeType"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_18919/*"easeType"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v93 = StringLiteral_18919/*"easeType"*/;
        }
        else
        {
          v93 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 0xAu )
          goto LABEL_79;
        *(_QWORD *)(v21 + 112) = v93;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 112), v93, v87, v88, v89, v90, v91, v92);
        v22 = StringLiteral_18911/*"easeOutCirc"*/;
        if ( StringLiteral_18911/*"easeOutCirc"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_18911/*"easeOutCirc"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v100 = StringLiteral_18911/*"easeOutCirc"*/;
        }
        else
        {
          v100 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 0xBu )
          goto LABEL_79;
        *(_QWORD *)(v21 + 120) = v100;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 120), v100, v94, v95, v96, v97, v98, v99);
        v22 = StringLiteral_24376/*"time"*/;
        if ( StringLiteral_24376/*"time"*/ )
        {
          v22 = sub_1C93C10(StringLiteral_24376/*"time"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v22 )
            goto LABEL_80;
          v107 = StringLiteral_24376/*"time"*/;
        }
        else
        {
          v107 = 0;
        }
        if ( *(_DWORD *)(v21 + 24) <= 0xCu )
          goto LABEL_79;
        *(_QWORD *)(v21 + 128) = v107;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 128), v107, v101, v102, v103, v104, v105, v106);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v22 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite);
        v114 = v22;
        if ( !v22 || (v22 = sub_1C93C10(v22, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v21 + 24) > 0xDu )
          {
            *(_QWORD *)(v21 + 136) = v114;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 136), v114, v108, v109, v110, v111, v112, v113);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v115 = iTween__Hash((System_Object_array *)v21, 0);
            iTween__ValueTo(v12, v115, 0);
            return;
          }
LABEL_79:
          sub_1C93D34(v22);
        }
      }
    }
LABEL_80:
    v116 = sub_1C93D50(v22);
    sub_1C93BFC(v116, 0);
  }
}


void BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D3421D & 1) == 0 )
  {
    sub_1C93AD4(&iTween_TypeInfo);
    byte_4D3421D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_64173628(gameObject, 0);
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

  if ( (byte_4D3421E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3421E = 1;
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
          sub_1C93D2C(skillInfo, v4);
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

  if ( (byte_4D3421B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3421B = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                        (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1C93D2C(noActSprite, method);
  }
}