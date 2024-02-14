void __fastcall TutorialArrowMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialArrowMenu_c *v2; // x8

  if ( (byte_421687D & 1) == 0 )
  {
    sub_B0D8A4(&TutorialArrowMenu_TypeInfo, v1);
    byte_421687D = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_421687C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TutorialArrowMark___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_TutorialArrowMark__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_421687C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_TutorialArrowMark__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_TutorialArrowMark___ctor__);
  this->fields.tutorialArrowMarkList = (struct System_Collections_Generic_List_TutorialArrowMark__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tutorialArrowMarkList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.tutorialPeepWindowTextureList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tutorialPeepWindowTextureList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
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

  if ( (byte_421687B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, callback);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&TutorialArrowMenu_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_5958/*"EndCloseTutorialArrowMenu"*/, v12);
    byte_421687B = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B0D840(
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
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v18 )
        {
          v18->fields.style = 6;
          v19 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v18->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v19;
          sub_B0D840((BattleServantConfConponent_o *)&v18->fields.eventReceiver, v19, v20, v21, v22, v23, v24, v25);
          v26 = (System_Int32_array **)StringLiteral_5958/*"EndCloseTutorialArrowMenu"*/;
          v18->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5958/*"EndCloseTutorialArrowMenu"*/;
          sub_B0D840((BattleServantConfConponent_o *)&v18->fields.callWhenFinished, v26, v27, v28, v29, v30, v31, v32);
          return;
        }
LABEL_26:
        sub_B0D97C(gameObject);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5958/*"EndCloseTutorialArrowMenu"*/,
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
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216874 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, prefab);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4216874 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7
    || (v8 = v7,
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        (v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v7, 0LL),
        !transform) )
  {
    sub_B0D97C(v7);
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
    sub_B0D840(p_callbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TutorialArrowMenu__Init(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  TutorialArrowMenu__ObjectInitialize(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TutorialArrowMenu__ObjectInitialize(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  TutorialArrowMenu_o *v2; // x19
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
  UnityEngine_Object_o *gameObject; // x20
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4216875 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TutorialArrowMark__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TutorialArrowMark__get_Item__, v10);
    this = (TutorialArrowMenu_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4216875 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  tutorialArrowMarkList = v2->fields.tutorialArrowMarkList;
  if ( !tutorialArrowMarkList )
    goto LABEL_26;
  size = tutorialArrowMarkList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i < size; ++i )
    {
      if ( size <= (unsigned int)i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (TutorialArrowMenu_o *)tutorialArrowMarkList->fields._items->m_Items[i];
      if ( !this )
        goto LABEL_26;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      tutorialArrowMarkList = v2->fields.tutorialArrowMarkList;
      if ( !tutorialArrowMarkList )
        goto LABEL_26;
      size = tutorialArrowMarkList->fields._size;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.tutorialArrowMarkList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_TutorialArrowMark__Clear__);
  }
  this = (TutorialArrowMenu_o *)v2->fields.tutorialPeepWindowTextureList;
  if ( !this )
    goto LABEL_26;
  if ( SLODWORD(this->fields.basePanel) < 1 )
    return;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  this = (TutorialArrowMenu_o *)v2->fields.tutorialPeepWindowTextureList;
  if ( !this )
LABEL_26:
    sub_B0D97C(this);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  UnityEngine_Rect_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4216876 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Vector2___TypeInfo, func);
    byte_4216876 = 1;
  }
  v15 = sub_B0D8BC(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v15 )
    sub_B0D97C(0LL);
  if ( !*(_DWORD *)(v15 + 24) )
  {
    v17 = sub_B0D9A8(v15);
    sub_B0D948(v17, 0LL);
  }
  *(float *)(v15 + 32) = x;
  *(float *)(v15 + 36) = y;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  TutorialArrowMenu__Open_28067880(this, (UnityEngine_Vector2_array *)v15, way, v18, func, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_28067880(
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
  __int64 v16; // x0

  m_Height = rect.fields.m_Height;
  m_Width = rect.fields.m_Width;
  m_YMin = rect.fields.m_YMin;
  m_XMin = rect.fields.m_XMin;
  if ( (byte_421687A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Rect___TypeInfo, posList);
    byte_421687A = 1;
  }
  v14 = sub_B0D8BC(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v14 )
    sub_B0D97C(0LL);
  if ( !*(_DWORD *)(v14 + 24) )
  {
    v16 = sub_B0D9A8(v14);
    sub_B0D948(v16, 0LL);
  }
  *(float *)(v14 + 32) = m_XMin;
  *(float *)(v14 + 36) = m_YMin;
  *(float *)(v14 + 40) = m_Width;
  *(float *)(v14 + 44) = m_Height;
  TutorialArrowMenu__Open_28068252(this, posList, way, (UnityEngine_Rect_array *)v14, func, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_28068076(
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
  __int64 v14; // x0

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4216877 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Vector2___TypeInfo, rects);
    byte_4216877 = 1;
  }
  v12 = sub_B0D8BC(UnityEngine_Vector2___TypeInfo, 1LL);
  if ( !v12 )
    sub_B0D97C(0LL);
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v14 = sub_B0D9A8(v12);
    sub_B0D948(v14, 0LL);
  }
  *(float *)(v12 + 32) = x;
  *(float *)(v12 + 36) = y;
  TutorialArrowMenu__Open_28068252(this, (UnityEngine_Vector2_array *)v12, way, rects, func, v13);
}


void __fastcall TutorialArrowMenu__Open_28068252(
        TutorialArrowMenu_o *this,
        UnityEngine_Vector2_array *posList,
        float way,
        UnityEngine_Rect_array *rects,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_Single_array *v11; // x0
  const MethodInfo *v12; // x5
  __int64 v13; // x0

  if ( (byte_4216878 & 1) == 0 )
  {
    sub_B0D8A4(&float___TypeInfo, posList);
    byte_4216878 = 1;
  }
  v11 = (System_Single_array *)sub_B0D8BC(float___TypeInfo, 1LL);
  if ( !v11 )
    sub_B0D97C(0LL);
  if ( !v11->max_length )
  {
    v13 = sub_B0D9A8(v11);
    sub_B0D948(v13, 0LL);
  }
  v11->m_Items[1] = way;
  TutorialArrowMenu__Open_28068424(this, posList, v11, rects, func, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialArrowMenu__Open_28068424(
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
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  unsigned __int64 v24; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x23
  UnityEngine_Component_o *v26; // x24
  UnityEngine_Transform_o *transform; // x25
  float m_XMin; // s10
  float y; // s1
  float v30; // s0
  float v31; // s2
  unsigned __int32 v32; // s0
  TutorialArrowMenu_c *v36; // x0
  float OPEN_TIME; // s10
  float width; // s0
  double v39; // d0
  TweenWidth_o *v40; // x25
  float v41; // s10
  float height; // s0
  double v43; // d0
  unsigned __int64 v44; // x20
  UnityEngine_Vector2_o *v45; // x24
  const MethodInfo *v46; // x1
  __int64 v47; // x8
  __int64 v48; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x23
  float v50; // s0
  float x; // s1
  float v52; // s2
  UnityEngine_Object_o *basePanel; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v55; // x22
  UnityEngine_Object_o *v56; // x22
  UnityEngine_GameObject_o *v57; // x20
  TutorialArrowMenu_c *v58; // x8
  TweenAlpha_o *v59; // x20
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x1
  struct UISprite_o *maskSprite; // x20
  __int64 v76; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216879 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___, posList);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TutorialArrowMark__Add__, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&TutorialArrowMenu_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_5988/*"EndOpenBaseDialog"*/, v19);
    byte_4216879 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  this->fields.callbackFunc = func;
  sub_B0D840(
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
    v23 = *(_QWORD *)&rects->max_length;
    if ( (int)v23 >= 1 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)v23 )
        {
LABEL_87:
          v76 = sub_B0D9A8(gameObject);
          sub_B0D948(v76, 0LL);
        }
        *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&rects->m_Items[v24].fields.m_YMin;
        gameObject = TutorialArrowMenu__CreatePrefab(
                       (TutorialArrowMenu_o *)gameObject,
                       this->fields.tutorialPeepWindowTexturePrefab,
                       this->fields.basePeepWindow,
                       v22);
        if ( !gameObject )
          break;
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
        if ( !gameObject )
          break;
        v26 = (UnityEngine_Component_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        *(UnityEngine_Vector2_o *)&v81.fields.m_XMin = UnityEngine_Rect__get_center(v80, &methoda);
        m_XMin = v81.fields.m_XMin;
        y = UnityEngine_Rect__get_center(v81, &methoda).fields.y;
        if ( !transform )
          break;
        v30 = m_XMin;
        v31 = 1.0;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v26, 0LL);
        if ( !gameObject )
          break;
        v79.fields.x = 0.5;
        v79.fields.y = 0.5;
        v79.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v79, 0LL);
        UIWidget__set_width((UIWidget_o *)v26, 2048, 0LL);
        UIWidget__set_height((UIWidget_o *)v26, 1152, 0LL);
        v36 = TutorialArrowMenu_TypeInfo;
        if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
        {
          v32 = j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo).n128_u32[0];
          v36 = TutorialArrowMenu_TypeInfo;
        }
        OPEN_TIME = v36->static_fields->OPEN_TIME;
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v32, &methoda);
        v39 = width == INFINITY ? -INFINITY : width;
        v40 = TweenWidth__Begin((UIWidget_o *)v26, OPEN_TIME, 2 * (int)v39, 0LL);
        v41 = TutorialArrowMenu_TypeInfo->static_fields->OPEN_TIME;
        height = UnityEngine_Rect__get_height(v82, &methoda);
        v43 = height == INFINITY ? -INFINITY : height;
        gameObject = (UnityEngine_GameObject_o *)TweenHeight__Begin((UIWidget_o *)v26, v41, 2 * (int)v43, 0LL);
        if ( !v40 )
          break;
        v40->fields.style = 6;
        if ( !gameObject )
          break;
        LODWORD(gameObject[1].klass) = 6;
        gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialPeepWindowTextureList;
        if ( !gameObject )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
          v25,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        ++v24;
        LODWORD(v23) = rects->max_length;
        if ( (__int64)v24 >= (int)v23 )
          goto LABEL_25;
      }
LABEL_86:
      sub_B0D97C(gameObject);
    }
  }
LABEL_25:
  if ( posList && (int)posList->max_length >= 1 )
  {
    v44 = 0LL;
    v45 = &posList->m_Items[1];
    do
    {
      gameObject = TutorialArrowMenu__CreatePrefab(
                     (TutorialArrowMenu_o *)gameObject,
                     this->fields.tutorialArrowMarkPrefab,
                     this->fields.baseArrow,
                     v22);
      if ( !gameObject )
        goto LABEL_86;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 gameObject,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TutorialArrowMark___);
      if ( !ways )
        goto LABEL_86;
      v47 = *(_QWORD *)&ways->max_length;
      v48 = *(_QWORD *)&posList->max_length;
      v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject;
      if ( (int)v47 < 2 || (int)v47 > (int)v48 )
      {
        if ( v44 >= (unsigned int)v48 || !(_DWORD)v47 )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v50 = v45[-1].fields.y;
        x = v45->fields.x;
        v52 = ways->m_Items[1];
      }
      else
      {
        if ( v44 >= (unsigned int)v48 || v44 >= (unsigned int)*(_QWORD *)&ways->max_length )
          goto LABEL_87;
        if ( !gameObject )
          goto LABEL_86;
        v50 = v45[-1].fields.y;
        x = v45->fields.x;
        v52 = ways->m_Items[v44 + 1];
      }
      TutorialArrowMark__Init((TutorialArrowMark_o *)gameObject, *(UnityEngine_Vector2_o *)&v50, v52, v46);
      gameObject = (UnityEngine_GameObject_o *)this->fields.tutorialArrowMarkList;
      if ( !gameObject )
        goto LABEL_86;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        v49,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_TutorialArrowMark__Add__);
      ++v44;
      ++v45;
    }
    while ( (__int64)v44 < (int)posList->max_length );
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
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    v55 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      if ( !gameObject )
        goto LABEL_86;
      v56 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      gameObject,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v56, 0LL);
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
    TutorialArrowMenu__EndOpenBaseDialog(this, v74);
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
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  v58 = TutorialArrowMenu_TypeInfo;
  if ( (BYTE3(TutorialArrowMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialArrowMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialArrowMenu_TypeInfo);
    v58 = TutorialArrowMenu_TypeInfo;
  }
  v59 = TweenAlpha__Begin(v57, v58->static_fields->OPEN_TIME, v58->static_fields->MASK_ALPHA, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0LL, 0LL);
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
  if ( !v59 )
    goto LABEL_86;
  v59->fields.style = 6;
  v60 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v59->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v60;
  sub_B0D840((BattleServantConfConponent_o *)&v59->fields.eventReceiver, v60, v61, v62, v63, v64, v65, v66);
  v67 = (System_Int32_array **)StringLiteral_5988/*"EndOpenBaseDialog"*/;
  v59->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5988/*"EndOpenBaseDialog"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v59->fields.callWhenFinished, v67, v68, v69, v70, v71, v72, v73);
}


bool __fastcall TutorialArrowMenu__get_IsBusy(TutorialArrowMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}