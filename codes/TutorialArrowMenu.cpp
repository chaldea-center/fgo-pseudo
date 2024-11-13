void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct TutorialArrowMenu_StaticFields *static_fields; // x8

  if ( (byte_4B14E6C & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialArrowMenu_TypeInfo, v1, v2);
    byte_4B14E6C = 1;
  }
  static_fields = TutorialArrowMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OPEN_TIME = 0x3DCCCCCD3E99999ALL;
  *(_QWORD *)&static_fields->MASK_ALPHA = 0x53F333333LL;
}


void __fastcall TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B14E6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo, v9, v10);
    byte_4B14E6B = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_TutorialArrowMark__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tutorialArrowMarkList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tutorialPeepWindowTextureList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TutorialArrowMenu__Close(
        TutorialArrowMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  UnityEngine_Object_o *basePanel; // x20
  __int64 v18; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  TutorialArrowMenu_c *v24; // x8
  __int64 v25; // x1
  TweenAlpha_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B14E6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, callback, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TutorialArrowMenu_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_6065/*"EndCloseTutorialArrowMenu"*/, v14, v15);
    byte_4B14E6A = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
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
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      v24 = TutorialArrowMenu_TypeInfo;
      if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v22);
        v24 = TutorialArrowMenu_TypeInfo;
      }
      v26 = TweenAlpha__Begin(v23, v24->static_fields->CLOSE_TIME, 0.0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v26 )
        {
          v26->fields.method = 6;
          v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v26->fields.eventReceiver = v27;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v26->fields.eventReceiver,
            (int64_t)v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          v34 = StringLiteral_6065/*"EndCloseTutorialArrowMenu"*/;
          v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6065/*"EndCloseTutorialArrowMenu"*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.callWhenFinished, v34, v35, v36, v37, v38, v39, v40);
          return;
        }
LABEL_22:
        sub_1BCAA3C(gameObject, v21);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6065/*"EndCloseTutorialArrowMenu"*/,
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
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *transform; // x20
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14E63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab, parentObject);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B14E63 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8
    || (v10 = v8,
        transform = UnityEngine_GameObject__get_transform(v8, 0LL),
        (v8 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v8, 0LL),
        !transform) )
  {
    sub_1BCAA3C(v8, v9);
  }
  v15 = v12;
  v16 = v13;
  v17 = v14;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v19);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v20, v21);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v23.fields.x = v15;
  v23.fields.y = v16;
  v23.fields.z = v17;
  UnityEngine_Transform__set_localScale(transform, v23, 0LL);
  return v10;
}


void __fastcall TutorialArrowMenu__EndCloseTutorialArrowMenu(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *callbackFunc; // t1

  TutorialArrowMenu__Init(this, method);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall TutorialArrowMenu__EndOpenBaseDialog(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall TutorialArrowMenu__Init(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  TutorialArrowMenu__ObjectInitialize(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  void *tutorialArrowMarkList; // x0
  int32_t v23; // w20
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v26; // w2
  int v27; // w8
  __int64 v28; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *tutorialPeepWindowTextureList; // x8
  int32_t size; // w2
  int v32; // w9
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14E64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B14E64 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
  if ( !tutorialArrowMarkList )
    goto LABEL_24;
  if ( *((int *)tutorialArrowMarkList + 6) >= 1 )
  {
    v23 = 0;
    do
    {
      tutorialArrowMarkList = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
                                v23,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)tutorialArrowMarkList,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      v26 = *((_DWORD *)tutorialArrowMarkList + 6);
      ++v23;
    }
    while ( v23 < v26 );
    v27 = *((_DWORD *)tutorialArrowMarkList + 7) + 1;
    *((_DWORD *)tutorialArrowMarkList + 6) = 0;
    *((_DWORD *)tutorialArrowMarkList + 7) = v27;
    if ( v26 >= 1 )
      System_Array__Clear(*((System_Array_o **)tutorialArrowMarkList + 2), 0, v26, 0LL);
  }
  tutorialArrowMarkList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialArrowMarkList )
    goto LABEL_24;
  if ( *((int *)tutorialArrowMarkList + 6) < 1 )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)tutorialArrowMarkList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v33.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
LABEL_24:
    sub_1BCAA3C(tutorialArrowMarkList, method);
  size = tutorialPeepWindowTextureList->fields._size;
  v32 = tutorialPeepWindowTextureList->fields._version + 1;
  tutorialPeepWindowTextureList->fields._size = 0;
  tutorialPeepWindowTextureList->fields._version = v32;
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
  if ( (byte_4B14E65 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Vector2___TypeInfo, func, method);
    byte_4B14E65 = 1;
  }
  v15 = sub_1BCA888(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1BCAA44(v15, v15);
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_38049028(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_38049028(
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
  if ( (byte_4B14E69 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Rect___TypeInfo, posList, func);
    byte_4B14E69 = 1;
  }
  v14 = sub_1BCA888(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v14 )
    sub_1BCAA3C(0LL, v15);
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1BCAA44(v14, v15);
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_38049376(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_38049212(
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
  if ( (byte_4B14E66 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Vector2___TypeInfo, rects, func);
    byte_4B14E66 = 1;
  }
  v12 = sub_1BCA888(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v12 )
    sub_1BCAA3C(0LL, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1BCAA44(v12, v12);
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_38049376(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void __fastcall TutorialArrowMenu__Open_38049376(
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

  if ( (byte_4B14E67 & 1) == 0 )
  {
    sub_1BCA7E0(&float___TypeInfo, posList, rects);
    byte_4B14E67 = 1;
  }
  v11 = (System_Single_array *)sub_1BCA888(float___TypeInfo, 1LL);
  if ( !v11 )
    sub_1BCAA3C(0LL, v12);
  if ( !v11->max_length )
    sub_1BCAA44(v11, v12);
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_38049536(this, posList, v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_38049536(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  unsigned __int64 v33; // x27
  UnityEngine_Rect_o *v34; // x28
  float m_YMin; // s11
  float m_Width; // s12
  float m_XMin; // s9
  float m_Height; // s10
  Il2CppObject *v39; // x23
  UnityEngine_Component_o *v40; // x24
  __int64 v41; // x1
  TutorialArrowMenu_c *v42; // x0
  int32_t v43; // w1
  TweenWidth_o *v44; // x25
  int32_t v45; // w1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 klass_low; // x10
  __int64 v55; // x8
  unsigned __int64 v56; // x20
  UnityEngine_Vector2_o *v57; // x25
  float *v58; // x28
  __int64 v59; // x8
  __int64 v60; // x10
  Il2CppObject *v61; // x23
  float y; // s0
  float x; // s1
  float *v64; // x8
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  UnityEngine_Object_o *basePanel; // x21
  __int64 v76; // x1
  UnityEngine_Object_o *Component_object; // x21
  __int64 v78; // x1
  Il2CppObject *v79; // x22
  __int64 v80; // x1
  Il2CppObject *v81; // x22
  UnityEngine_GameObject_o *v82; // x0
  __int64 v83; // x1
  TutorialArrowMenu_c *v84; // x8
  UnityEngine_GameObject_o *v85; // x20
  __int64 v86; // x1
  TweenAlpha_o *v87; // x20
  UnityEngine_GameObject_o *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  const MethodInfo *v102; // x1
  struct UISprite_o *maskSprite; // x20
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14E68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___, posList, ways);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&TutorialArrowMenu_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_6097/*"EndOpenBaseDialog"*/, v26, v27);
    byte_4B14E68 = 1;
  }
  this->fields.callbackFunc = func;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)func,
    (int64_t)ways,
    (int32_t)rects,
    (System_String_o *)func,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialArrowMenu__ObjectInitialize(this, v30);
  if ( rects )
  {
    v32 = *(_QWORD *)&rects->max_length;
    if ( (int)v32 >= 1 )
    {
      v33 = 0LL;
      v34 = &rects->m_Items[1];
      while ( 1 )
      {
        if ( v33 >= (unsigned int)v32 )
LABEL_87:
          sub_1BCAA44(gameObject, v29);
        m_YMin = v34[-1].fields.m_YMin;
        m_Width = v34[-1].fields.m_Width;
        m_Height = v34[-1].fields.m_Height;
        m_XMin = v34->fields.m_XMin;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v31);
        if ( !gameObject )
          break;
        v39 = (Il2CppObject *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v40 = (UnityEngine_Component_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL);
        if ( !gameObject )
          break;
        v105.fields.y = m_Width + (float)(m_XMin * 0.5);
        v105.fields.x = m_YMin + (float)(m_Height * 0.5);
        v105.fields.z = 1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v105, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v40, 0LL);
        if ( !gameObject )
          break;
        v106.fields.x = 0.5;
        v106.fields.y = 0.5;
        v106.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v106, 0LL);
        UIWidget__set_width((UIWidget_o *)v40, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v40, 1152, 0LL);
        v42 = TutorialArrowMenu_TypeInfo;
        if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v41);
          v42 = TutorialArrowMenu_TypeInfo;
        }
        v43 = m_Height == INFINITY ? 0 : 2 * (int)m_Height;
        v44 = TweenWidth__Begin((UIWidget_o *)v40, v42->static_fields->OPEN_TIME, v43, 0LL);
        v45 = m_XMin == INFINITY ? 0 : 2 * (int)m_XMin;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin(
                                                   (UIWidget_o *)v40,
                                                   TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME,
                                                   v45,
                                                   0LL);
        if ( !v44 )
          break;
        v44->fields.method = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].monitor) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        v52 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
        v53 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(gameObject[1].klass);
        if ( !v52 )
          break;
        klass_low = SLODWORD(gameObject[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v52 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v39,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = v52 + 8 * klass_low;
          LODWORD(gameObject[1].klass) = klass_low + 1;
          *(_QWORD *)(v55 + 32) = v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)v39, v46, v47, v48, v49, v50, v51);
        }
        ++v33;
        ++v34;
        LODWORD(v32) = rects->max_length;
        if ( (__int64)v33 >= (int)v32 )
          goto LABEL_28;
      }
LABEL_86:
      sub_1BCAA3C(gameObject, v29);
    }
  }
LABEL_28:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v56 = 0LL;
    v57 = &posList->m_Items[1];
    v58 = &ways->m_Items[1];
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v31);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v59 = *(_QWORD *)&ways->max_length;
      v60 = *(_QWORD *)&posList->max_length;
      v61 = (Il2CppObject *)gameObject;
      if ( (int)v59 < 2 || (int)v59 > (int)v60 )
      {
        if ( v56 >= (unsigned int)v60 || !(_DWORD)v59 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v57[-1].fields.y;
        x = v57->fields.x;
        v64 = &ways->m_Items[1];
      }
      else
      {
        if ( v56 >= (unsigned int)v60 || v56 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v57[-1].fields.y;
        x = v57->fields.x;
        v64 = v58;
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&y, *v64, v29);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      v71 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v72 = Method_System_Collections_Generic_List_TutorialArrowMark__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v71 )
        goto LABEL_86;
      v73 = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v61,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = v71 + 8 * v73;
        LODWORD(gameObject[1].klass) = v73 + 1;
        *(_QWORD *)(v74 + 32) = v61;
        sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 32), (int64_t)v61, v65, v66, v67, v68, v69, v70);
      }
      ++v56;
      ++v57;
      ++v58;
    }
    while ( (__int64)v56 < (int)posList->max_length );
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
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
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
    if ( !gameObject )
      goto LABEL_86;
    v79 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v78);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v79, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !gameObject )
        goto LABEL_86;
      v81 = UnityEngine_GameObject__GetComponent_object_(
              gameObject,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v81, 0LL);
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
    TutorialArrowMenu__EndOpenBaseDialog(this, v102);
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
  v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  v84 = TutorialArrowMenu_TypeInfo;
  v85 = v82;
  if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v83);
    v84 = TutorialArrowMenu_TypeInfo;
  }
  v87 = TweenAlpha__Begin(v85, v84->static_fields->OPEN_TIME, v84->static_fields->MASK_ALPHA, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v87, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)TutorialArrowMenu_TypeInfo;
    maskSprite = this->fields.maskSprite;
    if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo, v29);
    if ( !maskSprite )
      goto LABEL_86;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
      maskSprite,
      maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA);
    goto LABEL_85;
  }
  if ( !v87 )
    goto LABEL_86;
  v87->fields.method = 6;
  v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v87->fields.eventReceiver = v88;
  sub_1BCA784((PartyOrganizationUtility_o *)&v87->fields.eventReceiver, (int64_t)v88, v89, v90, v91, v92, v93, v94);
  v95 = StringLiteral_6097/*"EndOpenBaseDialog"*/;
  v87->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6097/*"EndOpenBaseDialog"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v87->fields.callWhenFinished, v95, v96, v97, v98, v99, v100, v101);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}