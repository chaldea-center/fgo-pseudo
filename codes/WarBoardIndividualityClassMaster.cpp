void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4210DCA & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardIndividualityClassMaster_TypeInfo, v1);
    byte_4210DCA = 1;
  }
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID = 1001;
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->EXTRA_CLASS_ID = 1002;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4210DC5 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      method);
    byte_4210DC5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    334,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
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

  if ( (byte_4210DC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    sub_B0D8A4(&WarBoardIndividualityClassMaster_TypeInfo, v4);
    byte_4210DC9 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AA65A4(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(WarBoardIndividualityClassMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  }
  if ( !v8 )
LABEL_13:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  return (ServantClassEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v8,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x10
  __int64 v34; // x1
  __int64 v35; // x2
  System_Func_int__bool__o *v36; // x24
  _BOOL8 v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_4210DC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, individualities);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v14);
    sub_B0D8A4(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v15);
    sub_B0D8A4(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v16);
    sub_B0D8A4(&WarBoardIndividualityClassEntity_TypeInfo, v17);
    byte_4210DC6 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo,
                                                                                                  individualities,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B0D97C(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          p_offset += 4;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v27 = sub_B0D974(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v25, v26);
      WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        (WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *)v27,
        0LL);
      v28 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        v30 = &v28->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v29;
          v30 += 4;
          if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v31 = (__int64)&v28->vtable[*v30].method;
      }
      else
      {
LABEL_17:
        v31 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
              Enumerator,
              *(_QWORD *)(v31 + 8));
      if ( !v27 )
        goto LABEL_37;
      if ( v32 )
      {
        v33 = *(&WarBoardIndividualityClassEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v33
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v33 - 8) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          v32 = sub_B0DC70(v32);
LABEL_37:
          sub_B0D97C(v32);
        }
      }
      *(_QWORD *)(v27 + 16) = v32;
      sub_B0D840(v27 + 16, v32);
      if ( *(_QWORD *)(v27 + 16) )
      {
        v36 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v34, v35);
        System_Func_int__bool____ctor(
          v36,
          (Il2CppObject *)v27,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        v37 = BasicHelper__Any_int__24145568(
                individualities,
                (System_Func_T__bool__o *)v36,
                (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
        if ( v37 )
        {
          if ( !v18 )
            sub_B0D97C(v37);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            *(EventMissionProgressRequest_Argument_ProgressData_o **)(v27 + 16),
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
        }
      }
    }
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_31:
      v41 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                                         Enumerator,
                                                                                         *(_QWORD *)(v41 + 8));
  }
  if ( !v18 )
LABEL_39:
    sub_B0D97C(list);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
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

  if ( (byte_4210DC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantClassEntity__Add__, individualities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v7);
    byte_4210DC7 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantClassEntity__TypeInfo,
                                                                                                 individualities,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
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
        v16 = sub_B0D9A8(Entities);
        sub_B0D948(v16, 0LL);
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
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantClassEntity__Add__);
      LODWORD(klass) = v13[1].klass;
      if ( (int)++v14 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_14:
    sub_B0D97C(Entities);
  }
  if ( !v8 )
    goto LABEL_14;
  return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntity(
        WarBoardIndividualityClassMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantClassEntity_o *result; // x0
  const MethodInfo *v6; // x2
  struct System_String_o *name; // x8
  __int64 v8; // x0

  if ( (byte_4210DC8 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&individuality);
    byte_4210DC8 = 1;
  }
  result = (ServantClassEntity_o *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B0D97C(0LL);
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
      v8 = sub_B0D9A8(result);
      sub_B0D948(v8, 0LL);
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
    sub_B0D97C(this);
  return entity->fields.individuality == x;
}