void __fastcall EquipGraphServantItemDraw___ctor(EquipGraphServantItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphServantItemDraw__SetInput(
        EquipGraphServantItemDraw_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0

  if ( (byte_4216DF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_4216DF7 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_B0D97C(decideButton);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
    decideButton,
    0LL,
    1LL,
    decideButton->klass[1]._1.interfaceOffsets);
}


void __fastcall EquipGraphServantItemDraw__SetItem(
        EquipGraphServantItemDraw_o *this,
        EquipGraphServantItem_o *item,
        const MethodInfo *method)
{
  EquipGraphServantItemDraw_o **v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  UnityEngine_Object_o *v9; // x21
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v13; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  SkillInfo_o *v15; // x8
  UILabel_o *v16; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v18; // x8
  UISprite_o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w22
  UnityEngine_Object_o *v23; // x21
  struct ServantEntity_o *v24; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v26; // x21
  bool v27; // w1
  const MethodInfo *v28; // x1
  EquipGraphServantItemDraw_o *v29; // x21
  UnityEngine_Object_o *v30; // x21
  struct ServantEntity_o *v31; // x8
  struct ServantEntity_o *v32; // x9
  UnityEngine_Object_o *v33; // x21
  struct ServantEntity_o *v34; // x8
  int32_t v35; // w2
  UnityEngine_Object_o *v36; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *v40; // x8
  int32_t v41; // w4
  UnityEngine_Object_o *v42; // x21
  struct UserServantEntity_o *v43; // x8
  int32_t v44; // w2
  UnityEngine_Object_o *v45; // x21
  struct UserServantEntity_o *v46; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v49; // x8
  int32_t v50; // w4
  UnityEngine_Object_o *v51; // x21
  struct UserServantEntity_o *v52; // x8
  int32_t v53; // w2
  UnityEngine_Object_o *v54; // x21
  __int64 v55; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v4 = (EquipGraphServantItemDraw_o **)this;
  if ( (byte_4216DF6 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (EquipGraphServantItemDraw_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4216DF6 = 1;
  }
  skillInfoList = 0LL;
  if ( !item )
    goto LABEL_129;
  baseItem = item->fields.baseItem;
  if ( !baseItem )
    goto LABEL_129;
  this = v4[3];
  if ( !this )
    goto LABEL_129;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    item->fields.userServantEntity,
    0LL,
    baseItem->fields.questRestrictionInfo,
    item->fields.iconLabelInfo,
    0LL,
    0LL);
  v9 = (UnityEngine_Object_o *)v4[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    servantEntity = item->fields.servantEntity;
    this = v4[4];
    if ( servantEntity )
      cost = servantEntity->fields.cost;
    else
      cost = 0;
    equipServantEntity = item->fields.equipServantEntity;
    if ( equipServantEntity )
    {
      v13 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v13 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 7, cost, 0, v13, 0LL, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = item->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_129;
    if ( !skillInfoList->max_length )
    {
      v55 = sub_B0D9A8(this);
      sub_B0D948(v55, 0LL);
    }
    v15 = skillInfoList->m_Items[0];
    if ( !v15 )
      goto LABEL_129;
    this = v4[8];
    if ( !this )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)this, v15->fields.title, 0LL);
    v16 = (UILabel_o *)v4[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v16, MargeExplanation, 22, 0, 0, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v18 = item->fields.equipUserSvtEntity;
    if ( !v18 )
      goto LABEL_129;
    v19 = (UISprite_o *)v4[6];
    v21 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v57.fields.currentCryptoKey = v21;
    *(_QWORD *)&v57.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v57, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v19, v22, 0LL);
    v23 = (UnityEngine_Object_o *)v4[7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v24 = item->fields.equipServantEntity;
      if ( v24 )
        limitMax = v24->fields.limitMax;
      else
        limitMax = 0;
      this = v4[7];
      if ( !this )
        goto LABEL_129;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v29 = this;
      if ( limitMax < 1 )
      {
        v27 = 0;
        if ( !this )
          goto LABEL_129;
      }
      else
      {
        this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(item, v28);
        v27 = (int)this >= limitMax;
        if ( !v29 )
          goto LABEL_129;
      }
      this = v29;
      goto LABEL_60;
    }
  }
  else
  {
    this = v4[8];
    if ( !this )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[9];
    if ( !this )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v26 = (UnityEngine_Object_o *)v4[7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    {
      this = v4[7];
      if ( !this )
        goto LABEL_129;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_129;
      v27 = 0;
LABEL_60:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v27, 0LL);
    }
  }
  v30 = (UnityEngine_Object_o *)v4[10];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    v31 = item->fields.servantEntity;
    this = v4[10];
    if ( v31 )
      LODWORD(v31) = v31->fields.cost;
    v32 = item->fields.equipServantEntity;
    if ( v32 )
      LODWORD(v32) = v32->fields.cost;
    if ( this )
    {
      UIIconLabel__Set_41076120((UIIconLabel_o *)this, 7, (_DWORD)v32 + (_DWORD)v31, 0, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_71;
    }
LABEL_129:
    sub_B0D97C(this);
  }
LABEL_71:
  v33 = (UnityEngine_Object_o *)v4[11];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
  {
    v34 = item->fields.equipServantEntity;
    this = v4[11];
    if ( v34 )
    {
      v35 = v34->fields.cost;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v35 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 43, v35, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v36 = (UnityEngine_Object_o *)v4[12];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
    userServantEntity = item->fields.userServantEntity;
    this = v4[12];
    if ( userServantEntity )
    {
      hp = userServantEntity->fields.hp;
      adjustHp = userServantEntity->fields.adjustHp;
    }
    else
    {
      hp = 0;
      adjustHp = 0;
    }
    v40 = item->fields.equipUserSvtEntity;
    if ( v40 )
    {
      v41 = v40->fields.hp;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v41 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 3, hp, adjustHp, v41, 0LL, 0, 0, 0, 0LL);
  }
  v42 = (UnityEngine_Object_o *)v4[13];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    v43 = item->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v43 )
    {
      v44 = v43->fields.hp;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v44 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 41, v44, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v45 = (UnityEngine_Object_o *)v4[14];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    v46 = item->fields.userServantEntity;
    this = v4[14];
    if ( v46 )
    {
      atk = v46->fields.atk;
      adjustAtk = v46->fields.adjustAtk;
    }
    else
    {
      atk = 0;
      adjustAtk = 0;
    }
    v49 = item->fields.equipUserSvtEntity;
    if ( v49 )
    {
      v50 = v49->fields.atk;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v50 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 5, atk, adjustAtk, v50, 0LL, 0, 0, 0, 0LL);
  }
  v51 = (UnityEngine_Object_o *)v4[15];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
  {
    v52 = item->fields.equipUserSvtEntity;
    this = v4[15];
    if ( v52 )
    {
      v53 = v52->fields.atk;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v53 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 42, v53, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v54 = (UnityEngine_Object_o *)v4[16];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
    this = v4[16];
    if ( !this )
      goto LABEL_129;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, item->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}