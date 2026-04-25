void PhotoGraphicTouchComponent___ctor(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_RaycastHit_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4DFFEF0 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_PhotoGraphicTouchComponent__TypeInfo);
    sub_1CE6700(&UnityEngine_RaycastHit___TypeInfo);
    byte_4DFFEF0 = 1;
  }
  v3 = (struct UnityEngine_RaycastHit_array *)sub_1CE67A8(UnityEngine_RaycastHit___TypeInfo, 10);
  this->fields.raycastHitResult = v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.raycastHitResult, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_PhotoGraphicTouchComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor_59791268(
    v10,
    10,
    (const MethodInfo_39057A4 *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent___ctor__);
  this->fields.hits = (struct System_Collections_Generic_List_PhotoGraphicTouchComponent__o *)v10;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.hits, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.fallbackRight = 1.0;
  this->fields.fallbackTop = 1.0;
  this->fields.masterFigureFallbackRight = 1.0;
  this->fields.masterFigureFallbackTop = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoGraphicTouchComponent__ExecuteOnDrag(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  const MethodInfo *v4; // x1
  PhotoStandFigureDragProcess_o *v5; // x0

  if ( (byte_4DFFEEB & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFFEEB = 1;
  }
  DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(DragProcess_k__BackingField, 0, 0) )
  {
    v5 = this->fields._DragProcess_k__BackingField;
    if ( !v5 )
      sub_1CE6958(0, v4);
    PhotoStandFigureDragProcess__OnDragUpdate(v5, v4);
  }
}


void PhotoGraphicTouchComponent__ExecuteOnPress(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  PhotoStandFigureDragProcess_o *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_4DFFEEA & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFFEEA = 1;
  }
  DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(DragProcess_k__BackingField, 0, 0);
  if ( !v4 )
  {
    v7 = this->fields._DragProcess_k__BackingField;
    if ( !v7 )
      sub_1CE6958(v4, v5);
    PhotoStandFigureDragProcess__SetCanOtherTouch(v7, 0, v6);
    PhotoStandFigureDragProcess__InitTouchInfo(v7, v8);
  }
}


void PhotoGraphicTouchComponent__ExecuteOnRelease(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  const MethodInfo *v4; // x1
  PhotoStandFigureDragProcess_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4DFFEEC & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&PhotoGraphicTouchComponent_TypeInfo);
    byte_4DFFEEC = 1;
  }
  DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(DragProcess_k__BackingField, 0, 0) )
  {
    v5 = this->fields._DragProcess_k__BackingField;
    if ( !v5 )
      sub_1CE6958(0, v4);
    PhotoStandFigureDragProcess__OnRelease(v5, v4);
    PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields,
      0,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


float PhotoGraphicTouchComponent__FallbackBottom(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 96;
  if ( this->fields.isMasterFigure )
    v2 = 112;
  return *(float *)((char *)&this->klass + v2);
}


float PhotoGraphicTouchComponent__FallbackLeft(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 88;
  if ( this->fields.isMasterFigure )
    v2 = 104;
  return *(float *)((char *)&this->klass + v2);
}


float PhotoGraphicTouchComponent__FallbackRight(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 92;
  if ( this->fields.isMasterFigure )
    v2 = 108;
  return *(float *)((char *)&this->klass + v2);
}


float PhotoGraphicTouchComponent__FallbackTop(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 100;
  if ( this->fields.isMasterFigure )
    v2 = 116;
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
  float x; // s10
  float y; // s8
  const MethodInfo_3C8C094 *v17; // x5
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float m_YMin; // s11
  float m_Height; // s12
  int32_t mHeight; // w24
  float v22; // s0
  float v23; // s10
  float v24; // s13
  float v25; // s13
  _BOOL4 v26; // w8
  unsigned int v27; // w9
  int32_t v28; // w21
  float v29; // s9
  float v30; // s8
  float v31; // s9
  unsigned int v32; // w9
  int32_t v33; // w2
  __int64 v34; // x8
  float v35; // s0
  __int64 v36; // x10
  __int64 v37; // x9
  float v38; // s1
  __int64 v39; // x9
  float v40; // s0
  float v41; // s1
  int32_t v42; // w3
  __int64 v43; // x0
  int32_t v44; // w1
  __int64 v45; // [xsp+0h] [xbp-80h] BYREF
  int32_t v46; // [xsp+8h] [xbp-78h]
  System_ValueTuple_int__int__Int32Enum__o v47; // 0:x0.12
  System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState__o result; // 0:x0.12
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4DFFEEF & 1) == 0 )
  {
    sub_1CE6700(&UICamera_TypeInfo);
    sub_1CE6700(&Method_System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState___ctor__);
    byte_4DFFEEF = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
  }
  if ( !uiTexture )
    goto LABEL_39;
  m_CachedPtr = (float *)gameObject[7].fields.m_CachedPtr;
  v12 = m_CachedPtr[17];
  v13 = m_CachedPtr[18];
  v14 = m_CachedPtr[19];
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uiTexture, 0);
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_39;
  v49.fields.x = v12;
  v49.fields.y = v13;
  v49.fields.z = v14;
  v50 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)gameObject, v49, 0);
  x = v50.fields.x;
  y = v50.fields.y;
  PivotOffset = NGUIMath__GetPivotOffset(uiTexture->fields.mPivot, 0);
  m_YMin = uiTexture->fields.mRect.fields.m_YMin;
  m_Height = uiTexture->fields.mRect.fields.m_Height;
  mHeight = uiTexture->fields.mHeight;
  v22 = (float)(PivotOffset.fields.x + (float)(x / (float)uiTexture->fields.mWidth))
      * uiTexture->fields.mRect.fields.m_Width;
  v23 = (float)texWidth;
  v24 = uiTexture->fields.mRect.fields.m_XMin + v22;
  if ( !byte_4DFE0A8 )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    byte_4DFE0A8 = 1;
  }
  v25 = v24 * v23;
  if ( System_Math_TypeInfo->_2.cctor_finished )
  {
    v26 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v26 = byte_4DFE0A8 == 0;
  }
  v27 = vcvtms_s32_f32(v25);
  if ( floorf(v25) == INFINITY )
    v28 = 0x80000000;
  else
    v28 = v27;
  v29 = m_YMin + (float)((float)(PivotOffset.fields.y + (float)(y / (float)mHeight)) * m_Height);
  v30 = (float)texHeight;
  if ( v26 )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    byte_4DFE0A8 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)System_Math_TypeInfo;
  v31 = v29 * v30;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v32 = vcvtms_s32_f32(v31);
  v33 = floorf(v31) == INFINITY ? 0x80000000 : v32;
  if ( !targetTouchComponent )
LABEL_39:
    sub_1CE6958(gameObject, uiTexture);
  v34 = 104;
  v35 = (float)v28;
  if ( !targetTouchComponent->fields.isMasterFigure )
    v34 = 88;
  v36 = 92;
  if ( targetTouchComponent->fields.isMasterFigure )
    v36 = 108;
  if ( (float)(*(float *)((char *)&targetTouchComponent->klass + v34) * v23) > v35
    || (float)(*(float *)((char *)&targetTouchComponent->klass + v36) * v23) <= v35 )
  {
    goto LABEL_37;
  }
  v37 = 116;
  if ( !targetTouchComponent->fields.isMasterFigure )
    v37 = 100;
  v38 = *(float *)((char *)&targetTouchComponent->klass + v37);
  v39 = 112;
  v40 = (float)v33;
  v41 = v38 * v30;
  if ( !targetTouchComponent->fields.isMasterFigure )
    v39 = 96;
  if ( v41 <= v40 || (float)(*(float *)((char *)&targetTouchComponent->klass + v39) * v30) > v40 )
LABEL_37:
    v42 = 0;
  else
    v42 = 1;
  *(_QWORD *)&v47.fields.Item1 = &v45;
  v47.fields.Item3 = v28;
  v46 = 0;
  v45 = 0;
  System_ValueTuple_int__int__Int32Enum____ctor(
    v47,
    v33,
    v42,
    Method_System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState___ctor__,
    v17);
  v43 = v45;
  v44 = v46;
  *(_QWORD *)&result.fields.Item1 = v43;
  result.fields.Item3 = v44;
  return result;
}


PhotoGraphicTouchComponent_o *PhotoGraphicTouchComponent__GetPointedPhotoGraphicTouchComponent(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  PhotoGraphicTouchComponent_o *v2; // x19
  struct System_Collections_Generic_List_PhotoGraphicTouchComponent__o *hits; // x8
  int32_t size; // w2
  int v5; // w9
  __int64 v6; // x8
  UnityEngine_Camera_o *v7; // x21
  UnityEngine_RaycastHit_array *raycastHitResult; // x20
  int32_t cullingMask; // w21
  unsigned __int64 v10; // x21
  __int64 v11; // x25
  __int64 v12; // x26
  struct UnityEngine_RaycastHit_array *v13; // x8
  UnityEngine_Object_o *collider; // x20
  UnityEngine_Object_o *gameObject; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8
  PhotoGraphicTouchComponent_o *v26; // x20
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w21
  int32_t m_CancellationTokenSource; // w2
  Il2CppObject *Item; // x0
  const MethodInfo *v31; // x2
  char IsTouched; // w0
  char v33; // w22
  bool v34; // w0
  int v35; // w8
  System_Array_o *items; // x0
  struct System_Collections_Generic_List_PhotoGraphicTouchComponent__o *v37; // x8
  int v38; // w9
  UnityEngine_Ray_o v40; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Ray_o v41; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Ray_o v42; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *component; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4DFFEED & 1) == 0 )
  {
    sub_1CE6700(&PhotoGraphicTouchComponent_DepthSort_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_TryGetComponent_PhotoGraphicTouchComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Sort__);
    sub_1CE6700(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&UnityEngine_Physics_TypeInfo);
    this = (PhotoGraphicTouchComponent_o *)sub_1CE6700(&UICamera_TypeInfo);
    byte_4DFFEED = 1;
  }
  component = 0;
  hits = v2->fields.hits;
  if ( !hits )
    goto LABEL_52;
  size = hits->fields._size;
  v5 = hits->fields._version + 1;
  hits->fields._size = 0;
  hits->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)hits->fields._items, 0, size, 0);
  this = (PhotoGraphicTouchComponent_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    this = (PhotoGraphicTouchComponent_o *)UICamera_TypeInfo;
  }
  v6 = *(_QWORD *)&this[1].fields.isMasterFigure;
  v7 = *(UnityEngine_Camera_o **)(v6 + 136);
  if ( !v7 )
    goto LABEL_52;
  v44.fields.x = *(float *)(v6 + 60);
  v44.fields.y = *(float *)(v6 + 64);
  v44.fields.z = 0.0;
  UnityEngine_Camera__ScreenPointToRay_72723200(&v41, v7, v44, 0);
  v42 = v41;
  raycastHitResult = v2->fields.raycastHitResult;
  cullingMask = UnityEngine_Camera__get_cullingMask(v7, 0);
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v40 = v42;
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Physics__RaycastNonAlloc_73240724(
                                           &v40,
                                           raycastHitResult,
                                           100.0,
                                           cullingMask,
                                           0);
  if ( (int)this >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)this;
    v12 = 32;
    do
    {
      v13 = v2->fields.raycastHitResult;
      if ( !v13 )
        goto LABEL_52;
      if ( v10 >= LODWORD(v13->max_length) )
        sub_1CE6960(this);
      collider = (UnityEngine_Object_o *)UnityEngine_RaycastHit__get_collider(
                                           (UnityEngine_RaycastHit_o *)((char *)v13 + v12),
                                           0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(collider, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !collider )
          goto LABEL_52;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)collider,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(gameObject, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !gameObject )
            goto LABEL_52;
          this = (PhotoGraphicTouchComponent_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   (UnityEngine_GameObject_o *)gameObject,
                                                   &component,
                                                   (const MethodInfo_325D0CC *)Method_UnityEngine_GameObject_TryGetComponent_PhotoGraphicTouchComponent___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (PhotoGraphicTouchComponent_o *)v2->fields.hits;
            if ( !this )
              goto LABEL_52;
            method = (const MethodInfo *)component;
            m_CachedPtr = this->fields.m_CachedPtr;
            v23 = Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              goto LABEL_52;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_3905F68 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v25 + 32) = method;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)method, v16, v17, v18, v19, v20, v21);
            }
          }
        }
      }
      ++v10;
      v12 += 44;
    }
    while ( v11 != v10 );
  }
  v26 = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->fields.hits, 0) )
    return v26;
  v27 = (System_Collections_Generic_List_object__o *)v2->fields.hits;
  LOBYTE(v42.fields.m_Origin.fields.x) = v2[1].klass;
  this = (PhotoGraphicTouchComponent_o *)j_il2cpp_value_box_0(PhotoGraphicTouchComponent_DepthSort_TypeInfo, &v42);
  if ( !v27
    || (System_Collections_Generic_List_object___Sort_59799912(
          v27,
          (System_Collections_Generic_IComparer_T__o *)this,
          (const MethodInfo_3907968 *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__Sort__),
        (this = (PhotoGraphicTouchComponent_o *)v2->fields.hits) == 0) )
  {
LABEL_52:
    sub_1CE6958(this, method);
  }
  v26 = 0;
  v28 = 0;
  while ( 1 )
  {
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( v28 >= m_CancellationTokenSource )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v28,
             (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
    IsTouched = PhotoGraphicTouchComponent__IsTouched(v2, (PhotoGraphicTouchComponent_o *)Item, v31);
    if ( (IsTouched & 2) != 0 )
    {
      this = (PhotoGraphicTouchComponent_o *)v2->fields.hits;
      if ( this )
      {
        this = (PhotoGraphicTouchComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 v28,
                                                 (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
        v37 = v2->fields.hits;
        if ( v37 )
        {
          m_CancellationTokenSource = v37->fields._size;
          v26 = this;
          v38 = v37->fields._version + 1;
          v37->fields._size = 0;
          v37->fields._version = v38;
          if ( m_CancellationTokenSource >= 1 )
          {
            items = (System_Array_o *)v37->fields._items;
LABEL_50:
            System_Array__Clear(items, 0, m_CancellationTokenSource, 0);
          }
          return v26;
        }
      }
      goto LABEL_52;
    }
    v33 = IsTouched;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v34 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0, 0);
    if ( (v33 & 1) != 0 && v34 )
    {
      this = (PhotoGraphicTouchComponent_o *)v2->fields.hits;
      if ( !this )
        goto LABEL_52;
      v26 = (PhotoGraphicTouchComponent_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v28,
                                              (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_PhotoGraphicTouchComponent__get_Item__);
    }
    this = (PhotoGraphicTouchComponent_o *)v2->fields.hits;
    ++v28;
    if ( !this )
      goto LABEL_52;
  }
  v35 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v35;
  if ( m_CancellationTokenSource >= 1 )
  {
    items = (System_Array_o *)this->fields.m_CachedPtr;
    goto LABEL_50;
  }
  return v26;
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
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-A8h] BYREF
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
  return (y | x) >= 0 && x < texWidth && y < texHeight;
}


int32_t PhotoGraphicTouchComponent__IsTouched(
        PhotoGraphicTouchComponent_o *this,
        PhotoGraphicTouchComponent_o *photoGraphicTouchComponent,
        const MethodInfo *method)
{
  PhotoGraphicTouchComponent_o *v4; // x19
  UnityEngine_Object_o *masterFigureTextureOld; // x21
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_Object_o *v7; // x22
  UnityEngine_Texture_o *Texture; // x0
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Object_o *photoStandFigureComponent; // x21
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *SvtStandFigure; // x21
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v16; // x22
  int v17; // w24
  PhotoGraphicTouchComponent_o *v18; // x0
  int32_t v19; // w25
  const MethodInfo *v20; // x5
  __int64 v21; // x27
  int32_t Item3; // w20
  int32_t Item1; // w26
  UnityEngine_RenderTexture_o *Temporary_72826212; // x21
  UnityEngine_RenderTexture_o *active; // x22
  __int64 v26; // x1
  UnityEngine_Texture2D_o *pixelTexture; // x0
  __int64 v28; // x1
  UnityEngine_Texture2D_o *v29; // x0
  float r; // s0
  int32_t v31; // w8
  bool v32; // cc
  int32_t v34; // w24
  PhotoGraphicTouchComponent_o *v35; // x0
  int32_t v36; // w25
  const MethodInfo *v37; // x5
  __int64 v38; // x26
  int32_t v39; // w23
  UnityEngine_RenderTexture_o *v40; // x21
  __int64 v41; // x1
  UnityEngine_Texture2D_o *v42; // x0
  __int64 v43; // x1
  UnityEngine_Texture2D_o *v44; // x0
  System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState__o PixelPosition; // 0:x0.12
  System_ValueTuple_int__int__PhotoGraphicTouchComponent_PixelTouchState__o v46; // 0:x0.12
  UnityEngine_Vector2_o v47; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v48; // 0:s2.4,4:s3.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Pixel; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4DFFEEE & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Graphics_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&UnityEngine_RenderTexture_TypeInfo);
    sub_1CE6700(&UnityEngine_Texture2D_TypeInfo);
    this = (PhotoGraphicTouchComponent_o *)sub_1CE6700(&StringLiteral_16421/*"_MaskTex"*/);
    byte_4DFFEEE = 1;
  }
  if ( !photoGraphicTouchComponent )
    goto LABEL_73;
  if ( photoGraphicTouchComponent->fields.isMasterFigure )
  {
    masterFigureTextureOld = (UnityEngine_Object_o *)photoGraphicTouchComponent->fields.masterFigureTextureOld;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(masterFigureTextureOld, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !masterFigureTextureOld )
        goto LABEL_73;
      monitor = (UnityEngine_Object_o *)masterFigureTextureOld[17].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(monitor, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !monitor )
          goto LABEL_73;
        v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))monitor->klass[1].vtable._0_Equals.method)(
                                       monitor,
                                       monitor->klass[1].vtable._1_Finalize.methodPtr);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
        {
          this = (PhotoGraphicTouchComponent_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))monitor->klass[1].vtable._0_Equals.method)(
                                                   monitor,
                                                   monitor->klass[1].vtable._1_Finalize.methodPtr);
          if ( !this )
            goto LABEL_73;
          Texture = UnityEngine_Material__GetTexture(
                      (UnityEngine_Material_o *)this,
                      (System_String_o *)StringLiteral_16421/*"_MaskTex"*/,
                      0);
          if ( Texture )
          {
            if ( (UnityEngine_Texture2D_c *)Texture->klass == UnityEngine_Texture2D_TypeInfo )
              v9 = (UnityEngine_Object_o *)Texture;
            else
              v9 = 0;
          }
          else
          {
            v9 = 0;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( v9 )
            {
              v17 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(
                      v9,
                      v9->klass[1]._1.gc_desc);
              v18 = (PhotoGraphicTouchComponent_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
                                                      v9,
                                                      *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
              v19 = (int)v18;
              PixelPosition = PhotoGraphicTouchComponent__GetPixelPosition(
                                v18,
                                (UITexture_o *)monitor,
                                v17,
                                (int32_t)v18,
                                photoGraphicTouchComponent,
                                v20);
              v21 = HIDWORD(*(_QWORD *)&PixelPosition.fields.Item1);
              Item3 = PixelPosition.fields.Item3;
              if ( v19 <= PixelPosition.fields.Item2 )
                return Item3;
              Item1 = PixelPosition.fields.Item1;
              if ( v17 <= PixelPosition.fields.Item1 || (PixelPosition.fields.Item2 | PixelPosition.fields.Item1) < 0 )
                return Item3;
              Temporary_72826212 = UnityEngine_RenderTexture__GetTemporary_72826212(1, 1, 0, 7, 0);
              active = UnityEngine_RenderTexture__get_active(0);
              UnityEngine_RenderTexture__set_active(Temporary_72826212, 0);
              if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
              v47.fields.x = 1.0 / (float)v17;
              v47.fields.y = 1.0 / (float)v19;
              v48.fields.x = v47.fields.x * (float)Item1;
              v48.fields.y = v47.fields.y * (float)(int)v21;
              UnityEngine_Graphics__Blit_72763156((UnityEngine_Texture_o *)v9, Temporary_72826212, v47, v48, 0);
              pixelTexture = v4->fields.pixelTexture;
              if ( !pixelTexture )
                sub_1CE6958(0, v26);
              v49.fields.m_XMin = 0.0;
              v49.fields.m_YMin = 0.0;
              v49.fields.m_Width = 1.0;
              v49.fields.m_Height = 1.0;
              UnityEngine_Texture2D__ReadPixels_72808396(pixelTexture, v49, 0, 0, 0);
              v29 = v4->fields.pixelTexture;
              if ( !v29 )
                sub_1CE6958(0, v28);
              UnityEngine_Texture2D__Apply_72807976(v29, 0);
              UnityEngine_RenderTexture__set_active(active, 0);
              UnityEngine_RenderTexture__ReleaseTemporary(Temporary_72826212, 0);
              this = (PhotoGraphicTouchComponent_o *)v4->fields.pixelTexture;
              if ( this )
              {
                r = UnityEngine_Texture2D__GetPixel((UnityEngine_Texture2D_o *)this, 0, 0, 0).fields.r;
                v31 = Item3 | 2;
                v32 = r <= 0.0;
                goto LABEL_70;
              }
            }
LABEL_73:
            sub_1CE6958(this, photoGraphicTouchComponent);
          }
        }
      }
    }
    return 0;
  }
  photoStandFigureComponent = (UnityEngine_Object_o *)photoGraphicTouchComponent->fields.photoStandFigureComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(photoStandFigureComponent, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !photoStandFigureComponent )
    goto LABEL_73;
  v11 = (UnityEngine_Object_o *)photoStandFigureComponent[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v11 )
    goto LABEL_73;
  SvtStandFigure = (UnityEngine_Object_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)v11, 0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(SvtStandFigure, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !SvtStandFigure )
    goto LABEL_73;
  v13 = (UnityEngine_Object_o *)SvtStandFigure[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v13 )
    goto LABEL_73;
  v14 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))v13->klass[1].vtable._2_GetHashCode.method)(
          v13,
          v13->klass[1].vtable._3_ToString.methodPtr);
  if ( v14
    && (naturalAligment = UnityEngine_RenderTexture_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) >= (unsigned int)naturalAligment) )
  {
    if ( *(UnityEngine_RenderTexture_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) == UnityEngine_RenderTexture_TypeInfo )
      v16 = (UnityEngine_Object_o *)v14;
    else
      v16 = 0;
  }
  else
  {
    v16 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PhotoGraphicTouchComponent_o *)UnityEngine_Object__op_Equality(v16, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v16 )
    goto LABEL_73;
  v34 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v16->klass[1]._1.image)(v16, v16->klass[1]._1.gc_desc);
  v35 = (PhotoGraphicTouchComponent_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v16->klass[1]._1.byval_arg.data)(
                                          v16,
                                          *(_QWORD *)&v16->klass[1]._1.byval_arg.bits);
  v36 = (int)v35;
  v46 = PhotoGraphicTouchComponent__GetPixelPosition(
          v35,
          (UITexture_o *)v13,
          v34,
          (int32_t)v35,
          photoGraphicTouchComponent,
          v37);
  v38 = HIDWORD(*(_QWORD *)&v46.fields.Item1);
  Item3 = v46.fields.Item3;
  if ( v36 <= v46.fields.Item2 )
    return Item3;
  v39 = v46.fields.Item1;
  if ( v34 <= v46.fields.Item1 || (v46.fields.Item2 | v46.fields.Item1) < 0 )
    return Item3;
  v40 = UnityEngine_RenderTexture__get_active(0);
  UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)v16, 0);
  v42 = v4->fields.pixelTexture;
  if ( !v42 )
    sub_1CE6958(0, v41);
  v50.fields.m_YMin = (float)(int)v38;
  v50.fields.m_XMin = (float)v39;
  v50.fields.m_Width = 1.0;
  v50.fields.m_Height = 1.0;
  UnityEngine_Texture2D__ReadPixels_72808396(v42, v50, 0, 0, 0);
  v44 = v4->fields.pixelTexture;
  if ( !v44 )
    sub_1CE6958(0, v43);
  UnityEngine_Texture2D__Apply_72807976(v44, 0);
  UnityEngine_RenderTexture__set_active(v40, 0);
  this = (PhotoGraphicTouchComponent_o *)v4->fields.pixelTexture;
  if ( !this )
    goto LABEL_73;
  Pixel = UnityEngine_Texture2D__GetPixel((UnityEngine_Texture2D_o *)this, 0, 0, 0);
  v31 = Item3 | 2;
  v32 = Pixel.fields.a <= 0.0;
LABEL_70:
  if ( !v32 )
    return v31;
  return Item3;
}


void PhotoGraphicTouchComponent__OnDestroy(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pixelTexture; // x20
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *DragTarget; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4DFFEE5 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&PhotoGraphicTouchComponent_TypeInfo);
    byte_4DFFEE5 = 1;
  }
  pixelTexture = (UnityEngine_Object_o *)this->fields.pixelTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pixelTexture, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.pixelTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(v4, 0);
  }
  DragTarget = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(DragTarget, (UnityEngine_Object_o *)this, 0) )
  {
    PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields,
      0,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


void PhotoGraphicTouchComponent__OnPress(PhotoGraphicTouchComponent_o *this, bool isPressed, const MethodInfo *method)
{
  UnityEngine_Object_o *DragTarget; // x20
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *DragProcess_k__BackingField; // x20
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  PhotoGraphicTouchComponent_o *v12; // x0
  struct PhotoGraphicTouchComponent_o *PointedPhotoGraphicTouchComponent; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4DFFEE9 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&PhotoGraphicTouchComponent_TypeInfo);
    byte_4DFFEE9 = 1;
  }
  if ( !isPressed )
    goto LABEL_7;
  DragTarget = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(DragTarget, 0, 0) )
  {
    PointedPhotoGraphicTouchComponent = PhotoGraphicTouchComponent__GetPointedPhotoGraphicTouchComponent(this, v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PointedPhotoGraphicTouchComponent, 0, 0) )
    {
      PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget = PointedPhotoGraphicTouchComponent;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields,
        (int32_t)PointedPhotoGraphicTouchComponent,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v12 = PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
      if ( !v12 )
        goto LABEL_22;
      PhotoGraphicTouchComponent__ExecuteOnPress(v12, v11);
    }
  }
  else
  {
LABEL_7:
    v7 = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
    {
      DragProcess_k__BackingField = (UnityEngine_Object_o *)this->fields._DragProcess_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Inequality(DragProcess_k__BackingField, 0, 0);
      if ( v9 && !PhotoGraphicTouchComponent__HasActiveTouch((PhotoGraphicTouchComponent_o *)v9, v10) )
      {
        v12 = (PhotoGraphicTouchComponent_o *)this->fields._DragProcess_k__BackingField;
        if ( v12 )
        {
          PhotoStandFigureDragProcess__CheckDisplayPhotoUi((PhotoStandFigureDragProcess_o *)v12, v11);
          return;
        }
LABEL_22:
        sub_1CE6958(v12, v11);
      }
    }
  }
}


void PhotoGraphicTouchComponent__SetParentPhotoStandFigureComponent(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__52408884; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4DFFEE7 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentInParent_PhotoStandFigureComponent___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFFEE7 = 1;
  }
  ComponentInParent_object__52408884 = UnityEngine_Component__GetComponentInParent_object__52408884(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_31FB234 *)Method_UnityEngine_Component_GetComponentInParent_PhotoStandFigureComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__52408884, 0, 0) )
  {
    this->fields.photoStandFigureComponent = (struct PhotoStandFigureComponent_o *)ComponentInParent_object__52408884;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.photoStandFigureComponent,
      (int32_t)ComponentInParent_object__52408884,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
}


void PhotoGraphicTouchComponent__SetParentSelfPanel(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__52408884; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4DFFEE6 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFFEE6 = 1;
  }
  ComponentInParent_object__52408884 = UnityEngine_Component__GetComponentInParent_object__52408884(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_31FB234 *)Method_UnityEngine_Component_GetComponentInParent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__52408884, 0, 0) )
  {
    this->fields.selfPanel = (struct UIPanel_o *)ComponentInParent_object__52408884;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.selfPanel,
      (int32_t)ComponentInParent_object__52408884,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
}


void PhotoGraphicTouchComponent__SetUIMasterFigureTextureOld(
        PhotoGraphicTouchComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__52408884; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct UIMasterFigureTextureOld_o **p_masterFigureTextureOld; // x19

  if ( (byte_4DFFEE8 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentInParent_UIMasterFigureTextureOld___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFFEE8 = 1;
  }
  ComponentInParent_object__52408884 = UnityEngine_Component__GetComponentInParent_object__52408884(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_31FB234 *)Method_UnityEngine_Component_GetComponentInParent_UIMasterFigureTextureOld___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__52408884, 0, 0) )
  {
    this->fields.masterFigureTextureOld = (struct UIMasterFigureTextureOld_o *)ComponentInParent_object__52408884;
    p_masterFigureTextureOld = &this->fields.masterFigureTextureOld;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)p_masterFigureTextureOld,
      (int32_t)ComponentInParent_object__52408884,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    *((_BYTE *)p_masterFigureTextureOld + 8) = 1;
  }
}


void PhotoGraphicTouchComponent__Start(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Texture2D_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4DFFEE3 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Texture2D_TypeInfo);
    byte_4DFFEE3 = 1;
  }
  v3 = (UnityEngine_Texture2D_o *)sub_1CE694C(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_72806124(v3, 1, 1, 5, 0, 0);
  this->fields.pixelTexture = v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.pixelTexture, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  PhotoGraphicTouchComponent__SetParentPhotoStandFigureComponent(this, v10);
  PhotoGraphicTouchComponent__SetParentSelfPanel(this, v11);
  PhotoGraphicTouchComponent__SetUIMasterFigureTextureOld(this, v12);
}


void PhotoGraphicTouchComponent__Update(PhotoGraphicTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *DragTarget; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4DFFEE4 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&PhotoGraphicTouchComponent_TypeInfo);
    byte_4DFFEE4 = 1;
  }
  DragTarget = (UnityEngine_Object_o *)PhotoGraphicTouchComponent_TypeInfo->static_fields->DragTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(DragTarget, (UnityEngine_Object_o *)this, 0);
  if ( !v4 )
  {
    if ( PhotoGraphicTouchComponent__HasActiveTouch((PhotoGraphicTouchComponent_o *)v4, v5) )
      PhotoGraphicTouchComponent__ExecuteOnDrag(this, v6);
    else
      PhotoGraphicTouchComponent__ExecuteOnRelease(this, v6);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._DragProcess_k__BackingField = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._DragProcess_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


__int64 __fastcall PhotoGraphicTouchComponent_DepthSort__Compare(__int64 a1, __int64 a2, __int64 a3)
{
  UnityEngine_Object_o *v5; // x21
  UnityEngine_Object_o *v6; // x21
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4DFFEF1 & 1) == 0 )
  {
    a1 = sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFFEF1 = 1;
  }
  if ( !a2 )
    goto LABEL_24;
  v5 = *(UnityEngine_Object_o **)(a2 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  a1 = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( (a1 & 1) != 0 )
  {
    if ( !a3 )
      goto LABEL_24;
    v6 = *(UnityEngine_Object_o **)(a3 + 32);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
      return 0;
  }
  v8 = *(UnityEngine_Object_o **)(a2 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  a1 = UnityEngine_Object__op_Equality(v8, 0, 0);
  if ( (a1 & 1) != 0 )
    return 1;
  if ( !a3 )
    goto LABEL_24;
  v9 = *(UnityEngine_Object_o **)(a3 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  a1 = UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( (a1 & 1) != 0 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a3 + 32);
  if ( !v10 || (v12 = *(_DWORD *)(v10 + 320), (v11 = *(_QWORD *)(a2 + 32)) == 0) )
LABEL_24:
    sub_1CE6958(a1, a2);
  return System_Int32__CompareTo_66631004((int32_t)&v12, *(_DWORD *)(v11 + 320), 0);
}