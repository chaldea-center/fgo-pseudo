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

  if ( (byte_418A1B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_418A1B1 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_B2C434(decideButton, isInput);
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
  const MethodInfo *v27; // x1
  EquipGraphServantItemDraw_o *v28; // x21
  UnityEngine_Object_o *v29; // x21
  struct ServantEntity_o *v30; // x8
  struct ServantEntity_o *v31; // x9
  UnityEngine_Object_o *v32; // x21
  struct ServantEntity_o *v33; // x8
  int32_t v34; // w2
  UnityEngine_Object_o *v35; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *v39; // x8
  int32_t v40; // w4
  UnityEngine_Object_o *v41; // x21
  struct UserServantEntity_o *v42; // x8
  int32_t v43; // w2
  UnityEngine_Object_o *v44; // x21
  struct UserServantEntity_o *v45; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v48; // x8
  int32_t v49; // w4
  UnityEngine_Object_o *v50; // x21
  struct UserServantEntity_o *v51; // x8
  int32_t v52; // w2
  UnityEngine_Object_o *v53; // x21
  __int64 v54; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v3 = item;
  v4 = (EquipGraphServantItemDraw_o **)this;
  if ( (byte_418A1B0 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (EquipGraphServantItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418A1B0 = 1;
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
  v9 = (UnityEngine_Object_o *)v4[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
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
    UIIconLabel__Set_41609428((UIIconLabel_o *)this, 7, cost, 0, v13, 0LL, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = v3->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_129;
    if ( !skillInfoList->max_length )
    {
      v54 = sub_B2C460(this);
      sub_B2C400(v54, 0LL);
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
    v18 = v3->fields.equipUserSvtEntity;
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
    *(_QWORD *)&v56.fields.currentCryptoKey = v21;
    *(_QWORD *)&v56.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v56, 0LL);
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
      v24 = v3->fields.equipServantEntity;
      if ( v24 )
        limitMax = v24->fields.limitMax;
      else
        limitMax = 0;
      this = v4[7];
      if ( !this )
        goto LABEL_129;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v28 = this;
      if ( limitMax < 1 )
      {
        item = 0LL;
        if ( !this )
          goto LABEL_129;
      }
      else
      {
        this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(v3, v27);
        item = (EquipGraphServantItem_o *)((int)this >= limitMax);
        if ( !v28 )
          goto LABEL_129;
      }
      this = v28;
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
      LOBYTE(item) = 0;
LABEL_60:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
    }
  }
  v29 = (UnityEngine_Object_o *)v4[10];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    v30 = v3->fields.servantEntity;
    this = v4[10];
    if ( v30 )
      LODWORD(v30) = v30->fields.cost;
    v31 = v3->fields.equipServantEntity;
    if ( v31 )
      LODWORD(v31) = v31->fields.cost;
    if ( this )
    {
      UIIconLabel__Set_41609428((UIIconLabel_o *)this, 7, (_DWORD)v31 + (_DWORD)v30, 0, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_71;
    }
LABEL_129:
    sub_B2C434(this, item);
  }
LABEL_71:
  v32 = (UnityEngine_Object_o *)v4[11];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    v33 = v3->fields.equipServantEntity;
    this = v4[11];
    if ( v33 )
    {
      v34 = v33->fields.cost;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v34 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41609428((UIIconLabel_o *)this, 43, v34, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v35 = (UnityEngine_Object_o *)v4[12];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
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
    v39 = v3->fields.equipUserSvtEntity;
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
    UIIconLabel__Set_41609428((UIIconLabel_o *)this, 3, hp, adjustHp, v40, 0LL, 0, 0, 0, 0LL);
  }
  v41 = (UnityEngine_Object_o *)v4[13];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    v42 = v3->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v42 )
    {
      v43 = v42->fields.hp;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v43 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41609428((UIIconLabel_o *)this, 41, v43, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v44 = (UnityEngine_Object_o *)v4[14];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
  {
    v45 = v3->fields.userServantEntity;
    this = v4[14];
    if ( v45 )
    {
      atk = v45->fields.atk;
      adjustAtk = v45->fields.adjustAtk;
    }
    else
    {
      atk = 0;
      adjustAtk = 0;
    }
    v48 = v3->fields.equipUserSvtEntity;
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
    UIIconLabel__Set_41609428((UIIconLabel_o *)this, 5, atk, adjustAtk, v49, 0LL, 0, 0, 0, 0LL);
  }
  v50 = (UnityEngine_Object_o *)v4[15];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
  {
    v51 = v3->fields.equipUserSvtEntity;
    this = v4[15];
    if ( v51 )
    {
      v52 = v51->fields.atk;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v52 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41609428((UIIconLabel_o *)this, 42, v52, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v53 = (UnityEngine_Object_o *)v4[16];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    this = v4[16];
    if ( !this )
      goto LABEL_129;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v3->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}