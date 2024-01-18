void __fastcall EndrolContentItem___ctor(EndrolContentItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EndrolContentItem__ChangeDisplayItems(EndrolContentItem_o *this, const MethodInfo *method)
{
  UISprite_o *imgSprite; // x0
  struct UILabel_array *columnTextLabel; // x20
  int max_length; // w8
  int i; // w21
  struct UILabel_array *v7; // x20
  int v8; // w8
  int j; // w21
  struct UILabel_array *v10; // x19
  int v11; // w8
  unsigned int v12; // w20
  struct UILabel_array *v13; // x19
  int v14; // w8
  int k; // w20
  __int64 v16; // x0

  if ( (byte_418BD7A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418BD7A = 1;
  }
  switch ( this->fields.nowType )
  {
    case 1:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      UISprite__set_spriteName(imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        goto LABEL_56;
      max_length = columnTextLabel->max_length;
      if ( max_length < 1 )
        goto LABEL_14;
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          goto LABEL_57;
        imgSprite = (UISprite_o *)columnTextLabel->m_Items[i];
        if ( !imgSprite )
          goto LABEL_56;
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
        max_length = columnTextLabel->max_length;
      }
LABEL_14:
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      goto LABEL_27;
    case 2:
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      UILabel__set_text((UILabel_o *)imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
      v7 = this->fields.columnTextLabel;
      if ( !v7 )
        goto LABEL_56;
      v8 = v7->max_length;
      if ( v8 < 1 )
        goto LABEL_26;
      for ( j = 0; j < v8; ++j )
      {
        if ( j >= (unsigned int)v8 )
          goto LABEL_57;
        imgSprite = (UISprite_o *)v7->m_Items[j];
        if ( !imgSprite )
          goto LABEL_56;
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
        v8 = v7->max_length;
      }
LABEL_26:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
LABEL_27:
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0LL);
      return;
    case 3:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      UISprite__set_spriteName(imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      UILabel__set_text((UILabel_o *)imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
      v10 = this->fields.columnTextLabel;
      if ( !v10 )
        goto LABEL_56;
      v11 = v10->max_length;
      if ( v11 < 1 )
        return;
      v12 = 0;
      while ( v12 < v11 )
      {
        imgSprite = (UISprite_o *)v10->m_Items[v12];
        if ( !imgSprite )
          goto LABEL_56;
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0LL);
        v11 = v10->max_length;
        if ( (int)++v12 >= v11 )
          return;
      }
      goto LABEL_57;
    case 4:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      UISprite__set_spriteName(imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0LL);
      v13 = this->fields.columnTextLabel;
      if ( !v13 )
        goto LABEL_56;
      v14 = v13->max_length;
      if ( v14 < 1 )
        return;
      for ( k = 0; k < v14; ++k )
      {
        if ( k >= (unsigned int)v14 )
        {
LABEL_57:
          v16 = sub_B2C460(imgSprite);
          sub_B2C400(v16, 0LL);
        }
        imgSprite = (UISprite_o *)v13->m_Items[k];
        if ( !imgSprite
          || (imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL)) == 0LL )
        {
LABEL_56:
          sub_B2C434(imgSprite, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0LL);
        v14 = v13->max_length;
      }
      return;
    default:
      return;
  }
}


void __fastcall EndrolContentItem__OnTriggerEnter(
        EndrolContentItem_o *this,
        UnityEngine_Collider_o *coll,
        const MethodInfo *method)
{
  EndrolContentItem_o *v4; // x19
  System_String_o *tag; // x0
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_418BD75 & 1) == 0 )
  {
    this = (EndrolContentItem_o *)sub_B2C35C(&StringLiteral_5990/*"Endrol"*/, coll);
    byte_418BD75 = 1;
  }
  if ( !coll )
    goto LABEL_9;
  this = (EndrolContentItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coll, 0LL);
  if ( !this )
    goto LABEL_9;
  tag = UnityEngine_GameObject__get_tag((UnityEngine_GameObject_o *)this, 0LL);
  if ( System_String__op_Equality(tag, (System_String_o *)StringLiteral_5990/*"Endrol"*/, 0LL) )
  {
    this = (EndrolContentItem_o *)v4->fields.rootComponent;
    if ( this )
    {
      EndrolRootComponent__ClippingItem((EndrolRootComponent_o *)this, v4, v6);
      return;
    }
LABEL_9:
    sub_B2C434(this, coll);
  }
}


void __fastcall EndrolContentItem__OpenSkipConfirmWindow(EndrolContentItem_o *this, const MethodInfo *method)
{
  EndrolRootComponent_o *rootComponent; // x0

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_B2C434(0LL, method);
  EndrolRootComponent__OnClickEndrol(rootComponent, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolContentItem__SetDoubleColumnText(
        EndrolContentItem_o *this,
        int32_t posY,
        System_String_array *txt,
        int32_t fontSize,
        EndrolRootComponent_o *rootComp,
        const MethodInfo *method)
{
  UILabel_o *transform; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v14; // w24
  struct UILabel_array *columnTextLabel; // x9
  struct UILabel_array *v16; // x8
  struct UILabel_array *v17; // x8
  int32_t v18; // w8
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BD78 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    byte_418BD78 = 1;
  }
  this->fields.nowType = 3;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  if ( !txt )
    goto LABEL_28;
  max_length = txt->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      if ( v14 >= columnTextLabel->max_length || v14 >= max_length )
      {
LABEL_29:
        v25 = sub_B2C460(transform);
        sub_B2C400(v25, 0LL);
      }
      transform = columnTextLabel->m_Items[v14];
      if ( !transform )
        break;
      UILabel__set_text(transform, txt->m_Items[v14], 0LL);
      v16 = this->fields.columnTextLabel;
      if ( !v16 )
        break;
      if ( v14 >= v16->max_length )
        goto LABEL_29;
      transform = v16->m_Items[v14];
      if ( !transform )
        break;
      UIWidget__set_height((UIWidget_o *)transform, fontSize, 0LL);
      v17 = this->fields.columnTextLabel;
      if ( !v17 )
        break;
      if ( v14 >= v17->max_length )
        goto LABEL_29;
      transform = v17->m_Items[v14];
      if ( !transform )
        break;
      UILabel__set_fontSize(transform, fontSize, 0LL);
      max_length = txt->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_17;
    }
LABEL_28:
    sub_B2C434(transform, v12);
  }
LABEL_17:
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  v18 = fontSize >= 0 ? fontSize : fontSize + 1;
  v26.fields.y = (float)(posY - (v18 >> 1));
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0LL);
  transform = (UILabel_o *)this->fields.contentItemWidget;
  if ( !transform )
    goto LABEL_28;
  UIWidget__set_height((UIWidget_o *)transform, fontSize, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)rootComp,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolContentItem__SetImage(
        EndrolContentItem_o *this,
        int32_t posY,
        System_String_o *spName,
        UnityEngine_Vector2_o size,
        EndrolRootComponent_o *root,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v12; // x1
  UIWidget_o *imgSprite; // x0
  double v14; // d0
  double v15; // d0
  struct UISprite_o *v16; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  y = size.fields.y;
  x = size.fields.x;
  if ( (byte_418BD77 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    byte_418BD77 = 1;
  }
  this->fields.nowType = 2;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  imgSprite = (UIWidget_o *)this->fields.imgSprite;
  if ( !imgSprite )
    goto LABEL_19;
  v14 = x;
  if ( x == INFINITY )
    v14 = -x;
  UIWidget__set_width(imgSprite, (int)v14, 0LL);
  imgSprite = (UIWidget_o *)this->fields.imgSprite;
  if ( !imgSprite )
    goto LABEL_19;
  v15 = y;
  if ( y == INFINITY )
    v15 = -INFINITY;
  UIWidget__set_height(imgSprite, (int)v15, 0LL);
  v16 = this->fields.imgSprite;
  if ( !v16
    || (imgSprite = this->fields.contentItemWidget) == 0LL
    || (UIWidget__set_height(imgSprite, v16->fields.mHeight, 0LL),
        (imgSprite = (UIWidget_o *)this->fields.imgSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)imgSprite, spName, 0LL),
        (imgSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_B2C434(imgSprite, v12);
  }
  v23.fields.y = (float)posY + (float)(y * -0.5);
  v23.fields.x = 0.0;
  v23.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)imgSprite, v23, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)root, 0LL, 0LL) )
  {
    this->fields.rootComponent = root;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)root,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolContentItem__SetText(
        EndrolContentItem_o *this,
        int32_t posY,
        System_String_o *txt,
        int32_t fontSize,
        int32_t pivot,
        EndrolRootComponent_o *rootComp,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *textLabel; // x0
  int32_t v15; // w8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BD76 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    byte_418BD76 = 1;
  }
  this->fields.nowType = 1;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_18;
  UILabel__set_text(textLabel, txt, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_18;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !textLabel )
    goto LABEL_18;
  v15 = fontSize >= 0 ? fontSize : fontSize + 1;
  v22.fields.y = (float)(posY - (v15 >> 1));
  v22.fields.x = 0.0;
  v22.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v22, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel
    || (UILabel__set_fontSize(textLabel, fontSize, 0LL), (textLabel = (UILabel_o *)this->fields.contentItemWidget) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL), (textLabel = this->fields.textLabel) == 0LL) )
  {
LABEL_18:
    sub_B2C434(textLabel, v13);
  }
  UIWidget__set_pivot((UIWidget_o *)textLabel, pivot, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)rootComp,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolContentItem__SetTripleColumnText(
        EndrolContentItem_o *this,
        int32_t posY,
        System_String_array *txt,
        int32_t fontSize,
        EndrolRootComponent_o *rootComp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UILabel_o *textLabel; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UILabel_o *v20; // x24
  System_Int32_array **v21; // x25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x25
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  __int64 v30; // x25
  struct UILabel_array *columnTextLabel; // x9
  unsigned int v32; // w26
  struct UILabel_array *v33; // x8
  struct UILabel_array *v34; // x8
  int32_t v35; // w8
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0
  __int64 v43; // x0
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BD79 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    sub_B2C35C(&string___TypeInfo, v11);
    byte_418BD79 = 1;
  }
  this->fields.nowType = 4;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = (UILabel_o *)sub_B2C374(string___TypeInfo, 2LL);
  if ( !txt )
    goto LABEL_41;
  if ( !txt->max_length )
    goto LABEL_42;
  v20 = textLabel;
  if ( !textLabel )
    goto LABEL_41;
  v21 = (System_Int32_array **)txt->m_Items[0];
  if ( v21 )
  {
    textLabel = (UILabel_o *)sub_B2C41C(txt->m_Items[0], textLabel->klass->_1.element_class);
    if ( !textLabel )
      goto LABEL_43;
  }
  if ( !LODWORD(v20->fields.leftAnchor) )
    goto LABEL_42;
  v20->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v21;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->fields.rightAnchor, v21, v14, v15, v16, v17, v18, v19);
  if ( txt->max_length <= 2 )
    goto LABEL_42;
  v28 = (System_Int32_array **)txt->m_Items[2];
  if ( v28 )
  {
    textLabel = (UILabel_o *)sub_B2C41C(txt->m_Items[2], v20->klass->_1.element_class);
    if ( !textLabel )
    {
LABEL_43:
      v43 = sub_B2C454(textLabel);
      sub_B2C400(v43, 0LL);
    }
  }
  if ( LODWORD(v20->fields.leftAnchor) <= 1 )
    goto LABEL_42;
  v20->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v28;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->fields.bottomAnchor, v28, v22, v23, v24, v25, v26, v27);
  leftAnchor = v20->fields.leftAnchor;
  if ( (int)leftAnchor >= 1 )
  {
    v30 = 4LL;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      v32 = v30 - 4;
      if ( (unsigned int)(v30 - 4) >= columnTextLabel->max_length || v32 >= (unsigned int)leftAnchor )
        goto LABEL_42;
      textLabel = (UILabel_o *)*((_QWORD *)&columnTextLabel->obj.klass + v30);
      if ( !textLabel )
        break;
      UILabel__set_text(textLabel, *((System_String_o **)&v20->klass + v30), 0LL);
      v33 = this->fields.columnTextLabel;
      if ( !v33 )
        break;
      if ( v32 >= v33->max_length )
        goto LABEL_42;
      textLabel = (UILabel_o *)*((_QWORD *)&v33->obj.klass + v30);
      if ( !textLabel )
        break;
      UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
      v34 = this->fields.columnTextLabel;
      if ( !v34 )
        break;
      if ( v32 >= v34->max_length )
        goto LABEL_42;
      textLabel = (UILabel_o *)*((_QWORD *)&v34->obj.klass + v30);
      if ( !textLabel )
        break;
      UILabel__set_fontSize(textLabel, fontSize, 0LL);
      leftAnchor = v20->fields.leftAnchor;
      if ( (int)++v30 - 4 >= (int)leftAnchor )
        goto LABEL_26;
    }
LABEL_41:
    sub_B2C434(textLabel, v13);
  }
LABEL_26:
  if ( txt->max_length <= 1 )
  {
LABEL_42:
    v42 = sub_B2C460(textLabel);
    sub_B2C400(v42, 0LL);
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_41;
  UILabel__set_text(textLabel, txt->m_Items[1], 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_41;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_41;
  UILabel__set_fontSize(textLabel, fontSize, 0LL);
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !textLabel )
    goto LABEL_41;
  v35 = fontSize >= 0 ? fontSize : fontSize + 1;
  v44.fields.y = (float)(posY - (v35 >> 1));
  v44.fields.x = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v44, 0LL);
  textLabel = (UILabel_o *)this->fields.contentItemWidget;
  if ( !textLabel )
    goto LABEL_41;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)rootComp,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
}


int32_t __fastcall EndrolContentItem__get_contentHeight(EndrolContentItem_o *this, const MethodInfo *method)
{
  _DWORD *imgSprite; // x8

  if ( this->fields.nowType == 2 )
  {
    imgSprite = this->fields.imgSprite;
    if ( !imgSprite )
      goto LABEL_3;
  }
  else
  {
    imgSprite = this->fields.contentItemWidget;
    if ( !imgSprite )
LABEL_3:
      sub_B2C434(this, method);
  }
  return imgSprite[41];
}