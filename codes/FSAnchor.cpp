void __fastcall FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A21148 & 1) == 0 )
  {
    sub_1B715CC(&FSAnchor_Absolute_TypeInfo, method);
    byte_4A21148 = 1;
  }
  v3 = sub_1B71818(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_BYTE *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x4400000000LL;
  this->fields.leftAbsolute = (struct FSAnchor_Absolute_o *)v3;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.leftAbsolute, v3, v4, v5);
  v6 = sub_1B71818(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_BYTE *)(v6 + 16) = 1;
  *(_QWORD *)(v6 + 20) = 0xFFFFFFBC00000000LL;
  this->fields.rightAbsolute = (struct FSAnchor_Absolute_o *)v6;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.rightAbsolute, v6, v7, v8);
  v9 = sub_1B71818(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_BYTE *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 20) = 0LL;
  this->fields.bottomAbsolute = (struct FSAnchor_Absolute_o *)v9;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.bottomAbsolute, v9, v10, v11);
  v12 = sub_1B71818(FSAnchor_Absolute_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_BYTE *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 20) = 0LL;
  this->fields.topAbsolute = (struct FSAnchor_Absolute_o *)v12;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.topAbsolute, v12, v13, v14);
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
  System_Math_c *height; // x0
  __int64 v6; // x1
  struct FSAnchor_Absolute_o *leftAbsolute; // x8
  float v8; // s8
  struct UIWidget_o *v9; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v12; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v15; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x21
  int32_t vista; // w22
  float v18; // s9
  unsigned int v19; // w9
  unsigned int v20; // w8
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v22; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x19
  int32_t v24; // w20
  float v25; // s8
  float v26; // s8
  unsigned int v27; // w9
  unsigned int v28; // w8
  struct UIWidget_o *v29; // x9
  struct UIRect_AnchorPoint_o *v30; // x9
  float v31; // s9
  struct UIWidget_o *v32; // x9
  unsigned int v33; // w10
  unsigned int v34; // w8
  struct UIRect_AnchorPoint_o *v35; // x9
  float relative; // s0
  unsigned int v37; // w8
  struct FSAnchor_Absolute_o *v38; // x8
  struct UIWidget_o *v39; // x9
  struct UIRect_AnchorPoint_o *v40; // x9
  float v41; // s8
  float v42; // s8
  struct UIWidget_o *v43; // x9
  unsigned int v44; // w10
  unsigned int v45; // w8
  struct UIRect_AnchorPoint_o *v46; // x9
  float v47; // s0
  unsigned int v48; // w8
  struct FSAnchor_Absolute_o *v49; // x8
  struct UIWidget_o *v50; // x9
  struct UIRect_AnchorPoint_o *v51; // x9
  struct FSAnchor_Absolute_o *v52; // x8
  struct UIWidget_o *v53; // x9
  struct UIRect_AnchorPoint_o *v54; // x9

  if ( (byte_4A21147 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A21147 = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(widget, 0LL, 0LL) )
  {
    width = UnityEngine_Screen__get_width(0LL);
    height = (System_Math_c *)UnityEngine_Screen__get_height(0LL);
    leftAbsolute = this->fields.leftAbsolute;
    if ( !leftAbsolute )
      goto LABEL_91;
    v8 = (float)width / (float)(int)height;
    if ( v8 < 1.8333 )
    {
      if ( leftAbsolute->fields.enable )
      {
        v9 = this->fields.widget;
        if ( !v9 )
          goto LABEL_91;
        leftAnchor = v9->fields.leftAnchor;
        if ( !leftAnchor )
          goto LABEL_91;
        leftAnchor->fields.absolute = leftAbsolute->fields.vista;
      }
      rightAbsolute = this->fields.rightAbsolute;
      if ( !rightAbsolute )
        goto LABEL_91;
      if ( rightAbsolute->fields.enable )
      {
        v12 = this->fields.widget;
        if ( !v12 )
          goto LABEL_91;
        rightAnchor = v12->fields.rightAnchor;
        if ( !rightAnchor )
          goto LABEL_91;
        rightAnchor->fields.absolute = rightAbsolute->fields.vista;
      }
      bottomAbsolute = this->fields.bottomAbsolute;
      if ( !bottomAbsolute )
        goto LABEL_91;
      if ( bottomAbsolute->fields.enable )
      {
        v15 = this->fields.widget;
        if ( !v15 )
          goto LABEL_91;
        bottomAnchor = v15->fields.bottomAnchor;
        if ( !bottomAnchor )
          goto LABEL_91;
        vista = bottomAbsolute->fields.vista;
        bottomAnchor->fields.absolute = vista;
        if ( v8 < 1.7778 )
        {
          if ( !byte_4A1A750 )
          {
            sub_1B715CC(&System_Math_TypeInfo, v6);
            byte_4A1A750 = 1;
          }
          v18 = (float)((float)((float)(1.7778 - v8) * 576.0) * 16.0) / 9.0;
          height = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v19 = vcvtms_s32_f32(v18);
          if ( floorf(v18) == INFINITY )
            v20 = 0x80000000;
          else
            v20 = v19;
          bottomAnchor->fields.absolute = vista + v20;
        }
      }
      topAbsolute = this->fields.topAbsolute;
      if ( topAbsolute )
      {
        if ( !topAbsolute->fields.enable )
          return;
        v22 = this->fields.widget;
        if ( v22 )
        {
          topAnchor = v22->fields.topAnchor;
          if ( topAnchor )
          {
            v24 = topAbsolute->fields.vista;
            topAnchor->fields.absolute = v24;
            if ( v8 < 1.7778 )
            {
              v25 = (float)((float)(1.7778 - v8) * 576.0) * 16.0;
              if ( !byte_4A1A750 )
              {
                sub_1B715CC(&System_Math_TypeInfo, v6);
                byte_4A1A750 = 1;
              }
              v26 = v25 / 9.0;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v27 = vcvtms_s32_f32(v26);
              if ( floorf(v26) == INFINITY )
                v28 = 0x80000000;
              else
                v28 = v27;
              topAnchor->fields.absolute = v24 + v28;
            }
            return;
          }
        }
      }
      goto LABEL_91;
    }
    if ( leftAbsolute->fields.enable )
    {
      v29 = this->fields.widget;
      if ( !v29 )
        goto LABEL_91;
      v30 = v29->fields.leftAnchor;
      if ( !v30 )
        goto LABEL_91;
      v30->fields.absolute = leftAbsolute->fields.scope;
      if ( v8 > 2.3333 )
      {
        if ( !byte_4A1A750 )
        {
          sub_1B715CC(&System_Math_TypeInfo, v6);
          byte_4A1A750 = 1;
        }
        v31 = (float)((float)((float)(v8 + -2.3333) * 512.0) * 9.0) * 0.0625;
        height = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v32 = this->fields.widget;
        v33 = vcvtms_s32_f32(v31);
        if ( floorf(v31) == INFINITY )
          v34 = 0x80000000;
        else
          v34 = v33;
        if ( !v32 )
          goto LABEL_91;
        v35 = v32->fields.leftAnchor;
        if ( !v35 )
          goto LABEL_91;
        relative = v35->fields.relative;
        if ( relative == 0.0 )
        {
          v37 = v35->fields.absolute + v34;
LABEL_60:
          v35->fields.absolute = v37;
          goto LABEL_61;
        }
        if ( relative == 1.0 )
        {
          v37 = v35->fields.absolute - v34;
          goto LABEL_60;
        }
      }
    }
LABEL_61:
    v38 = this->fields.rightAbsolute;
    if ( !v38 )
      goto LABEL_91;
    if ( !v38->fields.enable )
      goto LABEL_80;
    v39 = this->fields.widget;
    if ( !v39 )
      goto LABEL_91;
    v40 = v39->fields.rightAnchor;
    if ( !v40 )
      goto LABEL_91;
    v40->fields.absolute = v38->fields.scope;
    if ( v8 <= 2.3333 )
      goto LABEL_80;
    v41 = (float)((float)(v8 + -2.3333) * 512.0) * 9.0;
    if ( !byte_4A1A750 )
    {
      sub_1B715CC(&System_Math_TypeInfo, v6);
      byte_4A1A750 = 1;
    }
    v42 = v41 * 0.0625;
    height = System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v43 = this->fields.widget;
    v44 = vcvtms_s32_f32(v42);
    if ( floorf(v42) == INFINITY )
      v45 = 0x80000000;
    else
      v45 = v44;
    if ( !v43 )
      goto LABEL_91;
    v46 = v43->fields.rightAnchor;
    if ( !v46 )
      goto LABEL_91;
    v47 = v46->fields.relative;
    if ( v47 == 0.0 )
    {
      v48 = v46->fields.absolute + v45;
    }
    else
    {
      if ( v47 != 1.0 )
      {
LABEL_80:
        v49 = this->fields.bottomAbsolute;
        if ( !v49 )
          goto LABEL_91;
        if ( v49->fields.enable )
        {
          v50 = this->fields.widget;
          if ( !v50 )
            goto LABEL_91;
          v51 = v50->fields.bottomAnchor;
          if ( !v51 )
            goto LABEL_91;
          v51->fields.absolute = v49->fields.scope;
        }
        v52 = this->fields.topAbsolute;
        if ( v52 )
        {
          if ( !v52->fields.enable )
            return;
          v53 = this->fields.widget;
          if ( v53 )
          {
            v54 = v53->fields.topAnchor;
            if ( v54 )
            {
              v54->fields.absolute = v52->fields.scope;
              return;
            }
          }
        }
LABEL_91:
        sub_1B71828(height, v6);
      }
      v48 = v46->fields.absolute - v45;
    }
    v46->fields.absolute = v48;
    goto LABEL_80;
  }
}


void __fastcall FSAnchor_Absolute___ctor(
        FSAnchor_Absolute_o *this,
        bool enable,
        int32_t vista,
        int32_t scope,
        const MethodInfo *method)
{
  bool v5; // w22

  v5 = enable;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.enable = v5;
  this->fields.vista = vista;
  this->fields.scope = scope;
}