void IndividualityPersonalityMaster___ctor(IndividualityPersonalityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C4341D & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__);
    byte_4C4341D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    484,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int___ctor__);
}


int32_t IndividualityPersonalityMaster__GetPersonalityValue(
        IndividualityPersonalityMaster_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  _QWORD *v15; // x0
  _QWORD *v16; // x21
  __int64 naturalAligment; // x10
  __int64 v18; // x22
  System_Func_int__bool__o *v19; // x23
  int32_t v20; // w21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4C4341B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_IndividualityPersonalityEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Linq_Enumerable_All_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&IndividualityPersonalityEntity_TypeInfo);
    byte_4C4341B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_IndividualityPersonalityEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_16:
      v14 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_IndividualityPersonalityEntity__TypeInfo, 0);
    }
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                      Enumerator,
                      *(_QWORD *)(v14 + 8));
    v16 = v15;
    if ( v15 )
    {
      naturalAligment = IndividualityPersonalityEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*v15 + 304LL) >= (unsigned int)naturalAligment
        && *(IndividualityPersonalityEntity_c **)(*(_QWORD *)(*v15 + 200LL) + 8 * naturalAligment - 8) == IndividualityPersonalityEntity_TypeInfo )
      {
        v18 = v15[3];
        if ( !v18 )
          sub_1C372B4(v15);
        if ( !individuality )
          sub_1C372B4(v15);
        if ( *(_DWORD *)(v18 + 24) == LODWORD(individuality->max_length) )
        {
          v19 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(v19, &individuality->obj, Method_System_Linq_Enumerable_Contains_int___, 0);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                 (System_Func_TSource__bool__o *)v19,
                 (const MethodInfo_30F1AB0 *)Method_System_Linq_Enumerable_All_int___) )
          {
            v20 = *((_DWORD *)v16 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v20 = -1;
LABEL_27:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_31;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_31:
    v24 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v20;
}


bool IndividualityPersonalityMaster__TryGetEntityByPersonalityValue(
        IndividualityPersonalityMaster_o *this,
        IndividualityPersonalityEntity_o **entity,
        int32_t personalityValue,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v10; // x21
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C4341C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPersonalityEntity___);
    sub_1C37058(&System_Func_IndividualityPersonalityEntity__bool__TypeInfo);
    sub_1C37058(&Method_IndividualityPersonalityMaster___c__DisplayClass1_0__TryGetEntityByPersonalityValue_b__0__);
    sub_1C37058(&IndividualityPersonalityMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C4341C = 1;
  }
  v7 = sub_1C372A4(IndividualityPersonalityMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_DWORD *)(v7 + 16) = personalityValue;
  list = this->fields.list;
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IndividualityPersonalityEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_IndividualityPersonalityMaster___c__DisplayClass1_0__TryGetEntityByPersonalityValue_b__0__,
    0);
  v11 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPersonalityEntity___);
  *entity = (IndividualityPersonalityEntity_o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)entity, (int32_t)v11, v12, v13);
  return *entity != 0;
}


void IndividualityPersonalityMaster___c__DisplayClass1_0___ctor(
        IndividualityPersonalityMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool IndividualityPersonalityMaster___c__DisplayClass1_0___TryGetEntityByPersonalityValue_b__0(
        IndividualityPersonalityMaster___c__DisplayClass1_0_o *this,
        IndividualityPersonalityEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C372B4(this);
  return e->fields.personalityValue == this->fields.personalityValue;
}