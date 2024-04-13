void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E524F & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardIndividualityClassMaster_TypeInfo, v1, v2, v3);
    byte_42E524F = 1;
  }
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID = 1001;
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->EXTRA_CLASS_ID = 1002;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E524A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E524A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    335,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x19
  __int64 v14; // x19
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x19

  if ( (byte_42E524E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7, v8, v9);
    sub_B5D5C4(&WarBoardIndividualityClassMaster_TypeInfo, v10, v11, v12);
    byte_42E524E = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AF52C4(v14);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v14 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(WarBoardIndividualityClassMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  }
  if ( !v16 )
LABEL_13:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  return (ServantClassEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v16,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v55; // x3
  __int64 v56; // x22
  __int64 v57; // x3
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x10
  System_Func_int__bool__o *v65; // x24
  _BOOL8 v66; // x0
  __int64 v67; // x1
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0

  if ( (byte_42E524B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)individualities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v36, v37, v38);
    sub_B5D5C4(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarBoardIndividualityClassEntity_TypeInfo, v42, v43, v44);
    byte_42E524B = 1;
  }
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v48);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v52 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v52;
          p_offset += 4;
          if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v49);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v56 = sub_B5D694(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        (WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *)v56,
        0LL);
      v58 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v59 = 0LL;
        v60 = &v58->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v60 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v59;
          v60 += 4;
          if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v61 = (__int64)&v58->vtable[*v60].method;
      }
      else
      {
LABEL_17:
        v61 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v57);
      }
      v62 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
              Enumerator,
              *(_QWORD *)(v61 + 8));
      if ( !v56 )
        goto LABEL_37;
      if ( v62 )
      {
        v64 = *(&WarBoardIndividualityClassEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v62 + 300LL) < (unsigned int)v64
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v62 + 200LL) + 8 * v64 - 8) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          v62 = sub_B5D990(v62);
LABEL_37:
          sub_B5D69C(v62, v63);
        }
      }
      *(_QWORD *)(v56 + 16) = v62;
      sub_B5D560(v56 + 16);
      if ( *(_QWORD *)(v56 + 16) )
      {
        v65 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v65,
          (Il2CppObject *)v56,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        v66 = BasicHelper__Any_int__28142236(
                individualities,
                (System_Func_T__bool__o *)v65,
                (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
        if ( v66 )
        {
          if ( !v45 )
            sub_B5D69C(v66, v67);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v45,
            *(EventMissionProgressRequest_Argument_ProgressData_o **)(v56 + 16),
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
        }
      }
    }
    v68 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v69 = 0LL;
      v70 = &v68->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
      {
        ++v69;
        v70 += 4;
        if ( v69 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v71 = (__int64)&v68->vtable[*v70].method;
    }
    else
    {
LABEL_31:
      v71 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v55);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(
                                                                                         Enumerator,
                                                                                         *(_QWORD *)(v71 + 8));
  }
  if ( !v45 )
LABEL_39:
    sub_B5D69C(list, v47);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v45,
                                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  const MethodInfo *v16; // x2
  WarBoardIndividualityClassEntity_o *Entities; // x0
  const MethodInfo *v18; // x1
  WarBoardIndividualityClassEntity_c *klass; // x8
  WarBoardIndividualityClassEntity_o *v20; // x20
  __int64 v21; // x21
  __int64 v23; // x0

  if ( (byte_42E524C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantClassEntity__Add__,
      (_DWORD)individualities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v12, v13, v14);
    byte_42E524C = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
  Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassMaster__GetEntities(
                                                     this,
                                                     individualities,
                                                     v16);
  if ( !Entities )
    goto LABEL_14;
  klass = Entities[1].klass;
  v20 = Entities;
  if ( klass && (int)klass >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= (unsigned int)klass )
      {
        v23 = sub_B5D6C8(Entities);
        sub_B5D668(v23, 0LL);
      }
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v20[1].monitor + v21);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v18);
      if ( !v15 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entities,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantClassEntity__Add__);
      LODWORD(klass) = v20[1].klass;
      if ( (int)++v21 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_14:
    sub_B5D69C(Entities, v18);
  }
  if ( !v15 )
    goto LABEL_14;
  return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntity(
        WarBoardIndividualityClassMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantClassEntity_o *result; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_String_o *name; // x8
  __int64 v10; // x0

  if ( (byte_42E524D & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, individuality, (_DWORD)method, v3);
    byte_42E524D = 1;
  }
  result = (ServantClassEntity_o *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v7);
  if ( !LODWORD(result->fields.name) )
    goto LABEL_11;
  result->fields.individuality = individuality;
  result = (ServantClassEntity_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                     this,
                                     (System_Int32_array *)result,
                                     v8);
  if ( result )
  {
    name = result->fields.name;
    if ( name )
    {
      if ( (_DWORD)name )
        return *(ServantClassEntity_o **)&result->fields.individuality;
LABEL_11:
      v10 = sub_B5D6C8(result);
      sub_B5D668(v10, 0LL);
    }
    return 0LL;
  }
  return result;
}


void __fastcall WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardIndividualityClassMaster___c__DisplayClass3_0___GetEntities_b__0(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardIndividualityClassEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, x);
  return entity->fields.individuality == x;
}