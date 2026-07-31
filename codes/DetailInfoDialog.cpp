void DetailInfoDialog___cctor(const MethodInfo *method)
{
  struct DetailInfoDialog_StaticFields *static_fields; // x8

  if ( (byte_5937A32 & 1) == 0 )
  {
    sub_21FFC50(&DetailInfoDialog_TypeInfo);
    byte_5937A32 = 1;
  }
  static_fields = DetailInfoDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_LABEL_HEIGHT = 0x18100000082LL;
  static_fields->DETAIL_FONT_SIZE = 20;
}


void DetailInfoDialog___ctor(DetailInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5937A31 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5937A31 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x2
  UnityEngine_Object_o *infoLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *detailMsgLabel; // x20

  if ( (byte_5937A2B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A2B = 1;
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
  v6 = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_23;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  infoLabel = (UnityEngine_Object_o *)this->fields.infoLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
  if ( UnityEngine_Object__op_Inequality(infoLabel, 0, 0) )
  {
    nameLabel = this->fields.infoLabel;
    if ( !nameLabel )
      goto LABEL_23;
    UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  detailMsgLabel = (UnityEngine_Object_o *)this->fields.detailMsgLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v9);
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
    sub_21FFECC(nameLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DetailInfoDialog__OnClickClose(DetailInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_5937A2F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DetailInfoDialog_EndClose__);
    sub_21FFC50(&Method_DetailInfoDialog_OnClickClose__);
    byte_5937A2F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_DetailInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_DetailInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_DetailInfoDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.isButtonEnable = 0;
    v6 = (System_Action_o *)sub_21FFEBC(v5);
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

  if ( (byte_5937A2C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DetailInfoDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A2C = 1;
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
    sub_21FFECC(nameLabel, v9);
  }
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( detail )
    WrapControlText__textBBCodeAdjust(this->fields.detailMsgLabel, detail, 22, 0, 0);
  v13 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v14 = (System_Action_o *)sub_21FFEBC(v13);
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
  __int64 v17; // x2
  UIWidget_o *detailMsgLabel; // x23
  __int64 v19; // x2
  UILabel_o *v20; // x23
  DetailInfoDialog_c *v21; // x0
  int32_t v22; // w21
  bool activeSelf; // w21
  UILabel_o *v24; // x20
  System_Action_o *v25; // x20

  if ( (byte_5937A2D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DetailInfoDialog_EndOpen__);
    sub_21FFC50(&DetailInfoDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A2D = 1;
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
    j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, v13, v17);
  if ( !detailMsgLabel )
    goto LABEL_40;
  UIWidget__set_height(detailMsgLabel, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0);
  if ( !detail )
    goto LABEL_30;
  v20 = this->fields.detailMsgLabel;
  if ( isSetMinSize )
  {
    v21 = DetailInfoDialog_TypeInfo;
    if ( !*(&DetailInfoDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, v13, v19);
      v21 = DetailInfoDialog_TypeInfo;
    }
    v22 = WrapControlText__textBBCodeAdjust(
            v20,
            detail,
            v21->static_fields->DETAIL_FONT_SIZE,
            v21->static_fields->DETAIL_FONT_SIZE,
            0);
    nameLabel = this->fields.detailMsgLabel;
    if ( v22 >= 2 )
    {
      if ( !nameLabel )
        goto LABEL_40;
      UILabel__set_alignment(nameLabel, 1, 0);
      if ( (unsigned int)v22 >= 7 )
      {
        nameLabel = this->fields.detailMsgLabel;
        if ( !nameLabel )
          goto LABEL_40;
        UIWidget__set_height((UIWidget_o *)nameLabel, v22 + nameLabel->fields.mHeight - 3, 0);
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
    v24 = this->fields.nameLabel;
    if ( !*(&DetailInfoDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, v13, v19);
    if ( v24 )
    {
      UILabel__SetCondensedScale(v24, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_NAME_WIDTH, 0, 0);
      goto LABEL_35;
    }
LABEL_40:
    sub_21FFECC(nameLabel, v13);
  }
LABEL_35:
  this->fields.isButtonEnable = 0;
  v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_DetailInfoDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void DetailInfoDialog__SetOverFlowName(DetailInfoDialog_o *this, bool isCondensedName, const MethodInfo *method)
{
  UnityEngine_Component_o *nameLabel; // x0
  UnityEngine_Transform_o *v6; // x21
  __int64 v7; // x2
  UIWidget_o *v8; // x19

  if ( (byte_5937A2E & 1) == 0 )
  {
    sub_21FFC50(&DetailInfoDialog_TypeInfo);
    byte_5937A2E = 1;
  }
  nameLabel = (UnityEngine_Component_o *)this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_15;
  nameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nameLabel, 0);
  v6 = (UnityEngine_Transform_o *)nameLabel;
  if ( !byte_5931945 )
  {
    nameLabel = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
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
    sub_21FFECC(nameLabel, isCondensedName);
  }
  if ( !nameLabel )
    goto LABEL_15;
  UILabel__set_overflowMethod((UILabel_o *)nameLabel, 0, 0);
  v8 = (UIWidget_o *)this->fields.nameLabel;
  nameLabel = (UnityEngine_Component_o *)DetailInfoDialog_TypeInfo;
  if ( !*(&DetailInfoDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DetailInfoDialog_TypeInfo, isCondensedName, v7);
  if ( !v8 )
    goto LABEL_15;
  UIWidget__set_width(v8, DetailInfoDialog_TypeInfo->static_fields->DEFAULT_NAME_WIDTH, 0);
}


System_String_o *DetailInfoDialog__get_closeBtnPath(DetailInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5937A30 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16228/*"Window/CloseBtn"*/);
    byte_5937A30 = 1;
  }
  return (System_String_o *)StringLiteral_16228/*"Window/CloseBtn"*/;
}