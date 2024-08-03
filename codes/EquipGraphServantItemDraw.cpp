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

  if ( (byte_49FBE52 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_49FBE52 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1B64324(decideButton);
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
  __int64 v15; // x1
  SkillInfo_o *v16; // x8
  UILabel_o *v17; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v19; // x8
  UISprite_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  int32_t v23; // w22
  UnityEngine_Object_o *v24; // x21
  struct ServantEntity_o *v25; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v27; // x21
  bool v28; // w1
  const MethodInfo *v29; // x1
  EquipGraphServantItemDraw_o *v30; // x21
  UnityEngine_Object_o *v31; // x21
  struct ServantEntity_o *v32; // x8
  struct ServantEntity_o *v33; // x9
  UnityEngine_Object_o *v34; // x21
  struct ServantEntity_o *v35; // x8
  int32_t v36; // w2
  UnityEngine_Object_o *v37; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *v41; // x8
  int32_t v42; // w4
  UnityEngine_Object_o *v43; // x21
  struct UserServantEntity_o *v44; // x8
  int32_t v45; // w2
  UnityEngine_Object_o *v46; // x21
  struct UserServantEntity_o *v47; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v50; // x8
  int32_t v51; // w4
  UnityEngine_Object_o *v52; // x21
  struct UserServantEntity_o *v53; // x8
  int32_t v54; // w2
  UnityEngine_Object_o *v55; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v4 = (EquipGraphServantItemDraw_o **)this;
  if ( (byte_49FBE51 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (EquipGraphServantItemDraw_o *)sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FBE51 = 1;
  }
  skillInfoList = 0LL;
  if ( !item )
    goto LABEL_117;
  baseItem = item->fields.baseItem;
  if ( !baseItem )
    goto LABEL_117;
  this = v4[4];
  if ( !this )
    goto LABEL_117;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    item->fields.userServantEntity,
    0LL,
    baseItem->fields.questRestrictionInfo,
    item->fields.iconLabelInfo,
    0LL,
    0LL);
  v9 = (UnityEngine_Object_o *)v4[5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    servantEntity = item->fields.servantEntity;
    if ( servantEntity )
      cost = servantEntity->fields.cost;
    else
      cost = 0;
    equipServantEntity = item->fields.equipServantEntity;
    this = v4[5];
    if ( equipServantEntity )
    {
      v13 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v13 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 7, cost, 0, v13, 0LL, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = item->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_117;
    if ( !skillInfoList->max_length )
      sub_1B6432C(this, v15);
    v16 = skillInfoList->m_Items[0];
    if ( !v16 )
      goto LABEL_117;
    this = v4[9];
    if ( !this )
      goto LABEL_117;
    UILabel__set_text((UILabel_o *)this, v16->fields.title, 0LL);
    v17 = (UILabel_o *)v4[10];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v17, MargeExplanation, 22, 0, 0, 0LL);
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
    v19 = item->fields.equipUserSvtEntity;
    if ( !v19 )
      goto LABEL_117;
    v20 = (UISprite_o *)v4[7];
    v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v57.fields.currentCryptoKey = v22;
    *(_QWORD *)&v57.fields.fakeValue = v21;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v57, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v20, v23, 0LL);
    v24 = (UnityEngine_Object_o *)v4[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      v25 = item->fields.equipServantEntity;
      if ( v25 )
        limitMax = v25->fields.limitMax;
      else
        limitMax = 0;
      this = v4[8];
      if ( !this )
        goto LABEL_117;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v30 = this;
      if ( limitMax < 1 )
      {
        v28 = 0;
        if ( !this )
          goto LABEL_117;
      }
      else
      {
        this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(item, v29);
        v28 = (int)this >= limitMax;
        if ( !v30 )
          goto LABEL_117;
      }
      this = v30;
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
    v27 = (UnityEngine_Object_o *)v4[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
    {
      this = v4[8];
      if ( !this )
        goto LABEL_117;
      this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_117;
      v28 = 0;
LABEL_55:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28, 0LL);
    }
  }
  v31 = (UnityEngine_Object_o *)v4[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    v32 = item->fields.servantEntity;
    if ( v32 )
      LODWORD(v32) = v32->fields.cost;
    v33 = item->fields.equipServantEntity;
    this = v4[11];
    if ( v33 )
      LODWORD(v33) = v33->fields.cost;
    if ( this )
    {
      UIIconLabel__Set_37921148((UIIconLabel_o *)this, 7, (_DWORD)v33 + (_DWORD)v32, 0, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_65;
    }
LABEL_117:
    sub_1B64324(this);
  }
LABEL_65:
  v34 = (UnityEngine_Object_o *)v4[12];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    v35 = item->fields.equipServantEntity;
    this = v4[12];
    if ( v35 )
    {
      v36 = v35->fields.cost;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v36 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 43, v36, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v37 = (UnityEngine_Object_o *)v4[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    userServantEntity = item->fields.userServantEntity;
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
    v41 = item->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v41 )
    {
      v42 = v41->fields.hp;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v42 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 3, hp, adjustHp, v42, 0LL, 0, 0, 0, 0LL);
  }
  v43 = (UnityEngine_Object_o *)v4[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
  {
    v44 = item->fields.equipUserSvtEntity;
    this = v4[14];
    if ( v44 )
    {
      v45 = v44->fields.hp;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v45 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 41, v45, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v46 = (UnityEngine_Object_o *)v4[15];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
  {
    v47 = item->fields.userServantEntity;
    if ( v47 )
    {
      atk = v47->fields.atk;
      adjustAtk = v47->fields.adjustAtk;
    }
    else
    {
      atk = 0;
      adjustAtk = 0;
    }
    v50 = item->fields.equipUserSvtEntity;
    this = v4[15];
    if ( v50 )
    {
      v51 = v50->fields.atk;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v51 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 5, atk, adjustAtk, v51, 0LL, 0, 0, 0, 0LL);
  }
  v52 = (UnityEngine_Object_o *)v4[16];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
  {
    v53 = item->fields.equipUserSvtEntity;
    this = v4[16];
    if ( v53 )
    {
      v54 = v53->fields.atk;
      if ( !this )
        goto LABEL_117;
    }
    else
    {
      v54 = 0;
      if ( !this )
        goto LABEL_117;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 42, v54, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v55 = (UnityEngine_Object_o *)v4[17];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    this = v4[17];
    if ( !this )
      goto LABEL_117;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, item->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}