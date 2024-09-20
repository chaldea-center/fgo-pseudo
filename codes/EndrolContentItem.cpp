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

  if ( (byte_4A5EDE0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EDE0 = 1;
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
LABEL_57:
          sub_1B88814(imgSprite, method);
        imgSprite = (UISprite_o *)v13->m_Items[k];
        if ( !imgSprite
          || (imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL)) == 0LL )
        {
LABEL_56:
          sub_1B8880C(imgSprite, method);
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
  if ( (byte_4A5EDDB & 1) == 0 )
  {
    this = (EndrolContentItem_o *)sub_1B885B0(&StringLiteral_6003/*"Endrol"*/);
    byte_4A5EDDB = 1;
  }
  if ( !coll )
    goto LABEL_9;
  this = (EndrolContentItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coll, 0LL);
  if ( !this )
    goto LABEL_9;
  tag = UnityEngine_GameObject__get_tag((UnityEngine_GameObject_o *)this, 0LL);
  if ( System_String__op_Equality(tag, (System_String_o *)StringLiteral_6003/*"Endrol"*/, 0LL) )
  {
    this = (EndrolContentItem_o *)v4->fields.rootComponent;
    if ( this )
    {
      EndrolRootComponent__ClippingItem((EndrolRootComponent_o *)this, v4, v6);
      return;
    }
LABEL_9:
    sub_1B8880C(this, coll);
  }
}


void __fastcall EndrolContentItem__OpenSkipConfirmWindow(EndrolContentItem_o *this, const MethodInfo *method)
{
  EndrolRootComponent_o *rootComponent; // x0

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1B8880C(0LL, method);
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
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EDDE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDDE = 1;
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
      if ( v14 >= columnTextLabel->max_length || v14 >= max_length )
LABEL_28:
        sub_1B88814(transform, v12);
      transform = columnTextLabel->m_Items[v14];
      if ( !transform )
        break;
      UILabel__set_text(transform, txt->m_Items[v14], 0LL);
      v16 = this->fields.columnTextLabel;
      if ( !v16 )
        break;
      if ( v14 >= v16->max_length )
        goto LABEL_28;
      transform = v16->m_Items[v14];
      if ( !transform )
        break;
      UIWidget__set_height((UIWidget_o *)transform, fontSize, 0LL);
      v17 = this->fields.columnTextLabel;
      if ( !v17 )
        break;
      if ( v14 >= v17->max_length )
        goto LABEL_28;
      transform = v17->m_Items[v14];
      if ( !transform )
        break;
      UILabel__set_fontSize(transform, fontSize, 0LL);
      max_length = txt->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_17;
    }
LABEL_27:
    sub_1B8880C(transform, v12);
  }
LABEL_17:
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_27;
  v18 = fontSize >= 0 ? fontSize : fontSize + 1;
  v21.fields.y = (float)(posY - (v18 >> 1));
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v21, 0LL);
  transform = (UILabel_o *)this->fields.contentItemWidget;
  if ( !transform )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)transform, fontSize, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rootComponent, (int32_t)rootComp, v19, v20);
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
  int32_t v14; // w1
  int32_t v15; // w1
  struct UISprite_o *v16; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  y = size.fields.y;
  x = size.fields.x;
  if ( (byte_4A5EDDD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDDD = 1;
  }
  this->fields.nowType = 2;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  imgSprite = (UIWidget_o *)this->fields.imgSprite;
  if ( !imgSprite )
    goto LABEL_20;
  v14 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width(imgSprite, v14, 0LL);
  imgSprite = (UIWidget_o *)this->fields.imgSprite;
  if ( !imgSprite )
    goto LABEL_20;
  v15 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(imgSprite, v15, 0LL);
  v16 = this->fields.imgSprite;
  if ( !v16
    || (imgSprite = this->fields.contentItemWidget) == 0LL
    || (UIWidget__set_height(imgSprite, v16->fields.mHeight, 0LL),
        (imgSprite = (UIWidget_o *)this->fields.imgSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)imgSprite, spName, 0LL),
        (imgSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_20:
    sub_1B8880C(imgSprite, v12);
  }
  v19.fields.y = (float)posY + (float)(y * -0.5);
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)imgSprite, v19, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)root, 0LL, 0LL) )
  {
    this->fields.rootComponent = root;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rootComponent, (int32_t)root, v17, v18);
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
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EDDC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDDC = 1;
  }
  this->fields.nowType = 1;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  UILabel__set_text(textLabel, txt, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
  textLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !textLabel )
    goto LABEL_17;
  v15 = fontSize >= 0 ? fontSize : fontSize + 1;
  v18.fields.y = (float)(posY - (v15 >> 1));
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v18, 0LL);
  textLabel = this->fields.textLabel;
  if ( !textLabel
    || (UILabel__set_fontSize(textLabel, fontSize, 0LL), (textLabel = (UILabel_o *)this->fields.contentItemWidget) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL), (textLabel = this->fields.textLabel) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(textLabel, v13);
  }
  UIWidget__set_pivot((UIWidget_o *)textLabel, pivot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rootComponent, (int32_t)rootComp, v16, v17);
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
  char *textLabel; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  char *v15; // x24
  System_String_o *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x1
  __int64 v20; // x8
  __int64 v21; // x25
  struct UILabel_array *columnTextLabel; // x9
  unsigned int v23; // w26
  struct UILabel_array *v24; // x8
  struct UILabel_array *v25; // x8
  int32_t v26; // w8
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EDDF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5EDDF = 1;
  }
  this->fields.nowType = 4;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = (char *)sub_1B88658(string___TypeInfo, 2LL);
  if ( !txt )
    goto LABEL_36;
  if ( !txt->max_length )
    goto LABEL_37;
  v15 = textLabel;
  if ( !textLabel )
    goto LABEL_36;
  if ( !*((_DWORD *)textLabel + 6) )
    goto LABEL_37;
  v16 = txt->m_Items[0];
  *((_QWORD *)textLabel + 4) = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(textLabel + 32), (int32_t)v16, v13, v14);
  if ( txt->max_length <= 2 || *((_DWORD *)v15 + 6) <= 1u )
    goto LABEL_37;
  v19 = txt->m_Items[2];
  *((_QWORD *)v15 + 5) = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 40), (int32_t)v19, v17, v18);
  v20 = *((_QWORD *)v15 + 3);
  if ( (int)v20 >= 1 )
  {
    v21 = 4LL;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      v23 = v21 - 4;
      if ( (unsigned int)(v21 - 4) >= columnTextLabel->max_length || v23 >= (unsigned int)v20 )
        goto LABEL_37;
      textLabel = (char *)*((_QWORD *)&columnTextLabel->obj.klass + v21);
      if ( !textLabel )
        break;
      UILabel__set_text((UILabel_o *)textLabel, *(System_String_o **)&v15[8 * v21], 0LL);
      v24 = this->fields.columnTextLabel;
      if ( !v24 )
        break;
      if ( v23 >= v24->max_length )
        goto LABEL_37;
      textLabel = (char *)*((_QWORD *)&v24->obj.klass + v21);
      if ( !textLabel )
        break;
      UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
      v25 = this->fields.columnTextLabel;
      if ( !v25 )
        break;
      if ( v23 >= v25->max_length )
        goto LABEL_37;
      textLabel = (char *)*((_QWORD *)&v25->obj.klass + v21);
      if ( !textLabel )
        break;
      UILabel__set_fontSize((UILabel_o *)textLabel, fontSize, 0LL);
      v20 = *((_QWORD *)v15 + 3);
      if ( (int)++v21 - 4 >= (int)v20 )
        goto LABEL_22;
    }
LABEL_36:
    sub_1B8880C(textLabel, v12);
  }
LABEL_22:
  if ( txt->max_length <= 1 )
LABEL_37:
    sub_1B88814(textLabel, v12);
  textLabel = (char *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)textLabel, txt->m_Items[1], 0LL);
  textLabel = (char *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
  textLabel = (char *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UILabel__set_fontSize((UILabel_o *)textLabel, fontSize, 0LL);
  textLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !textLabel )
    goto LABEL_36;
  v26 = fontSize >= 0 ? fontSize : fontSize + 1;
  v29.fields.y = (float)(posY - (v26 >> 1));
  v29.fields.x = 0.0;
  v29.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v29, 0LL);
  textLabel = (char *)this->fields.contentItemWidget;
  if ( !textLabel )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rootComponent, (int32_t)rootComp, v27, v28);
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
      sub_1B8880C(this, method);
  }
  return imgSprite[43];
}