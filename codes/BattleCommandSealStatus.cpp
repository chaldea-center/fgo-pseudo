void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_T__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C00376 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v3);
    byte_4C00376 = 1;
  }
  v4 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v4,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.statusList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_44769988(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1

  if ( (byte_4C00377 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, battleCommandData);
    sub_1C2E12C(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v9);
    byte_4C00377 = 1;
  }
  v10 = (System_Collections_Generic_List_T__o *)sub_1C2E378(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3650860 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v10;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.statusList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.battleCommandData,
    (int64_t)battleCommandData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.svtData = svtData;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.svtData, (int64_t)svtData, v23, v24, v25, v26, v27, v28);
  this->fields.data = data;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, v29, v30, v31, v32, v33, v34);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v35);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v36);
}


void __fastcall BattleCommandSealStatus__DetectCommonSealStatus(
        BattleCommandSealStatus_o *this,
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
  BattleServantData_o *svtData; // x0
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  DataManager_c *klass; // x8
  DataManager_o *v17; // x20
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  struct BattleBuffData_BuffData_o *v33; // x23
  BuffEntity_o *Entity; // x24
  int32_t type; // w25
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  System_Collections_Generic_List_T__o *statusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  char v63; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C00378 & 1) == 0 )
  {
    sub_1C2E12C(&BuffList_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_BuffMaster___, v3);
    sub_1C2E12C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C00378 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_BuffMaster___);
      v14 = this->fields.svtData;
      if ( !v14 )
        goto LABEL_80;
      v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)v14->fields.buffData;
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                    (BattleBuffData_o *)Instance,
                                    1,
                                    0LL);
      if ( !Instance )
        goto LABEL_80;
      klass = Instance->klass;
      v17 = Instance;
      v18 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          --v18;
          p_offset += 4;
          if ( !v18 )
            goto LABEL_13;
        }
        v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_13:
        v20 = sub_1C8010C(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v22 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
      if ( !v22 )
        sub_1C2E388(0LL, v21);
      v63 = 0;
      while ( 1 )
      {
        v23 = *(_QWORD *)v22;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 4;
            if ( !v24 )
              goto LABEL_21;
          }
          v26 = v23 + 16LL * *v25 + 312;
        }
        else
        {
LABEL_21:
          v26 = sub_1C8010C(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
          break;
        v27 = *(_QWORD *)v22;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            --v28;
            v29 += 4;
            if ( !v28 )
              goto LABEL_28;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_28:
          v30 = sub_1C8010C(v22, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
        }
        v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
        v33 = (struct BattleBuffData_BuffData_o *)v31;
        if ( !v31 )
          sub_1C2E388(0LL, v32);
        if ( !*(_BYTE *)(v31 + 449) )
        {
          if ( !v15 )
            sub_1C2E388(v31, v32);
          Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     v15,
                                     *(_DWORD *)(v31 + 16),
                                     (const MethodInfo_327B180 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( Entity )
          {
            type = Entity->fields.type;
            if ( !BuffList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            if ( BuffList__CheckType(32, type, 0LL) )
            {
              if ( BuffEntity__getDamageRelease(Entity, 0LL) < 1 )
              {
                if ( BuffEntity__getDamageRelease(Entity, 0LL) == -1 )
                {
                  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
                  if ( !statusList )
                    sub_1C2E388(0LL, v42);
                  items = statusList->fields._items;
                  v45 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
                  ++statusList->fields._version;
                  if ( !items )
                    sub_1C2E388(statusList, v42);
                  size = statusList->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_Int32Enum___AddWithResize(
                      statusList,
                      0,
                      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    statusList->fields._size = size + 1;
                    *((_DWORD *)items->m_Items + size) = 0;
                  }
                }
                else
                {
                  v63 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v33;
                sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v33, v36, v37, v38, v39, v40, v41);
              }
            }
          }
        }
      }
      v47 = *(_QWORD *)v22;
      v48 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_50;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_50:
        v50 = sub_1C8010C(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v22, *(_QWORD *)(v50 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        v51 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v52 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v51 )
          goto LABEL_80;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v51 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            1,
            *(const MethodInfo_36510B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v51 + 4 * m_CancellationTokenSource_low + 32) = 1;
        }
      }
      if ( (v63 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        v54 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v55 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v54 )
          goto LABEL_80;
        v56 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            2,
            *(const MethodInfo_36510B4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v56 + 1;
          *(_DWORD *)(v54 + 4 * v56 + 32) = 2;
        }
      }
    }
    Instance = (DataManager_o *)this->fields.svtData;
    if ( !Instance )
      goto LABEL_80;
    if ( !BattleServantData__isCardTypeAction((BattleServantData_o *)Instance, this->fields.battleCommandData, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.statusList;
      if ( !Instance )
        goto LABEL_80;
      v57 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v58 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v57 )
        goto LABEL_80;
      v59 = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          (System_Collections_Generic_List_T__o *)Instance,
          9,
          *(const MethodInfo_36510B4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(Instance->fields.m_CancellationTokenSource) = v59 + 1;
        *(_DWORD *)(v57 + 4 * v59 + 32) = 9;
      }
    }
    Instance = (DataManager_o *)this->fields.svtData;
    if ( Instance )
    {
      if ( BattleServantData__IsAvailableCard((BattleServantData_o *)Instance, this->fields.battleCommandData, 0LL) )
        return;
      Instance = (DataManager_o *)this->fields.statusList;
      if ( Instance )
      {
        v60 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v61 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( v60 )
        {
          v62 = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              8,
              *(const MethodInfo_36510B4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = v62 + 1;
            *(_DWORD *)(v60 + 4 * v62 + 32) = 8;
          }
          return;
        }
      }
    }
LABEL_80:
    sub_1C2E388(Instance, v12);
  }
}


void __fastcall BattleCommandSealStatus__DetectSealStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleCommandSealStatus__DetectCommonSealStatus(this, method);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v3);
}


void __fastcall BattleCommandSealStatus__DetectTreasureDeviceSealStatus(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *svtData; // x0
  struct BattleCommandData_o *battleCommandData; // x8
  System_Collections_Generic_List_T__o *statusList; // x20
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  int32_t v13; // w9
  __int64 v14; // x8
  int v15; // w10
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 uniqueId; // x10
  __int64 v19; // x8
  int32_t v20; // w1
  UnityEngine_Object_o *data; // x20
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C00379 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4C00379 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    battleCommandData = this->fields.battleCommandData;
    if ( !battleCommandData )
      goto LABEL_48;
    if ( battleCommandData->fields.treasureDvc < 1 )
      return;
    if ( BattleServantData__isTDSeraled(svtData, 0LL) )
    {
      svtData = this->fields.svtData;
      if ( !svtData )
        goto LABEL_48;
      statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
      svtData = (BattleServantData_o *)BattleServantData__isHeroine(svtData, 0LL);
      method = (const MethodInfo *)(((unsigned __int8)svtData & 1) != 0 ? 3LL : 4LL);
      if ( !statusList )
        goto LABEL_48;
      items = statusList->fields._items;
      v8 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++statusList->fields._version;
      if ( !items )
        goto LABEL_48;
      size = statusList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          statusList,
          (int32_t)method,
          *(const MethodInfo_36510B4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
      }
      else
      {
        statusList->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = (_DWORD)method;
      }
    }
    invokeAct = 0;
    svtData = this->fields.svtData;
    if ( !svtData )
      goto LABEL_48;
    BattleServantData__isNobleAction_44405944(svtData, &invokeAct, 0LL);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v16 = *(_QWORD *)&svtData->fields.index;
      v17 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v16 )
        goto LABEL_48;
      uniqueId = svtData->fields.uniqueId;
      if ( (unsigned int)uniqueId < *(_DWORD *)(v16 + 24) )
      {
        v13 = uniqueId + 1;
        v14 = v16 + 4 * uniqueId;
        v15 = 7;
        goto LABEL_27;
      }
      v19 = v17[4];
      v20 = 7;
    }
    else
    {
      if ( invokeAct != 41 )
      {
LABEL_31:
        data = (UnityEngine_Object_o *)this->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL)
          && !TreasureDeviceConditionUtil__HasEnoughCriticalStar(this->fields.svtData, this->fields.data, 0LL) )
        {
          svtData = (BattleServantData_o *)this->fields.statusList;
          if ( !svtData )
            goto LABEL_48;
          v22 = *(_QWORD *)&svtData->fields.index;
          v23 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
          ++*(&svtData->fields.uniqueId + 1);
          if ( !v22 )
            goto LABEL_48;
          v24 = svtData->fields.uniqueId;
          if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)svtData,
              6,
              *(const MethodInfo_36510B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            svtData->fields.uniqueId = v24 + 1;
            *(_DWORD *)(v22 + 4 * v24 + 32) = 6;
          }
        }
        svtData = this->fields.svtData;
        if ( svtData )
        {
          if ( !BattleServantData__get_isTreasureDeveiceError(svtData, 0LL) )
            return;
          svtData = (BattleServantData_o *)this->fields.statusList;
          if ( svtData )
          {
            v25 = *(_QWORD *)&svtData->fields.index;
            v26 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
            ++*(&svtData->fields.uniqueId + 1);
            if ( v25 )
            {
              v27 = svtData->fields.uniqueId;
              if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
              {
                System_Collections_Generic_List_Int32Enum___AddWithResize(
                  (System_Collections_Generic_List_T__o *)svtData,
                  10,
                  *(const MethodInfo_36510B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                svtData->fields.uniqueId = v27 + 1;
                *(_DWORD *)(v25 + 4 * v27 + 32) = 10;
              }
              return;
            }
          }
        }
LABEL_48:
        sub_1C2E388(svtData, method);
      }
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v10 = *(_QWORD *)&svtData->fields.index;
      v11 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v10 )
        goto LABEL_48;
      v12 = svtData->fields.uniqueId;
      if ( (unsigned int)v12 < *(_DWORD *)(v10 + 24) )
      {
        v13 = v12 + 1;
        v14 = v10 + 4 * v12;
        v15 = 5;
LABEL_27:
        svtData->fields.uniqueId = v13;
        *(_DWORD *)(v14 + 32) = v15;
        goto LABEL_31;
      }
      v19 = v11[4];
      v20 = 5;
    }
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)svtData,
      v20,
      *(const MethodInfo_36510B4 **)(*(_QWORD *)(v19 + 192) + 112LL));
    goto LABEL_31;
  }
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfDontAction(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleCommandSealStatus___c_c *v6; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__6_0; // x20
  Il2CppObject *v9; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C00375 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_1C2E12C(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v3);
    sub_1C2E12C(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__, v4);
    sub_1C2E12C(&BattleCommandSealStatus___c_TypeInfo, v5);
    byte_4C00375 = 1;
  }
  v6 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v6 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__6_0 = (System_Predicate_T__o *)v6->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleCommandSealStatus___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__6_0 = (System_Predicate_T__o *)sub_1C2E378(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(
      _9__6_0,
      v9,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      0LL);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !statusList )
    sub_1C2E388(v6, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__6_0,
           (const MethodInfo_36516C0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleCommandSealStatus___c_c *v6; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C00374 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_1C2E12C(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v3);
    sub_1C2E12C(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, v4);
    sub_1C2E12C(&BattleCommandSealStatus___c_TypeInfo, v5);
    byte_4C00374 = 1;
  }
  v6 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v6 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_T__o *)v6->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleCommandSealStatus___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__4_0 = (System_Predicate_T__o *)sub_1C2E378(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(
      _9__4_0,
      v9,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      0LL);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !statusList )
    sub_1C2E388(v6, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__4_0,
           (const MethodInfo_36516C0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_IsTreasureDeviceError(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  return BattleCommandSealStatus__get_PrioredStatus(this, method) == 10;
}


int32_t __fastcall BattleCommandSealStatus__get_PrioredStatus(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_4C00373 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__, v3);
    byte_4C00373 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_1C2E388(0LL, method);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_Int32Enum_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_2FFA390 *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
}


BattleBuffData_BuffData_o *__fastcall BattleCommandSealStatus__get_SleepBuff(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._SleepBuff_k__BackingField;
}


void __fastcall BattleCommandSealStatus__set_SleepBuff(
        BattleCommandSealStatus_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SleepBuff_k__BackingField = value;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C0037A & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandSealStatus___c_TypeInfo, v1);
    byte_4C0037A = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BattleCommandSealStatus___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleCommandSealStatus___c_TypeInfo->static_fields->__9 = (struct BattleCommandSealStatus___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattleCommandSealStatus___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleCommandSealStatus___c___ctor(BattleCommandSealStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandSealStatus___c___get_HasKindOfDontAction_b__6_0(
        BattleCommandSealStatus___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( (unsigned int)x > 9 )
    LOBYTE(v3) = 0;
  else
    return (0x307u >> x) & 1;
  return v3;
}


bool __fastcall BattleCommandSealStatus___c___get_HasKindOfSealed_b__4_0(
        BattleCommandSealStatus___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return (unsigned int)(x - 3) < 5;
}