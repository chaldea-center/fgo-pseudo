void __fastcall FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FSAnchor_Absolute_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  FSAnchor_Absolute_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  FSAnchor_Absolute_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  FSAnchor_Absolute_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4215440 & 1) == 0 )
  {
    sub_B0D8A4(&FSAnchor_Absolute_TypeInfo, method);
    byte_4215440 = 1;
  }
  v4 = (FSAnchor_Absolute_o *)sub_B0D974(FSAnchor_Absolute_TypeInfo, method, v2);
  FSAnchor_Absolute___ctor(v4, 1, 0, 68, 0LL);
  this->fields.leftAbsolute = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.leftAbsolute,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = (FSAnchor_Absolute_o *)sub_B0D974(FSAnchor_Absolute_TypeInfo, v11, v12);
  FSAnchor_Absolute___ctor(v13, 1, 0, -68, 0LL);
  this->fields.rightAbsolute = v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rightAbsolute,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = (FSAnchor_Absolute_o *)sub_B0D974(FSAnchor_Absolute_TypeInfo, v20, v21);
  FSAnchor_Absolute___ctor(v22, 0, 0, 0, 0LL);
  this->fields.bottomAbsolute = v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bottomAbsolute,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v31 = (FSAnchor_Absolute_o *)sub_B0D974(FSAnchor_Absolute_TypeInfo, v29, v30);
  FSAnchor_Absolute___ctor(v31, 0, 0, 0, 0LL);
  this->fields.topAbsolute = v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.topAbsolute,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  struct FSAnchor_Absolute_o *leftAbsolute; // x8
  float v7; // s8
  struct UIWidget_o *v8; // x9
  struct UIRect_AnchorPoint_o *v9; // x9
  struct FSAnchor_Absolute_o *v10; // x8
  struct UIWidget_o *v11; // x9
  struct UIRect_AnchorPoint_o *v12; // x9
  struct FSAnchor_Absolute_o *v13; // x8
  struct UIWidget_o *v14; // x9
  struct UIRect_AnchorPoint_o *v15; // x9
  struct UIWidget_o *v16; // x8
  struct UIRect_AnchorPoint_o *v17; // x20
  int32_t absolute; // w21
  struct FSAnchor_Absolute_o *v19; // x8
  struct UIWidget_o *v20; // x9
  struct UIRect_AnchorPoint_o *v21; // x9
  struct UIWidget_o *v22; // x8
  struct UIRect_AnchorPoint_o *v23; // x19
  int32_t v24; // w20
  struct UIWidget_o *v25; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x9
  struct UIWidget_o *v27; // x8
  struct UIRect_AnchorPoint_o *v28; // x8
  float relative; // s0
  int32_t v30; // w9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v32; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct UIWidget_o *v34; // x8
  struct UIRect_AnchorPoint_o *v35; // x8
  float v36; // s0
  int32_t v37; // w9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v39; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v42; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x9

  if ( (byte_421543F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421543F = 1;
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
  v7 = (float)width / (float)(int)height;
  if ( v7 >= 1.8333 )
  {
    if ( leftAbsolute->fields.enable )
    {
      v25 = this->fields.widget;
      if ( !v25 )
        goto LABEL_68;
      leftAnchor = v25->fields.leftAnchor;
      if ( !leftAnchor )
        goto LABEL_68;
      leftAnchor->fields.absolute = leftAbsolute->fields.scope;
      if ( v7 > 2.3333 )
      {
        height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v7 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
        v27 = this->fields.widget;
        if ( !v27 )
          goto LABEL_68;
        v28 = v27->fields.leftAnchor;
        if ( !v28 )
          goto LABEL_68;
        relative = v28->fields.relative;
        if ( relative == 0.0 )
        {
          v30 = v28->fields.absolute + height;
LABEL_44:
          v28->fields.absolute = v30;
          goto LABEL_45;
        }
        if ( relative == 1.0 )
        {
          v30 = v28->fields.absolute - height;
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
    v32 = this->fields.widget;
    if ( !v32 )
      goto LABEL_68;
    rightAnchor = v32->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_68;
    rightAnchor->fields.absolute = rightAbsolute->fields.scope;
    if ( v7 <= 2.3333 )
      goto LABEL_57;
    height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v7 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
    v34 = this->fields.widget;
    if ( !v34 )
      goto LABEL_68;
    v35 = v34->fields.rightAnchor;
    if ( !v35 )
      goto LABEL_68;
    v36 = v35->fields.relative;
    if ( v36 == 0.0 )
    {
      v37 = v35->fields.absolute + height;
    }
    else
    {
      if ( v36 != 1.0 )
      {
LABEL_57:
        bottomAbsolute = this->fields.bottomAbsolute;
        if ( !bottomAbsolute )
          goto LABEL_68;
        if ( bottomAbsolute->fields.enable )
        {
          v39 = this->fields.widget;
          if ( !v39 )
            goto LABEL_68;
          bottomAnchor = v39->fields.bottomAnchor;
          if ( !bottomAnchor )
            goto LABEL_68;
          bottomAnchor->fields.absolute = bottomAbsolute->fields.scope;
        }
        topAbsolute = this->fields.topAbsolute;
        if ( !topAbsolute )
          goto LABEL_68;
        if ( topAbsolute->fields.enable )
        {
          v42 = this->fields.widget;
          if ( !v42 )
            goto LABEL_68;
          topAnchor = v42->fields.topAnchor;
          if ( !topAnchor )
            goto LABEL_68;
          topAnchor->fields.absolute = topAbsolute->fields.scope;
        }
        return;
      }
      v37 = v35->fields.absolute - height;
    }
    v35->fields.absolute = v37;
    goto LABEL_57;
  }
  if ( leftAbsolute->fields.enable )
  {
    v8 = this->fields.widget;
    if ( !v8 )
      goto LABEL_68;
    v9 = v8->fields.leftAnchor;
    if ( !v9 )
      goto LABEL_68;
    v9->fields.absolute = leftAbsolute->fields.vista;
  }
  v10 = this->fields.rightAbsolute;
  if ( !v10 )
    goto LABEL_68;
  if ( v10->fields.enable )
  {
    v11 = this->fields.widget;
    if ( !v11 )
      goto LABEL_68;
    v12 = v11->fields.rightAnchor;
    if ( !v12 )
      goto LABEL_68;
    v12->fields.absolute = v10->fields.vista;
  }
  v13 = this->fields.bottomAbsolute;
  if ( !v13 )
    goto LABEL_68;
  if ( v13->fields.enable )
  {
    v14 = this->fields.widget;
    if ( !v14 )
      goto LABEL_68;
    v15 = v14->fields.bottomAnchor;
    if ( !v15 )
      goto LABEL_68;
    v15->fields.absolute = v13->fields.vista;
    if ( v7 < 1.7778 )
    {
      v16 = this->fields.widget;
      if ( !v16 )
        goto LABEL_68;
      v17 = v16->fields.bottomAnchor;
      if ( !v17 )
        goto LABEL_68;
      absolute = v17->fields.absolute;
      height = UnityEngine_Mathf__FloorToInt((float)((float)((float)(1.7778 - v7) * 576.0) * 16.0) / 9.0, 0LL);
      v17->fields.absolute = height + absolute;
    }
  }
  v19 = this->fields.topAbsolute;
  if ( !v19 )
    goto LABEL_68;
  if ( v19->fields.enable )
  {
    v20 = this->fields.widget;
    if ( !v20 )
      goto LABEL_68;
    v21 = v20->fields.topAnchor;
    if ( !v21 )
      goto LABEL_68;
    v21->fields.absolute = v19->fields.vista;
    if ( v7 < 1.7778 )
    {
      v22 = this->fields.widget;
      if ( v22 )
      {
        v23 = v22->fields.topAnchor;
        if ( v23 )
        {
          v24 = v23->fields.absolute;
          v23->fields.absolute = UnityEngine_Mathf__FloorToInt(
                                   (float)((float)((float)(1.7778 - v7) * 576.0) * 16.0) / 9.0,
                                   0LL)
                               + v24;
          return;
        }
      }
LABEL_68:
      sub_B0D97C(height);
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