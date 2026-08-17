void UIScriptVerticalImage___ctor(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  struct UIVerticalImageM_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UIScriptChara_c *v11; // x0
  int v12; // w8

  if ( (byte_59729A7 & 1) == 0 )
  {
    sub_2213A60(&UIScriptChara_TypeInfo);
    sub_2213A60(&UIVerticalImageM___TypeInfo);
    byte_59729A7 = 1;
  }
  v3 = (struct UIVerticalImageM_array *)sub_2213B20(UIVerticalImageM___TypeInfo, 2);
  this->fields.imageList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v11 = UIScriptChara_TypeInfo;
  v12 = *(&UIScriptChara_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.OFFSET_IMAGE_Y = 0x4400000043900000LL;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(v11, v10);
  UIScriptChara___ctor((UIScriptChara_o *)this, 0);
}


void UIScriptVerticalImage__ChangeCharacter(
        UIScriptVerticalImage_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  __int64 v15; // x0
  __int64 v16; // x1
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  Il2CppClass **v21; // x9
  UIVerticalImageRender_o *v22; // x22
  UIVerticalImageRender_o *v23; // x23
  System_Action_o *v24; // x23

  if ( (byte_59729A1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UIScriptVerticalImage_UpdateChange__);
    byte_59729A1 = 1;
  }
  UIScriptChara__ChangeCharacter_51929232(
    (UIScriptChara_o *)this,
    kind,
    speed,
    imageName,
    faceType,
    callback,
    isContinueSilhouette,
    0);
  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = imageList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_2213CE4(v15);
  }
  v21 = &imageList->obj.klass + mainIndex;
  this->fields.isDisp = 0;
  v22 = (UIVerticalImageRender_o *)v21[4];
  v23 = (UIVerticalImageRender_o *)imageList->m_Items[backIndex];
  if ( !v22
    || (UIVerticalImageRender__SetActive((UIVerticalImageRender_o *)v21[4], 1, 0),
        UIVerticalImageRender__SetAlpha(v22, 0.0, 0),
        UIVerticalImageRender__SetDepth(v22, 0.1, 0),
        !v23) )
  {
LABEL_9:
    sub_2213CDC(v15, v16);
  }
  UIVerticalImageRender__SetDepth(v23, 0.0, 0);
  UIVerticalImageRender__SetShadow(v22, this->fields.isShadow, 0);
  v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_UIScriptVerticalImage_UpdateChange__, 0);
  UIVerticalImageM__SetCharacter((UIVerticalImageM_o *)v22, imageName, faceType, v24, 0);
}


void UIScriptVerticalImage__ContinueChangeFade(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  if ( (byte_59729A3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15791/*"UpdateChange"*/);
    byte_59729A3 = 1;
  }
  UIScriptVerticalImage__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15791/*"UpdateChange"*/,
    this->fields.changeStep,
    0);
}


void UIScriptVerticalImage__EndChange(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  UIScriptVerticalImage_o *v5; // x19
  __int64 backIndex; // x10
  UIVerticalImageRender_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  MissionNaviTransitionBoardItem_o *p_changeCallback; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *changeCallback; // t1

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = imageList->max_length;
  v5 = this;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_2213CE4(this);
  }
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIVerticalImageRender_o *)imageList->m_Items[backIndex],
        UIVerticalImageRender__SetAlpha((UIVerticalImageRender_o *)this, 1.0, 0),
        !v7) )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  UIVerticalImageRender__SetAlpha(v7, 0.0, 0);
  UIVerticalImageM__ReleaseCharacter((UIVerticalImageM_o *)v7, 0);
  changeCallback = v5->fields.changeCallback;
  p_changeCallback = (MissionNaviTransitionBoardItem_o *)&v5->fields.changeCallback;
  v15 = changeCallback;
  LODWORD(p_changeCallback[-1].fields._Name_k__BackingField) = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0;
    sub_2213A04(p_changeCallback, 0, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(intptr_t, intptr_t))v15->fields.invoke_impl)(v15->fields.method_code, v15->fields.method);
  }
}


void UIScriptVerticalImage__EndSet(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptVerticalImage_o *v4; // x19
  Il2CppClass **v5; // x8
  UIVerticalImageRender_o *v6; // x20
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

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_23;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  v5 = &imageList->obj.klass + mainIndex;
  v6 = (UIVerticalImageRender_o *)v5[4];
  if ( !v6 )
    goto LABEL_23;
  UIVerticalImageM__SetDispOffset((UIVerticalImageM_o *)v5[4], 0);
  CenterOffset = UIVerticalImageRender__GetCenterOffset(v6, 0);
  this = (UIScriptVerticalImage_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptVerticalImage_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  z = localPosition.fields.z;
  this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v22.fields.x = CenterOffset.fields.x;
  v22.fields.y = CenterOffset.fields.y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0);
  this = (UIScriptVerticalImage_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptVerticalImage_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v9 = v23.fields.z;
  this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v24.fields.x = CenterOffset.fields.x;
  v24.fields.y = CenterOffset.fields.y;
  v24.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
  this = (UIScriptVerticalImage_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptVerticalImage_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v10 = v25.fields.z;
  this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v26.fields.x = CenterOffset.fields.x;
  v26.fields.y = CenterOffset.fields.y;
  v26.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0);
  this = (UIScriptVerticalImage_o *)v4->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0
    || (v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptVerticalImage_o *)v4->fields.baseShadowEffect) == 0)
    || (v11 = v27.fields.z,
        (this = (UIScriptVerticalImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
  {
LABEL_23:
    sub_2213CDC(this, method);
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
    sub_2213A04(p_setCallback, 0, v12, v13, v14, v15, v16, v17);
    ((void (__fastcall *)(intptr_t, intptr_t))v19->fields.invoke_impl)(v19->fields.method_code, v19->fields.method);
  }
}


UnityEngine_Transform_o *UIScriptVerticalImage__GetBody(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  return UIVerticalImageM__GetBody((UIVerticalImageM_o *)this, 0);
}


UnityEngine_Texture_o *UIScriptVerticalImage__GetBodySubTexture(
        UIScriptVerticalImage_o *this,
        const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  return UIVerticalImageM__GetBodySubTexture((UIVerticalImageM_o *)this, 0);
}


UnityEngine_Vector3_o UIScriptVerticalImage__GetOffsetEdgeBlur(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptVerticalImage_o *v4; // x19
  UIScriptVerticalImage_o *v5; // x20
  unsigned int position; // s0
  float OFFSET_IMAGE_X; // s10
  float v8; // s8
  float OFFSET_IMAGE_Y; // s11
  float y; // s9
  float v11; // s0
  float v12; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_6;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this || (this = (UIScriptVerticalImage_o *)UIVerticalImageM__GetBody((UIVerticalImageM_o *)this, 0)) == 0 )
LABEL_6:
    sub_2213CDC(this, method);
  v5 = this;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  OFFSET_IMAGE_X = v4->fields.OFFSET_IMAGE_X;
  v8 = *(float *)&position;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0);
  OFFSET_IMAGE_Y = v4->fields.OFFSET_IMAGE_Y;
  y = localPosition.fields.y;
  result = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0);
  v11 = v8 + OFFSET_IMAGE_X;
  v12 = y + OFFSET_IMAGE_Y;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


UnityEngine_Rect_o UIScriptVerticalImage__GetRectEdgeBlur(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 0.0;
  v3 = 0.0;
  v4 = 1.0;
  v5 = 1.0;
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


UnityEngine_Vector2_o UIScriptVerticalImage__GetSizeEdgeBlur(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  UIVerticalImageRender_c *v2; // x0
  int *p_MAIN_SIZE_X; // x8
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_59729A6 & 1) == 0 )
  {
    sub_2213A60(&UIVerticalImageRender_TypeInfo);
    byte_59729A6 = 1;
  }
  v2 = UIVerticalImageRender_TypeInfo;
  if ( !*(&UIVerticalImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo, method);
    v2 = UIVerticalImageRender_TypeInfo;
  }
  p_MAIN_SIZE_X = &v2->static_fields->MAIN_SIZE_X;
  v4 = (float)*p_MAIN_SIZE_X;
  v5 = (float)p_MAIN_SIZE_X[1];
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


bool UIScriptVerticalImage__IsBusyMoveAlpha(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIVerticalImageM_o *v4; // x8

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  v4 = imageList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_2213CDC(this, method);
  return v4->fields.isBusyMoveAlpha;
}


void UIScriptVerticalImage__MoveAlpha(UIScriptVerticalImage_o *this, float duration, float a, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19

  imageList = this->fields.imageList;
  this->fields.isDisp = a > 0.0;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  UIVerticalImageRender__MoveAlpha((UIVerticalImageRender_o *)this, duration, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, 0);
}


void UIScriptVerticalImage__MoveAlphaSpeed(
        UIScriptVerticalImage_o *this,
        float speed,
        float a,
        const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19

  imageList = this->fields.imageList;
  this->fields.isDisp = a > 0.0;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  UIVerticalImageRender__MoveAlphaSpeed((UIVerticalImageRender_o *)this, speed, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, 0);
}


void UIScriptVerticalImage__SetAlpha(UIScriptVerticalImage_o *this, float a, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v5; // x19

  imageList = this->fields.imageList;
  this->fields.isDisp = a > 0.0;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v5 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  UIVerticalImageRender__SetAlpha((UIVerticalImageRender_o *)this, a, 0);
  UIScriptChara__RecoverShadowEffect(v5, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptVerticalImage__SetCharacter(
        UIScriptVerticalImage_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v16; // x8
  UIVerticalImageM_o *v17; // x22
  System_Action_o *v18; // x23

  if ( (byte_59729A4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_59729A4 = 1;
  }
  this->fields.setCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setCallback,
    (int32_t)callback,
    *(System_String_o **)&faceType,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(v12);
  v16 = &imageList->obj.klass + mainIndex;
  v17 = (UIVerticalImageM_o *)v16[4];
  if ( !v17 )
LABEL_7:
    sub_2213CDC(v12, v13);
  UIVerticalImageRender__SetFilter(
    (UIVerticalImageRender_o *)v16[4],
    this->fields.filterName,
    this->fields.filterColor,
    0);
  v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_EndSet.method, 0);
  UIVerticalImageM__SetCharacter(v17, imageName, faceType, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptVerticalImage__SetDepth(UIScriptVerticalImage_o *this, int32_t d, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptVerticalImage_o *v5; // x21
  UIVerticalImageRender_o *v7; // x19
  float v8; // s2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_2213CE4(this);
  this = (UIScriptVerticalImage_o *)this->fields.baseDepth;
  if ( !this
    || (v7 = (UIVerticalImageRender_o *)imageList->m_Items[mainIndex],
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptVerticalImage_o *)v5->fields.baseDepth) == 0)
    || (v8 = (float)-d * 10.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, localPosition, 0),
        !v7) )
  {
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&d);
  }
  UIVerticalImageRender__SetDepth(v7, 0.1, 0);
}


void UIScriptVerticalImage__SetFilter(
        UIScriptVerticalImage_o *this,
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
  UIVerticalImageRender_o *v15; // x0
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  v17 = p_filterName[27];
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
  if ( !v17 )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(v17[1].klass) )
    sub_2213CE4(v15);
  v15 = (UIVerticalImageRender_o *)*((_QWORD *)&v17[1].monitor + mainIndex);
  if ( !v15 )
LABEL_5:
    sub_2213CDC(v15, v16);
  v19.fields.b = b;
  v19.fields.a = a;
  v19.fields.r = r;
  v19.fields.g = g;
  UIVerticalImageRender__SetFilter(v15, *p_filterName, v19, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptVerticalImage__SetMaskInteraction(
        UIScriptVerticalImage_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x20
  int max_length; // w8
  __int64 v6; // x21

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_8;
  max_length = imageList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (UIScriptVerticalImage_o *)imageList->m_Items[v6];
      if ( !this )
        break;
      UIVerticalImageRender__SetMaskInteraction((UIVerticalImageRender_o *)this, maskInteraction, 0);
      max_length = imageList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&maskInteraction);
  }
}


void UIScriptVerticalImage__SetOverlap(UIScriptVerticalImage_o *this, float a, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIVerticalImageRender_o *v8; // x19

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  max_length = imageList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_2213CE4(this);
  }
  this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
  if ( !this
    || (v8 = (UIVerticalImageRender_o *)imageList->m_Items[backIndex],
        UIVerticalImageRender__SetAlpha((UIVerticalImageRender_o *)this, a, 0),
        !v8) )
  {
LABEL_7:
    sub_2213CDC(this, method);
  }
  UIVerticalImageRender__SetAlpha(v8, 1.0 - a, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptVerticalImage__SetShadow(
        UIScriptVerticalImage_o *this,
        bool isShadow,
        bool isSkip,
        const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x8
  UIScriptChara_o *v5; // x19
  __int64 mainIndex; // x9
  __int64 backIndex; // x8
  UIScriptChara_c *klass; // x9

  if ( this->fields.isShadow != isShadow )
  {
    imageList = this->fields.imageList;
    v5 = (UIScriptChara_o *)this;
    this->fields.isShadow = isShadow;
    if ( !imageList )
      goto LABEL_11;
    mainIndex = this->fields.mainIndex;
    if ( (unsigned int)mainIndex < LODWORD(imageList->max_length) )
    {
      this = (UIScriptVerticalImage_o *)imageList->m_Items[mainIndex];
      if ( !this )
        goto LABEL_11;
      UIVerticalImageRender__SetShadow((UIVerticalImageRender_o *)this, isShadow, 0);
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
        sub_2213CDC(this, isShadow);
      if ( (unsigned int)backIndex < LODWORD(klass->_1.namespaze) )
      {
        this = (UIScriptVerticalImage_o *)*((_QWORD *)&klass->_1.byval_arg.data + backIndex);
        if ( this )
        {
          UIVerticalImageRender__SetShadow((UIVerticalImageRender_o *)this, isShadow, 0);
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    sub_2213CE4(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptVerticalImage__SetSortingOrder(UIScriptVerticalImage_o *this, int32_t order, const MethodInfo *method)
{
  struct UIVerticalImageM_array *imageList; // x20
  int max_length; // w8
  __int64 v6; // x21

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_8;
  max_length = imageList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (UIScriptVerticalImage_o *)imageList->m_Items[v6];
      if ( !this )
        break;
      UIVerticalImageRender__SetSortingOrder((UIVerticalImageRender_o *)this, order, 0);
      max_length = imageList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&order);
  }
}


void UIScriptVerticalImage__SetSpecialEffect(
        UIScriptVerticalImage_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  float v22; // s4
  float v23; // s5
  float v24; // s6
  __int64 v25; // x1
  UnityEngine_Object_o *CharaEffect; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  struct UIVerticalImageM_array *imageList; // x8
  uint32_t v30; // w0
  __int64 *v31; // x8
  float colora; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_59729A5 & 1) == 0 )
  {
    colora = color.fields.a;
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26212/*"wipe"*/);
    sub_2213A60(&StringLiteral_17531/*"appearanceReverse"*/);
    sub_2213A60(&StringLiteral_19280/*"darkEnemyErasure"*/);
    sub_2213A60(&StringLiteral_26218/*"wipeTimeRe"*/);
    sub_2213A60(&StringLiteral_19281/*"darkWipe"*/);
    sub_2213A60(&StringLiteral_20396/*"flashErasure"*/);
    sub_2213A60(&StringLiteral_17530/*"appearance"*/);
    sub_2213A60(&StringLiteral_19955/*"erasure"*/);
    sub_2213A60(&StringLiteral_19956/*"erasureReverse"*/);
    sub_2213A60(&StringLiteral_19916/*"enemyErasure"*/);
    sub_2213A60(&StringLiteral_26217/*"wipeTime"*/);
    color.fields.a = colora;
    byte_59729A5 = 1;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v22 = r;
  v23 = g;
  v24 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v33,
                                          time,
                                          color,
                                          range,
                                          isSkip,
                                          isPause,
                                          isContinueSilhouette,
                                          0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  v27 = UnityEngine_Object__op_Equality(CharaEffect, 0, 0);
  if ( !v27 )
  {
    imageList = this->fields.imageList;
    if ( !imageList )
      sub_2213CDC(v27, v28);
    if ( this->fields.mainIndex >= LODWORD(imageList->max_length) )
      sub_2213CE4(v27);
    v30 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v30 > 0x8D759330 )
    {
      if ( v30 > 0xD4B34506 )
      {
        switch ( v30 )
        {
          case 0xE7555186:
            v31 = &StringLiteral_26212/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v31 = &StringLiteral_19281/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v31 = &StringLiteral_17530/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v30 )
        {
          case 0x8DA714B6:
            v31 = &StringLiteral_26218/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v31 = &StringLiteral_20396/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v31 = &StringLiteral_19956/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v30 > 0x4A1132BE )
    {
      switch ( v30 )
      {
        case 0x8D759330:
          v31 = &StringLiteral_19955/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v31 = &StringLiteral_19916/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v31 = &StringLiteral_17531/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v30 == 242689791 )
    {
      v31 = &StringLiteral_26217/*"wipeTime"*/;
    }
    else
    {
      if ( v30 != 1242641086 )
        return;
      v31 = &StringLiteral_19280/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v31, 0) )
      UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, 0);
  }
}


void UIScriptVerticalImage__UpdateChange(UIScriptVerticalImage_o *this, const MethodInfo *method)
{
  UIScriptVerticalImage_o *v2; // x19
  struct UIVerticalImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  UIVerticalImageRender_o *v8; // x20
  float changeSpeed; // s8
  float v10; // s0
  float v11; // s8
  __int64 v12; // x1
  float changeRange; // s0
  float v14; // s9
  UIScriptChara_c *v15; // x0
  float v16; // s0
  float v17; // s8
  float *v18; // x8
  UnityEngine_MonoBehaviour_o *v19; // x0
  float v20; // s0
  System_String_o *v21; // x1
  float changeTotal; // s9
  UIScriptChara_c *v23; // x0
  float v24; // s0
  float v25; // s8
  float *p_UNIT_SPEED; // x8
  float v27; // s1

  v2 = this;
  if ( (byte_59729A2 & 1) == 0 )
  {
    sub_2213A60(&UIScriptChara_TypeInfo);
    sub_2213A60(&StringLiteral_6239/*"EndChange"*/);
    this = (UIScriptVerticalImage_o *)sub_2213A60(&StringLiteral_4878/*"ContinueChangeFade"*/);
    byte_59729A2 = 1;
  }
  imageList = v2->fields.imageList;
  if ( !imageList )
    goto LABEL_31;
  mainIndex = v2->fields.mainIndex;
  max_length = imageList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v2->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_2213CE4(this);
  }
  changeKind = v2->fields.changeKind;
  if ( changeKind != 3 )
  {
    if ( changeKind != 2 )
    {
      if ( changeKind != 1 )
        return;
LABEL_22:
      UIScriptVerticalImage__EndChange(v2, method);
      return;
    }
    this = (UIScriptVerticalImage_o *)imageList->m_Items[backIndex];
    if ( this )
    {
      v8 = (UIVerticalImageRender_o *)imageList->m_Items[mainIndex];
      UIVerticalImageRender__MoveAlpha((UIVerticalImageRender_o *)this, v2->fields.changeSpeed, 0.0, 0, 0, 0);
      changeSpeed = v2->fields.changeSpeed;
      this = (UIScriptVerticalImage_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
      if ( v8 )
      {
        UIVerticalImageRender__MoveAlpha(
          v8,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_6239/*"EndChange"*/,
          0);
        return;
      }
    }
LABEL_31:
    sub_2213CDC(this, method);
  }
  v10 = v2->fields.changeSpeed;
  if ( v10 <= 0.0 )
    goto LABEL_22;
  v11 = v2->fields.changeTotal / v10;
  if ( v11 >= 1.0 )
    goto LABEL_22;
  UIScriptVerticalImage__SetOverlap(v2, 0.0, method);
  changeRange = v2->fields.changeRange;
  if ( v11 <= 0.5 )
  {
    changeTotal = v2->fields.changeTotal;
    v23 = UIScriptChara_TypeInfo;
    v24 = (float)(0.5 - v11) * changeRange;
    if ( v24 <= 1.0 )
      v25 = v24;
    else
      v25 = 1.0;
    if ( !*(&UIScriptChara_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo, v12);
      v23 = UIScriptChara_TypeInfo;
    }
    p_UNIT_SPEED = &v23->static_fields->UNIT_SPEED;
    v19 = (UnityEngine_MonoBehaviour_o *)v2;
    v27 = *p_UNIT_SPEED;
    v21 = (System_String_o *)StringLiteral_4878/*"ContinueChangeFade"*/;
    v20 = v25 + *p_UNIT_SPEED;
    v2->fields.changeTotal = changeTotal + (float)(v25 + (float)(*p_UNIT_SPEED + *p_UNIT_SPEED));
    v2->fields.changeStep = v27;
  }
  else
  {
    v14 = v2->fields.changeTotal;
    v15 = UIScriptChara_TypeInfo;
    v16 = (float)((float)(v11 + -1.0) + 0.5) * changeRange;
    if ( v16 <= 1.0 )
      v17 = v16;
    else
      v17 = 1.0;
    if ( !*(&UIScriptChara_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIScriptChara_TypeInfo, v12);
      v15 = UIScriptChara_TypeInfo;
    }
    v18 = &v15->static_fields->UNIT_SPEED;
    v19 = (UnityEngine_MonoBehaviour_o *)v2;
    v20 = *v18;
    v21 = (System_String_o *)StringLiteral_4878/*"ContinueChangeFade"*/;
    v2->fields.changeTotal = v14 + (float)(v17 + (float)(*v18 + *v18));
    v2->fields.changeStep = v17 + v20;
  }
  UnityEngine_MonoBehaviour__Invoke(v19, v21, v20, 0);
}