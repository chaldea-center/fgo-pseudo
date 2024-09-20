void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EDEA & 1) == 0 )
  {
    sub_1B885B0(&EndrolEffectManager_TypeInfo);
    byte_4A5EDEA = 1;
  }
  *EndrolEffectManager_TypeInfo->static_fields = (struct EndrolEffectManager_StaticFields)0x101FFFFFEFFLL;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EDE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
    byte_4A5EDE9 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector2__o *v3; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  int i; // w20
  int j; // w27
  EndrolEffectManager_c *v10; // x0
  float v11; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_Vector2__o *v13; // x0
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  float *v17; // x8
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4

  if ( (byte_4A5EDE5 & 1) == 0 )
  {
    sub_1B885B0(&EndrolEffectManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_4A5EDE5 = 1;
  }
  v3 = (System_Collections_Generic_List_Vector2__o *)sub_1B887FC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v3,
    (const MethodInfo_3550A50 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v3;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_bgGridPointList, (int32_t)v3, v5, v6);
  for ( i = 0; i != 26; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      if ( (j & 1) == 0 )
      {
        v10 = EndrolEffectManager_TypeInfo;
        if ( (i & 1) != 0 )
          v11 = (float)((float)((float)((float)j * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v11 = (float)((float)((float)j * 22.25) + -512.0) + 0.0;
        if ( !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v10 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v10->static_fields;
        if ( v11 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_15;
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v11 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_15:
          v13 = *p_bgGridPointList;
          if ( !*p_bgGridPointList
            || (items = v13->fields._items,
                v15 = Method_System_Collections_Generic_List_Vector2__Add__,
                ++v13->fields._version,
                !items) )
          {
            sub_1B8880C(v13, v7);
          }
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v18.fields.x = v11;
            v18.fields.y = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
            System_Collections_Generic_List_Vector2___AddWithResize(
              v13,
              v18,
              *(const MethodInfo_35512B8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = (float *)(&items->obj.klass + size);
            v13->fields._size = size + 1;
            v17[8] = v11;
            v17[9] = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
          }
        }
      }
    }
  }
}


int32_t __fastcall EndrolEffectManager__CheckOverlap(
        EndrolEffectManager_o *this,
        double checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_double__o *effectOccurrenceTime; // x0
  int32_t v6; // w19
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5EDE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_double__GetEnumerator__);
    byte_4A5EDE7 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v8,
    effectOccurrenceTime,
    (const MethodInfo_34D43D8 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v6 = 0;
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v9,
            (const MethodInfo_3272F6C *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v9.fields._current == checkTime )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v9,
    (const MethodInfo_3272F68 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v6;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5EDE8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDE8 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  EndrolEffectManager_o *v10; // x19
  UnityEngine_Component_o *objectParent; // x8
  EndrolEffectManager_o *v12; // x20
  EndrolEffectManager_o *v13; // x20
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = this;
  if ( (byte_4A5EDE6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EndrolEffectManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDE6 = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_15;
  v7 = UnityEngine_Random__Range_69419120(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v7 >= effectObject->max_length )
    sub_1B88814(v7, v8);
  v9 = (Il2CppObject *)effectObject->m_Items[(int)v7];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                    v9,
                                    (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v10 = this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  objectParent = (UnityEngine_Component_o *)v5->fields.objectParent;
  if ( !objectParent )
    goto LABEL_15;
  v12 = this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0LL);
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  if ( !this )
    goto LABEL_15;
  v14.fields.z = 0.0;
  v14.fields.x = x;
  v14.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v14, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v13 = this;
  if ( !byte_4A55CE6 )
  {
    this = (EndrolEffectManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v13 )
LABEL_15:
    sub_1B8880C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UnityEngine_GameObject__AddComponent_object_(
    (UnityEngine_GameObject_o *)v10,
    (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  float v24; // s12
  float v25; // s11
  unsigned int v26; // w9
  int v27; // w24
  int v28; // w26
  int32_t v29; // w22
  float v30; // s14
  bool v31; // zf
  float v32; // s11
  int32_t v33; // w0
  int32_t v34; // w23
  double v35; // d14
  float v36; // s0
  System_Collections_Generic_List_double__o *v37; // x0
  struct System_Double_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  double v41; // d0
  const MethodInfo *v42; // x1

  if ( (byte_4A5EDE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_double__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_double__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_double___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_double__TypeInfo);
    byte_4A5EDE4 = 1;
  }
  v17 = (System_Collections_Generic_List_double__o *)sub_1B887FC(System_Collections_Generic_List_double__TypeInfo);
  System_Collections_Generic_List_double____ctor(
    v17,
    (const MethodInfo_34D30A4 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v17;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectOccurrenceTime, (int32_t)v17, v19, v20);
  this->fields.objectParent = parent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectParent, (int32_t)parent, v21, v22);
  this->fields.totalTime = allTime;
  v24 = x - z;
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  v25 = allTime / v24;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = vcvtps_s32_f32(v25);
  if ( ceilf(v25) == INFINITY )
    v27 = 0x80000000;
  else
    v27 = v26;
  if ( v27 >= 1 )
  {
    v28 = 0;
    v29 = maxy + 1;
    while ( 1 )
    {
      v30 = v24 * (float)v28;
      v31 = (float)(v30 + x) > allTime && v28 == v27 - 1;
      v32 = v31 ? allTime - v30 : x;
      v33 = UnityEngine_Random__Range_69419120(miny, v29, 0LL);
      if ( v33 >= 1 )
        break;
LABEL_26:
      if ( ++v28 == v27 )
        goto LABEL_27;
    }
    v34 = v33;
    v35 = (float)(v30 + waitTime);
    while ( 1 )
    {
      v36 = UnityEngine_Random__Range(0.0, v32, 0LL);
      v37 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      items = v37->fields._items;
      v39 = Method_System_Collections_Generic_List_double__Add__;
      ++v37->fields._version;
      if ( !items )
        break;
      size = v37->fields._size;
      v41 = v35 + (float)(floorf(v36 * 10.0) / 10.0);
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_double___AddWithResize(
          v37,
          v41,
          *(const MethodInfo_34D3900 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v37->fields._size = size + 1;
        items->m_Items[size] = v41;
      }
      if ( !--v34 )
        goto LABEL_26;
    }
LABEL_29:
    sub_1B8880C(v37, v23);
  }
LABEL_27:
  v37 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_29;
  System_Collections_Generic_List_double___Sort(
    v37,
    (const MethodInfo_34D5244 *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v42);
}


void __fastcall EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
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
  if ( (byte_4A5EDE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_double__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    this = (EndrolEffectManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_double__get_Item__);
    byte_4A5EDE3 = 1;
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
      v6 = passageTime + UnityEngine_Time__get_deltaTime(0LL);
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
                 (const MethodInfo_34D3608 *)Method_System_Collections_Generic_List_double__get_Item__);
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
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_69419120(0, bgGridPointList->fields._size, 0LL);
              if ( !v2->fields.bgGridPointList )
                break;
              v13 = (int)this;
              v16 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      (int32_t)this,
                      (const MethodInfo_3550FB4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              EndrolEffectManager__InstansiateEffect(v2, v16, v14);
              v15 = v2->fields.bgGridPointList;
              if ( !v15 )
                break;
              v17 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      v13,
                      (const MethodInfo_3550FB4 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v15,
                                                v17,
                                                (const MethodInfo_3552800 *)Method_System_Collections_Generic_List_Vector2__Remove__);
              --v11;
              ++v2->fields.nowPlayEffectNumber;
              if ( !v11 )
                return;
            }
LABEL_18:
            sub_1B8880C(this, method);
          }
        }
      }
    }
  }
}