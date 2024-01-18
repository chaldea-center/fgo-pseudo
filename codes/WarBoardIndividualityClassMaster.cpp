void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418406C & 1) == 0 )
  {
    sub_B2C35C(&WarBoardIndividualityClassMaster_TypeInfo, v1);
    byte_418406C = 1;
  }
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID = 1001;
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->EXTRA_CLASS_ID = 1002;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184067 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      method);
    byte_4184067 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    334,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  __int64 v6; // x19
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19

  if ( (byte_418406B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    sub_B2C35C(&WarBoardIndividualityClassMaster_TypeInfo, v4);
    byte_418406B = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(WarBoardIndividualityClassMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  }
  if ( !v8 )
LABEL_13:
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  return (ServantClassEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v8,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  __int64 v29; // x22
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x10
  System_Func_int__bool__o *v38; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0

  if ( (byte_4184068 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, individualities);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v6);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v14);
    sub_B2C35C(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v15);
    sub_B2C35C(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v16);
    sub_B2C35C(&WarBoardIndividualityClassEntity_TypeInfo, v17);
    byte_4184068 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B2C434(0LL, v21);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v25;
          p_offset += 4;
          if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v29 = sub_B2C42C(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        (WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *)v29,
        0LL);
      v31 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = &v31->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v34 = (__int64)&v31->vtable[*v33].method;
      }
      else
      {
LABEL_17:
        v34 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v30);
      }
      v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
              Enumerator,
              *(_QWORD *)(v34 + 8));
      if ( !v29 )
        goto LABEL_37;
      if ( v35 )
      {
        v37 = *(&WarBoardIndividualityClassEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 300LL) < (unsigned int)v37
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v37 - 8) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          v35 = sub_B2C728(v35);
LABEL_37:
          sub_B2C434(v35, v36);
        }
      }
      *(_QWORD *)(v29 + 16) = v35;
      sub_B2C2F8(v29 + 16, v35);
      if ( *(_QWORD *)(v29 + 16) )
      {
        v38 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v38,
          (Il2CppObject *)v29,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        v39 = BasicHelper__Any_int__24273940(
                individualities,
                (System_Func_T__bool__o *)v38,
                (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
        if ( v39 )
        {
          if ( !v18 )
            sub_B2C434(v39, v40);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            *(EventMissionProgressRequest_Argument_ProgressData_o **)(v29 + 16),
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
        }
      }
    }
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_31:
      v44 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                                         Enumerator,
                                                                                         *(_QWORD *)(v44 + 8));
  }
  if ( !v18 )
LABEL_39:
    sub_B2C434(list, v20);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  const MethodInfo *v9; // x2
  WarBoardIndividualityClassEntity_o *Entities; // x0
  const MethodInfo *v11; // x1
  WarBoardIndividualityClassEntity_c *klass; // x8
  WarBoardIndividualityClassEntity_o *v13; // x20
  __int64 v14; // x21
  __int64 v16; // x0

  if ( (byte_4184069 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassEntity__Add__, individualities);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v7);
    byte_4184069 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
  Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassMaster__GetEntities(
                                                     this,
                                                     individualities,
                                                     v9);
  if ( !Entities )
    goto LABEL_14;
  klass = Entities[1].klass;
  v13 = Entities;
  if ( klass && (int)klass >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)klass )
      {
        v16 = sub_B2C460(Entities);
        sub_B2C400(v16, 0LL);
      }
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v13[1].monitor + v14);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v11);
      if ( !v8 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entities,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantClassEntity__Add__);
      LODWORD(klass) = v13[1].klass;
      if ( (int)++v14 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_14:
    sub_B2C434(Entities, v11);
  }
  if ( !v8 )
    goto LABEL_14;
  return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntity(
        WarBoardIndividualityClassMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantClassEntity_o *result; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_String_o *name; // x8
  __int64 v9; // x0

  if ( (byte_418406A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&individuality);
    byte_418406A = 1;
  }
  result = (ServantClassEntity_o *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v6);
  if ( !LODWORD(result->fields.name) )
    goto LABEL_11;
  result->fields.individuality = individuality;
  result = (ServantClassEntity_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                     this,
                                     (System_Int32_array *)result,
                                     v7);
  if ( result )
  {
    name = result->fields.name;
    if ( name )
    {
      if ( (_DWORD)name )
        return *(ServantClassEntity_o **)&result->fields.individuality;
LABEL_11:
      v9 = sub_B2C460(result);
      sub_B2C400(v9, 0LL);
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
    sub_B2C434(this, x);
  return entity->fields.individuality == x;
}