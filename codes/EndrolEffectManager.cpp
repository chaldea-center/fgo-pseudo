void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19F5A & 1) == 0 )
  {
    sub_1BCA7E0(&EndrolEffectManager_TypeInfo, v1, v2);
    byte_4B19F5A = 1;
  }
  *EndrolEffectManager_TypeInfo->static_fields = (struct EndrolEffectManager_StaticFields)0x101FFFFFEFFLL;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19F59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__, method, v2);
    byte_4B19F59 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_Vector2__o *v11; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  int i; // w20
  int j; // w27
  EndrolEffectManager_c *v22; // x0
  float v23; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_Vector2__o *v25; // x0
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  float *v29; // x8
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4

  if ( (byte_4B19F55 & 1) == 0 )
  {
    sub_1BCA7E0(&EndrolEffectManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_Vector2__TypeInfo, v9, v10);
    byte_4B19F55 = 1;
  }
  v11 = (System_Collections_Generic_List_Vector2__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_Vector2__TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  System_Collections_Generic_List_Vector2____ctor(
    v11,
    (const MethodInfo_35F4E78 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v11;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_1BCA784((PartyOrganizationUtility_o *)p_bgGridPointList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  for ( i = 0; i != 26; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      if ( (j & 1) == 0 )
      {
        v22 = EndrolEffectManager_TypeInfo;
        if ( (i & 1) != 0 )
          v23 = (float)((float)((float)((float)j * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v23 = (float)((float)((float)j * 22.25) + -512.0) + 0.0;
        if ( !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo, v19);
          v22 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v22->static_fields;
        if ( v23 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_15;
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22, v19);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v23 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_15:
          v25 = *p_bgGridPointList;
          if ( !*p_bgGridPointList
            || (items = v25->fields._items,
                v27 = Method_System_Collections_Generic_List_Vector2__Add__,
                ++v25->fields._version,
                !items) )
          {
            sub_1BCAA3C(v25, v19);
          }
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v30.fields.x = v23;
            v30.fields.y = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
            System_Collections_Generic_List_Vector2___AddWithResize(
              v25,
              v30,
              *(const MethodInfo_35F56E0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = (float *)(&items->obj.klass + size);
            v25->fields._size = size + 1;
            v29[8] = v23;
            v29[9] = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
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
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_double__o *effectOccurrenceTime; // x0
  int32_t v13; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19F57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__, method, v3);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_double__GetEnumerator__, v10, v11);
    byte_4B19F57 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v15,
    effectOccurrenceTime,
    (const MethodInfo_3578800 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v13 = 0;
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v16,
            (const MethodInfo_3311984 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v16.fields._current == checkTime )
      ++v13;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v16,
    (const MethodInfo_3311980 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v13;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B19F58 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19F58 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolEffectManager__InstansiateEffect(
        EndrolEffectManager_o *this,
        UnityEngine_Vector2_o pos,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float y; // s8
  float x; // s9
  EndrolEffectManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_GameObject_array *effectObject; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x19
  EndrolEffectManager_o *v15; // x19
  UnityEngine_Component_o *objectParent; // x8
  EndrolEffectManager_o *v17; // x20
  __int64 v18; // x2
  EndrolEffectManager_o *v19; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v6 = this;
  if ( (byte_4B19F56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___, method, v3);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    this = (EndrolEffectManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19F56 = 1;
  }
  effectObject = v6->fields.effectObject;
  if ( !effectObject )
    goto LABEL_15;
  v12 = UnityEngine_Random__Range_70113984(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v12 >= effectObject->max_length )
    sub_1BCAA44(v12, v13);
  v14 = (Il2CppObject *)effectObject->m_Items[(int)v12];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                    v14,
                                    (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v15 = this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  objectParent = (UnityEngine_Component_o *)v6->fields.objectParent;
  if ( !objectParent )
    goto LABEL_15;
  v17 = this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0LL);
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v15, 0LL);
  if ( !this )
    goto LABEL_15;
  v20.fields.z = 0.0;
  v20.fields.x = x;
  v20.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v20, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v15, 0LL);
  v19 = this;
  if ( !byte_4B109C6 )
  {
    this = (EndrolEffectManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v18);
    byte_4B109C6 = 1;
  }
  if ( !v19 )
LABEL_15:
    sub_1BCAA3C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v19,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UnityEngine_GameObject__AddComponent_object_(
    (UnityEngine_GameObject_o *)v15,
    (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_double__o *v23; // x24
  struct System_Collections_Generic_List_double__o **p_effectOccurrenceTime; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  float v39; // s12
  float v40; // s11
  unsigned int v41; // w9
  int v42; // w24
  int v43; // w26
  int32_t v44; // w22
  float v45; // s14
  bool v46; // zf
  float v47; // s11
  int32_t v48; // w0
  int32_t v49; // w23
  double v50; // d14
  float v51; // s0
  System_Collections_Generic_List_double__o *v52; // x0
  struct System_Double_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  double v56; // d0
  const MethodInfo *v57; // x1

  if ( (byte_4B19F54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_double__Add__, *(_QWORD *)&miny, *(_QWORD *)&maxy);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_double__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_double___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_double__TypeInfo, v21, v22);
    byte_4B19F54 = 1;
  }
  v23 = (System_Collections_Generic_List_double__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_double__TypeInfo,
                                                       *(_QWORD *)&miny,
                                                       *(_QWORD *)&maxy,
                                                       parent);
  System_Collections_Generic_List_double____ctor(
    v23,
    (const MethodInfo_35774CC *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v23;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.effectOccurrenceTime,
    (int64_t)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.objectParent = parent;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectParent, (int64_t)parent, v31, v32, v33, v34, v35, v36);
  this->fields.totalTime = allTime;
  v39 = x - z;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v37, v38);
    byte_4B1103A = 1;
  }
  v40 = allTime / v39;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v37);
  v41 = vcvtps_s32_f32(v40);
  if ( ceilf(v40) == INFINITY )
    v42 = 0x80000000;
  else
    v42 = v41;
  if ( v42 >= 1 )
  {
    v43 = 0;
    v44 = maxy + 1;
    while ( 1 )
    {
      v45 = v39 * (float)v43;
      v46 = (float)(v45 + x) > allTime && v43 == v42 - 1;
      v47 = v46 ? allTime - v45 : x;
      v48 = UnityEngine_Random__Range_70113984(miny, v44, 0LL);
      if ( v48 >= 1 )
        break;
LABEL_26:
      if ( ++v43 == v42 )
        goto LABEL_27;
    }
    v49 = v48;
    v50 = (float)(v45 + waitTime);
    while ( 1 )
    {
      v51 = UnityEngine_Random__Range(0.0, v47, 0LL);
      v52 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      items = v52->fields._items;
      v54 = Method_System_Collections_Generic_List_double__Add__;
      ++v52->fields._version;
      if ( !items )
        break;
      size = v52->fields._size;
      v56 = v50 + (float)(floorf(v51 * 10.0) / 10.0);
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_double___AddWithResize(
          v52,
          v56,
          *(const MethodInfo_3577D28 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v52->fields._size = size + 1;
        items->m_Items[size] = v56;
      }
      if ( !--v49 )
        goto LABEL_26;
    }
LABEL_29:
    sub_1BCAA3C(v52, v37);
  }
LABEL_27:
  v52 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_29;
  System_Collections_Generic_List_double___Sort(
    v52,
    (const MethodInfo_357966C *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v57);
}


void __fastcall EndrolEffectManager__Update(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EndrolEffectManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_double__o *effectOccurrenceTime; // x8
  float passageTime; // s8
  double truncateTime; // d9
  float v15; // s0
  double v16; // d0
  const MethodInfo *v17; // x1
  double Item; // d0
  double v19; // d1
  int v20; // w20
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  int32_t v22; // w21
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_Vector2__o *v24; // x22
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4

  v3 = this;
  if ( (byte_4B19F53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__Remove__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_double__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__get_Item__, v8, v9);
    this = (EndrolEffectManager_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_double__get_Item__, v10, v11);
    byte_4B19F53 = 1;
  }
  effectOccurrenceTime = v3->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    goto LABEL_18;
  if ( effectOccurrenceTime->fields._size > v3->fields.nowPlayEffectNumber )
  {
    passageTime = v3->fields.passageTime;
    if ( passageTime <= v3->fields.totalTime && !v3->fields.isForceEnd )
    {
      truncateTime = v3->fields.truncateTime;
      v15 = passageTime + UnityEngine_Time__get_deltaTime(0LL);
      v3->fields.passageTime = v15;
      v16 = (float)(floorf(v15 * 10.0) / 10.0);
      v3->fields.truncateTime = v16;
      if ( truncateTime != v16 )
      {
        this = (EndrolEffectManager_o *)v3->fields.effectOccurrenceTime;
        if ( !this )
          goto LABEL_18;
        Item = System_Collections_Generic_List_double___get_Item(
                 (System_Collections_Generic_List_double__o *)this,
                 v3->fields.nowPlayEffectNumber,
                 (const MethodInfo_3577A30 *)Method_System_Collections_Generic_List_double__get_Item__);
        v19 = v3->fields.truncateTime;
        if ( Item == v19 )
        {
          this = (EndrolEffectManager_o *)EndrolEffectManager__CheckOverlap(v3, v19, v17);
          if ( (int)this >= 1 )
          {
            v20 = (int)this;
            while ( 1 )
            {
              bgGridPointList = v3->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_70113984(0, bgGridPointList->fields._size, 0LL);
              if ( !v3->fields.bgGridPointList )
                break;
              v22 = (int)this;
              v25 = System_Collections_Generic_List_Vector2___get_Item(
                      v3->fields.bgGridPointList,
                      (int32_t)this,
                      (const MethodInfo_35F53DC *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              EndrolEffectManager__InstansiateEffect(v3, v25, v23);
              v24 = v3->fields.bgGridPointList;
              if ( !v24 )
                break;
              v26 = System_Collections_Generic_List_Vector2___get_Item(
                      v3->fields.bgGridPointList,
                      v22,
                      (const MethodInfo_35F53DC *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v24,
                                                v26,
                                                (const MethodInfo_35F6C28 *)Method_System_Collections_Generic_List_Vector2__Remove__);
              --v20;
              ++v3->fields.nowPlayEffectNumber;
              if ( !v20 )
                return;
            }
LABEL_18:
            sub_1BCAA3C(this, method);
          }
        }
      }
    }
  }
}