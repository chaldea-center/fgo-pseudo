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
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  Il2CppObject *v10; // x21

  if ( (byte_5974277 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974277 = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_16;
    BattleServantParamComponent__clickSkillIcon(
      (BattleServantParamComponent_o *)Component_object,
      this->fields.skillInfo,
      isLong,
      v8);
  }
  target = this->fields.target;
  if ( !target )
LABEL_16:
    sub_2213CDC(target, isLong);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          target,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  target = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( v10 )
    {
      BattlePerformanceMaster__clickSkillIcon((BattlePerformanceMaster_o *)v10, this->fields.skillInfo, isLong, 0);
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
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_597427A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597427A = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0, 0) )
  {
    if ( !*p_rankupEffect )
      sub_2213CDC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    this->fields.rankupEffect = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rankupEffect, 0, v8, v9, v10, v11, v12, v13);
    this->fields.rankupSprite = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rankupSprite, 0, v14, v15, v16, v17, v18, v19);
  }
}


int32_t BattleServantSkillIConComponent__GetRankUpState(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0
  __int64 naturalAligment; // x10

  if ( (byte_597427C & 1) == 0 )
  {
    sub_2213A60(&BattleRankUpSkillInfoData_TypeInfo);
    byte_597427C = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo
    && (naturalAligment = BattleRankUpSkillInfoData_TypeInfo->_2.naturalAligment,
        skillInfo->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[naturalAligment - 1] == BattleRankUpSkillInfoData_TypeInfo )
  {
    return BattleRankUpSkillInfoData__GetRankUpState((BattleRankUpSkillInfoData_o *)skillInfo, 0);
  }
  else
  {
    return -1;
  }
}


void BattleServantSkillIConComponent__OnClickIcon(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5974276 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974276 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    BattleServantSkillIConComponent__ClickSkillIconFunc(this, 0, v4);
}


void BattleServantSkillIConComponent__OnLongTapIcon(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5974275 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974275 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  __int64 v10; // x1
  UnityEngine_Object_o *Object_48153028; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v8 = this;
  if ( (byte_597427B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (BattleServantSkillIConComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597427B = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0);
  Object_48153028 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_48153028(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0,
                                              0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_48153028, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_48153028 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_48153028,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields.rankupEffect,
      (int32_t)Component_object,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    rankupEffect = (UnityEngine_Object_o *)v8->fields.rankupEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(rankupEffect, 0, 0) )
    {
      this = *p_rankupEffect;
      if ( *p_rankupEffect )
      {
        CommonEffectComponent__Init((CommonEffectComponent_o *)this, isSkip, 0, 0);
        this = *p_rankupEffect;
        if ( *p_rankupEffect )
        {
          ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__58855044;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v8->fields.rankupSprite,
            (int32_t)ComponentInChildren_object__58855044,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          return 1;
        }
      }
LABEL_15:
      sub_2213CDC(this, resPath);
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
  bool v7; // w7
  int32_t v10; // w21
  __int64 v14; // x1
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v19; // x2
  bool IsAvailable; // w8
  float v21; // s0 OVERLAPPED
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
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  char v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct UISprite_o *v38; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  UISprite_o *v45; // x22
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1

  v10 = sealSkillTurn;
  if ( (byte_597426C & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21204/*"icon_sealact_skill"*/);
    sub_2213A60(&StringLiteral_21202/*"icon_sealact_disable"*/);
    sub_2213A60(&StringLiteral_21203/*"icon_sealact_seal"*/);
    byte_597426C = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    (System_String_o *)isActSkill,
    *(System_String_o **)&sealSkillTurn,
    noActTurn,
    IsSealSkillSelect,
    (bool)method,
    v7);
  root = this->fields.root;
  if ( !root )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(root, 1, 0);
  this->fields.isTweenSealSkillSelect = IsSealSkillSelect;
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v16);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(turnNoLabelBase, 0, 0);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( !skillInfo )
      goto LABEL_51;
    if ( skillInfo->fields.isPassive )
    {
      root = (UnityEngine_GameObject_o *)this->fields.turnNoLabelBase;
      if ( !root )
        goto LABEL_51;
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0);
      if ( !root )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive(root, 0, 0);
    }
  }
  if ( this->fields.showType == 2 )
  {
    BattleServantSkillIConComponent__setCollider(this, 0, v19);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_51;
    if ( !skillInfo->fields.isPassive )
    {
      IsAvailable = BattleSkillInfoData__IsAvailable(skillInfo, 0);
      root = (UnityEngine_GameObject_o *)this->fields.skillIcon;
      if ( IsAvailable )
      {
        if ( !root )
          goto LABEL_51;
        v21 = 1.0;
        v22 = 1.0;
      }
      else
      {
        if ( !root )
          goto LABEL_51;
        v22 = 1.0;
        v21 = 0.5;
      }
      v23 = v21;
      v24 = v21;
      UIWidget__set_color((UIWidget_o *)root, *(UnityEngine_Color_o *)&v21, 0);
      BattleServantSkillIConComponent__setCollider(this, 1, v25);
      BattleServantSkillIConComponent__updateFlashSkill(this, v26);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v28);
    }
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(noActSprite, 0, 0) )
  {
    defaultNoActAtlas = (UnityEngine_Object_o *)this->fields.defaultNoActAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(defaultNoActAtlas, 0, 0);
    if ( ((unsigned __int8)root & 1) != 0 )
    {
      v38 = this->fields.noActSprite;
      if ( !v38 )
        goto LABEL_51;
      mAtlas = v38->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.defaultNoActAtlas,
        (int32_t)mAtlas,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    root = (UnityEngine_GameObject_o *)this->fields.noActSprite;
    if ( noActTurn | v10 )
    {
      if ( root )
      {
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0);
        if ( root )
        {
          UnityEngine_GameObject__SetActive(root, 1, 0);
          this->fields.flashFlg = 0;
          BattleServantSkillIConComponent__updateFlashSkill(this, v40);
          if ( !v10 || noActTurn )
          {
            if ( v10 || !noActTurn )
            {
              BattleServantSkillIConComponent__startChangeSealActSprite(this, noActTurn, v10, 0, v42);
              if ( isActSkill )
                goto LABEL_48;
              goto LABEL_47;
            }
            BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
              this,
              (System_String_o *)StringLiteral_21204/*"icon_sealact_skill"*/,
              v41);
            BattleServantSkillIConComponent__stopSealActSprite(this, v47);
            v10 = noActTurn;
          }
          else
          {
            BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
              this,
              (System_String_o *)StringLiteral_21203/*"icon_sealact_seal"*/,
              v41);
            BattleServantSkillIConComponent__stopSealActSprite(this, v43);
            if ( IsSealSkillSelect )
            {
              v45 = this->fields.noActSprite;
              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
              AtlasManager__SetEventSprite(v45, (System_String_o *)StringLiteral_21202/*"icon_sealact_disable"*/, 0);
              if ( isActSkill )
                goto LABEL_48;
LABEL_47:
              BattleServantSkillIConComponent__setTurnLabel(this, v10, v44);
              goto LABEL_48;
            }
          }
          if ( isActSkill )
            goto LABEL_48;
          goto LABEL_47;
        }
      }
    }
    else if ( root )
    {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0);
      if ( root )
      {
        UnityEngine_GameObject__SetActive(root, 0, 0);
        BattleServantSkillIConComponent__stopSealActSprite(this, v46);
        goto LABEL_48;
      }
    }
LABEL_51:
    sub_2213CDC(root, v14);
  }
LABEL_48:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v30);
  BattleServantSkillIConComponent__SetUseCond(this, v48);
}


void BattleServantSkillIConComponent__SetUseCond(BattleServantSkillIConComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *useCondRoot; // x20
  __int64 v4; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  bool HasCond; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x22
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x22
  UISprite_o *v29; // x22
  int32_t monitor; // w23
  int32_t v31; // w0
  __int64 v32; // x1
  int num; // w22
  Il2CppObject *MasterData_object; // x22
  int64_t v35; // x23
  __int64 v36; // x1
  UserItemEntity_o *EntityDefinitely; // x22
  UnityEngine_Object_o *v38; // x23
  int v39; // w8
  UISprite_o *v40; // x21
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x23
  ItemMaster_o *v44; // x22
  UISprite_o *v45; // x21
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x22
  UnityEngine_Object_o *v49; // x21
  UILabel_o *v50; // x19
  Il2CppObject *v51; // x1
  System_String_o *v52; // x0
  bool IsOpenCond; // w0
  __int64 v54; // x1
  System_String_o *v55; // x21
  int32_t chargeTurn_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int v58; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_597427E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_2213A60(&StringLiteral_1062/*"-{0}"*/);
    sub_2213A60(&StringLiteral_2915/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_2213A60(&StringLiteral_24765/*"skill_item_{0}"*/);
    byte_597427E = 1;
  }
  useCondRoot = (UnityEngine_Object_o *)this->fields.useCondRoot;
  v58 = 0;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(useCondRoot, 0, 0) )
  {
    skillInfo = this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_91;
    HasCond = BattleSkillInfoData__HasCond(skillInfo, 0);
    skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
    if ( !HasCond )
    {
      if ( skillInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 0, 0);
        return;
      }
      goto LABEL_91;
    }
    if ( !skillInfo )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0);
    v58 = 0;
    p_useCondItemIcon = &this->fields.useCondItemIcon;
    useCondItemIcon = (UnityEngine_Object_o *)this->fields.useCondItemIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(useCondItemIcon, 0, 0) )
    {
      skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
      if ( !skillInfo )
        goto LABEL_91;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)skillInfo,
                                     (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
      *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.useCondItemIcon,
        (int32_t)ComponentInChildren_object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    p_useCondItemCountLabel = &this->fields.useCondItemCountLabel;
    useCondItemCountLabel = (UnityEngine_Object_o *)this->fields.useCondItemCountLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(useCondItemCountLabel, 0, 0) )
    {
      skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
      if ( !skillInfo )
        goto LABEL_91;
      v19 = UnityEngine_GameObject__GetComponentInChildren_object_(
              (UnityEngine_GameObject_o *)skillInfo,
              (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
      *p_useCondItemCountLabel = (struct UILabel_o *)v19;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.useCondItemCountLabel,
        (int32_t)v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_91;
    skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)skillInfo,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_91;
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
    if ( !v26 )
      goto LABEL_91;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            v26,
            &entity,
            (int32_t)skillInfo,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      goto LABEL_40;
    v28 = (UnityEngine_Object_o *)*p_useCondItemIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    skillInfo = (BattleSkillInfoData_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
    if ( ((unsigned __int8)skillInfo & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_91;
      v29 = *p_useCondItemIcon;
      monitor = (int32_t)entity[2].monitor;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
      skillInfo = (BattleSkillInfoData_o *)AtlasManager__SetItem(v29, monitor, 0);
    }
    if ( !entity )
      goto LABEL_91;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      skillInfo = (BattleSkillInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( !entity || !skillInfo )
        goto LABEL_91;
      v31 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0);
      if ( v31 >= 999 )
        num = 999;
      else
        num = v31;
    }
    else
    {
LABEL_40:
      skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !skillInfo )
        goto LABEL_91;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)skillInfo,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
      }
      if ( !this->fields.skillInfo )
        goto LABEL_91;
      v35 = *(_QWORD *)(*(_QWORD *)&skillInfo->fields.hasCond.fields.hasValue + 64LL);
      skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
      if ( !MasterData_object )
        goto LABEL_91;
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)MasterData_object,
                           v35,
                           (int32_t)skillInfo,
                           0);
      v38 = (UnityEngine_Object_o *)*p_useCondItemIcon;
      v39 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
      if ( !EntityDefinitely )
      {
        if ( !v39 )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
        if ( UnityEngine_Object__op_Inequality(v38, 0, 0) )
        {
          skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !skillInfo )
            goto LABEL_91;
          skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)skillInfo,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !this->fields.skillInfo )
            goto LABEL_91;
          v44 = (ItemMaster_o *)skillInfo;
          skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0);
          if ( !v44 )
            goto LABEL_91;
          skillInfo = (BattleSkillInfoData_o *)ItemMaster__GetItemData(v44, (int32_t)skillInfo, -1, 0);
          v45 = *p_useCondItemIcon;
          if ( skillInfo )
          {
            chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
            v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &chargeTurn_k__BackingField);
            v48 = System_String__Format((System_String_o *)StringLiteral_24765/*"skill_item_{0}"*/, v46, 0);
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v47);
            AtlasManager__SetEventSprite(v45, v48, 0);
          }
          else
          {
            if ( !v45 )
              goto LABEL_91;
            UISprite__set_spriteName(v45, **(System_String_o ***)(qword_5984390 + 184), 0);
          }
        }
        num = 0;
LABEL_76:
        v49 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        if ( !UnityEngine_Object__op_Inequality(v49, 0, 0) )
          return;
        skillInfo = this->fields.skillInfo;
        if ( skillInfo )
        {
          if ( skillInfo->fields.battleItemDispType )
          {
            v50 = *p_useCondItemCountLabel;
            chargeTurn_k__BackingField = BattleSkillInfoData__GetCondItemNumber(skillInfo, 0);
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &chargeTurn_k__BackingField);
            v52 = (System_String_o *)StringLiteral_1062/*"-{0}"*/;
          }
          else
          {
            IsOpenCond = BattleSkillInfoData__IsOpenCond(skillInfo, 0);
            v50 = *p_useCondItemCountLabel;
            if ( IsOpenCond )
            {
              skillInfo = (BattleSkillInfoData_o *)System_Int32__ToString((int32_t)&v58, 0);
              if ( !v50 )
                goto LABEL_91;
              goto LABEL_89;
            }
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2915/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0);
            chargeTurn_k__BackingField = num;
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &chargeTurn_k__BackingField);
            v52 = v55;
          }
          skillInfo = (BattleSkillInfoData_o *)System_String__Format(v52, v51, 0);
          if ( !v50 )
            goto LABEL_91;
LABEL_89:
          UILabel__set_text(v50, (System_String_o *)skillInfo, 0);
          skillInfo = (BattleSkillInfoData_o *)*p_useCondItemCountLabel;
          if ( *p_useCondItemCountLabel )
          {
            UILabel__SetCondensedScale((UILabel_o *)skillInfo, 32, 0, 0);
            return;
          }
        }
LABEL_91:
        sub_2213CDC(skillInfo, v4);
      }
      if ( !v39 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
      if ( UnityEngine_Object__op_Inequality(v38, 0, 0) )
      {
        skillInfo = (BattleSkillInfoData_o *)UserItemEntity__getItemInfo(EntityDefinitely, 0);
        v40 = *p_useCondItemIcon;
        if ( skillInfo )
        {
          chargeTurn_k__BackingField = skillInfo->fields._chargeTurn_k__BackingField;
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &chargeTurn_k__BackingField);
          v43 = System_String__Format((System_String_o *)StringLiteral_24765/*"skill_item_{0}"*/, v41, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v42);
          AtlasManager__SetEventSprite(v40, v43, 0);
        }
        else
        {
          if ( !v40 )
            goto LABEL_91;
          UISprite__set_spriteName(v40, **(System_String_o ***)(qword_5984390 + 184), 0);
        }
      }
      if ( EntityDefinitely->fields.num >= 999 )
        num = 999;
      else
        num = EntityDefinitely->fields.num;
    }
    v58 = num;
    goto LABEL_76;
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
    sub_2213CDC(noActSprite, spriteName);
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

  if ( (byte_597427D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597427D = 1;
  }
  noActSprite = (UnityEngine_Object_o *)this->fields.noActSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    sub_2213CDC(gameObject, v4);
  }
}


bool BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0
  __int64 naturalAligment; // x10
  bool v5; // w21
  int32_t RankUpState; // w0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  UnityEngine_Object_o *rankupEffect; // x21
  const MethodInfo *v11; // x4
  struct CommonEffectComponent_o **p_rankupEffect; // x20
  UnityEngine_Object_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5974279 & 1) == 0 )
  {
    sub_2213A60(&BattleRankUpSkillInfoData_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19758/*"effect/data/effect/ef_skill_rankup01"*/);
    byte_5974279 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    naturalAligment = BattleRankUpSkillInfoData_TypeInfo->_2.naturalAligment;
    if ( skillInfo->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (BattleRankUpSkillInfoData_c *)skillInfo->klass->_2.typeHierarchy[naturalAligment - 1] == BattleRankUpSkillInfoData_TypeInfo )
    {
      RankUpState = BattleRankUpSkillInfoData__GetRankUpState((BattleRankUpSkillInfoData_o *)skillInfo, 0);
      if ( RankUpState )
      {
        v9 = RankUpState;
        if ( (unsigned int)(RankUpState - 3) >= 0xFFFFFFFE )
        {
          rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          if ( UnityEngine_Object__op_Equality(rankupEffect, 0, 0) )
          {
            v5 = BattleServantSkillIConComponent__PlayRankUpEffect(
                   this,
                   (System_String_o *)StringLiteral_19758/*"effect/data/effect/ef_skill_rankup01"*/,
                   this->fields.rankupRoot,
                   v9 != 1,
                   v11);
LABEL_20:
            BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v8);
            return v5;
          }
        }
      }
      else
      {
        p_rankupEffect = &this->fields.rankupEffect;
        v13 = (UnityEngine_Object_o *)this->fields.rankupEffect;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
        {
          if ( !*p_rankupEffect )
            sub_2213CDC(0, v8);
          v5 = 1;
          ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, const MethodInfo *))(*p_rankupEffect)->klass->vtable._8_Stop.methodPtr)(
            *p_rankupEffect,
            1,
            0,
            (*p_rankupEffect)->klass->vtable._8_Stop.method);
          *p_rankupEffect = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rankupEffect, 0, v14, v15, v16, v17, v18, v19);
          goto LABEL_20;
        }
      }
      v5 = 0;
      goto LABEL_20;
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
  if ( (byte_5974274 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974274 = 1;
  }
  skillInfo = v4->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_27;
  if ( skillInfo->fields.isPassive )
    return;
  turnNoLabelBase = (UnityEngine_Object_o *)v4->fields.turnNoLabelBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
  if ( UnityEngine_Object__op_Equality(turnNoLabelBase, 0, 0) )
  {
    turnNoLabel = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    if ( UnityEngine_Object__op_Inequality(turnNoLabel, 0, 0) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabel;
      if ( turn < 1 )
      {
        if ( !this )
          goto LABEL_27;
        goto LABEL_25;
      }
LABEL_20:
      if ( this )
      {
        this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v9 = v4->fields.turnNoLabel;
          this = (BattleServantSkillIConComponent_o *)System_Int32__ToString((int32_t)&v10, 0);
          if ( v9 )
          {
            UILabel__set_text(v9, (System_String_o *)this, 0);
            return;
          }
        }
      }
      goto LABEL_27;
    }
  }
  else
  {
    if ( turn < 1 )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabelBase;
      if ( !this )
        goto LABEL_27;
LABEL_25:
      this = (BattleServantSkillIConComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        return;
      }
LABEL_27:
      sub_2213CDC(this, *(_QWORD *)&turn);
    }
    v8 = (UnityEngine_Object_o *)v4->fields.turnNoLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      this = (BattleServantSkillIConComponent_o *)v4->fields.turnNoLabelBase;
      goto LABEL_20;
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
  __int64 v6; // x1
  _BOOL4 isTweenSealSkillSelect; // w8
  UISprite_o *noActSprite; // x19
  const MethodInfo *v9; // x2

  if ( (byte_5974271 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21204/*"icon_sealact_skill"*/);
    sub_2213A60(&StringLiteral_21202/*"icon_sealact_disable"*/);
    sub_2213A60(&StringLiteral_21203/*"icon_sealact_seal"*/);
    byte_5974271 = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_21203/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v5);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_21202/*"icon_sealact_disable"*/, 0);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_21204/*"icon_sealact_skill"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoActTurn, v9);
      this->fields.isNoSkillSprite = 1;
    }
  }
}


void BattleServantSkillIConComponent__setCollider(
        BattleServantSkillIConComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Component_object; // x21
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  UnityEngine_Transform_o *v11; // x19

  if ( (byte_597426B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597426B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_20;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_20:
    sub_2213CDC(gameObject, v6);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) && !flg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      v11 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( v11 )
      {
        UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
      sub_2213CDC(0, *(_QWORD *)&val);
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
  __int64 v6; // x1
  UISprite_o *skillIcon; // x19
  int32_t itemImageId; // w20
  __int64 v9; // x1
  int32_t v10; // w20

  v4 = this;
  if ( (byte_597426D & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_2213A60(&AtlasManager_TypeInfo);
    byte_597426D = 1;
  }
  if ( !skillInfo )
    sub_2213CDC(this, skillInfo);
  isItemIcon = BattleSkillInfoData__isItemIcon(skillInfo, 0);
  skillIcon = v4->fields.skillIcon;
  if ( isItemIcon )
  {
    itemImageId = skillInfo->fields.itemImageId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetItem(skillIcon, itemImageId, 0);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
            skillInfo,
            skillInfo->klass->vtable._5_get_skillId.method);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetSkillIcon(skillIcon, v10, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantSkillIConComponent__setTurnLabel(
        BattleServantSkillIConComponent_o *this,
        int32_t turn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *turnNoLabelBase; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  int v8; // w8
  UILabel_o *turnNoLabel; // x19
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597426E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    byte_597426E = 1;
  }
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&turn);
  if ( UnityEngine_Object__op_Inequality(turnNoLabelBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.turnNoLabelBase;
    if ( turn < 0 )
    {
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          return;
        }
      }
    }
    else if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v8 = turn + 1 >= 0 ? turn + 1 : turn + 2;
        turnNoLabel = this->fields.turnNoLabel;
        v11 = BattleUtility__FloorToInt((float)(v8 >> 1), 0);
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
        gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_26484/*"{0}"*/, v10, 0);
        if ( turnNoLabel )
        {
          UILabel__set_text(turnNoLabel, (System_String_o *)gameObject, 0);
          return;
        }
      }
    }
    sub_2213CDC(gameObject, v6);
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
  _BOOL4 isTweenSealSkillSelect; // w9
  bool result; // w0
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5974278 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19766/*"effect/ef_command_flash01"*/);
    byte_5974278 = 1;
  }
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo || !skillInfo->fields.isCharge )
    return 0;
  isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
  result = 0;
  skillInfo->fields.isCharge = 0;
  if ( !isTweenSealSkillSelect )
  {
    root = this->fields.root;
    if ( !root )
      sub_2213CDC(0, method);
    transform = UnityEngine_GameObject__get_transform(root, 0);
    BaseMonoBehaviour__createObject_48153028(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_19766/*"effect/ef_command_flash01"*/,
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UISprite_o *noActSprite; // x22
  UnityEngine_GameObject_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x22
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  int32_t v75; // w1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  int32_t v82; // w1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int32_t v89; // w1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  int32_t v96; // w1
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  int32_t v103; // w1
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  int32_t v110; // w1
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  __int64 v117; // x19
  __int64 v118; // x1
  System_Collections_Hashtable_o *v119; // x0
  __int64 v120; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v122; // [xsp+18h] [xbp-38h] BYREF
  int v123; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_597426F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_22434/*"loopType"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_23870/*"pingPong"*/);
    sub_2213A60(&StringLiteral_19600/*"easeOutCirc"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_25787/*"updateSealActSpriteValues"*/);
    sub_2213A60(&StringLiteral_18998/*"completeSealActSpriteValues"*/);
    sub_2213A60(&StringLiteral_19608/*"easeType"*/);
    sub_2213A60(&StringLiteral_21202/*"icon_sealact_disable"*/);
    sub_2213A60(&StringLiteral_21203/*"icon_sealact_seal"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597426F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v8);
  if ( iTween__Count_75401132(gameObject, 0) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_21203/*"icon_sealact_seal"*/, v10);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_21202/*"icon_sealact_disable"*/, 0);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v12);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v15 = sub_2213B20(object___TypeInfo, 14);
    if ( !v15 )
      sub_2213CDC(0, v16);
    v23 = v15;
    v24 = StringLiteral_20622/*"from"*/;
    if ( !StringLiteral_20622/*"from"*/ || (v24 = sub_2213BB4(StringLiteral_20622/*"from"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v23 + 24) )
        goto LABEL_57;
      v26 = StringLiteral_20622/*"from"*/;
      *(_QWORD *)(v23 + 32) = StringLiteral_20622/*"from"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), v26, v17, v18, v19, v20, v21, v22);
      v123 = 0;
      v24 = j_il2cpp_value_box_0(qword_5984378, &v123);
      v33 = v24;
      if ( !v24 || (v24 = sub_2213BB4(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v23 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_57;
        *(_QWORD *)(v23 + 40) = v33;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 40), v33, v27, v28, v29, v30, v31, v32);
        v24 = StringLiteral_25406/*"to"*/;
        if ( !StringLiteral_25406/*"to"*/ || (v24 = sub_2213BB4(StringLiteral_25406/*"to"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v23 + 24) <= 2u )
            goto LABEL_57;
          v40 = StringLiteral_25406/*"to"*/;
          *(_QWORD *)(v23 + 48) = StringLiteral_25406/*"to"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 48), v40, v34, v35, v36, v37, v38, v39);
          v122 = 1065353216;
          v24 = j_il2cpp_value_box_0(qword_5984378, &v122);
          v47 = v24;
          if ( !v24 || (v24 = sub_2213BB4(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v23 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_57;
            *(_QWORD *)(v23 + 56) = v47;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 56), v47, v41, v42, v43, v44, v45, v46);
            v24 = StringLiteral_23573/*"onupdate"*/;
            if ( !StringLiteral_23573/*"onupdate"*/
              || (v24 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v23 + 24) <= 4u )
                goto LABEL_57;
              v54 = StringLiteral_23573/*"onupdate"*/;
              *(_QWORD *)(v23 + 64) = StringLiteral_23573/*"onupdate"*/;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 64), v54, v48, v49, v50, v51, v52, v53);
              v24 = StringLiteral_25787/*"updateSealActSpriteValues"*/;
              if ( !StringLiteral_25787/*"updateSealActSpriteValues"*/
                || (v24 = sub_2213BB4(StringLiteral_25787/*"updateSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v23 + 24) <= 5u )
                  goto LABEL_57;
                v61 = StringLiteral_25787/*"updateSealActSpriteValues"*/;
                *(_QWORD *)(v23 + 72) = StringLiteral_25787/*"updateSealActSpriteValues"*/;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 72), v61, v55, v56, v57, v58, v59, v60);
                v24 = StringLiteral_23565/*"oncomplete"*/;
                if ( !StringLiteral_23565/*"oncomplete"*/
                  || (v24 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v23 + 24) <= 6u )
                    goto LABEL_57;
                  v68 = StringLiteral_23565/*"oncomplete"*/;
                  *(_QWORD *)(v23 + 80) = StringLiteral_23565/*"oncomplete"*/;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 80), v68, v62, v63, v64, v65, v66, v67);
                  v24 = StringLiteral_18998/*"completeSealActSpriteValues"*/;
                  if ( !StringLiteral_18998/*"completeSealActSpriteValues"*/
                    || (v24 = sub_2213BB4(StringLiteral_18998/*"completeSealActSpriteValues"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                  {
                    if ( (*(_DWORD *)(v23 + 24) & 0xFFFFFFF8) == 0 )
                      goto LABEL_57;
                    v75 = StringLiteral_18998/*"completeSealActSpriteValues"*/;
                    *(_QWORD *)(v23 + 88) = StringLiteral_18998/*"completeSealActSpriteValues"*/;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 88), v75, v69, v70, v71, v72, v73, v74);
                    v24 = StringLiteral_22434/*"loopType"*/;
                    if ( !StringLiteral_22434/*"loopType"*/
                      || (v24 = sub_2213BB4(StringLiteral_22434/*"loopType"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v23 + 24) <= 8u )
                        goto LABEL_57;
                      v82 = StringLiteral_22434/*"loopType"*/;
                      *(_QWORD *)(v23 + 96) = StringLiteral_22434/*"loopType"*/;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 96), v82, v76, v77, v78, v79, v80, v81);
                      v24 = StringLiteral_23870/*"pingPong"*/;
                      if ( !StringLiteral_23870/*"pingPong"*/
                        || (v24 = sub_2213BB4(StringLiteral_23870/*"pingPong"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v23 + 24) <= 9u )
                          goto LABEL_57;
                        v89 = StringLiteral_23870/*"pingPong"*/;
                        *(_QWORD *)(v23 + 104) = StringLiteral_23870/*"pingPong"*/;
                        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 104), v89, v83, v84, v85, v86, v87, v88);
                        v24 = StringLiteral_19608/*"easeType"*/;
                        if ( !StringLiteral_19608/*"easeType"*/
                          || (v24 = sub_2213BB4(StringLiteral_19608/*"easeType"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v23 + 24) <= 0xAu )
                            goto LABEL_57;
                          v96 = StringLiteral_19608/*"easeType"*/;
                          *(_QWORD *)(v23 + 112) = StringLiteral_19608/*"easeType"*/;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v23 + 112),
                            v96,
                            v90,
                            v91,
                            v92,
                            v93,
                            v94,
                            v95);
                          v24 = StringLiteral_19600/*"easeOutCirc"*/;
                          if ( !StringLiteral_19600/*"easeOutCirc"*/
                            || (v24 = sub_2213BB4(StringLiteral_19600/*"easeOutCirc"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v23 + 24) <= 0xBu )
                              goto LABEL_57;
                            v103 = StringLiteral_19600/*"easeOutCirc"*/;
                            *(_QWORD *)(v23 + 120) = StringLiteral_19600/*"easeOutCirc"*/;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v23 + 120),
                              v103,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102);
                            v24 = StringLiteral_25366/*"time"*/;
                            if ( !StringLiteral_25366/*"time"*/
                              || (v24 = sub_2213BB4(StringLiteral_25366/*"time"*/, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                            {
                              if ( *(_DWORD *)(v23 + 24) <= 0xCu )
                                goto LABEL_57;
                              v110 = StringLiteral_25366/*"time"*/;
                              *(_QWORD *)(v23 + 128) = StringLiteral_25366/*"time"*/;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v23 + 128),
                                v110,
                                v104,
                                v105,
                                v106,
                                v107,
                                v108,
                                v109);
                              changeTimeSealSprite = this->fields.changeTimeSealSprite;
                              v24 = j_il2cpp_value_box_0(qword_5984378, &changeTimeSealSprite);
                              v117 = v24;
                              if ( !v24 || (v24 = sub_2213BB4(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0 )
                              {
                                if ( *(_DWORD *)(v23 + 24) > 0xDu )
                                {
                                  *(_QWORD *)(v23 + 136) = v117;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)(v23 + 136),
                                    v117,
                                    v111,
                                    v112,
                                    v113,
                                    v114,
                                    v115,
                                    v116);
                                  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v118);
                                  v119 = iTween__Hash((System_Object_array *)v23, 0);
                                  iTween__ValueTo(v14, v119, 0);
                                  return;
                                }
LABEL_57:
                                sub_2213CE4(v24);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v120 = sub_2213D00(v24, v25);
    sub_2213BA0(v120, 0);
  }
}


void BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1

  if ( (byte_5974272 & 1) == 0 )
  {
    sub_2213A60(&iTween_TypeInfo);
    byte_5974272 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v3);
  iTween__Stop_75402912(gameObject, 0);
  BattleServantSkillIConComponent__updateSealActSpriteValues(this, 1.0, v5);
}


void BattleServantSkillIConComponent__updateFlashSkill(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashIcon; // x20
  __int64 v4; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_5974273 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974273 = 1;
  }
  flashIcon = (UnityEngine_Object_o *)this->fields.flashIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
          sub_2213CDC(skillInfo, v4);
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
  __int64 v9; // x1
  UnityEngine_Object_o *turnNoLabelBase; // x20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974270 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974270 = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !noActSprite )
    goto LABEL_14;
  v11.fields.a = value;
  v6 = *((float *)noActSprite + 37);
  v7 = *((float *)noActSprite + 38);
  v8 = *((float *)noActSprite + 39);
  v11.fields.r = v6;
  v11.fields.g = v7;
  v11.fields.b = v8;
  UIWidget__set_color((UIWidget_o *)noActSprite, v11, 0);
  turnNoLabelBase = (UnityEngine_Object_o *)this->fields.turnNoLabelBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( noActSprite )
        {
          v12.fields.r = v6;
          v12.fields.a = value;
          v12.fields.g = v7;
          v12.fields.b = v8;
          UIWidget__set_color((UIWidget_o *)noActSprite, v12, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(noActSprite, method);
  }
}