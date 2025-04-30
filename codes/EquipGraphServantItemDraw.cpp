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

  if ( (byte_4A4DB40 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_4A4DB40 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1B86614(decideButton, isInput);
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
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v12; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  SkillInfo_o *v14; // x8
  UILabel_o *v15; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v17; // x8
  UISprite_o *v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  int32_t v21; // w22
  UnityEngine_Object_o *v22; // x21
  struct ServantEntity_o *v23; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v25; // x21
  const MethodInfo *v26; // x1
  EquipGraphServantItemDraw_o *v27; // x21
  UnityEngine_Object_o *v28; // x21
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *v30; // x9
  UnityEngine_Object_o *v31; // x21
  struct ServantEntity_o *v32; // x8
  int32_t v33; // w2
  UnityEngine_Object_o *v34; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t adjustHp; // w3
  struct UserServantEntity_o *v37; // x8
  int32_t hp; // w4
  UnityEngine_Object_o *v39; // x21
  struct UserServantEntity_o *v40; // x8
  int32_t v41; // w2
  UnityEngine_Object_o *v42; // x21
  struct UserServantEntity_o *v43; // x8
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v45; // x8
  int32_t atk; // w4
  UnityEngine_Object_o *v47; // x21
  struct UserServantEntity_o *v48; // x8
  int32_t v49; // w2
  UnityEngine_Object_o *v50; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v3 = item;
  v4 = (EquipGraphServantItemDraw_o **)this;
  if ( (byte_4A4DB3F & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (EquipGraphServantItemDraw_o *)sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4DB3F = 1;
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
  v9 = (UnityEngine_Object_o *)v4[5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    if ( v3->fields.servantEntity )
      cost = v3->fields.cost;
    else
      cost = 0;
    equipServantEntity = v3->fields.equipServantEntity;
    this = v4[5];
    if ( equipServantEntity )
    {
      v12 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v12 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 7, cost, 0, v12, 0LL, 0, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = v3->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_117;
    if ( !skillInfoList->max_length )
      sub_1B8661C(this, item);
    v14 = skillInfoList->m_Items[0];
    if ( !v14 )
      goto LABEL_117;
    this = v4[9];
    if ( !this )
      goto LABEL_117;
    UILabel__set_text((UILabel_o *)this, v14->fields.title, 0LL);
    v15 = (UILabel_o *)v4[10];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v15, MargeExplanation, 22, 0, 0LL);
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
    v17 = v3->fields.equipUserSvtEntity;
    if ( !v17 )
      goto LABEL_117;
    v18 = (UISprite_o *)v4[7];
    v20 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v52.fields.currentCryptoKey = v20;
    *(_QWORD *)&v52.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v52, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v18, v21, 0LL, 0LL);
    v22 = (UnityEngine_Object_o *)v4[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      v23 = v3->fields.equipServantEntity;
      if ( v23 )
        limitMax = v23->fields.limitMax;
      else
        limitMax = 0;
      this = v4[8];
      if ( !this )
        goto LABEL_117;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v27 = this;
      if ( limitMax < 1 )
      {
        item = 0LL;
        if ( !this )
          goto LABEL_117;
      }
      else
      {
        this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(v3, v26);
        item = (EquipGraphServantItem_o *)((int)this >= limitMax);
        if ( !v27 )
          goto LABEL_117;
      }
      this = v27;
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
    v25 = (UnityEngine_Object_o *)v4[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
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
  v28 = (UnityEngine_Object_o *)v4[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    servantEntity = v3->fields.servantEntity;
    if ( servantEntity )
      LODWORD(servantEntity) = v3->fields.cost;
    v30 = v3->fields.equipServantEntity;
    this = v4[11];
    if ( v30 )
      LODWORD(v30) = v30->fields.cost;
    if ( this )
    {
      UIIconLabel__Set_39193520(
        (UIIconLabel_o *)this,
        7,
        (_DWORD)v30 + (_DWORD)servantEntity,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
      goto LABEL_65;
    }
LABEL_117:
    sub_1B86614(this, item);
  }
LABEL_65:
  v31 = (UnityEngine_Object_o *)v4[12];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    v32 = v3->fields.equipServantEntity;
    this = v4[12];
    if ( v32 )
    {
      v33 = v32->fields.cost;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v33 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 43, v33, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  v34 = (UnityEngine_Object_o *)v4[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    userServantEntity = v3->fields.userServantEntity;
    if ( userServantEntity )
      adjustHp = userServantEntity->fields.adjustHp;
    else
      adjustHp = 0;
    v37 = v3->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v37 )
    {
      hp = v37->fields.hp;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      hp = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 3, v3->fields.hp, adjustHp, hp, 0LL, 0, 0, 0, 0, 0LL);
  }
  v39 = (UnityEngine_Object_o *)v4[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    v40 = v3->fields.equipUserSvtEntity;
    this = v4[14];
    if ( v40 )
    {
      v41 = v40->fields.hp;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v41 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 41, v41, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  v42 = (UnityEngine_Object_o *)v4[15];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    v43 = v3->fields.userServantEntity;
    if ( v43 )
      adjustAtk = v43->fields.adjustAtk;
    else
      adjustAtk = 0;
    v45 = v3->fields.equipUserSvtEntity;
    this = v4[15];
    if ( v45 )
    {
      atk = v45->fields.atk;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      atk = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 5, v3->fields.atk, adjustAtk, atk, 0LL, 0, 0, 0, 0, 0LL);
  }
  v47 = (UnityEngine_Object_o *)v4[16];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
  {
    v48 = v3->fields.equipUserSvtEntity;
    this = v4[16];
    if ( v48 )
    {
      v49 = v48->fields.atk;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v49 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 42, v49, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  v50 = (UnityEngine_Object_o *)v4[17];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
  {
    this = v4[17];
    if ( !this )
      goto LABEL_117;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v3->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}