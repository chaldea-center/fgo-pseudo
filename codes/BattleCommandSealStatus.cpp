void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FED4F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v4);
    byte_49FED4F = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                 System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                 method,
                                                 v2);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusList, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_42855924(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_49FED50 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, battleCommandData);
    sub_1B640C8(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v9);
    byte_49FED50 = 1;
  }
  v10 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                  battleCommandData,
                                                  svtData);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusList, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.battleCommandData,
    (int32_t)battleCommandData,
    v13,
    v14);
  this->fields.svtData = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtData, (int32_t)svtData, v15, v16);
  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, v17, v18);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v19);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v20);
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
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  DataManager_c *klass; // x8
  DataManager_o *v16; // x20
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x20
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  struct BattleBuffData_BuffData_o *v30; // x23
  BuffEntity_o *Entity; // x24
  int32_t type; // w25
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_T__o *statusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  char v52; // [xsp+Ch] [xbp-64h]

  if ( (byte_49FED51 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FED51 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
      v13 = this->fields.svtData;
      if ( !v13 )
        goto LABEL_74;
      v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)v13->fields.buffData;
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                    (BattleBuffData_o *)Instance,
                                    1,
                                    0LL);
      if ( !Instance )
        goto LABEL_74;
      klass = Instance->klass;
      v16 = Instance;
      v17 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          --v17;
          p_offset += 4;
          if ( !v17 )
            goto LABEL_13;
        }
        v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_13:
        v19 = sub_1BB60A8(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v20 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
      if ( !v20 )
        sub_1B64324(0LL);
      v52 = 0;
      while ( 1 )
      {
        v21 = *(_QWORD *)v20;
        v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
        {
          v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v22;
            v23 += 4;
            if ( !v22 )
              goto LABEL_21;
          }
          v24 = v21 + 16LL * *v23 + 312;
        }
        else
        {
LABEL_21:
          v24 = sub_1BB60A8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
          break;
        v25 = *(_QWORD *)v20;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_28;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_28:
          v28 = sub_1BB60A8(v20, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
        }
        v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
        v30 = (struct BattleBuffData_BuffData_o *)v29;
        if ( !v29 )
          sub_1B64324(0LL);
        if ( !*(_BYTE *)(v29 + 401) )
        {
          if ( !v14 )
            sub_1B64324(v29);
          Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     v14,
                                     *(_DWORD *)(v29 + 16),
                                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
                    sub_1B64324(0LL);
                  items = statusList->fields._items;
                  v37 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
                  ++statusList->fields._version;
                  if ( !items )
                    sub_1B64324(statusList);
                  size = statusList->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_Int32Enum___AddWithResize(
                      statusList,
                      0,
                      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    statusList->fields._size = size + 1;
                    *((_DWORD *)items->m_Items + size) = 0;
                  }
                }
                else
                {
                  v52 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v30;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v30, v33, v34);
              }
            }
          }
        }
      }
      v39 = *(_QWORD *)v20;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_50;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_50:
        v42 = sub_1BB60A8(v20, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v42)(v20, *(_QWORD *)(v42 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_74;
        v43 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v44 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v43 )
          goto LABEL_74;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v43 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            1,
            *(const MethodInfo_34927A8 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v43 + 4 * m_CancellationTokenSource_low + 32) = 1;
        }
      }
      if ( (v52 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_74;
        v46 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v47 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v46 )
          goto LABEL_74;
        v48 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            2,
            *(const MethodInfo_34927A8 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v48 + 1;
          *(_DWORD *)(v46 + 4 * v48 + 32) = 2;
        }
      }
    }
    Instance = (DataManager_o *)this->fields.svtData;
    if ( Instance )
    {
      if ( BattleServantData__isCardTypeAction((BattleServantData_o *)Instance, this->fields.battleCommandData, 0LL) )
        return;
      Instance = (DataManager_o *)this->fields.statusList;
      if ( Instance )
      {
        v49 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v50 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( v49 )
        {
          v51 = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              8,
              *(const MethodInfo_34927A8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = v51 + 1;
            *(_DWORD *)(v49 + 4 * v51 + 32) = 8;
          }
          return;
        }
      }
    }
LABEL_74:
    sub_1B64324(Instance);
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
  int32_t v7; // w1
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  int32_t v14; // w9
  __int64 v15; // x8
  int v16; // w10
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 uniqueId; // x10
  __int64 v20; // x8
  int32_t v21; // w1
  UnityEngine_Object_o *data; // x20
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49FED52 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FED52 = 1;
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
      v7 = ((unsigned __int8)svtData & 1) != 0 ? 3 : 4;
      if ( !statusList )
        goto LABEL_48;
      items = statusList->fields._items;
      v9 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++statusList->fields._version;
      if ( !items )
        goto LABEL_48;
      size = statusList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          statusList,
          v7,
          *(const MethodInfo_34927A8 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        statusList->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = v7;
      }
    }
    invokeAct = 0;
    svtData = this->fields.svtData;
    if ( !svtData )
      goto LABEL_48;
    BattleServantData__isNobleAction_42520640(svtData, &invokeAct, 0LL);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v17 = *(_QWORD *)&svtData->fields.index;
      v18 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v17 )
        goto LABEL_48;
      uniqueId = svtData->fields.uniqueId;
      if ( (unsigned int)uniqueId < *(_DWORD *)(v17 + 24) )
      {
        v14 = uniqueId + 1;
        v15 = v17 + 4 * uniqueId;
        v16 = 7;
        goto LABEL_27;
      }
      v20 = v18[4];
      v21 = 7;
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
          v23 = *(_QWORD *)&svtData->fields.index;
          v24 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
          ++*(&svtData->fields.uniqueId + 1);
          if ( !v23 )
            goto LABEL_48;
          v25 = svtData->fields.uniqueId;
          if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)svtData,
              6,
              *(const MethodInfo_34927A8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            svtData->fields.uniqueId = v25 + 1;
            *(_DWORD *)(v23 + 4 * v25 + 32) = 6;
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
            v26 = *(_QWORD *)&svtData->fields.index;
            v27 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
            ++*(&svtData->fields.uniqueId + 1);
            if ( v26 )
            {
              v28 = svtData->fields.uniqueId;
              if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
              {
                System_Collections_Generic_List_Int32Enum___AddWithResize(
                  (System_Collections_Generic_List_T__o *)svtData,
                  9,
                  *(const MethodInfo_34927A8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                svtData->fields.uniqueId = v28 + 1;
                *(_DWORD *)(v26 + 4 * v28 + 32) = 9;
              }
              return;
            }
          }
        }
LABEL_48:
        sub_1B64324(svtData);
      }
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v11 = *(_QWORD *)&svtData->fields.index;
      v12 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v11 )
        goto LABEL_48;
      v13 = svtData->fields.uniqueId;
      if ( (unsigned int)v13 < *(_DWORD *)(v11 + 24) )
      {
        v14 = v13 + 1;
        v15 = v11 + 4 * v13;
        v16 = 5;
LABEL_27:
        svtData->fields.uniqueId = v14;
        *(_DWORD *)(v15 + 32) = v16;
        goto LABEL_31;
      }
      v20 = v12[4];
      v21 = 5;
    }
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)svtData,
      v21,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v20 + 192) + 112LL));
    goto LABEL_31;
  }
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfDontAction(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleCommandSealStatus___c_c *v7; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__6_0; // x20
  Il2CppObject *v10; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FED4E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_1B640C8(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v4);
    sub_1B640C8(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__, v5);
    sub_1B640C8(&BattleCommandSealStatus___c_TypeInfo, v6);
    byte_49FED4E = 1;
  }
  v7 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v7 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__6_0 = (System_Predicate_T__o *)v7->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleCommandSealStatus___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__6_0 = (System_Predicate_T__o *)sub_1B64314(
                                         System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                         method,
                                         v2);
    System_Predicate_Int32Enum____ctor(
      _9__6_0,
      v10,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      0LL);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v12, v13);
  }
  if ( !statusList )
    sub_1B64324(v7);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__6_0,
           (const MethodInfo_3492DB4 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleCommandSealStatus___c_c *v7; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__4_0; // x20
  Il2CppObject *v10; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FED4D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_1B640C8(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v4);
    sub_1B640C8(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, v5);
    sub_1B640C8(&BattleCommandSealStatus___c_TypeInfo, v6);
    byte_49FED4D = 1;
  }
  v7 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v7 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_T__o *)v7->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleCommandSealStatus___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__4_0 = (System_Predicate_T__o *)sub_1B64314(
                                         System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                         method,
                                         v2);
    System_Predicate_Int32Enum____ctor(
      _9__4_0,
      v10,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      0LL);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v12, v13);
  }
  if ( !statusList )
    sub_1B64324(v7);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__4_0,
           (const MethodInfo_3492DB4 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_IsTreasureDeviceError(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  return BattleCommandSealStatus__get_PrioredStatus(this, method) == 9;
}


int32_t __fastcall BattleCommandSealStatus__get_PrioredStatus(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_49FED4C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__, v3);
    byte_49FED4C = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_1B64324(0LL);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_Int32Enum_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_2E61F30 *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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

  this->fields._SleepBuff_k__BackingField = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FED53 & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandSealStatus___c_TypeInfo, v1);
    byte_49FED53 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleCommandSealStatus___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleCommandSealStatus___c_TypeInfo->static_fields->__9 = (struct BattleCommandSealStatus___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleCommandSealStatus___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (unsigned int)x > 8 )
    LOBYTE(v3) = 0;
  else
    return (0x107u >> x) & 1;
  return v3;
}


bool __fastcall BattleCommandSealStatus___c___get_HasKindOfSealed_b__4_0(
        BattleCommandSealStatus___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return (unsigned int)(x - 3) < 5;
}