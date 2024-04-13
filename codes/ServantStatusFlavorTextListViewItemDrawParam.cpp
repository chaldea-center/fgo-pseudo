void __fastcall ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED2F5 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, v1, v2, v3);
    byte_42ED2F5 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_GameObject_o *titleName; // x0
  UISprite_o *Component_srcLineSprite; // x21
  float v20; // s8
  ServantStatusFlavorTextListViewItemDrawParam_c *klass; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v24; // s8
  float v25; // s8
  ServantStatusFlavorTextListViewItemDrawParam_c *v26; // x19

  if ( (byte_42ED2F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)title, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42ED2F4 = 1;
  }
  titleName = (UnityEngine_GameObject_o *)this->fields.titleName;
  if ( !titleName )
    goto LABEL_53;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            titleName,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleName = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)titleName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
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
      sub_B5D69C(titleName, title);
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
      titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
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
    titleName = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_overflowMethod((UILabel_o *)titleName, 2, 0LL);
    titleName = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_alignment((UILabel_o *)titleName, 2, 0LL);
    titleName = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)titleName, title, 0LL);
    titleName = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !titleName )
      goto LABEL_53;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleName->klass[2]._1.typeMetadataHandle)(
      titleName,
      titleName->klass[2]._1.interopData);
    titleName = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !titleName )
      goto LABEL_53;
    LODWORD(v20) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleName->klass[1]._2.naturalAligment)(
                       titleName,
                       titleName->klass[1].vtable._0_Equals.methodPtr));
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    }
    titleName = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !titleName )
      goto LABEL_53;
    if ( v20 >= (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleName = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)titleName,
                                                0LL);
      if ( !titleName )
        goto LABEL_53;
      LODWORD(v24) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleName, 0LL);
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      }
      titleName = (UnityEngine_GameObject_o *)this[1].klass;
      if ( !titleName )
        goto LABEL_53;
      v25 = (float)(1.0 - v24)
          * (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
      TITLE_NAME_LEFT_POS = v25
                          + (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleName, 0, 0LL);
      titleName = (UnityEngine_GameObject_o *)this[1].klass;
      if ( !titleName )
        goto LABEL_53;
      UILabel__set_alignment((UILabel_o *)titleName, 1, 0LL);
      titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
      klass = this[1].klass;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      }
      if ( !klass )
        goto LABEL_53;
      UIWidget__set_width(
        (UIWidget_o *)klass,
        ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      titleName = (UnityEngine_GameObject_o *)this[1].klass;
      if ( !titleName )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
    v26 = this[1].klass;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    }
    if ( !v26 )
      goto LABEL_53;
    UILabel__SetCondensedScale(
      (UILabel_o *)v26,
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
  ServantStatusFlavorTextListViewItemDrawParam_o **v10; // x19
  struct ServantLimitEntity_o *v11; // x8
  struct ServantLimitEntity_o *v12; // x8
  struct ServantLimitEntity_o *v13; // x8
  struct ServantLimitEntity_o *v14; // x8
  struct ServantLimitEntity_o *v15; // x8

  LODWORD(this->fields.baseSprite) = mode;
  if ( item && mode )
  {
    svtLimitEntity = item->fields.svtLimitEntity;
    if ( !svtLimitEntity )
      goto LABEL_17;
    v10 = (ServantStatusFlavorTextListViewItemDrawParam_o **)this;
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)this->fields.defenseGauge;
    if ( !this )
      goto LABEL_17;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 0, svtLimitEntity->fields.power, 0LL);
    v11 = item->fields.svtLimitEntity;
    if ( !v11 )
      goto LABEL_17;
    this = v10[6];
    if ( !this )
      goto LABEL_17;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v11->fields.defense, 0LL);
    v12 = item->fields.svtLimitEntity;
    if ( !v12 )
      goto LABEL_17;
    this = v10[7];
    if ( !this )
      goto LABEL_17;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v12->fields.agility, 0LL);
    v13 = item->fields.svtLimitEntity;
    if ( !v13
      || (this = v10[8]) == 0LL
      || (ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v13->fields.magic, 0LL),
          (v14 = item->fields.svtLimitEntity) == 0LL)
      || (this = v10[9]) == 0LL
      || (ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v14->fields.luck, 0LL),
          (v15 = item->fields.svtLimitEntity) == 0LL)
      || (this = v10[10]) == 0LL )
    {
LABEL_17:
      sub_B5D69C(this, item);
    }
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 5, v15->fields.treasureDevice, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  defenseGauge = this->fields.defenseGauge;
  if ( !defenseGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(defenseGauge, 0, power, 0LL);
  defenseGauge = this->fields.agilityGauge;
  if ( !defenseGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(defenseGauge, 1, defense, 0LL);
  defenseGauge = this->fields.magicGauge;
  if ( !defenseGauge
    || (ServantStatusParameterGauge__Set(defenseGauge, 2, agility, 0LL), (defenseGauge = this->fields.luckGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(defenseGauge, 3, magic, 0LL), (defenseGauge = this->fields.npGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(defenseGauge, 4, luck, 0LL),
        (defenseGauge = (ServantStatusParameterGauge_o *)this->fields.titleServantBase) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(defenseGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(defenseGauge, 5, np, 0LL);
}