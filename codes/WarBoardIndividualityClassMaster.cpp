void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F6419 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardIndividualityClassMaster_TypeInfo, v1);
    byte_40F6419 = 1;
  }
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID = 1001;
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->EXTRA_CLASS_ID = 1002;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6414 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      method);
    byte_40F6414 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    334,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
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
  DataManager_o *v7; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19

  if ( (byte_40F6418 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    sub_B16FFC(&WarBoardIndividualityClassMaster_TypeInfo, v4);
    byte_40F6418 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        v7,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( (BYTE3(WarBoardIndividualityClassMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  }
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B170D4();
  return (ServantClassEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x22
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x10
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Func_int__bool__o *v48; // x24
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0

  if ( (byte_40F6415 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, individualities);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v16);
    sub_B16FFC(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v17);
    sub_B16FFC(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v18);
    sub_B16FFC(&WarBoardIndividualityClassEntity_TypeInfo, v19);
    byte_40F6415 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo,
                                                                                                  individualities,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v24 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v24;
          p_offset += 4;
          if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v31 = sub_B170CC(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v27, v28, v29, v30);
      WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        (WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *)v31,
        0LL);
      v32 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        v34 = &v32->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v33;
          v34 += 4;
          if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v35 = (__int64)&v32->vtable[*v34].method;
      }
      else
      {
LABEL_17:
        v35 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v36 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                     Enumerator,
                                     *(_QWORD *)(v35 + 8));
      if ( !v31 )
        goto LABEL_37;
      if ( v36 )
      {
        v43 = *(&WarBoardIndividualityClassEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*v36)->m_Items[68]) < (unsigned int)v43
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)&(*v36)->m_Items[43] + 8 * v43 - 8) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          sub_B173C8(v36);
LABEL_37:
          sub_B170D4();
        }
      }
      *(_QWORD *)(v31 + 16) = v36;
      sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), v36, v37, v38, v39, v40, v41, v42);
      if ( *(_QWORD *)(v31 + 16) )
      {
        v48 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v44, v45, v46, v47);
        System_Func_int__bool____ctor(
          v48,
          (Il2CppObject *)v31,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        if ( BasicHelper__Any_int__25910576(
               individualities,
               (System_Func_T__bool__o *)v48,
               (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
        {
          if ( !v20 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v20,
            *(EventMissionProgressRequest_Argument_ProgressData_o **)(v31 + 16),
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
        }
      }
    }
    v49 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v50 = 0LL;
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v52 = (__int64)&v49->vtable[*v51].method;
    }
    else
    {
LABEL_31:
      v52 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
      Enumerator,
      *(_QWORD *)(v52 + 8));
  }
  if ( !v20 )
LABEL_39:
    sub_B170D4();
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  const MethodInfo *v11; // x2
  WarBoardIndividualityClassEntity_array *Entities; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  WarBoardIndividualityClassEntity_array *v16; // x20
  __int64 v17; // x21
  WarBoardIndividualityClassEntity_o *v18; // x0
  ServantClassEntity_o *ServantClassEntity; // x0

  if ( (byte_40F6416 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassEntity__Add__, individualities);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v9);
    byte_40F6416 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantClassEntity__TypeInfo,
                                                                                                  individualities,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
  Entities = WarBoardIndividualityClassMaster__GetEntities(this, individualities, v11);
  if ( !Entities )
    goto LABEL_14;
  v15 = *(_QWORD *)&Entities->max_length;
  v16 = Entities;
  if ( v15 && (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
        sub_B17100(Entities, v13, v14);
        sub_B170A0();
      }
      v18 = v16->m_Items[v17];
      if ( !v18 )
        break;
      ServantClassEntity = WarBoardIndividualityClassEntity__GetServantClassEntity(v18, v13);
      if ( !v10 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)ServantClassEntity,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantClassEntity__Add__);
      LODWORD(v15) = v16->max_length;
      if ( (int)++v17 >= (int)v15 )
        return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_14:
    sub_B170D4();
  }
  if ( !v10 )
    goto LABEL_14;
  return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntity(
        WarBoardIndividualityClassMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantClassEntity_o *result; // x0
  const MethodInfo *v6; // x2
  ServantClassEntity_o *v7; // x1
  struct System_String_o *name; // x8

  if ( (byte_40F6417 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&individuality);
    byte_40F6417 = 1;
  }
  result = (ServantClassEntity_o *)sub_B17014(int___TypeInfo, 1LL, method);
  if ( !result )
    sub_B170D4();
  v7 = result;
  if ( !LODWORD(result->fields.name) )
    goto LABEL_11;
  result->fields.individuality = individuality;
  result = (ServantClassEntity_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                     this,
                                     (System_Int32_array *)result,
                                     v6);
  if ( result )
  {
    name = result->fields.name;
    if ( name )
    {
      if ( (_DWORD)name )
        return *(ServantClassEntity_o **)&result->fields.individuality;
LABEL_11:
      sub_B17100(result, v7, v6);
      sub_B170A0();
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
    sub_B170D4();
  return entity->fields.individuality == x;
}