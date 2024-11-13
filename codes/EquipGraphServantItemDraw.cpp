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

  if ( (byte_4B159EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, isInput, method);
    byte_4B159EF = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1BCAA3C(decideButton, isInput);
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
  EquipGraphServantItem_o *v3; // x19
  EquipGraphServantItemDraw_o **v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v17; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  SkillInfo_o *v19; // x8
  UILabel_o *v20; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v22; // x8
  UISprite_o *v23; // x21
  __int64 v24; // x22
  __int64 v25; // x23
  __int64 v26; // x1
  int32_t v27; // w22
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  struct ServantEntity_o *v30; // x8
  int limitMax; // w22
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x21
  const MethodInfo *v34; // x1
  EquipGraphServantItemDraw_o *v35; // x21
  UnityEngine_Object_o *v36; // x21
  struct ServantEntity_o *v37; // x8
  struct ServantEntity_o *v38; // x9
  UnityEngine_Object_o *v39; // x21
  struct ServantEntity_o *v40; // x8
  int32_t v41; // w2
  UnityEngine_Object_o *v42; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *v46; // x8
  int32_t v47; // w4
  UnityEngine_Object_o *v48; // x21
  struct UserServantEntity_o *v49; // x8
  int32_t v50; // w2
  UnityEngine_Object_o *v51; // x21
  struct UserServantEntity_o *v52; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v55; // x8
  int32_t v56; // w4
  UnityEngine_Object_o *v57; // x21
  struct UserServantEntity_o *v58; // x8
  int32_t v59; // w2
  UnityEngine_Object_o *v60; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v3 = item;
  v4 = (EquipGraphServantItemDraw_o **)this;
  if ( (byte_4B159EE & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (EquipGraphServantItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B159EE = 1;
  }
  skillInfoList = 0LL;
  if ( !v3 )
    goto LABEL_117;
  baseItem = v3->fields.baseItem;
  if ( !baseItem )
    goto LABEL_117;
  this = v4[4];
  if ( !this )
    goto LABEL_117;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    v3->fields.userServantEntity,
    0LL,
    baseItem->fields.questRestrictionInfo,
    v3->fields.iconLabelInfo,
    0LL,
    0LL);
  v13 = (UnityEngine_Object_o *)v4[5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    servantEntity = v3->fields.servantEntity;
    if ( servantEntity )
      cost = servantEntity->fields.cost;
    else
      cost = 0;
    equipServantEntity = v3->fields.equipServantEntity;
    this = v4[5];
    if ( equipServantEntity )
    {
      v17 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v17 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 7, cost, 0, v17, 0LL, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = v3->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_117;
    if ( !skillInfoList->max_length )
      sub_1BCAA44(this, item);
    v19 = skillInfoList->m_Items[0];
    if ( !v19 )
      goto LABEL_117;
    this = v4[9];
    if ( !this )
      goto LABEL_117;
    UILabel__set_text((UILabel_o *)this, v19->fields.title, 0LL);
    v20 = (UILabel_o *)v4[10];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v20, MargeExplanation, 22, 0, 0, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_117;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[7];
    if ( !this )
      goto LABEL_117;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v22 = v3->fields.equipUserSvtEntity;
    if ( !v22 )
      goto LABEL_117;
    v23 = (UISprite_o *)v4[7];
    v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
    *(_QWORD *)&v62.fields.currentCryptoKey = v25;
    *(_QWORD *)&v62.fields.fakeValue = v24;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v62, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
    AtlasManager__SetEquipFace(v23, v27, 0LL);
    v29 = (UnityEngine_Object_o *)v4[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      v30 = v3->fields.equipServantEntity;
      if ( v30 )
        limitMax = v30->fields.limitMax;
      else
        limitMax = 0;
      this = v4[8];
      if ( !this )
        goto LABEL_117;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v35 = this;
      if ( limitMax < 1 )
      {
        item = 0LL;
        if ( !this )
          goto LABEL_117;
      }
      else
      {
        this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(v3, v34);
        item = (EquipGraphServantItem_o *)((int)this >= limitMax);
        if ( !v35 )
          goto LABEL_117;
      }
      this = v35;
      goto LABEL_55;
    }
  }
  else
  {
    this = v4[9];
    if ( !this )
      goto LABEL_117;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[10];
    if ( !this )
      goto LABEL_117;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_117;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v4[7];
    if ( !this )
      goto LABEL_117;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v33 = (UnityEngine_Object_o *)v4[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    {
      this = v4[8];
      if ( !this )
        goto LABEL_117;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_117;
      LOBYTE(item) = 0;
LABEL_55:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
    }
  }
  v36 = (UnityEngine_Object_o *)v4[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
    v37 = v3->fields.servantEntity;
    if ( v37 )
      LODWORD(v37) = v37->fields.cost;
    v38 = v3->fields.equipServantEntity;
    this = v4[11];
    if ( v38 )
      LODWORD(v38) = v38->fields.cost;
    if ( this )
    {
      UIIconLabel__Set_38947284((UIIconLabel_o *)this, 7, (_DWORD)v38 + (_DWORD)v37, 0, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_65;
    }
LABEL_117:
    sub_1BCAA3C(this, item);
  }
LABEL_65:
  v39 = (UnityEngine_Object_o *)v4[12];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    v40 = v3->fields.equipServantEntity;
    this = v4[12];
    if ( v40 )
    {
      v41 = v40->fields.cost;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v41 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 43, v41, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v42 = (UnityEngine_Object_o *)v4[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    userServantEntity = v3->fields.userServantEntity;
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
    v46 = v3->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v46 )
    {
      v47 = v46->fields.hp;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v47 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 3, hp, adjustHp, v47, 0LL, 0, 0, 0, 0LL);
  }
  v48 = (UnityEngine_Object_o *)v4[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    v49 = v3->fields.equipUserSvtEntity;
    this = v4[14];
    if ( v49 )
    {
      v50 = v49->fields.hp;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v50 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 41, v50, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v51 = (UnityEngine_Object_o *)v4[15];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
  {
    v52 = v3->fields.userServantEntity;
    if ( v52 )
    {
      atk = v52->fields.atk;
      adjustAtk = v52->fields.adjustAtk;
    }
    else
    {
      atk = 0;
      adjustAtk = 0;
    }
    v55 = v3->fields.equipUserSvtEntity;
    this = v4[15];
    if ( v55 )
    {
      v56 = v55->fields.atk;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v56 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 5, atk, adjustAtk, v56, 0LL, 0, 0, 0, 0LL);
  }
  v57 = (UnityEngine_Object_o *)v4[16];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
  {
    v58 = v3->fields.equipUserSvtEntity;
    this = v4[16];
    if ( v58 )
    {
      v59 = v58->fields.atk;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v59 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 42, v59, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v60 = (UnityEngine_Object_o *)v4[17];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    this = v4[17];
    if ( !this )
      goto LABEL_117;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v3->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}