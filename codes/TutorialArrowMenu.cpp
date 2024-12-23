void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TutorialArrowMenu_StaticFields *static_fields; // x8

  if ( (byte_4B65813 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialArrowMenu_TypeInfo, v1);
    byte_4B65813 = 1;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B65812 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo, v5);
    byte_4B65812 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.tutorialArrowMarkList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.tutorialPeepWindowTextureList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x20
  TutorialArrowMenu_c *v18; // x8
  TweenAlpha_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B65811 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, callback);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&TutorialArrowMenu_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_6078/*"EndCloseTutorialArrowMenu"*/, v12);
    byte_4B65811 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
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
                                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      v18 = TutorialArrowMenu_TypeInfo;
      if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v18 = TutorialArrowMenu_TypeInfo;
      }
      v19 = TweenAlpha__Begin(v17, v18->static_fields->CLOSE_TIME, 0.0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v19 )
        {
          v19->fields.method = 6;
          v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v19->fields.eventReceiver = v20;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v19->fields.eventReceiver,
            (int64_t)v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          v27 = StringLiteral_6078/*"EndCloseTutorialArrowMenu"*/;
          v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6078/*"EndCloseTutorialArrowMenu"*/;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v19->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
          return;
        }
LABEL_22:
        sub_1BE4D28(gameObject, v16);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6078/*"EndCloseTutorialArrowMenu"*/,
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

  if ( (byte_4B6580A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    byte_4B6580A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                     (Il2CppObject *)prefab,
                                     (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7
    || (v9 = v7,
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        (v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v7, 0LL),
        !transform) )
  {
    sub_1BE4D28(v7, v8);
  }
  v14 = v11;
  v15 = v12;
  v16 = v13;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4B612E1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B612E7 )
  {
    sub_1BE4ACC(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_4B612E7 = 1;
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
    sub_1BE4A70(p_callbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_1BE4A70(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1BE4D28(0LL, v4);
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

  if ( (byte_4B6580B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    byte_4B6580B = 1;
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
                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
      if ( !tutorialArrowMarkList )
        goto LABEL_24;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)tutorialArrowMarkList,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
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
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
LABEL_24:
    sub_1BE4D28(tutorialArrowMarkList, method);
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
  if ( (byte_4B6580C & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Vector2___TypeInfo, func);
    byte_4B6580C = 1;
  }
  v15 = sub_1BE4B74(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v15 )
    sub_1BE4D28(0LL, v16);
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1BE4D30(v15, v15);
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_38233708(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_38233708(
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
  if ( (byte_4B65810 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Rect___TypeInfo, posList);
    byte_4B65810 = 1;
  }
  v14 = sub_1BE4B74(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v14 )
    sub_1BE4D28(0LL, v15);
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1BE4D30(v14, v15);
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_38234056(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_38233892(
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
  if ( (byte_4B6580D & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Vector2___TypeInfo, rects);
    byte_4B6580D = 1;
  }
  v12 = sub_1BE4B74(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v12 )
    sub_1BE4D28(0LL, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1BE4D30(v12, v12);
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_38234056(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void __fastcall TutorialArrowMenu__Open_38234056(
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

  if ( (byte_4B6580E & 1) == 0 )
  {
    sub_1BE4ACC(&float___TypeInfo, posList);
    byte_4B6580E = 1;
  }
  v11 = (System_Single_array *)sub_1BE4B74(float___TypeInfo, 1LL);
  if ( !v11 )
    sub_1BE4D28(0LL, v12);
  if ( !v11->max_length )
    sub_1BE4D30(v11, v12);
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_38234216(this, posList, v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_38234216(
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  unsigned __int64 v25; // x27
  UnityEngine_Rect_o *v26; // x28
  float m_YMin; // s11
  float m_Width; // s12
  float m_XMin; // s9
  float m_Height; // s10
  Il2CppObject *v31; // x23
  UnityEngine_Component_o *v32; // x24
  TutorialArrowMenu_c *v33; // x0
  int32_t v34; // w1
  TweenWidth_o *v35; // x25
  int32_t v36; // w1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 klass_low; // x10
  __int64 v46; // x8
  unsigned __int64 v47; // x20
  UnityEngine_Vector2_o *v48; // x25
  float *v49; // x28
  __int64 v50; // x8
  __int64 v51; // x10
  Il2CppObject *v52; // x23
  float y; // s0
  float x; // s1
  float *v55; // x8
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Object_o *Component_object; // x21
  Il2CppObject *v68; // x22
  Il2CppObject *v69; // x22
  UnityEngine_GameObject_o *v70; // x0
  TutorialArrowMenu_c *v71; // x8
  UnityEngine_GameObject_o *v72; // x20
  TweenAlpha_o *v73; // x20
  UnityEngine_GameObject_o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  const MethodInfo *v88; // x1
  struct UISprite_o *maskSprite; // x20
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6580F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___, posList);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v13);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__, v16);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v17);
    sub_1BE4ACC(&TutorialArrowMenu_TypeInfo, v18);
    sub_1BE4ACC(&StringLiteral_6110/*"EndOpenBaseDialog"*/, v19);
    byte_4B6580F = 1;
  }
  this->fields.callbackFunc = func;
  sub_1BE4A70(
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
  TutorialArrowMenu__ObjectInitialize(this, v22);
  if ( rects )
  {
    v24 = *(_QWORD *)&rects->max_length;
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      v26 = &rects->m_Items[1];
      while ( 1 )
      {
        if ( v25 >= (unsigned int)v24 )
LABEL_87:
          sub_1BE4D30(gameObject, v21);
        m_YMin = v26[-1].fields.m_YMin;
        m_Width = v26[-1].fields.m_Width;
        m_Height = v26[-1].fields.m_Height;
        m_XMin = v26->fields.m_XMin;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v23);
        if ( !gameObject )
          break;
        v31 = (Il2CppObject *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v32 = (UnityEngine_Component_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL);
        if ( !gameObject )
          break;
        v91.fields.y = m_Width + (float)(m_XMin * 0.5);
        v91.fields.x = m_YMin + (float)(m_Height * 0.5);
        v91.fields.z = 1.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v91, 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v32, 0LL);
        if ( !gameObject )
          break;
        v92.fields.x = 0.5;
        v92.fields.y = 0.5;
        v92.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v92, 0LL);
        UIWidget__set_width((UIWidget_o *)v32, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v32, 1152, 0LL);
        v33 = TutorialArrowMenu_TypeInfo;
        if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
          v33 = TutorialArrowMenu_TypeInfo;
        }
        v34 = m_Height == INFINITY ? 0 : 2 * (int)m_Height;
        v35 = TweenWidth__Begin((UIWidget_o *)v32, v33->static_fields->OPEN_TIME, v34, 0LL);
        v36 = m_XMin == INFINITY ? 0 : 2 * (int)m_XMin;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin(
                                                   (UIWidget_o *)v32,
                                                   TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME,
                                                   v36,
                                                   0LL);
        if ( !v35 )
          break;
        v35->fields.method = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].monitor) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        v43 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
        v44 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(gameObject[1].klass);
        if ( !v43 )
          break;
        klass_low = SLODWORD(gameObject[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v43 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v31,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = v43 + 8 * klass_low;
          LODWORD(gameObject[1].klass) = klass_low + 1;
          *(_QWORD *)(v46 + 32) = v31;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)v31, v37, v38, v39, v40, v41, v42);
        }
        ++v25;
        ++v26;
        LODWORD(v24) = rects->max_length;
        if ( (__int64)v25 >= (int)v24 )
          goto LABEL_28;
      }
LABEL_86:
      sub_1BE4D28(gameObject, v21);
    }
  }
LABEL_28:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v47 = 0LL;
    v48 = &posList->m_Items[1];
    v49 = &ways->m_Items[1];
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v23);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 gameObject,
                                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v50 = *(_QWORD *)&ways->max_length;
      v51 = *(_QWORD *)&posList->max_length;
      v52 = (Il2CppObject *)gameObject;
      if ( (int)v50 < 2 || (int)v50 > (int)v51 )
      {
        if ( v47 >= (unsigned int)v51 || !(_DWORD)v50 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v48[-1].fields.y;
        x = v48->fields.x;
        v55 = &ways->m_Items[1];
      }
      else
      {
        if ( v47 >= (unsigned int)v51 || v47 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        y = v48[-1].fields.y;
        x = v48->fields.x;
        v55 = v49;
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&y, *v55, v21);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      v62 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v63 = Method_System_Collections_Generic_List_TutorialArrowMark__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v62 )
        goto LABEL_86;
      v64 = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v52,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = v62 + 8 * v64;
        LODWORD(gameObject[1].klass) = v64 + 1;
        *(_QWORD *)(v65 + 32) = v52;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v65 + 32), (int64_t)v52, v56, v57, v58, v59, v60, v61);
      }
      ++v47;
      ++v48;
      ++v49;
    }
    while ( (__int64)v47 < (int)posList->max_length );
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
                                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    v68 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v68, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !gameObject )
        goto LABEL_86;
      v69 = UnityEngine_GameObject__GetComponent_object_(
              gameObject,
              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)v69, 0LL);
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
    TutorialArrowMenu__EndOpenBaseDialog(this, v88);
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
  v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  v71 = TutorialArrowMenu_TypeInfo;
  v72 = v70;
  if ( !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v71 = TutorialArrowMenu_TypeInfo;
  }
  v73 = TweenAlpha__Begin(v72, v71->static_fields->OPEN_TIME, v71->static_fields->MASK_ALPHA, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v73, 0LL, 0LL);
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
  if ( !v73 )
    goto LABEL_86;
  v73->fields.method = 6;
  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v73->fields.eventReceiver = v74;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v73->fields.eventReceiver, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  v81 = StringLiteral_6110/*"EndOpenBaseDialog"*/;
  v73->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6110/*"EndOpenBaseDialog"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v73->fields.callWhenFinished, v81, v82, v83, v84, v85, v86, v87);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}