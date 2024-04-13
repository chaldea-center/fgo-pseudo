void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v8; // x20

  if ( (byte_42E53E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v5, v6, v7);
    byte_42E53E7 = 1;
  }
  v8 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v8,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v8;
  sub_B5D560(&this->fields.statusList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_18884632(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x23
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_42E53E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__,
      (_DWORD)battleCommandData,
      (_DWORD)svtData,
      data);
    sub_B5D5C4(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v9, v10, v11);
    byte_42E53E8 = 1;
  }
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v12;
  sub_B5D560(&this->fields.statusList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_B5D560(&this->fields.battleCommandData);
  this->fields.svtData = svtData;
  sub_B5D560(&this->fields.svtData);
  this->fields.data = data;
  sub_B5D560(&this->fields.data);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v13);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v14);
}


void __fastcall BattleCommandSealStatus__DetectCommonSealStatus(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
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
  BattleServantData_o *svtData; // x0
  __int64 v30; // x1
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v32; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x21
  __int64 v34; // x3
  DataManager_c *klass; // x8
  DataManager_o *v36; // x20
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x3
  __int64 v42; // x20
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  struct BattleBuffData_BuffData_o *v49; // x23
  WarEntity_o *Entity; // x0
  BuffEntity_o *v51; // x24
  int32_t v52; // w25
  __int64 v53; // x1
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  char v64; // [xsp+4h] [xbp-5Ch]

  if ( (byte_42E53E9 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E53E9 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
      v32 = this->fields.svtData;
      if ( !v32 )
        goto LABEL_63;
      v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      Instance = (DataManager_o *)v32->fields.buffData;
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                    (BattleBuffData_o *)Instance,
                                    1,
                                    0LL);
      if ( !Instance )
        goto LABEL_63;
      klass = Instance->klass;
      v36 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v37 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          ++v37;
          p_offset += 4;
          if ( v37 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_13:
        v39 = sub_AF54C0(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v34);
      }
      v42 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
      if ( !v42 )
        sub_B5D69C(0LL, v40);
      v64 = 0;
      while ( 1 )
      {
        v55 = *(_QWORD *)v42;
        if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
        {
          v56 = 0LL;
          v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v56;
            v57 += 4;
            if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
              goto LABEL_41;
          }
          v58 = v55 + 16LL * *v57 + 312;
        }
        else
        {
LABEL_41:
          v58 = sub_AF54C0(v42, System_Collections_IEnumerator_TypeInfo, 0LL, v41);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v42, *(_QWORD *)(v58 + 8)) & 1) == 0 )
          break;
        v43 = *(_QWORD *)v42;
        if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
        {
          v44 = 0LL;
          v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v45 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            ++v44;
            v45 += 4;
            if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
              goto LABEL_21;
          }
          v46 = v43 + 16LL * *v45 + 312;
        }
        else
        {
LABEL_21:
          v46 = sub_AF54C0(v42, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v59);
        }
        v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
        v49 = (struct BattleBuffData_BuffData_o *)v47;
        if ( !v47 )
          sub_B5D69C(0LL, v48);
        if ( !*(_BYTE *)(v47 + 371) )
        {
          if ( !v33 )
            sub_B5D69C(v47, v48);
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v33,
                     *(_DWORD *)(v47 + 16),
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v51 = (BuffEntity_o *)Entity;
          if ( Entity )
          {
            v52 = *(&Entity->fields.id + 1);
            if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BuffList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            }
            if ( BuffList__CheckType(32, v52, 0LL) )
            {
              if ( BuffEntity__getDamageRelease(v51, 0LL) < 1 )
              {
                if ( BuffEntity__getDamageRelease(v51, 0LL) == -1 )
                {
                  statusList = this->fields.statusList;
                  if ( !statusList )
                    sub_B5D69C(0LL, v53);
                  System_Collections_Generic_List_VoiceCondType_Type___Add(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
                    0,
                    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
                }
                else
                {
                  v64 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v49;
                sub_B5D560(&this->fields);
              }
            }
          }
        }
      }
      v60 = *(_QWORD *)v42;
      if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
      {
        v61 = 0LL;
        v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
        {
          ++v61;
          v62 += 4;
          if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
            goto LABEL_48;
        }
        v63 = v60 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_48:
        v63 = sub_AF54C0(v42, System_IDisposable_TypeInfo, 0LL, v59);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v63)(v42, *(_QWORD *)(v63 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          1,
          (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
      }
      if ( (v64 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          2,
          (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          8,
          (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_63:
    sub_B5D69C(Instance, v30);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantData_o *svtData; // x0
  struct BattleCommandData_o *battleCommandData; // x8
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x20
  int32_t v11; // w1
  int32_t v12; // w1
  UnityEngine_Object_o *data; // x20
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E53EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E53EA = 1;
  }
  invokeAct = 0;
  svtData = this->fields.svtData;
  if ( svtData )
  {
    battleCommandData = this->fields.battleCommandData;
    if ( !battleCommandData )
      goto LABEL_33;
    if ( battleCommandData->fields.treasureDvc < 1 )
      return;
    if ( BattleServantData__isTDSeraled(svtData, 0LL) )
    {
      svtData = this->fields.svtData;
      if ( !svtData )
        goto LABEL_33;
      statusList = this->fields.statusList;
      svtData = (BattleServantData_o *)BattleServantData__isHeroine(svtData, 0LL);
      if ( !statusList )
        goto LABEL_33;
      if ( ((unsigned __int8)svtData & 1) != 0 )
        v11 = 3;
      else
        v11 = 4;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
        v11,
        (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    }
    invokeAct = 0;
    svtData = this->fields.svtData;
    if ( !svtData )
      goto LABEL_33;
    BattleServantData__isNobleAction_21192512(svtData, &invokeAct, 0LL);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_33;
      v12 = 7;
    }
    else
    {
      if ( invokeAct != 41 )
        goto LABEL_21;
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_33;
      v12 = 5;
    }
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)svtData,
      v12,
      (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
LABEL_21:
    data = (UnityEngine_Object_o *)this->fields.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL)
      && !TreasureDeviceConditionUtil__HasEnoughCriticalStar(this->fields.svtData, this->fields.data, 0LL) )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_33;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        (System_Collections_Generic_List_VoiceCondType_Type__o *)svtData,
        6,
        (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    }
    svtData = this->fields.svtData;
    if ( svtData )
    {
      if ( !BattleServantData__get_isTreasureDeveiceError(svtData, 0LL) )
        return;
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( svtData )
      {
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)svtData,
          9,
          (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_33:
    sub_B5D69C(svtData, method);
  }
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfDontAction(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v18; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__6_0; // x20
  Il2CppObject *v21; // x21
  struct BattleCommandSealStatus___c_StaticFields *v22; // x0

  if ( (byte_42E53E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__, v11, v12, v13);
    sub_B5D5C4(&BattleCommandSealStatus___c_TypeInfo, v14, v15, v16);
    byte_42E53E6 = 1;
  }
  statusList = this->fields.statusList;
  v18 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v18 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B5D694(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__6_0,
      v21,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      (const MethodInfo_2B91E48 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v22 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v22->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_B5D560(&v22->__9__6_0);
  }
  if ( !statusList )
    sub_B5D69C(v18, method);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__6_0,
           (const MethodInfo_3045004 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v18; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__4_0; // x20
  Il2CppObject *v21; // x21
  struct BattleCommandSealStatus___c_StaticFields *v22; // x0

  if ( (byte_42E53E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, v11, v12, v13);
    sub_B5D5C4(&BattleCommandSealStatus___c_TypeInfo, v14, v15, v16);
    byte_42E53E5 = 1;
  }
  statusList = this->fields.statusList;
  v18 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v18 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B5D694(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__4_0,
      v21,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      (const MethodInfo_2B91E48 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v22 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v22->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_B5D560(&v22->__9__4_0);
  }
  if ( !statusList )
    sub_B5D69C(v18, method);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__4_0,
           (const MethodInfo_3045004 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_42E53E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__, v5, v6, v7);
    byte_42E53E4 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_B5D69C(0LL, method);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_BattleCommandSealStatus_Status_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_1CAE8F0 *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  this->fields._SleepBuff_k__BackingField = value;
  sub_B5D560(&this->fields);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C0A & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandSealStatus___c_TypeInfo, v1, v2, v3);
    byte_42E7C0A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleCommandSealStatus___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleCommandSealStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  return (unsigned int)(x - 1) < 2 || (x | 8) == 8;
}


bool __fastcall BattleCommandSealStatus___c___get_HasKindOfSealed_b__4_0(
        BattleCommandSealStatus___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return (unsigned int)(x - 3) < 3 || (x | 1) == 7;
}