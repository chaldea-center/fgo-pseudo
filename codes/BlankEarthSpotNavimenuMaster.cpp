void __fastcall BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187D88 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__, method);
    byte_4187D88 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    459,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *__fastcall BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
        BlankEarthSpotNavimenuMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  __int64 v17; // x1
  void *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  BlankEarthSpotNavimenuEntity_o *v31; // x0
  const MethodInfo *v32; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x21
  __int64 v34; // x10
  _BOOL8 IsEnable; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x20
  Il2CppObject *v43; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_4187D87 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotNavimenuEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&Method_System_Comparison_BlankEarthSpotNavimenuEntity___ctor__, v4);
    sub_B2C35C(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo, v13);
    sub_B2C35C(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__, v14);
    sub_B2C35C(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v15);
    byte_4187D87 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
    }
    v31 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                              Enumerator,
                                              *(_QWORD *)(v30 + 8));
    v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)v31;
    if ( v31 )
    {
      v34 = *(&BlankEarthSpotNavimenuEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v31->klass->_2.bitflags2 + 1) >= (unsigned int)v34
        && (BlankEarthSpotNavimenuEntity_c *)v31->klass->_2.typeHierarchy[v34 - 1] == BlankEarthSpotNavimenuEntity_TypeInfo )
      {
        IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v31, v32);
        if ( IsEnable )
        {
          if ( !v16 )
            sub_B2C434(IsEnable, v36);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            v33,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_28:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
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
    v43 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__0_0,
      v43,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BlankEarthSpotNavimenuEntity___ctor__);
    v44 = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    v44->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v44->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !v16 )
LABEL_40:
    sub_B2C434(list, v17);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__0_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184E95 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v1);
    byte_4184E95 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BlankEarthSpotNavimenuMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}