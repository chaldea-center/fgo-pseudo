void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  TutorialArrowMenu_c *v1; // x8

  if ( (byte_438D6B2 & 1) == 0 )
  {
    sub_B775C4(&TutorialArrowMenu_TypeInfo);
    byte_438D6B2 = 1;
  }
  TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME = 0.3;
  TutorialArrowMenu_TypeInfo->static_fields->CLOSE_TIME = 0.1;
  v1 = TutorialArrowMenu_TypeInfo;
  TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA = 0.7;
  v1->static_fields->PeepWindowCacheCount = 5;
}


void __fastcall TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438D6B1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
    sub_B775C4(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_438D6B1 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tutorialArrowMarkList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindowTextureList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  TutorialArrowMenu_c *v15; // x8
  TweenAlpha_o *v16; // x20
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_438D6B0 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TutorialArrowMenu_TypeInfo);
    sub_B775C4(&StringLiteral_6089/*"EndCloseTutorialArrowMenu"*/);
    byte_438D6B0 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B77560(
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
    Component_srcLineSprite = (UnityEngine_Object_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_26;
    if ( (*(float (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&Component_srcLineSprite->klass[1]._1.this_arg.bits)(
           Component_srcLineSprite,
           Component_srcLineSprite->klass[1]._1.element_class) != 0.0 )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[1]._1.declaringType,
        1.0);
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      v15 = TutorialArrowMenu_TypeInfo;
      if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v15 = TutorialArrowMenu_TypeInfo;
      }
      v16 = TweenAlpha__Begin(v14, v15->static_fields->CLOSE_TIME, 0.0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v16 )
        {
          v16->fields.style = 6;
          v17 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v16->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v17;
          sub_B77560((BattleServantConfConponent_o *)&v16->fields.eventReceiver, v17, v18, v19, v20, v21, v22, v23);
          v24 = (System_Int32_array **)StringLiteral_6089/*"EndCloseTutorialArrowMenu"*/;
          v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6089/*"EndCloseTutorialArrowMenu"*/;
          sub_B77560((BattleServantConfConponent_o *)&v16->fields.callWhenFinished, v24, v25, v26, v27, v28, v29, v30);
          return;
        }
LABEL_26:
        sub_B7769C(gameObject, v13);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6089/*"EndCloseTutorialArrowMenu"*/,
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
  UnityEngine_Transform_o *transform; // x21
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438D6A9 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D6A9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6
    || (v8 = v6,
        transform = UnityEngine_GameObject__get_transform(v6, 0LL),
        (v6 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v6, 0LL),
        !transform) )
  {
    sub_B7769C(v6, v7);
  }
  v13 = v10;
  v14 = v11;
  v15 = v12;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v18.fields.x = v13;
  v18.fields.y = v14;
  v18.fields.z = v15;
  UnityEngine_Transform__set_localScale(transform, v18, 0LL);
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
    sub_B77560(p_callbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B77560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TutorialArrowMenu__Init(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  TutorialArrowMenu__ObjectInitialize(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  TutorialArrowMenu_o *v2; // x19
  struct System_Collections_Generic_List_TutorialArrowMark__o *tutorialArrowMarkList; // x20
  int size; // w8
  int i; // w21
  UnityEngine_Object_o *gameObject; // x20
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_438D6AA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__);
    this = (TutorialArrowMenu_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D6AA = 1;
  }
  memset(&v8, 0, sizeof(v8));
  tutorialArrowMarkList = v2->fields.tutorialArrowMarkList;
  if ( !tutorialArrowMarkList )
    goto LABEL_26;
  size = tutorialArrowMarkList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      if ( size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (TutorialArrowMenu_o *)tutorialArrowMarkList->fields._items->m_Items[i];
      if ( !this )
        goto LABEL_26;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
      tutorialArrowMarkList = v2->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_26;
      size = tutorialArrowMarkList->fields._size;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.tutorialArrowMarkList,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
  }
  this = (TutorialArrowMenu_o *)v2->fields.tutorialPeepWindowTextureList;
  if ( !this )
    goto LABEL_26;
  if ( SLODWORD(this->fields.basePanel) < 1 )
    return;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v8.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  this = (TutorialArrowMenu_o *)v2->fields.tutorialPeepWindowTextureList;
  if ( !this )
LABEL_26:
    sub_B7769C(this, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  __int64 v18; // x0
  UnityEngine_Rect_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_438D6AB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Vector2___TypeInfo);
    byte_438D6AB = 1;
  }
  v15 = sub_B775DC(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v15 )
    sub_B7769C(0LL, v16);
  if ( !*(_DWORD *)(v15 + 24) )
  {
    v18 = sub_B776C8(v15);
    sub_B77668(v18, 0LL);
  }
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v19.fields.m_XMin = m_XMin;
  v19.fields.m_YMin = m_YMin;
  v19.fields.m_Width = m_Width;
  v19.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_29495148(this, (UnityEngine_Vector2_array *)v15, way, v19, func, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_29495148(
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
  __int64 v17; // x0

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( (byte_438D6AF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Rect___TypeInfo);
    byte_438D6AF = 1;
  }
  v14 = sub_B775DC(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v14 )
    sub_B7769C(0LL, v15);
  if ( !*(_DWORD *)(v14 + 24) )
  {
    v17 = sub_B776C8(v14);
    sub_B77668(v17, 0LL);
  }
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_29495520(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_29495344(
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
  __int64 v15; // x0

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_438D6AC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Vector2___TypeInfo);
    byte_438D6AC = 1;
  }
  v12 = sub_B775DC(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v12 )
    sub_B7769C(0LL, v13);
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v15 = sub_B776C8(v12);
    sub_B77668(v15, 0LL);
  }
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_29495520(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void __fastcall TutorialArrowMenu__Open_29495520(
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
  __int64 v14; // x0

  if ( (byte_438D6AD & 1) == 0 )
  {
    sub_B775C4(&float___TypeInfo);
    byte_438D6AD = 1;
  }
  v11 = (System_Single_array *)sub_B775DC(float___TypeInfo, 1LL);
  if ( !v11 )
    sub_B7769C(0LL, v12);
  if ( !v11->max_length )
  {
    v14 = sub_B776C8(v11);
    sub_B77668(v14, 0LL);
  }
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_29495692(this, posList, v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_29495692(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x23
  UnityEngine_Component_o *v19; // x24
  UnityEngine_Transform_o *transform; // x25
  float m_XMin; // s10
  float y; // s1
  float v23; // s0
  float v24; // s2
  unsigned __int32 v25; // s0
  TutorialArrowMenu_c *v29; // x0
  float OPEN_TIME; // s10
  float width; // s0
  double v32; // d0
  TweenWidth_o *v33; // x25
  float v34; // s10
  float height; // s0
  double v36; // d0
  unsigned __int64 v37; // x20
  UnityEngine_Vector2_o *v38; // x24
  __int64 v39; // x8
  __int64 v40; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x23
  float v42; // s0
  float x; // s1
  float v44; // s2
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v47; // x22
  UnityEngine_Object_o *v48; // x22
  UnityEngine_GameObject_o *v49; // x20
  TutorialArrowMenu_c *v50; // x8
  TweenAlpha_o *v51; // x20
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x1
  struct UISprite_o *maskSprite; // x20
  __int64 v68; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438D6AE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TutorialArrowMenu_TypeInfo);
    sub_B775C4(&StringLiteral_6119/*"EndOpenBaseDialog"*/);
    byte_438D6AE = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  this->fields.callbackFunc = func;
  sub_B77560(
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
  TutorialArrowMenu__ObjectInitialize(this, v14);
  if ( rects )
  {
    v16 = *(_QWORD *)&rects->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v16 )
        {
LABEL_87:
          v68 = sub_B776C8(gameObject);
          sub_B77668(v68, 0LL);
        }
        *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&rects->m_Items[v17].fields.m_YMin;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v15);
        if ( !gameObject )
          break;
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v19 = (UnityEngine_Component_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        *(UnityEngine_Vector2_o *)&v73.fields.m_XMin = UnityEngine_Rect__get_center(v72, &methoda);
        m_XMin = v73.fields.m_XMin;
        y = UnityEngine_Rect__get_center(v73, &methoda).fields.y;
        if ( !transform )
          break;
        v23 = m_XMin;
        v24 = 1.0;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v19, 0LL);
        if ( !gameObject )
          break;
        v71.fields.x = 0.5;
        v71.fields.y = 0.5;
        v71.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v71, 0LL);
        UIWidget__set_width((UIWidget_o *)v19, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v19, 1152, 0LL);
        v29 = TutorialArrowMenu_TypeInfo;
        if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          v25 = j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo).n128_u32[0];
          v29 = TutorialArrowMenu_TypeInfo;
        }
        OPEN_TIME = v29->static_fields->OPEN_TIME;
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v25, &methoda);
        v32 = width == INFINITY ? -INFINITY : width;
        v33 = TweenWidth__Begin((UIWidget_o *)v19, OPEN_TIME, 2 * (int)v32, 0LL);
        v34 = TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME;
        height = UnityEngine_Rect__get_height(v74, &methoda);
        v36 = height == INFINITY ? -INFINITY : height;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin((UIWidget_o *)v19, v34, 2 * (int)v36, 0LL);
        if ( !v33 )
          break;
        v33->fields.style = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].klass) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
          v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
        ++v17;
        LODWORD(v16) = rects->max_length;
        if ( (__int64)v17 >= (int)v16 )
          goto LABEL_25;
      }
LABEL_86:
      sub_B7769C(gameObject, v13);
    }
  }
LABEL_25:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v37 = 0LL;
    v38 = &posList->m_Items[1];
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v15);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 gameObject,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v39 = *(_QWORD *)&ways->max_length;
      v40 = *(_QWORD *)&posList->max_length;
      v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
      if ( (int)v39 < 2 || (int)v39 > (int)v40 )
      {
        if ( v37 >= (unsigned int)v40 || !(_DWORD)v39 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v42 = v38[-1].fields.y;
        x = v38->fields.x;
        v44 = ways->m_Items[1];
      }
      else
      {
        if ( v37 >= (unsigned int)v40 || v37 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v42 = v38[-1].fields.y;
        x = v38->fields.x;
        v44 = ways->m_Items[v37 + 1];
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&v42, v44, v13);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        v41,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
      ++v37;
      ++v38;
    }
    while ( (__int64)v37 < (int)posList->max_length );
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    Component_srcLineSprite = (UnityEngine_Object_o *)this->fields.basePanel;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_86;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        gameObject,
                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
    if ( !gameObject )
      goto LABEL_86;
    v47 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      if ( !gameObject )
        goto LABEL_86;
      v48 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      gameObject,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v48, 0LL);
    }
    ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
      Component_srcLineSprite,
      Component_srcLineSprite->klass[1]._1.declaringType,
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
    TutorialArrowMenu__EndOpenBaseDialog(this, v66);
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
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  v50 = TutorialArrowMenu_TypeInfo;
  if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v50 = TutorialArrowMenu_TypeInfo;
  }
  v51 = TweenAlpha__Begin(v49, v50->static_fields->OPEN_TIME, v50->static_fields->MASK_ALPHA, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)TutorialArrowMenu_TypeInfo;
    maskSprite = this->fields.maskSprite;
    if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    }
    if ( !maskSprite )
      goto LABEL_86;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
      maskSprite,
      maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA);
    goto LABEL_85;
  }
  if ( !v51 )
    goto LABEL_86;
  v51->fields.style = 6;
  v52 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v51->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v52;
  sub_B77560((BattleServantConfConponent_o *)&v51->fields.eventReceiver, v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Int32_array **)StringLiteral_6119/*"EndOpenBaseDialog"*/;
  v51->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6119/*"EndOpenBaseDialog"*/;
  sub_B77560((BattleServantConfConponent_o *)&v51->fields.callWhenFinished, v59, v60, v61, v62, v63, v64, v65);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}