void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  if ( (byte_4BE03A6 & 1) == 0 )
  {
    sub_1C21E38(&EndrolEffectManager_TypeInfo);
    byte_4BE03A6 = 1;
  }
  *EndrolEffectManager_TypeInfo->static_fields = (struct EndrolEffectManager_StaticFields)0x101FFFFFEFFLL;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BE03A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
    byte_4BE03A5 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector2__o *v3; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  int i; // w20
  int j; // w27
  EndrolEffectManager_c *v14; // x0
  float v15; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_Vector2__o *v17; // x0
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  float *v21; // x8
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  if ( (byte_4BE03A1 & 1) == 0 )
  {
    sub_1C21E38(&EndrolEffectManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_4BE03A1 = 1;
  }
  v3 = (System_Collections_Generic_List_Vector2__o *)sub_1C22084(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v3,
    (const MethodInfo_36A22D0 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v3;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_bgGridPointList, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  for ( i = 0; i != 26; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      if ( (j & 1) == 0 )
      {
        v14 = EndrolEffectManager_TypeInfo;
        if ( (i & 1) != 0 )
          v15 = (float)((float)((float)((float)j * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v15 = (float)((float)((float)j * 22.25) + -512.0) + 0.0;
        if ( !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v14 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v14->static_fields;
        if ( v15 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_15;
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v15 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_15:
          v17 = *p_bgGridPointList;
          if ( !*p_bgGridPointList
            || (items = v17->fields._items,
                v19 = Method_System_Collections_Generic_List_Vector2__Add__,
                ++v17->fields._version,
                !items) )
          {
            sub_1C22094(v17, v11);
          }
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v22.fields.x = v15;
            v22.fields.y = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
            System_Collections_Generic_List_Vector2___AddWithResize(
              v17,
              v22,
              *(const MethodInfo_36A2B38 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = (float *)(&items->obj.klass + size);
            v17->fields._size = size + 1;
            v21[8] = v15;
            v21[9] = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
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

  if ( (byte_4BE03A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_double__GetEnumerator__);
    byte_4BE03A3 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v8,
    effectOccurrenceTime,
    (const MethodInfo_3625C58 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v6 = 0;
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v9,
            (const MethodInfo_33DBF04 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v9.fields._current == checkTime )
      ++v6;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v9,
    (const MethodInfo_33DBF00 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v6;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BE03A4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03A4 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
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
  if ( (byte_4BE03A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EndrolEffectManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE03A2 = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_15;
  v7 = UnityEngine_Random__Range_70829352(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v7 >= effectObject->max_length )
    sub_1C2209C(v7, v8);
  v9 = (Il2CppObject *)effectObject->m_Items[(int)v7];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                    v9,
                                    (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4BD6BB6 )
  {
    this = (EndrolEffectManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v13 )
LABEL_15:
    sub_1C22094(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UnityEngine_GameObject__AddComponent_object_(
    (UnityEngine_GameObject_o *)v10,
    (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  float v32; // s12
  float v33; // s11
  unsigned int v34; // w9
  int v35; // w24
  int v36; // w26
  int32_t v37; // w22
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

  if ( (byte_4BE03A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_double__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_double__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_double___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_double__TypeInfo);
    byte_4BE03A0 = 1;
  }
  v17 = (System_Collections_Generic_List_double__o *)sub_1C22084(System_Collections_Generic_List_double__TypeInfo);
  System_Collections_Generic_List_double____ctor(
    v17,
    (const MethodInfo_3624924 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v17;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.effectOccurrenceTime,
    (int64_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.objectParent = parent;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.objectParent, (int64_t)parent, v25, v26, v27, v28, v29, v30);
  this->fields.totalTime = allTime;
  v32 = x - z;
  if ( !byte_4BD7265 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7265 = 1;
  }
  v33 = allTime / v32;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = vcvtps_s32_f32(v33);
  if ( ceilf(v33) == INFINITY )
    v35 = 0x80000000;
  else
    v35 = v34;
  if ( v35 >= 1 )
  {
    v36 = 0;
    v37 = maxy + 1;
    while ( 1 )
    {
      v38 = v32 * (float)v36;
      v39 = (float)(v38 + x) > allTime && v36 == v35 - 1;
      v40 = v39 ? allTime - v38 : x;
      v41 = UnityEngine_Random__Range_70829352(miny, v37, 0LL);
      if ( v41 >= 1 )
        break;
LABEL_26:
      if ( ++v36 == v35 )
        goto LABEL_27;
    }
    v42 = v41;
    v43 = (float)(v38 + waitTime);
    while ( 1 )
    {
      v44 = UnityEngine_Random__Range(0.0, v40, 0LL);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_double___AddWithResize(
          v45,
          v49,
          *(const MethodInfo_3625180 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
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
    sub_1C22094(v45, v31);
  }
LABEL_27:
  v45 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_29;
  System_Collections_Generic_List_double___Sort(
    v45,
    (const MethodInfo_3626AC4 *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v50);
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
  if ( (byte_4BE039F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_double__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__get_Item__);
    this = (EndrolEffectManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_double__get_Item__);
    byte_4BE039F = 1;
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
                 (const MethodInfo_3624E88 *)Method_System_Collections_Generic_List_double__get_Item__);
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
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_70829352(0, bgGridPointList->fields._size, 0LL);
              if ( !v2->fields.bgGridPointList )
                break;
              v13 = (int)this;
              v16 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      (int32_t)this,
                      (const MethodInfo_36A2834 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              EndrolEffectManager__InstansiateEffect(v2, v16, v14);
              v15 = v2->fields.bgGridPointList;
              if ( !v15 )
                break;
              v17 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      v13,
                      (const MethodInfo_36A2834 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v15,
                                                v17,
                                                (const MethodInfo_36A4080 *)Method_System_Collections_Generic_List_Vector2__Remove__);
              --v11;
              ++v2->fields.nowPlayEffectNumber;
              if ( !v11 )
                return;
            }
LABEL_18:
            sub_1C22094(this, method);
          }
        }
      }
    }
  }
}