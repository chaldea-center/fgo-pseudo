void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  struct TutorialArrowMenu_StaticFields *static_fields; // x8

  if ( (byte_4A59E16 & 1) == 0 )
  {
    sub_1B885B0(&TutorialArrowMenu_TypeInfo);
    byte_4A59E16 = 1;
  }
  static_fields = TutorialArrowMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OPEN_TIME = 0x3DCCCCCD3E99999ALL;
  *(_QWORD *)&static_fields->MASK_ALPHA = 0x53F333333LL;
}


void __fastcall TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A59E15 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
    byte_4A59E15 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tutorialArrowMarkList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tutorialPeepWindowTextureList, (int32_t)v6, v7, v8);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TutorialArrowMenu__Close(
        TutorialArrowMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  TutorialArrowMenu_c *v11; // x8
  TweenAlpha_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A59E14 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TutorialArrowMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_5951/*"EndCloseTutorialArrowMenu"*/);
    byte_4A59E14 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
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
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      v11 = TutorialArrowMenu_TypeInfo;
      if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v11 = TutorialArrowMenu_TypeInfo;
      }
      v12 = TweenAlpha__Begin(v10, v11->static_fields->CLOSE_TIME, 0.0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v12 )
        {
          v12->fields.method = 6;
          v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v12->fields.eventReceiver = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.eventReceiver, (int32_t)v13, v14, v15);
          v16 = StringLiteral_5951/*"EndCloseTutorialArrowMenu"*/;
          v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5951/*"EndCloseTutorialArrowMenu"*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.callWhenFinished, v16, v17, v18);
          return;
        }
LABEL_22:
        sub_1B8880C(gameObject, v9);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5951/*"EndCloseTutorialArrowMenu"*/,
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
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x20
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59E0D & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59E0D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0LL),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0LL),
        !transform) )
  {
    sub_1B8880C(v6, v7);
  }
  v13 = v10;
  v14 = v11;
  v15 = v12;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v17.fields.x = v13;
  v17.fields.y = v14;
  v17.fields.z = v15;
  UnityEngine_Transform__set_localScale(transform, v17, 0LL);
  return v8;
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
    sub_1B88554(p_callbackFunc, 0, v3, v4);
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
    sub_1B88554(p_callbackFunc, 0, v2, v3);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4A59E0E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59E0E = 1;
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
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)tutorialArrowMarkList,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
      System_Array__Clear(*((System_Array_o **)tutorialArrowMarkList + 2), 0, v6, 0LL);
  }
  tutorialArrowMarkList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialArrowMarkList )
    goto LABEL_24;
  if ( *((int *)tutorialArrowMarkList + 6) < 1 )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
LABEL_24:
    sub_1B8880C(tutorialArrowMarkList, method);
  size = tutorialPeepWindowTextureList->fields._size;
  v11 = tutorialPeepWindowTextureList->fields._version + 1;
  tutorialPeepWindowTextureList->fields._size = 0;
  tutorialPeepWindowTextureList->fields._version = v11;
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
  if ( (byte_4A59E0F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Vector2___TypeInfo);
    byte_4A59E0F = 1;
  }
  v15 = sub_1B88658(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v15 )
    sub_1B8880C(0LL, v16);
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1B88814(v15, v15);
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_37337268(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_37337268(
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
  if ( (byte_4A59E13 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Rect___TypeInfo);
    byte_4A59E13 = 1;
  }
  v14 = sub_1B88658(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v14 )
    sub_1B8880C(0LL, v15);
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1B88814(v14, v15);
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_37337616(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_37337452(
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
  if ( (byte_4A59E10 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Vector2___TypeInfo);
    byte_4A59E10 = 1;
  }
  v12 = sub_1B88658(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v12 )
    sub_1B8880C(0LL, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1B88814(v12, v12);
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_37337616(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void __fastcall TutorialArrowMenu__Open_37337616(
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

  if ( (byte_4A59E11 & 1) == 0 )
  {
    sub_1B885B0(&float___TypeInfo);
    byte_4A59E11 = 1;
  }
  v11 = (System_Single_array *)sub_1B88658(float___TypeInfo, 1LL);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  if ( !v11->max_length )
    sub_1B88814(v11, v12);
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_37337776(this, posList, v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_37337776(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x27
  UnityEngine_Rect_o *v16; // x28
  float m_YMin; // s11
  float m_Width; // s12
  float m_XMin; // s9
  float m_Height; // s10
  Il2CppObject *v21; // x23
  UnityEngine_Component_o *v22; // x24
  TutorialArrowMenu_c *v23; // x0
  int32_t v24; // w1
  TweenWidth_o *v25; // x25
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8
  unsigned __int64 v33; // x20
  UnityEngine_Vector2_o *v34; // x25
  float *v35; // x28
  __int64 v36; // x8
  __int64 v37; // x10
  Il2CppObject *v38; // x23
  float y; // s0
  float x; // s1
  float *v41; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
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
  int32_t v58; // w3
  int32_t v59; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *v62; // x1
  struct UISprite_o *maskSprite; // x20
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59E12 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TutorialArrowMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_5983/*"EndOpenBaseDialog"*/);
    byte_4A59E12 = 1;
  }
  this->fields.callbackFunc = func;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)func,
    (int32_t)ways,
    (int32_t)rects);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialArrowMenu__ObjectInitialize(this, v12);
  if ( rects )
  {
    v14 = *(_QWORD *)&rects->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      v16 = &rects->m_Items[1];
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v14 )
LABEL_87:
          sub_1B88814(gameObject, v11);
        m_YMin = v16[-1].fields.m_YMin;
        m_Width = v16[-1].fields.m_Width;
        m_Height = v16[-1].fields.m_Height;
        m_XMin = v16->fields.m_XMin;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v13);
        if ( !gameObject )
          break;
        v21 = (Il2CppObject *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v22 = (UnityEngine_Component_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL);
        if ( !gameObject )
          break;
        v65.fields.y = m_Width + (float)(m_XMin * 0.5);
        v65.fields.x = m_YMin + (float)(m_Height * 0.5);
        v65.fields.z = 1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v65, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v22, 0LL);
        if ( !gameObject )
          break;
        v66.fields.x = 0.5;
        v66.fields.y = 0.5;
        v66.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v66, 0LL);
        UIWidget__set_width((UIWidget_o *)v22, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v22, 1152, 0LL);
        v23 = TutorialArrowMenu_TypeInfo;
        if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
          v23 = TutorialArrowMenu_TypeInfo;
        }
        v24 = m_Height == INFINITY ? 0 : 2 * (int)m_Height;
        v25 = TweenWidth__Begin((UIWidget_o *)v22, v23->static_fields->OPEN_TIME, v24, 0LL);
        v26 = m_XMin == INFINITY ? 0 : 2 * (int)m_XMin;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin(
                                                   (UIWidget_o *)v22,
                                                   TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME,
                                                   v26,
                                                   0LL);
        if ( !v25 )
          break;
        v25->fields.method = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].monitor) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        v29 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
        v30 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(gameObject[1].klass);
        if ( !v29 )
          break;
        klass_low = SLODWORD(gameObject[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v21,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * klass_low;
          LODWORD(gameObject[1].klass) = klass_low + 1;
          *(_QWORD *)(v32 + 32) = v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v21, v27, v28);
        }
        ++v15;
        ++v16;
        LODWORD(v14) = rects->max_length;
        if ( (__int64)v15 >= (int)v14 )
          goto LABEL_28;
      }
LABEL_86:
      sub_1B8880C(gameObject, v11);
    }
  }
LABEL_28:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v33 = 0LL;
    v34 = &posList->m_Items[1];
    v35 = &ways->m_Items[1];
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v13);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v36 = *(_QWORD *)&ways->max_length;
      v37 = *(_QWORD *)&posList->max_length;
      v38 = (Il2CppObject *)gameObject;
      if ( (int)v36 < 2 || (int)v36 > (int)v37 )
      {
        if ( v33 >= (unsigned int)v37 || !(_DWORD)v36 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v34[-1].fields.y;
        x = v34->fields.x;
        v41 = &ways->m_Items[1];
      }
      else
      {
        if ( v33 >= (unsigned int)v37 || v33 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v34[-1].fields.y;
        x = v34->fields.x;
        v41 = v35;
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&y, *v41, v11);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      v44 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
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
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = v44 + 8 * v46;
        LODWORD(gameObject[1].klass) = v46 + 1;
        *(_QWORD *)(v47 + 32) = v38;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v38, v42, v43);
      }
      ++v33;
      ++v34;
      ++v35;
    }
    while ( (__int64)v33 < (int)posList->max_length );
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
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    v50 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !gameObject )
        goto LABEL_86;
      v51 = UnityEngine_GameObject__GetComponent_object_(
              gameObject,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v51, 0LL);
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
    TutorialArrowMenu__EndOpenBaseDialog(this, v62);
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
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  v53 = TutorialArrowMenu_TypeInfo;
  v54 = v52;
  if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v53 = TutorialArrowMenu_TypeInfo;
  }
  v55 = TweenAlpha__Begin(v54, v53->static_fields->OPEN_TIME, v53->static_fields->MASK_ALPHA, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0LL, 0LL);
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
  if ( !v55 )
    goto LABEL_86;
  v55->fields.method = 6;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v55->fields.eventReceiver = v56;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v55->fields.eventReceiver, (int32_t)v56, v57, v58);
  v59 = StringLiteral_5983/*"EndOpenBaseDialog"*/;
  v55->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5983/*"EndOpenBaseDialog"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v55->fields.callWhenFinished, v59, v60, v61);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}