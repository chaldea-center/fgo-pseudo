void EndrolContentItem___ctor(EndrolContentItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EndrolContentItem__ChangeDisplayItems(EndrolContentItem_o *this, const MethodInfo *method)
{
  int32_t nowType; // w8
  UILabel_o *textLabel; // x0
  struct UILabel_array *columnTextLabel; // x20
  int max_length; // w8
  __int64 v7; // x21
  struct UILabel_array *v8; // x19
  int v9; // w8
  __int64 v10; // x20
  struct UILabel_array *v11; // x20
  int v12; // w8
  __int64 v13; // x21
  struct UILabel_array *v14; // x19
  int v15; // w8
  __int64 v16; // x20

  if ( (byte_596A48C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A48C = 1;
  }
  nowType = this->fields.nowType;
  if ( nowType <= 2 )
  {
    if ( nowType != 1 )
    {
      if ( nowType != 2 )
        return;
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_60;
      UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_60;
      textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
      if ( !textLabel )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 0, 0);
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        goto LABEL_60;
      max_length = columnTextLabel->max_length;
      if ( max_length >= 1 )
      {
        v7 = 0;
        while ( (unsigned int)v7 < max_length )
        {
          textLabel = columnTextLabel->m_Items[v7];
          if ( !textLabel )
            goto LABEL_60;
          textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
          if ( !textLabel )
            goto LABEL_60;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 0, 0);
          max_length = columnTextLabel->max_length;
          if ( (int)++v7 >= max_length )
            goto LABEL_16;
        }
        goto LABEL_61;
      }
LABEL_16:
      textLabel = (UILabel_o *)this->fields.imgSprite;
      if ( !textLabel )
LABEL_60:
        sub_2213CDC(textLabel, method);
      goto LABEL_44;
    }
    textLabel = (UILabel_o *)this->fields.imgSprite;
    if ( !textLabel )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    textLabel = (UILabel_o *)this->fields.imgSprite;
    if ( !textLabel )
      goto LABEL_60;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 0, 0);
    v11 = this->fields.columnTextLabel;
    if ( !v11 )
      goto LABEL_60;
    v12 = v11->max_length;
    if ( v12 < 1 )
    {
LABEL_43:
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_60;
LABEL_44:
      textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
      if ( !textLabel )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 1, 0);
      return;
    }
    v13 = 0;
    while ( (unsigned int)v13 < v12 )
    {
      textLabel = v11->m_Items[v13];
      if ( !textLabel )
        goto LABEL_60;
      textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
      if ( !textLabel )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 0, 0);
      v12 = v11->max_length;
      if ( (int)++v13 >= v12 )
        goto LABEL_43;
    }
LABEL_61:
    sub_2213CE4(textLabel);
  }
  if ( nowType == 3 )
  {
    textLabel = (UILabel_o *)this->fields.imgSprite;
    if ( !textLabel )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_60;
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    textLabel = (UILabel_o *)this->fields.imgSprite;
    if ( !textLabel )
      goto LABEL_60;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 0, 0);
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_60;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 0, 0);
    v14 = this->fields.columnTextLabel;
    if ( !v14 )
      goto LABEL_60;
    v15 = v14->max_length;
    if ( v15 >= 1 )
    {
      v16 = 0;
      while ( (unsigned int)v16 < v15 )
      {
        textLabel = v14->m_Items[v16];
        if ( !textLabel )
          goto LABEL_60;
        textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
        if ( !textLabel )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 1, 0);
        v15 = v14->max_length;
        if ( (int)++v16 >= v15 )
          return;
      }
      goto LABEL_61;
    }
  }
  else if ( nowType == 4 )
  {
    textLabel = (UILabel_o *)this->fields.imgSprite;
    if ( !textLabel )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)textLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    textLabel = (UILabel_o *)this->fields.imgSprite;
    if ( !textLabel )
      goto LABEL_60;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 0, 0);
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_60;
    textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
    if ( !textLabel )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 1, 0);
    v8 = this->fields.columnTextLabel;
    if ( !v8 )
      goto LABEL_60;
    v9 = v8->max_length;
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( (unsigned int)v10 < v9 )
      {
        textLabel = v8->m_Items[v10];
        if ( !textLabel )
          goto LABEL_60;
        textLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)textLabel, 0);
        if ( !textLabel )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)textLabel, 1, 0);
        v9 = v8->max_length;
        if ( (int)++v10 >= v9 )
          return;
      }
      goto LABEL_61;
    }
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
  if ( (byte_596A487 & 1) == 0 )
  {
    this = (EndrolContentItem_o *)sub_2213A60(&StringLiteral_6296/*"Endrol"*/);
    byte_596A487 = 1;
  }
  if ( !coll )
    goto LABEL_9;
  this = (EndrolContentItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coll, 0);
  if ( !this )
    goto LABEL_9;
  tag = UnityEngine_GameObject__get_tag((UnityEngine_GameObject_o *)this, 0);
  if ( System_String__op_Equality(tag, (System_String_o *)StringLiteral_6296/*"Endrol"*/, 0) )
  {
    this = (EndrolContentItem_o *)v4->fields.rootComponent;
    if ( this )
    {
      EndrolRootComponent__ClippingItem((EndrolRootComponent_o *)this, v4, v6);
      return;
    }
LABEL_9:
    sub_2213CDC(this, coll);
  }
}


void EndrolContentItem__OpenSkipConfirmWindow(EndrolContentItem_o *this, const MethodInfo *method)
{
  EndrolRootComponent_o *rootComponent; // x0

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_2213CDC(0, method);
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
  __int64 v14; // x24
  struct UILabel_array *columnTextLabel; // x9
  unsigned int v16; // w25
  struct UILabel_array *v17; // x8
  struct UILabel_array *v18; // x8
  int v19; // s0 OVERLAPPED
  int v20; // s2
  int32_t v21; // w8
  float v22; // s1
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596A48A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A48A = 1;
  }
  this->fields.nowType = 3;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  if ( !txt )
    goto LABEL_27;
  max_length = txt->max_length;
  if ( max_length >= 1 )
  {
    v14 = 4;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      v16 = v14 - 4;
      if ( (unsigned int)(v14 - 4) >= LODWORD(columnTextLabel->max_length) || v16 >= max_length )
LABEL_28:
        sub_2213CE4(transform);
      transform = (UILabel_o *)*((_QWORD *)&columnTextLabel->obj.klass + v14);
      if ( !transform )
        break;
      UILabel__set_text(transform, *((System_String_o **)&txt->obj.klass + v14), 0);
      v17 = this->fields.columnTextLabel;
      if ( !v17 )
        break;
      if ( v16 >= LODWORD(v17->max_length) )
        goto LABEL_28;
      transform = (UILabel_o *)*((_QWORD *)&v17->obj.klass + v14);
      if ( !transform )
        break;
      UIWidget__set_height((UIWidget_o *)transform, fontSize, 0);
      v18 = this->fields.columnTextLabel;
      if ( !v18 )
        break;
      if ( v16 >= LODWORD(v18->max_length) )
        goto LABEL_28;
      transform = (UILabel_o *)*((_QWORD *)&v18->obj.klass + v14);
      if ( !transform )
        break;
      UILabel__set_fontSize(transform, fontSize, 0);
      max_length = txt->max_length;
      if ( (int)++v14 - 4 >= max_length )
        goto LABEL_17;
    }
LABEL_27:
    sub_2213CDC(transform, v12);
  }
LABEL_17:
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_27;
  v19 = 0;
  v20 = 0;
  v21 = fontSize >= 0 ? fontSize : fontSize + 1;
  v22 = (float)(posY - (v21 >> 1));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&v19, 0);
  transform = (UILabel_o *)this->fields.contentItemWidget;
  if ( !transform )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)transform, fontSize, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0, 0) )
  {
    this->fields.rootComponent = rootComp;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rootComponent,
      (int32_t)rootComp,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  y = size.fields.y;
  x = size.fields.x;
  if ( (byte_596A489 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A489 = 1;
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
    sub_2213CDC(imgSprite, v12);
  }
  v25.fields.z = 0.0;
  v25.fields.y = (float)posY + (float)(y * -0.5);
  v25.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)imgSprite, v25, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)root, 0, 0) )
  {
    this->fields.rootComponent = root;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rootComponent,
      (int32_t)root,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
  int v15; // s0 OVERLAPPED
  int v16; // s2
  int32_t v17; // w8
  float v18; // s1
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596A488 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A488 = 1;
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
  v15 = 0;
  v16 = 0;
  v17 = fontSize >= 0 ? fontSize : fontSize + 1;
  v18 = (float)(posY - (v17 >> 1));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, *(UnityEngine_Vector3_o *)&v15, 0);
  textLabel = this->fields.textLabel;
  if ( !textLabel
    || (UILabel__set_fontSize(textLabel, fontSize, 0), (textLabel = (UILabel_o *)this->fields.contentItemWidget) == 0)
    || (UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0), (textLabel = this->fields.textLabel) == 0) )
  {
LABEL_17:
    sub_2213CDC(textLabel, v13);
  }
  UIWidget__set_pivot((UIWidget_o *)textLabel, pivot, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0, 0) )
  {
    this->fields.rootComponent = rootComp;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rootComponent,
      (int32_t)rootComp,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
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
  char *textLabel; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  char *v19; // x24
  System_String_o *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x1
  int v28; // w8
  __int64 v29; // x25
  struct UILabel_array *columnTextLabel; // x9
  unsigned int v31; // w26
  struct UILabel_array *v32; // x8
  struct UILabel_array *v33; // x8
  int v34; // s0 OVERLAPPED
  int v35; // s2
  int32_t v36; // w8
  float v37; // s1
  __int64 v38; // x1
  __int64 v39; // x2
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  if ( (byte_596A48B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_596A48B = 1;
  }
  this->fields.nowType = 4;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = (char *)sub_2213B20(string___TypeInfo, 2);
  if ( !txt )
    goto LABEL_36;
  if ( !LODWORD(txt->max_length) )
    goto LABEL_37;
  v19 = textLabel;
  if ( !textLabel )
    goto LABEL_36;
  if ( !*((_DWORD *)textLabel + 6) )
    goto LABEL_37;
  v20 = txt->m_Items[0];
  *((_QWORD *)textLabel + 4) = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(textLabel + 32), (int32_t)v20, v13, v14, v15, v16, v17, v18);
  if ( LODWORD(txt->max_length) <= 2 || (*((_DWORD *)v19 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_37;
  v27 = txt->m_Items[2];
  *((_QWORD *)v19 + 5) = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 40), (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v28 = *((_DWORD *)v19 + 6);
  if ( v28 >= 1 )
  {
    v29 = 4;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      v31 = v29 - 4;
      if ( (unsigned int)(v29 - 4) >= LODWORD(columnTextLabel->max_length) || v31 >= v28 )
        goto LABEL_37;
      textLabel = (char *)*((_QWORD *)&columnTextLabel->obj.klass + v29);
      if ( !textLabel )
        break;
      UILabel__set_text((UILabel_o *)textLabel, *(System_String_o **)&v19[8 * v29], 0);
      v32 = this->fields.columnTextLabel;
      if ( !v32 )
        break;
      if ( v31 >= LODWORD(v32->max_length) )
        goto LABEL_37;
      textLabel = (char *)*((_QWORD *)&v32->obj.klass + v29);
      if ( !textLabel )
        break;
      UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0);
      v33 = this->fields.columnTextLabel;
      if ( !v33 )
        break;
      if ( v31 >= LODWORD(v33->max_length) )
        goto LABEL_37;
      textLabel = (char *)*((_QWORD *)&v33->obj.klass + v29);
      if ( !textLabel )
        break;
      UILabel__set_fontSize((UILabel_o *)textLabel, fontSize, 0);
      v28 = *((_DWORD *)v19 + 6);
      if ( (int)++v29 - 4 >= v28 )
        goto LABEL_22;
    }
LABEL_36:
    sub_2213CDC(textLabel, v12);
  }
LABEL_22:
  if ( (txt->max_length & 0xFFFFFFFE) == 0 )
LABEL_37:
    sub_2213CE4(textLabel);
  textLabel = (char *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)textLabel, txt->m_Items[1], 0);
  textLabel = (char *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0);
  textLabel = (char *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_36;
  UILabel__set_fontSize((UILabel_o *)textLabel, fontSize, 0);
  textLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !textLabel )
    goto LABEL_36;
  v34 = 0;
  v35 = 0;
  v36 = fontSize >= 0 ? fontSize : fontSize + 1;
  v37 = (float)(posY - (v36 >> 1));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)textLabel, *(UnityEngine_Vector3_o *)&v34, 0);
  textLabel = (char *)this->fields.contentItemWidget;
  if ( !textLabel )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)textLabel, fontSize, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0, 0) )
  {
    this->fields.rootComponent = rootComp;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rootComponent,
      (int32_t)rootComp,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
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
      sub_2213CDC(this, method);
  }
  return imgSprite[43];
}