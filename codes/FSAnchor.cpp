void FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C39382 & 1) == 0 )
  {
    sub_1C32C20(&FSAnchor_Absolute_TypeInfo);
    byte_4C39382 = 1;
  }
  v3 = sub_1C32E6C(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_BYTE *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x4400000000LL;
  this->fields.leftAbsolute = (struct FSAnchor_Absolute_o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.leftAbsolute, v3, v4, v5);
  v6 = sub_1C32E6C(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_BYTE *)(v6 + 16) = 1;
  *(_QWORD *)(v6 + 20) = 0xFFFFFFBC00000000LL;
  this->fields.rightAbsolute = (struct FSAnchor_Absolute_o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rightAbsolute, v6, v7, v8);
  v9 = sub_1C32E6C(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_BYTE *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 20) = 0;
  this->fields.bottomAbsolute = (struct FSAnchor_Absolute_o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bottomAbsolute, v9, v10, v11);
  v12 = sub_1C32E6C(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_BYTE *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 20) = 0;
  this->fields.topAbsolute = (struct FSAnchor_Absolute_o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.topAbsolute, v12, v13, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FSAnchor__Awake(FSAnchor_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    FSAnchor__SetAnchor(this, v3);
}


void FSAnchor__SetAnchor(FSAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *widget; // x20
  int32_t width; // w20
  System_Math_c *height; // x0
  struct FSAnchor_Absolute_o *leftAbsolute; // x8
  float v7; // s8
  struct UIWidget_o *v8; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v11; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v14; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x21
  int32_t vista; // w22
  float v17; // s9
  unsigned int v18; // w9
  unsigned int v19; // w8
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v21; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x19
  int32_t v23; // w20
  float v24; // s8
  float v25; // s8
  unsigned int v26; // w9
  unsigned int v27; // w8
  struct UIWidget_o *v28; // x9
  struct UIRect_AnchorPoint_o *v29; // x9
  float v30; // s9
  struct UIWidget_o *v31; // x9
  unsigned int v32; // w10
  unsigned int v33; // w8
  struct UIRect_AnchorPoint_o *v34; // x9
  float relative; // s0
  unsigned int v36; // w8
  struct FSAnchor_Absolute_o *v37; // x8
  struct UIWidget_o *v38; // x9
  struct UIRect_AnchorPoint_o *v39; // x9
  float v40; // s8
  float v41; // s8
  struct UIWidget_o *v42; // x9
  unsigned int v43; // w10
  unsigned int v44; // w8
  struct UIRect_AnchorPoint_o *v45; // x9
  float v46; // s0
  unsigned int v47; // w8
  struct FSAnchor_Absolute_o *v48; // x8
  struct UIWidget_o *v49; // x9
  struct UIRect_AnchorPoint_o *v50; // x9
  struct FSAnchor_Absolute_o *v51; // x8
  struct UIWidget_o *v52; // x9
  struct UIRect_AnchorPoint_o *v53; // x9

  if ( (byte_4C39381 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39381 = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(widget, 0, 0) )
  {
    width = UnityEngine_Screen__get_width(0);
    height = (System_Math_c *)UnityEngine_Screen__get_height(0);
    leftAbsolute = this->fields.leftAbsolute;
    if ( !leftAbsolute )
      goto LABEL_91;
    v7 = (float)width / (float)(int)height;
    if ( v7 < 1.8333 )
    {
      if ( leftAbsolute->fields.enable )
      {
        v8 = this->fields.widget;
        if ( !v8 )
          goto LABEL_91;
        leftAnchor = v8->fields.leftAnchor;
        if ( !leftAnchor )
          goto LABEL_91;
        leftAnchor->fields.absolute = leftAbsolute->fields.vista;
      }
      rightAbsolute = this->fields.rightAbsolute;
      if ( !rightAbsolute )
        goto LABEL_91;
      if ( rightAbsolute->fields.enable )
      {
        v11 = this->fields.widget;
        if ( !v11 )
          goto LABEL_91;
        rightAnchor = v11->fields.rightAnchor;
        if ( !rightAnchor )
          goto LABEL_91;
        rightAnchor->fields.absolute = rightAbsolute->fields.vista;
      }
      bottomAbsolute = this->fields.bottomAbsolute;
      if ( !bottomAbsolute )
        goto LABEL_91;
      if ( bottomAbsolute->fields.enable )
      {
        v14 = this->fields.widget;
        if ( !v14 )
          goto LABEL_91;
        bottomAnchor = v14->fields.bottomAnchor;
        if ( !bottomAnchor )
          goto LABEL_91;
        vista = bottomAbsolute->fields.vista;
        bottomAnchor->fields.absolute = vista;
        if ( v7 < 1.7778 )
        {
          if ( !byte_4C313D0 )
          {
            sub_1C32C20(&System_Math_TypeInfo);
            byte_4C313D0 = 1;
          }
          v17 = (float)((float)((float)(1.7778 - v7) * 576.0) * 16.0) / 9.0;
          height = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v18 = vcvtms_s32_f32(v17);
          if ( floorf(v17) == INFINITY )
            v19 = 0x80000000;
          else
            v19 = v18;
          bottomAnchor->fields.absolute = vista + v19;
        }
      }
      topAbsolute = this->fields.topAbsolute;
      if ( topAbsolute )
      {
        if ( !topAbsolute->fields.enable )
          return;
        v21 = this->fields.widget;
        if ( v21 )
        {
          topAnchor = v21->fields.topAnchor;
          if ( topAnchor )
          {
            v23 = topAbsolute->fields.vista;
            topAnchor->fields.absolute = v23;
            if ( v7 < 1.7778 )
            {
              v24 = (float)((float)(1.7778 - v7) * 576.0) * 16.0;
              if ( !byte_4C313D0 )
              {
                sub_1C32C20(&System_Math_TypeInfo);
                byte_4C313D0 = 1;
              }
              v25 = v24 / 9.0;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v26 = vcvtms_s32_f32(v25);
              if ( floorf(v25) == INFINITY )
                v27 = 0x80000000;
              else
                v27 = v26;
              topAnchor->fields.absolute = v23 + v27;
            }
            return;
          }
        }
      }
      goto LABEL_91;
    }
    if ( leftAbsolute->fields.enable )
    {
      v28 = this->fields.widget;
      if ( !v28 )
        goto LABEL_91;
      v29 = v28->fields.leftAnchor;
      if ( !v29 )
        goto LABEL_91;
      v29->fields.absolute = leftAbsolute->fields.scope;
      if ( v7 > 2.3333 )
      {
        if ( !byte_4C313D0 )
        {
          sub_1C32C20(&System_Math_TypeInfo);
          byte_4C313D0 = 1;
        }
        v30 = (float)((float)((float)(v7 + -2.3333) * 512.0) * 9.0) * 0.0625;
        height = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v31 = this->fields.widget;
        v32 = vcvtms_s32_f32(v30);
        if ( floorf(v30) == INFINITY )
          v33 = 0x80000000;
        else
          v33 = v32;
        if ( !v31 )
          goto LABEL_91;
        v34 = v31->fields.leftAnchor;
        if ( !v34 )
          goto LABEL_91;
        relative = v34->fields.relative;
        if ( relative == 0.0 )
        {
          v36 = v34->fields.absolute + v33;
LABEL_60:
          v34->fields.absolute = v36;
          goto LABEL_61;
        }
        if ( relative == 1.0 )
        {
          v36 = v34->fields.absolute - v33;
          goto LABEL_60;
        }
      }
    }
LABEL_61:
    v37 = this->fields.rightAbsolute;
    if ( !v37 )
      goto LABEL_91;
    if ( !v37->fields.enable )
      goto LABEL_80;
    v38 = this->fields.widget;
    if ( !v38 )
      goto LABEL_91;
    v39 = v38->fields.rightAnchor;
    if ( !v39 )
      goto LABEL_91;
    v39->fields.absolute = v37->fields.scope;
    if ( v7 <= 2.3333 )
      goto LABEL_80;
    v40 = (float)((float)(v7 + -2.3333) * 512.0) * 9.0;
    if ( !byte_4C313D0 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313D0 = 1;
    }
    v41 = v40 * 0.0625;
    height = System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v42 = this->fields.widget;
    v43 = vcvtms_s32_f32(v41);
    if ( floorf(v41) == INFINITY )
      v44 = 0x80000000;
    else
      v44 = v43;
    if ( !v42 )
      goto LABEL_91;
    v45 = v42->fields.rightAnchor;
    if ( !v45 )
      goto LABEL_91;
    v46 = v45->fields.relative;
    if ( v46 == 0.0 )
    {
      v47 = v45->fields.absolute + v44;
    }
    else
    {
      if ( v46 != 1.0 )
      {
LABEL_80:
        v48 = this->fields.bottomAbsolute;
        if ( !v48 )
          goto LABEL_91;
        if ( v48->fields.enable )
        {
          v49 = this->fields.widget;
          if ( !v49 )
            goto LABEL_91;
          v50 = v49->fields.bottomAnchor;
          if ( !v50 )
            goto LABEL_91;
          v50->fields.absolute = v48->fields.scope;
        }
        v51 = this->fields.topAbsolute;
        if ( v51 )
        {
          if ( !v51->fields.enable )
            return;
          v52 = this->fields.widget;
          if ( v52 )
          {
            v53 = v52->fields.topAnchor;
            if ( v53 )
            {
              v53->fields.absolute = v51->fields.scope;
              return;
            }
          }
        }
LABEL_91:
        sub_1C32E7C(height);
      }
      v47 = v45->fields.absolute - v44;
    }
    v45->fields.absolute = v47;
    goto LABEL_80;
  }
}


void FSAnchor_Absolute___ctor(
        FSAnchor_Absolute_o *this,
        bool enable,
        int32_t vista,
        int32_t scope,
        const MethodInfo *method)
{
  bool v5; // w22

  v5 = enable;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.enable = v5;
  this->fields.vista = vista;
  this->fields.scope = scope;
}