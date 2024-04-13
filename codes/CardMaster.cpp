void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB66D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB66D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    112,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB66B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__, id, num, method);
    byte_42EB66B = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                           PK,
                           (const MethodInfo_23FB260 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CardMaster__TryGetEntity(
        CardMaster_o *this,
        CardEntity_o **entity,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB66C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&num);
    byte_42EB66C = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  DataManager_o *v13; // x1
  CardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v16; // w20
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  if ( (byte_42EB66E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CardMaster___, num, (_DWORD)method, v3);
    sub_B5D5C4(&long___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB66E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (CardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B5D5DC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v13 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v19 = sub_B5D6C8(Instance);
    sub_B5D668(v19, 0LL);
  }
  v16 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v16;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase__isEntityExistsFromId(
         (DataMasterBase_o *)MasterData_WarQuestSelectionMaster,
         (System_Int64_array *)Instance,
         0LL) )
  {
    Instance = (DataManager_o *)CardMaster__GetEntity(MasterData_WarQuestSelectionMaster, type, v16, v17);
    if ( Instance )
      return (float)SLODWORD(Instance->fields.datalist) / 1000.0;
LABEL_12:
    sub_B5D69C(Instance, v13);
  }
  return 1.0;
}


float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  DataManager_o *v13; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v16; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v18; // x3
  float result; // s0
  __int64 v20; // x0

  if ( (byte_42EB670 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CardMaster___, num, (_DWORD)method, v3);
    sub_B5D5C4(&long___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB670 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B5D5DC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v13 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v20 = sub_B5D6C8(Instance);
    sub_B5D668(v20, 0LL);
  }
  v16 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v16;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v16, v18);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(Instance, v13);
  return (float)SLODWORD(Instance->fields.lookup) / 1000.0;
}


System_Int32_array *__fastcall CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v38; // x19
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v48; // x3
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x22
  CardEntity_c *v55; // x1
  __int64 v56; // x9
  __int64 v57; // x28
  __int64 v58; // x8
  unsigned __int64 v59; // x27
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  __int64 v65; // x0

  if ( (byte_42EB672 & 1) == 0 )
  {
    sub_B5D5C4(&CardEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CardMaster___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    byte_42EB672 = 1;
  }
  v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)Instance->fields.lookup;
  if ( !Instance )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v41);
  while ( 1 )
  {
LABEL_7:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v45;
        p_offset += 4;
        if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v42);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v49 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v50 = 0LL;
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v51 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v52 = (__int64)&v49->vtable[*v51].method;
    }
    else
    {
LABEL_18:
      v52 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v48);
    }
    v53 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
            Enumerator,
            *(_QWORD *)(v52 + 8));
    v54 = v53;
    if ( !v53 )
      continue;
    v55 = CardEntity_TypeInfo;
    v56 = *(&CardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 300LL) < (unsigned int)v56
      || *(CardEntity_c **)(*(_QWORD *)(*(_QWORD *)v53 + 200LL) + 8 * v56 - 8) != CardEntity_TypeInfo )
    {
      sub_B5D990(v53);
      goto LABEL_46;
    }
    v57 = *(_QWORD *)(v53 + 48);
    if ( v57 )
    {
      v58 = *(_QWORD *)(v57 + 24);
      if ( v58 )
      {
        if ( (int)v58 >= 1 )
        {
          v59 = 0LL;
          while ( 1 )
          {
            if ( v59 >= (unsigned int)v58 )
            {
              v65 = sub_B5D6C8(v53);
              sub_B5D668(v65, 0LL);
            }
            if ( *(_DWORD *)(v57 + 32 + 4 * v59) == individuality )
            {
              if ( !v38 )
                sub_B5D69C(v53, v55);
              v53 = System_Collections_Generic_List_int___Contains(
                      v38,
                      *(_DWORD *)(v54 + 16),
                      (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (v53 & 1) == 0 )
              {
                System_Collections_Generic_List_int___Add(
                  v38,
                  *(_DWORD *)(v54 + 16),
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                goto LABEL_7;
              }
              LODWORD(v58) = *(_DWORD *)(v57 + 24);
            }
            if ( (__int64)++v59 >= (int)v58 )
              goto LABEL_7;
          }
        }
      }
    }
  }
  v60 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_39:
    v63 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v48);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(
                                Enumerator,
                                *(_QWORD *)(v63 + 8));
  if ( !v38 )
LABEL_46:
    sub_B5D69C(Instance, v40);
  return System_Collections_Generic_List_int___ToArray(
           v38,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  CardMaster_o *v15; // x21
  const MethodInfo *v16; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB671 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CardMaster___, num, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB671 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v15 = (CardMaster_o *)Instance;
  Instance = (DataManager_o *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v14);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (DataManager_o *)CardMaster__TryGetEntity(v15, &entity, type, 1, v16),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_B5D69C(Instance, v13);
  }
  return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
}


float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  DataManager_o *v13; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v16; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v18; // x3
  float result; // s0
  __int64 v20; // x0

  if ( (byte_42EB66F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CardMaster___, num, (_DWORD)method, v3);
    sub_B5D5C4(&long___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB66F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B5D5DC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v13 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v20 = sub_B5D6C8(Instance);
    sub_B5D668(v20, 0LL);
  }
  v16 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v16;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v16, v18);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(Instance, v13);
  return (float)SHIDWORD(Instance->fields.datalist) / 1000.0;
}