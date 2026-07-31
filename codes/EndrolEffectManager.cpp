void EndrolEffectManager___cctor(const MethodInfo *method)
{
  if ( (byte_5932397 & 1) == 0 )
  {
    sub_21FFC50(&EndrolEffectManager_TypeInfo);
    byte_5932397 = 1;
  }
  *EndrolEffectManager_TypeInfo->static_fields = (struct EndrolEffectManager_StaticFields)0x101FFFFFEFFLL;
}


void EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_5932396 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
    byte_5932396 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector2__o *v3; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  int i; // w20
  int j; // w24
  EndrolEffectManager_c *v15; // x0
  float v16; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_Vector2__o *v18; // x0
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  float *v22; // x8
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4

  if ( (byte_5932392 & 1) == 0 )
  {
    sub_21FFC50(&EndrolEffectManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_5932392 = 1;
  }
  v3 = (System_Collections_Generic_List_Vector2__o *)sub_21FFEBC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v3,
    (const MethodInfo_44AC32C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v3;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_bgGridPointList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  for ( i = 0; i != 26; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      if ( (j & 1) == 0 )
      {
        v15 = EndrolEffectManager_TypeInfo;
        if ( (i & 1) != 0 )
          v16 = (float)((float)((float)j * 22.25) + -512.0) + 22.25;
        else
          v16 = (float)((float)j * 22.25) + -512.0;
        if ( !*(&EndrolEffectManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo, v11, v12);
          v15 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v15->static_fields;
        if ( v16 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_15;
        if ( !*(&v15->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v15, v11, v12);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v16 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_15:
          v18 = *p_bgGridPointList;
          if ( !*p_bgGridPointList
            || (items = v18->fields._items,
                v20 = Method_System_Collections_Generic_List_Vector2__Add__,
                ++v18->fields._version,
                !items) )
          {
            sub_21FFECC(v18, v11);
          }
          size = v18->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v23.fields.x = v16;
            v23.fields.y = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
            System_Collections_Generic_List_Vector2___AddWithResize(
              v18,
              v23,
              *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = (float *)(&items->obj.klass + size);
            v18->fields._size = size + 1;
            v22[8] = v16;
            v22[9] = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
          }
        }
      }
    }
  }
}


int32_t EndrolEffectManager__CheckOverlap(EndrolEffectManager_o *this, double checkTime, const MethodInfo *method)
{
  System_Collections_Generic_List_double__o *effectOccurrenceTime; // x0
  int32_t v6; // w19
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932394 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_double__GetEnumerator__);
    byte_5932394 = 1;
  }
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  memset(&v8, 0, sizeof(v8));
  if ( !effectOccurrenceTime )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v8,
    effectOccurrenceTime,
    (const MethodInfo_4424678 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v6 = 0;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v8,
            (const MethodInfo_40BF030 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v8.fields._current == checkTime )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v8,
    (const MethodInfo_40BF02C *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v6;
}


void EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5932395 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932395 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void EndrolEffectManager__InstansiateEffect(
        EndrolEffectManager_o *this,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  EndrolEffectManager_o *v5; // x20
  struct UnityEngine_GameObject_array *effectObject; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x19
  EndrolEffectManager_o *v11; // x19
  UnityEngine_Component_o *objectParent; // x8
  EndrolEffectManager_o *v13; // x20
  EndrolEffectManager_o *v14; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = this;
  if ( (byte_5932393 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EndrolEffectManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932393 = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_15;
  v7 = UnityEngine_Random__Range_83187376(0, effectObject->max_length, 0);
  if ( (unsigned int)v7 >= LODWORD(effectObject->max_length) )
    sub_21FFED4(v7);
  v10 = (Il2CppObject *)effectObject->m_Items[(int)v7];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                    v10,
                                    (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v11 = this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  objectParent = (UnityEngine_Component_o *)v5->fields.objectParent;
  if ( !objectParent )
    goto LABEL_15;
  v13 = this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0);
  if ( !v13 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v13, (UnityEngine_Transform_o *)this, 0);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  if ( !this )
    goto LABEL_15;
  v15.fields.z = 0.0;
  v15.fields.x = x;
  v15.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v15, 0);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  v14 = this;
  if ( !byte_5931945 )
  {
    this = (EndrolEffectManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v14 )
LABEL_15:
    sub_21FFECC(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  UnityEngine_GameObject__AddComponent_object_(
    (UnityEngine_GameObject_o *)v11,
    (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
}


void EndrolEffectManager__SetEndRollTimes(
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
  struct System_Collections_Generic_List_double__o **p_effectOccurrenceTime; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  float v33; // s12
  float v34; // s11
  unsigned int v35; // w9
  int v36; // w24
  int v37; // w27
  float v38; // s14
  bool v39; // zf
  float v40; // s11
  int32_t v41; // w0
  int32_t v42; // w23
  double v43; // d14
  float v44; // s0
  System_Collections_Generic_List_double__o *v45; // x0
  struct System_Double_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  double v49; // d0
  const MethodInfo *v50; // x1

  if ( (byte_5932391 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_double__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_double__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_double___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_double__TypeInfo);
    byte_5932391 = 1;
  }
  v17 = (System_Collections_Generic_List_double__o *)sub_21FFEBC(System_Collections_Generic_List_double__TypeInfo);
  System_Collections_Generic_List_double____ctor(
    v17,
    (const MethodInfo_4423334 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v17;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectOccurrenceTime,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.objectParent = parent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.objectParent,
    (int32_t)parent,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v33 = x - z;
  this->fields.totalTime = allTime;
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v34 = allTime / v33;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31, v32);
  v35 = vcvtps_s32_f32(v34);
  if ( ceilf(v34) == INFINITY )
    v36 = 0x80000000;
  else
    v36 = v35;
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      v38 = v33 * (float)v37;
      v39 = (float)(v38 + x) > allTime && v37 == v36 - 1;
      v40 = v39 ? allTime - v38 : x;
      v41 = UnityEngine_Random__Range_83187376(miny, maxy + 1, 0);
      if ( v41 >= 1 )
        break;
LABEL_26:
      if ( ++v37 == v36 )
        goto LABEL_27;
    }
    v42 = v41;
    v43 = (float)(v38 + waitTime);
    while ( 1 )
    {
      v44 = UnityEngine_Random__Range(0.0, v40, 0);
      v45 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      items = v45->fields._items;
      v47 = Method_System_Collections_Generic_List_double__Add__;
      ++v45->fields._version;
      if ( !items )
        break;
      size = v45->fields._size;
      v49 = v43 + (float)(floorf(v44 * 10.0) / 10.0);
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_double___AddWithResize(
          v45,
          v49,
          *(const MethodInfo_4423BC8 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v45->fields._size = size + 1;
        items->m_Items[size] = v49;
      }
      if ( !--v42 )
        goto LABEL_26;
    }
LABEL_29:
    sub_21FFECC(v45, v31);
  }
LABEL_27:
  v45 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_29;
  System_Collections_Generic_List_double___Sort(
    v45,
    (const MethodInfo_44254CC *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v50);
}


void EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
{
  EndrolEffectManager_o *v2; // x19
  struct System_Collections_Generic_List_double__o *effectOccurrenceTime; // x8
  float passageTime; // s8
  double truncateTime; // d9
  float v6; // s0
  double v7; // d1
  const MethodInfo *v8; // x1
  int v9; // w20
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  int32_t v11; // w21
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Vector2__o *v13; // x22
  UnityEngine_Vector2_o Item; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  v2 = this;
  if ( (byte_5932390 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_double__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    this = (EndrolEffectManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_double__get_Item__);
    byte_5932390 = 1;
  }
  effectOccurrenceTime = v2->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    goto LABEL_18;
  if ( effectOccurrenceTime->fields._size > v2->fields.nowPlayEffectNumber )
  {
    passageTime = v2->fields.passageTime;
    if ( passageTime <= v2->fields.totalTime && !v2->fields.isForceEnd )
    {
      truncateTime = v2->fields.truncateTime;
      v6 = passageTime + UnityEngine_Time__get_deltaTime(0);
      v2->fields.passageTime = v6;
      v7 = (float)(floorf(v6 * 10.0) / 10.0);
      v2->fields.truncateTime = v7;
      if ( truncateTime != v7 )
      {
        this = (EndrolEffectManager_o *)v2->fields.effectOccurrenceTime;
        if ( !this )
          goto LABEL_18;
        if ( System_Collections_Generic_List_double___get_Item(
               (System_Collections_Generic_List_double__o *)this,
               v2->fields.nowPlayEffectNumber,
               (const MethodInfo_44238CC *)Method_System_Collections_Generic_List_double__get_Item__) == v2->fields.truncateTime )
        {
          this = (EndrolEffectManager_o *)EndrolEffectManager__CheckOverlap(v2, v2->fields.truncateTime, v8);
          if ( (int)this >= 1 )
          {
            v9 = (int)this;
            while ( 1 )
            {
              bgGridPointList = v2->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_83187376(0, bgGridPointList->fields._size, 0);
              if ( !v2->fields.bgGridPointList )
                break;
              v11 = (int)this;
              Item = System_Collections_Generic_List_Vector2___get_Item(
                       v2->fields.bgGridPointList,
                       (int32_t)this,
                       (const MethodInfo_44AC8C4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              EndrolEffectManager__InstansiateEffect(v2, Item, v12);
              v13 = v2->fields.bgGridPointList;
              if ( !v13 )
                break;
              v15 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      v11,
                      (const MethodInfo_44AC8C4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v13,
                                                v15,
                                                (const MethodInfo_44AE0C4 *)Method_System_Collections_Generic_List_Vector2__Remove__);
              --v9;
              ++v2->fields.nowPlayEffectNumber;
              if ( !v9 )
                return;
            }
LABEL_18:
            sub_21FFECC(this, method);
          }
        }
      }
    }
  }
}