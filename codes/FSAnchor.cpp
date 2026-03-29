void FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D3237D & 1) == 0 )
  {
    sub_1C93AD4(&FSAnchor_Absolute_TypeInfo);
    byte_4D3237D = 1;
  }
  v3 = sub_1C93D20(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_BYTE *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x4400000000LL;
  this->fields.leftAbsolute = (struct FSAnchor_Absolute_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.leftAbsolute, v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_1C93D20(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_BYTE *)(v10 + 16) = 1;
  *(_QWORD *)(v10 + 20) = 0xFFFFFFBC00000000LL;
  this->fields.rightAbsolute = (struct FSAnchor_Absolute_o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.rightAbsolute, v10, v11, v12, v13, v14, v15, v16);
  v17 = sub_1C93D20(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  *(_BYTE *)(v17 + 16) = 0;
  *(_QWORD *)(v17 + 20) = 0;
  this->fields.bottomAbsolute = (struct FSAnchor_Absolute_o *)v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bottomAbsolute, v17, v18, v19, v20, v21, v22, v23);
  v24 = sub_1C93D20(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  *(_BYTE *)(v24 + 16) = 0;
  *(_QWORD *)(v24 + 20) = 0;
  this->fields.topAbsolute = (struct FSAnchor_Absolute_o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.topAbsolute, v24, v25, v26, v27, v28, v29, v30);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FSAnchor__Awake(FSAnchor_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    FSAnchor__SetAnchor(this, v3);
}


bool FSAnchor__CorrectedNotch(FSAnchor_o *this, const MethodInfo *method)
{
  int32_t calcNotchSize; // w20
  FSUtility_c *v4; // x0
  float SafeAreaWidth; // s8
  unsigned int v6; // w9
  int32_t v7; // w23
  const MethodInfo *width; // x0
  int v9; // w20
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  float ScreenToConfigSizeRate; // s8
  System_Math_c *v13; // x0
  float v14; // s8
  struct UIWidget_o *widget; // x8
  unsigned int v16; // w10
  int32_t v17; // w20
  const MethodInfo *v18; // x3
  struct UIWidget_o *v19; // x8

  if ( (byte_4D3237C & 1) == 0 )
  {
    sub_1C93AD4(&FSUtility_TypeInfo);
    byte_4D3237C = 1;
  }
  calcNotchSize = this->fields.calcNotchSize;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsCalcNotch(calcNotchSize, method) )
    return 0;
  v4 = FSUtility_TypeInfo;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  SafeAreaWidth = FSUtility__GetSafeAreaWidth((const MethodInfo *)v4);
  if ( !byte_4D2A7BA )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A7BA = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = vcvtps_s32_f32(SafeAreaWidth);
  v7 = ceilf(SafeAreaWidth) == INFINITY ? 0x80000000 : v6;
  if ( v7 >= UnityEngine_Screen__get_width(0) )
    return 0;
  width = (const MethodInfo *)UnityEngine_Screen__get_width(0);
  v9 = (int)width;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  ScreenToConfigSizeRate = FSUtility__GetScreenToConfigSizeRate(width);
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v13 = System_Math_TypeInfo;
  v14 = (float)((float)(v9 - v7) * 0.5) * ScreenToConfigSizeRate;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  widget = this->fields.widget;
  v16 = vcvtms_s32_f32(v14);
  if ( floorf(v14) == INFINITY )
    v17 = 0x80000000;
  else
    v17 = v16;
  if ( !widget
    || (FSAnchor__SetAbsoluteValueForNotch(this->fields.leftAbsolute, widget->fields.leftAnchor, v17, v11),
        (v19 = this->fields.widget) == 0) )
  {
    sub_1C93D2C(v13, v10);
  }
  FSAnchor__SetAbsoluteValueForNotch(this->fields.rightAbsolute, v19->fields.rightAnchor, v17, v18);
  return 1;
}


void FSAnchor__SetAbsoluteValueForNotch(
        FSAnchor_Absolute_o *absolute,
        UIRect_AnchorPoint_o *anchorPoint,
        int32_t abs,
        const MethodInfo *method)
{
  float relative; // s0
  int32_t vista; // w8
  int32_t v6; // w8

  if ( !absolute )
    goto LABEL_10;
  if ( !absolute->fields.enable )
    return;
  if ( !anchorPoint )
LABEL_10:
    sub_1C93D2C(absolute, anchorPoint);
  relative = anchorPoint->fields.relative;
  vista = absolute->fields.vista;
  anchorPoint->fields.absolute = vista;
  if ( relative <= 0.0 )
  {
    v6 = vista + abs;
  }
  else
  {
    if ( relative < 1.0 )
      return;
    v6 = vista - abs;
  }
  anchorPoint->fields.absolute = v6;
}


void FSAnchor__SetAnchor(FSAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *widget; // x20
  int32_t width; // w20
  float v5; // s8
  const MethodInfo *v6; // x1
  System_Math_c *v7; // x0
  __int64 v8; // x1
  struct FSAnchor_Absolute_o *leftAbsolute; // x8
  struct UIWidget_o *v10; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v13; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v16; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x21
  int32_t vista; // w22
  float v19; // s9
  unsigned int v20; // w9
  unsigned int v21; // w8
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v23; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x19
  int32_t v25; // w20
  float v26; // s8
  float v27; // s8
  unsigned int v28; // w9
  unsigned int v29; // w8
  struct FSAnchor_Absolute_o *v30; // x8
  struct UIWidget_o *v31; // x9
  struct UIRect_AnchorPoint_o *v32; // x9
  float v33; // s9
  struct UIWidget_o *v34; // x9
  unsigned int v35; // w10
  unsigned int v36; // w8
  struct UIRect_AnchorPoint_o *v37; // x9
  float relative; // s0
  unsigned int v39; // w8
  struct FSAnchor_Absolute_o *v40; // x8
  struct UIWidget_o *v41; // x9
  struct UIRect_AnchorPoint_o *v42; // x9
  float v43; // s8
  float v44; // s8
  struct UIWidget_o *v45; // x9
  unsigned int v46; // w10
  unsigned int v47; // w8
  struct UIRect_AnchorPoint_o *v48; // x9
  float v49; // s0
  unsigned int v50; // w8
  struct FSAnchor_Absolute_o *v51; // x8
  struct UIWidget_o *v52; // x9
  struct UIRect_AnchorPoint_o *v53; // x9
  struct FSAnchor_Absolute_o *v54; // x8
  struct UIWidget_o *v55; // x9
  struct UIRect_AnchorPoint_o *v56; // x9

  if ( (byte_4D3237B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3237B = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(widget, 0, 0) )
  {
    width = UnityEngine_Screen__get_width(0);
    v5 = (float)width / (float)UnityEngine_Screen__get_height(0);
    v7 = (System_Math_c *)FSAnchor__CorrectedNotch(this, v6);
    if ( v5 < 1.8333 )
    {
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        leftAbsolute = this->fields.leftAbsolute;
        if ( !leftAbsolute )
          goto LABEL_94;
        if ( leftAbsolute->fields.enable )
        {
          v10 = this->fields.widget;
          if ( !v10 )
            goto LABEL_94;
          leftAnchor = v10->fields.leftAnchor;
          if ( !leftAnchor )
            goto LABEL_94;
          leftAnchor->fields.absolute = leftAbsolute->fields.vista;
        }
        rightAbsolute = this->fields.rightAbsolute;
        if ( !rightAbsolute )
          goto LABEL_94;
        if ( rightAbsolute->fields.enable )
        {
          v13 = this->fields.widget;
          if ( !v13 )
            goto LABEL_94;
          rightAnchor = v13->fields.rightAnchor;
          if ( !rightAnchor )
            goto LABEL_94;
          rightAnchor->fields.absolute = rightAbsolute->fields.vista;
        }
      }
      bottomAbsolute = this->fields.bottomAbsolute;
      if ( !bottomAbsolute )
        goto LABEL_94;
      if ( bottomAbsolute->fields.enable )
      {
        v16 = this->fields.widget;
        if ( !v16 )
          goto LABEL_94;
        bottomAnchor = v16->fields.bottomAnchor;
        if ( !bottomAnchor )
          goto LABEL_94;
        vista = bottomAbsolute->fields.vista;
        bottomAnchor->fields.absolute = vista;
        if ( v5 < 1.7778 )
        {
          if ( !byte_4D2A138 )
          {
            sub_1C93AD4(&System_Math_TypeInfo);
            byte_4D2A138 = 1;
          }
          v19 = (float)((float)((float)(1.7778 - v5) * 576.0) * 16.0) / 9.0;
          v7 = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v20 = vcvtms_s32_f32(v19);
          if ( floorf(v19) == INFINITY )
            v21 = 0x80000000;
          else
            v21 = v20;
          bottomAnchor->fields.absolute = vista + v21;
        }
      }
      topAbsolute = this->fields.topAbsolute;
      if ( topAbsolute )
      {
        if ( !topAbsolute->fields.enable )
          return;
        v23 = this->fields.widget;
        if ( v23 )
        {
          topAnchor = v23->fields.topAnchor;
          if ( topAnchor )
          {
            v25 = topAbsolute->fields.vista;
            topAnchor->fields.absolute = v25;
            if ( v5 < 1.7778 )
            {
              v26 = (float)((float)(1.7778 - v5) * 576.0) * 16.0;
              if ( !byte_4D2A138 )
              {
                sub_1C93AD4(&System_Math_TypeInfo);
                byte_4D2A138 = 1;
              }
              v27 = v26 / 9.0;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v28 = vcvtms_s32_f32(v27);
              if ( floorf(v27) == INFINITY )
                v29 = 0x80000000;
              else
                v29 = v28;
              topAnchor->fields.absolute = v25 + v29;
            }
            return;
          }
        }
      }
      goto LABEL_94;
    }
    if ( ((unsigned __int8)v7 & 1) != 0 )
      goto LABEL_83;
    v30 = this->fields.leftAbsolute;
    if ( !v30 )
      goto LABEL_94;
    if ( v30->fields.enable )
    {
      v31 = this->fields.widget;
      if ( !v31 )
        goto LABEL_94;
      v32 = v31->fields.leftAnchor;
      if ( !v32 )
        goto LABEL_94;
      v32->fields.absolute = v30->fields.scope;
      if ( v5 > 2.3333 )
      {
        if ( !byte_4D2A138 )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A138 = 1;
        }
        v33 = (float)((float)((float)(v5 + -2.3333) * 512.0) * 9.0) * 0.0625;
        v7 = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v34 = this->fields.widget;
        v35 = vcvtms_s32_f32(v33);
        if ( floorf(v33) == INFINITY )
          v36 = 0x80000000;
        else
          v36 = v35;
        if ( !v34 )
          goto LABEL_94;
        v37 = v34->fields.leftAnchor;
        if ( !v37 )
          goto LABEL_94;
        relative = v37->fields.relative;
        if ( relative == 0.0 )
        {
          v39 = v37->fields.absolute + v36;
        }
        else
        {
          if ( relative != 1.0 )
            goto LABEL_64;
          v39 = v37->fields.absolute - v36;
        }
        v37->fields.absolute = v39;
      }
    }
LABEL_64:
    v40 = this->fields.rightAbsolute;
    if ( !v40 )
      goto LABEL_94;
    if ( !v40->fields.enable )
      goto LABEL_83;
    v41 = this->fields.widget;
    if ( !v41 )
      goto LABEL_94;
    v42 = v41->fields.rightAnchor;
    if ( !v42 )
      goto LABEL_94;
    v42->fields.absolute = v40->fields.scope;
    if ( v5 <= 2.3333 )
      goto LABEL_83;
    v43 = (float)((float)(v5 + -2.3333) * 512.0) * 9.0;
    if ( !byte_4D2A138 )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A138 = 1;
    }
    v44 = v43 * 0.0625;
    v7 = System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v45 = this->fields.widget;
    v46 = vcvtms_s32_f32(v44);
    if ( floorf(v44) == INFINITY )
      v47 = 0x80000000;
    else
      v47 = v46;
    if ( !v45 )
      goto LABEL_94;
    v48 = v45->fields.rightAnchor;
    if ( !v48 )
      goto LABEL_94;
    v49 = v48->fields.relative;
    if ( v49 == 0.0 )
    {
      v50 = v48->fields.absolute + v47;
LABEL_82:
      v48->fields.absolute = v50;
      goto LABEL_83;
    }
    if ( v49 == 1.0 )
    {
      v50 = v48->fields.absolute - v47;
      goto LABEL_82;
    }
LABEL_83:
    v51 = this->fields.bottomAbsolute;
    if ( !v51 )
      goto LABEL_94;
    if ( v51->fields.enable )
    {
      v52 = this->fields.widget;
      if ( !v52 )
        goto LABEL_94;
      v53 = v52->fields.bottomAnchor;
      if ( !v53 )
        goto LABEL_94;
      v53->fields.absolute = v51->fields.scope;
    }
    v54 = this->fields.topAbsolute;
    if ( v54 )
    {
      if ( !v54->fields.enable )
        return;
      v55 = this->fields.widget;
      if ( v55 )
      {
        v56 = v55->fields.topAnchor;
        if ( v56 )
        {
          v56->fields.absolute = v54->fields.scope;
          return;
        }
      }
    }
LABEL_94:
    sub_1C93D2C(v7, v8);
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