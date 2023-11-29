void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FE2A2 & 1) == 0 )
  {
    sub_B16FFC(&EndrolEffectManager_TypeInfo, v1);
    byte_40FE2A2 = 1;
  }
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaStart = -257;
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaEnd = 257;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FE2A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__, method);
    byte_40FE2A1 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_Vector2__o *v9; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int v17; // w20
  int v18; // w23
  EndrolEffectManager_c *v19; // x0
  float v20; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4

  if ( (byte_40FE29D & 1) == 0 )
  {
    sub_B16FFC(&EndrolEffectManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_Vector2__TypeInfo, v8);
    byte_40FE29D = 1;
  }
  v9 = (System_Collections_Generic_List_Vector2__o *)sub_B170CC(
                                                       System_Collections_Generic_List_Vector2__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_List_Vector2____ctor(
    v9,
    (const MethodInfo_2E4A3CC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v9;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_B16F98((BattleServantConfConponent_o *)p_bgGridPointList, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v17 = 0;
  do
  {
    v18 = -1;
    do
    {
      if ( (++v18 & 1) == 0 )
      {
        v19 = EndrolEffectManager_TypeInfo;
        if ( (v17 & 1) != 0 )
          v20 = (float)((float)((float)((float)v18 * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v20 = (float)((float)((float)v18 * 22.25) + -512.0) + 0.0;
        if ( (BYTE3(EndrolEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v19 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v19->static_fields;
        if ( v20 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_17;
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v20 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_17:
          if ( !*p_bgGridPointList )
            sub_B170D4();
          v23.fields.x = v20;
          v23.fields.y = (float)((float)((float)v17 * -22.25) + 288.0) + 0.5;
          System_Collections_Generic_List_Vector2___Add(
            *p_bgGridPointList,
            v23,
            (const MethodInfo_2E4B130 *)Method_System_Collections_Generic_List_Vector2__Add__);
        }
      }
    }
    while ( (unsigned int)v18 < 0x2D );
  }
  while ( (unsigned int)v17++ < 0x19 );
}


int32_t __fastcall EndrolEffectManager__CheckOverlap(
        EndrolEffectManager_o *this,
        double checkTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_double__o *effectOccurrenceTime; // x0
  int32_t v9; // w19
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FE29F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_double__GetEnumerator__, v7);
    byte_40FE29F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_B170D4();
  System_Collections_Generic_List_double___GetEnumerator(
    &v11,
    effectOccurrenceTime,
    (const MethodInfo_2ED4FB4 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v9 = 0;
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v12,
            (const MethodInfo_20713A8 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v12.fields.current == checkTime )
      ++v9;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v12,
    (const MethodInfo_20713A4 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v9;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FE2A0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FE2A0 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolEffectManager__InstansiateEffect(
        EndrolEffectManager_o *this,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *effectObject; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x19
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *objectParent; // x8
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FE29E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FE29E = 1;
  }
  effectObject = this->fields.effectObject;
  if ( !effectObject )
    goto LABEL_14;
  v9 = UnityEngine_Random__Range_34843248(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v9 >= effectObject->max_length )
  {
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)effectObject->m_Items[(int)v9];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v12,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v13 )
    goto LABEL_14;
  v14 = v13;
  transform = UnityEngine_GameObject__get_transform(v13, 0LL);
  objectParent = (UnityEngine_Component_o *)this->fields.objectParent;
  if ( !objectParent )
    goto LABEL_14;
  v17 = transform;
  v18 = UnityEngine_Component__get_transform(objectParent, 0LL);
  if ( !v17 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v17, v18, 0LL);
  v19 = UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !v19
    || (v24.fields.z = 0.0,
        v24.fields.x = x,
        v24.fields.y = y,
        UnityEngine_Transform__set_localPosition(v19, v24, 0LL),
        v20 = UnityEngine_GameObject__get_transform(v14, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL),
        !v20) )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v14,
    (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_double__o *v20; // x24
  System_Collections_Generic_List_double__o **p_effectOccurrenceTime; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  float v34; // s12
  int32_t v35; // w0
  int v36; // w25
  int32_t v37; // w22
  int v38; // w26
  int32_t v39; // w23
  float v40; // s14
  bool v41; // zf
  float v42; // s11
  int32_t v43; // w0
  int32_t v44; // w24
  int v45; // w28
  double v46; // d14
  float v47; // s0
  const MethodInfo *v48; // x1

  if ( (byte_40FE29C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_double__Add__, *(_QWORD *)&miny);
    sub_B16FFC(&Method_System_Collections_Generic_List_double__Sort__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_double___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_double__TypeInfo, v19);
    byte_40FE29C = 1;
  }
  v20 = (System_Collections_Generic_List_double__o *)sub_B170CC(
                                                       System_Collections_Generic_List_double__TypeInfo,
                                                       *(_QWORD *)&miny,
                                                       *(_QWORD *)&maxy,
                                                       parent,
                                                       method);
  System_Collections_Generic_List_double____ctor(
    v20,
    (const MethodInfo_2ED33F4 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v20;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectOccurrenceTime,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.objectParent = parent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectParent,
    (System_Int32_array **)parent,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = x - z;
  this->fields.totalTime = allTime;
  v35 = UnityEngine_Mathf__CeilToInt(allTime / (float)(x - z), 0LL);
  v36 = v35 - 1;
  if ( v35 >= 1 )
  {
    v37 = v35;
    v38 = 0;
    v39 = maxy + 1;
    while ( 1 )
    {
      v40 = v34 * (float)v38;
      v41 = (float)(v40 + x) > allTime && v38 == v36;
      v42 = v41 ? allTime - v40 : x;
      v43 = UnityEngine_Random__Range_34843248(miny, v39, 0LL);
      if ( v43 >= 1 )
        break;
LABEL_15:
      if ( ++v38 >= v37 )
        goto LABEL_16;
    }
    v44 = v43;
    v45 = 0;
    v46 = (float)(v40 + waitTime);
    while ( 1 )
    {
      v47 = UnityEngine_Random__Range(0.0, v42, 0LL);
      if ( !*p_effectOccurrenceTime )
        break;
      System_Collections_Generic_List_double___Add(
        *p_effectOccurrenceTime,
        v46 + (float)(floorf(v47 * 10.0) / 10.0),
        (const MethodInfo_2ED414C *)Method_System_Collections_Generic_List_double__Add__);
      if ( ++v45 >= v44 )
        goto LABEL_15;
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_16:
  if ( !*p_effectOccurrenceTime )
    goto LABEL_18;
  System_Collections_Generic_List_double___Sort(
    *p_effectOccurrenceTime,
    (const MethodInfo_2ED6094 *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v48);
}


void __fastcall EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_double__o *effectOccurrenceTime; // x8
  float passageTime; // s8
  double truncateTime; // d9
  const MethodInfo *v10; // x1
  float v11; // s0
  double v12; // d0
  struct System_Collections_Generic_List_double__o *v13; // x20
  __int64 nowPlayEffectNumber; // x21
  int32_t v15; // w0
  int32_t v16; // w20
  int32_t v17; // w23
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  int32_t v19; // w0
  const MethodInfo *v20; // x1
  struct System_Collections_Generic_List_Vector2__o *v21; // x22
  unsigned int v22; // w21
  struct System_Collections_Generic_List_Vector2__o *v23; // x22

  if ( (byte_40FE29B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__Remove__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_double__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_double__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__get_Item__, v6);
    byte_40FE29B = 1;
  }
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    goto LABEL_24;
  if ( effectOccurrenceTime->fields._size > this->fields.nowPlayEffectNumber )
  {
    passageTime = this->fields.passageTime;
    if ( passageTime <= this->fields.totalTime && !this->fields.isForceEnd )
    {
      truncateTime = this->fields.truncateTime;
      v11 = passageTime + UnityEngine_Time__get_deltaTime(0LL);
      this->fields.passageTime = v11;
      v12 = (float)(floorf(v11 * 10.0) / 10.0);
      this->fields.truncateTime = v12;
      if ( truncateTime != v12 )
      {
        v13 = this->fields.effectOccurrenceTime;
        if ( !v13 )
          goto LABEL_24;
        nowPlayEffectNumber = this->fields.nowPlayEffectNumber;
        if ( v13->fields._size <= (unsigned int)nowPlayEffectNumber )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v13->fields._items->m_Items[nowPlayEffectNumber] == v12 )
        {
          v15 = EndrolEffectManager__CheckOverlap(this, v12, v10);
          if ( v15 >= 1 )
          {
            v16 = v15;
            v17 = 0;
            while ( 1 )
            {
              bgGridPointList = this->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              v19 = UnityEngine_Random__Range_34843248(0, bgGridPointList->fields._size, 0LL);
              v21 = this->fields.bgGridPointList;
              if ( !v21 )
                break;
              v22 = v19;
              if ( v21->fields._size <= (unsigned int)v19 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              EndrolEffectManager__InstansiateEffect(
                this,
                *(UnityEngine_Vector2_o *)&v21->fields._items->m_Items[v19].fields.y,
                v20);
              v23 = this->fields.bgGridPointList;
              if ( !v23 )
                break;
              if ( v23->fields._size <= v22 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              System_Collections_Generic_List_Vector2___Remove(
                this->fields.bgGridPointList,
                *(UnityEngine_Vector2_o *)&v23->fields._items->m_Items[v22].fields.y,
                (const MethodInfo_2E4CB48 *)Method_System_Collections_Generic_List_Vector2__Remove__);
              ++v17;
              ++this->fields.nowPlayEffectNumber;
              if ( v17 >= v16 )
                return;
            }
LABEL_24:
            sub_B170D4();
          }
        }
      }
    }
  }
}