void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_T__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18CE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v5, v6);
    byte_4B18CE4 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                 System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_44078548(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_T__o *v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1

  if ( (byte_4B18CE5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__,
      battleCommandData,
      svtData);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v9, v10);
    byte_4B18CE5 = 1;
  }
  v11 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                  battleCommandData,
                                                  svtData,
                                                  data);
  System_Collections_Generic_List_Int32Enum____ctor(
    v11,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleCommandData,
    (int64_t)battleCommandData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.svtData = svtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtData, (int64_t)svtData, v24, v25, v26, v27, v28, v29);
  this->fields.data = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, v30, v31, v32, v33, v34, v35);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v36);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v37);
}


void __fastcall BattleCommandSealStatus__DetectCommonSealStatus(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  BattleServantData_o *svtData; // x0
  __int64 v21; // x1
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  DataManager_c *klass; // x8
  DataManager_o *v26; // x20
  __int64 v27; // x9
  int *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x20
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  struct BattleBuffData_BuffData_o *v42; // x23
  __int64 v43; // x1
  BuffEntity_o *Entity; // x24
  int32_t type; // w25
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  System_Collections_Generic_List_T__o *statusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  char v73; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B18CE6 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B18CE6 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
      v23 = this->fields.svtData;
      if ( !v23 )
        goto LABEL_80;
      v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)v23->fields.buffData;
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                    (BattleBuffData_o *)Instance,
                                    1,
                                    0LL);
      if ( !Instance )
        goto LABEL_80;
      klass = Instance->klass;
      v26 = Instance;
      v27 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_13;
        }
        v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_13:
        v29 = sub_1C1C7C0(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v31 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      if ( !v31 )
        sub_1BCAA3C(0LL, v30);
      v73 = 0;
      while ( 1 )
      {
        v32 = *(_QWORD *)v31;
        v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_21;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_21:
          v35 = sub_1C1C7C0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
          break;
        v36 = *(_QWORD *)v31;
        v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
        {
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v38 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            --v37;
            v38 += 4;
            if ( !v37 )
              goto LABEL_28;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_28:
          v39 = sub_1C1C7C0(v31, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
        }
        v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
        v42 = (struct BattleBuffData_BuffData_o *)v40;
        if ( !v40 )
          sub_1BCAA3C(0LL, v41);
        if ( !*(_BYTE *)(v40 + 449) )
        {
          if ( !v24 )
            sub_1BCAA3C(v40, v41);
          Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     v24,
                                     *(_DWORD *)(v40 + 16),
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( Entity )
          {
            type = Entity->fields.type;
            if ( !BuffList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v43);
            if ( BuffList__CheckType(32, type, 0LL) )
            {
              if ( BuffEntity__getDamageRelease(Entity, 0LL) < 1 )
              {
                if ( BuffEntity__getDamageRelease(Entity, 0LL) == -1 )
                {
                  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
                  if ( !statusList )
                    sub_1BCAA3C(0LL, v52);
                  items = statusList->fields._items;
                  v55 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
                  ++statusList->fields._version;
                  if ( !items )
                    sub_1BCAA3C(statusList, v52);
                  size = statusList->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_Int32Enum___AddWithResize(
                      statusList,
                      0,
                      *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    statusList->fields._size = size + 1;
                    *((_DWORD *)items->m_Items + size) = 0;
                  }
                }
                else
                {
                  v73 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v42;
                sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v42, v46, v47, v48, v49, v50, v51);
              }
            }
          }
        }
      }
      v57 = *(_QWORD *)v31;
      v58 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_50;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_50:
        v60 = sub_1C1C7C0(v31, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v31, *(_QWORD *)(v60 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        v61 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v62 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v61 )
          goto LABEL_80;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v61 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            1,
            *(const MethodInfo_3587464 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v61 + 4 * m_CancellationTokenSource_low + 32) = 1;
        }
      }
      if ( (v73 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_80;
        v64 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v65 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v64 )
          goto LABEL_80;
        v66 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
        {
          System_Collections_Generic_List_Int32Enum___AddWithResize(
            (System_Collections_Generic_List_T__o *)Instance,
            2,
            *(const MethodInfo_3587464 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v66 + 1;
          *(_DWORD *)(v64 + 4 * v66 + 32) = 2;
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
      v67 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v68 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v67 )
        goto LABEL_80;
      v69 = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          (System_Collections_Generic_List_T__o *)Instance,
          9,
          *(const MethodInfo_3587464 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(Instance->fields.m_CancellationTokenSource) = v69 + 1;
        *(_DWORD *)(v67 + 4 * v69 + 32) = 9;
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
        v70 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v71 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( v70 )
        {
          v72 = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              8,
              *(const MethodInfo_3587464 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = v72 + 1;
            *(_DWORD *)(v70 + 4 * v72 + 32) = 8;
          }
          return;
        }
      }
    }
LABEL_80:
    sub_1BCAA3C(Instance, v21);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleServantData_o *svtData; // x0
  struct BattleCommandData_o *battleCommandData; // x8
  System_Collections_Generic_List_T__o *statusList; // x20
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  int32_t v15; // w9
  __int64 v16; // x8
  int v17; // w10
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 uniqueId; // x10
  __int64 v21; // x8
  int32_t v22; // w1
  UnityEngine_Object_o *data; // x20
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B18CE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18CE7 = 1;
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
      v10 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++statusList->fields._version;
      if ( !items )
        goto LABEL_48;
      size = statusList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          statusList,
          (int32_t)method,
          *(const MethodInfo_3587464 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
    BattleServantData__isNobleAction_43716220(svtData, &invokeAct, 0LL);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v18 = *(_QWORD *)&svtData->fields.index;
      v19 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v18 )
        goto LABEL_48;
      uniqueId = svtData->fields.uniqueId;
      if ( (unsigned int)uniqueId < *(_DWORD *)(v18 + 24) )
      {
        v15 = uniqueId + 1;
        v16 = v18 + 4 * uniqueId;
        v17 = 7;
        goto LABEL_27;
      }
      v21 = v19[4];
      v22 = 7;
    }
    else
    {
      if ( invokeAct != 41 )
      {
LABEL_31:
        data = (UnityEngine_Object_o *)this->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL)
          && !TreasureDeviceConditionUtil__HasEnoughCriticalStar(this->fields.svtData, this->fields.data, 0LL) )
        {
          svtData = (BattleServantData_o *)this->fields.statusList;
          if ( !svtData )
            goto LABEL_48;
          v24 = *(_QWORD *)&svtData->fields.index;
          v25 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
          ++*(&svtData->fields.uniqueId + 1);
          if ( !v24 )
            goto LABEL_48;
          v26 = svtData->fields.uniqueId;
          if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)svtData,
              6,
              *(const MethodInfo_3587464 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            svtData->fields.uniqueId = v26 + 1;
            *(_DWORD *)(v24 + 4 * v26 + 32) = 6;
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
            v27 = *(_QWORD *)&svtData->fields.index;
            v28 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
            ++*(&svtData->fields.uniqueId + 1);
            if ( v27 )
            {
              v29 = svtData->fields.uniqueId;
              if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
              {
                System_Collections_Generic_List_Int32Enum___AddWithResize(
                  (System_Collections_Generic_List_T__o *)svtData,
                  10,
                  *(const MethodInfo_3587464 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                svtData->fields.uniqueId = v29 + 1;
                *(_DWORD *)(v27 + 4 * v29 + 32) = 10;
              }
              return;
            }
          }
        }
LABEL_48:
        sub_1BCAA3C(svtData, method);
      }
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_48;
      v12 = *(_QWORD *)&svtData->fields.index;
      v13 = Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__;
      ++*(&svtData->fields.uniqueId + 1);
      if ( !v12 )
        goto LABEL_48;
      v14 = svtData->fields.uniqueId;
      if ( (unsigned int)v14 < *(_DWORD *)(v12 + 24) )
      {
        v15 = v14 + 1;
        v16 = v12 + 4 * v14;
        v17 = 5;
LABEL_27:
        svtData->fields.uniqueId = v15;
        *(_DWORD *)(v16 + 32) = v17;
        goto LABEL_31;
      }
      v21 = v13[4];
      v22 = 5;
    }
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)svtData,
      v22,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v21 + 192) + 112LL));
    goto LABEL_31;
  }
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfDontAction(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleCommandSealStatus___c_c *v11; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__6_0; // x20
  Il2CppObject *v14; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B18CE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method, v2);
    sub_1BCA7E0(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__, v7, v8);
    sub_1BCA7E0(&BattleCommandSealStatus___c_TypeInfo, v9, v10);
    byte_4B18CE3 = 1;
  }
  v11 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo, method);
    v11 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__6_0 = (System_Predicate_T__o *)v11->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleCommandSealStatus___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__6_0 = (System_Predicate_T__o *)sub_1BCAA2C(
                                         System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                         method,
                                         v2,
                                         v3);
    System_Predicate_Int32Enum____ctor(
      _9__6_0,
      v14,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      0LL);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !statusList )
    sub_1BCAA3C(v11, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__6_0,
           (const MethodInfo_3587A70 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleCommandSealStatus___c_c *v11; // x0
  System_Collections_Generic_List_T__o *statusList; // x19
  System_Predicate_T__o *_9__4_0; // x20
  Il2CppObject *v14; // x21
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B18CE2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method, v2);
    sub_1BCA7E0(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, v7, v8);
    sub_1BCA7E0(&BattleCommandSealStatus___c_TypeInfo, v9, v10);
    byte_4B18CE2 = 1;
  }
  v11 = BattleCommandSealStatus___c_TypeInfo;
  statusList = (System_Collections_Generic_List_T__o *)this->fields.statusList;
  if ( !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo, method);
    v11 = BattleCommandSealStatus___c_TypeInfo;
  }
  _9__4_0 = (System_Predicate_T__o *)v11->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleCommandSealStatus___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__4_0 = (System_Predicate_T__o *)sub_1BCAA2C(
                                         System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                         method,
                                         v2,
                                         v3);
    System_Predicate_Int32Enum____ctor(
      _9__4_0,
      v14,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      0LL);
    static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !statusList )
    sub_1BCAA3C(v11, method);
  return System_Collections_Generic_List_Int32Enum___Exists(
           statusList,
           _9__4_0,
           (const MethodInfo_3587A70 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_4B18CE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__, v4, v5);
    byte_4B18CE1 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_1BCAA3C(0LL, method);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_Int32Enum_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_2F3A204 *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18CE8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandSealStatus___c_TypeInfo, v1, v2);
    byte_4B18CE8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleCommandSealStatus___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleCommandSealStatus___c_TypeInfo->static_fields->__9 = (struct BattleCommandSealStatus___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleCommandSealStatus___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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