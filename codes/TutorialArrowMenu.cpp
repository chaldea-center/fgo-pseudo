void TutorialArrowMenu___cctor(const MethodInfo *method)
{
  struct TutorialArrowMenu_StaticFields *static_fields; // x8

  if ( (byte_596F3ED & 1) == 0 )
  {
    sub_2213A60(&TutorialArrowMenu_TypeInfo);
    byte_596F3ED = 1;
  }
  static_fields = TutorialArrowMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OPEN_TIME = 0x3DCCCCCD3E99999ALL;
  *(_QWORD *)&static_fields->MASK_ALPHA = 0x53F333333LL;
}


void TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
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

  if ( (byte_596F3EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
    byte_596F3EC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialArrowMarkList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialPeepWindowTextureList,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *basePanel; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  TutorialArrowMenu_c *v21; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  TweenAlpha_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_596F3EB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TutorialArrowMenu_TypeInfo);
    sub_2213A60(&StringLiteral_6241/*"EndCloseTutorialArrowMenu"*/);
    byte_596F3EB = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
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
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
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
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      v21 = TutorialArrowMenu_TypeInfo;
      if ( !*(&TutorialArrowMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v18, v19);
        v21 = TutorialArrowMenu_TypeInfo;
      }
      v24 = TweenAlpha__Begin(v20, v21->static_fields->CLOSE_TIME, 0.0, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v24 )
        {
          v24->fields.method = 6;
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v24->fields.eventReceiver = v25;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v24->fields.eventReceiver,
            (int32_t)v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          v32 = StringLiteral_6241/*"EndCloseTutorialArrowMenu"*/;
          v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6241/*"EndCloseTutorialArrowMenu"*/;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v24->fields.callWhenFinished,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          return;
        }
LABEL_22:
        sub_2213CDC(gameObject, v17);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6241/*"EndCloseTutorialArrowMenu"*/, 0.1, 0);
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F3E4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F3E4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, parentObject);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0), !transform) )
  {
    sub_2213CDC(v6, v7);
  }
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Transform__set_parent(transform, parentObject, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v15, 0);
  return v8;
}


void TutorialArrowMenu__EndCloseTutorialArrowMenu(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *callbackFunc; // t1

  TutorialArrowMenu__Init(this, method);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TutorialArrowMenu__EndOpenBaseDialog(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  void *tutorialArrowMarkList; // x0
  int32_t v4; // w20
  int32_t v5; // w2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x21
  int v9; // w8
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *tutorialPeepWindowTextureList; // x8
  int32_t size; // w2
  int v15; // w9
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F3E5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F3E5 = 1;
  }
  tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
  memset(&v16, 0, sizeof(v16));
  if ( !tutorialArrowMarkList )
    goto LABEL_11;
  if ( *((int *)tutorialArrowMarkList + 6) >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = *((_DWORD *)tutorialArrowMarkList + 6);
      if ( v4 >= v5 )
        break;
      tutorialArrowMarkList = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
                                v4,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
      if ( tutorialArrowMarkList )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)tutorialArrowMarkList,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
        tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
        ++v4;
        if ( tutorialArrowMarkList )
          continue;
      }
      goto LABEL_11;
    }
    v9 = *((_DWORD *)tutorialArrowMarkList + 7) + 1;
    *((_DWORD *)tutorialArrowMarkList + 6) = 0;
    *((_DWORD *)tutorialArrowMarkList + 7) = v9;
    if ( v5 >= 1 )
      System_Array__Clear(*((System_Array_o **)tutorialArrowMarkList + 2), 0, v5, 0);
  }
  tutorialArrowMarkList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialArrowMarkList )
    goto LABEL_11;
  if ( *((int *)tutorialArrowMarkList + 6) < 1 )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
LABEL_11:
    sub_2213CDC(tutorialArrowMarkList, method);
  size = tutorialPeepWindowTextureList->fields._size;
  v15 = tutorialPeepWindowTextureList->fields._version + 1;
  tutorialPeepWindowTextureList->fields._size = 0;
  tutorialPeepWindowTextureList->fields._version = v15;
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
  float m_YMin; // s11
  float m_XMin; // s12
  float y; // s10
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
  if ( (byte_596F3E6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    byte_596F3E6 = 1;
  }
  v15 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v15 )
    sub_2213CDC(0, v16);
  if ( !*(_DWORD *)(v15 + 24) )
    sub_2213CE4(v15);
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_47085648(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v17);
}


void TutorialArrowMenu__Open_47085648(
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
  if ( (byte_596F3EA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Rect___TypeInfo);
    byte_596F3EA = 1;
  }
  v14 = sub_2213B20(UnityEngine_Rect___TypeInfo, 1);
  if ( !v14 )
    sub_2213CDC(0, v15);
  if ( !*(_DWORD *)(v14 + 24) )
    sub_2213CE4(v14);
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_47085996(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


void TutorialArrowMenu__Open_47085832(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_o pos,
        float way,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s10
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_596F3E7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    byte_596F3E7 = 1;
  }
  v12 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 1);
  if ( !v12 )
    sub_2213CDC(0, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_2213CE4(v12);
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_47085996(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void TutorialArrowMenu__Open_47085996(
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

  if ( (byte_596F3E8 & 1) == 0 )
  {
    sub_2213A60(&float___TypeInfo);
    byte_596F3E8 = 1;
  }
  v11 = sub_2213B20(float___TypeInfo, 1);
  if ( !v11 )
    sub_2213CDC(0, v12);
  if ( !*(_DWORD *)(v11 + 24) )
    sub_2213CE4(v11);
  *(float *)(v11 + 32) = way;
  TutorialArrowMenu__Open_47086156(this, posList, (System_Single_array *)v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void TutorialArrowMenu__Open_47086156(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x27
  float *p_m_Width; // x26
  float32x2_t v21; // d9
  Il2CppObject *v22; // x23
  UnityEngine_Component_o *v23; // x24
  float v24; // s2 OVERLAPPED
  unsigned __int64 v25; // d0 OVERLAPPED
  int v26; // s1
  __int64 v27; // x1
  __int64 v28; // x2
  TutorialArrowMenu_c *v29; // x0
  int32_t v30; // w1
  TweenWidth_o *v31; // x25
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_GameObject_o *v39; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v41; // x9
  __int64 klass_low; // x10
  intptr_t v43; // x8
  unsigned __int64 v44; // x20
  float *p_y; // x27
  float *m_Items; // x28
  il2cpp_array_size_t v47; // x8
  il2cpp_array_size_t v48; // x10
  Il2CppObject *v49; // x23
  int v50; // s0 OVERLAPPED
  int v51; // s1
  float *v52; // x8
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  intptr_t v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  intptr_t v62; // x8
  UnityEngine_Object_o *basePanel; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  UnityEngine_Object_o *Component_object; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *v69; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  Il2CppObject *v72; // x22
  UnityEngine_GameObject_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  TutorialArrowMenu_c *v76; // x8
  UnityEngine_GameObject_o *v77; // x20
  __int64 v78; // x1
  __int64 v79; // x2
  TweenAlpha_o *v80; // x20
  __int64 v81; // x2
  UnityEngine_GameObject_o *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int32_t v89; // w1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  const MethodInfo *v96; // x1
  struct UISprite_o *maskSprite; // x20
  float32x2_t v99; // [xsp+10h] [xbp-80h]
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F3E9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TutorialArrowMenu_TypeInfo);
    sub_2213A60(&StringLiteral_6272/*"EndOpenBaseDialog"*/);
    byte_596F3E9 = 1;
  }
  this->fields.callbackFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)func,
    (System_String_o *)ways,
    (System_String_o *)rects,
    (int32_t)func,
    (int32_t)method,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  TutorialArrowMenu__ObjectInitialize(this, v14);
  if ( rects )
  {
    max_length = rects->max_length;
    if ( (int)max_length >= 1 )
    {
      v19 = 0;
      p_m_Width = &rects->m_Items[0].fields.m_Width;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)max_length )
LABEL_89:
          sub_2213CE4(gameObject);
        v21.n64_u64[0] = *(_QWORD *)(p_m_Width - 2);
        v99.n64_u64[0] = *(unsigned __int64 *)p_m_Width;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v17);
        if ( !gameObject )
          break;
        v22 = (Il2CppObject *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v23 = (UnityEngine_Component_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0);
        if ( !gameObject )
          break;
        v24 = 1.0;
        v25 = vadd_f32(v21, vmul_f32(v99, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v26 = HIDWORD(v25);
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)gameObject,
          *(UnityEngine_Vector3_o *)(&v24 - 2),
          0);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v23, 0);
        if ( !gameObject )
          break;
        v100.fields.x = 0.5;
        v100.fields.y = 0.5;
        v100.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v100, 0);
        UIWidget__set_width((UIWidget_o *)v23, 2048, 0);
        UIWidget__set_height((UIWidget_o *)v23, 1152, 0);
        v29 = TutorialArrowMenu_TypeInfo;
        if ( !*(&TutorialArrowMenu_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v27, v28);
          v29 = TutorialArrowMenu_TypeInfo;
        }
        v30 = v99.n64_f32[0] == INFINITY ? 0 : 2 * (int)v99.n64_f32[0];
        v31 = TweenWidth__Begin((UIWidget_o *)v23, v29->static_fields->OPEN_TIME, v30, 0);
        v32 = v99.n64_f32[1] == INFINITY ? 0 : 2 * (int)v99.n64_f32[1];
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin(
                                                   (UIWidget_o *)v23,
                                                   TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME,
                                                   v32,
                                                   0);
        if ( !v31 )
          break;
        v39 = gameObject;
        v31->fields.method = 6;
        if ( !gameObject )
          break;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        LODWORD(v39[1].monitor) = 6;
        if ( !gameObject )
          break;
        m_CachedPtr = gameObject->fields.m_CachedPtr;
        v41 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(gameObject[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(gameObject[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v22,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = m_CachedPtr + 8 * klass_low;
          LODWORD(gameObject[1].klass) = klass_low + 1;
          *(_QWORD *)(v43 + 32) = v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), (int32_t)v22, v33, v34, v35, v36, v37, v38);
        }
        ++v19;
        p_m_Width += 4;
        LODWORD(max_length) = rects->max_length;
        if ( (__int64)v19 >= (int)max_length )
          goto LABEL_28;
      }
LABEL_88:
      sub_2213CDC(gameObject, v13);
    }
  }
LABEL_28:
  if ( posList && SLODWORD(posList->max_length) >= 1 )
  {
    v44 = 0;
    p_y = &posList->m_Items[0].fields.y;
    m_Items = ways->m_Items;
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v17);
      if ( !gameObject )
        goto LABEL_88;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_88;
      v47 = ways->max_length;
      v48 = posList->max_length;
      v49 = (Il2CppObject *)gameObject;
      if ( (int)v47 < 2 || (int)v47 > (int)v48 )
      {
        if ( v44 >= (unsigned int)v48 || !(_DWORD)v47 )
          goto LABEL_89;
        if ( !gameObject )
          goto LABEL_88;
        v50 = *((_DWORD *)p_y - 1);
        v51 = *(_DWORD *)p_y;
        v52 = ways->m_Items;
      }
      else
      {
        if ( v44 >= (unsigned int)v48 || v44 >= (unsigned int)ways->max_length )
          goto LABEL_89;
        if ( !gameObject )
          goto LABEL_88;
        v50 = *((_DWORD *)p_y - 1);
        v51 = *(_DWORD *)p_y;
        v52 = m_Items;
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&v50, *v52, v13);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_88;
      v59 = gameObject->fields.m_CachedPtr;
      v60 = Method_System_Collections_Generic_List_TutorialArrowMark__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v59 )
        goto LABEL_88;
      v61 = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v49,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = v59 + 8 * v61;
        LODWORD(gameObject[1].klass) = v61 + 1;
        *(_QWORD *)(v62 + 32) = v49;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 32), (int32_t)v49, v53, v54, v55, v56, v57, v58);
      }
      ++v44;
      p_y += 2;
      ++m_Items;
    }
    while ( (__int64)v44 < SLODWORD(posList->max_length) );
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0, 0) )
  {
    Component_object = (UnityEngine_Object_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_88;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64, v65);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_88;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
    if ( !gameObject )
      goto LABEL_88;
    v69 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67, v68);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !gameObject )
        goto LABEL_88;
      v72 = UnityEngine_GameObject__GetComponent_object_(
              gameObject,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70, v71);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v72, 0);
    }
    ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_object->klass[1]._1.element_class)(
      Component_object,
      Component_object->klass[1]._1.castClass,
      1.0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !rects )
  {
    if ( !gameObject )
      goto LABEL_88;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
LABEL_87:
    TutorialArrowMenu__EndOpenBaseDialog(this, v96);
    return;
  }
  if ( !gameObject )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_88;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
    gameObject,
    gameObject->klass[1]._1.castClass,
    0.005);
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_88;
  v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  v76 = TutorialArrowMenu_TypeInfo;
  v77 = v73;
  if ( !*(&TutorialArrowMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v74, v75);
    v76 = TutorialArrowMenu_TypeInfo;
  }
  v80 = TweenAlpha__Begin(v77, v76->static_fields->OPEN_TIME, v76->static_fields->MASK_ALPHA, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v78, v79);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v80, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)TutorialArrowMenu_TypeInfo;
    maskSprite = this->fields.maskSprite;
    if ( !*(&TutorialArrowMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v13, v81);
    if ( !maskSprite )
      goto LABEL_88;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))maskSprite->klass->vtable._8_set_alpha.methodPtr)(
      maskSprite,
      maskSprite->klass->vtable._8_set_alpha.method,
      TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA);
    goto LABEL_87;
  }
  if ( !v80 )
    goto LABEL_88;
  v80->fields.method = 6;
  v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v80->fields.eventReceiver = v82;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v80->fields.eventReceiver,
    (int32_t)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = StringLiteral_6272/*"EndOpenBaseDialog"*/;
  v80->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6272/*"EndOpenBaseDialog"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v80->fields.callWhenFinished, v89, v90, v91, v92, v93, v94, v95);
}


bool TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}