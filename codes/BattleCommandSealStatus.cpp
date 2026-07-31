void BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B678 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_593B678 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.statusList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCommandSealStatus___ctor_53553804(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1

  if ( (byte_593B679 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_593B679 = 1;
  }
  v9 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.statusList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.battleCommandData = battleCommandData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleCommandData,
    (int32_t)battleCommandData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.svtData = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.svtData, (int32_t)svtData, v22, v23, v24, v25, v26, v27);
  this->fields.data = data;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)data, v28, v29, v30, v31, v32, v33);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v34);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v35);
}


void BattleCommandSealStatus__DetectCommonSealStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  DataManager_c *klass; // x8
  DataManager_o *v9; // x21
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  char v16; // w25
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  struct BattleBuffData_BuffData_o *v28; // x21
  Il2CppObject *Entity; // x0
  __int64 v30; // x1
  BuffEntity_o *v31; // x22
  int32_t klass_high; // w23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  System_Collections_Generic_List_T__o *statusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v49; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  intptr_t v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  intptr_t v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  intptr_t v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  char v63; // [xsp+4h] [xbp-7Ch]
  __int64 v64; // [xsp+18h] [xbp-68h]

  if ( (byte_593B67A & 1) == 0 )
  {
    sub_21FFC50(&BuffList_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_21FFC50(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593B67A = 1;
  }
  svtData = this->fields.svtData;
  if ( !svtData )
    return;
  if ( BattleServantData__isAction(svtData, 0) )
    goto LABEL_77;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BuffMaster___);
  v6 = this->fields.svtData;
  if ( !v6 )
    goto LABEL_94;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)v6->fields.buffData;
  if ( !Instance )
    goto LABEL_94;
  Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive((BattleBuffData_o *)Instance, 1, 1, 0);
  if ( !Instance )
    goto LABEL_94;
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
    v12 = sub_2237E2C(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  v64 = v13;
  if ( !v13 )
    sub_21FFECC(0, v14);
  v15 = v13;
  v16 = 0;
  v63 = 0;
  while ( 1 )
  {
    v17 = *(_QWORD *)v15;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_21:
      v20 = sub_2237E2C(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v15, *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v64 )
      sub_21FFECC(v21, v4);
    v22 = *(_QWORD *)v64;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_29;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_29:
      v25 = sub_2237E2C(v64, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v64, *(_QWORD *)(v25 + 8));
    v28 = (struct BattleBuffData_BuffData_o *)v26;
    if ( !v26 )
      sub_21FFECC(0, v27);
    if ( *(_BYTE *)(v26 + 560) )
      goto LABEL_33;
    if ( !v7 )
      sub_21FFECC(v26, v27);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               *(_DWORD *)(v26 + 16),
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v31 = (BuffEntity_o *)Entity;
    if ( !Entity )
      goto LABEL_33;
    klass_high = HIDWORD(Entity[1].klass);
    if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v30);
    if ( BuffList__CheckType(32, klass_high, 0) )
    {
      if ( BattleBuffData_BuffData__checkState(v28, 0x20000000, 0) )
      {
        v15 = v64;
        v16 = 1;
      }
      else
      {
        if ( BuffEntity__getDamageRelease(v31, 0) >= 1 )
        {
          this->fields._SleepBuff_k__BackingField = v28;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v28, v33, v34, v35, v36, v37, v38);
          goto LABEL_33;
        }
        if ( BuffEntity__getDamageRelease(v31, 0) == -1 )
        {
          statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
          if ( !statusList
            || (items = statusList->fields._items,
                v42 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__,
                ++statusList->fields._version,
                !items) )
          {
            sub_21FFECC(statusList, v39);
          }
          size = statusList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              statusList,
              0,
              *(const MethodInfo_4435950 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            statusList->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = 0;
          }
          goto LABEL_33;
        }
        v15 = v64;
        v63 = 1;
      }
    }
    else
    {
LABEL_33:
      v15 = v64;
    }
  }
  if ( v64 )
  {
    v44 = *(_QWORD *)v64;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_55;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_55:
      v47 = sub_2237E2C(v64, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v64, *(_QWORD *)(v47 + 8));
  }
  if ( this->fields._SleepBuff_k__BackingField )
  {
    Instance = (DataManager_o *)this->fields.statusList;
    if ( !Instance )
      goto LABEL_94;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    v49 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_94;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low < *(_DWORD *)(m_CachedPtr + 24) )
    {
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 1;
      goto LABEL_63;
    }
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)Instance,
      1,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    if ( (v16 & 1) != 0 )
    {
LABEL_66:
      Instance = (DataManager_o *)this->fields.statusList;
      if ( Instance )
      {
        v51 = Instance->fields.m_CachedPtr;
        v52 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( v51 )
        {
          v53 = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              2,
              *(const MethodInfo_4435950 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = v53 + 1;
            *(_DWORD *)(v51 + 4 * v53 + 32) = 2;
          }
          goto LABEL_71;
        }
      }
LABEL_94:
      sub_21FFECC(Instance, v4);
    }
  }
  else
  {
LABEL_63:
    if ( (v16 & 1) != 0 )
      goto LABEL_66;
  }
LABEL_71:
  if ( (v63 & 1) != 0 )
  {
    Instance = (DataManager_o *)this->fields.statusList;
    if ( !Instance )
      goto LABEL_94;
    v54 = Instance->fields.m_CachedPtr;
    v55 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v54 )
      goto LABEL_94;
    v56 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        (System_Collections_Generic_List_T__o *)Instance,
        3,
        *(const MethodInfo_4435950 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(Instance->fields.m_CancellationTokenSource) = v56 + 1;
      *(_DWORD *)(v54 + 4 * v56 + 32) = 3;
    }
  }
LABEL_77:
  Instance = (DataManager_o *)this->fields.svtData;
  if ( !Instance )
    goto LABEL_94;
  if ( !BattleServantData__isCardTypeAction((BattleServantData_o *)Instance, this->fields.battleCommandData, 0) )
  {
    Instance = (DataManager_o *)this->fields.statusList;
    if ( !Instance )
      goto LABEL_94;
    v57 = Instance->fields.m_CachedPtr;
    v58 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v57 )
      goto LABEL_94;
    v59 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        (System_Collections_Generic_List_T__o *)Instance,
        10,
        *(const MethodInfo_4435950 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(Instance->fields.m_CancellationTokenSource) = v59 + 1;
      *(_DWORD *)(v57 + 4 * v59 + 32) = 10;
    }
  }
  Instance = (DataManager_o *)this->fields.svtData;
  if ( !Instance )
    goto LABEL_94;
  if ( !BattleServantData__IsAvailableCard((BattleServantData_o *)Instance, this->fields.battleCommandData, 0) )
  {
    Instance = (DataManager_o *)this->fields.statusList;
    if ( !Instance )
      goto LABEL_94;
    v60 = Instance->fields.m_CachedPtr;
    v61 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v60 )
      goto LABEL_94;
    v62 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        (System_Collections_Generic_List_T__o *)Instance,
        9,
        *(const MethodInfo_4435950 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(Instance->fields.m_CancellationTokenSource) = v62 + 1;
      *(_DWORD *)(v60 + 4 * v62 + 32) = 9;
    }
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
  __int64 v12; // x8
  int v13; // w9
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 uniqueId; // x10
  __int64 v17; // x8
  int32_t v18; // w1
  UnityEngine_Object_o *data; // x20
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_593B67B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B67B = 1;
  }
  svtData = this->fields.svtData;
  invokeAct = 0;
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
      method = (const MethodInfo *)(((unsigned __int8)svtData & 1) != 0 ? 4LL : 5LL);
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
          *(const MethodInfo_4435950 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
      }
      else
      {
        statusList->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = (_DWORD)method;
      }
    }
    svtData = this->fields.svtData;
    invokeAct = 0;
    if ( !svtData )
      goto LABEL_48;
    BattleServantData__isNobleAction_53365060(svtData, &invokeAct, 0);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v14 = *(_QWORD *)&svtData->fields.index;
      v15 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v14 )
        goto LABEL_48;
      uniqueId = svtData->fields.uniqueId;
      if ( (unsigned int)uniqueId < *(_DWORD *)(v14 + 24) )
      {
        v12 = v14 + 4 * uniqueId;
        svtData->fields.uniqueId = uniqueId + 1;
        v13 = 8;
        goto LABEL_27;
      }
      v17 = v15[4];
      v18 = 8;
    }
    else
    {
      if ( invokeAct != 41 )
      {
LABEL_31:
        data = (UnityEngine_Object_o *)this->fields.data;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(data, 0, 0)
          && !TreasureDeviceConditionUtil__HasEnoughCriticalStar(this->fields.svtData, this->fields.data, 0) )
        {
          svtData = (BattleServantData_o *)this->fields.statusList;
          if ( !svtData )
            goto LABEL_48;
          v20 = *(_QWORD *)&svtData->fields.index;
          v21 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
          ++*(&svtData->fields.uniqueId + 1);
          if ( !v20 )
            goto LABEL_48;
          v22 = svtData->fields.uniqueId;
          if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)svtData,
              7,
              *(const MethodInfo_4435950 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            svtData->fields.uniqueId = v22 + 1;
            *(_DWORD *)(v20 + 4 * v22 + 32) = 7;
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
            v23 = *(_QWORD *)&svtData->fields.index;
            v24 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
            ++*(&svtData->fields.uniqueId + 1);
            if ( v23 )
            {
              v25 = svtData->fields.uniqueId;
              if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
              {
                System_Collections_Generic_List_Int32Enum___AddWithResize(
                  (System_Collections_Generic_List_T__o *)svtData,
                  11,
                  *(const MethodInfo_4435950 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                svtData->fields.uniqueId = v25 + 1;
                *(_DWORD *)(v23 + 4 * v25 + 32) = 11;
              }
              return;
            }
          }
        }
LABEL_48:
        sub_21FFECC(svtData, method);
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
        v12 = v9 + 4 * v11;
        svtData->fields.uniqueId = v11 + 1;
        v13 = 6;
LABEL_27:
        *(_DWORD *)(v12 + 32) = v13;
        goto LABEL_31;
      }
      v17 = v10[4];
      v18 = 6;
    }
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)svtData,
      v18,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v17 + 192) + 112LL));
    goto LABEL_31;
  }
}


bool BattleCommandSealStatus__get_HasKindOfDontAction(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus___c_c *v3; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__6_0; // x20
  Il2CppObject *v7; // x21
  struct BattleCommandSealStatus___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B677 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_21FFC50(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_21FFC50(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__);
    sub_21FFC50(&BattleCommandSealStatus___c_TypeInfo);
    byte_593B677 = 1;
  }
  v3 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !*(&BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo, method);
    v3 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__6_0 = (System_Predicate_T__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Predicate_T__o *)sub_21FFEBC(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(
      _9__6_0,
      v7,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      0);
    v8 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v8->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__6_0, (int32_t)_9__6_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !statusList )
    sub_21FFECC(v3, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__6_0,
           (const MethodInfo_4435F64 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus___c_c *v3; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_T__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct BattleCommandSealStatus___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B676 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_21FFC50(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_21FFC50(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__);
    sub_21FFC50(&BattleCommandSealStatus___c_TypeInfo);
    byte_593B676 = 1;
  }
  v3 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !*(&BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo, method);
    v3 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__4_0 = (System_Predicate_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_T__o *)sub_21FFEBC(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_Int32Enum____ctor(_9__4_0, v7, Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, 0);
    v8 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__4_0, (int32_t)_9__4_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !statusList )
    sub_21FFECC(v3, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__4_0,
           (const MethodInfo_4435F64 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool BattleCommandSealStatus__get_IsTreasureDeviceError(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  return BattleCommandSealStatus__get_PrioredStatus(this, method) == 11;
}


int32_t BattleCommandSealStatus__get_PrioredStatus(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_593B675 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__);
    byte_593B675 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_21FFECC(0, method);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_Int32Enum_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_38542BC *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SleepBuff_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B67C & 1) == 0 )
  {
    sub_21FFC50(&BattleCommandSealStatus___c_TypeInfo);
    byte_593B67C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleCommandSealStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCommandSealStatus___c_TypeInfo->static_fields->__9 = (struct BattleCommandSealStatus___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleCommandSealStatus___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  return ((unsigned int)x < 0xB) & (0x60Fu >> x);
}


bool BattleCommandSealStatus___c___get_HasKindOfSealed_b__4_0(
        BattleCommandSealStatus___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return (unsigned int)(x - 4) < 5;
}