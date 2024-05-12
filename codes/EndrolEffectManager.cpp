void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  if ( (byte_438FA89 & 1) == 0 )
  {
    sub_B775C4(&EndrolEffectManager_TypeInfo);
    byte_438FA89 = 1;
  }
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaStart = -257;
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaEnd = 257;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_438FA88 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
    byte_438FA88 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector2__o *v3; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  int v12; // w20
  int v13; // w23
  EndrolEffectManager_c *v14; // x0
  float v15; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4

  if ( (byte_438FA84 & 1) == 0 )
  {
    sub_B775C4(&EndrolEffectManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_B775C4(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_438FA84 = 1;
  }
  v3 = (System_Collections_Generic_List_Vector2__o *)sub_B77694(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v3,
    (const MethodInfo_301C9E8 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v3;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_B77560((BattleServantConfConponent_o *)p_bgGridPointList, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  v12 = 0;
  do
  {
    v13 = -1;
    do
    {
      if ( (++v13 & 1) == 0 )
      {
        v14 = EndrolEffectManager_TypeInfo;
        if ( (v12 & 1) != 0 )
          v15 = (float)((float)((float)((float)v13 * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v15 = (float)((float)((float)v13 * 22.25) + -512.0) + 0.0;
        if ( (BYTE3(EndrolEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v14 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v14->static_fields;
        if ( v15 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_17;
        if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v15 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_17:
          if ( !*p_bgGridPointList )
            sub_B7769C(0LL, v11);
          v18.fields.x = v15;
          v18.fields.y = (float)((float)((float)v12 * -22.25) + 288.0) + 0.5;
          System_Collections_Generic_List_Vector2___Add(
            *p_bgGridPointList,
            v18,
            (const MethodInfo_301D74C *)Method_System_Collections_Generic_List_Vector2__Add__);
        }
      }
    }
    while ( (unsigned int)v13 < 0x2D );
  }
  while ( (unsigned int)v12++ < 0x19 );
}


int32_t __fastcall EndrolEffectManager__CheckOverlap(
        EndrolEffectManager_o *this,
        double checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_double__o *effectOccurrenceTime; // x0
  int32_t v6; // w19
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438FA86 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_double__GetEnumerator__);
    byte_438FA86 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v8,
    effectOccurrenceTime,
    (const MethodInfo_30E0C78 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v6 = 0;
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v9,
            (const MethodInfo_2259A74 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v9.fields.current == checkTime )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v9,
    (const MethodInfo_2259A70 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v6;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_438FA87 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438FA87 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolEffectManager__InstansiateEffect(
        EndrolEffectManager_o *this,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  EndrolEffectManager_o *v5; // x20
  struct UnityEngine_GameObject_array *effectObject; // x19
  __int64 v7; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v8; // x19
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Component_o *objectParent; // x8
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  __int64 v16; // x0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = this;
  if ( (byte_438FA85 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EndrolEffectManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438FA85 = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_14;
  v7 = UnityEngine_Random__Range_36343764(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v7 >= effectObject->max_length )
  {
    v16 = sub_B776C8(v7);
    sub_B77668(v16, 0LL);
  }
  v8 = (UnityEngine_UI_Dropdown_DropdownItem_o *)effectObject->m_Items[(int)v7];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    v8,
                                    (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  v9 = (UnityEngine_GameObject_o *)this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  objectParent = (UnityEngine_Component_o *)v5->fields.objectParent;
  if ( !objectParent )
    goto LABEL_14;
  v11 = (UnityEngine_Transform_o *)this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0LL);
  if ( !v11 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)this, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !this
    || (v17.fields.z = 0.0,
        v17.fields.x = x,
        v17.fields.y = y,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0LL),
        transform = UnityEngine_GameObject__get_transform(v9, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL),
        !transform) )
  {
LABEL_14:
    sub_B7769C(this, method);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v9,
    (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  System_Collections_Generic_List_double__o *v17; // x24
  struct System_Collections_Generic_List_double__o **p_effectOccurrenceTime; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  float v31; // s12
  int32_t v32; // w0
  __int64 v33; // x1
  int v34; // w25
  int32_t v35; // w22
  int v36; // w26
  int32_t v37; // w23
  float v38; // s14
  bool v39; // zf
  float v40; // s11
  int32_t v41; // w0
  int32_t v42; // w24
  int v43; // w28
  double v44; // d14
  float v45; // s0
  System_Collections_Generic_List_double__o *v46; // x0
  const MethodInfo *v47; // x1

  if ( (byte_438FA83 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_double__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_double__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_double___ctor__);
    sub_B775C4(&System_Collections_Generic_List_double__TypeInfo);
    byte_438FA83 = 1;
  }
  v17 = (System_Collections_Generic_List_double__o *)sub_B77694(System_Collections_Generic_List_double__TypeInfo);
  System_Collections_Generic_List_double____ctor(
    v17,
    (const MethodInfo_30DF0B8 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v17;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.effectOccurrenceTime,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.objectParent = parent;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.objectParent,
    (System_Int32_array **)parent,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = x - z;
  this->fields.totalTime = allTime;
  v32 = UnityEngine_Mathf__CeilToInt(allTime / (float)(x - z), 0LL);
  v34 = v32 - 1;
  if ( v32 >= 1 )
  {
    v35 = v32;
    v36 = 0;
    v37 = maxy + 1;
    while ( 1 )
    {
      v38 = v31 * (float)v36;
      v39 = (float)(v38 + x) > allTime && v36 == v34;
      v40 = v39 ? allTime - v38 : x;
      v41 = UnityEngine_Random__Range_36343764(miny, v37, 0LL);
      if ( v41 >= 1 )
        break;
LABEL_15:
      if ( ++v36 >= v35 )
        goto LABEL_16;
    }
    v42 = v41;
    v43 = 0;
    v44 = (float)(v38 + waitTime);
    while ( 1 )
    {
      v45 = UnityEngine_Random__Range(0.0, v40, 0LL);
      v46 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      System_Collections_Generic_List_double___Add(
        v46,
        v44 + (float)(floorf(v45 * 10.0) / 10.0),
        (const MethodInfo_30DFE10 *)Method_System_Collections_Generic_List_double__Add__);
      if ( ++v43 >= v42 )
        goto LABEL_15;
    }
LABEL_18:
    sub_B7769C(v46, v33);
  }
LABEL_16:
  v46 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_18;
  System_Collections_Generic_List_double___Sort(
    v46,
    (const MethodInfo_30E1D58 *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v47);
}


void __fastcall EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
{
  EndrolEffectManager_o *v2; // x19
  struct System_Collections_Generic_List_double__o *effectOccurrenceTime; // x8
  float passageTime; // s8
  double truncateTime; // d9
  float v6; // s0
  double v7; // d0
  struct System_Collections_Generic_List_double__o *v8; // x20
  __int64 nowPlayEffectNumber; // x21
  int v10; // w20
  int v11; // w23
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  struct System_Collections_Generic_List_Vector2__o *v13; // x22
  unsigned int v14; // w21
  struct System_Collections_Generic_List_Vector2__o *v15; // x22

  v2 = this;
  if ( (byte_438FA82 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Vector2__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_double__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_double__get_Item__);
    this = (EndrolEffectManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    byte_438FA82 = 1;
  }
  effectOccurrenceTime = v2->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    goto LABEL_24;
  if ( effectOccurrenceTime->fields._size > v2->fields.nowPlayEffectNumber )
  {
    passageTime = v2->fields.passageTime;
    if ( passageTime <= v2->fields.totalTime && !v2->fields.isForceEnd )
    {
      truncateTime = v2->fields.truncateTime;
      v6 = passageTime + UnityEngine_Time__get_deltaTime(0LL);
      v2->fields.passageTime = v6;
      v7 = (float)(floorf(v6 * 10.0) / 10.0);
      v2->fields.truncateTime = v7;
      if ( truncateTime != v7 )
      {
        v8 = v2->fields.effectOccurrenceTime;
        if ( !v8 )
          goto LABEL_24;
        nowPlayEffectNumber = v2->fields.nowPlayEffectNumber;
        if ( v8->fields._size <= (unsigned int)nowPlayEffectNumber )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( v8->fields._items->m_Items[nowPlayEffectNumber] == v7 )
        {
          this = (EndrolEffectManager_o *)EndrolEffectManager__CheckOverlap(v2, v7, method);
          if ( (int)this >= 1 )
          {
            v10 = (int)this;
            v11 = 0;
            while ( 1 )
            {
              bgGridPointList = v2->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_36343764(0, bgGridPointList->fields._size, 0LL);
              v13 = v2->fields.bgGridPointList;
              if ( !v13 )
                break;
              v14 = (unsigned int)this;
              if ( v13->fields._size <= (unsigned int)this )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              EndrolEffectManager__InstansiateEffect(
                v2,
                *(UnityEngine_Vector2_o *)&v13->fields._items->m_Items[(int)this].fields.y,
                method);
              v15 = v2->fields.bgGridPointList;
              if ( !v15 )
                break;
              if ( v15->fields._size <= v14 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v2->fields.bgGridPointList,
                                                *(UnityEngine_Vector2_o *)&v15->fields._items->m_Items[v14].fields.y,
                                                (const MethodInfo_301F164 *)Method_System_Collections_Generic_List_Vector2__Remove__);
              ++v11;
              ++v2->fields.nowPlayEffectNumber;
              if ( v11 >= v10 )
                return;
            }
LABEL_24:
            sub_B7769C(this, method);
          }
        }
      }
    }
  }
}