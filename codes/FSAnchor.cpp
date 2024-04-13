void __fastcall FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FSAnchor_Absolute_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  FSAnchor_Absolute_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  FSAnchor_Absolute_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  FSAnchor_Absolute_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E8C97 & 1) == 0 )
  {
    sub_B5D5C4(&FSAnchor_Absolute_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C97 = 1;
  }
  v5 = (FSAnchor_Absolute_o *)sub_B5D694(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v5, 1, 0, 68, 0LL);
  this->fields.leftAbsolute = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.leftAbsolute,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (FSAnchor_Absolute_o *)sub_B5D694(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v12, 1, 0, -68, 0LL);
  this->fields.rightAbsolute = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rightAbsolute,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (FSAnchor_Absolute_o *)sub_B5D694(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v19, 0, 0, 0, 0LL);
  this->fields.bottomAbsolute = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bottomAbsolute,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (FSAnchor_Absolute_o *)sub_B5D694(FSAnchor_Absolute_TypeInfo);
  FSAnchor_Absolute___ctor(v26, 0, 0, 0, 0LL);
  this->fields.topAbsolute = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.topAbsolute,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *widget; // x20
  int32_t width; // w20
  __int64 height; // x0
  __int64 v8; // x1
  struct FSAnchor_Absolute_o *leftAbsolute; // x8
  float v10; // s8
  struct UIWidget_o *v11; // x9
  struct UIRect_AnchorPoint_o *v12; // x9
  struct FSAnchor_Absolute_o *v13; // x8
  struct UIWidget_o *v14; // x9
  struct UIRect_AnchorPoint_o *v15; // x9
  struct FSAnchor_Absolute_o *v16; // x8
  struct UIWidget_o *v17; // x9
  struct UIRect_AnchorPoint_o *v18; // x9
  struct UIWidget_o *v19; // x8
  struct UIRect_AnchorPoint_o *v20; // x20
  int32_t absolute; // w21
  struct FSAnchor_Absolute_o *v22; // x8
  struct UIWidget_o *v23; // x9
  struct UIRect_AnchorPoint_o *v24; // x9
  struct UIWidget_o *v25; // x8
  struct UIRect_AnchorPoint_o *v26; // x19
  int32_t v27; // w20
  struct UIWidget_o *v28; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x9
  struct UIWidget_o *v30; // x8
  struct UIRect_AnchorPoint_o *v31; // x8
  float relative; // s0
  int32_t v33; // w9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v35; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct UIWidget_o *v37; // x8
  struct UIRect_AnchorPoint_o *v38; // x8
  float v39; // s0
  int32_t v40; // w9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v42; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v45; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x9

  if ( (byte_42E8C96 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8C96 = 1;
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
  v10 = (float)width / (float)(int)height;
  if ( v10 >= 1.8333 )
  {
    if ( leftAbsolute->fields.enable )
    {
      v28 = this->fields.widget;
      if ( !v28 )
        goto LABEL_68;
      leftAnchor = v28->fields.leftAnchor;
      if ( !leftAnchor )
        goto LABEL_68;
      leftAnchor->fields.absolute = leftAbsolute->fields.scope;
      if ( v10 > 2.3333 )
      {
        height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v10 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
        v30 = this->fields.widget;
        if ( !v30 )
          goto LABEL_68;
        v31 = v30->fields.leftAnchor;
        if ( !v31 )
          goto LABEL_68;
        relative = v31->fields.relative;
        if ( relative == 0.0 )
        {
          v33 = v31->fields.absolute + height;
LABEL_44:
          v31->fields.absolute = v33;
          goto LABEL_45;
        }
        if ( relative == 1.0 )
        {
          v33 = v31->fields.absolute - height;
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
    v35 = this->fields.widget;
    if ( !v35 )
      goto LABEL_68;
    rightAnchor = v35->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_68;
    rightAnchor->fields.absolute = rightAbsolute->fields.scope;
    if ( v10 <= 2.3333 )
      goto LABEL_57;
    height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v10 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
    v37 = this->fields.widget;
    if ( !v37 )
      goto LABEL_68;
    v38 = v37->fields.rightAnchor;
    if ( !v38 )
      goto LABEL_68;
    v39 = v38->fields.relative;
    if ( v39 == 0.0 )
    {
      v40 = v38->fields.absolute + height;
    }
    else
    {
      if ( v39 != 1.0 )
      {
LABEL_57:
        bottomAbsolute = this->fields.bottomAbsolute;
        if ( !bottomAbsolute )
          goto LABEL_68;
        if ( bottomAbsolute->fields.enable )
        {
          v42 = this->fields.widget;
          if ( !v42 )
            goto LABEL_68;
          bottomAnchor = v42->fields.bottomAnchor;
          if ( !bottomAnchor )
            goto LABEL_68;
          bottomAnchor->fields.absolute = bottomAbsolute->fields.scope;
        }
        topAbsolute = this->fields.topAbsolute;
        if ( !topAbsolute )
          goto LABEL_68;
        if ( topAbsolute->fields.enable )
        {
          v45 = this->fields.widget;
          if ( !v45 )
            goto LABEL_68;
          topAnchor = v45->fields.topAnchor;
          if ( !topAnchor )
            goto LABEL_68;
          topAnchor->fields.absolute = topAbsolute->fields.scope;
        }
        return;
      }
      v40 = v38->fields.absolute - height;
    }
    v38->fields.absolute = v40;
    goto LABEL_57;
  }
  if ( leftAbsolute->fields.enable )
  {
    v11 = this->fields.widget;
    if ( !v11 )
      goto LABEL_68;
    v12 = v11->fields.leftAnchor;
    if ( !v12 )
      goto LABEL_68;
    v12->fields.absolute = leftAbsolute->fields.vista;
  }
  v13 = this->fields.rightAbsolute;
  if ( !v13 )
    goto LABEL_68;
  if ( v13->fields.enable )
  {
    v14 = this->fields.widget;
    if ( !v14 )
      goto LABEL_68;
    v15 = v14->fields.rightAnchor;
    if ( !v15 )
      goto LABEL_68;
    v15->fields.absolute = v13->fields.vista;
  }
  v16 = this->fields.bottomAbsolute;
  if ( !v16 )
    goto LABEL_68;
  if ( v16->fields.enable )
  {
    v17 = this->fields.widget;
    if ( !v17 )
      goto LABEL_68;
    v18 = v17->fields.bottomAnchor;
    if ( !v18 )
      goto LABEL_68;
    v18->fields.absolute = v16->fields.vista;
    if ( v10 < 1.7778 )
    {
      v19 = this->fields.widget;
      if ( !v19 )
        goto LABEL_68;
      v20 = v19->fields.bottomAnchor;
      if ( !v20 )
        goto LABEL_68;
      absolute = v20->fields.absolute;
      height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(1.7778 - v10) * 576.0) * 16.0) / 9.0, 0LL);
      v20->fields.absolute = height + absolute;
    }
  }
  v22 = this->fields.topAbsolute;
  if ( !v22 )
    goto LABEL_68;
  if ( v22->fields.enable )
  {
    v23 = this->fields.widget;
    if ( !v23 )
      goto LABEL_68;
    v24 = v23->fields.topAnchor;
    if ( !v24 )
      goto LABEL_68;
    v24->fields.absolute = v22->fields.vista;
    if ( v10 < 1.7778 )
    {
      v25 = this->fields.widget;
      if ( v25 )
      {
        v26 = v25->fields.topAnchor;
        if ( v26 )
        {
          v27 = v26->fields.absolute;
          v26->fields.absolute = UnityEngine_Mathf__FloorToInt(
                                   (float)((float)((float)(1.7778 - v10) * 576.0) * 16.0) / 9.0,
                                   0LL)
                               + v27;
          return;
        }
      }
LABEL_68:
      sub_B5D69C(height, v8);
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