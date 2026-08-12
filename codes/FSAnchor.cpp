void FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5972296 & 1) == 0 )
  {
    sub_2213A60(&FSAnchor_Absolute_TypeInfo);
    byte_5972296 = 1;
  }
  v3 = sub_2213CCC(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_BYTE *)(v3 + 16) = 1;
  this->fields.leftAbsolute = (struct FSAnchor_Absolute_o *)v3;
  *(_QWORD *)(v3 + 20) = 0x4400000000LL;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.leftAbsolute, v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_2213CCC(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_BYTE *)(v10 + 16) = 1;
  this->fields.rightAbsolute = (struct FSAnchor_Absolute_o *)v10;
  *(_QWORD *)(v10 + 20) = 0xFFFFFFBC00000000LL;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rightAbsolute, v10, v11, v12, v13, v14, v15, v16);
  v17 = sub_2213CCC(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  *(_BYTE *)(v17 + 16) = 0;
  this->fields.bottomAbsolute = (struct FSAnchor_Absolute_o *)v17;
  *(_QWORD *)(v17 + 20) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bottomAbsolute, v17, v18, v19, v20, v21, v22, v23);
  v24 = sub_2213CCC(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  *(_BYTE *)(v24 + 16) = 0;
  this->fields.topAbsolute = (struct FSAnchor_Absolute_o *)v24;
  *(_QWORD *)(v24 + 20) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.topAbsolute, v24, v25, v26, v27, v28, v29, v30);
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
  __int64 v4; // x1
  FSUtility_c *v5; // x0
  __int64 v6; // x1
  float SafeAreaWidth; // s8
  unsigned int v8; // w9
  int32_t v9; // w23
  const MethodInfo *width; // x0
  __int64 v11; // x1
  int v12; // w20
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  float ScreenToConfigSizeRate; // s8
  float v16; // s9
  System_Math_c *v17; // x0
  float v18; // s8
  unsigned int v19; // w9
  struct UIWidget_o *widget; // x8
  int32_t v21; // w20
  const MethodInfo *v22; // x3
  struct UIWidget_o *v23; // x8

  if ( (byte_5972295 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_5972295 = 1;
  }
  calcNotchSize = this->fields.calcNotchSize;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  if ( !FSUtility__IsCalcNotch(calcNotchSize, method) )
    return 0;
  v5 = FSUtility_TypeInfo;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v4);
  SafeAreaWidth = FSUtility__GetSafeAreaWidth((const MethodInfo *)v5);
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v8 = vcvtps_s32_f32(SafeAreaWidth);
  v9 = ceilf(SafeAreaWidth) == INFINITY ? 0x80000000 : v8;
  if ( v9 >= UnityEngine_Screen__get_width(0) )
    return 0;
  width = (const MethodInfo *)UnityEngine_Screen__get_width(0);
  v12 = (int)width;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v11);
  ScreenToConfigSizeRate = FSUtility__GetScreenToConfigSizeRate(width);
  v16 = vcvts_n_f32_s32(v12 - v9, 1u);
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v17 = System_Math_TypeInfo;
  v18 = v16 * ScreenToConfigSizeRate;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
  v19 = vcvtms_s32_f32(v18);
  widget = this->fields.widget;
  if ( floorf(v18) == INFINITY )
    v21 = 0x80000000;
  else
    v21 = v19;
  if ( !widget
    || (FSAnchor__SetAbsoluteValueForNotch(this->fields.leftAbsolute, widget->fields.leftAnchor, v21, v14),
        (v23 = this->fields.widget) == 0) )
  {
    sub_2213CDC(v17, v13);
  }
  FSAnchor__SetAbsoluteValueForNotch(this->fields.rightAbsolute, v23->fields.rightAnchor, v21, v22);
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
    sub_2213CDC(absolute, anchorPoint);
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
  unsigned int v34; // w10
  struct UIWidget_o *v35; // x9
  unsigned int v36; // w8
  struct UIRect_AnchorPoint_o *v37; // x9
  float relative; // s0
  unsigned int v39; // w8
  struct FSAnchor_Absolute_o *v40; // x8
  struct UIWidget_o *v41; // x9
  struct UIRect_AnchorPoint_o *v42; // x9
  struct UIWidget_o *v43; // x8
  struct UIRect_AnchorPoint_o *v44; // x8
  float v45; // s0
  int v46; // w9
  struct FSAnchor_Absolute_o *v47; // x8
  struct UIWidget_o *v48; // x9
  struct UIRect_AnchorPoint_o *v49; // x9
  struct FSAnchor_Absolute_o *v50; // x8
  struct UIWidget_o *v51; // x9
  struct UIRect_AnchorPoint_o *v52; // x9

  if ( (byte_5972294 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972294 = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
          goto LABEL_87;
        if ( leftAbsolute->fields.enable )
        {
          v10 = this->fields.widget;
          if ( !v10 )
            goto LABEL_87;
          leftAnchor = v10->fields.leftAnchor;
          if ( !leftAnchor )
            goto LABEL_87;
          leftAnchor->fields.absolute = leftAbsolute->fields.vista;
        }
        rightAbsolute = this->fields.rightAbsolute;
        if ( !rightAbsolute )
          goto LABEL_87;
        if ( rightAbsolute->fields.enable )
        {
          v13 = this->fields.widget;
          if ( !v13 )
            goto LABEL_87;
          rightAnchor = v13->fields.rightAnchor;
          if ( !rightAnchor )
            goto LABEL_87;
          rightAnchor->fields.absolute = rightAbsolute->fields.vista;
        }
      }
      bottomAbsolute = this->fields.bottomAbsolute;
      if ( !bottomAbsolute )
        goto LABEL_87;
      if ( bottomAbsolute->fields.enable )
      {
        v16 = this->fields.widget;
        if ( !v16 )
          goto LABEL_87;
        bottomAnchor = v16->fields.bottomAnchor;
        if ( !bottomAnchor )
          goto LABEL_87;
        vista = bottomAbsolute->fields.vista;
        bottomAnchor->fields.absolute = vista;
        if ( v5 < 1.7778 )
        {
          if ( !byte_5969ADF )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_5969ADF = 1;
          }
          v19 = (float)((float)((float)(1.7778 - v5) * 576.0) * 16.0) / 9.0;
          v7 = System_Math_TypeInfo;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
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
              if ( !byte_5969ADF )
              {
                sub_2213A60(&System_Math_TypeInfo);
                byte_5969ADF = 1;
              }
              v27 = v26 / 9.0;
              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
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
      goto LABEL_87;
    }
    if ( ((unsigned __int8)v7 & 1) != 0 )
      goto LABEL_76;
    v30 = this->fields.leftAbsolute;
    if ( !v30 )
      goto LABEL_87;
    if ( v30->fields.enable )
    {
      v31 = this->fields.widget;
      if ( !v31 )
        goto LABEL_87;
      v32 = v31->fields.leftAnchor;
      if ( !v32 )
        goto LABEL_87;
      v32->fields.absolute = v30->fields.scope;
      if ( v5 > 2.3333 )
      {
        if ( !byte_5969ADF )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_5969ADF = 1;
        }
        v33 = (float)((float)((float)(v5 + -2.3333) * 512.0) * 9.0) * 0.0625;
        v7 = System_Math_TypeInfo;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
        v34 = vcvtms_s32_f32(v33);
        v35 = this->fields.widget;
        if ( floorf(v33) == INFINITY )
          v36 = 0x80000000;
        else
          v36 = v34;
        if ( !v35 )
          goto LABEL_87;
        v37 = v35->fields.leftAnchor;
        if ( !v37 )
          goto LABEL_87;
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
      goto LABEL_87;
    if ( !v40->fields.enable )
      goto LABEL_76;
    v41 = this->fields.widget;
    if ( !v41 )
      goto LABEL_87;
    v42 = v41->fields.rightAnchor;
    if ( !v42 )
      goto LABEL_87;
    v42->fields.absolute = v40->fields.scope;
    if ( v5 <= 2.3333 )
      goto LABEL_76;
    v7 = (System_Math_c *)sub_30E1C4C(0, (float)((float)((float)(v5 + -2.3333) * 512.0) * 9.0) * 0.0625);
    v43 = this->fields.widget;
    if ( !v43 )
      goto LABEL_87;
    v44 = v43->fields.rightAnchor;
    if ( !v44 )
      goto LABEL_87;
    v45 = v44->fields.relative;
    if ( v45 == 0.0 )
    {
      v46 = v44->fields.absolute + (_DWORD)v7;
LABEL_75:
      v44->fields.absolute = v46;
      goto LABEL_76;
    }
    if ( v45 == 1.0 )
    {
      v46 = v44->fields.absolute - (_DWORD)v7;
      goto LABEL_75;
    }
LABEL_76:
    v47 = this->fields.bottomAbsolute;
    if ( !v47 )
      goto LABEL_87;
    if ( v47->fields.enable )
    {
      v48 = this->fields.widget;
      if ( !v48 )
        goto LABEL_87;
      v49 = v48->fields.bottomAnchor;
      if ( !v49 )
        goto LABEL_87;
      v49->fields.absolute = v47->fields.scope;
    }
    v50 = this->fields.topAbsolute;
    if ( v50 )
    {
      if ( !v50->fields.enable )
        return;
      v51 = this->fields.widget;
      if ( v51 )
      {
        v52 = v51->fields.topAnchor;
        if ( v52 )
        {
          v52->fields.absolute = v50->fields.scope;
          return;
        }
      }
    }
LABEL_87:
    sub_2213CDC(v7, v8);
  }
}


void FSAnchor_Absolute___ctor(
        FSAnchor_Absolute_o *this,
        bool enable,
        int32_t vista,
        int32_t scope,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.enable = enable;
  this->fields.vista = vista;
  this->fields.scope = scope;
}