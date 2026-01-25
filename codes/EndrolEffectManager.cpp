void EndrolEffectManager___cctor(const MethodInfo *method)
{
  if ( (byte_4CE86F7 & 1) == 0 )
  {
    sub_1C7BAE8(&EndrolEffectManager_TypeInfo);
    byte_4CE86F7 = 1;
  }
  *EndrolEffectManager_TypeInfo->static_fields = (struct EndrolEffectManager_StaticFields)0x101FFFFFEFFLL;
}


void EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CE86F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
    byte_4CE86F6 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector2__o *v3; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  __int64 v5; // x1
  int i; // w20
  int j; // w27
  EndrolEffectManager_c *v8; // x0
  float v9; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_Vector2__o *v11; // x0
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  float *v15; // x8
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  if ( (byte_4CE86F2 & 1) == 0 )
  {
    sub_1C7BAE8(&EndrolEffectManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_4CE86F2 = 1;
  }
  v3 = (System_Collections_Generic_List_Vector2__o *)sub_1C7BD34(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v3,
    (const MethodInfo_38BBC5C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v3;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_1C7BA8C(p_bgGridPointList, v3);
  for ( i = 0; i != 26; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      if ( (j & 1) == 0 )
      {
        v8 = EndrolEffectManager_TypeInfo;
        if ( (i & 1) != 0 )
          v9 = (float)((float)((float)((float)j * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v9 = (float)((float)((float)j * 22.25) + -512.0) + 0.0;
        if ( !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v8 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v8->static_fields;
        if ( v9 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_15;
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v9 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_15:
          v11 = *p_bgGridPointList;
          if ( !*p_bgGridPointList
            || (items = v11->fields._items,
                v13 = Method_System_Collections_Generic_List_Vector2__Add__,
                ++v11->fields._version,
                !items) )
          {
            sub_1C7BD40(v11, v5);
          }
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v16.fields.x = v9;
            v16.fields.y = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
            System_Collections_Generic_List_Vector2___AddWithResize(
              v11,
              v16,
              *(const MethodInfo_38BC4C4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = (float *)(&items->obj.klass + size);
            v11->fields._size = size + 1;
            v15[8] = v9;
            v15[9] = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CE86F4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_double__GetEnumerator__);
    byte_4CE86F4 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_1C7BD40(0, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v8,
    effectOccurrenceTime,
    (const MethodInfo_38159A0 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v6 = 0;
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v9,
            (const MethodInfo_35B8EB4 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v9.fields._current == checkTime )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v9,
    (const MethodInfo_35B8EB0 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v6;
}


void EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CE86F5 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE86F5 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
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
  Il2CppObject *v8; // x19
  EndrolEffectManager_o *v9; // x19
  UnityEngine_Component_o *objectParent; // x8
  EndrolEffectManager_o *v11; // x20
  EndrolEffectManager_o *v12; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = this;
  if ( (byte_4CE86F3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EndrolEffectManager_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE86F3 = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_15;
  v7 = UnityEngine_Random__Range_71829860(0, effectObject->max_length, 0);
  if ( (unsigned int)v7 >= LODWORD(effectObject->max_length) )
    sub_1C7BD48(v7);
  v8 = (Il2CppObject *)effectObject->m_Items[(int)v7];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                    v8,
                                    (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v9 = this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  objectParent = (UnityEngine_Component_o *)v5->fields.objectParent;
  if ( !objectParent )
    goto LABEL_15;
  v11 = this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0);
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v11, (UnityEngine_Transform_o *)this, 0);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0);
  if ( !this )
    goto LABEL_15;
  v13.fields.z = 0.0;
  v13.fields.x = x;
  v13.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v13, 0);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0);
  v12 = this;
  if ( !byte_4CE7E5E )
  {
    this = (EndrolEffectManager_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1C7BD40(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  UnityEngine_GameObject__AddComponent_object_(
    (UnityEngine_GameObject_o *)v9,
    (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  struct System_Collections_Generic_List_double__o **p_effectOccurrenceTime; // x21
  __int64 v19; // x1
  float v20; // s12
  float v21; // s11
  unsigned int v22; // w9
  int v23; // w24
  int v24; // w26
  int32_t v25; // w22
  float v26; // s14
  bool v27; // zf
  float v28; // s11
  int32_t v29; // w0
  int32_t v30; // w23
  double v31; // d14
  float v32; // s0
  System_Collections_Generic_List_double__o *v33; // x0
  struct System_Double_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  double v37; // d0
  const MethodInfo *v38; // x1

  if ( (byte_4CE86F1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_double__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_double__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_double___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_double__TypeInfo);
    byte_4CE86F1 = 1;
  }
  v17 = (System_Collections_Generic_List_double__o *)sub_1C7BD34(System_Collections_Generic_List_double__TypeInfo);
  System_Collections_Generic_List_double____ctor(
    v17,
    (const MethodInfo_381466C *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v17;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_1C7BA8C(&this->fields.effectOccurrenceTime, v17);
  this->fields.objectParent = parent;
  sub_1C7BA8C(&this->fields.objectParent, parent);
  this->fields.totalTime = allTime;
  v20 = x - z;
  if ( !byte_4CE84E7 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE84E7 = 1;
  }
  v21 = allTime / v20;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = vcvtps_s32_f32(v21);
  if ( ceilf(v21) == INFINITY )
    v23 = 0x80000000;
  else
    v23 = v22;
  if ( v23 >= 1 )
  {
    v24 = 0;
    v25 = maxy + 1;
    while ( 1 )
    {
      v26 = v20 * (float)v24;
      v27 = (float)(v26 + x) > allTime && v24 == v23 - 1;
      v28 = v27 ? allTime - v26 : x;
      v29 = UnityEngine_Random__Range_71829860(miny, v25, 0);
      if ( v29 >= 1 )
        break;
LABEL_26:
      if ( ++v24 == v23 )
        goto LABEL_27;
    }
    v30 = v29;
    v31 = (float)(v26 + waitTime);
    while ( 1 )
    {
      v32 = UnityEngine_Random__Range(0.0, v28, 0);
      v33 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      items = v33->fields._items;
      v35 = Method_System_Collections_Generic_List_double__Add__;
      ++v33->fields._version;
      if ( !items )
        break;
      size = v33->fields._size;
      v37 = v31 + (float)(floorf(v32 * 10.0) / 10.0);
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_double___AddWithResize(
          v33,
          v37,
          *(const MethodInfo_3814EC8 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v33->fields._size = size + 1;
        items->m_Items[size] = v37;
      }
      if ( !--v30 )
        goto LABEL_26;
    }
LABEL_29:
    sub_1C7BD40(v33, v19);
  }
LABEL_27:
  v33 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_29;
  System_Collections_Generic_List_double___Sort(
    v33,
    (const MethodInfo_381680C *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v38);
}


void EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
{
  EndrolEffectManager_o *v2; // x19
  struct System_Collections_Generic_List_double__o *effectOccurrenceTime; // x8
  float passageTime; // s8
  double truncateTime; // d9
  float v6; // s0
  double v7; // d0
  const MethodInfo *v8; // x1
  double Item; // d0
  double v10; // d1
  int v11; // w20
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  int32_t v13; // w21
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_Vector2__o *v15; // x22
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4

  v2 = this;
  if ( (byte_4CE86F0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Vector2__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_double__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    this = (EndrolEffectManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_double__get_Item__);
    byte_4CE86F0 = 1;
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
        Item = System_Collections_Generic_List_double___get_Item(
                 (System_Collections_Generic_List_double__o *)this,
                 v2->fields.nowPlayEffectNumber,
                 (const MethodInfo_3814BD0 *)Method_System_Collections_Generic_List_double__get_Item__);
        v10 = v2->fields.truncateTime;
        if ( Item == v10 )
        {
          this = (EndrolEffectManager_o *)EndrolEffectManager__CheckOverlap(v2, v10, v8);
          if ( (int)this >= 1 )
          {
            v11 = (int)this;
            while ( 1 )
            {
              bgGridPointList = v2->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_71829860(0, bgGridPointList->fields._size, 0);
              if ( !v2->fields.bgGridPointList )
                break;
              v13 = (int)this;
              v16 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      (int32_t)this,
                      (const MethodInfo_38BC1C0 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              EndrolEffectManager__InstansiateEffect(v2, v16, v14);
              v15 = v2->fields.bgGridPointList;
              if ( !v15 )
                break;
              v17 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      v13,
                      (const MethodInfo_38BC1C0 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v15,
                                                v17,
                                                (const MethodInfo_38BDA0C *)Method_System_Collections_Generic_List_Vector2__Remove__);
              --v11;
              ++v2->fields.nowPlayEffectNumber;
              if ( !v11 )
                return;
            }
LABEL_18:
            sub_1C7BD40(this, method);
          }
        }
      }
    }
  }
}