void __fastcall SupportServantEquipServantItemDraw___ctor(
        SupportServantEquipServantItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipServantItemDraw__SetInput(
        SupportServantEquipServantItemDraw_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0

  if ( (byte_4AFE7B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_4AFE7B2 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1BC3264(decideButton, isInput);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
    decideButton,
    0LL,
    1LL,
    decideButton->klass[1]._1.interfaceOffsets);
}


void __fastcall SupportServantEquipServantItemDraw__SetItem(
        SupportServantEquipServantItemDraw_o *this,
        SupportServantEquipServantItem_o *item,
        int32_t addBaseHp,
        int32_t addBaseAtk,
        const MethodInfo *method)
{
  SupportServantEquipServantItem_o *v7; // x19
  SupportServantEquipServantItemDraw_o **v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Object_o *v13; // x24
  ServantOverwriteStatus_o *v14; // x23
  UIIconLabel_o *v15; // x24
  int32_t Hp_k__BackingField; // w26
  int32_t v17; // w3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t hp; // w4
  UnityEngine_Object_o *v20; // x22
  UIIconLabel_o *v21; // x22
  int32_t Atk_k__BackingField; // w23
  int32_t v23; // w3
  struct UserServantEntity_o *v24; // x8
  int32_t atk; // w4
  UnityEngine_Object_o *v26; // x21
  struct UserServantEntity_o *v27; // x8
  int32_t v28; // w2
  UnityEngine_Object_o *v29; // x21
  struct UserServantEntity_o *v30; // x8
  int32_t v31; // w2
  UserServantEntity_o *v32; // x0
  __int64 v33; // x2
  SkillInfo_o *v34; // x8
  UILabel_o *v35; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v37; // x8
  UISprite_o *v38; // x21
  __int64 v39; // x22
  __int64 v40; // x23
  int32_t v41; // w22
  UnityEngine_Object_o *v42; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v45; // x21
  const MethodInfo *v46; // x1
  SupportServantEquipServantItemDraw_o *v47; // x21
  UnityEngine_Object_o *v48; // x21
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v7 = item;
  v8 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_4AFE7B1 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    this = (SupportServantEquipServantItemDraw_o *)sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4AFE7B1 = 1;
  }
  skillInfoList = 0LL;
  if ( !v7 )
    goto LABEL_108;
  this = v8[4];
  if ( !this )
    goto LABEL_108;
  if ( v7->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = v8[4];
    if ( !this )
      goto LABEL_108;
    ServantFaceIconComponent__Set_40035864(
      (ServantFaceIconComponent_o *)this,
      v7->fields.userServantEntity,
      v7->fields.iconLabelInfo,
      0LL,
      0LL);
    this = (SupportServantEquipServantItemDraw_o *)v7->fields.userServantEntity;
    if ( !this )
      goto LABEL_108;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0LL, 0LL);
    v13 = (UnityEngine_Object_o *)v8[10];
    v14 = OverwriteStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      this = v8[10];
      if ( !this )
        goto LABEL_108;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      if ( !v14 )
        goto LABEL_108;
      v15 = (UIIconLabel_o *)v8[10];
      this = (SupportServantEquipServantItemDraw_o *)v7->fields.userServantEntity;
      Hp_k__BackingField = v14->fields._Hp_k__BackingField;
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UserServantEntity__get_HpBoostValue(
                                                         (UserServantEntity_o *)this,
                                                         0LL);
        v17 = (int)this;
      }
      else
      {
        v17 = 0;
      }
      equipUserSvtEntity = v7->fields.equipUserSvtEntity;
      if ( equipUserSvtEntity )
      {
        hp = equipUserSvtEntity->fields.hp;
        if ( !v15 )
          goto LABEL_108;
      }
      else
      {
        hp = 0;
        if ( !v15 )
          goto LABEL_108;
      }
      UIIconLabel__Set_40054380(v15, 3, Hp_k__BackingField + addBaseHp, v17, hp, 0LL, 0, 0, 0, 0, 0LL);
    }
    v20 = (UnityEngine_Object_o *)v8[12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      this = v8[12];
      if ( !this )
        goto LABEL_108;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      if ( !v14 )
        goto LABEL_108;
      v21 = (UIIconLabel_o *)v8[12];
      this = (SupportServantEquipServantItemDraw_o *)v7->fields.userServantEntity;
      Atk_k__BackingField = v14->fields._Atk_k__BackingField;
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UserServantEntity__get_AtkBoostValue(
                                                         (UserServantEntity_o *)this,
                                                         0LL);
        v23 = (int)this;
      }
      else
      {
        v23 = 0;
      }
      v24 = v7->fields.equipUserSvtEntity;
      if ( v24 )
      {
        atk = v24->fields.atk;
        if ( !v21 )
          goto LABEL_108;
      }
      else
      {
        atk = 0;
        if ( !v21 )
          goto LABEL_108;
      }
      UIIconLabel__Set_40054380(v21, 5, Atk_k__BackingField + addBaseAtk, v23, atk, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
  else
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 0, 0LL);
    this = v8[4];
    if ( !this )
      goto LABEL_108;
    ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)this, 0LL);
    this = v8[10];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v8[12];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v26 = (UnityEngine_Object_o *)v8[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    this = v8[11];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v27 = v7->fields.equipUserSvtEntity;
    this = v8[11];
    if ( v27 )
    {
      v28 = v27->fields.hp;
      if ( !this )
        goto LABEL_108;
    }
    else
    {
      v28 = 0;
      if ( !this )
        goto LABEL_108;
    }
    UIIconLabel__Set_40054380((UIIconLabel_o *)this, 41, v28, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  v29 = (UnityEngine_Object_o *)v8[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    this = v8[13];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v30 = v7->fields.equipUserSvtEntity;
    this = v8[13];
    if ( v30 )
    {
      v31 = v30->fields.atk;
      if ( !this )
        goto LABEL_108;
    }
    else
    {
      v31 = 0;
      if ( !this )
        goto LABEL_108;
    }
    UIIconLabel__Set_40054380((UIIconLabel_o *)this, 42, v31, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  v32 = v7->fields.equipUserSvtEntity;
  if ( v32 )
  {
    UserServantEntity__getEquipSkillInfo(v32, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_108;
    if ( !skillInfoList->max_length )
      sub_1BC326C(this, item, v33);
    v34 = skillInfoList->m_Items[0];
    if ( !v34 )
      goto LABEL_108;
    this = v8[8];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, v34->fields.title, 0LL);
    v35 = (UILabel_o *)v8[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v35, MargeExplanation, 22, 0, 0LL);
    this = v8[5];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v8[6];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v37 = v7->fields.equipUserSvtEntity;
    if ( !v37 )
      goto LABEL_108;
    v38 = (UISprite_o *)v8[6];
    v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v40;
    *(_QWORD *)&v50.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v50, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v38, v41, 0LL, 0LL);
    v42 = (UnityEngine_Object_o *)v8[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v7->fields.equipUserSvtEntity )
      {
        equipServantEntity = v7->fields.equipServantEntity;
        if ( !equipServantEntity )
          goto LABEL_108;
        limitMax = equipServantEntity->fields.limitMax;
      }
      else
      {
        limitMax = 0;
      }
      this = v8[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        v47 = this;
        if ( limitMax < 1 )
        {
          item = 0LL;
          if ( !this )
            goto LABEL_108;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(v7, v46);
          item = (SupportServantEquipServantItem_o *)((int)this >= limitMax);
          if ( !v47 )
            goto LABEL_108;
        }
        this = v47;
        goto LABEL_101;
      }
      goto LABEL_108;
    }
  }
  else
  {
    this = v8[8];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v8[9];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v8[5];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v8[6];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v45 = (UnityEngine_Object_o *)v8[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
    {
      this = v8[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          LOBYTE(item) = 0;
LABEL_101:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
          goto LABEL_102;
        }
      }
LABEL_108:
      sub_1BC3264(this, item);
    }
  }
LABEL_102:
  v48 = (UnityEngine_Object_o *)v8[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    this = v8[14];
    if ( !this )
      goto LABEL_108;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v7->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}