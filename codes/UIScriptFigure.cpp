void UIScriptFigure___ctor(UIScriptFigure_o *this, const MethodInfo *method)
{
  struct UIStandFigureM_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Queue_float__c *v10; // x0
  System_Collections_Generic_Queue_float__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  UIScriptChara_c *v19; // x0

  if ( (byte_593A7AE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_float___ctor__);
    sub_21FFC50(&System_Collections_Generic_Queue_float__TypeInfo);
    sub_21FFC50(&UIScriptChara_TypeInfo);
    sub_21FFC50(&UIStandFigureM___TypeInfo);
    byte_593A7AE = 1;
  }
  v3 = (struct UIStandFigureM_array *)sub_21FFD10(UIStandFigureM___TypeInfo, 2);
  this->fields.standFigureList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.standFigureList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = System_Collections_Generic_Queue_float__TypeInfo;
  this->fields.blinkNextTime = 3.4028e38;
  v11 = (System_Collections_Generic_Queue_float__o *)sub_21FFEBC(v10);
  System_Collections_Generic_Queue_float____ctor(
    v11,
    (const MethodInfo_46A031C *)Method_System_Collections_Generic_Queue_float___ctor__);
  this->fields.blinkSecList = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.blinkSecList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v19 = UIScriptChara_TypeInfo;
  this->fields.OFFSET_FIGURE_Y = 288.0;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, v18);
  UIScriptChara___ctor((UIScriptChara_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__ChangeCharacter(
        UIScriptFigure_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t ServantId; // w22
  int32_t ImageLimitCount; // w23
  int32_t ImageForm; // w24
  System_Collections_Generic_Queue_float__o *blinkSecList; // x0
  __int64 v17; // x1
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  Il2CppClass **v22; // x9
  UIStandFigureRender_o *v23; // x25
  UIStandFigureRender_o *v24; // x26
  System_Action_o *v25; // x26
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_593A7A7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_float__Clear__);
    sub_21FFC50(&Method_UIScriptFigure_UpdateChange__);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A7A7 = 1;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&kind);
  ServantId = UIStandFigureRender__GetServantId(imageName, 0);
  ImageLimitCount = UIStandFigureRender__GetImageLimitCount(imageName, 0);
  ImageForm = UIStandFigureRender__GetImageForm(imageName, 0);
  UIScriptChara__ChangeCharacter_51854672((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, 0);
  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_17;
  mainIndex = this->fields.mainIndex;
  max_length = standFigureList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_21FFED4(blinkSecList);
  }
  v22 = &standFigureList->obj.klass + mainIndex;
  this->fields.isDisp = 0;
  v23 = (UIStandFigureRender_o *)v22[4];
  v24 = (UIStandFigureRender_o *)standFigureList->m_Items[backIndex];
  if ( !v23 )
    goto LABEL_17;
  UIStandFigureRender__SetActive((UIStandFigureRender_o *)v22[4], 1, 0);
  UIStandFigureRender__SetAlpha(v23, 0.0, 0);
  if ( this->fields.changeKind != 4 )
  {
    UIStandFigureRender__SetDepth(v23, 0.1, 0);
    if ( !v24 )
      goto LABEL_17;
    UIStandFigureRender__SetDepth(v24, 0.0, 0);
    if ( this->fields.changeKind == 3 )
    {
      blinkSecList = this->fields.blinkSecList;
      if ( !blinkSecList )
        goto LABEL_17;
      System_Collections_Generic_Queue_float___Clear(
        blinkSecList,
        (const MethodInfo_46A05B0 *)Method_System_Collections_Generic_Queue_float__Clear__);
      *(_QWORD *)&this->fields.blinkTime = 0x7F7FFFFF00000000LL;
    }
  }
  UIStandFigureRender__SetShadow(v23, this->fields.isShadow, 0);
  v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_UIScriptFigure_UpdateChange__, 0);
  if ( UIStandFigureM__SetCharacter_50984376(
         (UIStandFigureM_o *)v23,
         ServantId,
         ImageLimitCount,
         faceType,
         ImageForm,
         v25,
         0,
         0) )
  {
    return;
  }
  this->fields.changeCallback = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.changeCallback, 0, v26, v27, v28, v29, v30, v31);
  if ( !callback )
LABEL_17:
    sub_21FFECC(blinkSecList, v17);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__EndChange(UIScriptFigure_o *this, int32_t kind, const MethodInfo *method)
{
  int32_t changeKind; // w20
  UIScriptFigure_o *v4; // x19
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  Il2CppClass **v9; // x9
  UIStandFigureRender_o *v10; // x22
  UIStandFigureRender_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  MissionNaviTransitionBoardItem_o *p_changeCallback; // x19
  struct System_Action_o *v19; // x20
  struct System_Action_o *changeCallback; // t1

  changeKind = kind;
  v4 = this;
  if ( (byte_593A7AA & 1) == 0 )
  {
    this = (UIScriptFigure_o *)sub_21FFC50(&Method_System_Collections_Generic_Queue_float__Clear__);
    byte_593A7AA = 1;
  }
  standFigureList = v4->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_19;
  mainIndex = v4->fields.mainIndex;
  max_length = standFigureList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v4->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_21FFED4(this);
  }
  v9 = &standFigureList->obj.klass + mainIndex;
  v10 = (UIStandFigureRender_o *)v9[4];
  if ( !v10 )
    goto LABEL_19;
  v11 = (UIStandFigureRender_o *)standFigureList->m_Items[backIndex];
  UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)v9[4], 1.0, 0);
  if ( !v11 )
    goto LABEL_19;
  UIStandFigureRender__SetAlpha(v11, 0.0, 0);
  UIStandFigureM__ReleaseCharacter((UIStandFigureM_o *)v11, 0);
  if ( !changeKind )
    changeKind = v4->fields.changeKind;
  if ( changeKind != 3 )
  {
    if ( changeKind != 4 )
      goto LABEL_16;
    this = (UIScriptFigure_o *)v4->fields.crossFadeStandFigure;
    if ( this )
    {
      UIStandFigureRender__SetActive((UIStandFigureRender_o *)this, 0, 0);
      UIStandFigureRender__SetActive(v10, 1, 0);
      UIStandFigureRender__SetDepth(v10, 0.1, 0);
      UIStandFigureRender__SetDepth(v11, 0.0, 0);
      goto LABEL_16;
    }
LABEL_19:
    sub_21FFECC(this, *(_QWORD *)&kind);
  }
  this = (UIScriptFigure_o *)v4->fields.blinkSecList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_Queue_float___Clear(
    (System_Collections_Generic_Queue_float__o *)this,
    (const MethodInfo_46A05B0 *)Method_System_Collections_Generic_Queue_float__Clear__);
  *(_QWORD *)&v4->fields.blinkTime = 0x7F7FFFFF00000000LL;
LABEL_16:
  changeCallback = v4->fields.changeCallback;
  p_changeCallback = (MissionNaviTransitionBoardItem_o *)&v4->fields.changeCallback;
  v19 = changeCallback;
  p_changeCallback[-1].fields._QuestId_k__BackingField = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0;
    sub_21FFBF4(p_changeCallback, 0, v12, v13, v14, v15, v16, v17);
    ((void (__fastcall *)(intptr_t, intptr_t))v19->fields.invoke_impl)(v19->fields.method_code, v19->fields.method);
  }
}


void UIScriptFigure__EndSet(UIScriptFigure_o *this, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  UIScriptFigure_o *v4; // x19
  Il2CppClass **v5; // x8
  UIStandFigureRender_o *v6; // x20
  UnityEngine_Vector2_o CenterOffset; // kr00_8
  float z; // s10
  float v9; // s10
  float v10; // s10
  float v11; // s10
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  MissionNaviTransitionBoardItem_o *p_setCallback; // x19
  struct System_Action_o *v19; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  v5 = &standFigureList->obj.klass + mainIndex;
  v6 = (UIStandFigureRender_o *)v5[4];
  if ( !v6 )
    goto LABEL_23;
  UIStandFigureM__SetDispOffset((UIStandFigureM_o *)v5[4], 0);
  CenterOffset = UIStandFigureRender__GetCenterOffset(v6, 0);
  this = (UIScriptFigure_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptFigure_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  z = localPosition.fields.z;
  this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v22.fields.x = CenterOffset.fields.x;
  v22.fields.y = CenterOffset.fields.y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0);
  this = (UIScriptFigure_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptFigure_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v9 = v23.fields.z;
  this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v24.fields.x = CenterOffset.fields.x;
  v24.fields.y = CenterOffset.fields.y;
  v24.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
  this = (UIScriptFigure_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptFigure_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v10 = v25.fields.z;
  this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v26.fields.x = CenterOffset.fields.x;
  v26.fields.y = CenterOffset.fields.y;
  v26.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0);
  this = (UIScriptFigure_o *)v4->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0
    || (v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptFigure_o *)v4->fields.baseShadowEffect) == 0)
    || (v11 = v27.fields.z,
        (this = (UIScriptFigure_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
  {
LABEL_23:
    sub_21FFECC(this, method);
  }
  v28.fields.x = CenterOffset.fields.x;
  v28.fields.y = CenterOffset.fields.y;
  v28.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0);
  setCallback = v4->fields.setCallback;
  p_setCallback = (MissionNaviTransitionBoardItem_o *)&v4->fields.setCallback;
  v19 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0;
    sub_21FFBF4(p_setCallback, 0, v12, v13, v14, v15, v16, v17);
    ((void (__fastcall *)(intptr_t, intptr_t))v19->fields.invoke_impl)(v19->fields.method_code, v19->fields.method);
  }
}


UnityEngine_Transform_o *UIScriptFigure__GetBody(UIScriptFigure_o *this, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)standFigureList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  return UIStandFigureM__GetBody((UIStandFigureM_o *)this, 0);
}


UnityEngine_Texture_o *UIScriptFigure__GetBodySubTexture(UIScriptFigure_o *this, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)standFigureList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  return UIStandFigureM__GetBodySubTexture((UIStandFigureM_o *)this, 0);
}


UnityEngine_Vector3_o UIScriptFigure__GetOffsetEdgeBlur(UIScriptFigure_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *v3; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  unsigned int localPosition; // s8
  float OFFSET_FIGURE_Y; // s10
  float y; // s9
  float v9; // s1
  float v10; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UIScriptFigure_o *, const MethodInfo *))this->klass->vtable._8_GetBody.methodPtr)(
                                    this,
                                    this->klass->vtable._8_GetBody.method);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v5 = v3;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v3, 0);
  v11 = UnityEngine_Transform__get_localPosition(v5, 0);
  OFFSET_FIGURE_Y = this->fields.OFFSET_FIGURE_Y;
  y = v11.fields.y;
  result = UnityEngine_Transform__get_localPosition(v5, 0);
  v9 = y + OFFSET_FIGURE_Y;
  v10 = *(float *)&localPosition;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}


UnityEngine_Rect_o UIScriptFigure__GetRectEdgeBlur(UIScriptFigure_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s2
  float v4; // s3
  float v5; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 0.0;
  v3 = 1.0;
  v4 = 1.0;
  v5 = 0.25195;
  result.fields.m_Height = v4;
  result.fields.m_Width = v3;
  result.fields.m_YMin = v5;
  result.fields.m_XMin = v2;
  return result;
}


bool UIScriptFigure__IsBusyMoveAlpha(UIScriptFigure_o *this, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  UIStandFigureM_o *v4; // x8

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  v4 = standFigureList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, method);
  return v4->fields.isBusyMoveAlpha;
}


void UIScriptFigure__MoveAlpha(UIScriptFigure_o *this, float duration, float a, const MethodInfo *method)
{
  UIScriptChara_o *v6; // x19
  UIScriptChara_c *klass; // x8
  __int64 mainIndex; // x9

  v6 = (UIScriptChara_o *)this;
  if ( this->fields.changeKind == 4 )
  {
    this = (UIScriptFigure_o *)this->fields.crossFadeStandFigure;
    if ( !this )
      goto LABEL_8;
    UIStandFigureRender__EndMoveAlphaForce((UIStandFigureRender_o *)this, 0);
  }
  klass = v6[1].klass;
  v6->fields.isDisp = a > 0.0;
  if ( !klass )
    goto LABEL_8;
  mainIndex = v6->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(klass->_1.namespaze) )
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)*((_QWORD *)&klass->_1.byval_arg.data + mainIndex);
  if ( !this )
LABEL_8:
    sub_21FFECC(this, method);
  UIStandFigureRender__MoveAlpha((UIStandFigureRender_o *)this, duration, a, 0, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, 0);
}


void UIScriptFigure__MoveAlphaSpeed(UIScriptFigure_o *this, float speed, float a, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19

  standFigureList = this->fields.standFigureList;
  this->fields.isDisp = a > 0.0;
  if ( !standFigureList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)standFigureList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  UIStandFigureRender__MoveAlphaSpeed((UIStandFigureRender_o *)this, speed, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, 0);
}


void UIScriptFigure__SetAlpha(UIScriptFigure_o *this, float a, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v5; // x19

  standFigureList = this->fields.standFigureList;
  this->fields.isDisp = a > 0.0;
  if ( !standFigureList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v5 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)standFigureList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  UIStandFigureRender__SetAlpha((UIStandFigureRender_o *)this, a, 0);
  UIScriptChara__RecoverShadowEffect(v5, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetCharacter(
        UIScriptFigure_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  int32_t ServantId; // w23
  int32_t ImageLimitCount; // w24
  __int64 ImageForm; // x0
  __int64 v16; // x1
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v19; // x8
  UIStandFigureM_o *v20; // x26
  int32_t v21; // w25
  System_Action_o *v22; // x27
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_593A7AB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UIStandFigureRender_TypeInfo);
    byte_593A7AB = 1;
  }
  this->fields.setCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    *(System_String_o **)&faceType,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v12);
  ServantId = UIStandFigureRender__GetServantId(imageName, 0);
  ImageLimitCount = UIStandFigureRender__GetImageLimitCount(imageName, 0);
  ImageForm = UIStandFigureRender__GetImageForm(imageName, 0);
  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_11;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(ImageForm);
  v19 = &standFigureList->obj.klass + mainIndex;
  v20 = (UIStandFigureM_o *)v19[4];
  if ( !v20 )
    goto LABEL_11;
  v21 = ImageForm;
  UIStandFigureRender__SetFilter((UIStandFigureRender_o *)v19[4], this->fields.filterName, this->fields.filterColor, 0);
  v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_EndSet.method, 0);
  if ( UIStandFigureM__SetCharacter_50984376(v20, ServantId, ImageLimitCount, faceType, v21, v22, 0, 0) )
    return;
  this->fields.setCallback = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.setCallback, 0, v23, v24, v25, v26, v27, v28);
  if ( !callback )
LABEL_11:
    sub_21FFECC(ImageForm, v16);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetDepth(UIScriptFigure_o *this, int32_t d, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  UIScriptFigure_o *v5; // x21
  UIStandFigureRender_o *v7; // x19
  float v8; // s2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)this->fields.baseDepth;
  if ( !this
    || (v7 = (UIStandFigureRender_o *)standFigureList->m_Items[mainIndex],
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptFigure_o *)v5->fields.baseDepth) == 0)
    || (v8 = (float)-d * 10.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, localPosition, 0),
        !v7) )
  {
LABEL_7:
    sub_21FFECC(this, *(_QWORD *)&d);
  }
  UIStandFigureRender__SetDepth(v7, 0.1, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetFace(UIScriptFigure_o *this, int32_t faceType, float fadeTime, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)standFigureList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, *(_QWORD *)&faceType);
  UIStandFigureRender__SetFace_51032680((UIStandFigureRender_o *)this, faceType, fadeTime, 0);
}


void UIScriptFigure__SetFilter(
        UIScriptFigure_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float a; // s8
  struct System_String_o **p_filterName; // x19
  float b; // s9
  float g; // s10
  float r; // s11
  UIStandFigureRender_o *v15; // x0
  __int64 v16; // x1
  struct System_String_o *v17; // x8
  __int64 mainIndex; // x9
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = filterColor.fields.a;
  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  v17 = p_filterName[26];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v17 )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(v17[1].klass) )
    sub_21FFED4(v15);
  v15 = (UIStandFigureRender_o *)*((_QWORD *)&v17[1].monitor + mainIndex);
  if ( !v15 )
LABEL_5:
    sub_21FFECC(v15, v16);
  v19.fields.b = b;
  v19.fields.a = a;
  v19.fields.r = r;
  v19.fields.g = g;
  UIStandFigureRender__SetFilter(v15, *p_filterName, v19, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetMaskInteraction(UIScriptFigure_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x20
  int max_length; // w8
  __int64 v6; // x21

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_8;
  max_length = standFigureList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_21FFED4(this);
      this = (UIScriptFigure_o *)standFigureList->m_Items[v6];
      if ( !this )
        break;
      UIStandFigureRender__SetMaskInteraction((UIStandFigureRender_o *)this, maskInteraction, 0);
      max_length = standFigureList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, *(_QWORD *)&maskInteraction);
  }
}


void UIScriptFigure__SetMaterial(UIScriptFigure_o *this, const MethodInfo *method)
{
  UnityEngine_Shader_o *v3; // x21
  UnityEngine_Material_o *v4; // x20
  UIStandFigureM_o *v5; // x0
  __int64 v6; // x1
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9

  if ( (byte_593A7AD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&StringLiteral_5116/*"Custom/SpriteWithMask"*/);
    byte_593A7AD = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5116/*"Custom/SpriteWithMask"*/, 0);
  v4 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v4, v3, 0);
  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
    sub_21FFED4(v5);
  v5 = standFigureList->m_Items[mainIndex];
  if ( !v5 )
LABEL_7:
    sub_21FFECC(v5, v6);
  ((void (__fastcall *)(UIStandFigureM_o *, UnityEngine_Material_o *, const MethodInfo *))v5->klass->vtable._25_set_material.methodPtr)(
    v5,
    v4,
    v5->klass->vtable._25_set_material.method);
}


void UIScriptFigure__SetOverlap(UIScriptFigure_o *this, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  Il2CppClass **v6; // x9
  UIStandFigureRender_o *v7; // x20
  UIStandFigureRender_o *v8; // x19
  bool Enabled; // w21
  float v10; // s0
  float v11; // s0

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_13;
  mainIndex = this->fields.mainIndex;
  max_length = standFigureList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_21FFED4(this);
  }
  v6 = &standFigureList->obj.klass + mainIndex;
  v7 = (UIStandFigureRender_o *)v6[4];
  if ( !v7
    || ((v8 = (UIStandFigureRender_o *)standFigureList->m_Items[backIndex],
         !(Enabled = UIStandFigureRender__get_Enabled((UIStandFigureRender_o *)v6[4], 0)))
      ? (v10 = 1.0)
      : (v10 = 0.0),
        UIStandFigureRender__SetAlpha(v7, v10, 0),
        !v8) )
  {
LABEL_13:
    sub_21FFECC(this, method);
  }
  if ( Enabled )
    v11 = 1.0;
  else
    v11 = 0.0;
  UIStandFigureRender__SetAlpha(v8, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetShadow(UIScriptFigure_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  UIScriptChara_o *v5; // x19
  __int64 mainIndex; // x9
  __int64 backIndex; // x8
  UIScriptChara_c *klass; // x9

  if ( this->fields.isShadow != isShadow )
  {
    standFigureList = this->fields.standFigureList;
    v5 = (UIScriptChara_o *)this;
    this->fields.isShadow = isShadow;
    if ( !standFigureList )
      goto LABEL_11;
    mainIndex = this->fields.mainIndex;
    if ( (unsigned int)mainIndex < LODWORD(standFigureList->max_length) )
    {
      this = (UIScriptFigure_o *)standFigureList->m_Items[mainIndex];
      if ( !this )
        goto LABEL_11;
      UIStandFigureRender__SetShadow((UIStandFigureRender_o *)this, isShadow, 0);
      backIndex = (unsigned int)v5->fields.backIndex;
      if ( (backIndex & 0x80000000) != 0 )
      {
LABEL_10:
        UIScriptChara__RecoverShadowEffect(v5, isSkip, 0);
        return;
      }
      klass = v5[1].klass;
      if ( !klass )
LABEL_11:
        sub_21FFECC(this, isShadow);
      if ( (unsigned int)backIndex < LODWORD(klass->_1.namespaze) )
      {
        this = (UIScriptFigure_o *)*((_QWORD *)&klass->_1.byval_arg.data + backIndex);
        if ( this )
        {
          UIStandFigureRender__SetShadow((UIStandFigureRender_o *)this, isShadow, 0);
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    sub_21FFED4(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetSortingOrder(UIScriptFigure_o *this, int32_t order, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x20
  int max_length; // w8
  __int64 v6; // x21

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_8;
  max_length = standFigureList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_21FFED4(this);
      this = (UIScriptFigure_o *)standFigureList->m_Items[v6];
      if ( !this )
        break;
      UIStandFigureRender__SetSortingOrder((UIStandFigureRender_o *)this, order, 0);
      max_length = standFigureList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, *(_QWORD *)&order);
  }
}


void UIScriptFigure__SetSpecialEffect(
        UIScriptFigure_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  float v20; // s4
  float v21; // s5
  float v22; // s6
  __int64 v23; // x1
  UnityEngine_Object_o *CharaEffect; // x23
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  UIStandFigureM_o *v29; // x21
  uint32_t v30; // w0
  __int64 *v31; // x8
  __int64 *v32; // x8
  float colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_593A7AC & 1) == 0 )
  {
    colora = color.fields.a;
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaAppearanceEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaAppearanceReverseEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaErasureEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaErasureReverseEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaFlashEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaWipeEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaWipeTimeEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaWipeTimeReverseEffectComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26161/*"wipe"*/);
    sub_21FFC50(&StringLiteral_17495/*"appearanceReverse"*/);
    sub_21FFC50(&StringLiteral_19239/*"darkEnemyErasure"*/);
    sub_21FFC50(&StringLiteral_26167/*"wipeTimeRe"*/);
    sub_21FFC50(&StringLiteral_19240/*"darkWipe"*/);
    sub_21FFC50(&StringLiteral_20355/*"flashErasure"*/);
    sub_21FFC50(&StringLiteral_17494/*"appearance"*/);
    sub_21FFC50(&StringLiteral_19913/*"erasure"*/);
    sub_21FFC50(&StringLiteral_19914/*"erasureReverse"*/);
    sub_21FFC50(&StringLiteral_19874/*"enemyErasure"*/);
    sub_21FFC50(&StringLiteral_26166/*"wipeTime"*/);
    sub_21FFC50(&StringLiteral_20353/*"flash"*/);
    color.fields.a = colora;
    byte_593A7AC = 1;
  }
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  v20 = r;
  v21 = g;
  v22 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v34,
                                          time,
                                          color,
                                          range,
                                          isSkip,
                                          isPause,
                                          0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(CharaEffect, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    standFigureList = this->fields.standFigureList;
    if ( !standFigureList )
      goto LABEL_63;
    mainIndex = this->fields.mainIndex;
    if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
      sub_21FFED4(Component_object);
    v29 = standFigureList->m_Items[mainIndex];
    v30 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v30 > 0x8DA714B6 )
    {
      if ( v30 > 0xD4B34506 )
      {
        switch ( v30 )
        {
          case 0xE7555186:
            v32 = &StringLiteral_26161/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v32 = &StringLiteral_19240/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)StringLiteral_17494/*"appearance"*/, 0);
            if ( ((unsigned __int8)Component_object & 1) == 0 )
              return;
            if ( !CharaEffect )
              goto LABEL_63;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)CharaEffect,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaAppearanceEffectComponent___);
            if ( !Component_object )
              goto LABEL_63;
            CharaAppearanceEffectComponent__AppearanceStart(
              (CharaAppearanceEffectComponent_o *)Component_object,
              v29,
              0);
            goto LABEL_62;
          default:
            return;
        }
        Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)*v32, 0);
        if ( ((unsigned __int8)Component_object & 1) == 0 )
          return;
        if ( CharaEffect )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)CharaEffect,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaWipeEffectComponent___);
          if ( Component_object )
          {
            CharaWipeEffectComponent__WipeStart((CharaWipeEffectComponent_o *)Component_object, v29, 0);
            goto LABEL_62;
          }
        }
        goto LABEL_63;
      }
      if ( v30 == -1669539180 )
      {
        v31 = &StringLiteral_20355/*"flashErasure"*/;
        goto LABEL_53;
      }
      if ( v30 == -1350193879 )
      {
        Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)StringLiteral_20353/*"flash"*/, 0);
        if ( ((unsigned __int8)Component_object & 1) == 0 )
          return;
        if ( CharaEffect )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)CharaEffect,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaFlashEffectComponent___);
          if ( Component_object )
          {
            CharaFlashEffectComponent__FlashStart((CharaFlashEffectComponent_o *)Component_object, v29, 0);
            return;
          }
        }
        goto LABEL_63;
      }
      if ( v30 != -726448890 )
        return;
      Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)StringLiteral_19914/*"erasureReverse"*/, 0);
      if ( ((unsigned __int8)Component_object & 1) == 0 )
        return;
      if ( !CharaEffect
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)CharaEffect,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaErasureReverseEffectComponent___)) == 0 )
      {
LABEL_63:
        sub_21FFECC(Component_object, v26);
      }
      CharaErasureReverseEffectComponent__ErasureStart((CharaErasureReverseEffectComponent_o *)Component_object, v29, 0);
    }
    else if ( v30 > 0x4DE5D9DE )
    {
      switch ( v30 )
      {
        case 0x8D759330:
          v31 = &StringLiteral_19913/*"erasure"*/;
          goto LABEL_53;
        case 0x8DA714B6:
          Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)StringLiteral_26167/*"wipeTimeRe"*/, 0);
          if ( ((unsigned __int8)Component_object & 1) == 0 )
            return;
          if ( !CharaEffect )
            goto LABEL_63;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)CharaEffect,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaWipeTimeReverseEffectComponent___);
          if ( !Component_object )
            goto LABEL_63;
          CharaWipeTimeReverseEffectComponent__WipeStart(
            (CharaWipeTimeReverseEffectComponent_o *)Component_object,
            v29,
            0);
          break;
        case 0x50AF70CBu:
          Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)StringLiteral_17495/*"appearanceReverse"*/, 0);
          if ( ((unsigned __int8)Component_object & 1) == 0 )
            return;
          if ( !CharaEffect )
            goto LABEL_63;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)CharaEffect,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaAppearanceReverseEffectComponent___);
          if ( !Component_object )
            goto LABEL_63;
          CharaAppearanceReverseEffectComponent__AppearanceStart(
            (CharaAppearanceReverseEffectComponent_o *)Component_object,
            v29,
            0);
          break;
        default:
          return;
      }
    }
    else
    {
      if ( v30 != 242689791 )
      {
        if ( v30 == 1242641086 )
        {
          v31 = &StringLiteral_19239/*"darkEnemyErasure"*/;
        }
        else
        {
          if ( v30 != 1306909150 )
            return;
          v31 = &StringLiteral_19874/*"enemyErasure"*/;
        }
LABEL_53:
        Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)*v31, 0);
        if ( ((unsigned __int8)Component_object & 1) == 0 )
          return;
        if ( CharaEffect )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)CharaEffect,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaErasureEffectComponent___);
          if ( Component_object )
          {
            CharaErasureEffectComponent__ErasureStart((CharaErasureEffectComponent_o *)Component_object, v29, 0);
            goto LABEL_62;
          }
        }
        goto LABEL_63;
      }
      Component_object = (Il2CppObject *)System_String__op_Equality(n, (System_String_o *)StringLiteral_26166/*"wipeTime"*/, 0);
      if ( ((unsigned __int8)Component_object & 1) == 0 )
        return;
      if ( !CharaEffect )
        goto LABEL_63;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)CharaEffect,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaWipeTimeEffectComponent___);
      if ( !Component_object )
        goto LABEL_63;
      CharaWipeTimeEffectComponent__WipeStart((CharaWipeTimeEffectComponent_o *)Component_object, v29, 0);
    }
LABEL_62:
    UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetTalkMask(UIScriptFigure_o *this, bool isMask, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  UIScriptFigure_o *v5; // x20
  __int64 backIndex; // x8
  struct UIStandFigureM_array *v8; // x9

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_10;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= LODWORD(standFigureList->max_length) )
LABEL_11:
    sub_21FFED4(this);
  this = (UIScriptFigure_o *)standFigureList->m_Items[mainIndex];
  if ( !this )
    goto LABEL_10;
  UIStandFigureRender__SetTalkMask((UIStandFigureRender_o *)this, isMask, 0);
  backIndex = (unsigned int)v5->fields.backIndex;
  if ( (backIndex & 0x80000000) == 0 )
  {
    v8 = v5->fields.standFigureList;
    if ( !v8 )
      goto LABEL_10;
    if ( (unsigned int)backIndex < LODWORD(v8->max_length) )
    {
      this = (UIScriptFigure_o *)v8->m_Items[backIndex];
      if ( this )
      {
        UIStandFigureRender__SetTalkMask((UIStandFigureRender_o *)this, isMask, 0);
        return;
      }
LABEL_10:
      sub_21FFECC(this, isMask);
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptFigure__SetUseSimpleMesh(UIScriptFigure_o *this, bool useSimpleMesh, const MethodInfo *method)
{
  struct UIStandFigureM_array *standFigureList; // x8
  int max_length; // w10
  UIStandFigureM_o *v5; // x11
  bool v6; // w9
  UIStandFigureM_o *v7; // x8
  struct UIStandFigureM_o *crossFadeStandFigure; // x10

  standFigureList = this->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_8;
  max_length = standFigureList->max_length;
  if ( !max_length )
    goto LABEL_9;
  v5 = standFigureList->m_Items[0];
  if ( !v5 )
    goto LABEL_8;
  v6 = useSimpleMesh;
  v5->fields.isUseSimpleMesh = useSimpleMesh;
  if ( max_length == 1 )
LABEL_9:
    sub_21FFED4(this);
  v7 = standFigureList->m_Items[1];
  if ( !v7
    || (crossFadeStandFigure = this->fields.crossFadeStandFigure, v7->fields.isUseSimpleMesh = v6, !crossFadeStandFigure) )
  {
LABEL_8:
    sub_21FFECC(this, useSimpleMesh);
  }
  crossFadeStandFigure->fields.isUseSimpleMesh = v6;
}


void UIScriptFigure__Update(UIScriptFigure_o *this, const MethodInfo *method)
{
  if ( this->fields.changeKind == 3 )
    UIScriptFigure__UpdateBlink(this, method);
}


void UIScriptFigure__UpdateBlink(UIScriptFigure_o *this, const MethodInfo *method)
{
  float blinkTime; // s8
  float v4; // s0
  float blinkNextTime; // s1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_Queue_float__o *blinkSecList; // x0
  float v9; // s8
  const MethodInfo *v10; // x1

  if ( (byte_593A7A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_float__Dequeue__);
    byte_593A7A9 = 1;
  }
  blinkTime = this->fields.blinkTime;
  v4 = blinkTime + UnityEngine_Time__get_deltaTime(0);
  blinkNextTime = this->fields.blinkNextTime;
  this->fields.blinkTime = v4;
  if ( v4 > blinkNextTime )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.blinkSecList, 0) )
    {
      UIScriptFigure__EndChange(this, 0, v7);
    }
    else
    {
      blinkSecList = this->fields.blinkSecList;
      if ( !blinkSecList )
        sub_21FFECC(0, v6);
      v9 = this->fields.blinkNextTime;
      this->fields.blinkNextTime = v9
                                 + System_Collections_Generic_Queue_float___Dequeue(
                                     blinkSecList,
                                     (const MethodInfo_46A0A18 *)Method_System_Collections_Generic_Queue_float__Dequeue__);
      UIScriptFigure__SetOverlap(this, v10);
    }
  }
}


void UIScriptFigure__UpdateChange(UIScriptFigure_o *this, const MethodInfo *method)
{
  UIScriptFigure_o *v2; // x19
  struct UIStandFigureM_array *standFigureList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  Il2CppClass **v7; // x9
  UIStandFigureRender_o *v8; // x20
  UIStandFigureRender_o *v9; // x21
  const MethodInfo *v10; // x2
  int changeKind; // w8
  float v12; // s8
  UnityEngine_GameObject_o *gameObject; // x1
  UIStandFigureRender_o *crossFadeStandFigure; // x20
  float changeSpeed; // s8
  float changeRange; // s0
  float changeTotal; // s12
  float v18; // s11
  UIScriptChara_c *v19; // x0
  float v20; // s0
  float v21; // s13
  float *v22; // x8
  float v23; // s0
  float UNIT_SPEED; // s0
  UIScriptChara_c *v25; // x0
  float v26; // s0
  float v27; // s13
  float *p_UNIT_SPEED; // x8
  float v29; // s0
  const MethodInfo *v30; // x1

  v2 = this;
  if ( (byte_593A7A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_float__Dequeue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_float__Enqueue__);
    sub_21FFC50(&UIScriptChara_TypeInfo);
    this = (UIScriptFigure_o *)sub_21FFC50(&StringLiteral_6227/*"EndChange"*/);
    byte_593A7A8 = 1;
  }
  standFigureList = v2->fields.standFigureList;
  if ( !standFigureList )
    goto LABEL_47;
  mainIndex = v2->fields.mainIndex;
  max_length = standFigureList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v2->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_21FFED4(this);
  }
  v7 = &standFigureList->obj.klass + mainIndex;
  v8 = (UIStandFigureRender_o *)v7[4];
  if ( !v8 )
    goto LABEL_47;
  v9 = (UIStandFigureRender_o *)standFigureList->m_Items[backIndex];
  UIStandFigureM__SetDispOffset((UIStandFigureM_o *)v7[4], 0);
  changeKind = v2->fields.changeKind;
  if ( changeKind > 2 )
  {
    if ( changeKind == 3 )
    {
      if ( v2->fields.changeSpeed > 0.0 )
      {
        do
        {
          changeRange = v2->fields.changeRange;
          changeTotal = v2->fields.changeTotal;
          v18 = changeTotal / v2->fields.changeSpeed;
          if ( v18 <= 0.5 )
          {
            v25 = UIScriptChara_TypeInfo;
            v26 = (float)(0.5 - v18) * changeRange;
            if ( v26 <= 1.0 )
              v27 = v26;
            else
              v27 = 1.0;
            if ( !*(&UIScriptChara_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo, method);
              v25 = UIScriptChara_TypeInfo;
            }
            p_UNIT_SPEED = &v25->static_fields->UNIT_SPEED;
            this = (UIScriptFigure_o *)v2->fields.blinkSecList;
            v29 = *p_UNIT_SPEED;
            v2->fields.changeTotal = changeTotal + (float)(v27 + (float)(*p_UNIT_SPEED + *p_UNIT_SPEED));
            if ( !this )
              goto LABEL_47;
            System_Collections_Generic_Queue_float___Enqueue(
              (System_Collections_Generic_Queue_float__o *)this,
              v27 + v29,
              (const MethodInfo_46A08A0 *)Method_System_Collections_Generic_Queue_float__Enqueue__);
            this = (UIScriptFigure_o *)v2->fields.blinkSecList;
            if ( !this )
              goto LABEL_47;
            UNIT_SPEED = UIScriptChara_TypeInfo->static_fields->UNIT_SPEED;
          }
          else
          {
            v19 = UIScriptChara_TypeInfo;
            v20 = (float)((float)(v18 + -1.0) + 0.5) * changeRange;
            if ( v20 <= 1.0 )
              v21 = v20;
            else
              v21 = 1.0;
            if ( !*(&UIScriptChara_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo, method);
              v19 = UIScriptChara_TypeInfo;
            }
            v22 = &v19->static_fields->UNIT_SPEED;
            this = (UIScriptFigure_o *)v2->fields.blinkSecList;
            v23 = *v22;
            v2->fields.changeTotal = changeTotal + (float)(v21 + (float)(*v22 + *v22));
            if ( !this )
              goto LABEL_47;
            System_Collections_Generic_Queue_float___Enqueue(
              (System_Collections_Generic_Queue_float__o *)this,
              v23,
              (const MethodInfo_46A08A0 *)Method_System_Collections_Generic_Queue_float__Enqueue__);
            this = (UIScriptFigure_o *)v2->fields.blinkSecList;
            if ( !this )
              goto LABEL_47;
            UNIT_SPEED = v21 + UIScriptChara_TypeInfo->static_fields->UNIT_SPEED;
          }
          System_Collections_Generic_Queue_float___Enqueue(
            (System_Collections_Generic_Queue_float__o *)this,
            UNIT_SPEED,
            (const MethodInfo_46A08A0 *)Method_System_Collections_Generic_Queue_float__Enqueue__);
        }
        while ( v18 < 1.0 );
        this = (UIScriptFigure_o *)v2->fields.blinkSecList;
        v2->fields.blinkTime = 0.0;
        if ( !this )
          goto LABEL_47;
        v2->fields.blinkNextTime = System_Collections_Generic_Queue_float___Dequeue(
                                     (System_Collections_Generic_Queue_float__o *)this,
                                     (const MethodInfo_46A0A18 *)Method_System_Collections_Generic_Queue_float__Dequeue__);
        UIScriptFigure__SetOverlap(v2, v30);
        return;
      }
    }
    else
    {
      if ( changeKind != 4 )
        return;
      this = (UIScriptFigure_o *)v2->fields.crossFadeStandFigure;
      if ( !this )
        goto LABEL_47;
      if ( UIStandFigureM__IsEnableCrossFade(
             (UIStandFigureM_o *)this,
             (UIStandFigureM_o *)v8,
             (UIStandFigureM_o *)v9,
             0) )
      {
        UIStandFigureRender__SetActive(v8, 0, 0);
        if ( !v9 )
          goto LABEL_47;
        UIStandFigureRender__SetActive(v9, 0, 0);
        UIStandFigureRender__SetFilter(v8, v2->fields.filterName, v2->fields.filterColor, 0);
        this = (UIScriptFigure_o *)v2->fields.crossFadeStandFigure;
        if ( !this )
          goto LABEL_47;
        UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.1, 0);
        this = (UIScriptFigure_o *)v2->fields.crossFadeStandFigure;
        if ( !this )
          goto LABEL_47;
        UIStandFigureM__SetCrossFadeCharacter(
          (UIStandFigureM_o *)this,
          (UIStandFigureM_o *)v8,
          (UIStandFigureM_o *)v9,
          v2->fields.filterName,
          1,
          0);
        this = (UIScriptFigure_o *)v2->fields.crossFadeStandFigure;
        if ( !this )
          goto LABEL_47;
        UIStandFigureRender__SetActive((UIStandFigureRender_o *)this, 1, 0);
        this = (UIScriptFigure_o *)v2->fields.crossFadeStandFigure;
        if ( !this )
          goto LABEL_47;
        ((void (__fastcall *)(UIScriptFigure_o *, const MethodInfo *, double))this->klass->vtable._8_GetBody.methodPtr)(
          this,
          this->klass->vtable._8_GetBody.method,
          0.0);
        crossFadeStandFigure = (UIStandFigureRender_o *)v2->fields.crossFadeStandFigure;
        changeSpeed = v2->fields.changeSpeed;
        this = (UIScriptFigure_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
        if ( !crossFadeStandFigure )
          goto LABEL_47;
        UIStandFigureRender__MoveAlpha(
          crossFadeStandFigure,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_6227/*"EndChange"*/,
          4,
          0);
        this = (UIScriptFigure_o *)v2->fields.crossFadeStandFigure;
        if ( !this )
          goto LABEL_47;
        ((void (__fastcall *)(UIScriptFigure_o *, const MethodInfo *, float))this->klass->vtable._8_GetBody.methodPtr)(
          this,
          this->klass->vtable._8_GetBody.method,
          1.0);
        return;
      }
    }
LABEL_46:
    UIScriptFigure__EndChange(v2, 0, v10);
    return;
  }
  if ( changeKind == 1 )
    goto LABEL_46;
  if ( changeKind == 2 )
  {
    if ( v9 )
    {
      UIStandFigureRender__MoveAlpha(v9, v2->fields.changeSpeed, 0.0, 0, 0, 0, 0);
      v12 = v2->fields.changeSpeed;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
      UIStandFigureRender__MoveAlpha(v8, v12, 1.0, gameObject, (System_String_o *)StringLiteral_6227/*"EndChange"*/, 0, 0);
      return;
    }
LABEL_47:
    sub_21FFECC(this, method);
  }
}