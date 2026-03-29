void TutorialArrowMenu___cctor(const MethodInfo *method)
{
  struct TutorialArrowMenu_StaticFields *static_fields; // x8

  if ( (byte_4D2F62A & 1) == 0 )
  {
    sub_1C93AD4(&TutorialArrowMenu_TypeInfo);
    byte_4D2F62A = 1;
  }
  static_fields = TutorialArrowMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OPEN_TIME = 0x3DCCCCCD3E99999ALL;
  *(_QWORD *)&static_fields->MASK_ALPHA = 0x53F333333LL;
}


void TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
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

  if ( (byte_4D2F629 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
    byte_4D2F629 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tutorialArrowMarkList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.tutorialPeepWindowTextureList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TutorialArrowMenu__Close(TutorialArrowMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  TutorialArrowMenu_c *v15; // x8
  TweenAlpha_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2F628 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TutorialArrowMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_6013/*"EndCloseTutorialArrowMenu"*/);
    byte_4D2F628 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      v15 = TutorialArrowMenu_TypeInfo;
      if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v15 = TutorialArrowMenu_TypeInfo;
      }
      v16 = TweenAlpha__Begin(v14, v15->static_fields->CLOSE_TIME, 0.0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v16 )
        {
          v16->fields.method = 6;
          v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v16->fields.eventReceiver = v17;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v16->fields.eventReceiver,
            (int32_t)v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          v24 = StringLiteral_6013/*"EndCloseTutorialArrowMenu"*/;
          v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6013/*"EndCloseTutorialArrowMenu"*/;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.callWhenFinished, v24, v25, v26, v27, v28, v29, v30);
          return;
        }
LABEL_22:
        sub_1C93D2C(gameObject, v13);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6013/*"EndCloseTutorialArrowMenu"*/, 0.1, 0);
}


UnityEngine_GameObject_o *TutorialArrowMenu__CreatePrefab(
        TutorialArrowMenu_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parentObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_4D2F621 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F621 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0), !transform) )
  {
    sub_1C93D2C(v6, v7);
  }
  UnityEngine_Transform__set_parent(transform, parentObject, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4D2A13F )
  {
    sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  UnityEngine_Transform__set_localScale(transform, localScale, 0);
  return v8;
}


void TutorialArrowMenu__EndCloseTutorialArrowMenu(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *callbackFunc; // t1

  TutorialArrowMenu__Init(this, method);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TutorialArrowMenu__EndOpenBaseDialog(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void TutorialArrowMenu__Init(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  TutorialArrowMenu__ObjectInitialize(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
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

  if ( (byte_4D2F622 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F622 = 1;
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
                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)tutorialArrowMarkList,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
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
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
LABEL_24:
    sub_1C93D2C(tutorialArrowMarkList, method);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  UnityEngine_Rect_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D2F623 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    byte_4D2F623 = 1;
  }
  v15 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v15 )
    sub_1C93D2C(0, v16);
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1C93D34(v15);
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_40843004(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v17);
}


void TutorialArrowMenu__Open_40843004(
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
  __int64 v15; // x1
  const MethodInfo *v16; // x4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( (byte_4D2F627 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Rect___TypeInfo);
    byte_4D2F627 = 1;
  }
  v14 = sub_1C93B7C(UnityEngine_Rect___TypeInfo, 1);
  if ( !v14 )
    sub_1C93D2C(0, v15);
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1C93D34(v14);
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_40843352(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


void TutorialArrowMenu__Open_40843188(
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
  __int64 v13; // x1
  const MethodInfo *v14; // x4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D2F624 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    byte_4D2F624 = 1;
  }
  v12 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v12 )
    sub_1C93D2C(0, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C93D34(v12);
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_40843352(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void TutorialArrowMenu__Open_40843352(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        float way,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4D2F625 & 1) == 0 )
  {
    sub_1C93AD4(&float___TypeInfo);
    byte_4D2F625 = 1;
  }
  v11 = sub_1C93B7C(float___TypeInfo, 1);
  if ( !v11 )
    sub_1C93D2C(0, v12);
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1C93D34(v11);
  *(float *)(v11 + 32) = way;
  TutorialArrowMenu__Open_40843512(this, posList, (System_Single_array *)v11, rects, func, v13);
}


void TutorialArrowMenu__Open_40843512(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x27
  float *p_m_Height; // x28
  float v19; // s11
  float v20; // s12
  float v21; // s9
  float v22; // s10
  Il2CppObject *v23; // x23
  UnityEngine_Component_o *v24; // x24
  TutorialArrowMenu_c *v25; // x0
  int32_t v26; // w1
  TweenWidth_o *v27; // x25
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v36; // x9
  __int64 klass_low; // x10
  intptr_t v38; // x8
  unsigned __int64 v39; // x20
  float *p_y; // x25
  float *m_Items; // x28
  il2cpp_array_size_t v42; // x8
  il2cpp_array_size_t v43; // x10
  Il2CppObject *v44; // x23
  float *v46; // x8
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  intptr_t v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  intptr_t v56; // x8
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Object_o *Component_object; // x21
  Il2CppObject *v59; // x22
  Il2CppObject *v60; // x22
  UnityEngine_GameObject_o *v61; // x0
  TutorialArrowMenu_c *v62; // x8
  UnityEngine_GameObject_o *v63; // x20
  TweenAlpha_o *v64; // x20
  UnityEngine_GameObject_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  const MethodInfo *v79; // x1
  struct UISprite_o *maskSprite; // x20
  UnityEngine_Vector2_o v82; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2F626 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TutorialArrowMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_6044/*"EndOpenBaseDialog"*/);
    byte_4D2F626 = 1;
  }
  this->fields.callbackFunc = func;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)func,
    (int32_t)ways,
    (int32_t)rects,
    (System_String_o *)func,
    (int32_t)method,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  TutorialArrowMenu__ObjectInitialize(this, v14);
  if ( rects )
  {
    max_length = rects->max_length;
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      p_m_Height = &rects->m_Items[0].fields.m_Height;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)max_length )
LABEL_87:
          sub_1C93D34(gameObject);
        v19 = *(p_m_Height - 3);
        v20 = *(p_m_Height - 2);
        v22 = *(p_m_Height - 1);
        v21 = *p_m_Height;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v15);
        if ( !gameObject )
          break;
        v23 = (Il2CppObject *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v24 = (UnityEngine_Component_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0);
        if ( !gameObject )
          break;
        v83.fields.y = v20 + (float)(v21 * 0.5);
        v83.fields.x = v19 + (float)(v22 * 0.5);
        v83.fields.z = 1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v83, 0);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v24, 0);
        if ( !gameObject )
          break;
        v84.fields.x = 0.5;
        v84.fields.y = 0.5;
        v84.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v84, 0);
        UIWidget__set_width((UIWidget_o *)v24, 2048, 0);
        UIWidget__set_height((UIWidget_o *)v24, 1152, 0);
        v25 = TutorialArrowMenu_TypeInfo;
        if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
          v25 = TutorialArrowMenu_TypeInfo;
        }
        v26 = v22 == INFINITY ? 0 : 2 * (int)v22;
        v27 = TweenWidth__Begin((UIWidget_o *)v24, v25->static_fields->OPEN_TIME, v26, 0);
        v28 = v21 == INFINITY ? 0 : 2 * (int)v21;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin(
                                                   (UIWidget_o *)v24,
                                                   TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME,
                                                   v28,
                                                   0);
        if ( !v27 )
          break;
        v27->fields.method = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].monitor) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        m_CachedPtr = gameObject->fields.m_CachedPtr;
        v36 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(gameObject[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(gameObject[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v23,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = m_CachedPtr + 8 * klass_low;
          LODWORD(gameObject[1].klass) = klass_low + 1;
          *(_QWORD *)(v38 + 32) = v23;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v38 + 32), (int32_t)v23, v29, v30, v31, v32, v33, v34);
        }
        ++v17;
        p_m_Height += 4;
        LODWORD(max_length) = rects->max_length;
        if ( (__int64)v17 >= (int)max_length )
          goto LABEL_28;
      }
LABEL_86:
      sub_1C93D2C(gameObject, v13);
    }
  }
LABEL_28:
  if ( posList && SLODWORD(posList->max_length) >= 1 )
  {
    v39 = 0;
    p_y = &posList->m_Items[0].fields.y;
    m_Items = ways->m_Items;
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v15);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v42 = ways->max_length;
      v43 = posList->max_length;
      v44 = (Il2CppObject *)gameObject;
      if ( (int)v42 < 2 || (int)v42 > (int)v43 )
      {
        if ( v39 >= (unsigned int)v43 || !(_DWORD)v42 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v82 = *(UnityEngine_Vector2_o *)(p_y - 1);
        v46 = ways->m_Items;
      }
      else
      {
        if ( v39 >= (unsigned int)v43 || v39 >= (unsigned int)ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v82 = *(UnityEngine_Vector2_o *)(p_y - 1);
        v46 = m_Items;
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, v82, *v46, v13);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      v53 = gameObject->fields.m_CachedPtr;
      v54 = Method_System_Collections_Generic_List_TutorialArrowMark__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v53 )
        goto LABEL_86;
      v55 = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v44,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = v53 + 8 * v55;
        LODWORD(gameObject[1].klass) = v55 + 1;
        *(_QWORD *)(v56 + 32) = v44;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v56 + 32), (int32_t)v44, v47, v48, v49, v50, v51, v52);
      }
      ++v39;
      p_y += 2;
      ++m_Items;
    }
    while ( (__int64)v39 < SLODWORD(posList->max_length) );
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
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    v59 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !gameObject )
        goto LABEL_86;
      v60 = UnityEngine_GameObject__GetComponent_object_(
              gameObject,
              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)v60, 0);
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
    TutorialArrowMenu__EndOpenBaseDialog(this, v79);
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
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  v62 = TutorialArrowMenu_TypeInfo;
  v63 = v61;
  if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v62 = TutorialArrowMenu_TypeInfo;
  }
  v64 = TweenAlpha__Begin(v63, v62->static_fields->OPEN_TIME, v62->static_fields->MASK_ALPHA, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0, 0);
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
  if ( !v64 )
    goto LABEL_86;
  v64->fields.method = 6;
  v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v64->fields.eventReceiver = v65;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->fields.eventReceiver, (int32_t)v65, v66, v67, v68, v69, v70, v71);
  v72 = StringLiteral_6044/*"EndOpenBaseDialog"*/;
  v64->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6044/*"EndOpenBaseDialog"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->fields.callWhenFinished, v72, v73, v74, v75, v76, v77, v78);
}


bool TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}