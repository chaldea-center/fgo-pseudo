void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECFEC & 1) == 0 )
  {
    sub_B5D5C4(&EndrolEffectManager_TypeInfo, v1, v2, v3);
    byte_42ECFEC = 1;
  }
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaStart = -257;
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaEnd = 257;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECFEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__, (_DWORD)method, v2, v3);
    byte_42ECFEB = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_Vector2__o *v14; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  int v23; // w20
  int v24; // w23
  EndrolEffectManager_c *v25; // x0
  float v26; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4

  if ( (byte_42ECFE7 & 1) == 0 )
  {
    sub_B5D5C4(&EndrolEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_Vector2__TypeInfo, v11, v12, v13);
    byte_42ECFE7 = 1;
  }
  v14 = (System_Collections_Generic_List_Vector2__o *)sub_B5D694(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v14,
    (const MethodInfo_303D820 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v14;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_bgGridPointList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = 0;
  do
  {
    v24 = -1;
    do
    {
      if ( (++v24 & 1) == 0 )
      {
        v25 = EndrolEffectManager_TypeInfo;
        if ( (v23 & 1) != 0 )
          v26 = (float)((float)((float)((float)v24 * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v26 = (float)((float)((float)v24 * 22.25) + -512.0) + 0.0;
        if ( (BYTE3(EndrolEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v25 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v25->static_fields;
        if ( v26 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_17;
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v26 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_17:
          if ( !*p_bgGridPointList )
            sub_B5D69C(0LL, v22);
          v29.fields.x = v26;
          v29.fields.y = (float)((float)((float)v23 * -22.25) + 288.0) + 0.5;
          System_Collections_Generic_List_Vector2___Add(
            *p_bgGridPointList,
            v29,
            (const MethodInfo_303E584 *)Method_System_Collections_Generic_List_Vector2__Add__);
        }
      }
    }
    while ( (unsigned int)v24 < 0x2D );
  }
  while ( (unsigned int)v23++ < 0x19 );
}


int32_t __fastcall EndrolEffectManager__CheckOverlap(
        EndrolEffectManager_o *this,
        double checkTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_double__o *effectOccurrenceTime; // x0
  int32_t v17; // w19
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42ECFE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_double__GetEnumerator__, v13, v14, v15);
    byte_42ECFE9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v19,
    effectOccurrenceTime,
    (const MethodInfo_307F29C *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v17 = 0;
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v20,
            (const MethodInfo_201C324 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v20.fields.current == checkTime )
      ++v17;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v20,
    (const MethodInfo_201C320 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v17;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42ECFEA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECFEA = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolEffectManager__InstansiateEffect(
        EndrolEffectManager_o *this,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float y; // s8
  float x; // s9
  EndrolEffectManager_o *v7; // x20
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UnityEngine_GameObject_array *effectObject; // x19
  __int64 v15; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x19
  UnityEngine_GameObject_o *v17; // x19
  UnityEngine_Component_o *objectParent; // x8
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Transform_o *transform; // x20
  int v21; // s0
  __int64 v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v7 = this;
  if ( (byte_42ECFE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    this = (EndrolEffectManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42ECFE8 = 1;
  }
  effectObject = v7->fields.effectObject;
  if ( !effectObject )
    goto LABEL_14;
  v15 = UnityEngine_Random__Range_35654020(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v15 >= effectObject->max_length )
  {
    v24 = sub_B5D6C8(v15);
    sub_B5D668(v24, 0LL);
  }
  v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)effectObject->m_Items[(int)v15];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    v16,
                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  v17 = (UnityEngine_GameObject_o *)this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  objectParent = (UnityEngine_Component_o *)v7->fields.objectParent;
  if ( !objectParent )
    goto LABEL_14;
  v19 = (UnityEngine_Transform_o *)this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0LL);
  if ( !v19 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)this, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !this
    || (v25.fields.z = 0.0,
        v25.fields.x = x,
        v25.fields.y = y,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL),
        transform = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL),
        !transform) )
  {
LABEL_14:
    sub_B5D69C(this, method);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v17,
    (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
}


void __fastcall EndrolEffectManager__SetEndRollTimes(
        EndrolEffectManager_o *this,
        float allTime,
        float waitTime,
        float x,
        float z,
        int32_t miny,
        int32_t maxy,
        EndrolRootComponent_o *parent,
        const MethodInfo *method)
{
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_double__o *v26; // x24
  struct System_Collections_Generic_List_double__o **p_effectOccurrenceTime; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  float v40; // s12
  int32_t v41; // w0
  __int64 v42; // x1
  int v43; // w25
  int32_t v44; // w22
  int v45; // w26
  int32_t v46; // w23
  float v47; // s14
  bool v48; // zf
  float v49; // s11
  int32_t v50; // w0
  int32_t v51; // w24
  int v52; // w28
  double v53; // d14
  float v54; // s0
  System_Collections_Generic_List_double__o *v55; // x0
  const MethodInfo *v56; // x1

  if ( (byte_42ECFE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_double__Add__, miny, maxy, parent);
    sub_B5D5C4(&Method_System_Collections_Generic_List_double__Sort__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_double___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_double__TypeInfo, v23, v24, v25);
    byte_42ECFE6 = 1;
  }
  v26 = (System_Collections_Generic_List_double__o *)sub_B5D694(System_Collections_Generic_List_double__TypeInfo);
  System_Collections_Generic_List_double____ctor(
    v26,
    (const MethodInfo_307D6DC *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v26;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectOccurrenceTime,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.objectParent = parent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectParent,
    (System_Int32_array **)parent,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = x - z;
  this->fields.totalTime = allTime;
  v41 = UnityEngine_Mathf__CeilToInt(allTime / (float)(x - z), 0LL);
  v43 = v41 - 1;
  if ( v41 >= 1 )
  {
    v44 = v41;
    v45 = 0;
    v46 = maxy + 1;
    while ( 1 )
    {
      v47 = v40 * (float)v45;
      v48 = (float)(v47 + x) > allTime && v45 == v43;
      v49 = v48 ? allTime - v47 : x;
      v50 = UnityEngine_Random__Range_35654020(miny, v46, 0LL);
      if ( v50 >= 1 )
        break;
LABEL_15:
      if ( ++v45 >= v44 )
        goto LABEL_16;
    }
    v51 = v50;
    v52 = 0;
    v53 = (float)(v47 + waitTime);
    while ( 1 )
    {
      v54 = UnityEngine_Random__Range(0.0, v49, 0LL);
      v55 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      System_Collections_Generic_List_double___Add(
        v55,
        v53 + (float)(floorf(v54 * 10.0) / 10.0),
        (const MethodInfo_307E434 *)Method_System_Collections_Generic_List_double__Add__);
      if ( ++v52 >= v51 )
        goto LABEL_15;
    }
LABEL_18:
    sub_B5D69C(v55, v42);
  }
LABEL_16:
  v55 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_18;
  System_Collections_Generic_List_double___Sort(
    v55,
    (const MethodInfo_308037C *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v56);
}


void __fastcall EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EndrolEffectManager_o *v4; // x19
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
  struct System_Collections_Generic_List_double__o *effectOccurrenceTime; // x8
  float passageTime; // s8
  double truncateTime; // d9
  float v20; // s0
  double v21; // d0
  struct System_Collections_Generic_List_double__o *v22; // x20
  __int64 nowPlayEffectNumber; // x21
  int v24; // w20
  int v25; // w23
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  struct System_Collections_Generic_List_Vector2__o *v27; // x22
  unsigned int v28; // w21
  struct System_Collections_Generic_List_Vector2__o *v29; // x22

  v4 = this;
  if ( (byte_42ECFE5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__Remove__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_double__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_double__get_Item__, v11, v12, v13);
    this = (EndrolEffectManager_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_Vector2__get_Item__,
                                      v14,
                                      v15,
                                      v16);
    byte_42ECFE5 = 1;
  }
  effectOccurrenceTime = v4->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    goto LABEL_24;
  if ( effectOccurrenceTime->fields._size > v4->fields.nowPlayEffectNumber )
  {
    passageTime = v4->fields.passageTime;
    if ( passageTime <= v4->fields.totalTime && !v4->fields.isForceEnd )
    {
      truncateTime = v4->fields.truncateTime;
      v20 = passageTime + UnityEngine_Time__get_deltaTime(0LL);
      v4->fields.passageTime = v20;
      v21 = (float)(floorf(v20 * 10.0) / 10.0);
      v4->fields.truncateTime = v21;
      if ( truncateTime != v21 )
      {
        v22 = v4->fields.effectOccurrenceTime;
        if ( !v22 )
          goto LABEL_24;
        nowPlayEffectNumber = v4->fields.nowPlayEffectNumber;
        if ( v22->fields._size <= (unsigned int)nowPlayEffectNumber )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v22->fields._items->m_Items[nowPlayEffectNumber] == v21 )
        {
          this = (EndrolEffectManager_o *)EndrolEffectManager__CheckOverlap(v4, v21, method);
          if ( (int)this >= 1 )
          {
            v24 = (int)this;
            v25 = 0;
            while ( 1 )
            {
              bgGridPointList = v4->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_35654020(0, bgGridPointList->fields._size, 0LL);
              v27 = v4->fields.bgGridPointList;
              if ( !v27 )
                break;
              v28 = (unsigned int)this;
              if ( v27->fields._size <= (unsigned int)this )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              EndrolEffectManager__InstansiateEffect(
                v4,
                *(UnityEngine_Vector2_o *)&v27->fields._items->m_Items[(int)this].fields.y,
                method);
              v29 = v4->fields.bgGridPointList;
              if ( !v29 )
                break;
              if ( v29->fields._size <= v28 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v4->fields.bgGridPointList,
                                                *(UnityEngine_Vector2_o *)&v29->fields._items->m_Items[v28].fields.y,
                                                (const MethodInfo_303FF9C *)Method_System_Collections_Generic_List_Vector2__Remove__);
              ++v25;
              ++v4->fields.nowPlayEffectNumber;
              if ( v25 >= v24 )
                return;
            }
LABEL_24:
            sub_B5D69C(this, method);
          }
        }
      }
    }
  }
}