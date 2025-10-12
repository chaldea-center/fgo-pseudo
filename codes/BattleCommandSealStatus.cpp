void BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A8B9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_4C3A8B9 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.statusList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCommandSealStatus___ctor_46482280(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4C3A8BA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_4C3A8BA = 1;
  }
  v9 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.statusList, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.battleCommandData = battleCommandData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleCommandData, (int32_t)battleCommandData, v12, v13);
  this->fields.svtData = svtData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtData, (int32_t)svtData, v14, v15);
  this->fields.data = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, v16, v17);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v18);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v19);
}


void BattleCommandSealStatus__DetectCommonSealStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v5; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  DataManager_c *klass; // x8
  DataManager_o *v8; // x20
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  struct BattleBuffData_BuffData_o *v22; // x23
  BuffEntity_o *Entity; // x24
  int32_t type; // w25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_T__o *statusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  intptr_t v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  intptr_t v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  char v47; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C3A8BB & 1) == 0 )
  {
    sub_1C32C20(&BuffList_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A8BB = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___);
      v5 = this->fields.svtData;
      if ( !v5 )
        goto LABEL_80;
      v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)v5->fields.buffData;
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive((BattleBuffData_o *)Instance, 1, 0);
      if ( !Instance )
        goto LABEL_80;
      klass = Instance->klass;
      v8 = Instance;
      v9 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          --v9;
          p_offset += 4;
          if ( !v9 )
            goto LABEL_13;
        }
        v11 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_13:
        v11 = sub_1C83438(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
      }
      v12 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
      if ( !v12 )
        sub_1C32E7C(0);
      v47 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)v12;
        v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
        {
          v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v14;
            v15 += 4;
            if ( !v14 )
              goto LABEL_21;
          }
          v16 = v13 + 16LL * *v15 + 312;
        }
        else
        {
LABEL_21:
          v16 = sub_1C83438(v12, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
          break;
        v17 = *(_QWORD *)v12;
        v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
        {
          v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v19 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            --v18;
            v19 += 4;
            if ( !v18 )
              goto LABEL_28;
          }
          v20 = v17 + 16LL * *v19 + 312;
        }
        else
        {
LABEL_28:
          v20 = sub_1C83438(v12, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
        }
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
        v22 = (struct BattleBuffData_BuffData_o *)v21;
        if ( !v21 )
          sub_1C32E7C(0);
        if ( !*(_BYTE *)(v21 + 512) )
        {
          if ( !v6 )
            sub_1C32E7C(v21);
          Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     v6,
                                     *(_DWORD *)(v21 + 16),
                                     (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( Entity )
          {
            type = Entity->fields.type;
            if ( !BuffList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            if ( BuffList__CheckType(32, type, 0) )
            {
              if ( BuffEntity__getDamageRelease(Entity, 0) < 1 )
              {
                if ( BuffEntity__getDamageRelease(Entity, 0) == -1 )
                {
                  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
                  if ( !statusList )
                    sub_1C32E7C(0);
                  items = statusList->fields._items;
                  v29 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
                  ++statusList->fields._version;
                  if ( !items )
                    sub_1C32E7C(statusList);
                  size = statusList->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_Int32Enum___AddWithResize(
                      statusList,
                      0,
                      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    statusList->fields._size = size + 1;
                    *((_DWORD *)items->m_Items + size) = 0;
                  }
                }
                else
                {
                  v47 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v22;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v22, v25, v26);
              }
            }
          }
        }
      }
      v31 = *(_QWORD *)v12;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_50;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_50:
        v34 = sub_1C83438(v12, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v12, *(_QWORD *)(v34 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v36 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_80;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            1,
            *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 1;
        }
      }
      if ( (v47 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        v38 = Instance->fields.m_CachedPtr;
        v39 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v38 )
          goto LABEL_80;
        v40 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            2,
            *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v40 + 1;
          *(_DWORD *)(v38 + 4 * v40 + 32) = 2;
        }
      }
    }
    Instance = (DataManager_o *)this->fields.svtData;
    if ( !Instance )
      goto LABEL_80;
    if ( !BattleServantData__isCardTypeAction((BattleServantData_o *)Instance, this->fields.battleCommandData, 0) )
    {
      Instance = (DataManager_o *)this->fields.statusList;
      if ( !Instance )
        goto LABEL_80;
      v41 = Instance->fields.m_CachedPtr;
      v42 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v41 )
        goto LABEL_80;
      v43 = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          (System_Collections_Generic_List_T__o *)Instance,
          9,
          *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(Instance->fields.m_CancellationTokenSource) = v43 + 1;
        *(_DWORD *)(v41 + 4 * v43 + 32) = 9;
      }
    }
    Instance = (DataManager_o *)this->fields.svtData;
    if ( Instance )
    {
      if ( BattleServantData__IsAvailableCard((BattleServantData_o *)Instance, this->fields.battleCommandData, 0) )
        return;
      Instance = (DataManager_o *)this->fields.statusList;
      if ( Instance )
      {
        v44 = Instance->fields.m_CachedPtr;
        v45 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( v44 )
        {
          v46 = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              8,
              *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = v46 + 1;
            *(_DWORD *)(v44 + 4 * v46 + 32) = 8;
          }
          return;
        }
      }
    }
LABEL_80:
    sub_1C32E7C(Instance);
  }
}


void BattleCommandSealStatus__DetectSealStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleCommandSealStatus__DetectCommonSealStatus(this, method);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v3);
}


void BattleCommandSealStatus__DetectTreasureDeviceSealStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  struct BattleCommandData_o *battleCommandData; // x8
  System_Collections_Generic_List_T__o *statusList; // x20
  int32_t v6; // w1
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

  if ( (byte_4C3A8BC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A8BC = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    battleCommandData = this->fields.battleCommandData;
    if ( !battleCommandData )
      goto LABEL_48;
    if ( battleCommandData->fields.treasureDvc < 1 )
      return;
    if ( BattleServantData__isTDSeraled(svtData, 0) )
    {
      svtData = this->fields.svtData;
      if ( !svtData )
        goto LABEL_48;
      statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
      svtData = (BattleServantData_o *)BattleServantData__isHeroine(svtData, 0);
      v6 = ((unsigned __int8)svtData & 1) != 0 ? 3 : 4;
      if ( !statusList )
        goto LABEL_48;
      items = statusList->fields._items;
      v8 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++statusList->fields._version;
      if ( !items )
        goto LABEL_48;
      size = statusList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          statusList,
          v6,
          *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
      }
      else
      {
        statusList->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = v6;
      }
    }
    invokeAct = 0;
    svtData = this->fields.svtData;
    if ( !svtData )
      goto LABEL_48;
    BattleServantData__isNobleAction_46184052(svtData, &invokeAct, 0);
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
        if ( UnityEngine_Object__op_Inequality(data, 0, 0)
          && !TreasureDeviceConditionUtil__HasEnoughCriticalStar(this->fields.svtData, this->fields.data, 0) )
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
              *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
          if ( !BattleServantData__get_isTreasureDeveiceError(svtData, 0) )
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
                  *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
        sub_1C32E7C(svtData);
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
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v19 + 192) + 112LL));
    goto LABEL_31;
  }
}


bool BattleCommandSealStatus__get_HasKindOfDontAction(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus___c_c *v3; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__6_0; // x20
  Il2CppObject *v6; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3A8B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_1C32C20(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_1C32C20(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__);
    sub_1C32C20(&BattleCommandSealStatus___c_TypeInfo);
    byte_4C3A8B8 = 1;
  }
  v3 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v3 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__6_0 = (System_Predicate_T__o *)v3->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleCommandSealStatus___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__6_0 = (System_Predicate_T__o *)sub_1C32E6C(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(
      _9__6_0,
      v6,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      0);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v8, v9);
  }
  if ( !statusList )
    sub_1C32E7C(v3);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__6_0,
           (const MethodInfo_377E5D0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus___c_c *v3; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__4_0; // x20
  Il2CppObject *v6; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3A8B7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_1C32C20(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_1C32C20(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__);
    sub_1C32C20(&BattleCommandSealStatus___c_TypeInfo);
    byte_4C3A8B7 = 1;
  }
  v3 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v3 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_T__o *)v3->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleCommandSealStatus___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__4_0 = (System_Predicate_T__o *)sub_1C32E6C(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(_9__4_0, v6, Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, 0);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9);
  }
  if ( !statusList )
    sub_1C32E7C(v3);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__4_0,
           (const MethodInfo_377E5D0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool BattleCommandSealStatus__get_IsTreasureDeviceError(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  return BattleCommandSealStatus__get_PrioredStatus(this, method) == 10;
}


int32_t BattleCommandSealStatus__get_PrioredStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_4C3A8B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__);
    byte_4C3A8B6 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_1C32E7C(0);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_Int32Enum_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_310B8DC *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
}


BattleBuffData_BuffData_o *BattleCommandSealStatus__get_SleepBuff(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._SleepBuff_k__BackingField;
}


void BattleCommandSealStatus__set_SleepBuff(
        BattleCommandSealStatus_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SleepBuff_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A8BD & 1) == 0 )
  {
    sub_1C32C20(&BattleCommandSealStatus___c_TypeInfo);
    byte_4C3A8BD = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleCommandSealStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCommandSealStatus___c_TypeInfo->static_fields->__9 = (struct BattleCommandSealStatus___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleCommandSealStatus___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleCommandSealStatus___c___ctor(BattleCommandSealStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCommandSealStatus___c___get_HasKindOfDontAction_b__6_0(
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


bool BattleCommandSealStatus___c___get_HasKindOfSealed_b__4_0(
        BattleCommandSealStatus___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return (unsigned int)(x - 3) < 5;
}