void __fastcall EndrolContentItem___ctor(EndrolContentItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EndrolContentItem__ChangeDisplayItems(EndrolContentItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UISprite_o *imgSprite; // x0
  struct UILabel_array *columnTextLabel; // x20
  int max_length; // w8
  int i; // w21
  struct UILabel_array *v9; // x20
  int v10; // w8
  int j; // w21
  struct UILabel_array *v12; // x19
  int v13; // w8
  unsigned int v14; // w20
  struct UILabel_array *v15; // x19
  int v16; // w8
  int k; // w20
  __int64 v18; // x0

  if ( (byte_42ECFE2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42ECFE2 = 1;
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
      v9 = this->fields.columnTextLabel;
      if ( !v9 )
        goto LABEL_56;
      v10 = v9->max_length;
      if ( v10 < 1 )
        goto LABEL_26;
      for ( j = 0; j < v10; ++j )
      {
        if ( j >= (unsigned int)v10 )
          goto LABEL_57;
        imgSprite = (UISprite_o *)v9->m_Items[j];
        if ( !imgSprite )
          goto LABEL_56;
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 0, 0LL);
        v10 = v9->max_length;
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
      v12 = this->fields.columnTextLabel;
      if ( !v12 )
        goto LABEL_56;
      v13 = v12->max_length;
      if ( v13 < 1 )
        return;
      v14 = 0;
      while ( v14 < v13 )
      {
        imgSprite = (UISprite_o *)v12->m_Items[v14];
        if ( !imgSprite )
          goto LABEL_56;
        imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL);
        if ( !imgSprite )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0LL);
        v13 = v12->max_length;
        if ( (int)++v14 >= v13 )
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
      v15 = this->fields.columnTextLabel;
      if ( !v15 )
        goto LABEL_56;
      v16 = v15->max_length;
      if ( v16 < 1 )
        return;
      for ( k = 0; k < v16; ++k )
      {
        if ( k >= (unsigned int)v16 )
        {
LABEL_57:
          v18 = sub_B5D6C8(imgSprite);
          sub_B5D668(v18, 0LL);
        }
        imgSprite = (UISprite_o *)v15->m_Items[k];
        if ( !imgSprite
          || (imgSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)imgSprite, 0LL)) == 0LL )
        {
LABEL_56:
          sub_B5D69C(imgSprite, method);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)imgSprite, 1, 0LL);
        v16 = v15->max_length;
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
  __int64 v3; // x3
  EndrolContentItem_o *v5; // x19
  System_String_o *tag; // x0
  const MethodInfo *v7; // x2

  v5 = this;
  if ( (byte_42ECFDD & 1) == 0 )
  {
    this = (EndrolContentItem_o *)sub_B5D5C4(&StringLiteral_6069/*"Endrol"*/, (_DWORD)coll, (_DWORD)method, v3);
    byte_42ECFDD = 1;
  }
  if ( !coll )
    goto LABEL_9;
  this = (EndrolContentItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coll, 0LL);
  if ( !this )
    goto LABEL_9;
  tag = UnityEngine_GameObject__get_tag((UnityEngine_GameObject_o *)this, 0LL);
  if ( System_String__op_Equality(tag, (System_String_o *)StringLiteral_6069/*"Endrol"*/, 0LL) )
  {
    this = (EndrolContentItem_o *)v5->fields.rootComponent;
    if ( this )
    {
      EndrolRootComponent__ClippingItem((EndrolRootComponent_o *)this, v5, v7);
      return;
    }
LABEL_9:
    sub_B5D69C(this, coll);
  }
}


void __fastcall EndrolContentItem__OpenSkipConfirmWindow(EndrolContentItem_o *this, const MethodInfo *method)
{
  EndrolRootComponent_o *rootComponent; // x0

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_B5D69C(0LL, method);
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

  if ( (byte_42ECFE0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, posY, (_DWORD)txt, *(_QWORD *)&fontSize);
    byte_42ECFE0 = 1;
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
        v25 = sub_B5D6C8(transform);
        sub_B5D668(v25, 0LL);
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
    sub_B5D69C(transform, v12);
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
    sub_B5D560(
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
  if ( (byte_42ECFDF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, posY, (_DWORD)spName, root);
    byte_42ECFDF = 1;
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
    sub_B5D69C(imgSprite, v12);
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
    sub_B5D560(
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

  if ( (byte_42ECFDE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, posY, (_DWORD)txt, *(_QWORD *)&fontSize);
    byte_42ECFDE = 1;
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
    sub_B5D69C(textLabel, v13);
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
    sub_B5D560(
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UILabel_o *textLabel; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UILabel_o *v22; // x24
  System_Int32_array **v23; // x25
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x25
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  __int64 v32; // x25
  struct UILabel_array *columnTextLabel; // x9
  unsigned int v34; // w26
  struct UILabel_array *v35; // x8
  struct UILabel_array *v36; // x8
  int32_t v37; // w8
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  __int64 v45; // x0
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECFE1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, posY, (_DWORD)txt, *(_QWORD *)&fontSize);
    sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    byte_42ECFE1 = 1;
  }
  this->fields.nowType = 4;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = (UILabel_o *)sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !txt )
    goto LABEL_41;
  if ( !txt->max_length )
    goto LABEL_42;
  v22 = textLabel;
  if ( !textLabel )
    goto LABEL_41;
  v23 = (System_Int32_array **)txt->m_Items[0];
  if ( v23 )
  {
    textLabel = (UILabel_o *)sub_B5D684(txt->m_Items[0], textLabel->klass->_1.element_class);
    if ( !textLabel )
      goto LABEL_43;
  }
  if ( !LODWORD(v22->fields.leftAnchor) )
    goto LABEL_42;
  v22->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v23;
  sub_B5D560((BattleServantConfConponent_o *)&v22->fields.rightAnchor, v23, v16, v17, v18, v19, v20, v21);
  if ( txt->max_length <= 2 )
    goto LABEL_42;
  v30 = (System_Int32_array **)txt->m_Items[2];
  if ( v30 )
  {
    textLabel = (UILabel_o *)sub_B5D684(txt->m_Items[2], v22->klass->_1.element_class);
    if ( !textLabel )
    {
LABEL_43:
      v45 = sub_B5D6BC(textLabel);
      sub_B5D668(v45, 0LL);
    }
  }
  if ( LODWORD(v22->fields.leftAnchor) <= 1 )
    goto LABEL_42;
  v22->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v30;
  sub_B5D560((BattleServantConfConponent_o *)&v22->fields.bottomAnchor, v30, v24, v25, v26, v27, v28, v29);
  leftAnchor = v22->fields.leftAnchor;
  if ( (int)leftAnchor >= 1 )
  {
    v32 = 4LL;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      v34 = v32 - 4;
      if ( (unsigned int)(v32 - 4) >= columnTextLabel->max_length || v34 >= (unsigned int)leftAnchor )
        goto LABEL_42;
      textLabel = (UILabel_o *)*((_QWORD *)&columnTextLabel->obj.klass + v32);
      if ( !textLabel )
        break;
      UILabel__set_text(textLabel, *((System_String_o **)&v22->klass + v32), 0LL);
      v35 = this->fields.columnTextLabel;
      if ( !v35 )
        break;
      if ( v34 >= v35->max_length )
        goto LABEL_42;
      textLabel = (UILabel_o *)*((_QWORD *)&v35->obj.klass + v32);
      if ( !textLabel )
        break;
      UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0LL);
      v36 = this->fields.columnTextLabel;
      if ( !v36 )
        break;
      if ( v34 >= v36->max_length )
        goto LABEL_42;
      textLabel = (UILabel_o *)*((_QWORD *)&v36->obj.klass + v32);
      if ( !textLabel )
        break;
      UILabel__set_fontSize(textLabel, fontSize, 0LL);
      leftAnchor = v22->fields.leftAnchor;
      if ( (int)++v32 - 4 >= (int)leftAnchor )
        goto LABEL_26;
    }
LABEL_41:
    sub_B5D69C(textLabel, v15);
  }
LABEL_26:
  if ( txt->max_length <= 1 )
  {
LABEL_42:
    v44 = sub_B5D6C8(textLabel);
    sub_B5D668(v44, 0LL);
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
  v37 = fontSize >= 0 ? fontSize : fontSize + 1;
  v46.fields.y = (float)(posY - (v37 >> 1));
  v46.fields.x = 0.0;
  v46.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, v46, 0LL);
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)rootComp,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
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
      sub_B5D69C(this, method);
  }
  return imgSprite[41];
}