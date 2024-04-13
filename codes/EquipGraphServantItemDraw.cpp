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
  __int64 v3; // x3
  UnityEngine_Component_o *decideButton; // x0

  if ( (byte_42EB83D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, isInput, (_DWORD)method, v3);
    byte_42EB83D = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_B5D69C(decideButton, isInput);
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
  __int64 v3; // x3
  EquipGraphServantItem_o *v4; // x19
  EquipGraphServantItemDraw_o **v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  UnityEngine_Object_o *v16; // x21
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v20; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  SkillInfo_o *v22; // x8
  UILabel_o *v23; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v25; // x8
  UISprite_o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w22
  UnityEngine_Object_o *v30; // x21
  struct ServantEntity_o *v31; // x8
  int limitMax; // w22
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
  __int64 v61; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v4 = item;
  v5 = (EquipGraphServantItemDraw_o **)this;
  if ( (byte_42EB83C & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (EquipGraphServantItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EB83C = 1;
  }
  skillInfoList = 0LL;
  if ( !v4 )
    goto LABEL_129;
  baseItem = v4->fields.baseItem;
  if ( !baseItem )
    goto LABEL_129;
  this = v5[3];
  if ( !this )
    goto LABEL_129;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    v4->fields.userServantEntity,
    0LL,
    baseItem->fields.questRestrictionInfo,
    v4->fields.iconLabelInfo,
    0LL,
    0LL);
  v16 = (UnityEngine_Object_o *)v5[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    servantEntity = v4->fields.servantEntity;
    this = v5[4];
    if ( servantEntity )
      cost = servantEntity->fields.cost;
    else
      cost = 0;
    equipServantEntity = v4->fields.equipServantEntity;
    if ( equipServantEntity )
    {
      v20 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v20 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 7, cost, 0, v20, 0LL, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = v4->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_129;
    if ( !skillInfoList->max_length )
    {
      v61 = sub_B5D6C8(this);
      sub_B5D668(v61, 0LL);
    }
    v22 = skillInfoList->m_Items[0];
    if ( !v22 )
      goto LABEL_129;
    this = v5[8];
    if ( !this )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)this, v22->fields.title, 0LL);
    v23 = (UILabel_o *)v5[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v23, MargeExplanation, 22, 0, 0, 0LL);
    this = v5[5];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v5[6];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v25 = v4->fields.equipUserSvtEntity;
    if ( !v25 )
      goto LABEL_129;
    v26 = (UISprite_o *)v5[6];
    v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = v28;
    *(_QWORD *)&v63.fields.fakeValue = v27;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v26, v29, 0LL);
    v30 = (UnityEngine_Object_o *)v5[7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
      v31 = v4->fields.equipServantEntity;
      if ( v31 )
        limitMax = v31->fields.limitMax;
      else
        limitMax = 0;
      this = v5[7];
      if ( !this )
        goto LABEL_129;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v35 = this;
      if ( limitMax < 1 )
      {
        item = 0LL;
        if ( !this )
          goto LABEL_129;
      }
      else
      {
        this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(v4, v34);
        item = (EquipGraphServantItem_o *)((int)this >= limitMax);
        if ( !v35 )
          goto LABEL_129;
      }
      this = v35;
      goto LABEL_60;
    }
  }
  else
  {
    this = v5[8];
    if ( !this )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v5[9];
    if ( !this )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v5[5];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v5[6];
    if ( !this )
      goto LABEL_129;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v33 = (UnityEngine_Object_o *)v5[7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    {
      this = v5[7];
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
  v36 = (UnityEngine_Object_o *)v5[10];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
  {
    v37 = v4->fields.servantEntity;
    this = v5[10];
    if ( v37 )
      LODWORD(v37) = v37->fields.cost;
    v38 = v4->fields.equipServantEntity;
    if ( v38 )
      LODWORD(v38) = v38->fields.cost;
    if ( this )
    {
      UIIconLabel__Set_41886452((UIIconLabel_o *)this, 7, (_DWORD)v38 + (_DWORD)v37, 0, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_71;
    }
LABEL_129:
    sub_B5D69C(this, item);
  }
LABEL_71:
  v39 = (UnityEngine_Object_o *)v5[11];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    v40 = v4->fields.equipServantEntity;
    this = v5[11];
    if ( v40 )
    {
      v41 = v40->fields.cost;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v41 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 43, v41, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v42 = (UnityEngine_Object_o *)v5[12];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    userServantEntity = v4->fields.userServantEntity;
    this = v5[12];
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
    v46 = v4->fields.equipUserSvtEntity;
    if ( v46 )
    {
      v47 = v46->fields.hp;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v47 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 3, hp, adjustHp, v47, 0LL, 0, 0, 0, 0LL);
  }
  v48 = (UnityEngine_Object_o *)v5[13];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    v49 = v4->fields.equipUserSvtEntity;
    this = v5[13];
    if ( v49 )
    {
      v50 = v49->fields.hp;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v50 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 41, v50, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v51 = (UnityEngine_Object_o *)v5[14];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
  {
    v52 = v4->fields.userServantEntity;
    this = v5[14];
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
    v55 = v4->fields.equipUserSvtEntity;
    if ( v55 )
    {
      v56 = v55->fields.atk;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v56 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 5, atk, adjustAtk, v56, 0LL, 0, 0, 0, 0LL);
  }
  v57 = (UnityEngine_Object_o *)v5[15];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
  {
    v58 = v4->fields.equipUserSvtEntity;
    this = v5[15];
    if ( v58 )
    {
      v59 = v58->fields.atk;
      if ( !this )
        goto LABEL_129;
    }
    else
    {
      v59 = 0;
      if ( !this )
        goto LABEL_129;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 42, v59, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v60 = (UnityEngine_Object_o *)v5[16];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    this = v5[16];
    if ( !this )
      goto LABEL_129;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v4->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}