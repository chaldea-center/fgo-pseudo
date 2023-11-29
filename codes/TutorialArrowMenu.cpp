void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialArrowMenu_c *v2; // x8

  if ( (byte_40FB8D8 & 1) == 0 )
  {
    sub_B16FFC(&TutorialArrowMenu_TypeInfo, v1);
    byte_40FB8D8 = 1;
  }
  TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME = 0.3;
  TutorialArrowMenu_TypeInfo->static_fields->CLOSE_TIME = 0.1;
  v2 = TutorialArrowMenu_TypeInfo;
  TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA = 0.7;
  v2->static_fields->PeepWindowCacheCount = 5;
}


void __fastcall TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FB8D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    byte_40FB8D7 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_TutorialArrowMark__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tutorialArrowMarkList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindowTextureList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TutorialArrowMenu__Close(
        TutorialArrowMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Component_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x20
  TutorialArrowMenu_c *v17; // x8
  TweenAlpha_o *v18; // x20
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FB8D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, callback);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TutorialArrowMenu_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5924, v12);
    byte_40FB8D6 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    Component_srcLineSprite = (UnityEngine_Component_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_26;
    if ( (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&Component_srcLineSprite->klass[1]._1.this_arg.bits)(
           Component_srcLineSprite,
           Component_srcLineSprite->klass[1]._1.element_class) != 0.0 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[1]._1.declaringType,
        1.0);
      v16 = UnityEngine_Component__get_gameObject(Component_srcLineSprite, 0LL);
      v17 = TutorialArrowMenu_TypeInfo;
      if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v17 = TutorialArrowMenu_TypeInfo;
      }
      v18 = TweenAlpha__Begin(v16, v17->static_fields->CLOSE_TIME, 0.0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
      {
        if ( v18 )
        {
          v18->fields.style = 6;
          v19 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v18->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v19;
          sub_B16F98((BattleServantConfConponent_o *)&v18->fields.eventReceiver, v19, v20, v21, v22, v23, v24, v25);
          v26 = (System_Int32_array **)StringLiteral_5924;
          v18->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5924;
          sub_B16F98((BattleServantConfConponent_o *)&v18->fields.callWhenFinished, v26, v27, v28, v29, v30, v31, v32);
          return;
        }
LABEL_26:
        sub_B170D4();
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5924,
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
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v10; // x0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB8CF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FB8CF = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7
    || (v8 = v7,
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        (v10 = UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localScale(v10, 0LL), !transform) )
  {
    sub_B170D4();
  }
  v14 = v11;
  v15 = v12;
  v16 = v13;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v19.fields.x = v14;
  v19.fields.y = v15;
  v19.fields.z = v16;
  UnityEngine_Transform__set_localScale(transform, v19, 0LL);
  return v8;
}


void __fastcall TutorialArrowMenu__EndCloseTutorialArrowMenu(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *callbackFunc; // t1

  TutorialArrowMenu__Init(this, method);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall TutorialArrowMenu__EndOpenBaseDialog(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TutorialArrowMenu__Init(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  TutorialArrowMenu__ObjectInitialize(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  struct System_Collections_Generic_List_TutorialArrowMark__o *tutorialArrowMarkList; // x20
  int size; // w8
  int i; // w21
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *tutorialPeepWindowTextureList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB8D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FB8D0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
  if ( !tutorialArrowMarkList )
    goto LABEL_26;
  size = tutorialArrowMarkList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      if ( size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v15 = (UnityEngine_Component_o *)tutorialArrowMarkList->fields._items->m_Items[i];
      if ( !v15 )
        goto LABEL_26;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_26;
      size = tutorialArrowMarkList->fields._size;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.tutorialArrowMarkList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
  }
  tutorialPeepWindowTextureList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.tutorialPeepWindowTextureList;
  if ( !tutorialPeepWindowTextureList )
    goto LABEL_26;
  if ( tutorialPeepWindowTextureList->fields._size < 1 )
    return;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    tutorialPeepWindowTextureList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v19 = this->fields.tutorialPeepWindowTextureList;
  if ( !v19 )
LABEL_26:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v19,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  UnityEngine_Rect_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FB8D1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Vector2___TypeInfo, func);
    byte_40FB8D1 = 1;
  }
  v15 = sub_B17014(UnityEngine_Vector2___TypeInfo, 1LL, method);
  if ( !v15 )
    sub_B170D4();
  if ( !*(_DWORD *)(v15 + 24) )
  {
    sub_B17100(v15, v15, v16);
    sub_B170A0();
  }
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_28002736(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_28002736(
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
  if ( (byte_40FB8D5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Rect___TypeInfo, posList);
    byte_40FB8D5 = 1;
  }
  v14 = sub_B17014(UnityEngine_Rect___TypeInfo, 1LL, func);
  if ( !v14 )
    sub_B170D4();
  if ( !*(_DWORD *)(v14 + 24) )
  {
    sub_B17100(v14, v15, v14);
    sub_B170A0();
  }
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_28003108(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_28002932(
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
  __int64 v13; // x2
  const MethodInfo *v14; // x4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FB8D2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Vector2___TypeInfo, rects);
    byte_40FB8D2 = 1;
  }
  v12 = sub_B17014(UnityEngine_Vector2___TypeInfo, 1LL, func);
  if ( !v12 )
    sub_B170D4();
  if ( !*(_DWORD *)(v12 + 24) )
  {
    sub_B17100(v12, v12, v13);
    sub_B170A0();
  }
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_28003108(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void __fastcall TutorialArrowMenu__Open_28003108(
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

  if ( (byte_40FB8D3 & 1) == 0 )
  {
    sub_B16FFC(&float___TypeInfo, posList);
    byte_40FB8D3 = 1;
  }
  v11 = (System_Single_array *)sub_B17014(float___TypeInfo, 1LL, rects);
  if ( !v11 )
    sub_B170D4();
  if ( !v11->max_length )
  {
    sub_B17100(v11, v12, v11);
    sub_B170A0();
  }
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_28003280(this, posList, v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_28003280(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  TutorialArrowMenu_o *v22; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  unsigned __int64 v27; // x26
  UnityEngine_GameObject_o *Prefab; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x23
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v31; // x24
  UnityEngine_Transform_o *transform; // x25
  float m_XMin; // s10
  float y; // s1
  float v35; // s0
  float v36; // s2
  UnityEngine_Transform_o *v37; // x0
  unsigned __int32 v38; // s0
  TutorialArrowMenu_c *v42; // x0
  float OPEN_TIME; // s10
  float width; // s0
  double v45; // d0
  TweenWidth_o *v46; // x25
  float v47; // s10
  float height; // s0
  double v49; // d0
  TweenHeight_o *v50; // x0
  struct System_Collections_Generic_List_GameObject__o *tutorialPeepWindowTextureList; // x0
  unsigned __int64 v52; // x20
  UnityEngine_Vector2_o *v53; // x24
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x8
  __int64 v56; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x23
  float v58; // s0
  float x; // s1
  float v60; // s2
  struct System_Collections_Generic_List_TutorialArrowMark__o *tutorialArrowMarkList; // x0
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Component_o *v63; // x21
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Object_o *v66; // x22
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_Object_o *v68; // x22
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v70; // x0
  struct UISprite_o *v71; // x0
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x20
  TutorialArrowMenu_c *v74; // x8
  TweenAlpha_o *v75; // x20
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  const MethodInfo *v90; // x1
  struct UISprite_o *v91; // x20
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB8D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___, posList);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&TutorialArrowMenu_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_5954, v19);
    byte_40FB8D4 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  this->fields.callbackFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)func,
    (System_String_array **)ways,
    (System_String_array **)rects,
    (System_Boolean_array **)func,
    (System_Int32_array **)method,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialArrowMenu__ObjectInitialize(this, v21);
  if ( rects )
  {
    v26 = *(_QWORD *)&rects->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v26 )
        {
LABEL_87:
          sub_B17100(v22, v23, v24);
          sub_B170A0();
        }
        *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&rects->m_Items[v27].fields.m_YMin;
        Prefab = TutorialArrowMenu__CreatePrefab(
                   v22,
                   this->fields.tutorialPeepWindowTexturePrefab,
                   this->fields.basePeepWindow,
                   v25);
        if ( !Prefab )
          break;
        v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)Prefab;
        Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               Prefab,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !Component_srcLineSprite )
          break;
        v31 = Component_srcLineSprite;
        transform = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
        *(UnityEngine_Vector2_o *)&v96.fields.m_XMin = UnityEngine_Rect__get_center(v95, &methoda);
        m_XMin = v96.fields.m_XMin;
        y = UnityEngine_Rect__get_center(v96, &methoda).fields.y;
        if ( !transform )
          break;
        v35 = m_XMin;
        v36 = 1.0;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
        v37 = UnityEngine_Component__get_transform(v31, 0LL);
        if ( !v37 )
          break;
        v94.fields.x = 0.5;
        v94.fields.y = 0.5;
        v94.fields.z = 1.0;
        UnityEngine_Transform__set_localScale(v37, v94, 0LL);
        UIWidget__set_width((UIWidget_o *)v31, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v31, 1152, 0LL);
        v42 = TutorialArrowMenu_TypeInfo;
        if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          v38 = j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo).n128_u32[0];
          v42 = TutorialArrowMenu_TypeInfo;
        }
        OPEN_TIME = v42->static_fields->OPEN_TIME;
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v38, &methoda);
        v45 = width == INFINITY ? -INFINITY : width;
        v46 = TweenWidth__Begin((UIWidget_o *)v31, OPEN_TIME, 2 * (int)v45, 0LL);
        v47 = TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME;
        height = UnityEngine_Rect__get_height(v97, &methoda);
        v49 = height == INFINITY ? -INFINITY : height;
        v50 = TweenHeight__Begin((UIWidget_o *)v31, v47, 2 * (int)v49, 0LL);
        if ( !v46 )
          break;
        v46->fields.style = 6;
        if ( !v50 )
          break;
        v50->fields.style = 6;
        tutorialPeepWindowTextureList = this->fields.tutorialPeepWindowTextureList;
        if ( !tutorialPeepWindowTextureList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tutorialPeepWindowTextureList,
          v29,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        ++v27;
        LODWORD(v26) = rects->max_length;
        if ( (__int64)v27 >= (int)v26 )
          goto LABEL_25;
      }
LABEL_86:
      sub_B170D4();
    }
  }
LABEL_25:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v52 = 0LL;
    v53 = &posList->m_Items[1];
    do
    {
      v54 = TutorialArrowMenu__CreatePrefab(v22, this->fields.tutorialArrowMarkPrefab, this->fields.baseArrow, v25);
      if ( !v54 )
        goto LABEL_86;
      v22 = (TutorialArrowMenu_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v54,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v55 = *(_QWORD *)&ways->max_length;
      v56 = *(_QWORD *)&posList->max_length;
      v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
      if ( (int)v55 < 2 || (int)v55 > (int)v56 )
      {
        if ( v52 >= (unsigned int)v56 || !(_DWORD)v55 )
          goto LABEL_87;
        if ( !v22 )
          goto LABEL_86;
        v58 = v53[-1].fields.y;
        x = v53->fields.x;
        v60 = ways->m_Items[1];
      }
      else
      {
        if ( v52 >= (unsigned int)v56 || v52 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !v22 )
          goto LABEL_86;
        v58 = v53[-1].fields.y;
        x = v53->fields.x;
        v60 = ways->m_Items[v52 + 1];
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)v22, *(UnityEngine_Vector2_o *)&v58, v60, v23);
      tutorialArrowMarkList = this->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_86;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tutorialArrowMarkList,
        v57,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
      ++v52;
      ++v53;
    }
    while ( (__int64)v52 < (int)posList->max_length );
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    v63 = (UnityEngine_Component_o *)this->fields.basePanel;
  }
  else
  {
    v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v64 )
      goto LABEL_86;
    v63 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v64,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0LL, 0LL) )
  {
    if ( !v63 )
      goto LABEL_86;
    v65 = UnityEngine_Component__get_gameObject(v63, 0LL);
    if ( !v65 )
      goto LABEL_86;
    v66 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v65,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
    {
      v67 = UnityEngine_Component__get_gameObject(v63, 0LL);
      if ( !v67 )
        goto LABEL_86;
      v68 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v67,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v68, 0LL);
    }
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v63->klass[1]._1.castClass)(
      v63,
      v63->klass[1]._1.declaringType,
      1.0);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_86;
  v70 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !v70 )
    goto LABEL_86;
  if ( !rects )
  {
    UnityEngine_GameObject__SetActive(v70, 0, 0LL);
LABEL_85:
    TutorialArrowMenu__EndOpenBaseDialog(this, v90);
    return;
  }
  UnityEngine_GameObject__SetActive(v70, 1, 0LL);
  v71 = this->fields.maskSprite;
  if ( !v71 )
    goto LABEL_86;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v71->klass->vtable._8_set_alpha.method)(
    v71,
    v71->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.005);
  v72 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v72 )
    goto LABEL_86;
  v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
  v74 = TutorialArrowMenu_TypeInfo;
  if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v74 = TutorialArrowMenu_TypeInfo;
  }
  v75 = TweenAlpha__Begin(v73, v74->static_fields->OPEN_TIME, v74->static_fields->MASK_ALPHA, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v75, 0LL, 0LL) )
  {
    v91 = this->fields.maskSprite;
    if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    }
    if ( !v91 )
      goto LABEL_86;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v91->klass->vtable._8_set_alpha.method)(
      v91,
      v91->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA);
    goto LABEL_85;
  }
  if ( !v75 )
    goto LABEL_86;
  v75->fields.style = 6;
  v76 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v75->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v76;
  sub_B16F98((BattleServantConfConponent_o *)&v75->fields.eventReceiver, v76, v77, v78, v79, v80, v81, v82);
  v83 = (System_Int32_array **)StringLiteral_5954;
  v75->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5954;
  sub_B16F98((BattleServantConfConponent_o *)&v75->fields.callWhenFinished, v83, v84, v85, v86, v87, v88, v89);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}