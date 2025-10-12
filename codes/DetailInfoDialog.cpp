void DetailInfoDialog___cctor(const MethodInfo *method)
{
  struct DetailInfoDialog_StaticFields *static_fields; // x8

  if ( (byte_4C36EEC & 1) == 0 )
  {
    sub_1C32C20(&DetailInfoDialog_TypeInfo);
    byte_4C36EEC = 1;
  }
  static_fields = DetailInfoDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_LABEL_HEIGHT = 0x18100000082LL;
  static_fields->DETAIL_FONT_SIZE = 20;
}


void DetailInfoDialog___ctor(DetailInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C36EEB & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C36EEB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DetailInfoDialog__EndOpen(DetailInfoDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void DetailInfoDialog__Init(DetailInfoDialog_o *this, const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *infoLabel; // x20
  UnityEngine_Object_o *detailMsgLabel; // x20

  if ( (byte_4C36EE5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36EE5 = 1;
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
  v4 = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_23;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  infoLabel = (UnityEngine_Object_o *)this->fields.infoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoLabel, 0, 0) )
  {
    nameLabel = this->fields.infoLabel;
    if ( !nameLabel )
      goto LABEL_23;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  detailMsgLabel = (UnityEngine_Object_o *)this->fields.detailMsgLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(nameLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DetailInfoDialog__OnClickClose(DetailInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C36EE9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DetailInfoDialog_EndClose__);
    sub_1C32C20(&Method_DetailInfoDialog_OnClickClose__);
    byte_4C36EE9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_DetailInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_DetailInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_DetailInfoDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_DetailInfoDialog_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void DetailInfoDialog__Open(
        DetailInfoDialog_o *this,
        System_String_o *name,
        System_String_o *info,
        System_String_o *detail,
        const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  System_String_o *v10; // x1
  System_String_o *v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_4C36EE6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DetailInfoDialog_EndOpen__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36EE6 = 1;
  }
  DetailInfoDialog__SetOverFlowName(this, 0, (const MethodInfo *)info);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel
    || (name ? (v10 = name) : (v10 = (System_String_o *)StringLiteral_1/*""*/),
        (UILabel__set_text(nameLabel, v10, 0), (nameLabel = this->fields.infoLabel) == 0)
     || (info ? (v11 = info) : (v11 = (System_String_o *)StringLiteral_1/*""*/),
         UILabel__set_text(nameLabel, v11, 0),
         (nameLabel = this->fields.infoLongLabel) == 0)) )
  {
    sub_1C32E7C(nameLabel);
  }
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( detail )
    WrapControlText__textBBCodeAdjust(this->fields.detailMsgLabel, detail, 22, 0, 0);
  this->fields.isButtonEnable = 0;
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_DetailInfoDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0, 0);
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
  UILabel_o *nameLabel; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x1
  UIWidget_o *detailMsgLabel; // x23
  UILabel_o *v17; // x23
  DetailInfoDialog_c *v18; // x0
  int v19; // w21
  bool activeSelf; // w21
  UILabel_o *v21; // x20
  System_Action_o *v22; // x20

  if ( (byte_4C36EE7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DetailInfoDialog_EndOpen__);
    sub_1C32C20(&DetailInfoDialog_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C36EE7 = 1;
  }
  DetailInfoDialog__SetOverFlowName(this, isCondensedName, (const MethodInfo *)info);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_39;
  v14 = name ? name : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(nameLabel, v14, 0);
  nameLabel = this->fields.infoLabel;
  if ( !nameLabel )
    goto LABEL_39;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.infoLongLabel;
  if ( !nameLabel )
    goto LABEL_39;
  if ( info )
    v15 = info;
  else
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(nameLabel, v15, 0);
  nameLabel = (UILabel_o *)DetailInfoDialog_TypeInfo;
  detailMsgLabel = (UIWidget_o *)this->fields.detailMsgLabel;
  if ( !DetailInfoDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo);
  if ( !detailMsgLabel )
    goto LABEL_39;
  UIWidget__set_height(detailMsgLabel, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0);
  if ( !detail )
    goto LABEL_30;
  v17 = this->fields.detailMsgLabel;
  if ( isSetMinSize )
  {
    v18 = DetailInfoDialog_TypeInfo;
    if ( !DetailInfoDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo);
      v18 = DetailInfoDialog_TypeInfo;
    }
    nameLabel = (UILabel_o *)WrapControlText__textBBCodeAdjust(
                               v17,
                               detail,
                               v18->static_fields->DETAIL_FONT_SIZE,
                               v18->static_fields->DETAIL_FONT_SIZE,
                               0);
    if ( !this->fields.detailMsgLabel )
      goto LABEL_39;
    v19 = (int)nameLabel;
    if ( (int)nameLabel > 1 )
    {
      UILabel__set_alignment(this->fields.detailMsgLabel, 1, 0);
      if ( v19 >= 7 )
      {
        nameLabel = this->fields.detailMsgLabel;
        if ( !nameLabel )
          goto LABEL_39;
        UIWidget__set_height((UIWidget_o *)nameLabel, v19 + nameLabel->fields.mHeight - 3, 0);
      }
      goto LABEL_24;
    }
    nameLabel = this->fields.detailMsgLabel;
  }
  else
  {
    WrapControlText__textBBCodeAdjust(this->fields.detailMsgLabel, detail, 22, 0, 0);
    nameLabel = this->fields.detailMsgLabel;
    if ( !nameLabel )
      goto LABEL_39;
  }
  UILabel__set_alignment(nameLabel, 2, 0);
LABEL_24:
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel )
    goto LABEL_39;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nameLabel, 0);
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
  nameLabel = (UILabel_o *)this->fields.scrollView;
  if ( !nameLabel )
    goto LABEL_39;
  UIScrollView__ResetPosition((UIScrollView_o *)nameLabel, 0);
  nameLabel = this->fields.detailMsgLabel;
  if ( !nameLabel )
    goto LABEL_39;
  UIWidget__ResizeCollider((UIWidget_o *)nameLabel, 0);
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !nameLabel )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, activeSelf, 0);
LABEL_30:
  if ( isCondensedName )
  {
    nameLabel = (UILabel_o *)DetailInfoDialog_TypeInfo;
    v21 = this->fields.nameLabel;
    if ( !DetailInfoDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo);
    if ( v21 )
    {
      UILabel__SetCondensedScale(v21, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_NAME_WIDTH, 0, 0);
      goto LABEL_35;
    }
LABEL_39:
    sub_1C32E7C(nameLabel);
  }
LABEL_35:
  this->fields.isButtonEnable = 0;
  v22 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_DetailInfoDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
}


void DetailInfoDialog__SetOverFlowName(DetailInfoDialog_o *this, bool isCondensedName, const MethodInfo *method)
{
  UnityEngine_Component_o *nameLabel; // x0
  UnityEngine_Transform_o *v6; // x21
  UIWidget_o *v7; // x19

  if ( (byte_4C36EE8 & 1) == 0 )
  {
    sub_1C32C20(&DetailInfoDialog_TypeInfo);
    byte_4C36EE8 = 1;
  }
  nameLabel = (UnityEngine_Component_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  nameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nameLabel, 0);
  v6 = (UnityEngine_Transform_o *)nameLabel;
  if ( !byte_4C313D6 )
  {
    nameLabel = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v6 )
    goto LABEL_14;
  UnityEngine_Transform__set_localScale(v6, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  nameLabel = (UnityEngine_Component_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_14;
  if ( isCondensedName )
  {
    UILabel__set_overflowMethod((UILabel_o *)nameLabel, 2, 0);
    return;
  }
  UILabel__set_overflowMethod((UILabel_o *)nameLabel, 0, 0);
  v7 = (UIWidget_o *)this->fields.nameLabel;
  nameLabel = (UnityEngine_Component_o *)DetailInfoDialog_TypeInfo;
  if ( !DetailInfoDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo);
  if ( !v7 )
LABEL_14:
    sub_1C32E7C(nameLabel);
  UIWidget__set_width(v7, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_NAME_WIDTH, 0);
}


System_String_o *DetailInfoDialog__get_closeBtnPath(DetailInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C36EEA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15640/*"Window/CloseBtn"*/);
    byte_4C36EEA = 1;
  }
  return (System_String_o *)StringLiteral_15640/*"Window/CloseBtn"*/;
}