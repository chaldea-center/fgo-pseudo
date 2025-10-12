void TutorialArrowMenu___cctor(const MethodInfo *method)
{
  struct TutorialArrowMenu_StaticFields *static_fields; // x8

  if ( (byte_4C3660A & 1) == 0 )
  {
    sub_1C32C20(&TutorialArrowMenu_TypeInfo);
    byte_4C3660A = 1;
  }
  static_fields = TutorialArrowMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OPEN_TIME = 0x3DCCCCCD3E99999ALL;
  *(_QWORD *)&static_fields->MASK_ALPHA = 0x53F333333LL;
}


void TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C36609 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
    byte_4C36609 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tutorialArrowMarkList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tutorialPeepWindowTextureList, (int32_t)v6, v7, v8);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TutorialArrowMenu__Close(TutorialArrowMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x20
  TutorialArrowMenu_c *v10; // x8
  TweenAlpha_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C36608 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TutorialArrowMenu_TypeInfo);
    sub_1C32C20(&StringLiteral_5986/*"EndCloseTutorialArrowMenu"*/);
    byte_4C36608 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0, 0) )
  {
    Component_object = (UnityEngine_Object_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_22;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_22;
    if ( ((float (__fastcall *)(UnityEngine_Object_o *, _QWORD))Component_object->klass[1]._1.this_arg.data)(
           Component_object,
           *(_QWORD *)&Component_object->klass[1]._1.this_arg.bits) != 0.0 )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_object->klass[1]._1.element_class)(
        Component_object,
        Component_object->klass[1]._1.castClass,
        1.0);
      v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      v10 = TutorialArrowMenu_TypeInfo;
      if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v10 = TutorialArrowMenu_TypeInfo;
      }
      v11 = TweenAlpha__Begin(v9, v10->static_fields->CLOSE_TIME, 0.0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v11 )
        {
          v11->fields.method = 6;
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v11->fields.eventReceiver = v12;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.eventReceiver, (int32_t)v12, v13, v14);
          v15 = StringLiteral_5986/*"EndCloseTutorialArrowMenu"*/;
          v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5986/*"EndCloseTutorialArrowMenu"*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.callWhenFinished, v15, v16, v17);
          return;
        }
LABEL_22:
        sub_1C32E7C(gameObject);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5986/*"EndCloseTutorialArrowMenu"*/, 0.1, 0);
}


UnityEngine_GameObject_o *TutorialArrowMenu__CreatePrefab(
        TutorialArrowMenu_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parentObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *transform; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36601 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36601 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v7 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0), !transform) )
  {
    sub_1C32E7C(v6);
  }
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Transform__set_parent(transform, parentObject, 0);
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C313D7 )
  {
    sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
    byte_4C313D7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v14, 0);
  return v7;
}


void TutorialArrowMenu__EndCloseTutorialArrowMenu(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *callbackFunc; // t1

  TutorialArrowMenu__Init(this, method);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void TutorialArrowMenu__EndOpenBaseDialog(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void TutorialArrowMenu__Init(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  TutorialArrowMenu__ObjectInitialize(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  void *tutorialArrowMarkList; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w2
  int v7; // w8
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *tutorialPeepWindowTextureList; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C36602 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36602 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
  if ( !tutorialArrowMarkList )
    goto LABEL_24;
  if ( *((int *)tutorialArrowMarkList + 6) >= 1 )
  {
    v4 = 0;
    do
    {
      tutorialArrowMarkList = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
                                v4,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)tutorialArrowMarkList,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      v6 = *((_DWORD *)tutorialArrowMarkList + 6);
      ++v4;
    }
    while ( v4 < v6 );
    v7 = *((_DWORD *)tutorialArrowMarkList + 7) + 1;
    *((_DWORD *)tutorialArrowMarkList + 6) = 0;
    *((_DWORD *)tutorialArrowMarkList + 7) = v7;
    if ( v6 >= 1 )
      System_Array__Clear(*((System_Array_o **)tutorialArrowMarkList + 2), 0, v6, 0);
  }
  tutorialArrowMarkList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialArrowMarkList )
    goto LABEL_24;
  if ( *((int *)tutorialArrowMarkList + 6) < 1 )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
LABEL_24:
    sub_1C32E7C(tutorialArrowMarkList);
  size = tutorialPeepWindowTextureList->fields._size;
  v11 = tutorialPeepWindowTextureList->fields._version + 1;
  tutorialPeepWindowTextureList->fields._size = 0;
  tutorialPeepWindowTextureList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tutorialPeepWindowTextureList->fields._items, 0, size, 0);
}


void TutorialArrowMenu__Open(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_o pos,
        float way,
        UnityEngine_Rect_o rect,
        System_Action_o *func,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s10
  float m_XMin; // s11
  float y; // s13
  float x; // s14
  __int64 v15; // x0
  const MethodInfo *v16; // x3
  UnityEngine_Rect_o v17; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C36603 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Vector2___TypeInfo);
    byte_4C36603 = 1;
  }
  v15 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v15 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1C32E84(v15);
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v17.fields.m_XMin = m_XMin;
  v17.fields.m_YMin = m_YMin;
  v17.fields.m_Width = m_Width;
  v17.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_40032892(this, (UnityEngine_Vector2_array *)v15, way, v17, func, v16);
}


void TutorialArrowMenu__Open_40032892(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        float way,
        UnityEngine_Rect_o rect,
        System_Action_o *func,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s10
  float m_YMin; // s11
  float m_XMin; // s12
  __int64 v14; // x0
  const MethodInfo *v15; // x4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( (byte_4C36607 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Rect___TypeInfo);
    byte_4C36607 = 1;
  }
  v14 = sub_1C32CC8(UnityEngine_Rect___TypeInfo, 1);
  if ( !v14 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1C32E84(v14);
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_40033240(this, posList, way, (UnityEngine_Rect_array *)v14, func, v15);
}


void TutorialArrowMenu__Open_40033076(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_o pos,
        float way,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s10
  __int64 v12; // x0
  const MethodInfo *v13; // x4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C36604 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Vector2___TypeInfo);
    byte_4C36604 = 1;
  }
  v12 = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v12 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C32E84(v12);
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_40033240(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v13);
}


void TutorialArrowMenu__Open_40033240(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        float way,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v11; // x0
  const MethodInfo *v12; // x5

  if ( (byte_4C36605 & 1) == 0 )
  {
    sub_1C32C20(&float___TypeInfo);
    byte_4C36605 = 1;
  }
  v11 = sub_1C32CC8(float___TypeInfo, 1);
  if ( !v11 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1C32E84(v11);
  *(float *)(v11 + 32) = way;
  TutorialArrowMenu__Open_40033400(this, posList, (System_Single_array *)v11, rects, func, v12);
}


// local variable allocation has failed, the output may be wrong!
void TutorialArrowMenu__Open_40033400(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x27
  float *p_m_Height; // x28
  float v16; // s11
  float v17; // s12
  float v18; // s9
  float v19; // s10
  Il2CppObject *v20; // x23
  UnityEngine_Component_o *v21; // x24
  TutorialArrowMenu_c *v22; // x0
  int32_t v23; // w1
  TweenWidth_o *v24; // x25
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 klass_low; // x10
  intptr_t v31; // x8
  unsigned __int64 v32; // x20
  float *p_y; // x25
  float *m_Items; // x28
  const MethodInfo *v35; // x1
  il2cpp_array_size_t v36; // x8
  il2cpp_array_size_t v37; // x10
  Il2CppObject *v38; // x23
  int v39; // s0 OVERLAPPED
  int v40; // s1
  float *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  intptr_t v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  intptr_t v47; // x8
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Object_o *Component_object; // x21
  Il2CppObject *v50; // x22
  Il2CppObject *v51; // x22
  UnityEngine_GameObject_o *v52; // x0
  TutorialArrowMenu_c *v53; // x8
  UnityEngine_GameObject_o *v54; // x20
  TweenAlpha_o *v55; // x20
  UnityEngine_GameObject_o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x1
  struct UISprite_o *maskSprite; // x20
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36606 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TutorialArrowMenu_TypeInfo);
    sub_1C32C20(&StringLiteral_6017/*"EndOpenBaseDialog"*/);
    byte_4C36606 = 1;
  }
  this->fields.callbackFunc = func;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)func,
    (int32_t)ways,
    (const MethodInfo *)rects);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  TutorialArrowMenu__ObjectInitialize(this, v11);
  if ( rects )
  {
    max_length = rects->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      p_m_Height = &rects->m_Items[0].fields.m_Height;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)max_length )
LABEL_87:
          sub_1C32E84(gameObject);
        v16 = *(p_m_Height - 3);
        v17 = *(p_m_Height - 2);
        v19 = *(p_m_Height - 1);
        v18 = *p_m_Height;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v12);
        if ( !gameObject )
          break;
        v20 = (Il2CppObject *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v21 = (UnityEngine_Component_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0);
        if ( !gameObject )
          break;
        v65.fields.y = v17 + (float)(v18 * 0.5);
        v65.fields.x = v16 + (float)(v19 * 0.5);
        v65.fields.z = 1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v65, 0);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v21, 0);
        if ( !gameObject )
          break;
        v66.fields.x = 0.5;
        v66.fields.y = 0.5;
        v66.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v66, 0);
        UIWidget__set_width((UIWidget_o *)v21, 2048, 0);
        UIWidget__set_height((UIWidget_o *)v21, 1152, 0);
        v22 = TutorialArrowMenu_TypeInfo;
        if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
          v22 = TutorialArrowMenu_TypeInfo;
        }
        v23 = v19 == INFINITY ? 0 : 2 * (int)v19;
        v24 = TweenWidth__Begin((UIWidget_o *)v21, v22->static_fields->OPEN_TIME, v23, 0);
        v25 = v18 == INFINITY ? 0 : 2 * (int)v18;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin(
                                                   (UIWidget_o *)v21,
                                                   TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME,
                                                   v25,
                                                   0);
        if ( !v24 )
          break;
        v24->fields.method = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].monitor) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        m_CachedPtr = gameObject->fields.m_CachedPtr;
        v29 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(gameObject[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(gameObject[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v20,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = m_CachedPtr + 8 * klass_low;
          LODWORD(gameObject[1].klass) = klass_low + 1;
          *(_QWORD *)(v31 + 32) = v20;
          sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v20, v26, v27);
        }
        ++v14;
        p_m_Height += 4;
        LODWORD(max_length) = rects->max_length;
        if ( (__int64)v14 >= (int)max_length )
          goto LABEL_28;
      }
LABEL_86:
      sub_1C32E7C(gameObject);
    }
  }
LABEL_28:
  if ( posList && SLODWORD(posList->max_length) >= 1 )
  {
    v32 = 0;
    p_y = &posList->m_Items[0].fields.y;
    m_Items = ways->m_Items;
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v12);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v36 = ways->max_length;
      v37 = posList->max_length;
      v38 = (Il2CppObject *)gameObject;
      if ( (int)v36 < 2 || (int)v36 > (int)v37 )
      {
        if ( v32 >= (unsigned int)v37 || !(_DWORD)v36 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v39 = *((_DWORD *)p_y - 1);
        v40 = *(_DWORD *)p_y;
        v41 = ways->m_Items;
      }
      else
      {
        if ( v32 >= (unsigned int)v37 || v32 >= (unsigned int)ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v39 = *((_DWORD *)p_y - 1);
        v40 = *(_DWORD *)p_y;
        v41 = m_Items;
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&v39, *v41, v35);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      v44 = gameObject->fields.m_CachedPtr;
      v45 = Method_System_Collections_Generic_List_TutorialArrowMark__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v44 )
        goto LABEL_86;
      v46 = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v38,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = v44 + 8 * v46;
        LODWORD(gameObject[1].klass) = v46 + 1;
        *(_QWORD *)(v47 + 32) = v38;
        sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v38, v42, v43);
      }
      ++v32;
      p_y += 2;
      ++m_Items;
    }
    while ( (__int64)v32 < SLODWORD(posList->max_length) );
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0, 0) )
  {
    Component_object = (UnityEngine_Object_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_86;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !gameObject )
      goto LABEL_86;
    v50 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !gameObject )
        goto LABEL_86;
      v51 = UnityEngine_GameObject__GetComponent_object_(
              gameObject,
              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)v51, 0);
    }
    ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_object->klass[1]._1.element_class)(
      Component_object,
      Component_object->klass[1]._1.castClass,
      1.0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_86;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_86;
  if ( !rects )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
LABEL_85:
    TutorialArrowMenu__EndOpenBaseDialog(this, v62);
    return;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_86;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
    gameObject,
    gameObject->klass[1]._1.castClass,
    0.005);
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_86;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  v53 = TutorialArrowMenu_TypeInfo;
  v54 = v52;
  if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v53 = TutorialArrowMenu_TypeInfo;
  }
  v55 = TweenAlpha__Begin(v54, v53->static_fields->OPEN_TIME, v53->static_fields->MASK_ALPHA, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)TutorialArrowMenu_TypeInfo;
    maskSprite = this->fields.maskSprite;
    if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    if ( !maskSprite )
      goto LABEL_86;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))maskSprite->klass->vtable._8_set_alpha.methodPtr)(
      maskSprite,
      maskSprite->klass->vtable._8_set_alpha.method,
      TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA);
    goto LABEL_85;
  }
  if ( !v55 )
    goto LABEL_86;
  v55->fields.method = 6;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v55->fields.eventReceiver = v56;
  sub_1C32BC4((CGThumbnailListItem_o *)&v55->fields.eventReceiver, (int32_t)v56, v57, v58);
  v59 = StringLiteral_6017/*"EndOpenBaseDialog"*/;
  v55->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6017/*"EndOpenBaseDialog"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v55->fields.callWhenFinished, v59, v60, v61);
}


bool TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}