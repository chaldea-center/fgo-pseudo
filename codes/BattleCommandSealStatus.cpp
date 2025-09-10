void BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A1A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_4C2A1A6 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.statusList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCommandSealStatus___ctor_46340716(
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

  if ( (byte_4C2A1A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_4C2A1A7 = 1;
  }
  v9 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.statusList, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.battleCommandData = battleCommandData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleCommandData, (int32_t)battleCommandData, v12, v13);
  this->fields.svtData = svtData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtData, (int32_t)svtData, v14, v15);
  this->fields.data = data;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, v16, v17);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v18);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v19);
}


void BattleCommandSealStatus__DetectCommonSealStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  DataManager_c *klass; // x8
  DataManager_o *v9; // x20
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  struct BattleBuffData_BuffData_o *v25; // x23
  BuffEntity_o *Entity; // x24
  int32_t type; // w25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  System_Collections_Generic_List_T__o *statusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  intptr_t v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  intptr_t v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  char v51; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C2A1A8 & 1) == 0 )
  {
    sub_1C2D490(&BuffList_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A1A8 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BuffMaster___);
      v6 = this->fields.svtData;
      if ( !v6 )
        goto LABEL_80;
      v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)v6->fields.buffData;
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive((BattleBuffData_o *)Instance, 1, 0);
      if ( !Instance )
        goto LABEL_80;
      klass = Instance->klass;
      v9 = Instance;
      v10 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_13;
        }
        v12 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_13:
        v12 = sub_1C7DCA8(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
      if ( !v14 )
        sub_1C2D6EC(0, v13);
      v51 = 0;
      while ( 1 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v16;
            v17 += 4;
            if ( !v16 )
              goto LABEL_21;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_21:
          v18 = sub_1C7DCA8(v14, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = *(_QWORD *)v14;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            --v20;
            v21 += 4;
            if ( !v20 )
              goto LABEL_28;
          }
          v22 = v19 + 16LL * *v21 + 312;
        }
        else
        {
LABEL_28:
          v22 = sub_1C7DCA8(v14, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
        }
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
        v25 = (struct BattleBuffData_BuffData_o *)v23;
        if ( !v23 )
          sub_1C2D6EC(0, v24);
        if ( !*(_BYTE *)(v23 + 512) )
        {
          if ( !v7 )
            sub_1C2D6EC(v23, v24);
          Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     v7,
                                     *(_DWORD *)(v23 + 16),
                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
                    sub_1C2D6EC(0, v30);
                  items = statusList->fields._items;
                  v33 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
                  ++statusList->fields._version;
                  if ( !items )
                    sub_1C2D6EC(statusList, v30);
                  size = statusList->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_Int32Enum___AddWithResize(
                      statusList,
                      0,
                      *(const MethodInfo_376F38C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    statusList->fields._size = size + 1;
                    *((_DWORD *)items->m_Items + size) = 0;
                  }
                }
                else
                {
                  v51 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v25;
                sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v25, v28, v29);
              }
            }
          }
        }
      }
      v35 = *(_QWORD *)v14;
      v36 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_50;
        }
        v38 = v35 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_50:
        v38 = sub_1C7DCA8(v14, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v38)(v14, *(_QWORD *)(v38 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v40 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_80;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            1,
            *(const MethodInfo_376F38C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 1;
        }
      }
      if ( (v51 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        v42 = Instance->fields.m_CachedPtr;
        v43 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v42 )
          goto LABEL_80;
        v44 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            2,
            *(const MethodInfo_376F38C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v44 + 1;
          *(_DWORD *)(v42 + 4 * v44 + 32) = 2;
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
      v45 = Instance->fields.m_CachedPtr;
      v46 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v45 )
        goto LABEL_80;
      v47 = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          (System_Collections_Generic_List_T__o *)Instance,
          9,
          *(const MethodInfo_376F38C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(Instance->fields.m_CancellationTokenSource) = v47 + 1;
        *(_DWORD *)(v45 + 4 * v47 + 32) = 9;
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
        v48 = Instance->fields.m_CachedPtr;
        v49 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( v48 )
        {
          v50 = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              8,
              *(const MethodInfo_376F38C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = v50 + 1;
            *(_DWORD *)(v48 + 4 * v50 + 32) = 8;
          }
          return;
        }
      }
    }
LABEL_80:
    sub_1C2D6EC(Instance, v4);
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
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  __int64 v9; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  int32_t v12; // w9
  __int64 v13; // x8
  int v14; // w10
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 uniqueId; // x10
  __int64 v18; // x8
  int32_t v19; // w1
  UnityEngine_Object_o *data; // x20
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C2A1A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A1A9 = 1;
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
      method = (const MethodInfo *)(((unsigned __int8)svtData & 1) != 0 ? 3LL : 4LL);
      if ( !statusList )
        goto LABEL_48;
      items = statusList->fields._items;
      v7 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++statusList->fields._version;
      if ( !items )
        goto LABEL_48;
      size = statusList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          statusList,
          (int32_t)method,
          *(const MethodInfo_376F38C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
    BattleServantData__isNobleAction_46043448(svtData, &invokeAct, 0);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v15 = *(_QWORD *)&svtData->fields.index;
      v16 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v15 )
        goto LABEL_48;
      uniqueId = svtData->fields.uniqueId;
      if ( (unsigned int)uniqueId < *(_DWORD *)(v15 + 24) )
      {
        v12 = uniqueId + 1;
        v13 = v15 + 4 * uniqueId;
        v14 = 7;
        goto LABEL_27;
      }
      v18 = v16[4];
      v19 = 7;
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
          v21 = *(_QWORD *)&svtData->fields.index;
          v22 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
          ++*(&svtData->fields.uniqueId + 1);
          if ( !v21 )
            goto LABEL_48;
          v23 = svtData->fields.uniqueId;
          if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)svtData,
              6,
              *(const MethodInfo_376F38C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            svtData->fields.uniqueId = v23 + 1;
            *(_DWORD *)(v21 + 4 * v23 + 32) = 6;
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
            v24 = *(_QWORD *)&svtData->fields.index;
            v25 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
            ++*(&svtData->fields.uniqueId + 1);
            if ( v24 )
            {
              v26 = svtData->fields.uniqueId;
              if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
              {
                System_Collections_Generic_List_Int32Enum___AddWithResize(
                  (System_Collections_Generic_List_T__o *)svtData,
                  10,
                  *(const MethodInfo_376F38C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                svtData->fields.uniqueId = v26 + 1;
                *(_DWORD *)(v24 + 4 * v26 + 32) = 10;
              }
              return;
            }
          }
        }
LABEL_48:
        sub_1C2D6EC(svtData, method);
      }
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v9 = *(_QWORD *)&svtData->fields.index;
      v10 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v9 )
        goto LABEL_48;
      v11 = svtData->fields.uniqueId;
      if ( (unsigned int)v11 < *(_DWORD *)(v9 + 24) )
      {
        v12 = v11 + 1;
        v13 = v9 + 4 * v11;
        v14 = 5;
LABEL_27:
        svtData->fields.uniqueId = v12;
        *(_DWORD *)(v13 + 32) = v14;
        goto LABEL_31;
      }
      v18 = v10[4];
      v19 = 5;
    }
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)svtData,
      v19,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v18 + 192) + 112LL));
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

  if ( (byte_4C2A1A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_1C2D490(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_1C2D490(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__);
    sub_1C2D490(&BattleCommandSealStatus___c_TypeInfo);
    byte_4C2A1A5 = 1;
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
    _9__6_0 = (System_Predicate_T__o *)sub_1C2D6DC(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(
      _9__6_0,
      v6,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      0);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v8, v9);
  }
  if ( !statusList )
    sub_1C2D6EC(v3, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__6_0,
           (const MethodInfo_376F998 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
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

  if ( (byte_4C2A1A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_1C2D490(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_1C2D490(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__);
    sub_1C2D490(&BattleCommandSealStatus___c_TypeInfo);
    byte_4C2A1A4 = 1;
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
    _9__4_0 = (System_Predicate_T__o *)sub_1C2D6DC(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(_9__4_0, v6, Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, 0);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9);
  }
  if ( !statusList )
    sub_1C2D6EC(v3, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__4_0,
           (const MethodInfo_376F998 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool BattleCommandSealStatus__get_IsTreasureDeviceError(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  return BattleCommandSealStatus__get_PrioredStatus(this, method) == 10;
}


int32_t BattleCommandSealStatus__get_PrioredStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_4C2A1A3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__);
    byte_4C2A1A3 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_1C2D6EC(0, method);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_Int32Enum_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_30FCE3C *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A1AA & 1) == 0 )
  {
    sub_1C2D490(&BattleCommandSealStatus___c_TypeInfo);
    byte_4C2A1AA = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleCommandSealStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCommandSealStatus___c_TypeInfo->static_fields->__9 = (struct BattleCommandSealStatus___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleCommandSealStatus___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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