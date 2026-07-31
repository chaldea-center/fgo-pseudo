void PhotoGraphicTouchComponent___ctor(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_RaycastHit_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5933B07 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_PhotoGraphicTouchComponent__TypeInfo);
    sub_21FFC50(&UnityEngine_RaycastHit___TypeInfo);
    byte_5933B07 = 1;
  }
  v3 = (struct UnityEngine_RaycastHit_array *)sub_21FFD10(UnityEngine_RaycastHit___TypeInfo, 10);
  this->fields.raycastHitResult = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.raycastHitResult, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_PhotoGraphicTouchComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627580(
    v10,
    10,
    (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent___ctor__);
  this->fields.hits = (struct System_Collections_Generic_List_PhotoGraphicTouchComponent__o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hits, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.fallbackRight = 1.0;
  this->fields.fallbackTop = 1.0;
  this->fields.masterFigureFallbackRight = 1.0;
  this->fields.masterFigureFallbackTop = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoGraphicTouchComponent__ExecuteOnDrag(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  __int64 v5; // x1
  PhotoStandFigureDragProcess_o *v6; // x0

  if ( (byte_5933B02 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B02 = 1;
  }
  DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(DragProcess_k__BackingField, 0, 0) )
  {
    v6 = this->fields._DragProcess_k__BackingField;
    if ( !v6 )
      sub_21FFECC(0, v5);
    PhotoStandFigureDragProcess__OnDragUpdate(v6, 0);
  }
}


void PhotoGraphicTouchComponent__ExecuteOnPress(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  __int64 v5; // x1
  PhotoStandFigureDragProcess_o *v6; // x0

  if ( (byte_5933B01 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B01 = 1;
  }
  DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(DragProcess_k__BackingField, 0, 0) )
  {
    v6 = this->fields._DragProcess_k__BackingField;
    if ( !v6 )
      sub_21FFECC(0, v5);
    PhotoStandFigureDragProcess__OnPress(v6, 0);
  }
}


void PhotoGraphicTouchComponent__ExecuteOnRelease(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  __int64 v5; // x1
  PhotoStandFigureDragProcess_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5933B03 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PhotoGraphicTouchComponent_TypeInfo);
    byte_5933B03 = 1;
  }
  DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(DragProcess_k__BackingField, 0, 0) )
  {
    v6 = this->fields._DragProcess_k__BackingField;
    if ( !v6 )
      sub_21FFECC(0, v5);
    PhotoStandFigureDragProcess__OnRelease(v6, 0);
    PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields,
      0,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
}


float PhotoGraphicTouchComponent__FallbackBottom(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 112;
  if ( !this->fields.isMasterFigure )
    v2 = 96;
  return *(float *)((char *)&this->klass + v2);
}


float PhotoGraphicTouchComponent__FallbackLeft(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 104;
  if ( !this->fields.isMasterFigure )
    v2 = 88;
  return *(float *)((char *)&this->klass + v2);
}


float PhotoGraphicTouchComponent__FallbackRight(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 108;
  if ( !this->fields.isMasterFigure )
    v2 = 92;
  return *(float *)((char *)&this->klass + v2);
}


float PhotoGraphicTouchComponent__FallbackTop(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 116;
  if ( !this->fields.isMasterFigure )
    v2 = 100;
  return *(float *)((char *)&this->klass + v2);
}


PhotoStandFigureComponent_o *PhotoGraphicTouchComponent__GetPhotoStandFigureComponent(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.photoStandFigureComponent;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState__o PhotoGraphicTouchComponent__GetPixelPosition(
        PhotoGraphicTouchComponent_o *this,
        UITexture_o *uiTexture,
        int32_t texWidth,
        int32_t texHeight,
        PhotoGraphicTouchComponent_o *targetTouchComponent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float *m_CachedPtr; // x8
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float x; // s9
  float y; // s8
  UnityEngine_Vector2_o v17; // x2
  const MethodInfo_3CCE438 *v18; // x5
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float v20; // s10
  float m_YMin; // s11
  float m_Height; // s12
  int32_t mHeight; // w23
  float v24; // s13
  float v25; // s13
  _BOOL4 v26; // w8
  unsigned int v27; // w10
  float v28; // s0
  float v29; // s8
  int32_t v30; // w20
  float v31; // s9
  float v32; // s9
  unsigned int v33; // w9
  int32_t v34; // w2
  __int64 v35; // x8
  float v36; // s1
  float v37; // s0
  __int64 v38; // x8
  __int64 v40; // x9
  float v41; // s1
  float v42; // s0
  __int64 v43; // x9
  int32_t v45; // w3
  __int64 v46; // x0
  int32_t v47; // w1
  __int64 v48; // [xsp+0h] [xbp-80h] BYREF
  int32_t v49; // [xsp+8h] [xbp-78h]
  System_ValueTuple_int__int__Int32Enum__o v50; // 0:x0.12
  System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState__o result; // 0:x0.12
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933B06 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    sub_21FFC50(&Method_System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState___ctor__);
    byte_5933B06 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, uiTexture, *(_QWORD *)&texWidth);
    gameObject = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  }
  if ( !uiTexture )
    goto LABEL_43;
  m_CachedPtr = (float *)gameObject[7].fields.m_CachedPtr;
  v12 = m_CachedPtr[17];
  v13 = m_CachedPtr[18];
  v14 = m_CachedPtr[19];
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uiTexture, 0);
  if ( !gameObject )
    goto LABEL_43;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_43;
  v52.fields.x = v12;
  v52.fields.y = v13;
  v52.fields.z = v14;
  v53 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)gameObject, v52, 0);
  x = v53.fields.x;
  y = v53.fields.y;
  PivotOffset = NGUIMath__GetPivotOffset(uiTexture->fields.mPivot, 0);
  v20 = (float)texWidth;
  m_YMin = uiTexture->fields.mRect.fields.m_YMin;
  m_Height = uiTexture->fields.mRect.fields.m_Height;
  mHeight = uiTexture->fields.mHeight;
  v24 = uiTexture->fields.mRect.fields.m_XMin
      + (float)((float)(PivotOffset.fields.x + (float)(x / (float)uiTexture->fields.mWidth))
              * uiTexture->fields.mRect.fields.m_Width);
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  v25 = v24 * v20;
  if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v26 = 0;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(System_Math_TypeInfo, uiTexture, v17);
    v26 = byte_593193F == 0;
  }
  v27 = vcvtms_s32_f32(v25);
  v28 = y / (float)mHeight;
  v29 = (float)texHeight;
  if ( floorf(v25) == INFINITY )
    v30 = 0x80000000;
  else
    v30 = v27;
  v31 = m_YMin + (float)((float)(PivotOffset.fields.y + v28) * m_Height);
  if ( v26 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)System_Math_TypeInfo;
  v32 = v31 * v29;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(System_Math_TypeInfo, uiTexture, v17);
  v33 = vcvtms_s32_f32(v32);
  v34 = floorf(v32) == INFINITY ? 0x80000000 : v33;
  if ( !targetTouchComponent )
LABEL_43:
    sub_21FFECC(gameObject, uiTexture);
  v35 = 104;
  v36 = (float)v30;
  if ( !targetTouchComponent->fields.isMasterFigure )
    v35 = 88;
  v37 = *(float *)((char *)&targetTouchComponent->klass + v35);
  v38 = 108;
  if ( !targetTouchComponent->fields.isMasterFigure )
    v38 = 92;
  if ( (float)(v37 * v20) > v36 || (float)(*(float *)((char *)&targetTouchComponent->klass + v38) * v20) <= v36 )
    goto LABEL_41;
  v40 = 112;
  if ( !targetTouchComponent->fields.isMasterFigure )
    v40 = 96;
  v41 = (float)v34;
  v42 = *(float *)((char *)&targetTouchComponent->klass + v40);
  v43 = 116;
  if ( !targetTouchComponent->fields.isMasterFigure )
    v43 = 100;
  if ( (float)(v42 * v29) > v41 || (float)(*(float *)((char *)&targetTouchComponent->klass + v43) * v29) <= v41 )
LABEL_41:
    v45 = 0;
  else
    v45 = 1;
  *(_QWORD *)&v50.fields.Item1 = &v48;
  v50.fields.Item3 = v30;
  v49 = 0;
  v48 = 0;
  System_ValueTuple_int__int__Int32Enum____ctor(
    v50,
    v34,
    v45,
    Method_System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState___ctor__,
    v18);
  v46 = v48;
  v47 = v49;
  *(_QWORD *)&result.fields.Item1 = v46;
  result.fields.Item3 = v47;
  return result;
}


PhotoGraphicTouchComponent_o *PhotoGraphicTouchComponent__GetPointedPhotoGraphicTouchComponent(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  PhotoGraphicTouchComponent_o *v2; // x19
  struct System_Collections_Generic_List_PhotoGraphicTouchComponent__o *hits; // x8
  __int64 size; // x2
  int v5; // w9
  __int64 v6; // x8
  UnityEngine_Camera_o *v7; // x21
  UnityEngine_RaycastHit_array *raycastHitResult; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t cullingMask; // w21
  unsigned __int64 v12; // x21
  __int64 v13; // x25
  __int64 v14; // x26
  struct UnityEngine_RaycastHit_array *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *collider; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  PhotoGraphicTouchComponent_o *v32; // x20
  System_Collections_Generic_List_object__o *v33; // x20
  struct System_Collections_Generic_List_PhotoGraphicTouchComponent__o *v34; // x8
  int32_t v35; // w21
  int32_t v36; // w2
  Il2CppObject *Item; // x0
  const MethodInfo *v38; // x2
  char IsTouched; // w0
  __int64 v40; // x2
  char v41; // w22
  int v42; // w9
  int v44; // w9
  UnityEngine_Ray_o v45; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Ray_o v46; // [xsp+18h] [xbp-68h] BYREF
  Il2CppObject *component; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5933B04 & 1) == 0 )
  {
    sub_21FFC50(&PhotoGraphicTouchComponent_DepthSort_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_PhotoGraphicTouchComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Physics_TypeInfo);
    this = (PhotoGraphicTouchComponent_o *)sub_21FFC50(&UICamera_TypeInfo);
    byte_5933B04 = 1;
  }
  hits = v2->fields.hits;
  component = 0;
  if ( !hits )
    goto LABEL_43;
  size = (unsigned int)hits->fields._size;
  v5 = hits->fields._version + 1;
  hits->fields._size = 0;
  hits->fields._version = v5;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)hits->fields._items, 0, size, 0);
  this = (PhotoGraphicTouchComponent_o *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method, size);
    this = (PhotoGraphicTouchComponent_o *)UICamera_TypeInfo;
  }
  v6 = *(_QWORD *)&this[1].fields.isMasterFigure;
  v7 = *(UnityEngine_Camera_o **)(v6 + 136);
  if ( !v7 )
    goto LABEL_43;
  v48.fields.z = 0.0;
  v48.fields.x = *(float *)(v6 + 60);
  v48.fields.y = *(float *)(v6 + 64);
  UnityEngine_Camera__ScreenPointToRay_82985504(&v46, *(UnityEngine_Camera_o **)(v6 + 136), v48, 0);
  raycastHitResult = v2->fields.raycastHitResult;
  cullingMask = UnityEngine_Camera__get_cullingMask(v7, 0);
  if ( !*(&UnityEngine_Physics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v9, v10);
  v45 = v46;
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Physics__RaycastNonAlloc_83677328(
                                           &v45,
                                           raycastHitResult,
                                           100.0,
                                           cullingMask,
                                           0);
  if ( (int)this >= 1 )
  {
    v12 = 0;
    v13 = (unsigned int)this;
    v14 = 32;
    while ( 1 )
    {
      v15 = v2->fields.raycastHitResult;
      if ( !v15 )
        break;
      if ( v12 >= LODWORD(v15->max_length) )
        sub_21FFED4(this);
      collider = (UnityEngine_Object_o *)UnityEngine_RaycastHit__get_collider(
                                           (UnityEngine_RaycastHit_o *)((char *)v15 + v14),
                                           0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(collider, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !collider )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)collider,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
        this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(gameObject, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !gameObject )
            break;
          this = (PhotoGraphicTouchComponent_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   &component,
                                                   (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_PhotoGraphicTouchComponent___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (PhotoGraphicTouchComponent_o *)v2->fields.hits;
            if ( !this )
              break;
            m_CachedPtr = this->fields.m_CachedPtr;
            method = (const MethodInfo *)component;
            v29 = Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v31 + 32) = method;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)method, v22, v23, v24, v25, v26, v27);
            }
          }
        }
      }
      ++v12;
      v14 += 44;
      if ( v13 == v12 )
        goto LABEL_30;
    }
LABEL_43:
    sub_21FFECC(this, method);
  }
LABEL_30:
  v32 = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->fields.hits, 0) )
    return v32;
  v33 = (System_Collections_Generic_List_object__o *)v2->fields.hits;
  LOBYTE(v46.fields.m_Origin.fields.x) = v2[1].klass;
  this = (PhotoGraphicTouchComponent_o *)j_il2cpp_value_box_0(PhotoGraphicTouchComponent_DepthSort_TypeInfo, &v46);
  if ( !v33 )
    goto LABEL_43;
  System_Collections_Generic_List_object___Sort_71636208(
    v33,
    (System_Collections_Generic_IComparer_T__o *)this,
    (const MethodInfo_44514F0 *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Sort__);
  v34 = v2->fields.hits;
  if ( !v34 )
    goto LABEL_43;
  v32 = 0;
  v35 = 0;
  while ( 1 )
  {
    v36 = v34->fields._size;
    if ( v35 >= v36 )
    {
      v42 = v34->fields._version + 1;
      v34->fields._size = 0;
      v34->fields._version = v42;
      if ( v36 >= 1 )
        goto LABEL_45;
      return v32;
    }
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v34,
             v35,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
    IsTouched = PhotoGraphicTouchComponent__IsTouched(v2, (PhotoGraphicTouchComponent_o *)Item, v38);
    if ( (IsTouched & 2) != 0 )
      break;
    v41 = IsTouched;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v40);
    this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v32, 0, 0);
    if ( (v41 & 1) != 0 && ((unsigned __int8)this & 1) != 0 )
    {
      this = (PhotoGraphicTouchComponent_o *)v2->fields.hits;
      if ( !this )
        goto LABEL_43;
      this = (PhotoGraphicTouchComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v35,
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
      v32 = this;
    }
    v34 = v2->fields.hits;
    ++v35;
    if ( !v34 )
      goto LABEL_43;
  }
  this = (PhotoGraphicTouchComponent_o *)v2->fields.hits;
  if ( !this )
    goto LABEL_43;
  this = (PhotoGraphicTouchComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v35,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
  v34 = v2->fields.hits;
  if ( !v34 )
    goto LABEL_43;
  v36 = v34->fields._size;
  v32 = this;
  v44 = v34->fields._version + 1;
  v34->fields._size = 0;
  v34->fields._version = v44;
  if ( v36 <= 0 )
    return v32;
LABEL_45:
  System_Array__Clear((System_Array_o *)v34->fields._items, 0, v36, 0);
  return v32;
}


UIPanel_o *PhotoGraphicTouchComponent__GetSelfPanel(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  return this->fields.selfPanel;
}


UIMasterFigureTextureOld_o *PhotoGraphicTouchComponent__GetUIMasterFigureTextureOld(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.masterFigureTextureOld;
}


bool PhotoGraphicTouchComponent__HasActiveTouch(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w19
  UnityEngine_Touch_o src; // [xsp+Ch] [xbp-A4h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-60h] BYREF

  memset(&dest, 0, sizeof(dest));
  if ( UnityEngine_Input__get_touchCount(0) < 1 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    UnityEngine_Input__GetTouch(&src, v2, 0);
    memcpy(&dest, &src, sizeof(dest));
    if ( UnityEngine_Touch__get_phase(&dest, 0) != 3 && UnityEngine_Touch__get_phase(&dest, 0) != 4 )
      break;
    if ( ++v2 >= UnityEngine_Input__get_touchCount(0) )
      return 0;
  }
  return 1;
}


bool PhotoGraphicTouchComponent__IsTextureTouched(
        PhotoGraphicTouchComponent_o *this,
        int32_t x,
        int32_t y,
        int32_t texWidth,
        int32_t texHeight,
        const MethodInfo *method)
{
  return x < texWidth && y < texHeight && (y | x) >= 0;
}


int32_t PhotoGraphicTouchComponent__IsTouched(
        PhotoGraphicTouchComponent_o *this,
        PhotoGraphicTouchComponent_o *photoGraphicTouchComponent,
        const MethodInfo *method)
{
  PhotoGraphicTouchComponent_o *v4; // x19
  int v5; // w8
  UnityEngine_Object_o *masterFigureTextureOld; // x21
  __int64 v7; // x2
  UnityEngine_Object_o *monitor; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x22
  UnityEngine_Texture_o *Texture; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *photoStandFigureComponent; // x21
  __int64 v17; // x2
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *SvtStandFigure; // x21
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v28; // x22
  int v29; // w23
  PhotoGraphicTouchComponent_o *v30; // x0
  int32_t v31; // w24
  const MethodInfo *v32; // x5
  __int64 v33; // x26
  int32_t Item3; // w20
  int32_t Item1; // w21
  UnityEngine_RenderTexture_o *Temporary_83129020; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  int v39; // w9
  __int64 v40; // x1
  UnityEngine_Texture2D_o *pixelTexture; // x0
  __int64 v42; // x1
  UnityEngine_Texture2D_o *v43; // x0
  bool v44; // cc
  int32_t v46; // w23
  PhotoGraphicTouchComponent_o *v47; // x0
  int32_t v48; // w24
  const MethodInfo *v49; // x5
  __int64 v50; // x25
  int32_t v51; // w21
  __int64 v52; // x1
  UnityEngine_Texture2D_o *v53; // x0
  __int64 v54; // x1
  UnityEngine_Texture2D_o *v55; // x0
  __int64 v56; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_RenderTexture_o **p_active; // [xsp+10h] [xbp-70h]
  UnityEngine_RenderTexture_o **v58; // [xsp+18h] [xbp-68h]
  UnityEngine_RenderTexture_o *v59; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_RenderTexture_o *active; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_RenderTexture_o *v61; // [xsp+38h] [xbp-48h] BYREF
  System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState__o PixelPosition; // 0:x0.12
  System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState__o v63; // 0:x0.12
  UnityEngine_Vector2_o v64; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v65; // 0:s2.4,4:s3.4
  UnityEngine_Rect_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Pixel; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_5933B05 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Graphics_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_RenderTexture_TypeInfo);
    sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    this = (PhotoGraphicTouchComponent_o *)sub_21FFC50(&StringLiteral_16884/*"_MaskTex"*/);
    byte_5933B05 = 1;
  }
  v61 = 0;
  v59 = 0;
  active = 0;
  if ( !photoGraphicTouchComponent )
    goto LABEL_73;
  v5 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( photoGraphicTouchComponent->fields.isMasterFigure )
  {
    masterFigureTextureOld = (UnityEngine_Object_o *)photoGraphicTouchComponent->fields.masterFigureTextureOld;
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, photoGraphicTouchComponent, method);
    this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(masterFigureTextureOld, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !masterFigureTextureOld )
        goto LABEL_73;
      monitor = (UnityEngine_Object_o *)masterFigureTextureOld[17].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, photoGraphicTouchComponent, v7);
      this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(monitor, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !monitor )
          goto LABEL_73;
        v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))monitor->klass[1].vtable._0_Equals.method)(
                                        monitor,
                                        monitor->klass[1].vtable._1_Finalize.methodPtr);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
        if ( !UnityEngine_Object__op_Equality(v11, 0, 0) )
        {
          this = (PhotoGraphicTouchComponent_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))monitor->klass[1].vtable._0_Equals.method)(
                                                   monitor,
                                                   monitor->klass[1].vtable._1_Finalize.methodPtr);
          if ( !this )
            goto LABEL_73;
          Texture = UnityEngine_Material__GetTexture(
                      (UnityEngine_Material_o *)this,
                      (System_String_o *)StringLiteral_16884/*"_MaskTex"*/,
                      0);
          if ( Texture )
          {
            if ( (UnityEngine_Texture2D_c *)Texture->klass == UnityEngine_Texture2D_TypeInfo )
              v15 = (UnityEngine_Object_o *)Texture;
            else
              v15 = 0;
          }
          else
          {
            v15 = 0;
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
          this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v15, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( v15 )
            {
              v29 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v15->klass[1]._1.image)(
                      v15,
                      v15->klass[1]._1.gc_desc);
              v30 = (PhotoGraphicTouchComponent_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v15->klass[1]._1.byval_arg.data)(
                                                      v15,
                                                      *(_QWORD *)&v15->klass[1]._1.byval_arg.bits);
              v31 = (int)v30;
              PixelPosition = PhotoGraphicTouchComponent__GetPixelPosition(
                                v30,
                                (UITexture_o *)monitor,
                                v29,
                                (int32_t)v30,
                                photoGraphicTouchComponent,
                                v32);
              v33 = HIDWORD(*(_QWORD *)&PixelPosition.fields.Item1);
              Item3 = PixelPosition.fields.Item3;
              if ( v31 <= PixelPosition.fields.Item2 )
                return Item3;
              Item1 = PixelPosition.fields.Item1;
              if ( v29 <= PixelPosition.fields.Item1 || (PixelPosition.fields.Item2 | PixelPosition.fields.Item1) < 0 )
                return Item3;
              Temporary_83129020 = UnityEngine_RenderTexture__GetTemporary_83129020(1, 1, 0, 7, 0);
              v61 = Temporary_83129020;
              active = UnityEngine_RenderTexture__get_active(0);
              UnityEngine_RenderTexture__set_active(Temporary_83129020, 0);
              v56 = 0;
              p_active = &active;
              v39 = *(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1);
              v58 = &v61;
              if ( !v39 )
                j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v37, v38);
              v64.fields.x = 1.0 / (float)v29;
              v64.fields.y = 1.0 / (float)v31;
              v65.fields.x = v64.fields.x * (float)Item1;
              v65.fields.y = v64.fields.y * (float)(int)v33;
              UnityEngine_Graphics__Blit_83030360((UnityEngine_Texture_o *)v15, Temporary_83129020, v64, v65, 0);
              pixelTexture = v4->fields.pixelTexture;
              if ( !pixelTexture )
                sub_21FFECC(0, v40);
              v66.fields.m_XMin = 0.0;
              v66.fields.m_YMin = 0.0;
              v66.fields.m_Width = 1.0;
              v66.fields.m_Height = 1.0;
              UnityEngine_Texture2D__ReadPixels_83107796(pixelTexture, v66, 0, 0, 0);
              v43 = v4->fields.pixelTexture;
              if ( !v43 )
                sub_21FFECC(0, v42);
              UnityEngine_Texture2D__Apply_83107520(v43, 0);
              sub_1FF0508(&v56);
              this = (PhotoGraphicTouchComponent_o *)v4->fields.pixelTexture;
              if ( this )
              {
                v44 = UnityEngine_Texture2D__GetPixel((UnityEngine_Texture2D_o *)this, 0, 0, 0).fields.r <= 0.0;
                goto LABEL_70;
              }
            }
LABEL_73:
            sub_21FFECC(this, photoGraphicTouchComponent);
          }
        }
      }
    }
    return 0;
  }
  photoStandFigureComponent = (UnityEngine_Object_o *)photoGraphicTouchComponent->fields.photoStandFigureComponent;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, photoGraphicTouchComponent, method);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(photoStandFigureComponent, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !photoStandFigureComponent )
    goto LABEL_73;
  v18 = (UnityEngine_Object_o *)photoStandFigureComponent[1].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, photoGraphicTouchComponent, v17);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v18, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v18 )
    goto LABEL_73;
  SvtStandFigure = (UnityEngine_Object_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)v18, 0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(SvtStandFigure, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !SvtStandFigure )
    goto LABEL_73;
  v23 = (UnityEngine_Object_o *)SvtStandFigure[1].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, photoGraphicTouchComponent, v22);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v23, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v23 )
    goto LABEL_73;
  v24 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))v23->klass[1].vtable._2_GetHashCode.method)(
          v23,
          v23->klass[1].vtable._3_ToString.methodPtr);
  if ( v24
    && (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)naturalAligment) )
  {
    if ( *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo )
      v28 = (UnityEngine_Object_o *)v24;
    else
      v28 = 0;
  }
  else
  {
    v28 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v28, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v28 )
    goto LABEL_73;
  v46 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v28->klass[1]._1.image)(v28, v28->klass[1]._1.gc_desc);
  v47 = (PhotoGraphicTouchComponent_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v28->klass[1]._1.byval_arg.data)(
                                          v28,
                                          *(_QWORD *)&v28->klass[1]._1.byval_arg.bits);
  v48 = (int)v47;
  v63 = PhotoGraphicTouchComponent__GetPixelPosition(
          v47,
          (UITexture_o *)v23,
          v46,
          (int32_t)v47,
          photoGraphicTouchComponent,
          v49);
  v50 = HIDWORD(*(_QWORD *)&v63.fields.Item1);
  Item3 = v63.fields.Item3;
  if ( v48 <= v63.fields.Item2 )
    return Item3;
  v51 = v63.fields.Item1;
  if ( v46 <= v63.fields.Item1 || (v63.fields.Item2 | v63.fields.Item1) < 0 )
    return Item3;
  v59 = UnityEngine_RenderTexture__get_active(0);
  v56 = 0;
  p_active = &v59;
  UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)v28, 0);
  v53 = v4->fields.pixelTexture;
  if ( !v53 )
    sub_21FFECC(0, v52);
  v67.fields.m_YMin = (float)(int)v50;
  v67.fields.m_XMin = (float)v51;
  v67.fields.m_Width = 1.0;
  v67.fields.m_Height = 1.0;
  UnityEngine_Texture2D__ReadPixels_83107796(v53, v67, 0, 0, 0);
  v55 = v4->fields.pixelTexture;
  if ( !v55 )
    sub_21FFECC(0, v54);
  UnityEngine_Texture2D__Apply_83107520(v55, 0);
  sub_1FF0544(&v56);
  this = (PhotoGraphicTouchComponent_o *)v4->fields.pixelTexture;
  if ( !this )
    goto LABEL_73;
  Pixel = UnityEngine_Texture2D__GetPixel((UnityEngine_Texture2D_o *)this, 0, 0, 0);
  v44 = Pixel.fields.a <= 0.0;
LABEL_70:
  if ( !v44 )
    return Item3 | 2;
  return Item3;
}


void PhotoGraphicTouchComponent__OnDestroy(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *pixelTexture; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *DragTarget; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5933AFC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PhotoGraphicTouchComponent_TypeInfo);
    byte_5933AFC = 1;
  }
  pixelTexture = (UnityEngine_Object_o *)this->fields.pixelTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(pixelTexture, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.pixelTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83246496(v7, 0);
  }
  DragTarget = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(DragTarget, (UnityEngine_Object_o *)this, 0) )
  {
    PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields,
      0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void PhotoGraphicTouchComponent__OnPress(PhotoGraphicTouchComponent_o *this, bool isPressed, const MethodInfo *method)
{
  UnityEngine_Object_o *DragTarget; // x20
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  PhotoGraphicTouchComponent_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct PhotoGraphicTouchComponent_o *PointedPhotoGraphicTouchComponent; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5933B00 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PhotoGraphicTouchComponent_TypeInfo);
    byte_5933B00 = 1;
  }
  if ( !isPressed )
    goto LABEL_7;
  DragTarget = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPressed, method);
  if ( !UnityEngine_Object__op_Inequality(DragTarget, 0, 0) )
  {
    PointedPhotoGraphicTouchComponent = PhotoGraphicTouchComponent__GetPointedPhotoGraphicTouchComponent(
                                          this,
                                          (const MethodInfo *)isPressed);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PointedPhotoGraphicTouchComponent, 0, 0) )
    {
      PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget = PointedPhotoGraphicTouchComponent;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields,
        (int32_t)PointedPhotoGraphicTouchComponent,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v13 = PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
      if ( !v13 )
        goto LABEL_22;
      PhotoGraphicTouchComponent__ExecuteOnPress(v13, v12);
    }
  }
  else
  {
LABEL_7:
    v6 = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPressed, method);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
    {
      DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      v10 = UnityEngine_Object__op_Inequality(DragProcess_k__BackingField, 0, 0);
      if ( v10 && !PhotoGraphicTouchComponent__HasActiveTouch((PhotoGraphicTouchComponent_o *)v10, v11) )
      {
        v13 = (PhotoGraphicTouchComponent_o *)this->fields._DragProcess_k__BackingField;
        if ( v13 )
        {
          PhotoStandFigureDragProcess__OnOutsideTouch((PhotoStandFigureDragProcess_o *)v13, 0);
          return;
        }
LABEL_22:
        sub_21FFECC(v13, v12);
      }
    }
  }
}


void PhotoGraphicTouchComponent__SetParentPhotoStandFigureComponent(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *ComponentInParent_object__58645868; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5933AFE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInParent_PhotoStandFigureComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933AFE = 1;
  }
  ComponentInParent_object__58645868 = UnityEngine_Component__GetComponentInParent_object__58645868(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_37EDD6C *)Method_UnityEngine_Component_GetComponentInParent_PhotoStandFigureComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__58645868, 0, 0) )
  {
    this->fields.photoStandFigureComponent = (struct PhotoStandFigureComponent_o *)ComponentInParent_object__58645868;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.photoStandFigureComponent,
      (int32_t)ComponentInParent_object__58645868,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


void PhotoGraphicTouchComponent__SetParentSelfPanel(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *ComponentInParent_object__58645868; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5933AFD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933AFD = 1;
  }
  ComponentInParent_object__58645868 = UnityEngine_Component__GetComponentInParent_object__58645868(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_37EDD6C *)Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__58645868, 0, 0) )
  {
    this->fields.selfPanel = (struct UIPanel_o *)ComponentInParent_object__58645868;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selfPanel,
      (int32_t)ComponentInParent_object__58645868,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


void PhotoGraphicTouchComponent__SetUIMasterFigureTextureOld(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *ComponentInParent_object__58645868; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UIMasterFigureTextureOld_o **p_masterFigureTextureOld; // x19

  if ( (byte_5933AFF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInParent_UIMasterFigureTextureOld___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933AFF = 1;
  }
  ComponentInParent_object__58645868 = UnityEngine_Component__GetComponentInParent_object__58645868(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_37EDD6C *)Method_UnityEngine_Component_GetComponentInParent_UIMasterFigureTextureOld___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__58645868, 0, 0) )
  {
    this->fields.masterFigureTextureOld = (struct UIMasterFigureTextureOld_o *)ComponentInParent_object__58645868;
    p_masterFigureTextureOld = &this->fields.masterFigureTextureOld;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_masterFigureTextureOld,
      (int32_t)ComponentInParent_object__58645868,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    *((_BYTE *)p_masterFigureTextureOld + 8) = 1;
  }
}


void PhotoGraphicTouchComponent__Start(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Texture2D_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_5933AFA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    byte_5933AFA = 1;
  }
  v3 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_83105640(v3, 1, 1, 5, 0, 0);
  this->fields.pixelTexture = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pixelTexture, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  PhotoGraphicTouchComponent__SetParentPhotoStandFigureComponent(this, v10);
  PhotoGraphicTouchComponent__SetParentSelfPanel(this, v11);
  PhotoGraphicTouchComponent__SetUIMasterFigureTextureOld(this, v12);
}


void PhotoGraphicTouchComponent__Update(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *DragTarget; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_5933AFB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PhotoGraphicTouchComponent_TypeInfo);
    byte_5933AFB = 1;
  }
  DragTarget = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(DragTarget, (UnityEngine_Object_o *)this, 0);
  if ( !v5 )
  {
    if ( PhotoGraphicTouchComponent__HasActiveTouch((PhotoGraphicTouchComponent_o *)v5, v6) )
      PhotoGraphicTouchComponent__ExecuteOnDrag(this, v7);
    else
      PhotoGraphicTouchComponent__ExecuteOnRelease(this, v7);
  }
}


PhotoStandFigureDragProcess_o *PhotoGraphicTouchComponent__get_DragProcess(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._DragProcess_k__BackingField;
}


void PhotoGraphicTouchComponent__set_DragProcess(
        PhotoGraphicTouchComponent_o *this,
        PhotoStandFigureDragProcess_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DragProcess_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DragProcess_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


__int64 __fastcall PhotoGraphicTouchComponent_DepthSort__Compare(__int64 a1, __int64 a2, __int64 a3)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x8
  int v13; // w9
  __int64 v14; // x8
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5933B08 & 1) == 0 )
  {
    a1 = sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B08 = 1;
  }
  v15 = 0;
  if ( !a2 )
    goto LABEL_24;
  v5 = *(UnityEngine_Object_o **)(a2 + 32);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, a2, a3);
  a1 = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( (a1 & 1) != 0 )
  {
    if ( !a3 )
      goto LABEL_24;
    v7 = *(UnityEngine_Object_o **)(a3 + 32);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, a2, v6);
    if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
      return 0;
  }
  v9 = *(UnityEngine_Object_o **)(a2 + 32);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, a2, v6);
  a1 = UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( (a1 & 1) != 0 )
    return 1;
  if ( !a3 )
    goto LABEL_24;
  v11 = *(UnityEngine_Object_o **)(a3 + 32);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, a2, v10);
  a1 = UnityEngine_Object__op_Equality(v11, 0, 0);
  if ( (a1 & 1) != 0 )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(a3 + 32);
  if ( !v12 || (v13 = *(_DWORD *)(v12 + 320), v14 = *(_QWORD *)(a2 + 32), v15 = v13, !v14) )
LABEL_24:
    sub_21FFECC(a1, a2);
  return System_Int32__CompareTo_76925088((int32_t)&v15, *(_DWORD *)(v14 + 320), 0);
}