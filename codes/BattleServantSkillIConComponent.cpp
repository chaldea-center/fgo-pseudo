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

  if ( (byte_4BDF75E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF75E = 1;
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       target,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleServantParamComponent___);
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
    sub_1C22094(target, isLong);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         target,
         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BDF761 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF761 = 1;
  }
  p_rankupEffect = (UnityEngine_Component_o **)&this->fields.rankupEffect;
  rankupEffect = (UnityEngine_Object_o *)this->fields.rankupEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rankupEffect, 0LL, 0LL) )
  {
    if ( !*p_rankupEffect )
      sub_1C22094(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_rankupEffect, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    this->fields.rankupEffect = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rankupEffect, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.rankupSprite = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rankupSprite, 0LL, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BDF763 & 1) == 0 )
  {
    sub_1C21E38(&BattleRankUpSkillInfoData_TypeInfo);
    byte_4BDF763 = 1;
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
    sub_1C22094(0LL, method);
  return BattleRankUpSkillInfoData__GetRankUpState(v6, 0LL);
}


void __fastcall BattleServantSkillIConComponent__OnClickIcon(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BDF75D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF75D = 1;
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

  if ( (byte_4BDF75C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF75C = 1;
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
  UnityEngine_Object_o *Object_39485728; // x21
  Il2CppObject *Component_object; // x0
  BattleServantSkillIConComponent_o **p_rankupEffect; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Object_o *rankupEffect; // x22
  Il2CppObject *ComponentInChildren_object__49965836; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v8 = this;
  if ( (byte_4BDF762 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    this = (BattleServantSkillIConComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF762 = 1;
  }
  if ( !root )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(root, 0LL);
  Object_39485728 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject_39485728(
                                              (BaseMonoBehaviour_o *)v8,
                                              resPath,
                                              transform,
                                              0LL,
                                              0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantSkillIConComponent_o *)UnityEngine_Object__op_Inequality(Object_39485728, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_39485728 )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_39485728,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    v8->fields.rankupEffect = (struct CommonEffectComponent_o *)Component_object;
    p_rankupEffect = (BattleServantSkillIConComponent_o **)&v8->fields.rankupEffect;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v8->fields.rankupEffect,
      (int64_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
          ComponentInChildren_object__49965836 = UnityEngine_Component__GetComponentInChildren_object__49965836(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
          v8->fields.rankupSprite = (struct UISprite_o *)ComponentInChildren_object__49965836;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v8->fields.rankupSprite,
            (int64_t)ComponentInChildren_object__49965836,
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
      sub_1C22094(this, resPath);
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
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *turnNoLabelBase; // x25
  const MethodInfo *v18; // x2
  struct UISprite_o *skillIcon; // x8
  float v20; // s0
  float v21; // s3
  float v22; // s1
  float v23; // s2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  int32_t ChargeTurn; // w0
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *noActSprite; // x24
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *defaultNoActAtlas; // x25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct UISprite_o *v37; // x8
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  UISprite_o *v44; // x22
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1

  v10 = sealSkillTurn;
  if ( (byte_4BDF753 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20530/*"icon_sealact_skill"*/);
    sub_1C21E38(&StringLiteral_20528/*"icon_sealact_disable"*/);
    sub_1C21E38(&StringLiteral_20529/*"icon_sealact_seal"*/);
    byte_4BDF753 = 1;
  }
  this->fields.skillInfo = skillInfo;
  sub_1C21DDC(
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
  BattleServantSkillIConComponent__setSkillIcon(this, skillInfo, v16);
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
    BattleServantSkillIConComponent__setCollider(this, 0, v18);
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
        v20 = 1.0;
        v21 = 1.0;
      }
      else
      {
        if ( !skillIcon )
          goto LABEL_49;
        v21 = 1.0;
        v20 = 0.5;
      }
      v22 = v20;
      v23 = v20;
      UIWidget__set_color((UIWidget_o *)this->fields.skillIcon, *(UnityEngine_Color_o *)&v20, 0LL);
      BattleServantSkillIConComponent__setCollider(this, 1, v24);
      BattleServantSkillIConComponent__updateFlashSkill(this, v25);
      ChargeTurn = BattleSkillInfoData__getChargeTurn(skillInfo, 0LL);
      BattleServantSkillIConComponent__changeTurnCount(this, ChargeTurn, v27);
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
      v37 = this->fields.noActSprite;
      if ( !v37 )
        goto LABEL_49;
      mAtlas = v37->fields.mAtlas;
      this->fields.defaultNoActAtlas = mAtlas;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.defaultNoActAtlas,
        (int64_t)mAtlas,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
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
          BattleServantSkillIConComponent__stopSealActSprite(this, v45);
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
            goto LABEL_45;
          }
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20530/*"icon_sealact_skill"*/,
            v40);
          BattleServantSkillIConComponent__stopSealActSprite(this, v46);
          v10 = noActTurn;
        }
        else
        {
          BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(
            this,
            (System_String_o *)StringLiteral_20529/*"icon_sealact_seal"*/,
            v40);
          BattleServantSkillIConComponent__stopSealActSprite(this, v42);
          if ( IsSealSkillSelect )
          {
            v44 = this->fields.noActSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetEventSprite(v44, (System_String_o *)StringLiteral_20528/*"icon_sealact_disable"*/, 0LL);
            if ( isActSkill )
              goto LABEL_46;
LABEL_45:
            BattleServantSkillIConComponent__setTurnLabel(this, v10, v43);
            goto LABEL_46;
          }
        }
        if ( isActSkill )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
LABEL_49:
    sub_1C22094(root, v14);
  }
LABEL_46:
  BattleServantSkillIConComponent__UpdateRankUpEffectState(this, v29);
  BattleServantSkillIConComponent__SetUseCond(this, v47);
}


void __fastcall BattleServantSkillIConComponent__SetUseCond(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *useCondRoot; // x20
  __int64 v4; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  UnityEngine_Object_o *useCondItemIcon; // x20
  struct UISprite_o **p_useCondItemIcon; // x21
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UILabel_o **p_useCondItemCountLabel; // x20
  UnityEngine_Object_o *useCondItemCountLabel; // x22
  Il2CppObject *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
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
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  UISprite_o *v39; // x21
  Il2CppObject *v40; // x0
  System_String_o *v41; // x23
  ItemMaster_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  UISprite_o *v46; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x22
  UnityEngine_Object_o *v49; // x21
  UILabel_o *v50; // x19
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x1
  System_String_o *v55; // x0
  bool IsOpenCond; // w0
  System_String_o *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int32_t chargeTurn; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int v63; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4BDF765 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_1045/*"-{0}"*/);
    sub_1C21E38(&StringLiteral_2957/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/);
    sub_1C21E38(&StringLiteral_23777/*"skill_item_{0}"*/);
    byte_4BDF765 = 1;
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
  v63 = 0;
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
                                   (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    *p_useCondItemIcon = (struct UISprite_o *)ComponentInChildren_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.useCondItemIcon,
      (int64_t)ComponentInChildren_object,
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
  if ( UnityEngine_Object__op_Equality(useCondItemCountLabel, 0LL, 0LL) )
  {
    skillInfo = (BattleSkillInfoData_o *)this->fields.useCondRoot;
    if ( !skillInfo )
      goto LABEL_86;
    v17 = UnityEngine_GameObject__GetComponentInChildren_object_(
            (UnityEngine_GameObject_o *)skillInfo,
            (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
    *p_useCondItemCountLabel = (struct UILabel_o *)v17;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.useCondItemCountLabel,
      (int64_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)skillInfo,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillInfo;
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !v24 )
    goto LABEL_86;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v24,
          &entity,
          (int32_t)skillInfo,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_38;
  v25 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillInfo = (BattleSkillInfoData_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  if ( ((unsigned __int8)skillInfo & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_86;
    v26 = *p_useCondItemIcon;
    monitor = (int32_t)entity[2].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)AtlasManager__SetItem(v26, monitor, 0LL);
  }
  if ( !entity )
LABEL_86:
    sub_1C22094(skillInfo, v4);
  if ( LODWORD(entity[3].klass) == 35 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !entity || !skillInfo )
      goto LABEL_86;
    v28 = BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)skillInfo, (int32_t)entity[1].klass, 0LL);
    if ( v28 >= 999 )
      num = 999;
    else
      num = v28;
    goto LABEL_67;
  }
LABEL_38:
  skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillInfo )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillInfo,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    skillInfo = (BattleSkillInfoData_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.skillInfo )
    goto LABEL_86;
  v31 = *(_QWORD *)(*(_QWORD *)&skillInfo[1].fields.type + 64LL);
  skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
  if ( !MasterData_object )
    goto LABEL_86;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)MasterData_object,
                       v31,
                       (int32_t)skillInfo,
                       0LL);
  v33 = (UnityEngine_Object_o *)*p_useCondItemIcon;
  v34 = EntityDefinitely;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
  if ( v34 )
  {
    if ( v35 )
    {
      skillInfo = (BattleSkillInfoData_o *)UserItemEntity__getItemInfo(v34, 0LL);
      v39 = *p_useCondItemIcon;
      if ( skillInfo )
      {
        chargeTurn = skillInfo->fields.chargeTurn;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v36, v37, v38);
        v41 = System_String__Format((System_String_o *)StringLiteral_23777/*"skill_item_{0}"*/, v40, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(v39, v41, 0LL);
      }
      else
      {
        if ( !v39 )
          goto LABEL_86;
        UISprite__set_spriteName(v39, string_TypeInfo->static_fields->Empty, 0LL);
      }
    }
    num = v34->fields.num;
    if ( num >= 999 )
      num = 999;
LABEL_67:
    v63 = num;
    goto LABEL_68;
  }
  if ( v35 )
  {
    skillInfo = (BattleSkillInfoData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillInfo )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)skillInfo,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !this->fields.skillInfo )
      goto LABEL_86;
    v42 = (ItemMaster_o *)skillInfo;
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetCondItemId(this->fields.skillInfo, 0LL);
    if ( !v42 )
      goto LABEL_86;
    skillInfo = (BattleSkillInfoData_o *)ItemMaster__GetItemData(v42, (int32_t)skillInfo, -1, 0LL);
    v46 = *p_useCondItemIcon;
    if ( skillInfo )
    {
      chargeTurn = skillInfo->fields.chargeTurn;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v43, v44, v45);
      v48 = System_String__Format((System_String_o *)StringLiteral_23777/*"skill_item_{0}"*/, v47, 0LL);
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
LABEL_68:
  v49 = (UnityEngine_Object_o *)*p_useCondItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
    skillInfo = this->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_86;
    if ( skillInfo->fields.battleItemDispType )
    {
      v50 = *p_useCondItemCountLabel;
      chargeTurn = BattleSkillInfoData__GetCondItemNumber(skillInfo, 0LL);
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v51, v52, v53);
      v55 = (System_String_o *)StringLiteral_1045/*"-{0}"*/;
    }
    else
    {
      IsOpenCond = BattleSkillInfoData__IsOpenCond(skillInfo, 0LL);
      v50 = *p_useCondItemCountLabel;
      if ( IsOpenCond )
      {
        skillInfo = (BattleSkillInfoData_o *)System_Int32__ToString((int32_t)&v63, 0LL);
        if ( !v50 )
          goto LABEL_86;
        goto LABEL_81;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BATTLE_MASTER_SKILL_ADD_NOT_OPEN_COND_COLOR"*/, 0LL);
      chargeTurn = v63;
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v58, v59, v60);
      v55 = v57;
    }
    skillInfo = (BattleSkillInfoData_o *)System_String__Format(v55, v54, 0LL);
    if ( !v50 )
      goto LABEL_86;
LABEL_81:
    UILabel__set_text(v50, (System_String_o *)skillInfo, 0LL);
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
    sub_1C22094(noActSprite, spriteName);
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

  if ( (byte_4BDF764 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF764 = 1;
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
    sub_1C22094(gameObject, v4);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BDF760 & 1) == 0 )
  {
    sub_1C21E38(&BattleRankUpSkillInfoData_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19207/*"effect/data/effect/ef_skill_rankup01"*/);
    byte_4BDF760 = 1;
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
                       (System_String_o *)StringLiteral_19207/*"effect/data/effect/ef_skill_rankup01"*/,
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
            sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rankupEffect, 0LL, v15, v16, v17, v18, v19, v20);
            goto LABEL_24;
          }
        }
        sub_1C22094(v6, method);
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
  if ( (byte_4BDF75B & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF75B = 1;
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
      sub_1C22094(this, *(_QWORD *)&turn);
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

  if ( (byte_4BDF758 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&StringLiteral_20530/*"icon_sealact_skill"*/);
    sub_1C21E38(&StringLiteral_20528/*"icon_sealact_disable"*/);
    sub_1C21E38(&StringLiteral_20529/*"icon_sealact_seal"*/);
    byte_4BDF758 = 1;
  }
  isTweenReverse = this->fields.isTweenReverse;
  this->fields.isTweenReverse = !isTweenReverse;
  if ( isTweenReverse )
  {
    if ( this->fields.isNoSkillSprite )
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20529/*"icon_sealact_seal"*/, v2);
      BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v5);
      isTweenSealSkillSelect = this->fields.isTweenSealSkillSelect;
      this->fields.isNoSkillSprite = 0;
      if ( isTweenSealSkillSelect )
      {
        noActSprite = this->fields.noActSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20528/*"icon_sealact_disable"*/, 0LL);
      }
    }
    else
    {
      BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20530/*"icon_sealact_skill"*/, v2);
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

  if ( (byte_4BDF752 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF752 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    sub_1C22094(gameObject, v6);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) && !flg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      v9 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4BD6BB6 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
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
      sub_1C22094(0LL, val);
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
  if ( (byte_4BDF754 & 1) == 0 )
  {
    this = (BattleServantSkillIConComponent_o *)sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BDF754 = 1;
  }
  if ( !skillInfo )
    sub_1C22094(this, skillInfo);
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

  if ( (byte_4BDF755 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    byte_4BDF755 = 1;
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
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_25427/*"{0}"*/, v13, 0LL);
    if ( !turnNoLabel )
LABEL_16:
      sub_1C22094(gameObject, v6);
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

  if ( (byte_4BDF75F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19215/*"effect/ef_command_flash01"*/);
    byte_4BDF75F = 1;
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
      sub_1C22094(0LL, method);
    transform = UnityEngine_GameObject__get_transform(root, 0LL);
    BaseMonoBehaviour__createObject_39485728(
      (BaseMonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_19215/*"effect/ef_command_flash01"*/,
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Object_array *v21; // x21
  __int64 v22; // x0
  int64_t v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x19
  System_Collections_Hashtable_o *v114; // x0
  __int64 v115; // x0
  float changeTimeSealSprite; // [xsp+Ch] [xbp-44h] BYREF
  int v117; // [xsp+18h] [xbp-38h] BYREF
  int v118; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDF756 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_21593/*"loopType"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_22948/*"pingPong"*/);
    sub_1C21E38(&StringLiteral_19069/*"easeOutCirc"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_24747/*"updateSealActSpriteValues"*/);
    sub_1C21E38(&StringLiteral_18492/*"completeSealActSpriteValues"*/);
    sub_1C21E38(&StringLiteral_19077/*"easeType"*/);
    sub_1C21E38(&StringLiteral_20528/*"icon_sealact_disable"*/);
    sub_1C21E38(&StringLiteral_20529/*"icon_sealact_seal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF756 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  if ( iTween__Count_61761604(gameObject, 0LL) <= 0 )
  {
    BattleServantSkillIConComponent__UpdateNoActSpriteByDefaultAtlas(this, (System_String_o *)StringLiteral_20529/*"icon_sealact_seal"*/, v9);
    if ( this->fields.isTweenSealSkillSelect )
    {
      noActSprite = this->fields.noActSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(noActSprite, (System_String_o *)StringLiteral_20528/*"icon_sealact_disable"*/, 0LL);
    }
    BattleServantSkillIConComponent__setTurnLabel(this, this->fields.tweenNoSkillTurn, v10);
    *(_WORD *)&this->fields.isNoSkillSprite = 0;
    this->fields.tweenNoActTurn = noActTurn;
    this->fields.tweenNoSkillTurn = sealSkillTurn;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_1C21EE0(object___TypeInfo, 14LL);
    if ( !v13 )
      sub_1C22094(0LL, v14);
    v21 = (System_Object_array *)v13;
    v22 = StringLiteral_19990/*"from"*/;
    if ( StringLiteral_19990/*"from"*/ )
    {
      v22 = sub_1C21F74(StringLiteral_19990/*"from"*/, v21->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_80;
      v23 = StringLiteral_19990/*"from"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v21->max_length )
      goto LABEL_79;
    v21->m_Items[0] = (Il2CppObject *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
    v118 = 0;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &v118, v24, v25, v26);
    v33 = v22;
    if ( !v22 || (v22 = sub_1C21F74(v22, v21->obj.klass->_1.element_class)) != 0 )
    {
      if ( v21->max_length <= 1 )
        goto LABEL_79;
      v21->m_Items[1] = (Il2CppObject *)v33;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
      v22 = StringLiteral_24401/*"to"*/;
      if ( StringLiteral_24401/*"to"*/ )
      {
        v22 = sub_1C21F74(StringLiteral_24401/*"to"*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_80;
        v23 = StringLiteral_24401/*"to"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_79;
      v21->m_Items[2] = (Il2CppObject *)v23;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[2], v23, v34, v35, v36, v37, v38, v39);
      v117 = 1065353216;
      v22 = j_il2cpp_value_box_0(float_TypeInfo, &v117, v40, v41, v42);
      v49 = v22;
      if ( !v22 || (v22 = sub_1C21F74(v22, v21->obj.klass->_1.element_class)) != 0 )
      {
        if ( v21->max_length <= 3 )
          goto LABEL_79;
        v21->m_Items[3] = (Il2CppObject *)v49;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
        v22 = StringLiteral_22688/*"onupdate"*/;
        if ( StringLiteral_22688/*"onupdate"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_22688/*"onupdate"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 4 )
          goto LABEL_79;
        v21->m_Items[4] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[4], v23, v50, v51, v52, v53, v54, v55);
        v22 = StringLiteral_24747/*"updateSealActSpriteValues"*/;
        if ( StringLiteral_24747/*"updateSealActSpriteValues"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_24747/*"updateSealActSpriteValues"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_24747/*"updateSealActSpriteValues"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 5 )
          goto LABEL_79;
        v21->m_Items[5] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[5], v23, v56, v57, v58, v59, v60, v61);
        v22 = StringLiteral_22680/*"oncomplete"*/;
        if ( StringLiteral_22680/*"oncomplete"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_22680/*"oncomplete"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 6 )
          goto LABEL_79;
        v21->m_Items[6] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[6], v23, v62, v63, v64, v65, v66, v67);
        v22 = StringLiteral_18492/*"completeSealActSpriteValues"*/;
        if ( StringLiteral_18492/*"completeSealActSpriteValues"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_18492/*"completeSealActSpriteValues"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_18492/*"completeSealActSpriteValues"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 7 )
          goto LABEL_79;
        v21->m_Items[7] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[7], v23, v68, v69, v70, v71, v72, v73);
        v22 = StringLiteral_21593/*"loopType"*/;
        if ( StringLiteral_21593/*"loopType"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_21593/*"loopType"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_21593/*"loopType"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 8 )
          goto LABEL_79;
        v21->m_Items[8] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[8], v23, v74, v75, v76, v77, v78, v79);
        v22 = StringLiteral_22948/*"pingPong"*/;
        if ( StringLiteral_22948/*"pingPong"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_22948/*"pingPong"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_22948/*"pingPong"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 9 )
          goto LABEL_79;
        v21->m_Items[9] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[9], v23, v80, v81, v82, v83, v84, v85);
        v22 = StringLiteral_19077/*"easeType"*/;
        if ( StringLiteral_19077/*"easeType"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_19077/*"easeType"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_19077/*"easeType"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 0xA )
          goto LABEL_79;
        v21->m_Items[10] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[10], v23, v86, v87, v88, v89, v90, v91);
        v22 = StringLiteral_19069/*"easeOutCirc"*/;
        if ( StringLiteral_19069/*"easeOutCirc"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_19069/*"easeOutCirc"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_19069/*"easeOutCirc"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 0xB )
          goto LABEL_79;
        v21->m_Items[11] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[11], v23, v92, v93, v94, v95, v96, v97);
        v22 = StringLiteral_24360/*"time"*/;
        if ( StringLiteral_24360/*"time"*/ )
        {
          v22 = sub_1C21F74(StringLiteral_24360/*"time"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_80;
          v23 = StringLiteral_24360/*"time"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 0xC )
          goto LABEL_79;
        v21->m_Items[12] = (Il2CppObject *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[12], v23, v98, v99, v100, v101, v102, v103);
        changeTimeSealSprite = this->fields.changeTimeSealSprite;
        v22 = j_il2cpp_value_box_0(float_TypeInfo, &changeTimeSealSprite, v104, v105, v106);
        v113 = v22;
        if ( !v22 || (v22 = sub_1C21F74(v22, v21->obj.klass->_1.element_class)) != 0 )
        {
          if ( v21->max_length > 0xD )
          {
            v21->m_Items[13] = (Il2CppObject *)v113;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v21->m_Items[13], v113, v107, v108, v109, v110, v111, v112);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v114 = iTween__Hash(v21, 0LL);
            iTween__ValueTo(v12, v114, 0LL);
            return;
          }
LABEL_79:
          sub_1C2209C(v22, v23);
        }
      }
    }
LABEL_80:
    v115 = sub_1C220B8(v22);
    sub_1C21F60(v115, 0LL);
  }
}


void __fastcall BattleServantSkillIConComponent__stopSealActSprite(
        BattleServantSkillIConComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4BDF759 & 1) == 0 )
  {
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF759 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61763404(gameObject, 0LL);
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

  if ( (byte_4BDF75A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF75A = 1;
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
        sub_1C22094(skillInfo, v4);
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

  if ( (byte_4BDF757 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF757 = 1;
  }
  noActSprite = this->fields.noActSprite;
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noActSprite, 0LL);
  if ( !noActSprite )
    goto LABEL_14;
  noActSprite = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)noActSprite,
                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1C22094(noActSprite, method);
  }
}