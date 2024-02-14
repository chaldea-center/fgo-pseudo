void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v5; // x20

  if ( (byte_42114B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v4);
    byte_42114B4 = 1;
  }
  v5 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                  System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v5,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v5;
  sub_B0D840(&this->fields.statusList, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_18476908(
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

  if ( (byte_42114B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, battleCommandData);
    sub_B0D8A4(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v9);
    byte_42114B5 = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo,
                                                                   battleCommandData,
                                                                   svtData);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v10;
  sub_B0D840(&this->fields.statusList, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_B0D840(&this->fields.battleCommandData, battleCommandData);
  this->fields.svtData = svtData;
  sub_B0D840(&this->fields.svtData, svtData);
  this->fields.data = data;
  sub_B0D840(&this->fields.data, data);
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
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v13; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  DataManager_c *klass; // x8
  DataManager_o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x20
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  struct BattleBuffData_BuffData_o *v26; // x23
  WarEntity_o *Entity; // x0
  BuffEntity_o *v28; // x24
  int32_t v29; // w25
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  char v39; // [xsp+4h] [xbp-5Ch]

  if ( (byte_42114B6 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_42114B6 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
      v13 = this->fields.svtData;
      if ( !v13 )
        goto LABEL_63;
      v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      Instance = (DataManager_o *)v13->fields.buffData;
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                    (BattleBuffData_o *)Instance,
                                    1,
                                    0LL);
      if ( !Instance )
        goto LABEL_63;
      klass = Instance->klass;
      v16 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          ++v17;
          p_offset += 4;
          if ( v17 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_13:
        v19 = sub_AA67A0(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v20 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
      if ( !v20 )
        sub_B0D97C(0LL);
      v39 = 0;
      while ( 1 )
      {
        v31 = *(_QWORD *)v20;
        if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
        {
          v32 = 0LL;
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v32;
            v33 += 4;
            if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
              goto LABEL_41;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_41:
          v34 = sub_AA67A0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v20, *(_QWORD *)(v34 + 8)) & 1) == 0 )
          break;
        v21 = *(_QWORD *)v20;
        if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
        {
          v22 = 0LL;
          v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            ++v22;
            v23 += 4;
            if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
              goto LABEL_21;
          }
          v24 = v21 + 16LL * *v23 + 312;
        }
        else
        {
LABEL_21:
          v24 = sub_AA67A0(v20, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
        }
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
        v26 = (struct BattleBuffData_BuffData_o *)v25;
        if ( !v25 )
          sub_B0D97C(0LL);
        if ( !*(_BYTE *)(v25 + 370) )
        {
          if ( !v14 )
            sub_B0D97C(v25);
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v14,
                     *(_DWORD *)(v25 + 16),
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v28 = (BuffEntity_o *)Entity;
          if ( Entity )
          {
            v29 = *(&Entity->fields.id + 1);
            if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BuffList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            }
            if ( BuffList__CheckType(32, v29, 0LL) )
            {
              if ( BuffEntity__getDamageRelease(v28, 0LL) < 1 )
              {
                if ( BuffEntity__getDamageRelease(v28, 0LL) == -1 )
                {
                  statusList = this->fields.statusList;
                  if ( !statusList )
                    sub_B0D97C(0LL);
                  System_Collections_Generic_List_VoiceCondType_Type___Add(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
                    0,
                    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
                }
                else
                {
                  v39 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v26;
                sub_B0D840(&this->fields, v26);
              }
            }
          }
        }
      }
      v35 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v36 = 0LL;
        v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          ++v36;
          v37 += 4;
          if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_48;
        }
        v38 = v35 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_48:
        v38 = sub_AA67A0(v20, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v38)(v20, *(_QWORD *)(v38 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          1,
          (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
      }
      if ( (v39 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          2,
          (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
          (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_63:
    sub_B0D97C(Instance);
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
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x20
  int32_t v7; // w1
  int32_t v8; // w1
  UnityEngine_Object_o *data; // x20
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42114B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42114B7 = 1;
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
        v7 = 3;
      else
        v7 = 4;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
        v7,
        (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    }
    invokeAct = 0;
    svtData = this->fields.svtData;
    if ( !svtData )
      goto LABEL_33;
    BattleServantData__isNobleAction_20788748(svtData, &invokeAct, 0LL);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_33;
      v8 = 7;
    }
    else
    {
      if ( invokeAct != 41 )
        goto LABEL_21;
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_33;
      v8 = 5;
    }
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)svtData,
      v8,
      (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
        (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
          (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_33:
    sub_B0D97C(svtData);
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
  __int64 v7; // x1
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v9; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__6_0; // x20
  Il2CppObject *v12; // x21
  struct BattleCommandSealStatus___c_StaticFields *v13; // x0

  if ( (byte_42114B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_B0D8A4(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v4);
    sub_B0D8A4(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__, v6);
    sub_B0D8A4(&BattleCommandSealStatus___c_TypeInfo, v7);
    byte_42114B3 = 1;
  }
  statusList = this->fields.statusList;
  v9 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v9 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B0D974(
                                                                    System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                                                    method,
                                                                    v2);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__6_0,
      v12,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      (const MethodInfo_2AF6A6C *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v13 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v13->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_B0D840(&v13->__9__6_0, _9__6_0);
  }
  if ( !statusList )
    sub_B0D97C(v9);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__6_0,
           (const MethodInfo_2FB372C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v9; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__4_0; // x20
  Il2CppObject *v12; // x21
  struct BattleCommandSealStatus___c_StaticFields *v13; // x0

  if ( (byte_42114B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_B0D8A4(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v4);
    sub_B0D8A4(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v5);
    sub_B0D8A4(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, v6);
    sub_B0D8A4(&BattleCommandSealStatus___c_TypeInfo, v7);
    byte_42114B2 = 1;
  }
  statusList = this->fields.statusList;
  v9 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v9 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B0D974(
                                                                    System_Predicate_BattleCommandSealStatus_Status__TypeInfo,
                                                                    method,
                                                                    v2);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__4_0,
      v12,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      (const MethodInfo_2AF6A6C *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v13 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v13->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_B0D840(&v13->__9__4_0, _9__4_0);
  }
  if ( !statusList )
    sub_B0D97C(v9);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__4_0,
           (const MethodInfo_2FB372C *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
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

  if ( (byte_42114B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__, v3);
    byte_42114B1 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_B0D97C(0LL);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_BattleCommandSealStatus_Status_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_1B4E00C *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  sub_B0D840(&this->fields, value);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138DF & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandSealStatus___c_TypeInfo, v1);
    byte_42138DF = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleCommandSealStatus___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleCommandSealStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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