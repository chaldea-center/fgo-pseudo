void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFFFF & 1) == 0 )
  {
    sub_1B640C8(&EndrolEffectManager_TypeInfo, v1);
    byte_49FFFFF = 1;
  }
  *EndrolEffectManager_TypeInfo->static_fields = (struct EndrolEffectManager_StaticFields)0x101FFFFFEFFLL;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FFFFE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__, method);
    byte_49FFFFE = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_Vector2__o *v7; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  int i; // w20
  int j; // w27
  EndrolEffectManager_c *v13; // x0
  float v14; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_Vector2__o *v16; // x0
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  float *v20; // x8
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4

  if ( (byte_49FFFFA & 1) == 0 )
  {
    sub_1B640C8(&EndrolEffectManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_Vector2__TypeInfo, v6);
    byte_49FFFFA = 1;
  }
  v7 = (System_Collections_Generic_List_Vector2__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Vector2__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_Vector2____ctor(
    v7,
    (const MethodInfo_3502044 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v7;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_bgGridPointList, (int32_t)v7, v9, v10);
  for ( i = 0; i != 26; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      if ( (j & 1) == 0 )
      {
        v13 = EndrolEffectManager_TypeInfo;
        if ( (i & 1) != 0 )
          v14 = (float)((float)((float)((float)j * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v14 = (float)((float)((float)j * 22.25) + -512.0) + 0.0;
        if ( !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v13 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v13->static_fields;
        if ( v14 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_15;
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v14 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_15:
          v16 = *p_bgGridPointList;
          if ( !*p_bgGridPointList
            || (items = v16->fields._items,
                v18 = Method_System_Collections_Generic_List_Vector2__Add__,
                ++v16->fields._version,
                !items) )
          {
            sub_1B64324(v16);
          }
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v21.fields.x = v14;
            v21.fields.y = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
            System_Collections_Generic_List_Vector2___AddWithResize(
              v16,
              v21,
              *(const MethodInfo_35028AC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = (float *)(&items->obj.klass + size);
            v16->fields._size = size + 1;
            v20[8] = v14;
            v20[9] = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_double__o *effectOccurrenceTime; // x0
  int32_t v9; // w19
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFFFC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_double__GetEnumerator__, v7);
    byte_49FFFFC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_1B64324(0LL);
  System_Collections_Generic_List_double___GetEnumerator(
    &v11,
    effectOccurrenceTime,
    (const MethodInfo_34837D8 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v9 = 0;
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v12,
            (const MethodInfo_3224D18 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v12.fields._current == checkTime )
      ++v9;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v12,
    (const MethodInfo_3224D14 *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v9;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FFFFD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFFFD = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  EndrolEffectManager_o *v12; // x19
  UnityEngine_Component_o *objectParent; // x8
  EndrolEffectManager_o *v14; // x20
  __int64 v15; // x1
  EndrolEffectManager_o *v16; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = this;
  if ( (byte_49FFFFB & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    this = (EndrolEffectManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FFFFB = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_15;
  v9 = UnityEngine_Random__Range_69087476(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v9 >= effectObject->max_length )
    sub_1B6432C(v9, v10);
  v11 = (Il2CppObject *)effectObject->m_Items[(int)v9];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                    v11,
                                    (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v12 = this;
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  objectParent = (UnityEngine_Component_o *)v5->fields.objectParent;
  if ( !objectParent )
    goto LABEL_15;
  v14 = this;
  this = (EndrolEffectManager_o *)UnityEngine_Component__get_transform(objectParent, 0LL);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v14, (UnityEngine_Transform_o *)this, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
  if ( !this )
    goto LABEL_15;
  v17.fields.z = 0.0;
  v17.fields.x = x;
  v17.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
  v16 = this;
  if ( !byte_49F7116 )
  {
    this = (EndrolEffectManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_49F7116 = 1;
  }
  if ( !v16 )
LABEL_15:
    sub_1B64324(this);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UnityEngine_GameObject__AddComponent_object_(
    (UnityEngine_GameObject_o *)v12,
    (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  float v27; // s12
  float v28; // s11
  unsigned int v29; // w9
  int v30; // w24
  int v31; // w26
  int32_t v32; // w22
  float v33; // s14
  bool v34; // zf
  float v35; // s11
  int32_t v36; // w0
  int32_t v37; // w23
  double v38; // d14
  float v39; // s0
  System_Collections_Generic_List_double__o *v40; // x0
  struct System_Double_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  double v44; // d0
  const MethodInfo *v45; // x1

  if ( (byte_49FFFF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_double__Add__, *(_QWORD *)&miny);
    sub_1B640C8(&Method_System_Collections_Generic_List_double__Sort__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_double___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_double__TypeInfo, v19);
    byte_49FFFF9 = 1;
  }
  v20 = (System_Collections_Generic_List_double__o *)sub_1B64314(
                                                       System_Collections_Generic_List_double__TypeInfo,
                                                       *(_QWORD *)&miny,
                                                       *(_QWORD *)&maxy);
  System_Collections_Generic_List_double____ctor(
    v20,
    (const MethodInfo_3482404 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v20;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectOccurrenceTime, (int32_t)v20, v22, v23);
  this->fields.objectParent = parent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectParent, (int32_t)parent, v24, v25);
  this->fields.totalTime = allTime;
  v27 = x - z;
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v26);
    byte_49F779D = 1;
  }
  v28 = allTime / v27;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v29 = vcvtps_s32_f32(v28);
  if ( ceilf(v28) == INFINITY )
    v30 = 0x80000000;
  else
    v30 = v29;
  if ( v30 >= 1 )
  {
    v31 = 0;
    v32 = maxy + 1;
    while ( 1 )
    {
      v33 = v27 * (float)v31;
      v34 = (float)(v33 + x) > allTime && v31 == v30 - 1;
      v35 = v34 ? allTime - v33 : x;
      v36 = UnityEngine_Random__Range_69087476(miny, v32, 0LL);
      if ( v36 >= 1 )
        break;
LABEL_26:
      if ( ++v31 == v30 )
        goto LABEL_27;
    }
    v37 = v36;
    v38 = (float)(v33 + waitTime);
    while ( 1 )
    {
      v39 = UnityEngine_Random__Range(0.0, v35, 0LL);
      v40 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      items = v40->fields._items;
      v42 = Method_System_Collections_Generic_List_double__Add__;
      ++v40->fields._version;
      if ( !items )
        break;
      size = v40->fields._size;
      v44 = v38 + (float)(floorf(v39 * 10.0) / 10.0);
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_double___AddWithResize(
          v40,
          v44,
          *(const MethodInfo_3482C60 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v40->fields._size = size + 1;
        items->m_Items[size] = v44;
      }
      if ( !--v37 )
        goto LABEL_26;
    }
LABEL_29:
    sub_1B64324(v40);
  }
LABEL_27:
  v40 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_29;
  System_Collections_Generic_List_double___Sort(
    v40,
    (const MethodInfo_3484644 *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v45);
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
  float v10; // s0
  double v11; // d0
  const MethodInfo *v12; // x1
  double Item; // d0
  double v14; // d1
  int v15; // w20
  struct System_Collections_Generic_List_Vector2__o *bgGridPointList; // x8
  int32_t v17; // w21
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Vector2__o *v19; // x22
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4

  v2 = this;
  if ( (byte_49FFFF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2__Remove__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_double__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Vector2__get_Item__, v5);
    this = (EndrolEffectManager_o *)sub_1B640C8(&Method_System_Collections_Generic_List_double__get_Item__, v6);
    byte_49FFFF8 = 1;
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
      v10 = passageTime + UnityEngine_Time__get_deltaTime(0LL);
      v2->fields.passageTime = v10;
      v11 = (float)(floorf(v10 * 10.0) / 10.0);
      v2->fields.truncateTime = v11;
      if ( truncateTime != v11 )
      {
        this = (EndrolEffectManager_o *)v2->fields.effectOccurrenceTime;
        if ( !this )
          goto LABEL_18;
        Item = System_Collections_Generic_List_double___get_Item(
                 (System_Collections_Generic_List_double__o *)this,
                 v2->fields.nowPlayEffectNumber,
                 (const MethodInfo_3482968 *)Method_System_Collections_Generic_List_double__get_Item__);
        v14 = v2->fields.truncateTime;
        if ( Item == v14 )
        {
          this = (EndrolEffectManager_o *)EndrolEffectManager__CheckOverlap(v2, v14, v12);
          if ( (int)this >= 1 )
          {
            v15 = (int)this;
            while ( 1 )
            {
              bgGridPointList = v2->fields.bgGridPointList;
              if ( !bgGridPointList )
                break;
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_69087476(0, bgGridPointList->fields._size, 0LL);
              if ( !v2->fields.bgGridPointList )
                break;
              v17 = (int)this;
              v20 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      (int32_t)this,
                      (const MethodInfo_35025A8 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              EndrolEffectManager__InstansiateEffect(v2, v20, v18);
              v19 = v2->fields.bgGridPointList;
              if ( !v19 )
                break;
              v21 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      v17,
                      (const MethodInfo_35025A8 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v19,
                                                v21,
                                                (const MethodInfo_3503E98 *)Method_System_Collections_Generic_List_Vector2__Remove__);
              --v15;
              ++v2->fields.nowPlayEffectNumber;
              if ( !v15 )
                return;
            }
LABEL_18:
            sub_1B64324(this);
          }
        }
      }
    }
  }
}