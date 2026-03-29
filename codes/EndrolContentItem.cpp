void EndrolContentItem___ctor(EndrolContentItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EndrolContentItem__ChangeDisplayItems(EndrolContentItem_o *this, const MethodInfo *method)
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

  if ( (byte_4D2A9C1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A9C1 = 1;
  }
  switch ( this->fields.nowType )
  {
    case 1:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      UISprite__set_spriteName(imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0);
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
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0);
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
      UILabel__set_text((UILabel_o *)imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0);
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
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0);
        v8 = v7->max_length;
      }
LABEL_26:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
LABEL_27:
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0);
      return;
    case 3:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      UISprite__set_spriteName(imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      UILabel__set_text((UILabel_o *)imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0);
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
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0);
        v11 = v10->max_length;
        if ( (int)++v12 >= v11 )
          return;
      }
      goto LABEL_57;
    case 4:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      UISprite__set_spriteName(imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0);
      imgSprite = (UISprite_o *)this->fields.textLabel;
      if ( !imgSprite )
        goto LABEL_56;
      imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0);
      if ( !imgSprite )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0);
      v13 = this->fields.columnTextLabel;
      if ( !v13 )
        goto LABEL_56;
      v14 = v13->max_length;
      if ( v14 < 1 )
        return;
      for ( k = 0; k < v14; ++k )
      {
        if ( k >= (unsigned int)v14 )
LABEL_57:
          sub_1C93D34(imgSprite);
        imgSprite = (UISprite_o *)v13->m_Items[k];
        if ( !imgSprite
          || (imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0)) == 0 )
        {
LABEL_56:
          sub_1C93D2C(imgSprite, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0);
        v14 = v13->max_length;
      }
      return;
    default:
      return;
  }
}


void EndrolContentItem__OnTriggerEnter(
        EndrolContentItem_o *this,
        UnityEngine_Collider_o *coll,
        const MethodInfo *method)
{
  EndrolContentItem_o *v4; // x19
  System_String_o *tag; // x0
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4D2A9BC & 1) == 0 )
  {
    this = (EndrolContentItem_o *)sub_1C93AD4(&StringLiteral_6068/*"Endrol"*/);
    byte_4D2A9BC = 1;
  }
  if ( !coll )
    goto LABEL_9;
  this = (EndrolContentItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coll, 0);
  if ( !this )
    goto LABEL_9;
  tag = UnityEngine_GameObject__get_tag((UnityEngine_GameObject_o *)this, 0);
  if ( System_String__op_Equality(tag, (System_String_o *)StringLiteral_6068/*"Endrol"*/, 0) )
  {
    this = (EndrolContentItem_o *)v4->fields.rootComponent;
    if ( this )
    {
      EndrolRootComponent__ClippingItem((EndrolRootComponent_o *)this, v4, v6);
      return;
    }
LABEL_9:
    sub_1C93D2C(this, coll);
  }
}


void EndrolContentItem__OpenSkipConfirmWindow(EndrolContentItem_o *this, const MethodInfo *method)
{
  EndrolRootComponent_o *rootComponent; // x0

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C93D2C(0, method);
  EndrolRootComponent__OnClickEndrol(rootComponent, method);
}


// local variable allocation has failed, the output may be wrong!
void EndrolContentItem__SetDoubleColumnText(
        EndrolContentItem_o *this,
        int32_t posY,
        System_String_array *txt,
        int32_t fontSize,
        EndrolRootComponent_o *rootComp,
        const MethodInfo *method)
{
  UILabel_o *transform; // x0
  __int64 v12; // x1
  int max_length; // w8
  unsigned int v14; // w24
  struct UILabel_array *columnTextLabel; // x9
  struct UILabel_array *v16; // x8
  struct UILabel_array *v17; // x8
  int32_t v18; // w8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A9BF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A9BF = 1;
  }
  this->fields.nowType = 3;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  if ( !txt )
    goto LABEL_27;
  max_length = txt->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      if ( v14 >= LODWORD(columnTextLabel->max_length) || v14 >= max_length )
LABEL_28:
        sub_1C93D34(transform);
      transform = columnTextLabel->m_Items[v14];
      if ( !transform )
        break;
      UILabel__set_text(transform, txt->m_Items[v14], 0);
      v16 = this->fields.columnTextLabel;
      if ( !v16 )
        break;
      if ( v14 >= LODWORD(v16->max_length) )
        goto LABEL_28;
      transform = v16->m_Items[v14];
      if ( !transform )
        break;
      UIWidget__set_height((UIWidget_o *)transform, fontSize, 0);
      v17 = this->fields.columnTextLabel;
      if ( !v17 )
        break;
      if ( v14 >= LODWORD(v17->max_length) )
        goto LABEL_28;
      transform = v17->m_Items[v14];
      if ( !transform )
        break;
      UILabel__set_fontSize(transform, fontSize, 0);
      max_length = txt->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_17;
    }
LABEL_27:
    sub_1C93D2C(transform, v12);
  }
LABEL_17:
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_27;
  v18 = fontSize >= 0 ? fontSize : fontSize + 1;
  v19.fields.y = (float)(posY - (v18 >> 1));
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v19, 0);
  transform = (UILabel_o *)this->fields.contentItemWidget;
  if ( !transform )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)transform, fontSize, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0, 0) )
  {
    this->fields.rootComponent = rootComp;
    sub_1C93A78(&this->fields.rootComponent, rootComp);
  }
}


// local variable allocation has failed, the output may be wrong!
void EndrolContentItem__SetImage(
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
  int32_t v14; // w1
  int32_t v15; // w1
  struct UISprite_o *v16; // x8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  y = size.fields.y;
  x = size.fields.x;
  if ( (byte_4D2A9BE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A9BE = 1;
  }
  this->fields.nowType = 2;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  imgSprite = (UIWidget_o *)this->fields.imgSprite;
  if ( !imgSprite )
    goto LABEL_20;
  v14 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width(imgSprite, v14, 0);
  imgSprite = (UIWidget_o *)this->fields.imgSprite;
  if ( !imgSprite )
    goto LABEL_20;
  v15 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(imgSprite, v15, 0);
  v16 = this->fields.imgSprite;
  if ( !v16
    || (imgSprite = this->fields.contentItemWidget) == 0
    || (UIWidget__set_height(imgSprite, v16->fields.mHeight, 0), (imgSprite = (UIWidget_o *)this->fields.imgSprite) == 0)
    || (UISprite__set_spriteName((UISprite_o *)imgSprite, spName, 0),
        (imgSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_20:
    sub_1C93D2C(imgSprite, v12);
  }
  v17.fields.y = (float)posY + (float)(y * -0.5);
  v17.fields.x = 0.0;
  v17.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)imgSprite, v17, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)root, 0, 0) )
  {
    this->fields.rootComponent = root;
    sub_1C93A78(&this->fields.rootComponent, root);
  }
}


// local variable allocation has failed, the output may be wrong!
void EndrolContentItem__SetText(
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
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A9BD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A9BD = 1;
  }
  this->fields.nowType = 1;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  UILabel__set_text(textLabel, txt, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0);
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !textLabel )
    goto LABEL_17;
  v15 = fontSize >= 0 ? fontSize : fontSize + 1;
  v16.fields.y = (float)(posY - (v15 >> 1));
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v16, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel
    || (UILabel__set_fontSize(textLabel, fontSize, 0), (textLabel = (UILabel_o *)this->fields.contentItemWidget) == 0)
    || (UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0), (textLabel = this->fields.textLabel) == 0) )
  {
LABEL_17:
    sub_1C93D2C(textLabel, v13);
  }
  UIWidget__set_pivot((UIWidget_o *)textLabel, pivot, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0, 0) )
  {
    this->fields.rootComponent = rootComp;
    sub_1C93A78(&this->fields.rootComponent, rootComp);
  }
}


// local variable allocation has failed, the output may be wrong!
void EndrolContentItem__SetTripleColumnText(
        EndrolContentItem_o *this,
        int32_t posY,
        System_String_array *txt,
        int32_t fontSize,
        EndrolRootComponent_o *rootComp,
        const MethodInfo *method)
{
  _DWORD *textLabel; // x0
  __int64 v12; // x1
  _DWORD *v13; // x24
  System_String_o *v14; // x1
  System_String_o *v15; // x1
  __int64 v16; // x8
  __int64 v17; // x25
  struct UILabel_array *columnTextLabel; // x9
  unsigned int v19; // w26
  struct UILabel_array *v20; // x8
  struct UILabel_array *v21; // x8
  int32_t v22; // w8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A9C0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    byte_4D2A9C0 = 1;
  }
  this->fields.nowType = 4;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = (_DWORD *)sub_1C93B7C(string___TypeInfo, 2);
  if ( !txt )
    goto LABEL_36;
  if ( !LODWORD(txt->max_length) )
    goto LABEL_37;
  v13 = textLabel;
  if ( !textLabel )
    goto LABEL_36;
  if ( !textLabel[6] )
    goto LABEL_37;
  v14 = txt->m_Items[0];
  *((_QWORD *)textLabel + 4) = v14;
  textLabel = (_DWORD *)sub_1C93A78(textLabel + 8, v14);
  if ( LODWORD(txt->max_length) <= 2 || v13[6] <= 1u )
    goto LABEL_37;
  v15 = txt->m_Items[2];
  *((_QWORD *)v13 + 5) = v15;
  textLabel = (_DWORD *)sub_1C93A78(v13 + 10, v15);
  v16 = *((_QWORD *)v13 + 3);
  if ( (int)v16 >= 1 )
  {
    v17 = 4;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      v19 = v17 - 4;
      if ( (unsigned int)(v17 - 4) >= LODWORD(columnTextLabel->max_length) || v19 >= (unsigned int)v16 )
        goto LABEL_37;
      textLabel = (_DWORD *)*((_QWORD *)&columnTextLabel->obj.klass + v17);
      if ( !textLabel )
        break;
      UILabel__set_text((UILabel_o *)textLabel, *(System_String_o **)&v13[2 * v17], 0);
      v20 = this->fields.columnTextLabel;
      if ( !v20 )
        break;
      if ( v19 >= LODWORD(v20->max_length) )
        goto LABEL_37;
      textLabel = (_DWORD *)*((_QWORD *)&v20->obj.klass + v17);
      if ( !textLabel )
        break;
      UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0);
      v21 = this->fields.columnTextLabel;
      if ( !v21 )
        break;
      if ( v19 >= LODWORD(v21->max_length) )
        goto LABEL_37;
      textLabel = (_DWORD *)*((_QWORD *)&v21->obj.klass + v17);
      if ( !textLabel )
        break;
      UILabel__set_fontSize((UILabel_o *)textLabel, fontSize, 0);
      v16 = *((_QWORD *)v13 + 3);
      if ( (int)++v17 - 4 >= (int)v16 )
        goto LABEL_22;
    }
LABEL_36:
    sub_1C93D2C(textLabel, v12);
  }
LABEL_22:
  if ( LODWORD(txt->max_length) <= 1 )
LABEL_37:
    sub_1C93D34(textLabel);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)textLabel, txt->m_Items[1], 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UILabel__set_fontSize((UILabel_o *)textLabel, fontSize, 0);
  textLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !textLabel )
    goto LABEL_36;
  v22 = fontSize >= 0 ? fontSize : fontSize + 1;
  v23.fields.y = (float)(posY - (v22 >> 1));
  v23.fields.x = 0.0;
  v23.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v23, 0);
  textLabel = this->fields.contentItemWidget;
  if ( !textLabel )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0, 0) )
  {
    this->fields.rootComponent = rootComp;
    sub_1C93A78(&this->fields.rootComponent, rootComp);
  }
}


int32_t EndrolContentItem__get_contentHeight(EndrolContentItem_o *this, const MethodInfo *method)
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
      sub_1C93D2C(this, method);
  }
  return imgSprite[43];
}