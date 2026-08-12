void DetailInfoDialog___cctor(const MethodInfo *method)
{
  struct DetailInfoDialog_StaticFields *static_fields; // x8

  if ( (byte_596FC29 & 1) == 0 )
  {
    sub_2213A60(&DetailInfoDialog_TypeInfo);
    byte_596FC29 = 1;
  }
  static_fields = DetailInfoDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_LABEL_HEIGHT = 0x18100000082LL;
  static_fields->DETAIL_FONT_SIZE = 20;
}


void DetailInfoDialog___ctor(DetailInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_596FC28 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596FC28 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DetailInfoDialog__EndOpen(DetailInfoDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void DetailInfoDialog__Init(DetailInfoDialog_o *this, const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *infoLabel; // x20
  UnityEngine_Object_o *detailMsgLabel; // x20

  if ( (byte_596FC22 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FC22 = 1;
  }
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_23;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.infoLabel;
  if ( !nameLabel )
    goto LABEL_23;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.detailMsgLabel;
  if ( !nameLabel )
    goto LABEL_23;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  v5 = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_23;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  infoLabel = (UnityEngine_Object_o *)this->fields.infoLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(infoLabel, 0, 0) )
  {
    nameLabel = this->fields.infoLabel;
    if ( !nameLabel )
      goto LABEL_23;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  detailMsgLabel = (UnityEngine_Object_o *)this->fields.detailMsgLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(detailMsgLabel, 0, 0) )
  {
    nameLabel = this->fields.detailMsgLabel;
    if ( !nameLabel )
      goto LABEL_23;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel )
LABEL_23:
    sub_2213CDC(nameLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DetailInfoDialog__OnClickClose(DetailInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596FC26 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DetailInfoDialog_EndClose__);
    sub_2213A60(&Method_DetailInfoDialog_OnClickClose__);
    byte_596FC26 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_DetailInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_DetailInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_DetailInfoDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.isButtonEnable = 0;
    v6 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_DetailInfoDialog_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void DetailInfoDialog__Open(
        DetailInfoDialog_o *this,
        System_String_o *name,
        System_String_o *info,
        System_String_o *detail,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UILabel_o *nameLabel; // x0
  System_String_o *v11; // x1
  System_String_o *v12; // x1
  System_Action_c *v13; // x0
  System_Action_o *v14; // x20

  if ( (byte_596FC23 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DetailInfoDialog_EndOpen__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FC23 = 1;
  }
  DetailInfoDialog__SetOverFlowName(this, 0, (const MethodInfo *)info);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel
    || (name ? (v11 = name) : (v11 = (System_String_o *)StringLiteral_1/*""*/),
        (UILabel__set_text(nameLabel, v11, 0), (nameLabel = this->fields.infoLabel) == 0)
     || (info ? (v12 = info) : (v12 = (System_String_o *)StringLiteral_1/*""*/),
         UILabel__set_text(nameLabel, v12, 0),
         (nameLabel = this->fields.infoLongLabel) == 0)) )
  {
    sub_2213CDC(nameLabel, v9);
  }
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( detail )
    WrapControlText__textBBCodeAdjust(this->fields.detailMsgLabel, detail, 22, 0, 0);
  v13 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v14 = (System_Action_o *)sub_2213CCC(v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_DetailInfoDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0, 0);
}


void DetailInfoDialog__OpenWithLongInfo(
        DetailInfoDialog_o *this,
        System_String_o *name,
        System_String_o *info,
        System_String_o *detail,
        bool isSetMinSize,
        bool isCondensedName,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *nameLabel; // x0
  System_String_o *v15; // x1
  System_String_o *v16; // x1
  UIWidget_o *detailMsgLabel; // x23
  UILabel_o *v18; // x23
  DetailInfoDialog_c *v19; // x0
  int32_t v20; // w21
  bool activeSelf; // w21
  UILabel_o *v22; // x20
  System_Action_o *v23; // x20

  if ( (byte_596FC24 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DetailInfoDialog_EndOpen__);
    sub_2213A60(&DetailInfoDialog_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FC24 = 1;
  }
  DetailInfoDialog__SetOverFlowName(this, isCondensedName, (const MethodInfo *)info);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_40;
  v15 = name ? name : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(nameLabel, v15, 0);
  nameLabel = this->fields.infoLabel;
  if ( !nameLabel )
    goto LABEL_40;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.infoLongLabel;
  if ( !nameLabel )
    goto LABEL_40;
  if ( info )
    v16 = info;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(nameLabel, v16, 0);
  nameLabel = (UILabel_o *)DetailInfoDialog_TypeInfo;
  detailMsgLabel = (UIWidget_o *)this->fields.detailMsgLabel;
  if ( !*(&DetailInfoDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, v13);
  if ( !detailMsgLabel )
    goto LABEL_40;
  UIWidget__set_height(detailMsgLabel, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0);
  if ( !detail )
    goto LABEL_30;
  v18 = this->fields.detailMsgLabel;
  if ( isSetMinSize )
  {
    v19 = DetailInfoDialog_TypeInfo;
    if ( !*(&DetailInfoDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, v13);
      v19 = DetailInfoDialog_TypeInfo;
    }
    v20 = WrapControlText__textBBCodeAdjust(
            v18,
            detail,
            v19->static_fields->DETAIL_FONT_SIZE,
            v19->static_fields->DETAIL_FONT_SIZE,
            0);
    nameLabel = this->fields.detailMsgLabel;
    if ( v20 >= 2 )
    {
      if ( !nameLabel )
        goto LABEL_40;
      UILabel__set_alignment(nameLabel, 1, 0);
      if ( (unsigned int)v20 >= 7 )
      {
        nameLabel = this->fields.detailMsgLabel;
        if ( !nameLabel )
          goto LABEL_40;
        UIWidget__set_height((UIWidget_o *)nameLabel, v20 + nameLabel->fields.mHeight - 3, 0);
      }
      goto LABEL_24;
    }
    if ( !nameLabel )
      goto LABEL_40;
  }
  else
  {
    WrapControlText__textBBCodeAdjust(this->fields.detailMsgLabel, detail, 22, 0, 0);
    nameLabel = this->fields.detailMsgLabel;
    if ( !nameLabel )
      goto LABEL_40;
  }
  UILabel__set_alignment(nameLabel, 2, 0);
LABEL_24:
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel )
    goto LABEL_40;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nameLabel, 0);
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
  nameLabel = (UILabel_o *)this->fields.scrollView;
  if ( !nameLabel )
    goto LABEL_40;
  UIScrollView__ResetPosition((UIScrollView_o *)nameLabel, 0);
  nameLabel = this->fields.detailMsgLabel;
  if ( !nameLabel )
    goto LABEL_40;
  UIWidget__ResizeCollider((UIWidget_o *)nameLabel, 0);
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, activeSelf, 0);
LABEL_30:
  if ( isCondensedName )
  {
    nameLabel = (UILabel_o *)DetailInfoDialog_TypeInfo;
    v22 = this->fields.nameLabel;
    if ( !*(&DetailInfoDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, v13);
    if ( v22 )
    {
      UILabel__SetCondensedScale(v22, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_NAME_WIDTH, 0, 0);
      goto LABEL_35;
    }
LABEL_40:
    sub_2213CDC(nameLabel, v13);
  }
LABEL_35:
  this->fields.isButtonEnable = 0;
  v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_DetailInfoDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void DetailInfoDialog__SetOverFlowName(DetailInfoDialog_o *this, bool isCondensedName, const MethodInfo *method)
{
  UnityEngine_Component_o *nameLabel; // x0
  UnityEngine_Transform_o *v6; // x21
  UIWidget_o *v7; // x19

  if ( (byte_596FC25 & 1) == 0 )
  {
    sub_2213A60(&DetailInfoDialog_TypeInfo);
    byte_596FC25 = 1;
  }
  nameLabel = (UnityEngine_Component_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_15;
  nameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nameLabel, 0);
  v6 = (UnityEngine_Transform_o *)nameLabel;
  if ( !byte_5969AE5 )
  {
    nameLabel = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v6 )
    goto LABEL_15;
  UnityEngine_Transform__set_localScale(v6, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  nameLabel = (UnityEngine_Component_o *)this->fields.nameLabel;
  if ( isCondensedName )
  {
    if ( nameLabel )
    {
      UILabel__set_overflowMethod((UILabel_o *)nameLabel, 2, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(nameLabel, isCondensedName);
  }
  if ( !nameLabel )
    goto LABEL_15;
  UILabel__set_overflowMethod((UILabel_o *)nameLabel, 0, 0);
  v7 = (UIWidget_o *)this->fields.nameLabel;
  nameLabel = (UnityEngine_Component_o *)DetailInfoDialog_TypeInfo;
  if ( !*(&DetailInfoDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, isCondensedName);
  if ( !v7 )
    goto LABEL_15;
  UIWidget__set_width(v7, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_NAME_WIDTH, 0);
}


System_String_o *DetailInfoDialog__get_closeBtnPath(DetailInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_596FC27 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16260/*"Window/CloseBtn"*/);
    byte_596FC27 = 1;
  }
  return (System_String_o *)StringLiteral_16260/*"Window/CloseBtn"*/;
}