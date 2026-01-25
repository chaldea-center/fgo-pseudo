void UIRect___cctor(const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *v1; // x0
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF2E92 & 1) == 0 )
  {
    sub_1C7BAE8(&UIRect_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3___TypeInfo);
    byte_4CF2E92 = 1;
  }
  v1 = (struct UnityEngine_Vector3_array *)sub_1C7BB90(UnityEngine_Vector3___TypeInfo, 4);
  UIRect_TypeInfo->static_fields->mSides = v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)UIRect_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void UIRect___ctor(UIRect_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
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
  Il2CppObject *v17; // x20
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
  BetterList_T__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CF2E91 & 1) == 0 )
  {
    sub_1C7BAE8(&UIRect_AnchorPoint_TypeInfo);
    sub_1C7BAE8(&Method_BetterList_UIRect___ctor__);
    sub_1C7BAE8(&BetterList_UIRect__TypeInfo);
    byte_4CF2E91 = 1;
  }
  v3 = (Il2CppObject *)sub_1C7BD34(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.leftAnchor, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_1C7BD34(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 24) = 1065353216;
  this->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.rightAnchor, v10, v11, v12, v13, v14, v15, v16);
  v17 = (Il2CppObject *)sub_1C7BD34(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor(v17, 0);
  this->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.bottomAnchor, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = sub_1C7BD34(UIRect_AnchorPoint_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  *(_DWORD *)(v24 + 24) = 1065353216;
  this->fields.topAnchor = (struct UIRect_AnchorPoint_o *)v24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.topAnchor, v24, v25, v26, v27, v28, v29, v30);
  this->fields.updateAnchors = 1;
  v31 = (BetterList_T__o *)sub_1C7BD34(BetterList_UIRect__TypeInfo);
  BetterList_object____ctor(v31, (const MethodInfo_33A6B7C *)Method_BetterList_UIRect___ctor__);
  this->fields.mChildren = (struct BetterList_UIRect__o *)v31;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mChildren, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  this->fields.mChanged = 1;
  this->fields.mUpdateAnchors = 1;
  this->fields.mUpdateFrame = -1;
  this->fields.finalAlpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIRect__FindCameraFor(UIRect_o *this, UIRect_AnchorPoint_o *ap, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *rect; // x20
  struct UnityEngine_Camera_o **p_targetCam; // x0
  int32_t v13; // w1
  int32_t layer; // w20
  struct UnityEngine_Camera_o *CameraForLayer; // x0

  if ( (byte_4CF2E8F & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    this = (UIRect_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E8F = 1;
  }
  if ( !ap )
    goto LABEL_17;
  target = (UnityEngine_Object_o *)ap->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
    goto LABEL_10;
  rect = (UnityEngine_Object_o *)ap->fields.rect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rect, 0, 0) )
  {
LABEL_10:
    ap->fields.targetCam = 0;
    p_targetCam = &ap->fields.targetCam;
    v13 = 0;
    goto LABEL_16;
  }
  this = (UIRect_o *)ap->fields.target;
  if ( !this || (this = (UIRect_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
LABEL_17:
    sub_1C7BD40(this, ap);
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
  ap->fields.targetCam = CameraForLayer;
  v13 = (int)CameraForLayer;
  p_targetCam = &ap->fields.targetCam;
LABEL_16:
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_targetCam, v13, v5, v6, v7, v8, v9, v10);
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
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  float v17; // s1
  float v18; // s0
  float x; // s10
  float y; // s9
  float v21; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF2E87 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E87 = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, (const MethodInfo *)ac);
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mCam, 0, 0);
  if ( ((unsigned __int8)target & 1) == 0 )
  {
    if ( !ac )
      goto LABEL_25;
    targetCam = (UnityEngine_Object_o *)ac->fields.targetCam;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          m_XMin = rect.fields.m_XMin;
          m_YMin = rect.fields.m_YMin;
          m_Width = rect.fields.m_Width;
          m_Height = rect.fields.m_Height;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)target, 0);
          if ( v12 )
          {
            v24 = UnityEngine_Camera__WorldToViewportPoint_71674728(v12, position, 0);
            target = this->fields.mCam;
            if ( target )
            {
              v17 = m_YMin + (float)(m_Height * v24.fields.y);
              v18 = m_XMin + (float)(m_Width * v24.fields.x);
              v25 = UnityEngine_Camera__ViewportToWorldPoint_71674736(target, v24, 0);
              x = v25.fields.x;
              y = v25.fields.y;
              z = v25.fields.z;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              target = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
              if ( ((unsigned __int8)target & 1) == 0 )
                goto LABEL_23;
              if ( trans )
              {
                v26.fields.x = x;
                v26.fields.y = y;
                v26.fields.z = z;
                v27 = UnityEngine_Transform__InverseTransformPoint(trans, v26, 0);
                x = v27.fields.x;
                y = v27.fields.y;
                z = v27.fields.z;
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
      sub_1C7BD40(target, v9);
    }
  }
  target = (UnityEngine_Camera_o *)UIRect__get_cachedTransform(this, v9);
  if ( !target )
    goto LABEL_25;
  result = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)target, 0);
  z = result.fields.z;
LABEL_24:
  v21 = z;
  result.fields.z = v21;
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
  float cameraRayDistance; // s8
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v11; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v15; // x21
  unsigned __int64 v16; // x23
  __int64 v17; // x8
  float *v18; // x8
  __int64 v19; // x21
  unsigned __int64 i; // x22
  __int64 v21; // x23
  __int64 v22; // x24
  UIRect_c *v23; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF2E86 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIRect_TypeInfo);
    byte_4CF2E86 = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, (const MethodInfo *)relativeTo);
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mCam, 0, 0) )
  {
    v7 = this->fields.mCam;
    cameraRayDistance = UIRect__get_cameraRayDistance(this, v6);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    return NGUITools__GetSides_49884120(v7, cameraRayDistance, relativeTo, 0);
  }
  cachedTransform = UIRect__get_cachedTransform(this, v6);
  if ( !cachedTransform )
LABEL_32:
    sub_1C7BD40(cachedTransform, v11);
  position = UnityEngine_Transform__get_position(cachedTransform, 0);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  v15 = 0;
  v16 = 0;
  do
  {
    cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
    if ( !UIRect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
      cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
    }
    v17 = *(_QWORD *)cachedTransform[7].fields.m_CachedPtr;
    if ( !v17 )
      goto LABEL_32;
    if ( v16 >= *(unsigned int *)(v17 + 24) )
LABEL_33:
      sub_1C7BD48(cachedTransform);
    ++v16;
    v18 = (float *)(v17 + v15);
    v15 += 12;
    v18[8] = x;
    v18[9] = y;
    v18[10] = z;
  }
  while ( v16 != 4 );
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)relativeTo, 0, 0) )
  {
    v19 = 0;
    for ( i = 0; i != 4; ++i )
    {
      cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
      if ( !UIRect_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
        cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
      }
      v21 = *(_QWORD *)cachedTransform[7].fields.m_CachedPtr;
      if ( !v21 )
        goto LABEL_32;
      if ( i >= *(unsigned int *)(v21 + 24) )
        goto LABEL_33;
      if ( !relativeTo )
        goto LABEL_32;
      v22 = v21 + v19;
      v25 = UnityEngine_Transform__InverseTransformPoint(relativeTo, *(UnityEngine_Vector3_o *)(v21 + v19 + 32), 0);
      if ( i >= *(unsigned int *)(v21 + 24) )
        goto LABEL_33;
      v19 += 12;
      *(UnityEngine_Vector3_o *)(v22 + 32) = v25;
    }
  }
  v23 = UIRect_TypeInfo;
  if ( !UIRect_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
    v23 = UIRect_TypeInfo;
  }
  return v23->static_fields->mSides;
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
      sub_1C7BD40(this, includeChildren);
    v5 = 0;
    while ( (int)v5 < mChildren->fields.size )
    {
      buffer = mChildren->fields.buffer;
      if ( buffer )
      {
        if ( (unsigned int)v5 >= LODWORD(buffer->max_length) )
          sub_1C7BD48(this);
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
  long double v3; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  UIRectUpdater_o *mChildren; // x0
  struct UIRect_o **p_mParent; // x20
  UnityEngine_Object_o *mParent; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UIRoot_o **p_mRoot; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CF2E8A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&Method_BetterList_UIRect__Remove__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__);
    byte_4CF2E8A = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v4 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C51B7C(v3);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C51B7C(v3);
    v6 = **(UnityEngine_Object_o ***)(v5 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      v9 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1C51B7C(v8);
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C51B7C(v8);
      mChildren = **(UIRectUpdater_o ***)(v10 + 184);
      if ( !mChildren )
        goto LABEL_26;
      UIRectUpdater__Unregister(mChildren, this, 0);
    }
  }
  p_mParent = &this->fields.mParent;
  mParent = (UnityEngine_Object_o *)this->fields.mParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          (const MethodInfo_33A6708 *)Method_BetterList_UIRect__Remove__);
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1C7BD40(mChildren, v7);
  }
LABEL_25:
  this->fields.mParent = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mParent, 0, v14, v15, v16, v17, v18, v19);
  this->fields.mRoot = 0;
  p_mRoot = &this->fields.mRoot;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_mRoot, 0, v21, v22, v23, v24, v25, v26);
  *((_BYTE *)p_mRoot + 16) = 0;
  *((_BYTE *)p_mRoot - 14) = 0;
}


void UIRect__OnEnable(UIRect_o *this, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  UIRectUpdater_o *v11; // x0
  int32_t updateAnchors; // w8

  if ( (byte_4CF2E88 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__);
    byte_4CF2E88 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v4 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C51B7C(v3);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C51B7C(v3);
    v6 = **(UnityEngine_Object_o ***)(v5 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      v9 = *((_QWORD *)Method_SingletonMonoBehaviour_UIRectUpdater__getInstance__ + 4);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1C51B7C(v8);
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C51B7C(v8);
      v11 = **(UIRectUpdater_o ***)(v10 + 184);
      if ( !v11 )
        sub_1C7BD40(0, v7);
      UIRectUpdater__Register(v11, this, 0);
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
  UnityEngine_Object_o *parent; // x20
  BetterList_T__o *enabled; // x0
  __int64 v5; // x1
  struct UIRect_o *mParent; // x8

  if ( (byte_4CF2E89 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_UIRect__Add__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E89 = 1;
  }
  this->fields.mRootSet = 0;
  this->fields.mChanged = 1;
  this->fields.mParentFound = 0;
  parent = (UnityEngine_Object_o *)UIRect__get_parent(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(parent, 0, 0) && this->fields.mStarted )
  {
    enabled = (BetterList_T__o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
    if ( ((unsigned __int8)enabled & 1) != 0 )
    {
      mParent = this->fields.mParent;
      if ( !mParent || (enabled = (BetterList_T__o *)mParent->fields.mChildren) == 0 )
        sub_1C7BD40(enabled, v5);
      BetterList_object___Add(
        enabled,
        (Il2CppObject *)this,
        (const MethodInfo_33A6450 *)Method_BetterList_UIRect__Add__);
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
  UnityEngine_Transform_o *parent; // x20
  Il2CppObject *v6; // x0
  struct UIRect_o **p_mParent; // x20
  UnityEngine_Object_o *mParent; // x22
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Object_o *v17; // x21

  if ( (byte_4CF2E90 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_UIRect__Add__);
    sub_1C7BAE8(&Method_BetterList_UIRect__Remove__);
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIRect____78877072);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E90 = 1;
  }
  this->fields.mParentFound = 0;
  cachedTransform = UIRect__get_cachedTransform(this, method);
  if ( !cachedTransform )
    goto LABEL_25;
  parent = UnityEngine_Transform__get_parent(cachedTransform, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v6 = NGUITools__FindInParents_object__52404068(
         parent,
         (const MethodInfo_31F9F64 *)Method_NGUITools_FindInParents_UIRect____78877072);
  p_mParent = &this->fields.mParent;
  mParent = (UnityEngine_Object_o *)this->fields.mParent;
  v9 = (UnityEngine_Object_o *)v6;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mParent, v9, 0) )
  {
    v10 = (UnityEngine_Object_o *)*p_mParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v10, 0);
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
        (const MethodInfo_33A6708 *)Method_BetterList_UIRect__Remove__);
    }
    *p_mParent = (struct UIRect_o *)v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mParent, (int32_t)v9, v11, v12, v13, v14, v15, v16);
    v17 = (UnityEngine_Object_o *)*p_mParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v17, 0) )
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
          (const MethodInfo_33A6450 *)Method_BetterList_UIRect__Add__);
LABEL_23:
        this->fields.mRootSet = 0;
        return;
      }
    }
LABEL_25:
    sub_1C7BD40(cachedTransform, v4);
  }
}


void UIRect__ResetAnchors(UIRect_o *this, const MethodInfo *method)
{
  UIRect_o *v2; // x19
  struct UIRect_AnchorPoint_o *leftAnchor; // x20
  UnityEngine_Object_o *target; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UIRect_AnchorPoint_o *v11; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x20
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UIRect_AnchorPoint_o *v20; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x20
  UnityEngine_Object_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct UIRect_AnchorPoint_o *v29; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x20
  UnityEngine_Object_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct UIRect_AnchorPoint_o *v38; // x8
  const MethodInfo *v39; // x1
  int32_t layer; // w20
  UnityEngine_Camera_o *CameraForLayer; // x0
  GrandQuestFolderBoardItem_o *p_mCam; // x19
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  UIRect_o *v49; // x0
  const MethodInfo *v50; // x2
  UIRect_o *v51; // x0
  const MethodInfo *v52; // x2
  UIRect_o *v53; // x0
  const MethodInfo *v54; // x2
  UIRect_o *v55; // x0
  const MethodInfo *v56; // x2

  v2 = this;
  if ( (byte_4CF2E8E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIRect___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    this = (UIRect_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E8E = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  v2->fields.mAnchorsCached = 1;
  if ( !leftAnchor )
    goto LABEL_35;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                   (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  }
  leftAnchor->fields.rect = (struct UIRect_o *)method;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields.rect, (int32_t)method, v5, v6, v7, v8, v9, v10);
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_35;
  v13 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                   (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  }
  bottomAnchor->fields.rect = (struct UIRect_o *)method;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&bottomAnchor->fields.rect, (int32_t)method, v14, v15, v16, v17, v18, v19);
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_35;
  v22 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                   (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  }
  rightAnchor->fields.rect = (struct UIRect_o *)method;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&rightAnchor->fields.rect, (int32_t)method, v23, v24, v25, v26, v27, v28);
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_35;
  v31 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIRect___);
        goto LABEL_31;
      }
    }
LABEL_35:
    sub_1C7BD40(this, method);
  }
LABEL_31:
  topAnchor->fields.rect = (struct UIRect_o *)method;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&topAnchor->fields.rect, (int32_t)method, v32, v33, v34, v35, v36, v37);
  this = (UIRect_o *)UIRect__get_cachedGameObject(v2, v39);
  if ( !this )
    goto LABEL_35;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
  v2->fields.mCam = CameraForLayer;
  p_mCam = (GrandQuestFolderBoardItem_o *)&v2->fields.mCam;
  sub_1C7BA8C(p_mCam, (int32_t)CameraForLayer, v43, v44, v45, v46, v47, v48);
  UIRect__FindCameraFor(v49, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortStr1, v50);
  UIRect__FindCameraFor(v51, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortValue2, v52);
  UIRect__FindCameraFor(v53, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortValue1B, v54);
  UIRect__FindCameraFor(v55, (UIRect_AnchorPoint_o *)p_mCam[-1].fields.sortValue2B, v56);
  HIBYTE(p_mCam[-1].fields._WarId_k__BackingField) = 1;
}


void UIRect__ResetAndUpdateAnchors(UIRect_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIRect__ResetAnchors(this, method);
  UIRect__UpdateAnchors(this, v3);
}


void UIRect__SetAnchor(UIRect_o *this, UnityEngine_Transform_o *t, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UIRect_AnchorPoint_o *leftAnchor; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  leftAnchor = this->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_6;
  leftAnchor->fields.target = t;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)t, (int32_t)method, v3, v4, v5, v6, v7);
  leftAnchor = this->fields.rightAnchor;
  if ( !leftAnchor
    || (leftAnchor->fields.target = t,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)t, v11, v12, v13, v14, v15, v16),
        (leftAnchor = this->fields.topAnchor) == 0)
    || (leftAnchor->fields.target = t,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)t, v17, v18, v19, v20, v21, v22),
        (leftAnchor = this->fields.bottomAnchor) == 0) )
  {
LABEL_6:
    sub_1C7BD40(leftAnchor, t);
  }
  leftAnchor->fields.target = t;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)t, v23, v24, v25, v26, v27, v28);
  UIRect__ResetAnchors(this, v29);
  UIRect__UpdateAnchors(this, v30);
}


void UIRect__SetAnchor_49934372(UIRect_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  struct UIRect_AnchorPoint_o *leftAnchor; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Transform_o *transform; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1

  if ( (byte_4CF2E8C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E8C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v7, v8, v9, v10, v11, v12);
  leftAnchor = this->fields.rightAnchor;
  if ( !leftAnchor
    || (leftAnchor->fields.target = transform,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&leftAnchor->fields,
          (int32_t)transform,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (leftAnchor = this->fields.topAnchor) == 0)
    || (leftAnchor->fields.target = transform,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&leftAnchor->fields,
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
    sub_1C7BD40(leftAnchor, v6);
  }
  leftAnchor->fields.target = transform;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v26, v27, v28, v29, v30, v31);
  UIRect__ResetAnchors(this, v32);
  UIRect__UpdateAnchors(this, v33);
}


void UIRect__SetAnchor_49934604(
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Transform_o *transform; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct UIRect_AnchorPoint_o *v40; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  struct UIRect_AnchorPoint_o *bottomAnchor; // x10
  struct UIRect_AnchorPoint_o *topAnchor; // x11
  const MethodInfo *v44; // x1

  if ( (byte_4CF2E8D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E8D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v15, v16, v17, v18, v19, v20);
  leftAnchor = this->fields.rightAnchor;
  if ( !leftAnchor )
    goto LABEL_17;
  leftAnchor->fields.target = transform;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v22, v23, v24, v25, v26, v27);
  leftAnchor = this->fields.topAnchor;
  if ( !leftAnchor )
    goto LABEL_17;
  leftAnchor->fields.target = transform;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v28, v29, v30, v31, v32, v33);
  leftAnchor = this->fields.bottomAnchor;
  if ( !leftAnchor )
    goto LABEL_17;
  leftAnchor->fields.target = transform;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&leftAnchor->fields, (int32_t)transform, v34, v35, v36, v37, v38, v39);
  v40 = this->fields.leftAnchor;
  if ( !v40
    || (v40->fields.relative = 0.0, (rightAnchor = this->fields.rightAnchor) == 0)
    || (rightAnchor->fields.relative = 1.0, (bottomAnchor = this->fields.bottomAnchor) == 0)
    || (bottomAnchor->fields.relative = 0.0, (topAnchor = this->fields.topAnchor) == 0) )
  {
LABEL_17:
    sub_1C7BD40(leftAnchor, v14);
  }
  topAnchor->fields.relative = 1.0;
  v40->fields.absolute = left;
  rightAnchor->fields.absolute = right;
  bottomAnchor->fields.absolute = bottom;
  topAnchor->fields.absolute = top;
  UIRect__ResetAnchors(this, v14);
  UIRect__UpdateAnchors(this, v44);
}


void UIRect__Start(UIRect_o *this, const MethodInfo *method)
{
  UIRect_c *klass; // x8

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
  struct UIRect_AnchorPoint_o *v8; // x8
  UnityEngine_Object_o *rect; // x21
  struct UIRect_AnchorPoint_o *v10; // x8
  int v11; // w23
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v13; // x21
  struct UIRect_AnchorPoint_o *v14; // x8
  UnityEngine_Object_o *v15; // x21
  struct UIRect_AnchorPoint_o *v16; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v18; // x21
  struct UIRect_AnchorPoint_o *v19; // x8
  UnityEngine_Object_o *v20; // x21
  struct UIRect_AnchorPoint_o *v21; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v23; // x21
  struct UIRect_AnchorPoint_o *v24; // x8
  UnityEngine_Object_o *v25; // x21
  struct UIRect_AnchorPoint_o *v26; // x8

  if ( (byte_4CF2E8B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E8B = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, method);
  frameCount = (UIRect_o *)UnityEngine_Time__get_frameCount(0);
  if ( this->fields.mUpdateFrame != (_DWORD)frameCount )
  {
    v5 = (int)frameCount;
    if ( this->fields.updateAnchors != 1 && !this->fields.mUpdateAnchors )
      goto LABEL_62;
    leftAnchor = this->fields.leftAnchor;
    this->fields.mUpdateFrame = (int)frameCount;
    this->fields.mUpdateAnchors = 0;
    if ( leftAnchor )
    {
      target = (UnityEngine_Object_o *)leftAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
      if ( ((unsigned __int8)frameCount & 1) != 0 )
      {
        v8 = this->fields.leftAnchor;
        if ( !v8 )
          goto LABEL_63;
        rect = (UnityEngine_Object_o *)v8->fields.rect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(rect, 0, 0);
        if ( ((unsigned __int8)frameCount & 1) != 0 )
        {
          v10 = this->fields.leftAnchor;
          if ( !v10 )
            goto LABEL_63;
          frameCount = v10->fields.rect;
          if ( !frameCount )
            goto LABEL_63;
          if ( frameCount->fields.mUpdateFrame != v5 )
            UIRect__UpdateMe(frameCount, v4);
        }
        v11 = 1;
      }
      else
      {
        v11 = 0;
      }
      bottomAnchor = this->fields.bottomAnchor;
      if ( !bottomAnchor )
        goto LABEL_63;
      v13 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(v13, 0);
      if ( ((unsigned __int8)frameCount & 1) != 0 )
      {
        v14 = this->fields.bottomAnchor;
        if ( !v14 )
          goto LABEL_63;
        v15 = (UnityEngine_Object_o *)v14->fields.rect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
        if ( ((unsigned __int8)frameCount & 1) != 0 )
        {
          v16 = this->fields.bottomAnchor;
          if ( !v16 )
            goto LABEL_63;
          frameCount = v16->fields.rect;
          if ( !frameCount )
            goto LABEL_63;
          if ( frameCount->fields.mUpdateFrame != v5 )
            UIRect__UpdateMe(frameCount, v4);
        }
        v11 = 1;
      }
      rightAnchor = this->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_63;
      v18 = (UnityEngine_Object_o *)rightAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(v18, 0);
      if ( ((unsigned __int8)frameCount & 1) != 0 )
      {
        v19 = this->fields.rightAnchor;
        if ( !v19 )
          goto LABEL_63;
        v20 = (UnityEngine_Object_o *)v19->fields.rect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
        if ( ((unsigned __int8)frameCount & 1) != 0 )
        {
          v21 = this->fields.rightAnchor;
          if ( !v21 )
            goto LABEL_63;
          frameCount = v21->fields.rect;
          if ( !frameCount )
            goto LABEL_63;
          if ( frameCount->fields.mUpdateFrame != v5 )
            UIRect__UpdateMe(frameCount, v4);
        }
        v11 = 1;
      }
      topAnchor = this->fields.topAnchor;
      if ( topAnchor )
      {
        v23 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        frameCount = (UIRect_o *)UnityEngine_Object__op_Implicit(v23, 0);
        if ( ((unsigned __int8)frameCount & 1) == 0 )
        {
          if ( !v11 )
          {
LABEL_62:
            ((void (__fastcall *)(UIRect_o *, const MethodInfo *))this->klass->vtable._21_OnUpdate.methodPtr)(
              this,
              this->klass->vtable._21_OnUpdate.method);
            return;
          }
LABEL_61:
          ((void (__fastcall *)(UIRect_o *, const MethodInfo *))this->klass->vtable._17_unknown.methodPtr)(
            this,
            this->klass->vtable._17_unknown.method);
          goto LABEL_62;
        }
        v24 = this->fields.topAnchor;
        if ( v24 )
        {
          v25 = (UnityEngine_Object_o *)v24->fields.rect;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          frameCount = (UIRect_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
          if ( ((unsigned __int8)frameCount & 1) == 0 )
            goto LABEL_61;
          v26 = this->fields.topAnchor;
          if ( v26 )
          {
            frameCount = v26->fields.rect;
            if ( frameCount )
            {
              if ( frameCount->fields.mUpdateFrame != v5 )
                UIRect__UpdateMe(frameCount, v4);
              goto LABEL_61;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C7BD40(frameCount, v4);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF2E7D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E7D = 1;
  }
  mGo = (UnityEngine_Object_o *)this->fields.mGo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mGo, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.mGo = gameObject;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mGo, (int32_t)gameObject, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mGo;
}


UnityEngine_Transform_o *UIRect__get_cachedTransform(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF2E7E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E7E = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
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
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  float v15; // s9
  float v16; // s10
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float v20; // s0
  float v21; // s10
  float v22; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v24; // s14
  float v25; // s15
  float v26; // s8
  float v27; // s9
  float v28; // s11
  float v29; // s10
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s2
  float v34; // s5
  float v35; // s9
  float v36; // s0
  float v37; // s1
  float v38; // s2
  struct UnityEngine_Vector3_StaticFields *v39; // x8
  float v40; // s3
  float v41; // s9
  float v42; // s8
  struct UnityEngine_Mathf_StaticFields *v43; // x8
  float v44; // s2
  float v45; // [xsp+8h] [xbp-98h]
  float v46; // [xsp+Ch] [xbp-94h]
  float v47; // [xsp+10h] [xbp-90h]
  float v48; // [xsp+14h] [xbp-8Ch]
  float v49; // [xsp+18h] [xbp-88h]
  float v50; // [xsp+68h] [xbp-38h]
  float v51; // [xsp+6Ch] [xbp-34h]
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF2E85 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E85 = 1;
  }
  if ( !this->fields.mAnchorsCached )
    UIRect__ResetAnchors(this, method);
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    x = rotation.fields.x;
    y = rotation.fields.y;
    z = rotation.fields.z;
    w = rotation.fields.w;
    if ( !byte_4CEAD77 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CEAD77 = 1;
    }
    v57.fields.x = x;
    v57.fields.y = y;
    v57.fields.z = z;
    v57.fields.w = w;
    v52 = UnityEngine_Quaternion__op_Multiply_71808884(v57, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
    v15 = v52.fields.x;
    v16 = v52.fields.y;
    v17 = v52.fields.z;
    position = UnityEngine_Transform__get_position(v9, 0);
    v18 = position.fields.x;
    v19 = position.fields.y;
    v50 = position.fields.z;
    if ( !byte_4CE7E5C )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE7E5C = 1;
    }
    cachedTransform = (UnityEngine_Camera_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v20 = sqrtf((float)(v17 * v17) + (float)((float)(v15 * v15) + (float)(v16 * v16)));
    if ( v20 <= 0.00001 )
    {
      if ( !byte_4CE7E59 )
      {
        cachedTransform = (UnityEngine_Camera_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v21 = static_fields->zeroVector.fields.y;
      v51 = static_fields->zeroVector.fields.x;
      v22 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v51 = v15 / v20;
      v21 = v16 / v20;
      v22 = v17 / v20;
    }
    if ( !v10 )
      goto LABEL_45;
    v49 = v22;
    v54 = UnityEngine_Transform__get_position(v10, 0);
    v45 = v54.fields.y;
    v46 = v54.fields.x;
    v47 = v54.fields.z;
    v58 = UnityEngine_Transform__get_rotation(v10, 0);
    v24 = v58.fields.x;
    v25 = v58.fields.y;
    v26 = v58.fields.z;
    v27 = v58.fields.w;
    if ( !byte_4CE7E62 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E62 = 1;
    }
    v59.fields.y = v25;
    v59.fields.z = v26;
    v28 = v18 * v51;
    v59.fields.x = v24;
    v59.fields.w = v27;
    v48 = v21;
    v29 = v19 * v21;
    v55 = UnityEngine_Quaternion__op_Multiply_71808884(
            v59,
            UnityEngine_Vector3_TypeInfo->static_fields->forwardVector,
            0);
    v30 = v55.fields.x;
    v31 = v55.fields.y;
    v32 = v55.fields.z;
    if ( !byte_4CE7E5C )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE7E5C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v33 = sqrtf((float)(v32 * v32) + (float)((float)(v30 * v30) + (float)(v31 * v31)));
    if ( v33 <= 0.00001 )
    {
      v35 = v46;
      if ( !byte_4CE7E59 )
      {
        sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      v34 = v47;
      v39 = UnityEngine_Vector3_TypeInfo->static_fields;
      v36 = v39->zeroVector.fields.x;
      v37 = v39->zeroVector.fields.y;
      v38 = v39->zeroVector.fields.z;
    }
    else
    {
      v35 = v46;
      v34 = v47;
      v36 = v30 / v33;
      v37 = v31 / v33;
      v38 = v32 / v33;
    }
    v40 = v51 * v35;
    v41 = (float)(v49 * v38) + (float)((float)(v51 * v36) + (float)(v48 * v37));
    v42 = (float)((float)(v50 * v49) + (float)(v28 + v29))
        - (float)((float)(v49 * v34) + (float)(v40 + (float)(v48 * v45)));
    if ( !byte_4CE7E5D )
    {
      sub_1C7BAE8(&UnityEngine_Mathf_TypeInfo);
      byte_4CE7E5D = 1;
    }
    v43 = UnityEngine_Mathf_TypeInfo->static_fields;
    v44 = fmaxf(fabsf(v41), 0.0) * 0.000001;
    result = v42 / v41;
    if ( v44 <= (float)(v43->Epsilon * 8.0) )
      v44 = v43->Epsilon * 8.0;
    if ( result <= 0.0 || vabds_f32(0.0, v41) < v44 )
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
      sub_1C7BD40(cachedTransform, v5);
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
  if ( (byte_4CF2E84 & 1) == 0 )
  {
    this = (UIRect_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E84 = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_21;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return ((__int64 (__fastcall *)(UIRect_o *, const MethodInfo *))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
             v2,
             v2->klass->vtable._6_get_canBeAnchored.method);
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_21;
  v6 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v6, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return ((__int64 (__fastcall *)(UIRect_o *, const MethodInfo *))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
             v2,
             v2->klass->vtable._6_get_canBeAnchored.method);
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_21;
  v8 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v8, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return ((__int64 (__fastcall *)(UIRect_o *, _QWORD))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
             v2,
             v2->klass->vtable._6_get_canBeAnchored.method);
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
LABEL_21:
    sub_1C7BD40(this, method);
  v10 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v10, 0) )
    return ((__int64 (__fastcall *)(UIRect_o *, _QWORD))v2->klass->vtable._6_get_canBeAnchored.methodPtr)(
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
  if ( (byte_4CF2E80 & 1) == 0 )
  {
    this = (UIRect_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E80 = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_12;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
LABEL_12:
    sub_1C7BD40(this, method);
  v7 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( (byte_4CF2E81 & 1) == 0 )
  {
    this = (UIRect_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E81 = 1;
  }
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
    goto LABEL_12;
  target = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
LABEL_12:
    sub_1C7BD40(this, method);
  v7 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( (byte_4CF2E7F & 1) == 0 )
  {
    this = (UIRect_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E7F = 1;
  }
  leftAnchor = v2->fields.leftAnchor;
  if ( !leftAnchor )
    goto LABEL_20;
  target = (UnityEngine_Object_o *)leftAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(target, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  rightAnchor = v2->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)rightAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  topAnchor = v2->fields.topAnchor;
  if ( !topAnchor )
    goto LABEL_20;
  v8 = (UnityEngine_Object_o *)topAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIRect_o *)UnityEngine_Object__op_Implicit(v8, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  bottomAnchor = v2->fields.bottomAnchor;
  if ( !bottomAnchor )
LABEL_20:
    sub_1C7BD40(this, method);
  v10 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Implicit(v10, 0);
}


UIRect_o *UIRect__get_parent(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *parent; // x20
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF2E82 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIRect____78877072);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CF2E82 = 1;
  }
  if ( !this->fields.mParentFound )
  {
    this->fields.mParentFound = 1;
    cachedTransform = UIRect__get_cachedTransform(this, method);
    if ( !cachedTransform )
      sub_1C7BD40(0, v4);
    parent = UnityEngine_Transform__get_parent(cachedTransform, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v6 = NGUITools__FindInParents_object__52404068(
           parent,
           (const MethodInfo_31F9F64 *)Method_NGUITools_FindInParents_UIRect____78877072);
    this->fields.mParent = (struct UIRect_o *)v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mParent, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  return this->fields.mParent;
}


UIRoot_o *UIRect__get_root(UIRect_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *parent; // x23
  _BOOL8 v4; // x0
  UnityEngine_Transform_o *cachedTransform; // x21
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  while ( 1 )
  {
    if ( (byte_4CF2E83 & 1) == 0 )
    {
      sub_1C7BAE8(&Method_NGUITools_FindInParents_UIRoot____78877088);
      sub_1C7BAE8(&NGUITools_TypeInfo);
      sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
      byte_4CF2E83 = 1;
    }
    parent = (UnityEngine_Object_o *)UIRect__get_parent(this, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( !v4 )
      break;
    this = this->fields.mParent;
    if ( !this )
      sub_1C7BD40(v4, method);
  }
  if ( !this->fields.mRootSet )
  {
    this->fields.mRootSet = 1;
    cachedTransform = UIRect__get_cachedTransform(this, method);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v6 = NGUITools__FindInParents_object__52404068(
           cachedTransform,
           (const MethodInfo_31F9F64 *)Method_NGUITools_FindInParents_UIRoot____78877088);
    this->fields.mRoot = (struct UIRoot_o *)v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mRoot, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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


void UIRect_AnchorPoint___ctor_49936028(UIRect_AnchorPoint_o *this, float relative, const MethodInfo *method)
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
  UnityEngine_Object_o *rect; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v11; // x20

  if ( (byte_4CF2E95 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E95 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(target, 0, 0) )
    return 0;
  rect = (UnityEngine_Object_o *)this->fields.rect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rect, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.rect;
    if ( v8 )
      return (UnityEngine_Vector3_array *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Transform_o *, void *))v8->klass[1]._1.properties)(
                                            v8,
                                            relativeTo,
                                            v8->klass[1]._1.methods);
LABEL_20:
    sub_1C7BD40(v8, v7);
  }
  v8 = (UnityEngine_Component_o *)this->fields.target;
  if ( !v8 )
    goto LABEL_20;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v8,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return 0;
  v8 = (UnityEngine_Component_o *)this->fields.target;
  if ( !v8 )
    goto LABEL_20;
  v11 = UnityEngine_Component__GetComponent_object_(
          v8,
          (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Camera___);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  return NGUITools__GetSides_49885356((UnityEngine_Camera_o *)v11, relativeTo, 0);
}


void UIRect_AnchorPoint__Set(UIRect_AnchorPoint_o *this, float relative, float absolute, const MethodInfo *method)
{
  int32_t v6; // w8

  this->fields.relative = relative;
  if ( !byte_4CE7E58 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E58 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = vcvtms_s32_f32(absolute + 0.5);
  if ( floorf(absolute + 0.5) == INFINITY )
    v6 = 0x80000000;
  this->fields.absolute = v6;
}


void UIRect_AnchorPoint__SetHorizontal(
        UIRect_AnchorPoint_o *this,
        UnityEngine_Transform_o *parent,
        float localPos,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rect; // x21
  __int64 v8; // x1
  UnityEngine_Transform_o *target; // x0
  float relative; // s1
  float v11; // s9
  float v12; // s2
  float v13; // s1
  float v14; // s10
  float x; // s9
  float y; // s10
  float z; // s11
  float v18; // s0
  int32_t v19; // w8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF2E93 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E93 = 1;
  }
  rect = (UnityEngine_Object_o *)this->fields.rect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(rect, 0) )
  {
    target = (UnityEngine_Transform_o *)this->fields.rect;
    if ( target )
    {
      target = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, UnityEngine_Transform_o *, void *))target->klass[1]._1.fields)(
                                            target,
                                            parent,
                                            target->klass[1]._1.events);
      if ( target )
      {
        if ( LODWORD(target[1].klass) <= 2 )
          sub_1C7BD48(target);
        relative = this->fields.relative;
        v11 = *(float *)&target[1].monitor;
        v12 = fminf(relative, 1.0);
        if ( relative < 0.0 )
          v13 = 0.0;
        else
          v13 = v12;
        v14 = (float)(*(float *)&target[2].monitor - v11) * v13;
        if ( !byte_4CE7E58 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE7E58 = 1;
        }
        x = v11 + v14;
        goto LABEL_23;
      }
    }
LABEL_28:
    sub_1C7BD40(target, v8);
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_28;
  position = UnityEngine_Transform__get_position(target, 0);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( !parent )
      goto LABEL_28;
    v21.fields.x = x;
    v21.fields.y = y;
    v21.fields.z = z;
    LODWORD(x) = (unsigned int)UnityEngine_Transform__InverseTransformPoint(parent, v21, 0);
  }
  if ( !byte_4CE7E58 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E58 = 1;
  }
LABEL_23:
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = (float)(localPos - x) + 0.5;
  v19 = vcvtms_s32_f32(v18);
  if ( floorf(v18) == INFINITY )
    v19 = 0x80000000;
  this->fields.absolute = v19;
}


void UIRect_AnchorPoint__SetToNearest(
        UIRect_AnchorPoint_o *this,
        float abs0,
        float abs1,
        float abs2,
        const MethodInfo *method)
{
  UIRect_AnchorPoint__SetToNearest_49936504(this, 0.0, 0.5, 1.0, abs0, abs1, abs2, method);
}


void UIRect_AnchorPoint__SetToNearest_49936504(
        UIRect_AnchorPoint_o *this,
        float rel0,
        float rel1,
        float rel2,
        float abs0,
        float abs1,
        float abs2,
        const MethodInfo *method)
{
  float v8; // s16
  float v9; // s6
  float v10; // s7
  float v11; // s1

  v8 = fabsf(abs0);
  v9 = fabsf(abs1);
  v10 = fabsf(abs2);
  if ( v8 >= v9 || v8 >= v10 )
  {
    if ( v9 >= v8 || v9 >= v10 )
    {
      rel0 = rel2;
      v11 = abs2;
    }
    else
    {
      rel0 = rel1;
      v11 = abs1;
    }
  }
  else
  {
    v11 = abs0;
  }
  UIRect_AnchorPoint__Set(this, rel0, v11, method);
}


void UIRect_AnchorPoint__SetVertical(
        UIRect_AnchorPoint_o *this,
        UnityEngine_Transform_o *parent,
        float localPos,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rect; // x21
  __int64 v8; // x1
  UnityEngine_Transform_o *target; // x0
  float relative; // s1
  float v11; // s9
  float v12; // s2
  float v13; // s1
  float v14; // s10
  float y; // s9
  float x; // s10
  float z; // s11
  float v18; // s0
  int32_t v19; // w8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF2E94 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2E94 = 1;
  }
  rect = (UnityEngine_Object_o *)this->fields.rect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(rect, 0) )
  {
    target = (UnityEngine_Transform_o *)this->fields.rect;
    if ( target )
    {
      target = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, UnityEngine_Transform_o *, void *))target->klass[1]._1.fields)(
                                            target,
                                            parent,
                                            target->klass[1]._1.events);
      if ( target )
      {
        if ( LODWORD(target[1].klass) <= 3 )
          sub_1C7BD48(target);
        relative = this->fields.relative;
        v11 = *(float *)&target[3].klass;
        v12 = fminf(relative, 1.0);
        if ( relative < 0.0 )
          v13 = 0.0;
        else
          v13 = v12;
        v14 = (float)(*(float *)&target[2].klass - v11) * v13;
        if ( !byte_4CE7E58 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE7E58 = 1;
        }
        y = v11 + v14;
        goto LABEL_23;
      }
    }
LABEL_28:
    sub_1C7BD40(target, v8);
  }
  target = this->fields.target;
  if ( !target )
    goto LABEL_28;
  position = UnityEngine_Transform__get_position(target, 0);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  target = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)target & 1) != 0 )
  {
    if ( !parent )
      goto LABEL_28;
    v21.fields.x = x;
    v21.fields.y = y;
    v21.fields.z = z;
    v22 = UnityEngine_Transform__InverseTransformPoint(parent, v21, 0);
    y = v22.fields.y;
  }
  if ( !byte_4CE7E58 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E58 = 1;
  }
LABEL_23:
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = (float)(localPos - y) + 0.5;
  v19 = vcvtms_s32_f32(v18);
  if ( floorf(v18) == INFINITY )
    v19 = 0x80000000;
  this->fields.absolute = v19;
}


void UIRect_AnchorPoint__Set_49936320(
        UIRect_AnchorPoint_o *this,
        UnityEngine_Transform_o *target,
        float relative,
        float absolute,
        const MethodInfo *method)
{
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UIRect_AnchorPoint_Fields *p_fields; // x20
  int32_t v14; // w8

  this->fields.target = target;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)target, (int32_t)method, v5, v6, v7, v8, v9);
  p_fields->relative = relative;
  if ( !byte_4CE7E58 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E58 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = vcvtms_s32_f32(absolute + 0.5);
  if ( floorf(absolute + 0.5) == INFINITY )
    v14 = 0x80000000;
  this->fields.absolute = v14;
}