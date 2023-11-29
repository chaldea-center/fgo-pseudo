void __fastcall FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  FSAnchor_Absolute_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  FSAnchor_Absolute_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  FSAnchor_Absolute_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  FSAnchor_Absolute_o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40F9F74 & 1) == 0 )
  {
    sub_B16FFC(&FSAnchor_Absolute_TypeInfo, method);
    byte_40F9F74 = 1;
  }
  v6 = (FSAnchor_Absolute_o *)sub_B170CC(FSAnchor_Absolute_TypeInfo, method, v2, v3, v4);
  FSAnchor_Absolute___ctor(v6, 1, 0, 68, 0LL);
  this->fields.leftAbsolute = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.leftAbsolute,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v17 = (FSAnchor_Absolute_o *)sub_B170CC(FSAnchor_Absolute_TypeInfo, v13, v14, v15, v16);
  FSAnchor_Absolute___ctor(v17, 1, 0, -68, 0LL);
  this->fields.rightAbsolute = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rightAbsolute,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = (FSAnchor_Absolute_o *)sub_B170CC(FSAnchor_Absolute_TypeInfo, v24, v25, v26, v27);
  FSAnchor_Absolute___ctor(v28, 0, 0, 0, 0LL);
  this->fields.bottomAbsolute = v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bottomAbsolute,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v39 = (FSAnchor_Absolute_o *)sub_B170CC(FSAnchor_Absolute_TypeInfo, v35, v36, v37, v38);
  FSAnchor_Absolute___ctor(v39, 0, 0, 0, 0LL);
  this->fields.topAbsolute = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.topAbsolute,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
  int32_t height; // w0
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
  int32_t v27; // w0
  struct UIWidget_o *v28; // x8
  struct UIRect_AnchorPoint_o *v29; // x8
  float relative; // s0
  int v31; // w9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v33; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  int32_t v35; // w0
  struct UIWidget_o *v36; // x8
  struct UIRect_AnchorPoint_o *v37; // x8
  float v38; // s0
  int v39; // w9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v41; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v44; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x9

  if ( (byte_40F9F73 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9F73 = 1;
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
  v7 = (float)width / (float)height;
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
        v27 = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v7 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
        v28 = this->fields.widget;
        if ( !v28 )
          goto LABEL_68;
        v29 = v28->fields.leftAnchor;
        if ( !v29 )
          goto LABEL_68;
        relative = v29->fields.relative;
        if ( relative == 0.0 )
        {
          v31 = v29->fields.absolute + v27;
LABEL_44:
          v29->fields.absolute = v31;
          goto LABEL_45;
        }
        if ( relative == 1.0 )
        {
          v31 = v29->fields.absolute - v27;
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
    if ( v7 <= 2.3333 )
      goto LABEL_57;
    v35 = UnityEngine_Mathf__FloorToInt((float)((float)((float)(v7 + -2.3333) * 512.0) * 9.0) * 0.0625, 0LL);
    v36 = this->fields.widget;
    if ( !v36 )
      goto LABEL_68;
    v37 = v36->fields.rightAnchor;
    if ( !v37 )
      goto LABEL_68;
    v38 = v37->fields.relative;
    if ( v38 == 0.0 )
    {
      v39 = v37->fields.absolute + v35;
    }
    else
    {
      if ( v38 != 1.0 )
      {
LABEL_57:
        bottomAbsolute = this->fields.bottomAbsolute;
        if ( !bottomAbsolute )
          goto LABEL_68;
        if ( bottomAbsolute->fields.enable )
        {
          v41 = this->fields.widget;
          if ( !v41 )
            goto LABEL_68;
          bottomAnchor = v41->fields.bottomAnchor;
          if ( !bottomAnchor )
            goto LABEL_68;
          bottomAnchor->fields.absolute = bottomAbsolute->fields.scope;
        }
        topAbsolute = this->fields.topAbsolute;
        if ( !topAbsolute )
          goto LABEL_68;
        if ( topAbsolute->fields.enable )
        {
          v44 = this->fields.widget;
          if ( !v44 )
            goto LABEL_68;
          topAnchor = v44->fields.topAnchor;
          if ( !topAnchor )
            goto LABEL_68;
          topAnchor->fields.absolute = topAbsolute->fields.scope;
        }
        return;
      }
      v39 = v37->fields.absolute - v35;
    }
    v37->fields.absolute = v39;
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
      v17->fields.absolute = UnityEngine_Mathf__FloorToInt(
                               (float)((float)((float)(1.7778 - v7) * 576.0) * 16.0) / 9.0,
                               0LL)
                           + absolute;
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
      sub_B170D4();
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