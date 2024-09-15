void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TutorialArrowMenu_StaticFields *static_fields; // x8

  if ( (byte_4A2CBFD & 1) == 0 )
  {
    sub_1B761C0(&TutorialArrowMenu_TypeInfo, v1);
    byte_4A2CBFD = 1;
  }
  static_fields = TutorialArrowMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OPEN_TIME = 0x3DCCCCCD3E99999ALL;
  *(_QWORD *)&static_fields->MASK_ALPHA = 0x53F333333LL;
}


void __fastcall TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A2CBFC & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_1B761C0(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo, v5);
    byte_4A2CBFC = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v6;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.tutorialArrowMarkList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.tutorialPeepWindowTextureList, (int32_t)v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TutorialArrowMenu__Close(
        TutorialArrowMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  TutorialArrowMenu_c *v14; // x8
  TweenAlpha_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A2CBFB & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, callback);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v6);
    sub_1B761C0(&TutorialArrowMenu_TypeInfo, v7);
    sub_1B761C0(&StringLiteral_5950/*"EndCloseTutorialArrowMenu"*/, v8);
    byte_4A2CBFB = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Object_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_22;
    if ( (*(float (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&Component_object->klass[1]._1.this_arg.bits)(
           Component_object,
           Component_object->klass[1]._1.element_class) != 0.0 )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_object->klass[1]._1.castClass)(
        Component_object,
        Component_object->klass[1]._1.declaringType,
        1.0);
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      v14 = TutorialArrowMenu_TypeInfo;
      if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v14 = TutorialArrowMenu_TypeInfo;
      }
      v15 = TweenAlpha__Begin(v13, v14->static_fields->CLOSE_TIME, 0.0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v15 )
        {
          v15->fields.method = 6;
          v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v15->fields.eventReceiver = v16;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&v15->fields.eventReceiver, (int32_t)v16, v17, v18);
          v19 = StringLiteral_5950/*"EndCloseTutorialArrowMenu"*/;
          v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5950/*"EndCloseTutorialArrowMenu"*/;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&v15->fields.callWhenFinished, v19, v20, v21);
          return;
        }
LABEL_22:
        sub_1B7641C(gameObject, v12);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5950/*"EndCloseTutorialArrowMenu"*/,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall TutorialArrowMenu__CreatePrefab(
        TutorialArrowMenu_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parentObject,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *transform; // x20
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2CBF4 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v6);
    byte_4A2CBF4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7
    || (v9 = v7,
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        (v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v7, 0LL),
        !transform) )
  {
    sub_1B7641C(v7, v8);
  }
  v14 = v11;
  v15 = v12;
  v16 = v13;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4A28BB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A28BB7 )
  {
    sub_1B761C0(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_4A28BB7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v20.fields.x = v14;
  v20.fields.y = v15;
  v20.fields.z = v16;
  UnityEngine_Transform__set_localScale(transform, v20, 0LL);
  return v9;
}


void __fastcall TutorialArrowMenu__EndCloseTutorialArrowMenu(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *callbackFunc; // t1

  TutorialArrowMenu__Init(this, method);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B76164(p_callbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall TutorialArrowMenu__EndOpenBaseDialog(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B76164(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall TutorialArrowMenu__Init(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  TutorialArrowMenu__ObjectInitialize(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *tutorialArrowMarkList; // x0
  int32_t v13; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v15; // w2
  int v16; // w8
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *tutorialPeepWindowTextureList; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A2CBF5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__, v10);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v11);
    byte_4A2CBF5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
  if ( !tutorialArrowMarkList )
    goto LABEL_24;
  if ( *((int *)tutorialArrowMarkList + 6) >= 1 )
  {
    v13 = 0;
    do
    {
      tutorialArrowMarkList = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
                                v13,
                                (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)tutorialArrowMarkList,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
      tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      v15 = *((_DWORD *)tutorialArrowMarkList + 6);
      ++v13;
    }
    while ( v13 < v15 );
    v16 = *((_DWORD *)tutorialArrowMarkList + 7) + 1;
    *((_DWORD *)tutorialArrowMarkList + 6) = 0;
    *((_DWORD *)tutorialArrowMarkList + 7) = v16;
    if ( v15 >= 1 )
      System_Array__Clear(*((System_Array_o **)tutorialArrowMarkList + 2), 0, v15, 0LL);
  }
  tutorialArrowMarkList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialArrowMarkList )
    goto LABEL_24;
  if ( *((int *)tutorialArrowMarkList + 6) < 1 )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69287408((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
LABEL_24:
    sub_1B7641C(tutorialArrowMarkList, method);
  size = tutorialPeepWindowTextureList->fields._size;
  v20 = tutorialPeepWindowTextureList->fields._version + 1;
  tutorialPeepWindowTextureList->fields._size = 0;
  tutorialPeepWindowTextureList->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tutorialPeepWindowTextureList->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open(
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
  if ( (byte_4A2CBF6 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Vector2___TypeInfo, func);
    byte_4A2CBF6 = 1;
  }
  v15 = sub_1B76268(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v15 )
    sub_1B7641C(0LL, v16);
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1B76424(v15, v15);
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_37159980(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_37159980(
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
  if ( (byte_4A2CBFA & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Rect___TypeInfo, posList);
    byte_4A2CBFA = 1;
  }
  v14 = sub_1B76268(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v14 )
    sub_1B7641C(0LL, v15);
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1B76424(v14, v15);
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_37160328(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_37160164(
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
  if ( (byte_4A2CBF7 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Vector2___TypeInfo, rects);
    byte_4A2CBF7 = 1;
  }
  v12 = sub_1B76268(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v12 )
    sub_1B7641C(0LL, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1B76424(v12, v12);
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_37160328(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void __fastcall TutorialArrowMenu__Open_37160328(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        float way,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_Single_array *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4A2CBF8 & 1) == 0 )
  {
    sub_1B761C0(&float___TypeInfo, posList);
    byte_4A2CBF8 = 1;
  }
  v11 = (System_Single_array *)sub_1B76268(float___TypeInfo, 1LL);
  if ( !v11 )
    sub_1B7641C(0LL, v12);
  if ( !v11->max_length )
    sub_1B76424(v11, v12);
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_37160488(this, posList, v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_37160488(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x27
  UnityEngine_Rect_o *v24; // x28
  float m_YMin; // s11
  float m_Width; // s12
  float m_XMin; // s9
  float m_Height; // s10
  Il2CppObject *v29; // x23
  UnityEngine_Component_o *v30; // x24
  TutorialArrowMenu_c *v31; // x0
  int32_t v32; // w1
  TweenWidth_o *v33; // x25
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 klass_low; // x10
  __int64 v40; // x8
  unsigned __int64 v41; // x20
  UnityEngine_Vector2_o *v42; // x25
  float *v43; // x28
  __int64 v44; // x8
  __int64 v45; // x10
  Il2CppObject *v46; // x23
  float y; // s0
  float x; // s1
  float *v49; // x8
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Object_o *Component_object; // x21
  Il2CppObject *v58; // x22
  Il2CppObject *v59; // x22
  UnityEngine_GameObject_o *v60; // x0
  TutorialArrowMenu_c *v61; // x8
  UnityEngine_GameObject_o *v62; // x20
  TweenAlpha_o *v63; // x20
  UnityEngine_GameObject_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  const MethodInfo *v70; // x1
  struct UISprite_o *maskSprite; // x20
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2CBF9 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___, posList);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v10);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v11);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Add__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__, v14);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v15);
    sub_1B761C0(&TutorialArrowMenu_TypeInfo, v16);
    sub_1B761C0(&StringLiteral_5982/*"EndOpenBaseDialog"*/, v17);
    byte_4A2CBF9 = 1;
  }
  this->fields.callbackFunc = func;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)func,
    (int32_t)ways,
    (int32_t)rects);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialArrowMenu__ObjectInitialize(this, v20);
  if ( rects )
  {
    v22 = *(_QWORD *)&rects->max_length;
    if ( (int)v22 >= 1 )
    {
      v23 = 0LL;
      v24 = &rects->m_Items[1];
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v22 )
LABEL_87:
          sub_1B76424(gameObject, v19);
        m_YMin = v24[-1].fields.m_YMin;
        m_Width = v24[-1].fields.m_Width;
        m_Height = v24[-1].fields.m_Height;
        m_XMin = v24->fields.m_XMin;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v21);
        if ( !gameObject )
          break;
        v29 = (Il2CppObject *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v30 = (UnityEngine_Component_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL);
        if ( !gameObject )
          break;
        v73.fields.y = m_Width + (float)(m_XMin * 0.5);
        v73.fields.x = m_YMin + (float)(m_Height * 0.5);
        v73.fields.z = 1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v73, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v30, 0LL);
        if ( !gameObject )
          break;
        v74.fields.x = 0.5;
        v74.fields.y = 0.5;
        v74.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v74, 0LL);
        UIWidget__set_width((UIWidget_o *)v30, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v30, 1152, 0LL);
        v31 = TutorialArrowMenu_TypeInfo;
        if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
          v31 = TutorialArrowMenu_TypeInfo;
        }
        v32 = m_Height == INFINITY ? 0 : 2 * (int)m_Height;
        v33 = TweenWidth__Begin((UIWidget_o *)v30, v31->static_fields->OPEN_TIME, v32, 0LL);
        v34 = m_XMin == INFINITY ? 0 : 2 * (int)m_XMin;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin(
                                                   (UIWidget_o *)v30,
                                                   TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME,
                                                   v34,
                                                   0LL);
        if ( !v33 )
          break;
        v33->fields.method = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].monitor) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        v37 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
        v38 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(gameObject[1].klass);
        if ( !v37 )
          break;
        klass_low = SLODWORD(gameObject[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v37 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v29,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = v37 + 8 * klass_low;
          LODWORD(gameObject[1].klass) = klass_low + 1;
          *(_QWORD *)(v40 + 32) = v29;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)v29, v35, v36);
        }
        ++v23;
        ++v24;
        LODWORD(v22) = rects->max_length;
        if ( (__int64)v23 >= (int)v22 )
          goto LABEL_28;
      }
LABEL_86:
      sub_1B7641C(gameObject, v19);
    }
  }
LABEL_28:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v41 = 0LL;
    v42 = &posList->m_Items[1];
    v43 = &ways->m_Items[1];
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v21);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v44 = *(_QWORD *)&ways->max_length;
      v45 = *(_QWORD *)&posList->max_length;
      v46 = (Il2CppObject *)gameObject;
      if ( (int)v44 < 2 || (int)v44 > (int)v45 )
      {
        if ( v41 >= (unsigned int)v45 || !(_DWORD)v44 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v42[-1].fields.y;
        x = v42->fields.x;
        v49 = &ways->m_Items[1];
      }
      else
      {
        if ( v41 >= (unsigned int)v45 || v41 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v42[-1].fields.y;
        x = v42->fields.x;
        v49 = v43;
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&y, *v49, v19);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      v52 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v53 = Method_System_Collections_Generic_List_TutorialArrowMark__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v52 )
        goto LABEL_86;
      v54 = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v46,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = v52 + 8 * v54;
        LODWORD(gameObject[1].klass) = v54 + 1;
        *(_QWORD *)(v55 + 32) = v46;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)v46, v50, v51);
      }
      ++v41;
      ++v42;
      ++v43;
    }
    while ( (__int64)v41 < (int)posList->max_length );
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Object_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_86;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !gameObject )
      goto LABEL_86;
    v58 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v58, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !gameObject )
        goto LABEL_86;
      v59 = UnityEngine_GameObject__GetComponent_object_(
              gameObject,
              (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408((UnityEngine_Object_o *)v59, 0LL);
    }
    ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_object->klass[1]._1.castClass)(
      Component_object,
      Component_object->klass[1]._1.declaringType,
      1.0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_86;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_86;
  if ( !rects )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
LABEL_85:
    TutorialArrowMenu__EndOpenBaseDialog(this, v70);
    return;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_86;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_86;
  v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  v61 = TutorialArrowMenu_TypeInfo;
  v62 = v60;
  if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v61 = TutorialArrowMenu_TypeInfo;
  }
  v63 = TweenAlpha__Begin(v62, v61->static_fields->OPEN_TIME, v61->static_fields->MASK_ALPHA, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)TutorialArrowMenu_TypeInfo;
    maskSprite = this->fields.maskSprite;
    if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    if ( !maskSprite )
      goto LABEL_86;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
      maskSprite,
      maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA);
    goto LABEL_85;
  }
  if ( !v63 )
    goto LABEL_86;
  v63->fields.method = 6;
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v63->fields.eventReceiver = v64;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v63->fields.eventReceiver, (int32_t)v64, v65, v66);
  v67 = StringLiteral_5982/*"EndOpenBaseDialog"*/;
  v63->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5982/*"EndOpenBaseDialog"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v63->fields.callWhenFinished, v67, v68, v69);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}