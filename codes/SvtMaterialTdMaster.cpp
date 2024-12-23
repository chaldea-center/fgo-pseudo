void __fastcall SvtMaterialTdMaster___ctor(SvtMaterialTdMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67711 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_SvtMaterialTdMaster__SvtMaterialTdEntity__string___ctor__, method);
    byte_4B67711 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    394,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_SvtMaterialTdMaster__SvtMaterialTdEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SvtMaterialTdEntity_array *__fastcall SvtMaterialTdMaster__GetEntityList(
        SvtMaterialTdMaster_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  SvtMaterialTdEntity_c *v34; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B67712 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&baseSvtId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtMaterialTdEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtMaterialTdEntity__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtMaterialTdEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_SvtMaterialTdEntity__TypeInfo, v11);
    sub_1BE4ACC(&SvtMaterialTdEntity_TypeInfo, v12);
    byte_4B67712 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SvtMaterialTdEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SvtMaterialTdEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v33 = v26;
    if ( v26 )
    {
      v34 = SvtMaterialTdEntity_TypeInfo;
      methodPtr_low = LOBYTE(SvtMaterialTdEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
        || *(SvtMaterialTdEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != SvtMaterialTdEntity_TypeInfo )
      {
        sub_1BE4FE8(v26);
LABEL_36:
        sub_1BE4D28(v26, v34);
      }
      if ( *(_DWORD *)(v26 + 16) == baseSvtId )
      {
        if ( !v13 )
          goto LABEL_36;
        items = v13->fields._items;
        v37 = Method_System_Collections_Generic_List_SvtMaterialTdEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1BE4D28(v26, v34);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v26,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v33;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v33, v27, v28, v29, v30, v31, v32);
        }
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                                             Enumerator,
                                                             *(_QWORD *)(v43 + 8));
  if ( !v13 )
LABEL_38:
    sub_1BE4D28(list, v14);
  return (SvtMaterialTdEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v13,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_SvtMaterialTdEntity__ToArray__);
}