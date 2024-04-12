void __fastcall BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFE9D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
    byte_42AFE9D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    460,
    (const MethodInfo_23E223C *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *__fastcall BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
        BlankEarthSpotNavimenuMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  void *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  BlankEarthSpotNavimenuEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x21
  __int64 v21; // x10
  _BOOL8 IsEnable; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x20
  Il2CppObject *v30; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42AFE9C & 1) == 0 )
  {
    sub_B52984(&BlankEarthSpotNavimenuEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_BlankEarthSpotNavimenuEntity___ctor__);
    sub_B52984(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
    sub_B52984(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__);
    sub_B52984(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_42AFE9C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v18 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                              Enumerator,
                                              *(_QWORD *)(v17 + 8));
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v18;
    if ( v18 )
    {
      v21 = *(&BlankEarthSpotNavimenuEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (BlankEarthSpotNavimenuEntity_c *)v18->klass->_2.typeHierarchy[v21 - 1] == BlankEarthSpotNavimenuEntity_TypeInfo )
      {
        IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v18, v19);
        if ( IsEnable )
        {
          if ( !v3 )
            sub_B52A5C(IsEnable, v23);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v20,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
        }
      }
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
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
    v30 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v30,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_BlankEarthSpotNavimenuEntity___ctor__);
    v31 = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    v31->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v31->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v3 )
LABEL_40:
    sub_B52A5C(list, v4);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD666 & 1) == 0 )
  {
    sub_B52984(&BlankEarthSpotNavimenuMaster___c_TypeInfo);
    byte_42AD666 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}