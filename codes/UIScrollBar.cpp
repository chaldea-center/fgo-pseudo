void UIScrollBar___ctor(UIScrollBar_o *this, const MethodInfo *method)
{
  this->fields.mSize = 1.0;
  this->fields.mDir = 2;
  *(_QWORD *)&this->fields.rawValue = 0x23F800000LL;
  UIProgressBar___ctor((UIProgressBar_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScrollBar__ForceUpdate(UIScrollBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFG; // x20
  float mSize; // s0
  float v5; // s8
  float v6; // s9
  float v7; // s2
  float v8; // s10
  float value; // s0
  float v10; // s2
  float v11; // s0
  float v12; // s0
  float v13; // s11
  float v14; // s10
  bool isHorizontal; // w0
  UIWidget_o *v16; // x20
  bool v17; // w21
  UIRect_o *isInverted; // x0
  __int64 v19; // x1
  float v20; // s3 OVERLAPPED
  float v21; // s1
  float v22; // s0
  float v23; // s2
  UnityEngine_Object_o *thumb; // x20
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  float v29; // s8
  float v30; // s9
  float v31; // s11
  float v32; // s10
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30F04 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30F04 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    UIProgressBar__ForceUpdate((UIProgressBar_o *)this, 0);
    return;
  }
  mSize = this->fields.mSize;
  v5 = 1.0;
  v6 = 0.0;
  v7 = fminf(mSize, 1.0);
  this->fields.mIsDirty = 0;
  if ( mSize < 0.0 )
    v8 = 0.0;
  else
    v8 = v7 * 0.5;
  value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
  v10 = fminf(value, 1.0);
  if ( value < 0.0 )
    v11 = 0.0;
  else
    v11 = v10;
  v12 = v8 + (float)(v11 * (float)((float)(1.0 - v8) - v8));
  v13 = v12 - v8;
  v14 = v8 + v12;
  isHorizontal = UIProgressBar__get_isHorizontal((UIProgressBar_o *)this, 0);
  v16 = this->fields.mFG;
  v17 = isHorizontal;
  isInverted = (UIRect_o *)UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0);
  if ( ((unsigned __int8)isInverted & 1) != 0 )
    v20 = 1.0 - v13;
  else
    v20 = v14;
  if ( ((unsigned __int8)isInverted & 1) != 0 )
    v21 = 1.0 - v14;
  else
    v21 = v13;
  if ( v17 )
  {
    if ( !v16 )
      goto LABEL_31;
    v5 = v20;
    v6 = v21;
    v21 = 0.0;
    v20 = 1.0;
  }
  else if ( !v16 )
  {
    goto LABEL_31;
  }
  v22 = v6;
  v23 = v5;
  UIWidget__set_drawRegion(v16, *(UnityEngine_Vector4_o *)(&v20 - 3), 0);
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    isInverted = (UIRect_o *)this->fields.mFG;
    if ( isInverted )
    {
      ((void (__fastcall *)(UIRect_o *, const char *))isInverted->klass[1]._1.name)(
        isInverted,
        isInverted->klass[1]._1.namespaze);
      isInverted = (UIRect_o *)this->fields.mFG;
      if ( isInverted )
      {
        v29 = v25;
        v30 = v26;
        v31 = v27;
        v32 = v28;
        isInverted = (UIRect_o *)UIRect__get_cachedTransform(isInverted, 0);
        if ( isInverted )
        {
          v33.fields.x = v29 + (float)((float)(v31 - v29) * 0.5);
          v33.fields.y = v30 + (float)((float)(v32 - v30) * 0.5);
          v33.fields.z = 0.0;
          v34 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)isInverted, v33, 0);
          UIProgressBar__SetThumbPosition((UIProgressBar_o *)this, v34, 0);
          return;
        }
      }
    }
LABEL_31:
    sub_1C942F0(isInverted, v19);
  }
}


float UIScrollBar__LocalToValue(UIScrollBar_o *this, UnityEngine_Vector2_o localPos, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *mFG; // x20
  __int64 v7; // x1
  float mSize; // s0
  struct UIWidget_o *isHorizontal; // x0
  float v10; // s2
  float v11; // s10
  __int64 v12; // x20
  unsigned int v13; // w8
  float v14; // s0
  float v15; // s1
  float v16; // s5
  float v17; // s3
  float v18; // s0
  float v19; // s2
  float v20; // s10
  float v21; // s11
  float v22; // s0
  float v24; // s2
  float v25; // s1
  float v26; // s0
  float v27; // s10
  float v28; // s11
  float v29; // s0
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4

  y = localPos.fields.y;
  x = localPos.fields.x;
  if ( (byte_4D30F03 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30F03 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v30.fields.x = x;
    v30.fields.y = y;
    return UIProgressBar__LocalToValue((UIProgressBar_o *)this, v30, 0);
  }
  mSize = this->fields.mSize;
  isHorizontal = this->fields.mFG;
  v10 = fminf(mSize, 1.0);
  if ( mSize < 0.0 )
    v11 = 0.0;
  else
    v11 = v10 * 0.5;
  if ( !isHorizontal
    || (v12 = ((__int64 (__fastcall *)(struct UIWidget_o *, const MethodInfo *))isHorizontal->klass->vtable._10_get_localCorners.methodPtr)(
                isHorizontal,
                isHorizontal->klass->vtable._10_get_localCorners.method),
        isHorizontal = (struct UIWidget_o *)UIProgressBar__get_isHorizontal((UIProgressBar_o *)this, 0),
        !v12) )
  {
    sub_1C942F0(isHorizontal, v7);
  }
  v13 = *(_DWORD *)(v12 + 24);
  if ( !v13 )
    goto LABEL_38;
  v14 = 1.0 - v11;
  if ( ((unsigned __int8)isHorizontal & 1) != 0 )
  {
    if ( v13 > 2 )
    {
      v15 = *(float *)(v12 + 32);
      v16 = fminf(v11, 1.0);
      v17 = fminf(v14, 1.0);
      if ( v11 < 0.0 )
        v16 = 0.0;
      if ( v14 < 0.0 )
        v18 = 0.0;
      else
        v18 = v17;
      v19 = *(float *)(v12 + 56) - v15;
      v20 = v15 + (float)(v16 * v19);
      v21 = v15 + (float)(v18 * v19);
      if ( (float)(v21 - v20) != 0.0 )
      {
        if ( UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0) )
          v22 = v21 - x;
        else
          v22 = x - v20;
        return v22 / (float)(v21 - v20);
      }
      return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    }
LABEL_38:
    sub_1C942F8(isHorizontal);
  }
  if ( v13 <= 1 )
    goto LABEL_38;
  v24 = fminf(v11, 1.0);
  if ( v11 < 0.0 )
    v24 = 0.0;
  if ( v13 <= 3 )
    goto LABEL_38;
  v25 = fminf(v14, 1.0);
  if ( v14 < 0.0 )
    v26 = 0.0;
  else
    v26 = v25;
  v27 = *(float *)(v12 + 36) + (float)(v24 * (float)(*(float *)(v12 + 48) - *(float *)(v12 + 36)));
  v28 = *(float *)(v12 + 72) + (float)(v26 * (float)(*(float *)(v12 + 60) - *(float *)(v12 + 72)));
  if ( (float)(v28 - v27) == 0.0 )
    return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
  if ( UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0) )
    v29 = v28 - y;
  else
    v29 = y - v27;
  return v29 / (float)(v28 - v27);
}


// local variable allocation has failed, the output may be wrong!
void UIScrollBar__OnDragBackground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x1
  const MethodInfo *v7; // x2
  float alpha; // s0 OVERLAPPED
  float v9; // s1

  if ( (byte_4D30F06 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30F06 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  if ( v5->static_fields->currentScheme != 2 )
  {
    alpha = UIProgressBar__get_alpha((UIProgressBar_o *)this, 0);
    v9 = 1.0;
    if ( alpha == 1.0 )
      UISlider__OnDragBackground((UISlider_o *)this, v6, *(UnityEngine_Vector2_o *)&alpha, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScrollBar__OnDragForeground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x1
  const MethodInfo *v7; // x2
  float alpha; // s0 OVERLAPPED
  float v9; // s1

  if ( (byte_4D30F08 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30F08 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  if ( v5->static_fields->currentScheme != 2 )
  {
    alpha = UIProgressBar__get_alpha((UIProgressBar_o *)this, 0);
    v9 = 1.0;
    if ( alpha == 1.0 )
      UISlider__OnDragForeground((UISlider_o *)this, v6, *(UnityEngine_Vector2_o *)&alpha, v7);
  }
}


void UIScrollBar__OnPressBackground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UICamera_c *v6; // x0
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D30F05 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30F05 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  if ( v6->static_fields->currentScheme != 2 && UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) == 1.0 )
    UISlider__OnPressBackground((UISlider_o *)this, v7, isPressed, v8);
}


void UIScrollBar__OnPressForeground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UICamera_c *v6; // x0
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D30F07 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30F07 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  if ( v6->static_fields->currentScheme != 2 && UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) == 1.0 )
    UISlider__OnPressForeground((UISlider_o *)this, v7, isPressed, v8);
}


void UIScrollBar__OnStart(UIScrollBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v9; // x20
  GrandQuestFolderBoardItem_o *v10; // x21
  System_Delegate_o *klass; // x22
  UIEventListener_BoolDelegate_o *v12; // x23
  System_Delegate_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Delegate_o *v20; // x8
  UIEventListener_BoolDelegate_c *v21; // x1
  System_Delegate_o *monitor; // t1
  UIEventListener_VectorDelegate_o *v23; // x22
  System_Delegate_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UIEventListener_VectorDelegate_c *v31; // x1
  UnityEngine_Object_o *mFG; // x20
  UnityEngine_Object_o *v33; // x20
  UnityEngine_Object_o *v34; // x21
  Il2CppObject *v35; // x20
  Il2CppObject *v36; // x20
  UnityEngine_GameObject_o *v37; // x0
  GrandQuestFolderBoardItem_o *v38; // x21
  System_Delegate_o *v39; // x22
  UIEventListener_BoolDelegate_o *v40; // x23
  System_Delegate_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  UIEventListener_BoolDelegate_c *v48; // x1
  System_Delegate_o *v49; // t1
  UIEventListener_VectorDelegate_o *v50; // x22
  System_Delegate_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  UIEventListener_VectorDelegate_c *v58; // x1
  struct UIWidget_o *v59; // x8

  if ( (byte_4D30F02 & 1) == 0 )
  {
    sub_1C94098(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UIScrollBar_OnDragBackground__);
    sub_1C94098(&Method_UIScrollBar_OnDragForeground__);
    sub_1C94098(&Method_UIScrollBar_OnPressBackground__);
    sub_1C94098(&Method_UIScrollBar_OnPressForeground__);
    sub_1C94098(&UIEventListener_VectorDelegate_TypeInfo);
    byte_4D30F02 = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v5 )
      goto LABEL_57;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v5,
                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      goto LABEL_14;
    v5 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v5 )
      goto LABEL_57;
    v7 = UnityEngine_Component__GetComponent_object_(
           v5,
           (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
    {
LABEL_14:
      v5 = (UnityEngine_Component_o *)this->fields.mBG;
      if ( !v5 )
        goto LABEL_57;
      gameObject = UnityEngine_Component__get_gameObject(v5, 0);
      v5 = (UnityEngine_Component_o *)UIEventListener__Get(gameObject, 0);
      if ( !v5 )
        goto LABEL_57;
      v9 = v5;
      v10 = (GrandQuestFolderBoardItem_o *)&v5[3];
      klass = (System_Delegate_o *)v5[3].klass;
      v12 = (UIEventListener_BoolDelegate_o *)sub_1C942E4(UIEventListener_BoolDelegate_TypeInfo);
      UIEventListener_BoolDelegate___ctor(v12, (Il2CppObject *)this, Method_UIScrollBar_OnPressBackground__, 0);
      v13 = System_Delegate__Combine(klass, (System_Delegate_o *)v12, 0);
      v20 = v13;
      if ( v13 )
      {
        v21 = UIEventListener_BoolDelegate_TypeInfo;
        if ( (UIEventListener_BoolDelegate_c *)v13->klass != UIEventListener_BoolDelegate_TypeInfo )
          goto LABEL_52;
        v10->klass = (GrandQuestFolderBoardItem_c *)v13;
        if ( (UIEventListener_BoolDelegate_c *)v13->klass != v21 )
          goto LABEL_52;
      }
      else
      {
        v10->klass = 0;
      }
      sub_1C9403C(v10, (int32_t)v13, v14, v15, v16, v17, v18, v19);
      monitor = (System_Delegate_o *)v9[4].monitor;
      v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
      v23 = (UIEventListener_VectorDelegate_o *)sub_1C942E4(UIEventListener_VectorDelegate_TypeInfo);
      UIEventListener_VectorDelegate___ctor(v23, (Il2CppObject *)this, Method_UIScrollBar_OnDragBackground__, 0);
      v24 = System_Delegate__Combine(monitor, (System_Delegate_o *)v23, 0);
      v20 = v24;
      if ( v24 )
      {
        v31 = UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v24->klass != UIEventListener_VectorDelegate_TypeInfo )
          goto LABEL_52;
        v9->klass = (UnityEngine_Component_c *)v24;
        if ( (UIEventListener_VectorDelegate_c *)v24->klass != v31 )
          goto LABEL_52;
      }
      else
      {
        v9->klass = 0;
      }
      sub_1C9403C((GrandQuestFolderBoardItem_o *)v9, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    }
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v5 )
      goto LABEL_57;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v33, v34, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v5 )
        goto LABEL_57;
      v35 = UnityEngine_Component__GetComponent_object_(
              v5,
              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0) )
        goto LABEL_42;
      v5 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v5 )
        goto LABEL_57;
      v36 = UnityEngine_Component__GetComponent_object_(
              v5,
              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0) )
      {
LABEL_42:
        v5 = (UnityEngine_Component_o *)this->fields.mFG;
        if ( !v5 )
          goto LABEL_57;
        v37 = UnityEngine_Component__get_gameObject(v5, 0);
        v5 = (UnityEngine_Component_o *)UIEventListener__Get(v37, 0);
        if ( !v5 )
          goto LABEL_57;
        v9 = v5;
        v38 = (GrandQuestFolderBoardItem_o *)&v5[3];
        v39 = (System_Delegate_o *)v5[3].klass;
        v40 = (UIEventListener_BoolDelegate_o *)sub_1C942E4(UIEventListener_BoolDelegate_TypeInfo);
        UIEventListener_BoolDelegate___ctor(v40, (Il2CppObject *)this, Method_UIScrollBar_OnPressForeground__, 0);
        v41 = System_Delegate__Combine(v39, (System_Delegate_o *)v40, 0);
        v20 = v41;
        if ( v41 )
        {
          v48 = UIEventListener_BoolDelegate_TypeInfo;
          if ( (UIEventListener_BoolDelegate_c *)v41->klass != UIEventListener_BoolDelegate_TypeInfo )
            goto LABEL_52;
          v38->klass = (GrandQuestFolderBoardItem_c *)v41;
          if ( (UIEventListener_BoolDelegate_c *)v41->klass != v48 )
            goto LABEL_52;
        }
        else
        {
          v38->klass = 0;
        }
        sub_1C9403C(v38, (int32_t)v41, v42, v43, v44, v45, v46, v47);
        v49 = (System_Delegate_o *)v9[4].monitor;
        v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
        v50 = (UIEventListener_VectorDelegate_o *)sub_1C942E4(UIEventListener_VectorDelegate_TypeInfo);
        UIEventListener_VectorDelegate___ctor(v50, (Il2CppObject *)this, Method_UIScrollBar_OnDragForeground__, 0);
        v51 = System_Delegate__Combine(v49, (System_Delegate_o *)v50, 0);
        v20 = v51;
        if ( !v51 )
        {
LABEL_53:
          v9->klass = (UnityEngine_Component_c *)v20;
          goto LABEL_54;
        }
        v58 = UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v51->klass == UIEventListener_VectorDelegate_TypeInfo )
        {
          v9->klass = (UnityEngine_Component_c *)v51;
          if ( (UIEventListener_VectorDelegate_c *)v51->klass == v58 )
          {
LABEL_54:
            sub_1C9403C((GrandQuestFolderBoardItem_o *)v9, (int32_t)v20, v52, v53, v54, v55, v56, v57);
            v59 = this->fields.mFG;
            if ( v59 )
            {
              v59->fields.autoResizeBoxCollider = 1;
              return;
            }
LABEL_57:
            sub_1C942F0(v5, v4);
          }
        }
LABEL_52:
        sub_1C9468C(v20);
        goto LABEL_53;
      }
    }
  }
}


void UIScrollBar__Upgrade(UIScrollBar_o *this, const MethodInfo *method)
{
  int32_t mDir; // w8
  _BOOL4 mInverted; // w9
  float mScroll; // s0
  int v5; // w11
  int32_t v6; // w8

  mDir = this->fields.mDir;
  if ( mDir != 2 )
  {
    mInverted = this->fields.mInverted;
    mScroll = this->fields.mScroll;
    this->fields.mDir = 2;
    if ( mInverted )
      v5 = 2;
    else
      v5 = 3;
    if ( mDir )
      v6 = v5;
    else
      v6 = mInverted;
    this->fields.mValue = mScroll;
    this->fields.mFill = v6;
  }
}


float UIScrollBar__get_barSize(UIScrollBar_o *this, const MethodInfo *method)
{
  return this->fields.mSize;
}


float UIScrollBar__get_scrollValue(UIScrollBar_o *this, const MethodInfo *method)
{
  return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
}


void UIScrollBar__set_barSize(UIScrollBar_o *this, float value, const MethodInfo *method)
{
  float v5; // s0
  UnityEngine_Object_o *current; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D30F01 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UIProgressBar_TypeInfo);
    byte_4D30F01 = 1;
  }
  v5 = fminf(value, 1.0);
  if ( value < 0.0 )
    v5 = 0.0;
  if ( this->fields.mSize != v5 )
  {
    this->fields.mSize = v5;
    this->fields.mIsDirty = 1;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) && this->fields.onChange )
      {
        UIProgressBar_TypeInfo->static_fields->current = (struct UIProgressBar_o *)this;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
          (int32_t)this,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        onChange = this->fields.onChange;
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Execute_49911148(onChange, v13);
        UIProgressBar_TypeInfo->static_fields->current = 0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
          0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      ((void (__fastcall *)(UIScrollBar_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
        this,
        this->klass->vtable._7_ForceUpdate.method);
    }
  }
}


void UIScrollBar__set_scrollValue(UIScrollBar_o *this, float value, const MethodInfo *method)
{
  UIProgressBar__set_value((UIProgressBar_o *)this, value, 0);
}