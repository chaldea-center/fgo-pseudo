void __fastcall ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4101907 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, v1);
    byte_4101907 = 1;
  }
  ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH = 154;
  ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS = -113;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam___ctor(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawParam__GetKind(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  return 5;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *titleName; // x0
  UISprite_o *Component_srcLineSprite; // x21
  ServantStatusFlavorTextListViewItemDrawParam_c *klass; // x0
  ServantStatusFlavorTextListViewItemDrawParam_c *v12; // x0
  ServantStatusFlavorTextListViewItemDrawParam_c *v13; // x0
  ServantStatusFlavorTextListViewItemDrawParam_c *v14; // x0
  ServantStatusFlavorTextListViewItemDrawParam_c *v15; // x0
  ServantStatusFlavorTextListViewItemDrawParam_c *v16; // x0
  float v17; // s8
  UnityEngine_Component_o *v18; // x0
  ServantStatusFlavorTextListViewItemDrawParam_c *v19; // x0
  ServantStatusFlavorTextListViewItemDrawParam_c *v20; // x20
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  UnityEngine_Transform_o *transform; // x0
  float v25; // s8
  UnityEngine_Component_o *v26; // x0
  float v27; // s8
  ServantStatusFlavorTextListViewItemDrawParam_c *v28; // x19

  if ( (byte_4101906 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, v6);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_4101906 = 1;
  }
  titleName = (UnityEngine_GameObject_o *)this->fields.titleName;
  if ( !titleName )
    goto LABEL_53;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            titleName,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    klass = this[1].klass;
    if ( !klass )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)klass, (System_String_o *)StringLiteral_1, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( Component_srcLineSprite )
      {
        UISprite__set_spriteName(
          Component_srcLineSprite,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_53:
      sub_B170D4();
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( !Component_srcLineSprite )
        goto LABEL_53;
      UISprite__set_spriteName(
        Component_srcLineSprite,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    v12 = this[1].klass;
    if ( !v12 )
      goto LABEL_53;
    UILabel__set_overflowMethod((UILabel_o *)v12, 2, 0LL);
    v13 = this[1].klass;
    if ( !v13 )
      goto LABEL_53;
    UILabel__set_alignment((UILabel_o *)v13, 2, 0LL);
    v14 = this[1].klass;
    if ( !v14 )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)v14, title, 0LL);
    v15 = this[1].klass;
    if ( !v15 )
      goto LABEL_53;
    (*((void (__fastcall **)(ServantStatusFlavorTextListViewItemDrawParam_c *, _QWORD))v15->_1.image + 105))(
      v15,
      *((_QWORD *)v15->_1.image + 106));
    v16 = this[1].klass;
    if ( !v16 )
      goto LABEL_53;
    LODWORD(v17) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_c *, _QWORD))*((_QWORD *)v16->_1.image + 83))(
                       v16,
                       *((_QWORD *)v16->_1.image + 84)));
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    }
    v18 = (UnityEngine_Component_o *)this[1].klass;
    if ( !v18 )
      goto LABEL_53;
    if ( v17 >= (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      transform = UnityEngine_Component__get_transform(v18, 0LL);
      if ( !transform )
        goto LABEL_53;
      LODWORD(v25) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      }
      v26 = (UnityEngine_Component_o *)this[1].klass;
      if ( !v26 )
        goto LABEL_53;
      v27 = (float)(1.0 - v25)
          * (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
      TITLE_NAME_LEFT_POS = v27
                          + (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)v18, 0, 0LL);
      v19 = this[1].klass;
      if ( !v19 )
        goto LABEL_53;
      UILabel__set_alignment((UILabel_o *)v19, 1, 0LL);
      v20 = this[1].klass;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      }
      if ( !v20 )
        goto LABEL_53;
      UIWidget__set_width(
        (UIWidget_o *)v20,
        ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      v21 = (UnityEngine_Component_o *)this[1].klass;
      if ( !v21 )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    v28 = this[1].klass;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    }
    if ( !v28 )
      goto LABEL_53;
    UILabel__SetCondensedScale(
      (UILabel_o *)v28,
      ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__SetItem(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8
  ServantStatusParameterGauge_o *defenseGauge; // x0
  struct ServantLimitEntity_o *v12; // x8
  ServantStatusParameterGauge_o *agilityGauge; // x0
  struct ServantLimitEntity_o *v14; // x8
  ServantStatusParameterGauge_o *magicGauge; // x0
  struct ServantLimitEntity_o *v16; // x8
  ServantStatusParameterGauge_o *luckGauge; // x0
  struct ServantLimitEntity_o *v18; // x8
  ServantStatusParameterGauge_o *npGauge; // x0
  struct ServantLimitEntity_o *v20; // x8
  struct UnityEngine_GameObject_o *titleServantBase; // x0

  LODWORD(this->fields.baseSprite) = mode;
  if ( item && mode )
  {
    svtLimitEntity = item->fields.svtLimitEntity;
    if ( !svtLimitEntity )
      goto LABEL_17;
    defenseGauge = this->fields.defenseGauge;
    if ( !defenseGauge )
      goto LABEL_17;
    ServantStatusParameterGauge__Set(defenseGauge, 0, svtLimitEntity->fields.power, 0LL);
    v12 = item->fields.svtLimitEntity;
    if ( !v12 )
      goto LABEL_17;
    agilityGauge = this->fields.agilityGauge;
    if ( !agilityGauge )
      goto LABEL_17;
    ServantStatusParameterGauge__Set(agilityGauge, 1, v12->fields.defense, 0LL);
    v14 = item->fields.svtLimitEntity;
    if ( !v14 )
      goto LABEL_17;
    magicGauge = this->fields.magicGauge;
    if ( !magicGauge )
      goto LABEL_17;
    ServantStatusParameterGauge__Set(magicGauge, 2, v14->fields.agility, 0LL);
    v16 = item->fields.svtLimitEntity;
    if ( !v16
      || (luckGauge = this->fields.luckGauge) == 0LL
      || (ServantStatusParameterGauge__Set(luckGauge, 3, v16->fields.magic, 0LL),
          (v18 = item->fields.svtLimitEntity) == 0LL)
      || (npGauge = this->fields.npGauge) == 0LL
      || (ServantStatusParameterGauge__Set(npGauge, 4, v18->fields.luck, 0LL), (v20 = item->fields.svtLimitEntity) == 0LL)
      || (titleServantBase = this->fields.titleServantBase) == 0LL )
    {
LABEL_17:
      sub_B170D4();
    }
    ServantStatusParameterGauge__Set(
      (ServantStatusParameterGauge_o *)titleServantBase,
      5,
      v20->fields.treasureDevice,
      0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        int32_t power,
        int32_t defense,
        int32_t agility,
        int32_t magic,
        int32_t luck,
        int32_t np,
        const MethodInfo *method)
{
  ServantStatusParameterGauge_o *defenseGauge; // x0
  ServantStatusParameterGauge_o *agilityGauge; // x0
  ServantStatusParameterGauge_o *magicGauge; // x0
  ServantStatusParameterGauge_o *luckGauge; // x0
  ServantStatusParameterGauge_o *npGauge; // x0
  struct UnityEngine_GameObject_o *titleServantBase; // x0

  defenseGauge = this->fields.defenseGauge;
  if ( !defenseGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(defenseGauge, 0, power, 0LL);
  agilityGauge = this->fields.agilityGauge;
  if ( !agilityGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(agilityGauge, 1, defense, 0LL);
  magicGauge = this->fields.magicGauge;
  if ( !magicGauge
    || (ServantStatusParameterGauge__Set(magicGauge, 2, agility, 0LL), (luckGauge = this->fields.luckGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(luckGauge, 3, magic, 0LL), (npGauge = this->fields.npGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(npGauge, 4, luck, 0LL),
        (titleServantBase = this->fields.titleServantBase) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)titleServantBase, 5, np, 0LL);
}