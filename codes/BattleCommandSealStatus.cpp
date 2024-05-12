void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20

  if ( (byte_4387D76 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_4387D76 = 1;
  }
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v3;
  sub_B77560(&this->fields.statusList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_19075516(
        BattleCommandSealStatus_o *this,
        BattleCommandData_o *battleCommandData,
        BattleServantData_o *svtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v9; // x23
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4387D77 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
    byte_4387D77 = 1;
  }
  v9 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v9,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v9;
  sub_B77560(&this->fields.statusList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_B77560(&this->fields.battleCommandData);
  this->fields.svtData = svtData;
  sub_B77560(&this->fields.svtData);
  this->fields.data = data;
  sub_B77560(&this->fields.data);
  BattleCommandSealStatus__DetectCommonSealStatus(this, v10);
  BattleCommandSealStatus__DetectTreasureDeviceSealStatus(this, v11);
}


void __fastcall BattleCommandSealStatus__DetectCommonSealStatus(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v6; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x21
  DataManager_c *klass; // x8
  DataManager_o *v9; // x20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  struct BattleBuffData_BuffData_o *v21; // x23
  WarEntity_o *Entity; // x0
  BuffEntity_o *v23; // x24
  int32_t v24; // w25
  __int64 v25; // x1
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  char v35; // [xsp+4h] [xbp-5Ch]

  if ( (byte_4387D78 & 1) == 0 )
  {
    sub_B775C4(&BuffList_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387D78 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BuffMaster___);
      v6 = this->fields.svtData;
      if ( !v6 )
        goto LABEL_63;
      v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      Instance = (DataManager_o *)v6->fields.buffData;
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                    (BattleBuffData_o *)Instance,
                                    1,
                                    0LL);
      if ( !Instance )
        goto LABEL_63;
      klass = Instance->klass;
      v9 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v10 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          ++v10;
          p_offset += 4;
          if ( v10 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_13:
        v12 = sub_B0F4C0(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v14 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
      if ( !v14 )
        sub_B7769C(0LL, v13);
      v35 = 0;
      while ( 1 )
      {
        v27 = *(_QWORD *)v14;
        if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
        {
          v28 = 0LL;
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v28;
            v29 += 4;
            if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
              goto LABEL_41;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_41:
          v30 = sub_B0F4C0(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8)) & 1) == 0 )
          break;
        v15 = *(_QWORD *)v14;
        if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
        {
          v16 = 0LL;
          v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v17 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            ++v16;
            v17 += 4;
            if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
              goto LABEL_21;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_21:
          v18 = sub_B0F4C0(v14, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
        }
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8));
        v21 = (struct BattleBuffData_BuffData_o *)v19;
        if ( !v19 )
          sub_B7769C(0LL, v20);
        if ( !*(_BYTE *)(v19 + 385) )
        {
          if ( !v7 )
            sub_B7769C(v19, v20);
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v7,
                     *(_DWORD *)(v19 + 16),
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v23 = (BuffEntity_o *)Entity;
          if ( Entity )
          {
            v24 = *(&Entity->fields.id + 1);
            if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BuffList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            }
            if ( BuffList__CheckType(32, v24, 0LL) )
            {
              if ( BuffEntity__getDamageRelease(v23, 0LL) < 1 )
              {
                if ( BuffEntity__getDamageRelease(v23, 0LL) == -1 )
                {
                  statusList = this->fields.statusList;
                  if ( !statusList )
                    sub_B7769C(0LL, v25);
                  System_Collections_Generic_List_VoiceCondType_Type___Add(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
                    0,
                    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
                }
                else
                {
                  v35 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v21;
                sub_B77560(&this->fields);
              }
            }
          }
        }
      }
      v31 = *(_QWORD *)v14;
      if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
            goto LABEL_48;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_48:
        v34 = sub_B0F4C0(v14, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v14, *(_QWORD *)(v34 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          1,
          (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
      }
      if ( (v35 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          2,
          (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
          (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_63:
    sub_B7769C(Instance, v4);
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
  BattleServantData_o *svtData; // x0
  struct BattleCommandData_o *battleCommandData; // x8
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x20
  int32_t v6; // w1
  int32_t v7; // w1
  UnityEngine_Object_o *data; // x20
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4387D79 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4387D79 = 1;
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
        v6 = 3;
      else
        v6 = 4;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
        v6,
        (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    }
    invokeAct = 0;
    svtData = this->fields.svtData;
    if ( !svtData )
      goto LABEL_33;
    BattleServantData__isNobleAction_21001256(svtData, &invokeAct, 0LL);
    if ( invokeAct == 82 )
    {
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_33;
      v7 = 7;
    }
    else
    {
      if ( invokeAct != 41 )
        goto LABEL_21;
      svtData = (BattleServantData_o *)this->fields.statusList;
      if ( !svtData )
        goto LABEL_33;
      v7 = 5;
    }
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)svtData,
      v7,
      (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
        (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
          (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_33:
    sub_B7769C(svtData, method);
  }
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfDontAction(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v4; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__6_0; // x20
  Il2CppObject *v7; // x21
  struct BattleCommandSealStatus___c_StaticFields *v8; // x0

  if ( (byte_4387D75 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_B775C4(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    sub_B775C4(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_B775C4(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__);
    sub_B775C4(&BattleCommandSealStatus___c_TypeInfo);
    byte_4387D75 = 1;
  }
  statusList = this->fields.statusList;
  v4 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v4 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B77694(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__6_0,
      v7,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      (const MethodInfo_2C310C8 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v8 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v8->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_B77560(&v8->__9__6_0);
  }
  if ( !statusList )
    sub_B7769C(v4, method);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__6_0,
           (const MethodInfo_30E9614 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v4; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct BattleCommandSealStatus___c_StaticFields *v8; // x0

  if ( (byte_4387D74 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
    sub_B775C4(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    sub_B775C4(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    sub_B775C4(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__);
    sub_B775C4(&BattleCommandSealStatus___c_TypeInfo);
    byte_4387D74 = 1;
  }
  statusList = this->fields.statusList;
  v4 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v4 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B77694(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__4_0,
      v7,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      (const MethodInfo_2C310C8 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v8 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_B77560(&v8->__9__4_0);
  }
  if ( !statusList )
    sub_B7769C(v4, method);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__4_0,
           (const MethodInfo_30E9614 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
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
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0

  if ( (byte_4387D73 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__);
    byte_4387D73 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_B7769C(0LL, method);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_BattleCommandSealStatus_Status_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_1D34084 *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  sub_B77560(&this->fields);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438AB9B & 1) == 0 )
  {
    sub_B775C4(&BattleCommandSealStatus___c_TypeInfo);
    byte_438AB9B = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleCommandSealStatus___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleCommandSealStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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