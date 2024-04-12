void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  if ( (byte_42AC835 & 1) == 0 )
  {
    sub_B52984(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_42AC835 = 1;
  }
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID = 1001;
  WarBoardIndividualityClassMaster_TypeInfo->static_fields->EXTRA_CLASS_ID = 1002;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AC830 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
    byte_42AC830 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    335,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x19
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x19

  if ( (byte_42AC834 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_42AC834 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v3 = **(_QWORD **)(v2 + 192);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(v3);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v3 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(WarBoardIndividualityClassMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  }
  if ( !v5 )
LABEL_13:
    sub_B52A5C(MasterData_WarQuestSelectionMaster, method);
  return (ServantClassEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v5,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  __int64 v16; // x22
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  System_Func_int__bool__o *v25; // x24
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_42AC831 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
    sub_B52984(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__);
    sub_B52984(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
    sub_B52984(&WarBoardIndividualityClassEntity_TypeInfo);
    byte_42AC831 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B52A5C(0LL, v8);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v12 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v12;
          p_offset += 4;
          if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v16 = sub_B52A54(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        (WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *)v16,
        0LL);
      v18 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        v20 = &v18->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v21 = (__int64)&v18->vtable[*v20].method;
      }
      else
      {
LABEL_17:
        v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
      }
      v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
              Enumerator,
              *(_QWORD *)(v21 + 8));
      if ( !v16 )
        goto LABEL_37;
      if ( v22 )
      {
        v24 = *(&WarBoardIndividualityClassEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 300LL) < (unsigned int)v24
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * v24 - 8) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          v22 = sub_B52D50(v22);
LABEL_37:
          sub_B52A5C(v22, v23);
        }
      }
      *(_QWORD *)(v16 + 16) = v22;
      sub_B52920(v16 + 16);
      if ( *(_QWORD *)(v16 + 16) )
      {
        v25 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v25,
          (Il2CppObject *)v16,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
        v26 = BasicHelper__Any_int__27531732(
                individualities,
                (System_Func_T__bool__o *)v25,
                (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
        if ( v26 )
        {
          if ( !v5 )
            sub_B52A5C(v26, v27);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            *(EventMissionProgressRequest_Argument_ProgressData_o **)(v16 + 16),
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
        }
      }
    }
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_31:
      v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                                         Enumerator,
                                                                                         *(_QWORD *)(v31 + 8));
  }
  if ( !v5 )
LABEL_39:
    sub_B52A5C(list, v7);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  const MethodInfo *v6; // x2
  WarBoardIndividualityClassEntity_o *Entities; // x0
  const MethodInfo *v8; // x1
  WarBoardIndividualityClassEntity_c *klass; // x8
  WarBoardIndividualityClassEntity_o *v10; // x20
  __int64 v11; // x21
  __int64 v13; // x0

  if ( (byte_42AC832 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantClassEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantClassEntity__TypeInfo);
    byte_42AC832 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
  Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassMaster__GetEntities(
                                                     this,
                                                     individualities,
                                                     v6);
  if ( !Entities )
    goto LABEL_14;
  klass = Entities[1].klass;
  v10 = Entities;
  if ( klass && (int)klass >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= (unsigned int)klass )
      {
        v13 = sub_B52A88(Entities);
        sub_B52A28(v13, 0LL);
      }
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v10[1].monitor + v11);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v8);
      if ( !v5 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Entities,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantClassEntity__Add__);
      LODWORD(klass) = v10[1].klass;
      if ( (int)++v11 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_14:
    sub_B52A5C(Entities, v8);
  }
  if ( !v5 )
    goto LABEL_14;
  return (ServantClassEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


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

  if ( (byte_42AC833 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AC833 = 1;
  }
  result = (ServantClassEntity_o *)sub_B5299C(int___TypeInfo, 1LL);
  if ( !result )
    sub_B52A5C(0LL, v6);
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
      v9 = sub_B52A88(result);
      sub_B52A28(v9, 0LL);
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
    sub_B52A5C(this, x);
  return entity->fields.individuality == x;
}