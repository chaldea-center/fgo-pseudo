void __fastcall EndrolContentItem___ctor(EndrolContentItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EndrolContentItem__ChangeDisplayItems(EndrolContentItem_o *this, const MethodInfo *method)
{
  UISprite_o *imgSprite; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UILabel_array *columnTextLabel; // x20
  int max_length; // w8
  int i; // w21
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *textLabel; // x0
  UILabel_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct UILabel_array *v18; // x20
  int v19; // w8
  int j; // w21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UISprite_o *v24; // x0
  UILabel_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  struct UILabel_array *v30; // x19
  int v31; // w8
  unsigned int v32; // w20
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UISprite_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  struct UILabel_array *v40; // x19
  int v41; // w8
  int k; // w20
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0

  if ( (byte_40FE298 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FE298 = 1;
  }
  switch ( this->fields.nowType )
  {
    case 1:
      imgSprite = this->fields.imgSprite;
      if ( !imgSprite )
        goto LABEL_56;
      UISprite__set_spriteName(imgSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v4 = (UnityEngine_Component_o *)this->fields.imgSprite;
      if ( !v4 )
        goto LABEL_56;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
      if ( !gameObject )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
        v12 = (UnityEngine_Component_o *)columnTextLabel->m_Items[i];
        if ( !v12 )
          goto LABEL_56;
        v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
        if ( !v13 )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive(v13, 0, 0LL);
        max_length = columnTextLabel->max_length;
      }
LABEL_14:
      textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_56;
      goto LABEL_27;
    case 2:
      v15 = this->fields.textLabel;
      if ( !v15 )
        goto LABEL_56;
      UILabel__set_text(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v16 = (UnityEngine_Component_o *)this->fields.textLabel;
      if ( !v16 )
        goto LABEL_56;
      v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !v17 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v17, 0, 0LL);
      v18 = this->fields.columnTextLabel;
      if ( !v18 )
        goto LABEL_56;
      v19 = v18->max_length;
      if ( v19 < 1 )
        goto LABEL_26;
      for ( j = 0; j < v19; ++j )
      {
        if ( j >= (unsigned int)v19 )
          goto LABEL_57;
        v21 = (UnityEngine_Component_o *)v18->m_Items[j];
        if ( !v21 )
          goto LABEL_56;
        v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
        if ( !v22 )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive(v22, 0, 0LL);
        v19 = v18->max_length;
      }
LABEL_26:
      textLabel = (UnityEngine_Component_o *)this->fields.imgSprite;
      if ( !textLabel )
        goto LABEL_56;
LABEL_27:
      v23 = UnityEngine_Component__get_gameObject(textLabel, 0LL);
      if ( !v23 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v23, 1, 0LL);
      return;
    case 3:
      v24 = this->fields.imgSprite;
      if ( !v24 )
        goto LABEL_56;
      UISprite__set_spriteName(v24, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v25 = this->fields.textLabel;
      if ( !v25 )
        goto LABEL_56;
      UILabel__set_text(v25, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v26 = (UnityEngine_Component_o *)this->fields.imgSprite;
      if ( !v26 )
        goto LABEL_56;
      v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( !v27 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v27, 0, 0LL);
      v28 = (UnityEngine_Component_o *)this->fields.textLabel;
      if ( !v28 )
        goto LABEL_56;
      v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( !v29 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v29, 0, 0LL);
      v30 = this->fields.columnTextLabel;
      if ( !v30 )
        goto LABEL_56;
      v31 = v30->max_length;
      if ( v31 < 1 )
        return;
      v32 = 0;
      while ( v32 < v31 )
      {
        v33 = (UnityEngine_Component_o *)v30->m_Items[v32];
        if ( !v33 )
          goto LABEL_56;
        v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
        if ( !v34 )
          goto LABEL_56;
        UnityEngine_GameObject__SetActive(v34, 1, 0LL);
        v31 = v30->max_length;
        if ( (int)++v32 >= v31 )
          return;
      }
      goto LABEL_57;
    case 4:
      v35 = this->fields.imgSprite;
      if ( !v35 )
        goto LABEL_56;
      UISprite__set_spriteName(v35, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v36 = (UnityEngine_Component_o *)this->fields.imgSprite;
      if ( !v36 )
        goto LABEL_56;
      v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
      if ( !v37 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v37, 0, 0LL);
      v38 = (UnityEngine_Component_o *)this->fields.textLabel;
      if ( !v38 )
        goto LABEL_56;
      v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
      if ( !v39 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v39, 1, 0LL);
      v40 = this->fields.columnTextLabel;
      if ( !v40 )
        goto LABEL_56;
      v41 = v40->max_length;
      if ( v41 < 1 )
        return;
      for ( k = 0; k < v41; ++k )
      {
        if ( k >= (unsigned int)v41 )
        {
LABEL_57:
          sub_B17100(v6, v7, v8);
          sub_B170A0();
        }
        v43 = (UnityEngine_Component_o *)v40->m_Items[k];
        if ( !v43 || (v44 = UnityEngine_Component__get_gameObject(v43, 0LL)) == 0LL )
LABEL_56:
          sub_B170D4();
        UnityEngine_GameObject__SetActive(v44, 1, 0LL);
        v41 = v40->max_length;
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *tag; // x0
  const MethodInfo *v7; // x2
  EndrolRootComponent_o *rootComponent; // x0

  if ( (byte_40FE293 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5972/*"Endrol"*/, coll);
    byte_40FE293 = 1;
  }
  if ( !coll )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)coll, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  tag = UnityEngine_GameObject__get_tag(gameObject, 0LL);
  if ( System_String__op_Equality(tag, (System_String_o *)StringLiteral_5972/*"Endrol"*/, 0LL) )
  {
    rootComponent = this->fields.rootComponent;
    if ( rootComponent )
    {
      EndrolRootComponent__ClippingItem(rootComponent, this, v7);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall EndrolContentItem__OpenSkipConfirmWindow(EndrolContentItem_o *this, const MethodInfo *method)
{
  EndrolRootComponent_o *rootComponent; // x0

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_B170D4();
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
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  signed int max_length; // w8
  il2cpp_array_size_t v15; // w24
  struct UILabel_array *columnTextLabel; // x9
  UILabel_o *v17; // x0
  struct UILabel_array *v18; // x8
  UIWidget_o *v19; // x0
  struct UILabel_array *v20; // x8
  UILabel_o *v21; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v23; // w8
  UIWidget_o *contentItemWidget; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE296 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    byte_40FE296 = 1;
  }
  this->fields.nowType = 3;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  if ( !txt )
    goto LABEL_28;
  max_length = txt->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      if ( v15 >= columnTextLabel->max_length || v15 >= max_length )
      {
LABEL_29:
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      v17 = columnTextLabel->m_Items[v15];
      if ( !v17 )
        break;
      UILabel__set_text(v17, txt->m_Items[v15], 0LL);
      v18 = this->fields.columnTextLabel;
      if ( !v18 )
        break;
      if ( v15 >= v18->max_length )
        goto LABEL_29;
      v19 = (UIWidget_o *)v18->m_Items[v15];
      if ( !v19 )
        break;
      UIWidget__set_height(v19, fontSize, 0LL);
      v20 = this->fields.columnTextLabel;
      if ( !v20 )
        break;
      if ( v15 >= v20->max_length )
        goto LABEL_29;
      v21 = v20->m_Items[v15];
      if ( !v21 )
        break;
      UILabel__set_fontSize(v21, fontSize, 0LL);
      max_length = txt->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_17;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_17:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_28;
  v23 = fontSize >= 0 ? fontSize : fontSize + 1;
  v31.fields.y = (float)(posY - (v23 >> 1));
  v31.fields.x = 0.0;
  v31.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v31, 0LL);
  contentItemWidget = this->fields.contentItemWidget;
  if ( !contentItemWidget )
    goto LABEL_28;
  UIWidget__set_height(contentItemWidget, fontSize, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)rootComp,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
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
  UIWidget_o *imgSprite; // x0
  double v13; // d0
  UIWidget_o *v14; // x0
  double v15; // d0
  struct UISprite_o *v16; // x8
  UIWidget_o *contentItemWidget; // x0
  UISprite_o *v18; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  y = size.fields.y;
  x = size.fields.x;
  if ( (byte_40FE295 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    byte_40FE295 = 1;
  }
  this->fields.nowType = 2;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  imgSprite = (UIWidget_o *)this->fields.imgSprite;
  if ( !imgSprite )
    goto LABEL_19;
  v13 = x;
  if ( x == INFINITY )
    v13 = -x;
  UIWidget__set_width(imgSprite, (int)v13, 0LL);
  v14 = (UIWidget_o *)this->fields.imgSprite;
  if ( !v14 )
    goto LABEL_19;
  v15 = y;
  if ( y == INFINITY )
    v15 = -INFINITY;
  UIWidget__set_height(v14, (int)v15, 0LL);
  v16 = this->fields.imgSprite;
  if ( !v16
    || (contentItemWidget = this->fields.contentItemWidget) == 0LL
    || (UIWidget__set_height(contentItemWidget, v16->fields.mHeight, 0LL), (v18 = this->fields.imgSprite) == 0LL)
    || (UISprite__set_spriteName(v18, spName, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  v26.fields.y = (float)posY + (float)(y * -0.5);
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v26, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)root, 0LL, 0LL) )
  {
    this->fields.rootComponent = root;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)root,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
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
  UILabel_o *textLabel; // x0
  UIWidget_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v16; // w8
  UILabel_o *v17; // x0
  UIWidget_o *contentItemWidget; // x0
  UIWidget_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE294 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    byte_40FE294 = 1;
  }
  this->fields.nowType = 1;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_18;
  UILabel__set_text(textLabel, txt, 0LL);
  v14 = (UIWidget_o *)this->fields.textLabel;
  if ( !v14 )
    goto LABEL_18;
  UIWidget__set_height(v14, fontSize, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_18;
  v16 = fontSize >= 0 ? fontSize : fontSize + 1;
  v26.fields.y = (float)(posY - (v16 >> 1));
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v26, 0LL);
  v17 = this->fields.textLabel;
  if ( !v17
    || (UILabel__set_fontSize(v17, fontSize, 0LL), (contentItemWidget = this->fields.contentItemWidget) == 0LL)
    || (UIWidget__set_height(contentItemWidget, fontSize, 0LL), (v19 = (UIWidget_o *)this->fields.textLabel) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  UIWidget__set_pivot(v19, pivot, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)rootComp,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
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
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x24
  System_Int32_array **v22; // x25
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x25
  __int64 v29; // x8
  __int64 v30; // x25
  struct UILabel_array *columnTextLabel; // x9
  unsigned int v32; // w26
  UILabel_o *v33; // x0
  struct UILabel_array *v34; // x8
  UIWidget_o *v35; // x0
  struct UILabel_array *v36; // x8
  UILabel_o *v37; // x0
  UILabel_o *textLabel; // x0
  UIWidget_o *v39; // x0
  UILabel_o *v40; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v42; // w8
  UIWidget_o *contentItemWidget; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE297 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&posY);
    sub_B16FFC(&string___TypeInfo, v11);
    byte_40FE297 = 1;
  }
  this->fields.nowType = 4;
  EndrolContentItem__ChangeDisplayItems(this, *(const MethodInfo **)&posY);
  v13 = sub_B17014(string___TypeInfo, 2LL, v12);
  if ( !txt )
    goto LABEL_41;
  if ( !txt->max_length )
    goto LABEL_42;
  v21 = v13;
  if ( !v13 )
    goto LABEL_41;
  v22 = (System_Int32_array **)txt->m_Items[0];
  if ( v22 )
  {
    v13 = sub_B170BC(txt->m_Items[0], *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v13 )
      goto LABEL_43;
  }
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_42;
  *(_QWORD *)(v21 + 32) = v22;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), v22, v15, v16, v17, v18, v19, v20);
  if ( txt->max_length <= 2 )
    goto LABEL_42;
  v28 = (System_Int32_array **)txt->m_Items[2];
  if ( v28 )
  {
    v13 = sub_B170BC(txt->m_Items[2], *(_QWORD *)(*(_QWORD *)v21 + 64LL));
    if ( !v13 )
    {
LABEL_43:
      sub_B170F4(v13);
      sub_B170A0();
    }
  }
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_42;
  *(_QWORD *)(v21 + 40) = v28;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 40), v28, v15, v23, v24, v25, v26, v27);
  v29 = *(_QWORD *)(v21 + 24);
  if ( (int)v29 >= 1 )
  {
    v30 = 4LL;
    while ( 1 )
    {
      columnTextLabel = this->fields.columnTextLabel;
      if ( !columnTextLabel )
        break;
      v32 = v30 - 4;
      if ( (unsigned int)(v30 - 4) >= columnTextLabel->max_length || v32 >= (unsigned int)v29 )
        goto LABEL_42;
      v33 = (UILabel_o *)*((_QWORD *)&columnTextLabel->obj.klass + v30);
      if ( !v33 )
        break;
      UILabel__set_text(v33, *(System_String_o **)(v21 + 8 * v30), 0LL);
      v34 = this->fields.columnTextLabel;
      if ( !v34 )
        break;
      if ( v32 >= v34->max_length )
        goto LABEL_42;
      v35 = (UIWidget_o *)*((_QWORD *)&v34->obj.klass + v30);
      if ( !v35 )
        break;
      UIWidget__set_height(v35, fontSize, 0LL);
      v36 = this->fields.columnTextLabel;
      if ( !v36 )
        break;
      if ( v32 >= v36->max_length )
        goto LABEL_42;
      v37 = (UILabel_o *)*((_QWORD *)&v36->obj.klass + v30);
      if ( !v37 )
        break;
      UILabel__set_fontSize(v37, fontSize, 0LL);
      v29 = *(_QWORD *)(v21 + 24);
      if ( (int)++v30 - 4 >= (int)v29 )
        goto LABEL_26;
    }
LABEL_41:
    sub_B170D4();
  }
LABEL_26:
  if ( txt->max_length <= 1 )
  {
LABEL_42:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_41;
  UILabel__set_text(textLabel, txt->m_Items[1], 0LL);
  v39 = (UIWidget_o *)this->fields.textLabel;
  if ( !v39 )
    goto LABEL_41;
  UIWidget__set_height(v39, fontSize, 0LL);
  v40 = this->fields.textLabel;
  if ( !v40 )
    goto LABEL_41;
  UILabel__set_fontSize(v40, fontSize, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_41;
  v42 = fontSize >= 0 ? fontSize : fontSize + 1;
  v50.fields.y = (float)(posY - (v42 >> 1));
  v50.fields.x = 0.0;
  v50.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v50, 0LL);
  contentItemWidget = this->fields.contentItemWidget;
  if ( !contentItemWidget )
    goto LABEL_41;
  UIWidget__set_height(contentItemWidget, fontSize, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)rootComp, 0LL, 0LL) )
  {
    this->fields.rootComponent = rootComp;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.rootComponent,
      (System_Int32_array **)rootComp,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
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
      sub_B170D4();
  }
  return imgSprite[41];
}