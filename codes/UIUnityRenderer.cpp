void UIUnityRenderer___ctor(UIUnityRenderer_o *this, const MethodInfo *method)
{
  this->fields.renderQueue = -1;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


bool UIUnityRenderer__CheckMaterial(
        UIUnityRenderer_o *this,
        UnityEngine_Material_array *mats,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  _BOOL8 v5; // x0
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4C5B32A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B32A = 1;
  }
  if ( mats )
  {
    max_length = mats->max_length;
    v5 = 0;
    if ( max_length && (int)max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C3E7C8(v5, mats);
        v7 = (UnityEngine_Object_o *)mats->m_Items[v6];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v5 = UnityEngine_Object__op_Inequality(v7, 0, 0);
        if ( v5 )
          break;
        LODWORD(max_length) = mats->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
  else
  {
    LOBYTE(v5) = 0;
  }
  return v5;
}


bool UIUnityRenderer__ExistSharedMaterial0(UIUnityRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *cachedRenderer; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Renderer_o *v5; // x0
  __int64 v6; // x1
  UIUnityRenderer_o *sharedMaterials; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C5B329 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B329 = 1;
  }
  cachedRenderer = (UnityEngine_Object_o *)UIUnityRenderer__get_cachedRenderer(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(cachedRenderer, 0, 0) )
    return 0;
  v5 = UIUnityRenderer__get_cachedRenderer(this, v4);
  if ( !v5 )
    sub_1C3E7C0(0, v6);
  sharedMaterials = (UIUnityRenderer_o *)UnityEngine_Renderer__get_sharedMaterials(v5, 0);
  return UIUnityRenderer__CheckMaterial(sharedMaterials, (UnityEngine_Material_array *)sharedMaterials, v8);
}


void UIUnityRenderer__OnDestroy(UIUnityRenderer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UIUnityRenderer_o *v4; // x19
  struct UnityEngine_Material_array *mMats; // x8
  unsigned __int64 v6; // x22
  struct UnityEngine_Material_array **p_mMats; // x20
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v9; // x21
  Il2CppClass **v10; // x0

  v4 = this;
  if ( (byte_4C5B32B & 1) == 0 )
  {
    this = (UIUnityRenderer_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B32B = 1;
  }
  mMats = v4->fields.mMats;
  if ( mMats )
  {
    v6 = 0;
    p_mMats = &v4->fields.mMats;
    while ( 1 )
    {
      max_length_low = LODWORD(mMats->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( !v4->fields.createMat )
        goto LABEL_19;
      if ( v6 >= max_length_low )
        goto LABEL_16;
      v9 = (UnityEngine_Object_o *)mMats->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71341752(v9, 0);
      mMats = *p_mMats;
      if ( *p_mMats )
      {
LABEL_19:
        if ( v6 >= LODWORD(mMats->max_length) )
LABEL_16:
          sub_1C3E7C8(this, method);
        v10 = &mMats->obj.klass + v6;
        v10[4] = 0;
        sub_1C3E508((CGThumbnailListItem_o *)(v10 + 4), 0, v2, v3);
        mMats = *p_mMats;
        ++v6;
        if ( *p_mMats )
          continue;
      }
      sub_1C3E7C0(this, method);
    }
    *p_mMats = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.mMats, 0, v2, v3);
  }
}


void UIUnityRenderer__OnFill(
        UIUnityRenderer_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UIUnityRenderer_o *v8; // x20
  long double v9; // q0
  long double v10; // q1
  long double v11; // q2
  long double v12; // q3
  UnityEngine_Color32_o v13; // x1
  long double v14; // q0
  long double v15; // q1
  long double v16; // q2
  long double v17; // q3
  UnityEngine_Color32_o v18; // x1
  long double v19; // q0
  long double v20; // q1
  long double v21; // q2
  long double v22; // q3
  UnityEngine_Color32_o v23; // x1
  long double v24; // q0
  long double v25; // q1
  long double v26; // q2
  long double v27; // q3
  UnityEngine_Color32_o v28; // x1
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4C5B32D & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_Vector3__Add__);
    sub_1C3E564(&Method_BetterList_Color32__Add__);
    this = (UIUnityRenderer_o *)sub_1C3E564(&Method_BetterList_Vector2__Add__);
    byte_4C5B32D = 1;
  }
  if ( !verts )
    goto LABEL_7;
  v33.fields.z = 0.0;
  v33.fields.x = 10000.0;
  v33.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v33, (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
  v34.fields.z = 0.0;
  v34.fields.x = 10000.0;
  v34.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v34, (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
  v35.fields.z = 0.0;
  v35.fields.x = 10000.0;
  v35.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v35, (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
  v36.fields.z = 0.0;
  v36.fields.x = 10000.0;
  v36.fields.y = 10000.0;
  BetterList_Vector3___Add(verts, v36, (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
  if ( !uvs )
    goto LABEL_7;
  v29.fields.x = 0.0;
  v29.fields.y = 0.0;
  BetterList_Vector2___Add(uvs, v29, (const MethodInfo_332D140 *)Method_BetterList_Vector2__Add__);
  v30.fields.x = 0.0;
  v30.fields.y = 1.0;
  BetterList_Vector2___Add(uvs, v30, (const MethodInfo_332D140 *)Method_BetterList_Vector2__Add__);
  v31.fields.x = 1.0;
  v31.fields.y = 1.0;
  BetterList_Vector2___Add(uvs, v31, (const MethodInfo_332D140 *)Method_BetterList_Vector2__Add__);
  v32.fields.x = 1.0;
  v32.fields.y = 0.0;
  BetterList_Vector2___Add(uvs, v32, (const MethodInfo_332D140 *)Method_BetterList_Vector2__Add__);
  *(float *)&v9 = v8->fields.mColor.fields.r;
  *(float *)&v10 = v8->fields.mColor.fields.g;
  *(float *)&v11 = v8->fields.mColor.fields.b;
  *(float *)&v12 = v8->fields.mColor.fields.a;
  this = (UIUnityRenderer_o *)sub_2531AB4(0, v9, v10, v11, v12);
  if ( !cols )
LABEL_7:
    sub_1C3E7C0(this, verts);
  v13 = (UnityEngine_Color32_o)(unsigned int)this;
  BetterList_Color32___Add(cols, v13, (const MethodInfo_332ABF4 *)Method_BetterList_Color32__Add__);
  *(float *)&v14 = v8->fields.mColor.fields.r;
  *(float *)&v15 = v8->fields.mColor.fields.g;
  *(float *)&v16 = v8->fields.mColor.fields.b;
  *(float *)&v17 = v8->fields.mColor.fields.a;
  v18 = (UnityEngine_Color32_o)(unsigned int)sub_2531AB4(0, v14, v15, v16, v17);
  BetterList_Color32___Add(cols, v18, (const MethodInfo_332ABF4 *)Method_BetterList_Color32__Add__);
  *(float *)&v19 = v8->fields.mColor.fields.r;
  *(float *)&v20 = v8->fields.mColor.fields.g;
  *(float *)&v21 = v8->fields.mColor.fields.b;
  *(float *)&v22 = v8->fields.mColor.fields.a;
  v23 = (UnityEngine_Color32_o)(unsigned int)sub_2531AB4(0, v19, v20, v21, v22);
  BetterList_Color32___Add(cols, v23, (const MethodInfo_332ABF4 *)Method_BetterList_Color32__Add__);
  *(float *)&v24 = v8->fields.mColor.fields.r;
  *(float *)&v25 = v8->fields.mColor.fields.g;
  *(float *)&v26 = v8->fields.mColor.fields.b;
  *(float *)&v27 = v8->fields.mColor.fields.a;
  v28 = (UnityEngine_Color32_o)(unsigned int)sub_2531AB4(0, v24, v25, v26, v27);
  BetterList_Color32___Add(cols, v28, (const MethodInfo_332ABF4 *)Method_BetterList_Color32__Add__);
}


void UIUnityRenderer__OnWillRenderObject(UIUnityRenderer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UIUnityRenderer_o *v3; // x19
  UnityEngine_Object_o *drawCall; // x20
  const MethodInfo *renderQueue; // x1
  UIDrawCall_o *cachedRenderer; // x0
  const MethodInfo *v7; // x1
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_Material_array *mMats; // x8
  unsigned __int64 v12; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v14; // x20

  v3 = this;
  if ( (byte_4C5B32C & 1) == 0 )
  {
    this = (UIUnityRenderer_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B32C = 1;
  }
  if ( v3->fields.allowSharedMaterial )
  {
    if ( UIUnityRenderer__ExistSharedMaterial0(v3, method) )
    {
      drawCall = (UnityEngine_Object_o *)v3->fields.drawCall;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(drawCall, 0, 0) )
      {
        cachedRenderer = v3->fields.drawCall;
        if ( cachedRenderer )
        {
          v3->fields.renderQueue = UIDrawCall__get_finalRenderQueue(cachedRenderer, 0);
          cachedRenderer = (UIDrawCall_o *)UIUnityRenderer__get_cachedRenderer(v3, v7);
          if ( cachedRenderer )
          {
            v8 = 0;
            do
            {
              cachedRenderer = (UIDrawCall_o *)UnityEngine_Renderer__get_sharedMaterials(
                                                 (UnityEngine_Renderer_o *)cachedRenderer,
                                                 0);
              if ( !cachedRenderer )
                break;
              if ( (__int64)v8 >= SLODWORD(cachedRenderer->fields.m_CancellationTokenSource) )
                return;
              cachedRenderer = (UIDrawCall_o *)UIUnityRenderer__get_cachedRenderer(v3, renderQueue);
              if ( !cachedRenderer )
                break;
              cachedRenderer = (UIDrawCall_o *)UnityEngine_Renderer__get_sharedMaterials(
                                                 (UnityEngine_Renderer_o *)cachedRenderer,
                                                 0);
              if ( !cachedRenderer )
                break;
              if ( v8 >= LODWORD(cachedRenderer->fields.m_CancellationTokenSource) )
                goto LABEL_41;
              v9 = (UnityEngine_Object_o *)*((_QWORD *)&cachedRenderer->fields.widgetCount + v8);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              cachedRenderer = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
              if ( ((unsigned __int8)cachedRenderer & 1) != 0 )
              {
                if ( !v9 )
                  break;
                UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v9, v3->fields.renderQueue, 0);
              }
              ++v8;
              cachedRenderer = (UIDrawCall_o *)UIUnityRenderer__get_cachedRenderer(v3, renderQueue);
            }
            while ( cachedRenderer );
          }
        }
LABEL_39:
        sub_1C3E7C0(cachedRenderer, renderQueue);
      }
    }
  }
  else if ( UIUnityRenderer__CheckMaterial(this, v3->fields.mMats, v2) )
  {
    v10 = (UnityEngine_Object_o *)v3->fields.drawCall;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      cachedRenderer = v3->fields.drawCall;
      if ( !cachedRenderer )
        goto LABEL_39;
      cachedRenderer = (UIDrawCall_o *)UIDrawCall__get_finalRenderQueue(cachedRenderer, 0);
      mMats = v3->fields.mMats;
      v3->fields.renderQueue = (int)cachedRenderer;
      if ( !mMats )
        goto LABEL_39;
      v12 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(mMats->max_length);
        if ( (__int64)v12 >= (int)max_length_low )
          break;
        if ( v12 >= max_length_low )
LABEL_41:
          sub_1C3E7C8(cachedRenderer, renderQueue);
        v14 = (UnityEngine_Object_o *)mMats->m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        cachedRenderer = (UIDrawCall_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)cachedRenderer & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_39;
          cachedRenderer = (UIDrawCall_o *)UnityEngine_Material__get_renderQueue((UnityEngine_Material_o *)v14, 0);
          renderQueue = (const MethodInfo *)(unsigned int)v3->fields.renderQueue;
          if ( (_DWORD)cachedRenderer != (_DWORD)renderQueue )
            UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v14, (int32_t)renderQueue, 0);
        }
        mMats = v3->fields.mMats;
        ++v12;
        if ( !mMats )
          goto LABEL_39;
      }
    }
  }
}


UnityEngine_Renderer_o *UIUnityRenderer__get_cachedRenderer(UIUnityRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C5B326 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B326 = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    this->fields.mRenderer = (struct UnityEngine_Renderer_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mRenderer, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mRenderer;
}


UnityEngine_Material_o *UIUnityRenderer__get_material(UIUnityRenderer_o *this, const MethodInfo *method)
{
  _BOOL8 exist; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Renderer_o *cachedRenderer; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Material_array **p_mMats; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  UIUnityRenderer_o *sharedMaterials; // x0
  const MethodInfo *v13; // x3
  struct UnityEngine_Material_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  unsigned __int64 v18; // x23
  UnityEngine_Material_o *v19; // x22
  const MethodInfo *v20; // x1
  UnityEngine_Material_array *v21; // x27
  UnityEngine_Material_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppClass **v25; // x0
  UnityEngine_Material_array *v26; // x8
  Il2CppClass **v27; // x8
  UnityEngine_Object_o *v28; // x21
  System_String_o *name; // x0
  System_String_o *v30; // x0
  __int64 v31; // x0

  if ( (byte_4C5B327 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&UnityEngine_Material___TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_131/*" (Copy)"*/);
    byte_4C5B327 = 1;
  }
  exist = UIUnityRenderer__ExistSharedMaterial0(this, method);
  if ( !exist )
    return 0;
  if ( this->fields.allowSharedMaterial )
  {
    cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v4);
    if ( !cachedRenderer )
      goto LABEL_42;
    cachedRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterials(cachedRenderer, 0);
    if ( !cachedRenderer )
      goto LABEL_42;
    goto LABEL_19;
  }
  p_mMats = &this->fields.mMats;
  cachedRenderer = (UnityEngine_Renderer_o *)UIUnityRenderer__CheckMaterial(
                                               (UIUnityRenderer_o *)exist,
                                               this->fields.mMats,
                                               v5);
  if ( ((unsigned __int8)cachedRenderer & 1) == 0 )
  {
    this->fields.createMat = 1;
    cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v10);
    if ( cachedRenderer )
    {
      cachedRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterials(cachedRenderer, 0);
      if ( cachedRenderer )
      {
        v14 = (struct UnityEngine_Material_array *)sub_1C3E60C(
                                                     UnityEngine_Material___TypeInfo,
                                                     LODWORD(cachedRenderer[1].klass));
        this->fields.mMats = v14;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mMats, (int32_t)v14, v15, v16);
        cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v17);
        if ( cachedRenderer )
        {
          v18 = 0;
          while ( 1 )
          {
            cachedRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterials(cachedRenderer, 0);
            if ( !cachedRenderer )
              break;
            if ( (__int64)v18 >= SLODWORD(cachedRenderer[1].klass) )
              goto LABEL_10;
            cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v7);
            if ( !cachedRenderer )
              break;
            cachedRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterials(cachedRenderer, 0);
            if ( !cachedRenderer )
              break;
            if ( v18 >= LODWORD(cachedRenderer[1].klass) )
              goto LABEL_43;
            v19 = (UnityEngine_Material_o *)*((_QWORD *)&cachedRenderer[1].monitor + v18);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
            {
              v21 = *p_mMats;
              v22 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
              UnityEngine_Material___ctor_71204792(v22, v19, 0);
              if ( !v21 )
                goto LABEL_42;
              if ( v22 )
              {
                cachedRenderer = (UnityEngine_Renderer_o *)sub_1C3E6A0(v22, v21->obj.klass->_1.element_class);
                if ( !cachedRenderer )
                {
                  v31 = sub_1C3E7E4(0);
                  sub_1C3E68C(v31, 0);
                }
              }
              if ( v18 >= LODWORD(v21->max_length) )
                goto LABEL_43;
              v25 = &v21->obj.klass + v18;
              v25[4] = (Il2CppClass *)v22;
              sub_1C3E508((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v22, v23, v24);
              v26 = *p_mMats;
              if ( !*p_mMats )
                goto LABEL_42;
              if ( v18 >= LODWORD(v26->max_length) )
                goto LABEL_43;
              v27 = &v26->obj.klass + v18;
              v28 = (UnityEngine_Object_o *)v27[4];
              if ( !v28 )
                goto LABEL_42;
              name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v27[4], 0);
              v30 = System_String__Concat_63636468(name, (System_String_o *)StringLiteral_131/*" (Copy)"*/, 0);
              UnityEngine_Object__set_name(v28, v30, 0);
            }
            ++v18;
            cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v20);
            if ( !cachedRenderer )
              goto LABEL_42;
          }
        }
      }
    }
    goto LABEL_42;
  }
LABEL_10:
  if ( UIUnityRenderer__CheckMaterial((UIUnityRenderer_o *)cachedRenderer, *p_mMats, v11) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    if ( UnityEngine_Application__get_isPlaying(0) )
    {
      cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v7);
      if ( !cachedRenderer )
        goto LABEL_42;
      sharedMaterials = (UIUnityRenderer_o *)UnityEngine_Renderer__get_sharedMaterials(cachedRenderer, 0);
      if ( !UIUnityRenderer__isEqualMaterials(
              sharedMaterials,
              (UnityEngine_Material_array *)sharedMaterials,
              *p_mMats,
              v13) )
      {
        cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v7);
        if ( !cachedRenderer )
          goto LABEL_42;
        UnityEngine_Renderer__set_sharedMaterials(cachedRenderer, *p_mMats, 0);
      }
    }
  }
  cachedRenderer = (UnityEngine_Renderer_o *)*p_mMats;
  if ( !*p_mMats )
LABEL_42:
    sub_1C3E7C0(cachedRenderer, v7);
LABEL_19:
  if ( !LODWORD(cachedRenderer[1].klass) )
LABEL_43:
    sub_1C3E7C8(cachedRenderer, v7);
  return (UnityEngine_Material_o *)cachedRenderer[1].monitor;
}


UnityEngine_Shader_o *UIUnityRenderer__get_shader(UIUnityRenderer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Renderer_o *cachedRenderer; // x0
  __int64 v6; // x1
  struct UnityEngine_Material_array *mMats; // x8

  if ( this->fields.allowSharedMaterial )
  {
    if ( UIUnityRenderer__ExistSharedMaterial0(this, method) )
    {
      cachedRenderer = UIUnityRenderer__get_cachedRenderer(this, v4);
      if ( !cachedRenderer
        || (cachedRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_sharedMaterials(cachedRenderer, 0)) == 0 )
      {
LABEL_14:
        sub_1C3E7C0(cachedRenderer, v6);
      }
      if ( LODWORD(cachedRenderer[1].klass) )
      {
        cachedRenderer = (UnityEngine_Renderer_o *)cachedRenderer[1].monitor;
        if ( !cachedRenderer )
          goto LABEL_14;
        return UnityEngine_Material__get_shader((UnityEngine_Material_o *)cachedRenderer, 0);
      }
      goto LABEL_15;
    }
  }
  else
  {
    cachedRenderer = (UnityEngine_Renderer_o *)UIUnityRenderer__CheckMaterial(this, this->fields.mMats, v2);
    if ( ((unsigned __int8)cachedRenderer & 1) != 0 )
    {
      mMats = this->fields.mMats;
      if ( !mMats )
        goto LABEL_14;
      if ( LODWORD(mMats->max_length) )
      {
        cachedRenderer = (UnityEngine_Renderer_o *)mMats->m_Items[0];
        if ( !cachedRenderer )
          goto LABEL_14;
        return UnityEngine_Material__get_shader((UnityEngine_Material_o *)cachedRenderer, 0);
      }
LABEL_15:
      sub_1C3E7C8(cachedRenderer, v6);
    }
  }
  return 0;
}


bool UIUnityRenderer__isEqualMaterials(
        UIUnityRenderer_o *this,
        UnityEngine_Material_array *a,
        UnityEngine_Material_array *b,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *v9; // x22
  char v10; // w8

  if ( (byte_4C5B328 & 1) == 0 )
  {
    this = (UIUnityRenderer_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B328 = 1;
  }
  if ( !a || !b )
    sub_1C3E7C0(this, a);
  max_length = a->max_length;
  if ( (_DWORD)max_length == LODWORD(b->max_length) )
  {
    if ( (int)max_length < 1 )
    {
      v10 = 1;
    }
    else
    {
      v7 = 0;
      do
      {
        if ( v7 >= (unsigned int)max_length || v7 >= LODWORD(b->max_length) )
          sub_1C3E7C8(this, a);
        v8 = (UnityEngine_Object_o *)a->m_Items[v7];
        v9 = (UnityEngine_Object_o *)b->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (UIUnityRenderer_o *)UnityEngine_Object__op_Inequality(v8, v9, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        LODWORD(max_length) = a->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)max_length );
      v10 = (unsigned __int8)this ^ 1;
    }
  }
  else
  {
    v10 = 0;
  }
  return v10 & 1;
}


void __noreturn UIUnityRenderer__set_material(
        UIUnityRenderer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  System_Type_o *Type; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x0
  System_NotImplementedException_o *v8; // x20
  __int64 v9; // x0

  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v4 = 0;
  if ( Type )
    v4 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                              Type,
                              Type->klass->vtable._3_ToString.method);
  v5 = (System_String_o *)sub_1C3E578(&StringLiteral_249/*" has no material setter"*/);
  v6 = System_String__Concat_63636468(v4, v5, 0);
  v7 = sub_1C3E578(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C3E7B0(v7);
  System_NotImplementedException___ctor_65165788(v8, v6, 0);
  v9 = sub_1C3E578(&Method_UIUnityRenderer_set_material__);
  sub_1C3E68C(v8, v9);
}


void __noreturn UIUnityRenderer__set_shader(
        UIUnityRenderer_o *this,
        UnityEngine_Shader_o *value,
        const MethodInfo *method)
{
  System_Type_o *Type; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  __int64 v7; // x0
  System_NotImplementedException_o *v8; // x20
  __int64 v9; // x0

  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v4 = 0;
  if ( Type )
    v4 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                              Type,
                              Type->klass->vtable._3_ToString.method);
  v5 = (System_String_o *)sub_1C3E578(&StringLiteral_250/*" has no shader setter"*/);
  v6 = System_String__Concat_63636468(v4, v5, 0);
  v7 = sub_1C3E578(&System_NotImplementedException_TypeInfo);
  v8 = (System_NotImplementedException_o *)sub_1C3E7B0(v7);
  System_NotImplementedException___ctor_65165788(v8, v6, 0);
  v9 = sub_1C3E578(&Method_UIUnityRenderer_set_shader__);
  sub_1C3E68C(v8, v9);
}