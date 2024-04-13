void __fastcall BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8622 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8622 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    460,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *__fastcall BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
        BlankEarthSpotNavimenuMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x19
  __int64 v45; // x1
  void *list; // x0
  __int64 v47; // x1
  __int64 v48; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v54; // x3
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  BlankEarthSpotNavimenuEntity_o *v59; // x0
  const MethodInfo *v60; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x21
  __int64 v62; // x10
  _BOOL8 IsEnable; // x0
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x20
  Il2CppObject *v71; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7

  if ( (byte_42E8621 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotNavimenuEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_BlankEarthSpotNavimenuEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__, v38, v39, v40);
    sub_B5D5C4(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v41, v42, v43);
    byte_42E8621 = 1;
  }
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v47);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v51 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v51;
        p_offset += 4;
        if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v48);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v55 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      v57 = &v55->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v57 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v58 = (__int64)&v55->vtable[*v57].method;
    }
    else
    {
LABEL_16:
      v58 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v54);
    }
    v59 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                              Enumerator,
                                              *(_QWORD *)(v58 + 8));
    v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)v59;
    if ( v59 )
    {
      v62 = *(&BlankEarthSpotNavimenuEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v59->klass->_2.bitflags2 + 1) >= (unsigned int)v62
        && (BlankEarthSpotNavimenuEntity_c *)v59->klass->_2.typeHierarchy[v62 - 1] == BlankEarthSpotNavimenuEntity_TypeInfo )
      {
        IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v59, v60);
        if ( IsEnable )
        {
          if ( !v44 )
            sub_B5D69C(IsEnable, v64);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            v61,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
        }
      }
    }
  }
  v65 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_28:
    v68 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v54);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(Enumerator, *(_QWORD *)(v68 + 8));
  list = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotNavimenuMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotNavimenuMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotNavimenuMaster___c_TypeInfo);
    list = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  }
  static_fields = (struct BlankEarthSpotNavimenuMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v71,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BlankEarthSpotNavimenuEntity___ctor__);
    v72 = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    v72->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v72->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !v44 )
LABEL_40:
    sub_B5D69C(list, v45);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v44,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E1D & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5E1D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___ctor(
        BlankEarthSpotNavimenuMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotNavimenuMaster___c___GetEnableShortcutButtons_b__0_0(
        BlankEarthSpotNavimenuMaster___c_o *this,
        BlankEarthSpotNavimenuEntity_o *a,
        BlankEarthSpotNavimenuEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}