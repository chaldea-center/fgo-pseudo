void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TutorialArrowMenu_c *v4; // x8

  if ( (byte_42EAD11 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialArrowMenu_TypeInfo, v1, v2, v3);
    byte_42EAD11 = 1;
  }
  TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME = 0.3;
  TutorialArrowMenu_TypeInfo->static_fields->CLOSE_TIME = 0.1;
  v4 = TutorialArrowMenu_TypeInfo;
  TutorialArrowMenu_TypeInfo->static_fields->MASK_ALPHA = 0.7;
  v4->static_fields->PeepWindowCacheCount = 5;
}


void __fastcall TutorialArrowMenu___ctor(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EAD10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12, v13);
    byte_42EAD10 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TutorialArrowMark__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tutorialArrowMarkList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindowTextureList,
    (System_Int32_array **)v21,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  TutorialArrowMenu_c *v24; // x8
  TweenAlpha_o *v25; // x20
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42EAD0F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&TutorialArrowMenu_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6020/*"EndCloseTutorialArrowMenu"*/, v16, v17, v18);
    byte_42EAD0F = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B5D560(
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
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      v24 = TutorialArrowMenu_TypeInfo;
      if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
        v24 = TutorialArrowMenu_TypeInfo;
      }
      v25 = TweenAlpha__Begin(v23, v24->static_fields->CLOSE_TIME, 0.0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v25 )
        {
          v25->fields.style = 6;
          v26 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v25->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v26;
          sub_B5D560((BattleServantConfConponent_o *)&v25->fields.eventReceiver, v26, v27, v28, v29, v30, v31, v32);
          v33 = (System_Int32_array **)StringLiteral_6020/*"EndCloseTutorialArrowMenu"*/;
          v25->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6020/*"EndCloseTutorialArrowMenu"*/;
          sub_B5D560((BattleServantConfConponent_o *)&v25->fields.callWhenFinished, v33, v34, v35, v36, v37, v38, v39);
          return;
        }
LABEL_26:
        sub_B5D69C(gameObject, v22);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6020/*"EndCloseTutorialArrowMenu"*/,
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Transform_o *transform; // x21
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAD08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)prefab, (_DWORD)parentObject, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EAD08 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9
    || (v11 = v9,
        transform = UnityEngine_GameObject__get_transform(v9, 0LL),
        (v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v9, 0LL),
        !transform) )
  {
    sub_B5D69C(v9, v10);
  }
  v16 = v13;
  v17 = v14;
  v18 = v15;
  UnityEngine_Transform__set_parent(transform, parentObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v21.fields.x = v16;
  v21.fields.y = v17;
  v21.fields.z = v18;
  UnityEngine_Transform__set_localScale(transform, v21, 0LL);
  return v11;
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
    sub_B5D560(p_callbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TutorialArrowMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct System_Collections_Generic_List_TutorialArrowMark__o *tutorialArrowMarkList; // x20
  int size; // w8
  int i; // w21
  UnityEngine_Object_o *gameObject; // x20
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42EAD09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__, v26, v27, v28);
    this = (TutorialArrowMenu_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    byte_42EAD09 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  tutorialArrowMarkList = v4->fields.tutorialArrowMarkList;
  if ( !tutorialArrowMarkList )
    goto LABEL_26;
  size = tutorialArrowMarkList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      if ( size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (TutorialArrowMenu_o *)tutorialArrowMarkList->fields._items->m_Items[i];
      if ( !this )
        goto LABEL_26;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      tutorialArrowMarkList = v4->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_26;
      size = tutorialArrowMarkList->fields._size;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->fields.tutorialArrowMarkList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
  }
  this = (TutorialArrowMenu_o *)v4->fields.tutorialPeepWindowTextureList;
  if ( !this )
    goto LABEL_26;
  if ( SLODWORD(this->fields.basePanel) < 1 )
    return;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v37.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  this = (TutorialArrowMenu_o *)v4->fields.tutorialPeepWindowTextureList;
  if ( !this )
LABEL_26:
    sub_B5D69C(this, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  __int64 v6; // x3
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s10
  float m_XMin; // s11
  float y; // s13
  float x; // s14
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  UnityEngine_Rect_o v20; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42EAD0A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, (_DWORD)func, (_DWORD)method, v6);
    byte_42EAD0A = 1;
  }
  v16 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v16 )
    sub_B5D69C(0LL, v17);
  if ( !*(_DWORD *)(v16 + 24) )
  {
    v19 = sub_B5D6C8(v16);
    sub_B5D668(v19, 0LL);
  }
  *(float *)(v16 + 32) = x;
  *(float *)(v16 + 36) = y;
  v20.fields.m_XMin = m_XMin;
  v20.fields.m_YMin = m_YMin;
  v20.fields.m_Width = m_Width;
  v20.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_29275260(this, (UnityEngine_Vector2_array *)v16, way, v20, func, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_29275260(
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
  if ( (byte_42EAD0E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Rect___TypeInfo, (_DWORD)posList, (_DWORD)func, method);
    byte_42EAD0E = 1;
  }
  v14 = sub_B5D5DC(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v14 )
    sub_B5D69C(0LL, v15);
  if ( !*(_DWORD *)(v14 + 24) )
  {
    v17 = sub_B5D6C8(v14);
    sub_B5D668(v17, 0LL);
  }
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_29275632(this, posList, way, (UnityEngine_Rect_array *)v14, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_29275456(
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
  if ( (byte_42EAD0B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, (_DWORD)rects, (_DWORD)func, method);
    byte_42EAD0B = 1;
  }
  v12 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v12 )
    sub_B5D69C(0LL, v13);
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v15 = sub_B5D6C8(v12);
    sub_B5D668(v15, 0LL);
  }
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_29275632(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v14);
}


void __fastcall TutorialArrowMenu__Open_29275632(
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

  if ( (byte_42EAD0C & 1) == 0 )
  {
    sub_B5D5C4(&float___TypeInfo, (_DWORD)posList, (_DWORD)rects, func);
    byte_42EAD0C = 1;
  }
  v11 = (System_Single_array *)sub_B5D5DC(float___TypeInfo, 1LL);
  if ( !v11 )
    sub_B5D69C(0LL, v12);
  if ( !v11->max_length )
  {
    v14 = sub_B5D6C8(v11);
    sub_B5D668(v14, 0LL);
  }
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_29275804(this, posList, v11, rects, func, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_29275804(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        System_Single_array *ways,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x3
  __int64 v40; // x8
  unsigned __int64 v41; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x23
  UnityEngine_Component_o *v43; // x24
  UnityEngine_Transform_o *transform; // x25
  float m_XMin; // s10
  float y; // s1
  float v47; // s0
  float v48; // s2
  unsigned __int32 v49; // s0
  TutorialArrowMenu_c *v53; // x0
  float OPEN_TIME; // s10
  float width; // s0
  double v56; // d0
  TweenWidth_o *v57; // x25
  float v58; // s10
  float height; // s0
  double v60; // d0
  unsigned __int64 v61; // x20
  UnityEngine_Vector2_o *v62; // x24
  __int64 v63; // x8
  __int64 v64; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v65; // x23
  float v66; // s0
  float x; // s1
  float v68; // s2
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v71; // x22
  UnityEngine_Object_o *v72; // x22
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
  struct UISprite_o *maskSprite; // x20
  __int64 v92; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAD0D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___, (_DWORD)posList, (_DWORD)ways, rects);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&TutorialArrowMenu_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_6050/*"EndOpenBaseDialog"*/, v33, v34, v35);
    byte_42EAD0D = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  this->fields.callbackFunc = func;
  sub_B5D560(
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
  TutorialArrowMenu__ObjectInitialize(this, v38);
  if ( rects )
  {
    v40 = *(_QWORD *)&rects->max_length;
    if ( (int)v40 >= 1 )
    {
      v41 = 0LL;
      while ( 1 )
      {
        if ( v41 >= (unsigned int)v40 )
        {
LABEL_87:
          v92 = sub_B5D6C8(gameObject);
          sub_B5D668(v92, 0LL);
        }
        *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&rects->m_Items[v41].fields.m_YMin;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v39);
        if ( !gameObject )
          break;
        v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v43 = (UnityEngine_Component_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        *(UnityEngine_Vector2_o *)&v97.fields.m_XMin = UnityEngine_Rect__get_center(v96, &methoda);
        m_XMin = v97.fields.m_XMin;
        y = UnityEngine_Rect__get_center(v97, &methoda).fields.y;
        if ( !transform )
          break;
        v47 = m_XMin;
        v48 = 1.0;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v43, 0LL);
        if ( !gameObject )
          break;
        v95.fields.x = 0.5;
        v95.fields.y = 0.5;
        v95.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v95, 0LL);
        UIWidget__set_width((UIWidget_o *)v43, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v43, 1152, 0LL);
        v53 = TutorialArrowMenu_TypeInfo;
        if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          v49 = j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo).n128_u32[0];
          v53 = TutorialArrowMenu_TypeInfo;
        }
        OPEN_TIME = v53->static_fields->OPEN_TIME;
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v49, &methoda);
        v56 = width == INFINITY ? -INFINITY : width;
        v57 = TweenWidth__Begin((UIWidget_o *)v43, OPEN_TIME, 2 * (int)v56, 0LL);
        v58 = TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME;
        height = UnityEngine_Rect__get_height(v98, &methoda);
        v60 = height == INFINITY ? -INFINITY : height;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin((UIWidget_o *)v43, v58, 2 * (int)v60, 0LL);
        if ( !v57 )
          break;
        v57->fields.style = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].klass) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
          v42,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        ++v41;
        LODWORD(v40) = rects->max_length;
        if ( (__int64)v41 >= (int)v40 )
          goto LABEL_25;
      }
LABEL_86:
      sub_B5D69C(gameObject, v37);
    }
  }
LABEL_25:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v61 = 0LL;
    v62 = &posList->m_Items[1];
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v39);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 gameObject,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v63 = *(_QWORD *)&ways->max_length;
      v64 = *(_QWORD *)&posList->max_length;
      v65 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
      if ( (int)v63 < 2 || (int)v63 > (int)v64 )
      {
        if ( v61 >= (unsigned int)v64 || !(_DWORD)v63 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v66 = v62[-1].fields.y;
        x = v62->fields.x;
        v68 = ways->m_Items[1];
      }
      else
      {
        if ( v61 >= (unsigned int)v64 || v61 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v66 = v62[-1].fields.y;
        x = v62->fields.x;
        v68 = ways->m_Items[v61 + 1];
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&v66, v68, v37);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        v65,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
      ++v61;
      ++v62;
    }
    while ( (__int64)v61 < (int)posList->max_length );
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
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    v71 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      if ( !gameObject )
        goto LABEL_86;
      v72 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      gameObject,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v72, 0LL);
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
    TutorialArrowMenu__EndOpenBaseDialog(this, v90);
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
  v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
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
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v75, 0LL, 0LL);
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
  if ( !v75 )
    goto LABEL_86;
  v75->fields.style = 6;
  v76 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v75->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v76;
  sub_B5D560((BattleServantConfConponent_o *)&v75->fields.eventReceiver, v76, v77, v78, v79, v80, v81, v82);
  v83 = (System_Int32_array **)StringLiteral_6050/*"EndOpenBaseDialog"*/;
  v75->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6050/*"EndOpenBaseDialog"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v75->fields.callWhenFinished, v83, v84, v85, v86, v87, v88, v89);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}