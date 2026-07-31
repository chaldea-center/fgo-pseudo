void UIScriptImage___ctor(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UIScriptChara_c *v11; // x0
  int v12; // w8

  if ( (byte_593A7C1 & 1) == 0 )
  {
    sub_21FFC50(&UIImageM___TypeInfo);
    sub_21FFC50(&UIScriptChara_TypeInfo);
    byte_593A7C1 = 1;
  }
  v3 = (struct UIImageM_array *)sub_21FFD10(UIImageM___TypeInfo, 2);
  this->fields.imageList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.imageList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v11 = UIScriptChara_TypeInfo;
  v12 = *(&UIScriptChara_TypeInfo->_2.cctor_finished + 1);
  this->fields.OFFSET_IMAGE_Y = 799.0;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(v11, v10);
  UIScriptChara___ctor((UIScriptChara_o *)this, 0);
}


void UIScriptImage__ChangeCharacter(
        UIScriptImage_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x1
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  Il2CppClass **v19; // x9
  UIImageRender_o *v20; // x22
  UIImageRender_o *v21; // x23
  System_Action_o *v22; // x23
  UIScriptImage_o *v23; // x0
  const MethodInfo *v24; // x3

  if ( (byte_593A7B6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UIScriptImage_UpdateChange__);
    byte_593A7B6 = 1;
  }
  UIScriptChara__ChangeCharacter_51854672((UIScriptChara_o *)this, kind, speed, imageName, faceType, callback, 0);
  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_9;
  mainIndex = this->fields.mainIndex;
  max_length = imageList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_21FFED4(v13);
  }
  v19 = &imageList->obj.klass + mainIndex;
  this->fields.isDisp = 0;
  v20 = (UIImageRender_o *)v19[4];
  v21 = (UIImageRender_o *)imageList->m_Items[backIndex];
  if ( !v20
    || (UIImageRender__SetActive((UIImageRender_o *)v19[4], 1, 0),
        UIImageRender__SetAlpha(v20, 0.0, 0),
        UIImageRender__SetDepth(v20, 0.1, 0),
        !v21) )
  {
LABEL_9:
    sub_21FFECC(v13, v14);
  }
  UIImageRender__SetDepth(v21, 0.0, 0);
  UIImageRender__SetShadow(v20, this->fields.isShadow, 0);
  v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_UIScriptImage_UpdateChange__, 0);
  UIImageM__SetCharacter((UIImageM_o *)v20, imageName, faceType, v22, 0);
  UIScriptImage__SetFullScreenImage(v23, imageName, (UIImageM_o *)v20, v24);
}


void UIScriptImage__ContinueChangeFade(UIScriptImage_o *this, const MethodInfo *method)
{
  if ( (byte_593A7B8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_15761/*"UpdateChange"*/);
    byte_593A7B8 = 1;
  }
  UIScriptImage__SetOverlap(this, 1.0, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15761/*"UpdateChange"*/,
    this->fields.changeStep,
    0);
}


void UIScriptImage__EndChange(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  UIScriptImage_o *v5; // x19
  __int64 backIndex; // x10
  UIImageRender_o *v7; // x20
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
    sub_21FFED4(this);
  }
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this
    || (v7 = (UIImageRender_o *)imageList->m_Items[backIndex],
        UIImageRender__SetAlpha((UIImageRender_o *)this, 1.0, 0),
        !v7) )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  UIImageRender__SetAlpha(v7, 0.0, 0);
  UIImageM__ReleaseCharacter((UIImageM_o *)v7, 0);
  changeCallback = v5->fields.changeCallback;
  p_changeCallback = (MissionNaviTransitionBoardItem_o *)&v5->fields.changeCallback;
  v15 = changeCallback;
  p_changeCallback[-1].fields._QuestId_k__BackingField = 0;
  if ( changeCallback )
  {
    p_changeCallback->klass = 0;
    sub_21FFBF4(p_changeCallback, 0, v8, v9, v10, v11, v12, v13);
    ((void (__fastcall *)(intptr_t, intptr_t))v15->fields.invoke_impl)(v15->fields.method_code, v15->fields.method);
  }
}


void UIScriptImage__EndSet(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptImage_o *v4; // x19
  Il2CppClass **v5; // x8
  UIImageRender_o *v6; // x20
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
    sub_21FFED4(this);
  v5 = &imageList->obj.klass + mainIndex;
  v6 = (UIImageRender_o *)v5[4];
  if ( !v6 )
    goto LABEL_23;
  UIImageM__SetDispOffset((UIImageM_o *)v5[4], 0);
  CenterOffset = UIImageRender__GetCenterOffset(v6, 0);
  this = (UIScriptImage_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptImage_o *)v4->fields.baseSpecialEffect;
  if ( !this )
    goto LABEL_23;
  z = localPosition.fields.z;
  this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v22.fields.x = CenterOffset.fields.x;
  v22.fields.y = CenterOffset.fields.y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0);
  this = (UIScriptImage_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptImage_o *)v4->fields.baseEffect;
  if ( !this )
    goto LABEL_23;
  v9 = v23.fields.z;
  this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v24.fields.x = CenterOffset.fields.x;
  v24.fields.y = CenterOffset.fields.y;
  v24.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
  this = (UIScriptImage_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (UIScriptImage_o *)v4->fields.baseEffectBack;
  if ( !this )
    goto LABEL_23;
  v10 = v25.fields.z;
  this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  v26.fields.x = CenterOffset.fields.x;
  v26.fields.y = CenterOffset.fields.y;
  v26.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0);
  this = (UIScriptImage_o *)v4->fields.baseShadowEffect;
  if ( !this
    || (this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0
    || (v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptImage_o *)v4->fields.baseShadowEffect) == 0)
    || (v11 = v27.fields.z,
        (this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
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


UnityEngine_Transform_o *UIScriptImage__GetBody(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  return UIImageM__GetBody((UIImageM_o *)this, 0);
}


UnityEngine_Texture_o *UIScriptImage__GetBodySubTexture(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  return UIImageM__GetBodySubTexture((UIImageM_o *)this, 0);
}


UnityEngine_Vector3_o UIScriptImage__GetOffsetEdgeBlur(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptImage_o *v4; // x19
  UIScriptImage_o *v5; // x20
  unsigned int localPosition; // s8
  float OFFSET_IMAGE_Y; // s10
  float y; // s9
  float v9; // s1
  float v10; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_6;
  mainIndex = this->fields.mainIndex;
  v4 = this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this || (this = (UIScriptImage_o *)UIImageM__GetBody((UIImageM_o *)this, 0)) == 0 )
LABEL_6:
    sub_21FFECC(this, method);
  v5 = this;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0);
  OFFSET_IMAGE_Y = v4->fields.OFFSET_IMAGE_Y;
  y = v11.fields.y;
  result = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0);
  v9 = y + OFFSET_IMAGE_Y;
  v10 = *(float *)&localPosition;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}


UnityEngine_Rect_o UIScriptImage__GetRectEdgeBlur(UIScriptImage_o *this, const MethodInfo *method)
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


UnityEngine_Vector2_o UIScriptImage__GetSizeEdgeBlur(UIScriptImage_o *this, const MethodInfo *method)
{
  UIImageRender_c *v2; // x0
  int *p_MAIN_SIZE_X; // x8
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593A7C0 & 1) == 0 )
  {
    sub_21FFC50(&UIImageRender_TypeInfo);
    byte_593A7C0 = 1;
  }
  v2 = UIImageRender_TypeInfo;
  if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, method);
    v2 = UIImageRender_TypeInfo;
  }
  p_MAIN_SIZE_X = &v2->static_fields->MAIN_SIZE_X;
  v4 = (float)*p_MAIN_SIZE_X;
  v5 = (float)p_MAIN_SIZE_X[1];
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


bool UIScriptImage__IsBusyMoveAlpha(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIImageM_o *v4; // x8

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  v4 = imageList->m_Items[mainIndex];
  if ( !v4 )
LABEL_5:
    sub_21FFECC(this, method);
  return v4->fields.isBusyMoveAlpha;
}


void UIScriptImage__MoveAlpha(UIScriptImage_o *this, float duration, float a, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19

  imageList = this->fields.imageList;
  this->fields.isDisp = a > 0.0;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  UIImageRender__MoveAlpha((UIImageRender_o *)this, duration, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, 0);
}


void UIScriptImage__MoveAlphaSpeed(UIScriptImage_o *this, float speed, float a, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v6; // x19

  imageList = this->fields.imageList;
  this->fields.isDisp = a > 0.0;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v6 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  UIImageRender__MoveAlphaSpeed((UIImageRender_o *)this, speed, a, 0, 0, 0);
  UIScriptChara__RecoverShadowEffect(v6, 0, 0);
}


void UIScriptImage__ResumeCutin(UIScriptImage_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectComponent_array *v5; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  ProgramEffectComponent_array *v8; // x20
  unsigned __int64 v9; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v11; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v13; // x21

  if ( (byte_593A7BD & 1) == 0 )
  {
    sub_21FFC50(&CharaCutEffectComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A7BD = 1;
  }
  v5 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0);
  if ( !v5 )
    goto LABEL_21;
  max_length = v5->max_length;
  v8 = v5;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    m_Items = v5->m_Items;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_21FFED4(v5);
      v11 = m_Items[v9];
      if ( v11
        && (naturalAligment = CharaCutEffectComponent_TypeInfo->_2.naturalAligment,
            v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        v13 = (CharaCutEffectComponent_c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == CharaCutEffectComponent_TypeInfo
            ? (UnityEngine_Object_o *)m_Items[v9]
            : 0LL;
      }
      else
      {
        v13 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v5 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        break;
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        return;
    }
    if ( v13 )
    {
      (*(void (__fastcall **)(UnityEngine_Object_o *, bool, _QWORD))&v13->klass[2]._2.instance_size)(
        v13,
        isSkip,
        *(_QWORD *)&v13->klass[2]._2.element_size);
      return;
    }
LABEL_21:
    sub_21FFECC(v5, v6);
  }
}


void UIScriptImage__SetAlpha(UIScriptImage_o *this, float a, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptChara_o *v5; // x19

  imageList = this->fields.imageList;
  this->fields.isDisp = a > 0.0;
  if ( !imageList )
    goto LABEL_5;
  mainIndex = this->fields.mainIndex;
  v5 = (UIScriptChara_o *)this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  UIImageRender__SetAlpha((UIImageRender_o *)this, a, 0);
  UIScriptChara__RecoverShadowEffect(v5, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptImage__SetCharacter(
        UIScriptImage_o *this,
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
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  Il2CppClass **v16; // x8
  UIImageM_o *v17; // x22
  System_Action_o *v18; // x23
  UIScriptImage_o *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_593A7BA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593A7BA = 1;
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
  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(v12);
  v16 = &imageList->obj.klass + mainIndex;
  v17 = (UIImageM_o *)v16[4];
  if ( !v17 )
LABEL_7:
    sub_21FFECC(v12, v13);
  UIImageRender__SetFilter((UIImageRender_o *)v16[4], this->fields.filterName, this->fields.filterColor, 0);
  v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, (intptr_t)this->klass->vtable._12_EndSet.method, 0);
  UIImageM__SetCharacter(v17, imageName, faceType, v18, 0);
  UIScriptImage__SetFullScreenImage(v19, imageName, v17, v20);
}


void UIScriptImage__SetCutin(
        UIScriptImage_o *this,
        System_String_o *n,
        float time,
        float mgd,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseCutEffect; // x23
  __int64 v14; // x1
  UnityEngine_Object_o *CharaEffect; // x21
  Il2CppObject *Component_object; // x0
  __int64 v17; // x1
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UnityEngine_Color_o v20; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_593A7BC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaCutEffectComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_19203/*"cut"*/);
    byte_593A7BC = 1;
  }
  baseCutEffect = this->fields.baseCutEffect;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v20.fields.a = 1.0;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          baseCutEffect,
                                          (System_String_o *)StringLiteral_19203/*"cut"*/,
                                          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                                          time,
                                          v20,
                                          0.0,
                                          isSkip,
                                          isPause,
                                          0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(CharaEffect, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !CharaEffect )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)CharaEffect,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaCutEffectComponent___);
    imageList = this->fields.imageList;
    if ( !imageList )
      goto LABEL_13;
    mainIndex = this->fields.mainIndex;
    if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
      sub_21FFED4(Component_object);
    if ( !Component_object )
LABEL_13:
      sub_21FFECC(Component_object, v17);
    CharaCutEffectComponent__CutinStart(
      (CharaCutEffectComponent_o *)Component_object,
      imageList->m_Items[mainIndex],
      n,
      mgd,
      0);
  }
}


void UIScriptImage__SetCutout(UIScriptImage_o *this, float time, bool isSkip, const MethodInfo *method)
{
  ProgramEffectComponent_array *v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  ProgramEffectComponent_array *v10; // x20
  unsigned __int64 v11; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v13; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v15; // x21

  if ( (byte_593A7BE & 1) == 0 )
  {
    sub_21FFC50(&CharaCutEffectComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A7BE = 1;
  }
  v7 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0);
  if ( !v7 )
    goto LABEL_21;
  max_length = v7->max_length;
  v10 = v7;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    m_Items = v7->m_Items;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_21FFED4(v7);
      v13 = m_Items[v11];
      if ( v13
        && (naturalAligment = CharaCutEffectComponent_TypeInfo->_2.naturalAligment,
            v13->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        v15 = (CharaCutEffectComponent_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] == CharaCutEffectComponent_TypeInfo
            ? (UnityEngine_Object_o *)m_Items[v11]
            : 0LL;
      }
      else
      {
        v15 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      v7 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality(v15, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        break;
      LODWORD(max_length) = v10->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        return;
    }
    if ( v15 )
    {
      CharaCutEffectComponent__CutoutStart((CharaCutEffectComponent_o *)v15, time, isSkip, 0);
      return;
    }
LABEL_21:
    sub_21FFECC(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptImage__SetDepth(UIScriptImage_o *this, int32_t d, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptImage_o *v5; // x21
  UIImageRender_o *v7; // x19
  float v8; // s2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  v5 = this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
  this = (UIScriptImage_o *)this->fields.baseDepth;
  if ( !this
    || (v7 = (UIImageRender_o *)imageList->m_Items[mainIndex],
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (UIScriptImage_o *)v5->fields.baseDepth) == 0)
    || (v8 = (float)-d * 10.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, localPosition, 0),
        !v7) )
  {
LABEL_7:
    sub_21FFECC(this, *(_QWORD *)&d);
  }
  UIImageRender__SetDepth(v7, 0.1, 0);
}


void UIScriptImage__SetFilter(
        UIScriptImage_o *this,
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
  UIImageRender_o *v15; // x0
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
  v15 = (UIImageRender_o *)*((_QWORD *)&v17[1].monitor + mainIndex);
  if ( !v15 )
LABEL_5:
    sub_21FFECC(v15, v16);
  v19.fields.b = b;
  v19.fields.a = a;
  v19.fields.r = r;
  v19.fields.g = g;
  UIImageRender__SetFilter(v15, *p_filterName, v19, 0);
}


void UIScriptImage__SetFullScreenImage(
        UIScriptImage_o *this,
        System_String_o *imageName,
        UIImageM_o *baseFigure,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x21
  ExUISpriteRenderer_c *v9; // x8
  int BACK_WIDTH_21_9; // w24
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t width; // w21
  float v13; // s0
  float v14; // s1
  float v15; // s1
  float v16; // s8
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  ExUISpriteRenderer_c *v19; // x0
  float v20; // s8
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  float LocalPositionY; // s0
  __int64 v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A7B9 & 1) == 0 )
  {
    sub_21FFC50(&CommonUI_TypeInfo);
    sub_21FFC50(&ExUISpriteRenderer_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&UIImageRender_TypeInfo);
    this = (UIScriptImage_o *)sub_21FFC50(&StringLiteral_3148/*"Back/"*/);
    byte_593A7B9 = 1;
  }
  if ( !baseFigure )
    goto LABEL_38;
  this = (UIScriptImage_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseFigure, 0);
  if ( !this )
    goto LABEL_38;
  v25.fields.x = 1.0;
  v25.fields.y = 1.0;
  v25.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v25, 0);
  if ( !imageName )
    goto LABEL_38;
  if ( System_String__StartsWith(imageName, (System_String_o *)StringLiteral_3148/*"Back/"*/, 0) )
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v6);
    if ( FSUtility__IsFullScreenBack(imageName, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseFigure, 0);
      v9 = ExUISpriteRenderer_TypeInfo;
      if ( !*(&ExUISpriteRenderer_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo, imageName);
        v9 = ExUISpriteRenderer_TypeInfo;
      }
      this = (UIScriptImage_o *)UIImageRender_TypeInfo;
      BACK_WIDTH_21_9 = v9->static_fields->BACK_WIDTH_21_9;
      if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, imageName);
      if ( !transform )
        goto LABEL_38;
      v26.fields.z = 1.0;
      v26.fields.x = (float)BACK_WIDTH_21_9 / (float)UIImageRender_TypeInfo->static_fields->MAIN_SIZE_X;
      v26.fields.y = 1.0;
      UnityEngine_Transform__set_localScale(transform, v26, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseFigure, 0);
      this = (UIScriptImage_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseFigure, 0);
      if ( !this )
        goto LABEL_38;
      this = (UIScriptImage_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_38;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      localPosition.fields.x = localPosition.fields.x + -0.5;
      localPosition.fields.y = localPosition.fields.y + 0.5;
      localPosition.fields.z = localPosition.fields.z + 0.0;
      GameObjectExtensions__SetLocalPosition(gameObject, localPosition, 0);
    }
    else
    {
      if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v7);
      if ( !CommonUI__GetForceObi_16_9(0) )
      {
        width = UnityEngine_Screen__get_width(0);
        v13 = (float)width / (float)UnityEngine_Screen__get_height(0);
        v14 = 2.3333;
        if ( v13 <= 2.3333 )
          v14 = v13;
        v15 = (float)(v14 * 9.0) * 0.0625;
        if ( v13 >= 1.7778 )
          v16 = v15;
        else
          v16 = 1.0;
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseFigure, 0);
        GameObjectExtensions__SetLocalScale_42878128(v17, v16, 0);
        v19 = ExUISpriteRenderer_TypeInfo;
        if ( !*(&ExUISpriteRenderer_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo, v18);
          v19 = ExUISpriteRenderer_TypeInfo;
        }
        v20 = (float)((float)(v16 * (float)v19->static_fields->BACK_HEIGHT_16_9)
                    - (float)v19->static_fields->BACK_HEIGHT_16_9)
            * 0.5;
        v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseFigure, 0);
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseFigure, 0);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(v22, 0);
        GameObjectExtensions__SetLocalPositionY(v21, LocalPositionY + v20, 0);
      }
    }
  }
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v6);
  if ( !CommonUI__GetForceObi_16_9(0) )
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v24);
    if ( FSUtility__IsFullScreenImage(imageName, 0) )
    {
      this = (UIScriptImage_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseFigure, 0);
      if ( this )
      {
        v28.fields.y = 1.0;
        v28.fields.z = 1.0;
        v28.fields.x = 1.33;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v28, 0);
        return;
      }
LABEL_38:
      sub_21FFECC(this, imageName);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptImage__SetFullScreenScaleType(UIScriptImage_o *this, int32_t type, const MethodInfo *method)
{
  float v5; // s0
  ScriptManager_c *v6; // x0
  UIImageRender_c *v7; // x8
  int PICTURE_FRAME_SPRITE_WIDTH_21_9; // w21

  if ( (byte_593A7BB & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&UIImageRender_TypeInfo);
    byte_593A7BB = 1;
  }
  v5 = 1.0;
  if ( type == 1 )
  {
    v6 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, *(_QWORD *)&type);
      v6 = ScriptManager_TypeInfo;
    }
    v7 = UIImageRender_TypeInfo;
    PICTURE_FRAME_SPRITE_WIDTH_21_9 = v6->static_fields->PICTURE_FRAME_SPRITE_WIDTH_21_9;
    if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, *(_QWORD *)&type);
      v7 = UIImageRender_TypeInfo;
    }
    v5 = (float)PICTURE_FRAME_SPRITE_WIDTH_21_9 / (float)v7->static_fields->MAIN_SIZE_X;
  }
  UIScriptChara__SetScale((UIScriptChara_o *)this, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptImage__SetMaskImage(
        UIScriptImage_o *this,
        int32_t offsetX,
        int32_t offsetY,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  UIScriptImage_o *v8; // x23
  __int64 backIndex; // x8
  struct UIImageM_array *v14; // x9

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_10;
  mainIndex = this->fields.mainIndex;
  v8 = this;
  if ( (unsigned int)mainIndex >= LODWORD(imageList->max_length) )
LABEL_11:
    sub_21FFED4(this);
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this )
    goto LABEL_10;
  UIImageM__SetMaskImage((UIImageM_o *)this, offsetX, offsetY, width, height, 0);
  backIndex = (unsigned int)v8->fields.backIndex;
  if ( (backIndex & 0x80000000) == 0 )
  {
    v14 = v8->fields.imageList;
    if ( !v14 )
      goto LABEL_10;
    if ( (unsigned int)backIndex < LODWORD(v14->max_length) )
    {
      this = (UIScriptImage_o *)v14->m_Items[backIndex];
      if ( this )
      {
        UIImageM__SetMaskImage((UIImageM_o *)this, offsetX, offsetY, width, height, 0);
        return;
      }
LABEL_10:
      sub_21FFECC(this, *(_QWORD *)&offsetX);
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptImage__SetMaskInteraction(UIScriptImage_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x20
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
        sub_21FFED4(this);
      this = (UIScriptImage_o *)imageList->m_Items[v6];
      if ( !this )
        break;
      UIImageRender__SetMaskInteraction((UIImageRender_o *)this, maskInteraction, 0);
      max_length = imageList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, *(_QWORD *)&maskInteraction);
  }
}


void UIScriptImage__SetOverlap(UIScriptImage_o *this, float a, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  UIImageRender_o *v8; // x19

  imageList = this->fields.imageList;
  if ( !imageList )
    goto LABEL_7;
  mainIndex = this->fields.mainIndex;
  max_length = imageList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = this->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_21FFED4(this);
  }
  this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
  if ( !this
    || (v8 = (UIImageRender_o *)imageList->m_Items[backIndex],
        UIImageRender__SetAlpha((UIImageRender_o *)this, a, 0),
        !v8) )
  {
LABEL_7:
    sub_21FFECC(this, method);
  }
  UIImageRender__SetAlpha(v8, 1.0 - a, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScriptImage__SetShadow(UIScriptImage_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8
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
      this = (UIScriptImage_o *)imageList->m_Items[mainIndex];
      if ( !this )
        goto LABEL_11;
      UIImageRender__SetShadow((UIImageRender_o *)this, isShadow, 0);
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
        this = (UIScriptImage_o *)*((_QWORD *)&klass->_1.byval_arg.data + backIndex);
        if ( this )
        {
          UIImageRender__SetShadow((UIImageRender_o *)this, isShadow, 0);
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    sub_21FFED4(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScriptImage__SetSortingOrder(UIScriptImage_o *this, int32_t order, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x20
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
        sub_21FFED4(this);
      this = (UIScriptImage_o *)imageList->m_Items[v6];
      if ( !this )
        break;
      UIImageRender__SetSortingOrder((UIImageRender_o *)this, order, 0);
      max_length = imageList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, *(_QWORD *)&order);
  }
}


void UIScriptImage__SetSpecialEffect(
        UIScriptImage_o *this,
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
  UnityEngine_Object_o *CharaEffect; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  struct UIImageM_array *imageList; // x8
  uint32_t v28; // w0
  __int64 *v29; // x8
  float colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_593A7BF & 1) == 0 )
  {
    colora = color.fields.a;
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
    color.fields.a = colora;
    byte_593A7BF = 1;
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v20 = r;
  v21 = g;
  v22 = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v31,
                                          time,
                                          color,
                                          range,
                                          isSkip,
                                          isPause,
                                          0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  v25 = UnityEngine_Object__op_Equality(CharaEffect, 0, 0);
  if ( !v25 )
  {
    imageList = this->fields.imageList;
    if ( !imageList )
      sub_21FFECC(v25, v26);
    if ( this->fields.mainIndex >= LODWORD(imageList->max_length) )
      sub_21FFED4(v25);
    v28 = PrivateImplementationDetails___ComputeStringHash(n, 0);
    if ( v28 > 0x8D759330 )
    {
      if ( v28 > 0xD4B34506 )
      {
        switch ( v28 )
        {
          case 0xE7555186:
            v29 = &StringLiteral_26161/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v29 = &StringLiteral_19240/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v29 = &StringLiteral_17494/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v28 )
        {
          case 0x8DA714B6:
            v29 = &StringLiteral_26167/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v29 = &StringLiteral_20355/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v29 = &StringLiteral_19914/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v28 > 0x4A1132BE )
    {
      switch ( v28 )
      {
        case 0x8D759330:
          v29 = &StringLiteral_19913/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v29 = &StringLiteral_19874/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v29 = &StringLiteral_17495/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v28 == 242689791 )
    {
      v29 = &StringLiteral_26166/*"wipeTime"*/;
    }
    else
    {
      if ( v28 != 1242641086 )
        return;
      v29 = &StringLiteral_19239/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v29, 0) )
      UIScriptChara__StopShadowEffect((UIScriptChara_o *)this, isSkip, 0);
  }
}


void UIScriptImage__StopCut(UIScriptImage_o *this, const MethodInfo *method)
{
  struct UIImageM_array *imageList; // x8

  imageList = this->fields.imageList;
  if ( !imageList )
    sub_21FFECC(this, method);
  if ( this->fields.mainIndex >= LODWORD(imageList->max_length) )
    sub_21FFED4(this);
}


void UIScriptImage__UpdateChange(UIScriptImage_o *this, const MethodInfo *method)
{
  UIScriptImage_o *v2; // x19
  struct UIImageM_array *imageList; // x8
  __int64 mainIndex; // x9
  unsigned int max_length; // w11
  __int64 backIndex; // x10
  int32_t changeKind; // w11
  UIImageRender_o *v8; // x20
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
  if ( (byte_593A7B7 & 1) == 0 )
  {
    sub_21FFC50(&UIScriptChara_TypeInfo);
    sub_21FFC50(&StringLiteral_6227/*"EndChange"*/);
    this = (UIScriptImage_o *)sub_21FFC50(&StringLiteral_4870/*"ContinueChangeFade"*/);
    byte_593A7B7 = 1;
  }
  imageList = v2->fields.imageList;
  if ( !imageList )
    goto LABEL_31;
  mainIndex = v2->fields.mainIndex;
  max_length = imageList->max_length;
  if ( (unsigned int)mainIndex >= max_length
    || (backIndex = v2->fields.backIndex, (unsigned int)backIndex >= max_length) )
  {
    sub_21FFED4(this);
  }
  changeKind = v2->fields.changeKind;
  if ( changeKind != 3 )
  {
    if ( changeKind != 2 )
    {
      if ( changeKind != 1 )
        return;
LABEL_22:
      UIScriptImage__EndChange(v2, method);
      return;
    }
    this = (UIScriptImage_o *)imageList->m_Items[backIndex];
    if ( this )
    {
      v8 = (UIImageRender_o *)imageList->m_Items[mainIndex];
      UIImageRender__MoveAlpha((UIImageRender_o *)this, v2->fields.changeSpeed, 0.0, 0, 0, 0);
      changeSpeed = v2->fields.changeSpeed;
      this = (UIScriptImage_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
      if ( v8 )
      {
        UIImageRender__MoveAlpha(
          v8,
          changeSpeed,
          1.0,
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_6227/*"EndChange"*/,
          0);
        return;
      }
    }
LABEL_31:
    sub_21FFECC(this, method);
  }
  v10 = v2->fields.changeSpeed;
  if ( v10 <= 0.0 )
    goto LABEL_22;
  v11 = v2->fields.changeTotal / v10;
  if ( v11 >= 1.0 )
    goto LABEL_22;
  UIScriptImage__SetOverlap(v2, 0.0, method);
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
    v21 = (System_String_o *)StringLiteral_4870/*"ContinueChangeFade"*/;
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
    v21 = (System_String_o *)StringLiteral_4870/*"ContinueChangeFade"*/;
    v2->fields.changeTotal = v14 + (float)(v17 + (float)(*v18 + *v18));
    v2->fields.changeStep = v17 + v20;
  }
  UnityEngine_MonoBehaviour__Invoke(v19, v21, v20, 0);
}