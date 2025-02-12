void __fastcall EndrolEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BCB8E4 & 1) == 0 )
  {
    sub_1C1ABD4(&EndrolEffectManager_TypeInfo, v1);
    byte_4BCB8E4 = 1;
  }
  *EndrolEffectManager_TypeInfo->static_fields = (struct EndrolEffectManager_StaticFields)0x101FFFFFEFFLL;
}


void __fastcall EndrolEffectManager___ctor(EndrolEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BCB8E3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__, method);
    byte_4BCB8E3 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_EndrolEffectManager___ctor__);
}


void __fastcall EndrolEffectManager__CalcGridPoint(EndrolEffectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Vector2__o *v6; // x20
  struct System_Collections_Generic_List_Vector2__o **p_bgGridPointList; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  int i; // w20
  int j; // w27
  EndrolEffectManager_c *v17; // x0
  float v18; // s9
  struct EndrolEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_Vector2__o *v20; // x0
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  float *v24; // x8
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4

  if ( (byte_4BCB8DF & 1) == 0 )
  {
    sub_1C1ABD4(&EndrolEffectManager_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Vector2__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Vector2___ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_Vector2__TypeInfo, v5);
    byte_4BCB8DF = 1;
  }
  v6 = (System_Collections_Generic_List_Vector2__o *)sub_1C1AE20(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v6,
    (const MethodInfo_368FAAC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.bgGridPointList = v6;
  p_bgGridPointList = &this->fields.bgGridPointList;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_bgGridPointList, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  for ( i = 0; i != 26; ++i )
  {
    for ( j = 0; j != 46; ++j )
    {
      if ( (j & 1) == 0 )
      {
        v17 = EndrolEffectManager_TypeInfo;
        if ( (i & 1) != 0 )
          v18 = (float)((float)((float)((float)j * 22.25) + -512.0) + 0.0) + 22.25;
        else
          v18 = (float)((float)((float)j * 22.25) + -512.0) + 0.0;
        if ( !EndrolEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EndrolEffectManager_TypeInfo);
          v17 = EndrolEffectManager_TypeInfo;
        }
        static_fields = v17->static_fields;
        if ( v18 <= (float)static_fields->nonEffectAreaStart )
          goto LABEL_15;
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = EndrolEffectManager_TypeInfo->static_fields;
        }
        if ( v18 >= (float)static_fields->nonEffectAreaEnd )
        {
LABEL_15:
          v20 = *p_bgGridPointList;
          if ( !*p_bgGridPointList
            || (items = v20->fields._items,
                v22 = Method_System_Collections_Generic_List_Vector2__Add__,
                ++v20->fields._version,
                !items) )
          {
            sub_1C1AE30(v20, v14);
          }
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v25.fields.x = v18;
            v25.fields.y = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
            System_Collections_Generic_List_Vector2___AddWithResize(
              v20,
              v25,
              *(const MethodInfo_3690314 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = (float *)(&items->obj.klass + size);
            v20->fields._size = size + 1;
            v24[8] = v18;
            v24[9] = (float)((float)((float)i * -22.25) + 288.0) + 0.5;
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

  if ( (byte_4BCB8E1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_double__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_double__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_double__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_double__GetEnumerator__, v7);
    byte_4BCB8E1 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  effectOccurrenceTime = this->fields.effectOccurrenceTime;
  if ( !effectOccurrenceTime )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_double___GetEnumerator(
    &v11,
    effectOccurrenceTime,
    (const MethodInfo_3613434 *)Method_System_Collections_Generic_List_double__GetEnumerator__);
  v9 = 0;
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_double___MoveNext(
            &v12,
            (const MethodInfo_33C9160 *)Method_System_Collections_Generic_List_Enumerator_double__MoveNext__) )
  {
    if ( *(double *)&v12.fields._current == checkTime )
      ++v9;
  }
  System_Collections_Generic_List_Enumerator_double___Dispose(
    &v12,
    (const MethodInfo_33C915C *)Method_System_Collections_Generic_List_Enumerator_double__Dispose__);
  return v9;
}


void __fastcall EndrolEffectManager__EndEffect(EndrolEffectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BCB8E2 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCB8E2 = 1;
  }
  this->fields.isForceEnd = 1;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
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
  EndrolEffectManager_o *v15; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  y = pos.fields.y;
  x = pos.fields.x;
  v5 = this;
  if ( (byte_4BCB8E0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___, method);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    this = (EndrolEffectManager_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BCB8E0 = 1;
  }
  effectObject = v5->fields.effectObject;
  if ( !effectObject )
    goto LABEL_15;
  v9 = UnityEngine_Random__Range_70754152(0, effectObject->max_length, 0LL);
  if ( (unsigned int)v9 >= effectObject->max_length )
    sub_1C1AE38(v9, v10);
  v11 = (Il2CppObject *)effectObject->m_Items[(int)v9];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EndrolEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                    v11,
                                    (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v16.fields.z = 0.0;
  v16.fields.x = x;
  v16.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
  this = (EndrolEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
  v15 = this;
  if ( !byte_4BC2146 )
  {
    this = (EndrolEffectManager_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BC2146 = 1;
  }
  if ( !v15 )
LABEL_15:
    sub_1C1AE30(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v15,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UnityEngine_GameObject__AddComponent_object_(
    (UnityEngine_GameObject_o *)v12,
    (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_EndrolEffectItem___);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  float v35; // s12
  float v36; // s11
  unsigned int v37; // w9
  int v38; // w24
  int v39; // w26
  int32_t v40; // w22
  float v41; // s14
  bool v42; // zf
  float v43; // s11
  int32_t v44; // w0
  int32_t v45; // w23
  double v46; // d14
  float v47; // s0
  System_Collections_Generic_List_double__o *v48; // x0
  struct System_Double_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  double v52; // d0
  const MethodInfo *v53; // x1

  if ( (byte_4BCB8DE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_double__Add__, *(_QWORD *)&miny);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_double__Sort__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_double___ctor__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_double__TypeInfo, v19);
    byte_4BCB8DE = 1;
  }
  v20 = (System_Collections_Generic_List_double__o *)sub_1C1AE20(System_Collections_Generic_List_double__TypeInfo);
  System_Collections_Generic_List_double____ctor(
    v20,
    (const MethodInfo_3612100 *)Method_System_Collections_Generic_List_double___ctor__);
  this->fields.effectOccurrenceTime = v20;
  p_effectOccurrenceTime = &this->fields.effectOccurrenceTime;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.effectOccurrenceTime,
    (int64_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.objectParent = parent;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.objectParent, (int64_t)parent, v28, v29, v30, v31, v32, v33);
  this->fields.totalTime = allTime;
  v35 = x - z;
  if ( !byte_4BC27F5 )
  {
    sub_1C1ABD4(&System_Math_TypeInfo, v34);
    byte_4BC27F5 = 1;
  }
  v36 = allTime / v35;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v37 = vcvtps_s32_f32(v36);
  if ( ceilf(v36) == INFINITY )
    v38 = 0x80000000;
  else
    v38 = v37;
  if ( v38 >= 1 )
  {
    v39 = 0;
    v40 = maxy + 1;
    while ( 1 )
    {
      v41 = v35 * (float)v39;
      v42 = (float)(v41 + x) > allTime && v39 == v38 - 1;
      v43 = v42 ? allTime - v41 : x;
      v44 = UnityEngine_Random__Range_70754152(miny, v40, 0LL);
      if ( v44 >= 1 )
        break;
LABEL_26:
      if ( ++v39 == v38 )
        goto LABEL_27;
    }
    v45 = v44;
    v46 = (float)(v41 + waitTime);
    while ( 1 )
    {
      v47 = UnityEngine_Random__Range(0.0, v43, 0LL);
      v48 = *p_effectOccurrenceTime;
      if ( !*p_effectOccurrenceTime )
        break;
      items = v48->fields._items;
      v50 = Method_System_Collections_Generic_List_double__Add__;
      ++v48->fields._version;
      if ( !items )
        break;
      size = v48->fields._size;
      v52 = v46 + (float)(floorf(v47 * 10.0) / 10.0);
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_double___AddWithResize(
          v48,
          v52,
          *(const MethodInfo_361295C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v48->fields._size = size + 1;
        items->m_Items[size] = v52;
      }
      if ( !--v45 )
        goto LABEL_26;
    }
LABEL_29:
    sub_1C1AE30(v48, v34);
  }
LABEL_27:
  v48 = *p_effectOccurrenceTime;
  if ( !*p_effectOccurrenceTime )
    goto LABEL_29;
  System_Collections_Generic_List_double___Sort(
    v48,
    (const MethodInfo_36142A0 *)Method_System_Collections_Generic_List_double__Sort__);
  EndrolEffectManager__CalcGridPoint(this, v53);
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
  if ( (byte_4BCB8DD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Vector2__Remove__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_double__get_Count__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Vector2__get_Count__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Vector2__get_Item__, v5);
    this = (EndrolEffectManager_o *)sub_1C1ABD4(&Method_System_Collections_Generic_List_double__get_Item__, v6);
    byte_4BCB8DD = 1;
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
                 (const MethodInfo_3612664 *)Method_System_Collections_Generic_List_double__get_Item__);
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
              this = (EndrolEffectManager_o *)UnityEngine_Random__Range_70754152(0, bgGridPointList->fields._size, 0LL);
              if ( !v2->fields.bgGridPointList )
                break;
              v17 = (int)this;
              v20 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      (int32_t)this,
                      (const MethodInfo_3690010 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              EndrolEffectManager__InstansiateEffect(v2, v20, v18);
              v19 = v2->fields.bgGridPointList;
              if ( !v19 )
                break;
              v21 = System_Collections_Generic_List_Vector2___get_Item(
                      v2->fields.bgGridPointList,
                      v17,
                      (const MethodInfo_3690010 *)Method_System_Collections_Generic_List_Vector2__get_Item__);
              this = (EndrolEffectManager_o *)System_Collections_Generic_List_Vector2___Remove(
                                                v19,
                                                v21,
                                                (const MethodInfo_369185C *)Method_System_Collections_Generic_List_Vector2__Remove__);
              --v15;
              ++v2->fields.nowPlayEffectNumber;
              if ( !v15 )
                return;
            }
LABEL_18:
            sub_1C1AE30(this, method);
          }
        }
      }
    }
  }
}