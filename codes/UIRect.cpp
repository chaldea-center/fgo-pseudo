void UIRect___cctor(const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *v1; // x0
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59751B5 & 1) == 0 )
  {
    sub_2213A60(&UIRect_TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_59751B5 = 1;
  }
  v1 = (struct UnityEngine_Vector3_array *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  UIRect_TypeInfo->static_fields->mSides = v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)UIRect_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void UIRect___ctor(UIRect_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
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
  Il2CppObject *v17; // x20
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
  BetterList_UIRect__c *v31; // x0
  BetterList_T__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_59751B4 & 1) == 0 )
  {
    sub_2213A60(&UIRect_AnchorPoint_TypeInfo);
    sub_2213A60(&Method_BetterList_UIRect___ctor__);
    sub_2213A60(&BetterList_UIRect__TypeInfo);
    byte_59751B4 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.leftAnchor, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_2213CCC(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 24) = 1065353216;
  this->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rightAnchor, v10, v11, v12, v13, v14, v15, v16);
  v17 = (Il2CppObject *)sub_2213CCC(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor(v17, 0);
  this->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bottomAnchor,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = sub_2213CCC(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  *(_DWORD *)(v24 + 24) = 1065353216;
  this->fields.topAnchor = (struct UIRect_AnchorPoint_o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.topAnchor, v24, v25, v26, v27, v28, v29, v30);
  v31 = BetterList_UIRect__TypeInfo;
  this->fields.updateAnchors = 1;
  v32 = (BetterList_T__o *)sub_2213CCC(v31);
  BetterList_object____ctor(v32, (const MethodInfo_3E70130 *)Method_BetterList_UIRect___ctor__);
  this->fields.mChildren = (struct BetterList_UIRect__o *)v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mChildren, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  this->fields.mChanged = 1;
  this->fields.mUpdateAnchors = 1;
  this->fields.mUpdateFrame = -1;
  this->fields.finalAlpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIRect__FindCameraFor(UIRect_o *this, UIRect_AnchorPoint_o *ap, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Object_o *rect; // x20
  struct UnityEngine_Camera_o **p_targetCam; // x0
  int32_t v14; // w1
  __int64 v15; // x1
  int32_t layer; // w20
  struct UnityEngine_Camera_o *CameraForLayer; // x0

  if ( (byte_59751B2 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    this = (UIRect_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751B2 = 1;
  }
  if ( !ap )
    goto LABEL_17;
  target = (UnityEngine_Object_o *)ap->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ap);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
    goto LABEL_10;
  rect = (UnityEngine_Object_o *)ap->fields.rect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(rect, 0, 0) )
  {
LABEL_10:
    ap->fields.targetCam = 0;
    p_targetCam = &ap->fields.targetCam;
    v14 = 0;
    goto LABEL_16;
  }
  this = (UIRect_o *)ap->fields.target;
  if ( !this || (this = (UIRect_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
LABEL_17:
    sub_2213CDC(this, ap);
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v15);
  CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
  v14 = (int)CameraForLayer;
  ap->fields.targetCam = CameraForLayer;
  p_targetCam = &ap->fields.targetCam;
LABEL_16:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_targetCam, v14, v6, v7, v8, v9, v10, v11);
}


UnityEngine_Vector3_o UIRect__GetLocalPos(
        UIRect_o *this,
        UIRect_AnchorPoint_o *ac,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mCam; // x22
  UnityEngine_Camera_o *target; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *targetCam; // x22
  float z; // s8
  UnityEngine_Camera_o *v12; // x21
  __int64 v13; // x1
  float x; // s10
  float y; // s9
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v20; // 0:kr34_12.12
  UnityEngine_Vector3_o v21; // 0:kr40_12.12
  UnityEngine_Vector3_o v22; // 0:kr54_12.12
  UnityEngine_Rect_o rect; // 0:kr10_16.16
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59751AA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751AA = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, (const MethodInfo *)ac);
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ac);
  target = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mCam, 0, 0);
  if ( ((unsigned __int8)target & 1) == 0 )
  {
    if ( !ac )
      goto LABEL_25;
    targetCam = (UnityEngine_Object_o *)ac->fields.targetCam;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Equality(targetCam, 0, 0) )
    {
      target = ac->fields.targetCam;
      if ( target )
      {
        rect = UnityEngine_Camera__get_rect(target, 0);
        target = (UnityEngine_Camera_o *)ac->fields.target;
        if ( target )
        {
          v12 = ac->fields.targetCam;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)target, 0);
          if ( v12 )
          {
            v20 = UnityEngine_Camera__WorldToViewportPoint_83198212(v12, position, 0);
            v25.fields.z = v20.fields.z;
            target = this->fields.mCam;
            if ( target )
            {
              v25.fields.y = rect.fields.m_YMin + (float)(rect.fields.m_Height * v20.fields.y);
              v25.fields.x = rect.fields.m_XMin + (float)(rect.fields.m_Width * v20.fields.x);
              v21 = UnityEngine_Camera__ViewportToWorldPoint_83198220(target, v25, 0);
              x = v21.fields.x;
              y = v21.fields.y;
              z = v21.fields.z;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
              target = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
              if ( ((unsigned __int8)target & 1) == 0 )
                goto LABEL_23;
              if ( trans )
              {
                v22 = UnityEngine_Transform__InverseTransformPoint(trans, v21, 0);
                x = v22.fields.x;
                y = v22.fields.y;
                z = v22.fields.z;
LABEL_23:
                result.fields.x = floorf(x + 0.5);
                result.fields.y = floorf(y + 0.5);
                goto LABEL_24;
              }
            }
          }
        }
      }
LABEL_25:
      sub_2213CDC(target, v9);
    }
  }
  target = (UnityEngine_Camera_o *)UIRect__get_cachedTransform(this, v9);
  if ( !target )
    goto LABEL_25;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)target, 0);
  result.fields.x = localPosition.fields.x;
  result.fields.y = localPosition.fields.y;
  z = localPosition.fields.z;
LABEL_24:
  result.fields.z = z;
  return result;
}


UnityEngine_Vector3_array *UIRect__GetSides(
        UIRect_o *this,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mCam; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Camera_o *v7; // x21
  __int64 v8; // x1
  float cameraRayDistance; // s8
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v12; // x1
  __int64 v13; // x21
  unsigned __int64 v14; // x23
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x21
  unsigned __int64 i; // x22
  __int64 v19; // x24
  __int64 v20; // x23
  UIRect_c *v21; // x0
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v23; // 0:kr14_12.12

  if ( (byte_59751A9 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIRect_TypeInfo);
    byte_59751A9 = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, (const MethodInfo *)relativeTo);
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, relativeTo);
  if ( UnityEngine_Object__op_Inequality(mCam, 0, 0) )
  {
    v7 = this->fields.mCam;
    cameraRayDistance = UIRect__get_cameraRayDistance(this, v6);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v8);
    return NGUITools__GetSides_56428056(v7, cameraRayDistance, relativeTo, 0);
  }
  cachedTransform = UIRect__get_cachedTransform(this, v6);
  if ( !cachedTransform )
LABEL_32:
    sub_2213CDC(cachedTransform, v12);
  position = UnityEngine_Transform__get_position(cachedTransform, 0);
  v13 = 0;
  v14 = 0;
  do
  {
    cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
    if ( !*(&UIRect_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIRect_TypeInfo, v12);
      cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
    }
    v15 = *(_QWORD *)cachedTransform[7].fields.m_CachedPtr;
    if ( !v15 )
      goto LABEL_32;
    if ( v14 >= *(unsigned int *)(v15 + 24) )
LABEL_33:
      sub_2213CE4(cachedTransform);
    ++v14;
    v16 = v15 + v13;
    v13 += 12;
    *(UnityEngine_Vector3_o *)(v16 + 32) = position;
  }
  while ( v14 != 4 );
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)relativeTo, 0, 0) )
  {
    v17 = 0;
    for ( i = 0; i != 4; ++i )
    {
      cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
      if ( !*(&UIRect_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIRect_TypeInfo, v12);
        cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
      }
      v19 = *(_QWORD *)cachedTransform[7].fields.m_CachedPtr;
      if ( !v19 )
        goto LABEL_32;
      if ( i >= *(unsigned int *)(v19 + 24) )
        goto LABEL_33;
      if ( !relativeTo )
        goto LABEL_32;
      v20 = v19 + v17;
      v23 = UnityEngine_Transform__InverseTransformPoint(relativeTo, *(UnityEngine_Vector3_o *)(v19 + v17 + 32), 0);
      if ( i >= *(unsigned int *)(v19 + 24) )
        goto LABEL_33;
      v17 += 12;
      *(UnityEngine_Vector3_o *)(v20 + 32) = v23;
    }
  }
  v21 = UIRect_TypeInfo;
  if ( !*(&UIRect_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIRect_TypeInfo, v12);
    v21 = UIRect_TypeInfo;
  }
  return v21->static_fields->mSides;
}


// local variable allocation has failed, the output may be wrong!
void UIRect__Invalidate(UIRect_o *this, bool includeChildren, const MethodInfo *method)
{
  struct BetterList_UIRect__o *mChildren; // x8
  UIRect_o *v4; // x19
  __int64 v5; // x20
  struct UIRect_array *buffer; // x8

  this->fields.mChanged = 1;
  if ( includeChildren )
  {
    mChildren = this->fields.mChildren;
    v4 = this;
    if ( !mChildren )
LABEL_9:
      sub_2213CDC(this, includeChildren);
    v5 = 0;
    while ( (int)v5 < mChildren->fields.size )
    {
      buffer = mChildren->fields.buffer;
      if ( buffer )
      {
        if ( (unsigned int)v5 >= LODWORD(buffer->max_length) )
          sub_2213CE4(this);
        this = buffer->m_Items[v5];
        if ( this )
        {
          this = (UIRect_o *)((__int64 (__fastcall *)(UIRect_o *, __int64, const MethodInfo *))this->klass->vtable._12_Invalidate.methodPtr)(
                               this,
                               1,
                               this->klass->vtable._12_Invalidate.method);
          mChildren = v4->fields.mChildren;
          ++v5;
          if ( mChildren )
            continue;
        }
      }
      goto LABEL_9;
    }
  }
}


void UIRect__OnDisable(UIRect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  UnityEngine_Object_o *v7; // x20
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  UIRectUpdater_o *mChildren; // x0
  struct UIRect_o **p_mParent; // x20
  UnityEngine_Object_o *mParent; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UIRoot_o **p_mRoot; // x19
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_59751AD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_BetterList_UIRect__Remove__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__);
    byte_59751AD = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
    if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
      v5 = sub_224B908(v4);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
    if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
      v6 = sub_224B908(v4);
    v7 = **(UnityEngine_Object_o ***)(v6 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v9 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
      if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
        v9 = sub_224B908(v8);
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
      if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
        v10 = sub_224B908(v8);
      mChildren = **(UIRectUpdater_o ***)(v10 + 184);
      if ( !mChildren )
        goto LABEL_26;
      UIRectUpdater__Unregister(mChildren, this, 0);
    }
  }
  p_mParent = &this->fields.mParent;
  mParent = (UnityEngine_Object_o *)this->fields.mParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  mChildren = (UIRectUpdater_o *)UnityEngine_Object__op_Implicit(mParent, 0);
  if ( ((unsigned __int8)mChildren & 1) != 0 )
  {
    if ( *p_mParent )
    {
      mChildren = (UIRectUpdater_o *)(*p_mParent)->fields.mChildren;
      if ( mChildren )
      {
        BetterList_object___Remove(
          (BetterList_T__o *)mChildren,
          (Il2CppObject *)this,
          (const MethodInfo_3E6FCC4 *)Method_BetterList_UIRect__Remove__);
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_2213CDC(mChildren, v3);
  }
LABEL_25:
  this->fields.mParent = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParent, 0, v14, v15, v16, v17, v18, v19);
  this->fields.mRoot = 0;
  p_mRoot = &this->fields.mRoot;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mRoot, 0, v21, v22, v23, v24, v25, v26);
  *((_BYTE *)p_mRoot + 16) = 0;
  *((_BYTE *)p_mRoot - 14) = 0;
}


void UIRect__OnEnable(UIRect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  long double v9; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  UIRectUpdater_o *v12; // x0
  int32_t updateAnchors; // w8

  if ( (byte_59751AB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__);
    byte_59751AB = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
    if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
      v5 = sub_224B908(v4);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
    if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
      v6 = sub_224B908(v4);
    v7 = **(UnityEngine_Object_o ***)(v6 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
      if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
        v10 = sub_224B908(v9);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
        v11 = sub_224B908(v9);
      v12 = **(UIRectUpdater_o ***)(v11 + 184);
      if ( !v12 )
        sub_2213CDC(0, v8);
      UIRectUpdater__Register(v12, this, 0);
    }
  }
  updateAnchors = this->fields.updateAnchors;
  this->fields.mUpdateFrame = -1;
  if ( !updateAnchors )
  {
    this->fields.mAnchorsCached = 0;
    this->fields.mUpdateAnchors = 1;
  }
  if ( this->fields.mStarted )
    ((void (__fastcall *)(UIRect_o *, const MethodInfo *))this->klass->vtable._15_OnInit.methodPtr)(
      this,
      this->klass->vtable._15_OnInit.method);
  this->fields.mUpdateFrame = -1;
}


void UIRect__OnInit(UIRect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *parent; // x20
  BetterList_T__o *enabled; // x0
  __int64 v6; // x1
  struct UIRect_o *mParent; // x8

  if ( (byte_59751AC & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIRect__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751AC = 1;
  }
  this->fields.mRootSet = 0;
  this->fields.mChanged = 1;
  this->fields.mParentFound = 0;
  parent = (UnityEngine_Object_o *)UIRect__get_parent(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(parent, 0, 0) && this->fields.mStarted )
  {
    enabled = (BetterList_T__o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
    if ( ((unsigned __int8)enabled & 1) != 0 )
    {
      mParent = this->fields.mParent;
      if ( !mParent || (enabled = (BetterList_T__o *)mParent->fields.mChildren) == 0 )
        sub_2213CDC(enabled, v6);
      BetterList_object___Add(
        enabled,
        (Il2CppObject *)this,
        (const MethodInfo_3E6FA08 *)Method_BetterList_UIRect__Add__);
    }
  }
}


void UIRect__OnUpdate(UIRect_o *this, const MethodInfo *method)
{
  ;
}


void UIRect__ParentHasChanged(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *parent; // x20
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  struct UIRect_o **p_mParent; // x20
  UnityEngine_Object_o *mParent; // x22
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x21

  if ( (byte_59751B3 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIRect__Add__);
    sub_2213A60(&Method_BetterList_UIRect__Remove__);
    sub_2213A60(&Method_NGUITools_FindInParents_UIRect____91798328);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751B3 = 1;
  }
  this->fields.mParentFound = 0;
  cachedTransform = UIRect__get_cachedTransform(this, method);
  if ( !cachedTransform )
    goto LABEL_25;
  parent = UnityEngine_Transform__get_parent(cachedTransform, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  v8 = NGUITools__FindInParents_object__59706528(
         parent,
         (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UIRect____91798328);
  p_mParent = &this->fields.mParent;
  mParent = (UnityEngine_Object_o *)this->fields.mParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(mParent, (UnityEngine_Object_o *)v8, 0) )
  {
    v12 = (UnityEngine_Object_o *)*p_mParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v12, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      if ( !*p_mParent )
        goto LABEL_25;
      cachedTransform = (UnityEngine_Transform_o *)(*p_mParent)->fields.mChildren;
      if ( !cachedTransform )
        goto LABEL_25;
      BetterList_object___Remove(
        (BetterList_T__o *)cachedTransform,
        (Il2CppObject *)this,
        (const MethodInfo_3E6FCC4 *)Method_BetterList_UIRect__Remove__);
    }
    *p_mParent = (struct UIRect_o *)v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParent, (int32_t)v8, v13, v14, v15, v16, v17, v18);
    v20 = (UnityEngine_Object_o *)*p_mParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( !UnityEngine_Object__op_Implicit(v20, 0) )
      goto LABEL_23;
    if ( !this->fields.mStarted )
      goto LABEL_23;
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
    if ( ((unsigned __int8)cachedTransform & 1) == 0 )
      goto LABEL_23;
    if ( *p_mParent )
    {
      cachedTransform = (UnityEngine_Transform_o *)(*p_mParent)->fields.mChildren;
      if ( cachedTransform )
      {
        BetterList_object___Add(
          (BetterList_T__o *)cachedTransform,
          (Il2CppObject *)this,
          (const MethodInfo_3E6FA08 *)Method_BetterList_UIRect__Add__);
LABEL_23:
        this->fields.mRootSet = 0;
        return;
      }
    }
LABEL_25:
    sub_2213CDC(cachedTransform, v4);
  }
}


void UIRect__ResetAnchors(UIRect_o *this, const MethodInfo *method)
{
  UIRect_o *v2; // x19
  struct UIRect_AnchorPoint_o *leftAnchor; // x20
  UnityEngine_Object_o *target; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UIRect_AnchorPoint_o *v11; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x20
  UnityEngine_Object_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UIRect_AnchorPoint_o *v20; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x20
  UnityEngine_Object_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct UIRect_AnchorPoint_o *v29; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x20
  UnityEngine_Object_o *v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct UIRect_AnchorPoint_o *v38; // x8
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  int32_t layer; // w20
  UnityEngine_Camera_o *CameraForLayer; // x0
  MissionNaviTransitionBoardItem_o *p_mCam; // x19
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  UIRect_o *v50; // x0
  const MethodInfo *v51; // x2
  UIRect_o *v52; // x0
  const MethodInfo *v53; // x2
  UIRect_o *v54; // x0
  const MethodInfo *v55; // x2
  UIRect_o *v56; // x0
  const MethodInfo *v57; // x2

  v2 = this;
  if ( (byte_59751B1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIRect___);
    sub_2213A60(&NGUITools_TypeInfo);
    this = (UIRect_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751B1 = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  v2->fields.mAnchorsCached = 1;
  if ( !leftAnchor )
    goto LABEL_35;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  method = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v2->fields.leftAnchor;
    if ( !v11 )
      goto LABEL_35;
    this = (UIRect_o *)v11->fields.target;
    if ( !this )
      goto LABEL_35;
    method = (const MethodInfo *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  }
  leftAnchor->fields.rect = (struct UIRect_o *)method;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields.rect, (int32_t)method, v5, v6, v7, v8, v9, v10);
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_35;
  v13 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v13, 0);
  method = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = v2->fields.bottomAnchor;
    if ( !v20 )
      goto LABEL_35;
    this = (UIRect_o *)v20->fields.target;
    if ( !this )
      goto LABEL_35;
    method = (const MethodInfo *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  }
  bottomAnchor->fields.rect = (struct UIRect_o *)method;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&bottomAnchor->fields.rect,
    (int32_t)method,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_35;
  v22 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v22, 0);
  method = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v29 = v2->fields.rightAnchor;
    if ( !v29 )
      goto LABEL_35;
    this = (UIRect_o *)v29->fields.target;
    if ( !this )
      goto LABEL_35;
    method = (const MethodInfo *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  }
  rightAnchor->fields.rect = (struct UIRect_o *)method;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&rightAnchor->fields.rect,
    (int32_t)method,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_35;
  v31 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v31, 0);
  method = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v38 = v2->fields.topAnchor;
    if ( v38 )
    {
      this = (UIRect_o *)v38->fields.target;
      if ( this )
      {
        method = (const MethodInfo *)UnityEngine_Component__GetComponent_object_(
                                       (UnityEngine_Component_o *)this,
                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRect___);
        goto LABEL_31;
      }
    }
LABEL_35:
    sub_2213CDC(this, method);
  }
LABEL_31:
  topAnchor->fields.rect = (struct UIRect_o *)method;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&topAnchor->fields.rect,
    (int32_t)method,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this = (UIRect_o *)UIRect__get_cachedGameObject(v2, v39);
  if ( !this )
    goto LABEL_35;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v40);
  CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
  v2->fields.mCam = CameraForLayer;
  p_mCam = (MissionNaviTransitionBoardItem_o *)&v2->fields.mCam;
  sub_2213A04(p_mCam, (int32_t)CameraForLayer, v44, v45, v46, v47, v48, v49);
  UIRect__FindCameraFor(v50, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortValue1B, v51);
  UIRect__FindCameraFor(v52, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortValue2B, v53);
  UIRect__FindCameraFor(v54, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortValue2, v55);
  UIRect__FindCameraFor(v56, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortValueLast, v57);
  BYTE3(p_mCam[-1].fields._Name_k__BackingField) = 1;
}


void UIRect__ResetAndUpdateAnchors(UIRect_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIRect__ResetAnchors(this, method);
  UIRect__UpdateAnchors(this, v3);
}


void UIRect__SetAnchor(UIRect_o *this, UnityEngine_Transform_o *t, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UIRect_AnchorPoint_o *leftAnchor; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  leftAnchor = this->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_6;
  leftAnchor->fields.target = t;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&leftAnchor->fields,
    (int32_t)t,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  leftAnchor = this->fields.rightAnchor;
  if ( !leftAnchor
    || (leftAnchor->fields.target = t,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)t, v11, v12, v13, v14, v15, v16),
        (leftAnchor = this->fields.topAnchor) == 0)
    || (leftAnchor->fields.target = t,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)t, v17, v18, v19, v20, v21, v22),
        (leftAnchor = this->fields.bottomAnchor) == 0) )
  {
LABEL_6:
    sub_2213CDC(leftAnchor, t);
  }
  leftAnchor->fields.target = t;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)t, v23, v24, v25, v26, v27, v28);
  UIRect__ResetAnchors(this, v29);
  UIRect__UpdateAnchors(this, v30);
}


void UIRect__SetAnchor_56478404(UIRect_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  struct UIRect_AnchorPoint_o *leftAnchor; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1

  if ( (byte_59751AF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751AF = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  leftAnchor = (struct UIRect_AnchorPoint_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
  transform = 0;
  if ( ((unsigned __int8)leftAnchor & 1) != 0 )
  {
    if ( !go )
      goto LABEL_13;
    transform = UnityEngine_GameObject__get_transform(go, 0);
  }
  leftAnchor = this->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_13;
  leftAnchor->fields.target = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v7, v8, v9, v10, v11, v12);
  leftAnchor = this->fields.rightAnchor;
  if ( !leftAnchor
    || (leftAnchor->fields.target = transform,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&leftAnchor->fields,
          (int32_t)transform,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (leftAnchor = this->fields.topAnchor) == 0)
    || (leftAnchor->fields.target = transform,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&leftAnchor->fields,
          (int32_t)transform,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (leftAnchor = this->fields.bottomAnchor) == 0) )
  {
LABEL_13:
    sub_2213CDC(leftAnchor, v6);
  }
  leftAnchor->fields.target = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v26, v27, v28, v29, v30, v31);
  UIRect__ResetAnchors(this, v32);
  UIRect__UpdateAnchors(this, v33);
}


void UIRect__SetAnchor_56478636(
        UIRect_o *this,
        UnityEngine_GameObject_o *go,
        int32_t left,
        int32_t bottom,
        int32_t right,
        int32_t top,
        const MethodInfo *method)
{
  struct UIRect_AnchorPoint_o *leftAnchor; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_Transform_o *transform; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UIRect_AnchorPoint_o *v40; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x10
  struct UIRect_AnchorPoint_o *topAnchor; // x11
  const MethodInfo *v44; // x1

  if ( (byte_59751B0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751B0 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  leftAnchor = (struct UIRect_AnchorPoint_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
  transform = 0;
  if ( ((unsigned __int8)leftAnchor & 1) != 0 )
  {
    if ( !go )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(go, 0);
  }
  leftAnchor = this->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_17;
  leftAnchor->fields.target = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v15, v16, v17, v18, v19, v20);
  leftAnchor = this->fields.rightAnchor;
  if ( !leftAnchor )
    goto LABEL_17;
  leftAnchor->fields.target = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v22, v23, v24, v25, v26, v27);
  leftAnchor = this->fields.topAnchor;
  if ( !leftAnchor )
    goto LABEL_17;
  leftAnchor->fields.target = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v28, v29, v30, v31, v32, v33);
  leftAnchor = this->fields.bottomAnchor;
  if ( !leftAnchor )
    goto LABEL_17;
  leftAnchor->fields.target = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v34, v35, v36, v37, v38, v39);
  v40 = this->fields.leftAnchor;
  if ( !v40
    || (rightAnchor = this->fields.rightAnchor, v40->fields.relative = 0.0, !rightAnchor)
    || (bottomAnchor = this->fields.bottomAnchor, rightAnchor->fields.relative = 1.0, !bottomAnchor)
    || (topAnchor = this->fields.topAnchor, bottomAnchor->fields.relative = 0.0, !topAnchor) )
  {
LABEL_17:
    sub_2213CDC(leftAnchor, v14);
  }
  v40->fields.absolute = left;
  rightAnchor->fields.absolute = right;
  bottomAnchor->fields.absolute = bottom;
  topAnchor->fields.relative = 1.0;
  topAnchor->fields.absolute = top;
  UIRect__ResetAnchors(this, v14);
  UIRect__UpdateAnchors(this, v44);
}


void UIRect__Start(UIRect_o *this, const MethodInfo *method)
{
  UIRect_c *klass; // x9

  klass = this->klass;
  this->fields.mStarted = 1;
  ((void (__fastcall *)(UIRect_o *, const MethodInfo *))klass->vtable._15_OnInit.methodPtr)(
    this,
    klass->vtable._15_OnInit.method);
  ((void (__fastcall *)(UIRect_o *, const MethodInfo *))this->klass->vtable._20_unknown.methodPtr)(
    this,
    this->klass->vtable._20_unknown.method);
}


void UIRect__UpdateAnchors(UIRect_o *this, const MethodInfo *method)
{
  if ( UIRect__get_isAnchored(this, method) && this->fields.updateAnchors != 2 )
    ((void (__fastcall *)(UIRect_o *, const MethodInfo *))this->klass->vtable._17_unknown.methodPtr)(
      this,
      this->klass->vtable._17_unknown.method);
}


void UIRect__UpdateMe(UIRect_o *this, const MethodInfo *method)
{
  UIRect_o *frameCount; // x0
  const MethodInfo *v4; // x1
  int v5; // w20
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Object_o *target; // x21
  char v8; // w21
  struct UIRect_AnchorPoint_o *v9; // x8
  UnityEngine_Object_o *rect; // x22
  struct UIRect_AnchorPoint_o *v11; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v13; // x22
  struct UIRect_AnchorPoint_o *v14; // x8
  UnityEngine_Object_o *v15; // x21
  struct UIRect_AnchorPoint_o *v16; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v18; // x22
  struct UIRect_AnchorPoint_o *v19; // x8
  UnityEngine_Object_o *v20; // x21
  struct UIRect_AnchorPoint_o *v21; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v23; // x22
  struct UIRect_AnchorPoint_o *v24; // x8
  UnityEngine_Object_o *v25; // x21
  struct UIRect_AnchorPoint_o *v26; // x8

  if ( (byte_59751AE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751AE = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, method);
  frameCount = (UIRect_o *)UnityEngine_Time__get_frameCount(0);
  if ( this->fields.mUpdateFrame != (_DWORD)frameCount )
  {
    v5 = (int)frameCount;
    if ( this->fields.updateAnchors != 1 && !this->fields.mUpdateAnchors )
      goto LABEL_60;
    leftAnchor = this->fields.leftAnchor;
    this->fields.mUpdateFrame = (int)frameCount;
    this->fields.mUpdateAnchors = 0;
    if ( leftAnchor )
    {
      target = (UnityEngine_Object_o *)leftAnchor->fields.target;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
      v8 = (char)frameCount;
      if ( ((unsigned __int8)frameCount & 1) != 0 )
      {
        v9 = this->fields.leftAnchor;
        if ( !v9 )
          goto LABEL_61;
        rect = (UnityEngine_Object_o *)v9->fields.rect;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(rect, 0, 0);
        if ( ((unsigned __int8)frameCount & 1) != 0 )
        {
          v11 = this->fields.leftAnchor;
          if ( !v11 )
            goto LABEL_61;
          frameCount = v11->fields.rect;
          if ( !frameCount )
            goto LABEL_61;
          if ( frameCount->fields.mUpdateFrame != v5 )
            UIRect__UpdateMe(frameCount, v4);
        }
      }
      bottomAnchor = this->fields.bottomAnchor;
      if ( !bottomAnchor )
        goto LABEL_61;
      v13 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(v13, 0);
      if ( ((unsigned __int8)frameCount & 1) != 0 )
      {
        v14 = this->fields.bottomAnchor;
        if ( !v14 )
          goto LABEL_61;
        v15 = (UnityEngine_Object_o *)v14->fields.rect;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
        if ( ((unsigned __int8)frameCount & 1) != 0 )
        {
          v16 = this->fields.bottomAnchor;
          if ( !v16 )
            goto LABEL_61;
          frameCount = v16->fields.rect;
          if ( !frameCount )
            goto LABEL_61;
          if ( frameCount->fields.mUpdateFrame != v5 )
            UIRect__UpdateMe(frameCount, v4);
        }
        v8 = 1;
      }
      rightAnchor = this->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_61;
      v18 = (UnityEngine_Object_o *)rightAnchor->fields.target;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(v18, 0);
      if ( ((unsigned __int8)frameCount & 1) != 0 )
      {
        v19 = this->fields.rightAnchor;
        if ( !v19 )
          goto LABEL_61;
        v20 = (UnityEngine_Object_o *)v19->fields.rect;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
        if ( ((unsigned __int8)frameCount & 1) != 0 )
        {
          v21 = this->fields.rightAnchor;
          if ( !v21 )
            goto LABEL_61;
          frameCount = v21->fields.rect;
          if ( !frameCount )
            goto LABEL_61;
          if ( frameCount->fields.mUpdateFrame != v5 )
            UIRect__UpdateMe(frameCount, v4);
        }
        v8 = 1;
      }
      topAnchor = this->fields.topAnchor;
      if ( topAnchor )
      {
        v23 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(v23, 0);
        if ( ((unsigned __int8)frameCount & 1) == 0 )
        {
          if ( (v8 & 1) == 0 )
          {
LABEL_60:
            ((void (__fastcall *)(UIRect_o *, const MethodInfo *))this->klass->vtable._21_OnUpdate.methodPtr)(
              this,
              this->klass->vtable._21_OnUpdate.method);
            return;
          }
LABEL_59:
          ((void (__fastcall *)(UIRect_o *, const MethodInfo *))this->klass->vtable._17_unknown.methodPtr)(
            this,
            this->klass->vtable._17_unknown.method);
          goto LABEL_60;
        }
        v24 = this->fields.topAnchor;
        if ( v24 )
        {
          v25 = (UnityEngine_Object_o *)v24->fields.rect;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
          frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
          if ( ((unsigned __int8)frameCount & 1) == 0 )
            goto LABEL_59;
          v26 = this->fields.topAnchor;
          if ( v26 )
          {
            frameCount = v26->fields.rect;
            if ( frameCount )
            {
              if ( frameCount->fields.mUpdateFrame != v5 )
                UIRect__UpdateMe(frameCount, v4);
              goto LABEL_59;
            }
          }
        }
      }
    }
LABEL_61:
    sub_2213CDC(frameCount, v4);
  }
}


UnityEngine_Camera_o *UIRect__get_anchorCamera(UIRect_o *this, const MethodInfo *method)
{
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, method);
  return this->fields.mCam;
}


UnityEngine_GameObject_o *UIRect__get_cachedGameObject(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mGo; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59751A0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751A0 = 1;
  }
  mGo = (UnityEngine_Object_o *)this->fields.mGo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mGo, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.mGo = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mGo, (int32_t)gameObject, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mGo;
}


UnityEngine_Transform_o *UIRect__get_cachedTransform(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59751A1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751A1 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mTrans;
}


float UIRect__get_cameraRayDistance(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mCam; // x20
  bool v4; // w0
  const MethodInfo *v5; // x1
  float result; // s0
  UnityEngine_Camera_o *cachedTransform; // x0
  float v8; // s0
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x20
  float v11; // s0
  float x; // s11
  float y; // s12
  float z; // s13
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v16; // s2
  float v17; // s0
  float v18; // s1
  float v19; // s2
  struct UnityEngine_Vector3_StaticFields *v20; // x8
  float v21; // s8
  float v22; // s1
  struct UnityEngine_Mathf_StaticFields *v23; // x8
  float v24; // s0
  UnityEngine_Vector3_o v25; // 0:kr10_12.12
  UnityEngine_Vector3_o position; // 0:kr24_12.12
  UnityEngine_Vector3_o v27; // 0:kr30_12.12
  UnityEngine_Vector3_o v28; // 0:kr50_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Quaternion_o v30; // 0:kr40_16.16

  if ( (byte_59751A8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751A8 = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, method);
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality(mCam, 0, 0);
  result = 0.0;
  if ( !v4 )
  {
    cachedTransform = this->fields.mCam;
    if ( !cachedTransform )
      goto LABEL_45;
    if ( UnityEngine_Camera__get_orthographic(cachedTransform, 0) )
      goto LABEL_10;
    cachedTransform = (UnityEngine_Camera_o *)UIRect__get_cachedTransform(this, v5);
    if ( !this->fields.mCam )
      goto LABEL_45;
    v9 = (UnityEngine_Transform_o *)cachedTransform;
    cachedTransform = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.mCam,
                                                0);
    if ( !v9 )
      goto LABEL_45;
    v10 = (UnityEngine_Transform_o *)cachedTransform;
    rotation = UnityEngine_Transform__get_rotation(v9, 0);
    if ( !byte_596CDEB )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_596CDEB = 1;
    }
    v25 = UnityEngine_Quaternion__op_Multiply_83371700(
            rotation,
            UnityEngine_Vector3_TypeInfo->static_fields->backVector,
            0);
    position = UnityEngine_Transform__get_position(v9, 0);
    if ( !byte_5969AE3 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE3 = 1;
    }
    cachedTransform = (UnityEngine_Camera_o *)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5);
    v11 = sqrtf(
            (float)(v25.fields.z * v25.fields.z)
          + (float)((float)(v25.fields.x * v25.fields.x) + (float)(v25.fields.y * v25.fields.y)));
    if ( v11 <= 0.00001 )
    {
      if ( !byte_5969AE0 )
      {
        cachedTransform = (UnityEngine_Camera_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
    }
    else
    {
      x = v25.fields.x / v11;
      y = v25.fields.y / v11;
      z = v25.fields.z / v11;
    }
    if ( !v10 )
      goto LABEL_45;
    v27 = UnityEngine_Transform__get_position(v10, 0);
    v30 = UnityEngine_Transform__get_rotation(v10, 0);
    if ( !byte_5969AE9 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE9 = 1;
    }
    v28 = UnityEngine_Quaternion__op_Multiply_83371700(
            v30,
            UnityEngine_Vector3_TypeInfo->static_fields->forwardVector,
            0);
    if ( !byte_5969AE3 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE3 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5);
    v16 = sqrtf(
            (float)(v28.fields.z * v28.fields.z)
          + (float)((float)(v28.fields.x * v28.fields.x) + (float)(v28.fields.y * v28.fields.y)));
    if ( v16 <= 0.00001 )
    {
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      v20 = UnityEngine_Vector3_TypeInfo->static_fields;
      v17 = v20->zeroVector.fields.x;
      v18 = v20->zeroVector.fields.y;
      v19 = v20->zeroVector.fields.z;
    }
    else
    {
      v17 = v28.fields.x / v16;
      v18 = v28.fields.y / v16;
      v19 = v28.fields.z / v16;
    }
    v21 = (float)(z * v19) + (float)((float)(x * v17) + (float)(y * v18));
    if ( !byte_5969AE4 )
    {
      sub_2213A60(&UnityEngine_Mathf_TypeInfo);
      byte_5969AE4 = 1;
    }
    v22 = vabds_f32(0.0, v21);
    v23 = UnityEngine_Mathf_TypeInfo->static_fields;
    v24 = fmaxf(fabsf(v21), 0.0) * 0.000001;
    if ( v24 <= (float)(v23->Epsilon * 8.0) )
      v24 = v23->Epsilon * 8.0;
    if ( v22 < v24
      || (result = (float)((float)((float)(position.fields.z * z)
                                 + (float)((float)(position.fields.x * x) + (float)(position.fields.y * y)))
                         - (float)((float)(z * v27.fields.z)
                                 + (float)((float)(x * v27.fields.x) + (float)(y * v27.fields.y))))
                 / v21,
          result <= 0.0) )
    {
LABEL_10:
      cachedTransform = this->fields.mCam;
      if ( cachedTransform )
      {
        v8 = UnityEngine_Camera__get_nearClipPlane(cachedTransform, 0);
        cachedTransform = this->fields.mCam;
        if ( cachedTransform )
          return v8 + (float)((float)(UnityEngine_Camera__get_farClipPlane(cachedTransform, 0) - v8) * 0.5);
      }
LABEL_45:
      sub_2213CDC(cachedTransform, v5);
    }
  }
  return result;
}


bool UIRect__get_canBeAnchored(UIRect_o *this, const MethodInfo *method)
{
  return 1;
}


bool UIRect__get_isAnchored(UIRect_o *this, const MethodInfo *method)
{
  UIRect_o *v2; // x19
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Object_o *target; // x20
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v6; // x20
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v8; // x20
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v10; // x20

  v2 = this;
  if ( (byte_59751A7 & 1) == 0 )
  {
    this = (UIRect_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751A7 = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_21;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return ((bool (__fastcall *)(UIRect_o *, const MethodInfo *))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
             v2,
             v2->klass->vtable._6_get_canBeAnchored.method);
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_21;
  v6 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v6, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return ((bool (__fastcall *)(UIRect_o *, const MethodInfo *))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
             v2,
             v2->klass->vtable._6_get_canBeAnchored.method);
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_21;
  v8 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v8, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return ((bool (__fastcall *)(UIRect_o *, _QWORD))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
             v2,
             v2->klass->vtable._6_get_canBeAnchored.method);
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
LABEL_21:
    sub_2213CDC(this, method);
  v10 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Implicit(v10, 0) )
    return ((bool (__fastcall *)(UIRect_o *, _QWORD))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
             v2,
             v2->klass->vtable._6_get_canBeAnchored.method);
  return 0;
}


bool UIRect__get_isAnchoredHorizontally(UIRect_o *this, const MethodInfo *method)
{
  UIRect_o *v2; // x19
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Object_o *target; // x20
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v7; // x19

  v2 = this;
  if ( (byte_59751A3 & 1) == 0 )
  {
    this = (UIRect_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751A3 = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_12;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
LABEL_12:
    sub_2213CDC(this, method);
  v7 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Implicit(v7, 0);
}


bool UIRect__get_isAnchoredVertically(UIRect_o *this, const MethodInfo *method)
{
  UIRect_o *v2; // x19
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *target; // x20
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v7; // x19

  v2 = this;
  if ( (byte_59751A4 & 1) == 0 )
  {
    this = (UIRect_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751A4 = 1;
  }
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_12;
  target = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
LABEL_12:
    sub_2213CDC(this, method);
  v7 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Implicit(v7, 0);
}


bool UIRect__get_isFullyAnchored(UIRect_o *this, const MethodInfo *method)
{
  UIRect_o *v2; // x19
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Object_o *target; // x20
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v6; // x20
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v8; // x20
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v10; // x19

  v2 = this;
  if ( (byte_59751A2 & 1) == 0 )
  {
    this = (UIRect_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751A2 = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_20;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_20;
  v8 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v8, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
LABEL_20:
    sub_2213CDC(this, method);
  v10 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Implicit(v10, 0);
}


UIRect_o *UIRect__get_parent(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *parent; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59751A5 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIRect____91798328);
    sub_2213A60(&NGUITools_TypeInfo);
    byte_59751A5 = 1;
  }
  if ( !this->fields.mParentFound )
  {
    this->fields.mParentFound = 1;
    cachedTransform = UIRect__get_cachedTransform(this, method);
    if ( !cachedTransform )
      sub_2213CDC(0, v4);
    parent = UnityEngine_Transform__get_parent(cachedTransform, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    v7 = NGUITools__FindInParents_object__59706528(
           parent,
           (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UIRect____91798328);
    this->fields.mParent = (struct UIRect_o *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParent, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
  return this->fields.mParent;
}


UIRoot_o *UIRect__get_root(UIRect_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *parent; // x23
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *cachedTransform; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  while ( 1 )
  {
    if ( (byte_59751A6 & 1) == 0 )
    {
      sub_2213A60(&Method_NGUITools_FindInParents_UIRoot____91798344);
      sub_2213A60(&NGUITools_TypeInfo);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      byte_59751A6 = 1;
    }
    parent = (UnityEngine_Object_o *)UIRect__get_parent(this, method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    v5 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( !v5 )
      break;
    this = this->fields.mParent;
    if ( !this )
      sub_2213CDC(v5, method);
  }
  if ( !this->fields.mRootSet )
  {
    this->fields.mRootSet = 1;
    cachedTransform = UIRect__get_cachedTransform(this, method);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
    v8 = NGUITools__FindInParents_object__59706528(
           cachedTransform,
           (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UIRoot____91798344);
    this->fields.mRoot = (struct UIRoot_o *)v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mRoot, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return this->fields.mRoot;
}


bool UIRect__get_started(UIRect_o *this, const MethodInfo *method)
{
  return this->fields.mStarted;
}


void UIRect_AnchorPoint___ctor(UIRect_AnchorPoint_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UIRect_AnchorPoint___ctor_56480056(UIRect_AnchorPoint_o *this, float relative, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.relative = relative;
}


UnityEngine_Vector3_array *UIRect_AnchorPoint__GetSides(
        UIRect_AnchorPoint_o *this,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *rect; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x20

  if ( (byte_59751B8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751B8 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, relativeTo);
  if ( !UnityEngine_Object__op_Inequality(target, 0, 0) )
    return 0;
  rect = (UnityEngine_Object_o *)this->fields.rect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(rect, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.rect;
    if ( v9 )
      return ((UnityEngine_Vector3_array *(__fastcall *)(UnityEngine_Component_o *, UnityEngine_Transform_o *, void *))v9->klass[1]._1.properties)(
               v9,
               relativeTo,
               v9->klass[1]._1.methods);
LABEL_20:
    sub_2213CDC(v9, v8);
  }
  v9 = (UnityEngine_Component_o *)this->fields.target;
  if ( !v9 )
    goto LABEL_20;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v9,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return 0;
  v9 = (UnityEngine_Component_o *)this->fields.target;
  if ( !v9 )
    goto LABEL_20;
  v14 = UnityEngine_Component__GetComponent_object_(
          v9,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v13);
  return NGUITools__GetSides_56429292((UnityEngine_Camera_o *)v14, relativeTo, 0);
}


void UIRect_AnchorPoint__Set(UIRect_AnchorPoint_o *this, float relative, float absolute, const MethodInfo *method)
{
  int v6; // w8
  unsigned int v7; // w9
  int32_t v8; // w8

  v6 = (unsigned __int8)byte_5969ADF;
  this->fields.relative = relative;
  if ( !v6 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v7 = vcvtms_s32_f32(absolute + 0.5);
  if ( floorf(absolute + 0.5) == INFINITY )
    v8 = 0x80000000;
  else
    v8 = v7;
  this->fields.absolute = v8;
}


void UIRect_AnchorPoint__SetHorizontal(
        UIRect_AnchorPoint_o *this,
        UnityEngine_Transform_o *parent,
        float localPos,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rect; // x21
  __int64 v8; // x1
  __int64 target; // x0
  float v10; // s0
  float relative; // s1
  float v12; // s8
  __int64 v13; // x1
  float x; // s9
  float v15; // s8
  unsigned int v16; // w9
  int32_t v17; // w8
  UnityEngine_Vector3_o position; // 0:kr00_12.12

  if ( (byte_59751B6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751B6 = 1;
  }
  rect = (UnityEngine_Object_o *)this->fields.rect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( !UnityEngine_Object__op_Implicit(rect, 0) )
  {
    target = (__int64)this->fields.target;
    if ( !target )
      goto LABEL_29;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)target, 0);
    x = position.fields.x;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    target = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
    if ( (target & 1) != 0 )
    {
      if ( !parent )
        goto LABEL_29;
      LODWORD(x) = (unsigned int)UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
    }
    v12 = localPos - x;
    goto LABEL_21;
  }
  target = (__int64)this->fields.rect;
  if ( !target
    || (target = (*(__int64 (__fastcall **)(__int64, UnityEngine_Transform_o *, _QWORD))(*(_QWORD *)target + 520LL))(
                   target,
                   parent,
                   *(_QWORD *)(*(_QWORD *)target + 528LL))) == 0 )
  {
LABEL_29:
    sub_2213CDC(target, v8);
  }
  if ( *(_DWORD *)(target + 24) <= 2u )
    sub_2213CE4(target);
  v10 = 1.0;
  relative = this->fields.relative;
  if ( relative <= 1.0 )
    v10 = this->fields.relative;
  if ( relative < 0.0 )
    v10 = 0.0;
  v12 = localPos
      - (float)(*(float *)(target + 32) + (float)((float)(*(float *)(target + 56) - *(float *)(target + 32)) * v10));
LABEL_21:
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v15 = v12 + 0.5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  v16 = vcvtms_s32_f32(v15);
  if ( floorf(v15) == INFINITY )
    v17 = 0x80000000;
  else
    v17 = v16;
  this->fields.absolute = v17;
}


void UIRect_AnchorPoint__SetToNearest(
        UIRect_AnchorPoint_o *this,
        float abs0,
        float abs1,
        float abs2,
        const MethodInfo *method)
{
  UIRect_AnchorPoint__SetToNearest_56480532(this, 0.0, 0.5, 1.0, abs0, abs1, abs2, method);
}


void UIRect_AnchorPoint__SetToNearest_56480532(
        UIRect_AnchorPoint_o *this,
        float rel0,
        float rel1,
        float rel2,
        float abs0,
        float abs1,
        float abs2,
        const MethodInfo *method)
{
  float v8; // s6
  float v9; // s7
  float v10; // s16
  float v13; // s1

  v8 = fabsf(abs0);
  v9 = fabsf(abs1);
  v10 = fabsf(abs2);
  if ( v8 < v9 && v8 < v10 )
  {
    v13 = abs0;
  }
  else if ( v9 < v8 && v9 < v10 )
  {
    rel0 = rel1;
    v13 = abs1;
  }
  else
  {
    rel0 = rel2;
    v13 = abs2;
  }
  UIRect_AnchorPoint__Set(this, rel0, v13, method);
}


void UIRect_AnchorPoint__SetVertical(
        UIRect_AnchorPoint_o *this,
        UnityEngine_Transform_o *parent,
        float localPos,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rect; // x21
  __int64 v8; // x1
  __int64 target; // x0
  float v10; // s0
  float relative; // s1
  float v12; // s8
  __int64 v13; // x1
  float y; // s9
  float v15; // s8
  unsigned int v16; // w9
  int32_t v17; // w8
  UnityEngine_Vector3_o position; // 0:kr00_12.12

  if ( (byte_59751B7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59751B7 = 1;
  }
  rect = (UnityEngine_Object_o *)this->fields.rect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( !UnityEngine_Object__op_Implicit(rect, 0) )
  {
    target = (__int64)this->fields.target;
    if ( !target )
      goto LABEL_29;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)target, 0);
    y = position.fields.y;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    target = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
    if ( (target & 1) != 0 )
    {
      if ( !parent )
        goto LABEL_29;
      y = UnityEngine_Transform__InverseTransformPoint(parent, position, 0).fields.y;
    }
    v12 = localPos - y;
    goto LABEL_21;
  }
  target = (__int64)this->fields.rect;
  if ( !target
    || (target = (*(__int64 (__fastcall **)(__int64, UnityEngine_Transform_o *, _QWORD))(*(_QWORD *)target + 520LL))(
                   target,
                   parent,
                   *(_QWORD *)(*(_QWORD *)target + 528LL))) == 0 )
  {
LABEL_29:
    sub_2213CDC(target, v8);
  }
  if ( (*(_DWORD *)(target + 24) & 0xFFFFFFFC) == 0 )
    sub_2213CE4(target);
  v10 = 1.0;
  relative = this->fields.relative;
  if ( relative <= 1.0 )
    v10 = this->fields.relative;
  if ( relative < 0.0 )
    v10 = 0.0;
  v12 = localPos
      - (float)(*(float *)(target + 72) + (float)((float)(*(float *)(target + 48) - *(float *)(target + 72)) * v10));
LABEL_21:
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v15 = v12 + 0.5;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  v16 = vcvtms_s32_f32(v15);
  if ( floorf(v15) == INFINITY )
    v17 = 0x80000000;
  else
    v17 = v16;
  this->fields.absolute = v17;
}


void UIRect_AnchorPoint__Set_56480348(
        UIRect_AnchorPoint_o *this,
        UnityEngine_Transform_o *target,
        float relative,
        float absolute,
        const MethodInfo *method)
{
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UIRect_AnchorPoint_Fields *p_fields; // x20
  __int64 v14; // x1
  unsigned int v15; // w9
  int32_t v16; // w8

  this->fields.target = target;
  p_fields = &this->fields;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)target,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8,
    v9);
  p_fields->relative = relative;
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v14);
  v15 = vcvtms_s32_f32(absolute + 0.5);
  if ( floorf(absolute + 0.5) == INFINITY )
    v16 = 0x80000000;
  else
    v16 = v15;
  this->fields.absolute = v16;
}