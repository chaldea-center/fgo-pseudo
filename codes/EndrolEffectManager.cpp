void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218BA7 & 1) == 0 )
  {
    sub_B0D8A4(&EndrolEffectManager_TypeInfo, v1);
    byte_4218BA7 = 1;
  }
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaStart = -257;
  EndrolEffectManager_TypeInfo->static_fields->nonEffectAreaEnd = 257;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4218BA6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__, method);
    byte_4218BA6 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_Vector2__o *v7; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int v15; // w20
  int v16; // w23
  EndrolEffectManager_c *v17; // x0
  float v18; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4

  if ( (byte_4218BA2 & 1) == 0 )
  {
    sub_B0D8A4(&EndrolEffectManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_Vector2__TypeInfo, v6);
    byte_4218BA2 = 1;
  }
  v7 = (System_Collections_Generic_List_Vector2__o *)sub_B0D974(
                                                       System_Collections_Generic_List_Vector2__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_Vector2____ctor(
    v7,
    (const MethodInfo_2ED3BC0 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v7;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_B0D840((BattleServantConfConponent_o *)p_bgGridPointList, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v15 = 0;
  do
  {
    v16 = -1;
    do
    {
      if ( (++v16 & 1) == 0 )
      {
        v17 = EndrolEffectManager_TypeInfo;
        if ( (v15 & 1) != 0 )
          v18 = (float)((float)((float)((float)v16 * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v18 = (float)((float)((float)v16 * 22.25) + -512.0) + 0.0;
        if ( (BYTE3(EndrolEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v17 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v17->static_fields;
        if ( v18 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_17;
        if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v18 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_17:
          if ( !*p_bgGridPointList )
            sub_B0D97C(0LL);
          v21.fields.x = v18;
          v21.fields.y = (float)((float)((float)v15 * -22.25) + 288.0) + 0.5;
          System_Collections_Generic_List_Vector2___Add(
            *p_bgGridPointList,
            v21,
            (const MethodInfo_2ED4924 *)Method_System_Collections_Generic_List_Vector2__Add__);
        }
      }
    }
    while ( (unsigned int)v16 < 0x2D );
  }
  while ( (unsigned int)v15++ < 0x19 );
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

  if ( (byte_4218BA4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_double__GetEnumerator__, v7);
    byte_4218BA4 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_double___GetEnumerator(
    &v11,
    effectOccurrenceTime,
    (const MethodInfo_2F739C4 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v9 = 0;
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v12,
            (const MethodInfo_210F8A4 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v12.fields.current == checkTime )
      ++v9;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v12,
    (const MethodInfo_210F8A0 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v9;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4218BA5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218BA5 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *effectObject; // x19
  __int64 v9; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v10; // x19
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Component_o *objectParent; // x8
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *transform; // x20
  int v15; // s0
  __int64 v18; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = this;
  if ( (byte_4218BA3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    this = (EndrolEffectManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4218BA3 = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_14;
  v9 = UnityEngine_Random__Range_34969060(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v9 >= effectObject->max_length )
  {
    v18 = sub_B0D9A8(v9);
    sub_B0D948(v18, 0LL);
  }
  v10 = (UnityEngine_UI_Dropdown_DropdownItem_o *)effectObject->m_Items[(int)v9];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    v10,
                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_14;
  v11 = (UnityEngine_GameObject_o *)this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  objectParent = (UnityEngine_Component_o *)v5->fields.objectParent;
  if ( !objectParent )
    goto LABEL_14;
  v13 = (UnityEngine_Transform_o *)this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0LL);
  if ( !v13 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)this, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !this
    || (v19.fields.z = 0.0,
        v19.fields.x = x,
        v19.fields.y = y,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v19, 0LL),
        transform = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL),
        !transform) )
  {
LABEL_14:
    sub_B0D97C(this);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
  UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
    v11,
    (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  struct System_Collections_Generic_List_double__o **p_effectOccurrenceTime; // x21
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
  System_Collections_Generic_List_double__o *v48; // x0
  const MethodInfo *v49; // x1

  if ( (byte_4218BA1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_double__Add__, *(_QWORD *)&miny);
    sub_B0D8A4(&Method_System_Collections_Generic_List_double__Sort__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_double___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_double__TypeInfo, v19);
    byte_4218BA1 = 1;
  }
  v20 = (System_Collections_Generic_List_double__o *)sub_B0D974(
                                                       System_Collections_Generic_List_double__TypeInfo,
                                                       *(_QWORD *)&miny,
                                                       *(_QWORD *)&maxy);
  System_Collections_Generic_List_double____ctor(
    v20,
    (const MethodInfo_2F71E04 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v20;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectOccurrenceTime,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.objectParent = parent;
  sub_B0D840(
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
      v43 = UnityEngine_Random__Range_34969060(miny, v39, 0LL);
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
      v48 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      System_Collections_Generic_List_double___Add(
        v48,
        v46 + (float)(floorf(v47 * 10.0) / 10.0),
        (const MethodInfo_2F72B5C *)Method_System_Collections_Generic_List_double__Add__);
      if ( ++v45 >= v44 )
        goto LABEL_15;
    }
LABEL_18:
    sub_B0D97C(v48);
  }
LABEL_16:
  v48 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_18;
  System_Collections_Generic_List_double___Sort(
    v48,
    (const MethodInfo_2F74AA4 *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v49);
}


void __fastcall EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
{
  EndrolEffectManager_o *v2; // x19
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
  int v15; // w20
  int v16; // w23
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_List_Vector2__o *v19; // x22
  unsigned int v20; // w21
  struct System_Collections_Generic_List_Vector2__o *v21; // x22

  v2 = this;
  if ( (byte_4218BA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2__Remove__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_double__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_double__get_Item__, v5);
    this = (EndrolEffectManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_Vector2__get_Item__, v6);
    byte_4218BA0 = 1;
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
      v11 = passageTime + UnityEngine_Time__get_deltaTime(0LL);
      v2->fields.passageTime = v11;
      v12 = (float)(floorf(v11 * 10.0) / 10.0);
      v2->fields.truncateTime = v12;
      if ( truncateTime != v12 )
      {
        v13 = v2->fields.effectOccurrenceTime;
        if ( !v13 )
          goto LABEL_24;
        nowPlayEffectNumber = v2->fields.nowPlayEffectNumber;
        if ( v13->fields._size <= (unsigned int)nowPlayEffectNumber )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( v13->fields._items->m_Items[nowPlayEffectNumber] == v12 )
        {
          this = (EndrolEffectManager_o *)EndrolEffectManager__CheckOverlap(v2, v12, v10);
          if ( (int)this >= 1 )
          {
            v15 = (int)this;
            v16 = 0;
            while ( 1 )
            {
              bgGridPointList = v2->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_34969060(0, bgGridPointList->fields._size, 0LL);
              v19 = v2->fields.bgGridPointList;
              if ( !v19 )
                break;
              v20 = (unsigned int)this;
              if ( v19->fields._size <= (unsigned int)this )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              EndrolEffectManager__InstansiateEffect(
                v2,
                *(UnityEngine_Vector2_o *)&v19->fields._items->m_Items[(int)this].fields.y,
                v18);
              v21 = v2->fields.bgGridPointList;
              if ( !v21 )
                break;
              if ( v21->fields._size <= v20 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v2->fields.bgGridPointList,
                                                *(UnityEngine_Vector2_o *)&v21->fields._items->m_Items[v20].fields.y,
                                                (const MethodInfo_2ED633C *)Method_System_Collections_Generic_List_Vector2__Remove__);
              ++v16;
              ++v2->fields.nowPlayEffectNumber;
              if ( v16 >= v15 )
                return;
            }
LABEL_24:
            sub_B0D97C(this);
          }
        }
      }
    }
  }
}