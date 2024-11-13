void __fastcall FSAnchor___ctor(FSAnchor_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int64_t v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  int64_t v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  int64_t v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  int64_t v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B17975 & 1) == 0 )
  {
    sub_1BCA7E0(&FSAnchor_Absolute_TypeInfo, method, v2);
    byte_4B17975 = 1;
  }
  v5 = sub_1BCAA2C(FSAnchor_Absolute_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_BYTE *)(v5 + 16) = 1;
  *(_QWORD *)(v5 + 20) = 0x4400000000LL;
  this->fields.leftAbsolute = (struct FSAnchor_Absolute_o *)v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.leftAbsolute, v5, v6, v7, v8, v9, v10, v11);
  v15 = sub_1BCAA2C(FSAnchor_Absolute_TypeInfo, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  *(_BYTE *)(v15 + 16) = 1;
  *(_QWORD *)(v15 + 20) = 0xFFFFFFBC00000000LL;
  this->fields.rightAbsolute = (struct FSAnchor_Absolute_o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rightAbsolute, v15, v16, v17, v18, v19, v20, v21);
  v25 = sub_1BCAA2C(FSAnchor_Absolute_TypeInfo, v22, v23, v24);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  *(_BYTE *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 20) = 0LL;
  this->fields.bottomAbsolute = (struct FSAnchor_Absolute_o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bottomAbsolute, v25, v26, v27, v28, v29, v30, v31);
  v35 = sub_1BCAA2C(FSAnchor_Absolute_TypeInfo, v32, v33, v34);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  *(_BYTE *)(v35 + 16) = 0;
  *(_QWORD *)(v35 + 20) = 0LL;
  this->fields.topAbsolute = (struct FSAnchor_Absolute_o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.topAbsolute, v35, v36, v37, v38, v39, v40, v41);
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
  __int64 v2; // x2
  UnityEngine_Object_o *widget; // x20
  int32_t width; // w20
  System_Math_c *height; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct FSAnchor_Absolute_o *leftAbsolute; // x8
  float v10; // s8
  struct UIWidget_o *v11; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x9
  struct FSAnchor_Absolute_o *rightAbsolute; // x8
  struct UIWidget_o *v14; // x9
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct FSAnchor_Absolute_o *bottomAbsolute; // x8
  struct UIWidget_o *v17; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x21
  int32_t vista; // w22
  float v20; // s9
  unsigned int v21; // w9
  unsigned int v22; // w8
  struct FSAnchor_Absolute_o *topAbsolute; // x8
  struct UIWidget_o *v24; // x9
  struct UIRect_AnchorPoint_o *topAnchor; // x19
  int32_t v26; // w20
  float v27; // s8
  float v28; // s8
  unsigned int v29; // w9
  unsigned int v30; // w8
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

  if ( (byte_4B17974 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17974 = 1;
  }
  widget = (UnityEngine_Object_o *)this->fields.widget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(widget, 0LL, 0LL) )
  {
    width = UnityEngine_Screen__get_width(0LL);
    height = (System_Math_c *)UnityEngine_Screen__get_height(0LL);
    leftAbsolute = this->fields.leftAbsolute;
    if ( !leftAbsolute )
      goto LABEL_91;
    v10 = (float)width / (float)(int)height;
    if ( v10 < 1.8333 )
    {
      if ( leftAbsolute->fields.enable )
      {
        v11 = this->fields.widget;
        if ( !v11 )
          goto LABEL_91;
        leftAnchor = v11->fields.leftAnchor;
        if ( !leftAnchor )
          goto LABEL_91;
        leftAnchor->fields.absolute = leftAbsolute->fields.vista;
      }
      rightAbsolute = this->fields.rightAbsolute;
      if ( !rightAbsolute )
        goto LABEL_91;
      if ( rightAbsolute->fields.enable )
      {
        v14 = this->fields.widget;
        if ( !v14 )
          goto LABEL_91;
        rightAnchor = v14->fields.rightAnchor;
        if ( !rightAnchor )
          goto LABEL_91;
        rightAnchor->fields.absolute = rightAbsolute->fields.vista;
      }
      bottomAbsolute = this->fields.bottomAbsolute;
      if ( !bottomAbsolute )
        goto LABEL_91;
      if ( bottomAbsolute->fields.enable )
      {
        v17 = this->fields.widget;
        if ( !v17 )
          goto LABEL_91;
        bottomAnchor = v17->fields.bottomAnchor;
        if ( !bottomAnchor )
          goto LABEL_91;
        vista = bottomAbsolute->fields.vista;
        bottomAnchor->fields.absolute = vista;
        if ( v10 < 1.7778 )
        {
          if ( !byte_4B109C0 )
          {
            sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
            byte_4B109C0 = 1;
          }
          v20 = (float)((float)((float)(1.7778 - v10) * 576.0) * 16.0) / 9.0;
          height = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
          v21 = vcvtms_s32_f32(v20);
          if ( floorf(v20) == INFINITY )
            v22 = 0x80000000;
          else
            v22 = v21;
          bottomAnchor->fields.absolute = vista + v22;
        }
      }
      topAbsolute = this->fields.topAbsolute;
      if ( topAbsolute )
      {
        if ( !topAbsolute->fields.enable )
          return;
        v24 = this->fields.widget;
        if ( v24 )
        {
          topAnchor = v24->fields.topAnchor;
          if ( topAnchor )
          {
            v26 = topAbsolute->fields.vista;
            topAnchor->fields.absolute = v26;
            if ( v10 < 1.7778 )
            {
              v27 = (float)((float)(1.7778 - v10) * 576.0) * 16.0;
              if ( !byte_4B109C0 )
              {
                sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
                byte_4B109C0 = 1;
              }
              v28 = v27 / 9.0;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
              v29 = vcvtms_s32_f32(v28);
              if ( floorf(v28) == INFINITY )
                v30 = 0x80000000;
              else
                v30 = v29;
              topAnchor->fields.absolute = v26 + v30;
            }
            return;
          }
        }
      }
      goto LABEL_91;
    }
    if ( leftAbsolute->fields.enable )
    {
      v31 = this->fields.widget;
      if ( !v31 )
        goto LABEL_91;
      v32 = v31->fields.leftAnchor;
      if ( !v32 )
        goto LABEL_91;
      v32->fields.absolute = leftAbsolute->fields.scope;
      if ( v10 > 2.3333 )
      {
        if ( !byte_4B109C0 )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
          byte_4B109C0 = 1;
        }
        v33 = (float)((float)((float)(v10 + -2.3333) * 512.0) * 9.0) * 0.0625;
        height = System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
        v34 = this->fields.widget;
        v35 = vcvtms_s32_f32(v33);
        if ( floorf(v33) == INFINITY )
          v36 = 0x80000000;
        else
          v36 = v35;
        if ( !v34 )
          goto LABEL_91;
        v37 = v34->fields.leftAnchor;
        if ( !v37 )
          goto LABEL_91;
        relative = v37->fields.relative;
        if ( relative == 0.0 )
        {
          v39 = v37->fields.absolute + v36;
LABEL_60:
          v37->fields.absolute = v39;
          goto LABEL_61;
        }
        if ( relative == 1.0 )
        {
          v39 = v37->fields.absolute - v36;
          goto LABEL_60;
        }
      }
    }
LABEL_61:
    v40 = this->fields.rightAbsolute;
    if ( !v40 )
      goto LABEL_91;
    if ( !v40->fields.enable )
      goto LABEL_80;
    v41 = this->fields.widget;
    if ( !v41 )
      goto LABEL_91;
    v42 = v41->fields.rightAnchor;
    if ( !v42 )
      goto LABEL_91;
    v42->fields.absolute = v40->fields.scope;
    if ( v10 <= 2.3333 )
      goto LABEL_80;
    v43 = (float)((float)(v10 + -2.3333) * 512.0) * 9.0;
    if ( !byte_4B109C0 )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
      byte_4B109C0 = 1;
    }
    v44 = v43 * 0.0625;
    height = System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
    v45 = this->fields.widget;
    v46 = vcvtms_s32_f32(v44);
    if ( floorf(v44) == INFINITY )
      v47 = 0x80000000;
    else
      v47 = v46;
    if ( !v45 )
      goto LABEL_91;
    v48 = v45->fields.rightAnchor;
    if ( !v48 )
      goto LABEL_91;
    v49 = v48->fields.relative;
    if ( v49 == 0.0 )
    {
      v50 = v48->fields.absolute + v47;
    }
    else
    {
      if ( v49 != 1.0 )
      {
LABEL_80:
        v51 = this->fields.bottomAbsolute;
        if ( !v51 )
          goto LABEL_91;
        if ( v51->fields.enable )
        {
          v52 = this->fields.widget;
          if ( !v52 )
            goto LABEL_91;
          v53 = v52->fields.bottomAnchor;
          if ( !v53 )
            goto LABEL_91;
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
LABEL_91:
        sub_1BCAA3C(height, v7);
      }
      v50 = v48->fields.absolute - v47;
    }
    v48->fields.absolute = v50;
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