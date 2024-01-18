void __fastcall FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  FSAnchor_Absolute_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  FSAnchor_Absolute_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  FSAnchor_Absolute_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  FSAnchor_Absolute_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_41885C7 & 1) == 0 )
  {
    sub_B2C35C(&FSAnchor_Absolute_TypeInfo, method);
    byte_41885C7 = 1;
  }
  v3 = (FSAnchor_Absolute_o *)sub_B2C42C(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v3, 1, 0, 68, 0LL);
  this->fields.leftAbsolute = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.leftAbsolute,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (FSAnchor_Absolute_o *)sub_B2C42C(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v10, 1, 0, -68, 0LL);
  this->fields.rightAbsolute = v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rightAbsolute,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (FSAnchor_Absolute_o *)sub_B2C42C(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v17, 0, 0, 0, 0LL);
  this->fields.bottomAbsolute = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bottomAbsolute,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (FSAnchor_Absolute_o *)sub_B2C42C(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v24, 0, 0, 0, 0LL);
  this->fields.topAbsolute = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.topAbsolute,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FSAnchor__Awake(FSAnchor_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
    FSAnchor__SetAnchor(this, v3);
}


void __fastcall FSAnchor__SetAnchor(FSAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *widget; // x20
  int32_t width; // w20
  __int64 height; // x0
  __int64 v6; // x1
  struct FSAnchor_Absolute_o *leftAbsolute; // x8
  float v8; // s8
  struct UIWidget_o *v9; // x9
  struct UIRect_AnchorPoint_o *v10; // x9
  struct FSAnchor_Absolute_o *v11; // x8
  struct UIWidget_o *v12; // x9
  struct UIRect_AnchorPoint_o *v13; // x9
  struct FSAnchor_Absolute_o *v14; // x8
  struct UIWidget_o *v15; // x9
  struct UIRect_AnchorPoint_o *v16; // x9
  struct UIWidget_o *v17; // x8
  struct UIRect_AnchorPoint_o *v18; // x20
  int32_t absolute; // w21
  struct FSAnchor_Absolute_o *v20; // x8
  struct UIWidget_o *v21; // x9
  struct UIRect_AnchorPoint_o *v22; // x9
  struct UIWidget_o *v23; // x8
  struct UIRect_AnchorPoint_o *v24; // x19
  int32_t v25; // w20
  struct UIWidget_o *v26; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x9
  struct UIWidget_o *v28; // x8
  struct UIRect_AnchorPoint_o *v29; // x8
  float relative; // s0
  int32_t v31; // w9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v33; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct UIWidget_o *v35; // x8
  struct UIRect_AnchorPoint_o *v36; // x8
  float v37; // s0
  int32_t v38; // w9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v40; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v43; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x9

  if ( (byte_41885C6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41885C6 = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(widget, 0LL, 0LL) )
    return;
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  leftAbsolute = this->fields.leftAbsolute;
  if ( !leftAbsolute )
    goto LABEL_68;
  v8 = (float)width / (float)(int)height;
  if ( v8 >= 1.8333 )
  {
    if ( leftAbsolute->fields.enable )
    {
      v26 = this->fields.widget;
      if ( !v26 )
        goto LABEL_68;
      leftAnchor = v26->fields.leftAnchor;
      if ( !leftAnchor )
        goto LABEL_68;
      leftAnchor->fields.absolute = leftAbsolute->fields.scope;
      if ( v8 > 2.3333 )
      {
        height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v8 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
        v28 = this->fields.widget;
        if ( !v28 )
          goto LABEL_68;
        v29 = v28->fields.leftAnchor;
        if ( !v29 )
          goto LABEL_68;
        relative = v29->fields.relative;
        if ( relative == 0.0 )
        {
          v31 = v29->fields.absolute + height;
LABEL_44:
          v29->fields.absolute = v31;
          goto LABEL_45;
        }
        if ( relative == 1.0 )
        {
          v31 = v29->fields.absolute - height;
          goto LABEL_44;
        }
      }
    }
LABEL_45:
    rightAbsolute = this->fields.rightAbsolute;
    if ( !rightAbsolute )
      goto LABEL_68;
    if ( !rightAbsolute->fields.enable )
      goto LABEL_57;
    v33 = this->fields.widget;
    if ( !v33 )
      goto LABEL_68;
    rightAnchor = v33->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_68;
    rightAnchor->fields.absolute = rightAbsolute->fields.scope;
    if ( v8 <= 2.3333 )
      goto LABEL_57;
    height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v8 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
    v35 = this->fields.widget;
    if ( !v35 )
      goto LABEL_68;
    v36 = v35->fields.rightAnchor;
    if ( !v36 )
      goto LABEL_68;
    v37 = v36->fields.relative;
    if ( v37 == 0.0 )
    {
      v38 = v36->fields.absolute + height;
    }
    else
    {
      if ( v37 != 1.0 )
      {
LABEL_57:
        bottomAbsolute = this->fields.bottomAbsolute;
        if ( !bottomAbsolute )
          goto LABEL_68;
        if ( bottomAbsolute->fields.enable )
        {
          v40 = this->fields.widget;
          if ( !v40 )
            goto LABEL_68;
          bottomAnchor = v40->fields.bottomAnchor;
          if ( !bottomAnchor )
            goto LABEL_68;
          bottomAnchor->fields.absolute = bottomAbsolute->fields.scope;
        }
        topAbsolute = this->fields.topAbsolute;
        if ( !topAbsolute )
          goto LABEL_68;
        if ( topAbsolute->fields.enable )
        {
          v43 = this->fields.widget;
          if ( !v43 )
            goto LABEL_68;
          topAnchor = v43->fields.topAnchor;
          if ( !topAnchor )
            goto LABEL_68;
          topAnchor->fields.absolute = topAbsolute->fields.scope;
        }
        return;
      }
      v38 = v36->fields.absolute - height;
    }
    v36->fields.absolute = v38;
    goto LABEL_57;
  }
  if ( leftAbsolute->fields.enable )
  {
    v9 = this->fields.widget;
    if ( !v9 )
      goto LABEL_68;
    v10 = v9->fields.leftAnchor;
    if ( !v10 )
      goto LABEL_68;
    v10->fields.absolute = leftAbsolute->fields.vista;
  }
  v11 = this->fields.rightAbsolute;
  if ( !v11 )
    goto LABEL_68;
  if ( v11->fields.enable )
  {
    v12 = this->fields.widget;
    if ( !v12 )
      goto LABEL_68;
    v13 = v12->fields.rightAnchor;
    if ( !v13 )
      goto LABEL_68;
    v13->fields.absolute = v11->fields.vista;
  }
  v14 = this->fields.bottomAbsolute;
  if ( !v14 )
    goto LABEL_68;
  if ( v14->fields.enable )
  {
    v15 = this->fields.widget;
    if ( !v15 )
      goto LABEL_68;
    v16 = v15->fields.bottomAnchor;
    if ( !v16 )
      goto LABEL_68;
    v16->fields.absolute = v14->fields.vista;
    if ( v8 < 1.7778 )
    {
      v17 = this->fields.widget;
      if ( !v17 )
        goto LABEL_68;
      v18 = v17->fields.bottomAnchor;
      if ( !v18 )
        goto LABEL_68;
      absolute = v18->fields.absolute;
      height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(1.7778 - v8) * 576.0) * 16.0) / 9.0, 0LL);
      v18->fields.absolute = height + absolute;
    }
  }
  v20 = this->fields.topAbsolute;
  if ( !v20 )
    goto LABEL_68;
  if ( v20->fields.enable )
  {
    v21 = this->fields.widget;
    if ( !v21 )
      goto LABEL_68;
    v22 = v21->fields.topAnchor;
    if ( !v22 )
      goto LABEL_68;
    v22->fields.absolute = v20->fields.vista;
    if ( v8 < 1.7778 )
    {
      v23 = this->fields.widget;
      if ( v23 )
      {
        v24 = v23->fields.topAnchor;
        if ( v24 )
        {
          v25 = v24->fields.absolute;
          v24->fields.absolute = UnityEngine_Mathf__FloorToInt(
                                   (float)((float)((float)(1.7778 - v8) * 576.0) * 16.0) / 9.0,
                                   0LL)
                               + v25;
          return;
        }
      }
LABEL_68:
      sub_B2C434(height, v6);
    }
  }
}


void __fastcall FSAnchor_Absolute___ctor(
        FSAnchor_Absolute_o *this,
        bool enable,
        int32_t vista,
        int32_t scope,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.enable = enable;
  this->fields.vista = vista;
  this->fields.scope = scope;
}