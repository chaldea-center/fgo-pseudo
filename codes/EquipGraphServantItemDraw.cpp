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

  if ( (byte_4355062 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4355062 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_B7076C(decideButton, isInput);
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
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  UnityEngine_Object_o *v6; // x21
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v10; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  SkillInfo_o *v12; // x8
  UILabel_o *v13; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v15; // x8
  UISprite_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w22
  UnityEngine_Object_o *v20; // x21
  struct ServantEntity_o *v21; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v23; // x21
  const MethodInfo *v24; // x1
  EquipGraphServantItemDraw_o *v25; // x21
  UnityEngine_Object_o *v26; // x21
  struct ServantEntity_o *v27; // x8
  struct ServantEntity_o *v28; // x9
  UnityEngine_Object_o *v29; // x21
  struct ServantEntity_o *v30; // x8
  int32_t v31; // w2
  UnityEngine_Object_o *v32; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *v36; // x8
  int32_t v37; // w4
  UnityEngine_Object_o *v38; // x21
  struct UserServantEntity_o *v39; // x8
  int32_t v40; // w2
  UnityEngine_Object_o *v41; // x21
  struct UserServantEntity_o *v42; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v45; // x8
  int32_t v46; // w4
  UnityEngine_Object_o *v47; // x21
  struct UserServantEntity_o *v48; // x8
  int32_t v49; // w2
  UnityEngine_Object_o *v50; // x21
  __int64 v51; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v3 = item;
  v4 = (EquipGraphServantItemDraw_o **)this;
  if ( (byte_4355061 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphServantItemDraw_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4355061 = 1;
  }
  skillInfoList = 0LL;
  if ( !v3 )
    goto LABEL_129;
  baseItem = v3->fields.baseItem;
  if ( !baseItem )
    goto LABEL_129;
  this = v4[3];
  if ( !this )
    goto LABEL_129;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    v3->fields.userServantEntity,
    0LL,
    baseItem->fields.questRestrictionInfo,
    v3->fields.iconLabelInfo,
    0LL,
    0LL);
  v6 = (UnityEngine_Object_o *)v4[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    servantEntity = v3->fields.servantEntity;
    this = v4[4];
    if ( servantEntity )
      cost = servantEntity->fields.cost;
    else
      cost = 0;
    equipServantEntity = v3->fields.equipServantEntity;
    if ( equipServantEntity )
    {
      v10 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v10 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41432452((UIIconLabel_o *)this, 7, cost, 0, v10, 0LL, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = v3->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_129;
    if ( !skillInfoList->max_length )
    {
      v51 = sub_B70798(this);
      sub_B70738(v51, 0LL);
    }
    v12 = skillInfoList->m_Items[0];
    if ( !v12 )
      goto LABEL_129;
    this = v4[8];
    if ( !this )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)this, v12->fields.title, 0LL);
    v13 = (UILabel_o *)v4[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v13, MargeExplanation, 22, 0, 0, 0LL);
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
    v15 = v3->fields.equipUserSvtEntity;
    if ( !v15 )
      goto LABEL_129;
    v16 = (UISprite_o *)v4[6];
    v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v18;
    *(_QWORD *)&v53.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v53, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v16, v19, 0LL);
    v20 = (UnityEngine_Object_o *)v4[7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      v21 = v3->fields.equipServantEntity;
      if ( v21 )
        limitMax = v21->fields.limitMax;
      else
        limitMax = 0;
      this = v4[7];
      if ( !this )
        goto LABEL_129;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v25 = this;
      if ( limitMax < 1 )
      {
        item = 0LL;
        if ( !this )
          goto LABEL_129;
      }
      else
      {
        this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(v3, v24);
        item = (EquipGraphServantItem_o *)((int)this >= limitMax);
        if ( !v25 )
          goto LABEL_129;
      }
      this = v25;
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
    v23 = (UnityEngine_Object_o *)v4[7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      this = v4[7];
      if ( !this )
        goto LABEL_129;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_129;
      LOBYTE(item) = 0;
LABEL_60:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
    }
  }
  v26 = (UnityEngine_Object_o *)v4[10];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    v27 = v3->fields.servantEntity;
    this = v4[10];
    if ( v27 )
      LODWORD(v27) = v27->fields.cost;
    v28 = v3->fields.equipServantEntity;
    if ( v28 )
      LODWORD(v28) = v28->fields.cost;
    if ( this )
    {
      UIIconLabel__Set_41432452((UIIconLabel_o *)this, 7, (_DWORD)v28 + (_DWORD)v27, 0, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_71;
    }
LABEL_129:
    sub_B7076C(this, item);
  }
LABEL_71:
  v29 = (UnityEngine_Object_o *)v4[11];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    v30 = v3->fields.equipServantEntity;
    this = v4[11];
    if ( v30 )
    {
      v31 = v30->fields.cost;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v31 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41432452((UIIconLabel_o *)this, 43, v31, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v32 = (UnityEngine_Object_o *)v4[12];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    userServantEntity = v3->fields.userServantEntity;
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
    v36 = v3->fields.equipUserSvtEntity;
    if ( v36 )
    {
      v37 = v36->fields.hp;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v37 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41432452((UIIconLabel_o *)this, 3, hp, adjustHp, v37, 0LL, 0, 0, 0, 0LL);
  }
  v38 = (UnityEngine_Object_o *)v4[13];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    v39 = v3->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v39 )
    {
      v40 = v39->fields.hp;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v40 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41432452((UIIconLabel_o *)this, 41, v40, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v41 = (UnityEngine_Object_o *)v4[14];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    v42 = v3->fields.userServantEntity;
    this = v4[14];
    if ( v42 )
    {
      atk = v42->fields.atk;
      adjustAtk = v42->fields.adjustAtk;
    }
    else
    {
      atk = 0;
      adjustAtk = 0;
    }
    v45 = v3->fields.equipUserSvtEntity;
    if ( v45 )
    {
      v46 = v45->fields.atk;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v46 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41432452((UIIconLabel_o *)this, 5, atk, adjustAtk, v46, 0LL, 0, 0, 0, 0LL);
  }
  v47 = (UnityEngine_Object_o *)v4[15];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
  {
    v48 = v3->fields.equipUserSvtEntity;
    this = v4[15];
    if ( v48 )
    {
      v49 = v48->fields.atk;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v49 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41432452((UIIconLabel_o *)this, 42, v49, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v50 = (UnityEngine_Object_o *)v4[16];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
  {
    this = v4[16];
    if ( !this )
      goto LABEL_129;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v3->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}