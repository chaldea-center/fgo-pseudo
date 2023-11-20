void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v7; // x20

  if ( (byte_40F69E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v6);
    byte_40F69E7 = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                  System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3,
                                                                  v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v7;
  sub_B16F98(&this->fields.statusList, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_18695180(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x23
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_40F69E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, battleCommandData);
    sub_B16FFC(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v9);
    byte_40F69E8 = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                                   battleCommandData,
                                                                   svtData,
                                                                   data,
                                                                   method);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v10;
  sub_B16F98(&this->fields.statusList, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_B16F98(&this->fields.battleCommandData, battleCommandData);
  this->fields.svtData = svtData;
  sub_B16F98(&this->fields.svtData, svtData);
  this->fields.data = data;
  sub_B16F98(&this->fields.data, data);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v11);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v12);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleServantData_o *v14; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v19; // x20
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x20
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  struct BattleBuffData_BuffData_o *v29; // x23
  WarEntity_o *Entity; // x0
  BuffEntity_o *v31; // x24
  int32_t v32; // w25
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *v42; // x0
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *v43; // x0
  BattleServantData_o *v44; // x0
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *v45; // x0
  char v46; // [xsp+4h] [xbp-5Ch]

  if ( (byte_40F69E9 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F69E9 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
      v14 = this->fields.svtData;
      if ( !v14 )
        goto LABEL_63;
      v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      buffData = v14->fields.buffData;
      if ( !buffData )
        goto LABEL_63;
      v17 = BattleBuffData__AllBuffValidEnumerablePriorActive(buffData, 1, 0LL);
      if ( !v17 )
        goto LABEL_63;
      klass = v17->klass;
      v19 = v17;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          ++v20;
          p_offset += 4;
          if ( v20 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_AAFEF8(v17, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
              v19,
              *(_QWORD *)(p_method + 8));
      if ( !v23 )
        sub_B170D4();
      v46 = 0;
      while ( 1 )
      {
        v34 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v35 = 0LL;
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v35;
            v36 += 4;
            if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_41;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_41:
          v37 = sub_AAFEF8(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v23, *(_QWORD *)(v37 + 8)) & 1) == 0 )
          break;
        v24 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v25 = 0LL;
          v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            ++v25;
            v26 += 4;
            if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_21;
          }
          v27 = v24 + 16LL * *v26 + 312;
        }
        else
        {
LABEL_21:
          v27 = sub_AAFEF8(v23, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
        }
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
        v29 = (struct BattleBuffData_BuffData_o *)v28;
        if ( !v28 )
          sub_B170D4();
        if ( !*(_BYTE *)(v28 + 370) )
        {
          if ( !v15 )
            sub_B170D4();
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v15,
                     *(_DWORD *)(v28 + 16),
                     (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v31 = (BuffEntity_o *)Entity;
          if ( Entity )
          {
            v32 = *(&Entity->fields.id + 1);
            if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BuffList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            }
            if ( BuffList__CheckType(32, v32, 0LL) )
            {
              if ( BuffEntity__getDamageRelease(v31, 0LL) < 1 )
              {
                if ( BuffEntity__getDamageRelease(v31, 0LL) == -1 )
                {
                  statusList = this->fields.statusList;
                  if ( !statusList )
                    sub_B170D4();
                  System_Collections_Generic_List_VoiceCondType_Type___Add(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
                    0,
                    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
                }
                else
                {
                  v46 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v29;
                sub_B16F98(&this->fields, v29);
              }
            }
          }
        }
      }
      v38 = *(_QWORD *)v23;
      if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
      {
        v39 = 0LL;
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
        {
          ++v39;
          v40 += 4;
          if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
            goto LABEL_48;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_48:
        v41 = sub_AAFEF8(v23, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v41)(v23, *(_QWORD *)(v41 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        v42 = this->fields.statusList;
        if ( !v42 )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)v42,
          1,
          (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
      }
      if ( (v46 & 1) != 0 )
      {
        v43 = this->fields.statusList;
        if ( !v43 )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)v43,
          2,
          (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
      }
    }
    v44 = this->fields.svtData;
    if ( v44 )
    {
      if ( BattleServantData__isCardTypeAction(v44, this->fields.battleCommandData, 0LL) )
        return;
      v45 = this->fields.statusList;
      if ( v45 )
      {
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)v45,
          8,
          (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_63:
    sub_B170D4();
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
  BattleServantData_o *v6; // x0
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x20
  bool isHeroine; // w0
  int32_t v9; // w1
  BattleServantData_o *v10; // x0
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *v11; // x0
  int32_t v12; // w1
  UnityEngine_Object_o *data; // x20
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *v14; // x0
  BattleServantData_o *v15; // x0
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *v16; // x0
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F69EA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F69EA = 1;
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
      v6 = this->fields.svtData;
      if ( !v6 )
        goto LABEL_33;
      statusList = this->fields.statusList;
      isHeroine = BattleServantData__isHeroine(v6, 0LL);
      if ( !statusList )
        goto LABEL_33;
      if ( isHeroine )
        v9 = 3;
      else
        v9 = 4;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
        v9,
        (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    }
    invokeAct = 0;
    v10 = this->fields.svtData;
    if ( !v10 )
      goto LABEL_33;
    BattleServantData__isNobleAction_22765460(v10, &invokeAct, 0LL);
    if ( invokeAct == 82 )
    {
      v11 = this->fields.statusList;
      if ( !v11 )
        goto LABEL_33;
      v12 = 7;
    }
    else
    {
      if ( invokeAct != 41 )
        goto LABEL_21;
      v11 = this->fields.statusList;
      if ( !v11 )
        goto LABEL_33;
      v12 = 5;
    }
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)v11,
      v12,
      (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
      v14 = this->fields.statusList;
      if ( !v14 )
        goto LABEL_33;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        (System_Collections_Generic_List_VoiceCondType_Type__o *)v14,
        6,
        (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    }
    v15 = this->fields.svtData;
    if ( v15 )
    {
      if ( !BattleServantData__get_isTreasureDeveiceError(v15, 0LL) )
        return;
      v16 = this->fields.statusList;
      if ( v16 )
      {
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)v16,
          9,
          (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_33:
    sub_B170D4();
  }
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfDontAction(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v11; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__6_0; // x20
  Il2CppObject *v14; // x21
  struct BattleCommandSealStatus___c_StaticFields *v15; // x0

  if ( (byte_40F69E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v6);
    sub_B16FFC(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v7);
    sub_B16FFC(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__, v8);
    sub_B16FFC(&BattleCommandSealStatus___c_TypeInfo, v9);
    byte_40F69E6 = 1;
  }
  statusList = this->fields.statusList;
  v11 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v11 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B170CC(
                                                                    System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__6_0,
      v14,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      (const MethodInfo_2B09E40 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v15 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v15->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_B16F98(&v15->__9__6_0, _9__6_0);
  }
  if ( !statusList )
    sub_B170D4();
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__6_0,
           (const MethodInfo_2F13D1C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v11; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__4_0; // x20
  Il2CppObject *v14; // x21
  struct BattleCommandSealStatus___c_StaticFields *v15; // x0

  if ( (byte_40F69E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_B16FFC(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v6);
    sub_B16FFC(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v7);
    sub_B16FFC(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, v8);
    sub_B16FFC(&BattleCommandSealStatus___c_TypeInfo, v9);
    byte_40F69E5 = 1;
  }
  statusList = this->fields.statusList;
  v11 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v11 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B170CC(
                                                                    System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__4_0,
      v14,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      (const MethodInfo_2B09E40 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v15 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v15->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_B16F98(&v15->__9__4_0, _9__4_0);
  }
  if ( !statusList )
    sub_B170D4();
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__4_0,
           (const MethodInfo_2F13D1C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
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

  if ( (byte_40F69E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__, v3);
    byte_40F69E4 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_B170D4();
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_BattleCommandSealStatus_Status_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_19BCE3C *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  sub_B16F98(&this->fields, value);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x0

  if ( (byte_40F84F0 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandSealStatus___c_TypeInfo, v1);
    byte_40F84F0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleCommandSealStatus___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleCommandSealStatus___c_o *)v5;
  sub_B16F98(static_fields, v5);
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