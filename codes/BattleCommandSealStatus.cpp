void __fastcall BattleCommandSealStatus___ctor(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v4; // x20

  if ( (byte_41842C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v3);
    byte_41842C7 = 1;
  }
  v4 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v4,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v4;
  sub_B2C2F8(&this->fields.statusList, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandSealStatus___ctor_18367064(
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

  if ( (byte_41842C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__, battleCommandData);
    sub_B2C35C(&System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo, v9);
    byte_41842C8 = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_BattleCommandSealStatus_Status__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status___ctor__);
  this->fields.statusList = (struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *)v10;
  sub_B2C2F8(&this->fields.statusList, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleCommandData = battleCommandData;
  sub_B2C2F8(&this->fields.battleCommandData, battleCommandData);
  this->fields.svtData = svtData;
  sub_B2C2F8(&this->fields.svtData, svtData);
  this->fields.data = data;
  sub_B2C2F8(&this->fields.data, data);
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
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  struct BattleServantData_o *v14; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  __int64 v16; // x3
  DataManager_c *klass; // x8
  DataManager_o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  struct BattleBuffData_BuffData_o *v31; // x23
  WarEntity_o *Entity; // x0
  BuffEntity_o *v33; // x24
  int32_t v34; // w25
  __int64 v35; // x1
  struct System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x3
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  char v46; // [xsp+4h] [xbp-5Ch]

  if ( (byte_41842C9 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_41842C9 = 1;
  }
  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( !BattleServantData__isAction(svtData, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
      v14 = this->fields.svtData;
      if ( !v14 )
        goto LABEL_63;
      v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      Instance = (DataManager_o *)v14->fields.buffData;
      if ( !Instance )
        goto LABEL_63;
      Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(
                                    (BattleBuffData_o *)Instance,
                                    1,
                                    0LL);
      if ( !Instance )
        goto LABEL_63;
      klass = Instance->klass;
      v18 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
        {
          ++v19;
          p_offset += 4;
          if ( v19 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_13:
        v21 = sub_AC5258(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL, v16);
      }
      v24 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
      if ( !v24 )
        sub_B2C434(0LL, v22);
      v46 = 0;
      while ( 1 )
      {
        v37 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v38 = 0LL;
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v38;
            v39 += 4;
            if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_41;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_41:
          v40 = sub_AC5258(v24, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v24, *(_QWORD *)(v40 + 8)) & 1) == 0 )
          break;
        v25 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v26 = 0LL;
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
          {
            ++v26;
            v27 += 4;
            if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_21;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_21:
          v28 = sub_AC5258(v24, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL, v41);
        }
        v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
        v31 = (struct BattleBuffData_BuffData_o *)v29;
        if ( !v29 )
          sub_B2C434(0LL, v30);
        if ( !*(_BYTE *)(v29 + 370) )
        {
          if ( !v15 )
            sub_B2C434(v29, v30);
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v15,
                     *(_DWORD *)(v29 + 16),
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v33 = (BuffEntity_o *)Entity;
          if ( Entity )
          {
            v34 = *(&Entity->fields.id + 1);
            if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BuffList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            }
            if ( BuffList__CheckType(32, v34, 0LL) )
            {
              if ( BuffEntity__getDamageRelease(v33, 0LL) < 1 )
              {
                if ( BuffEntity__getDamageRelease(v33, 0LL) == -1 )
                {
                  statusList = this->fields.statusList;
                  if ( !statusList )
                    sub_B2C434(0LL, v35);
                  System_Collections_Generic_List_VoiceCondType_Type___Add(
                    (System_Collections_Generic_List_VoiceCondType_Type__o *)statusList,
                    0,
                    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
                }
                else
                {
                  v46 = 1;
                }
              }
              else
              {
                this->fields._SleepBuff_k__BackingField = v31;
                sub_B2C2F8(&this->fields, v31);
              }
            }
          }
        }
      }
      v42 = *(_QWORD *)v24;
      if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
      {
        v43 = 0LL;
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
        {
          ++v43;
          v44 += 4;
          if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
            goto LABEL_48;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_48:
        v45 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v41);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v45)(v24, *(_QWORD *)(v45 + 8));
      if ( this->fields._SleepBuff_k__BackingField )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          1,
          (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
      }
      if ( (v46 & 1) != 0 )
      {
        Instance = (DataManager_o *)this->fields.statusList;
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_List_VoiceCondType_Type___Add(
          (System_Collections_Generic_List_VoiceCondType_Type__o *)Instance,
          2,
          (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
          (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_63:
    sub_B2C434(Instance, v12);
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

  if ( (byte_41842CA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41842CA = 1;
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
        (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
    }
    invokeAct = 0;
    svtData = this->fields.svtData;
    if ( !svtData )
      goto LABEL_33;
    BattleServantData__isNobleAction_21300684(svtData, &invokeAct, 0LL);
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
      (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
        (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
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
          (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Add__);
        return;
      }
    }
LABEL_33:
    sub_B2C434(svtData, method);
  }
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfDontAction(
        BattleCommandSealStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v8; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__6_0; // x20
  Il2CppObject *v11; // x21
  struct BattleCommandSealStatus___c_StaticFields *v12; // x0

  if ( (byte_41842C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v3);
    sub_B2C35C(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v4);
    sub_B2C35C(&Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__, v5);
    sub_B2C35C(&BattleCommandSealStatus___c_TypeInfo, v6);
    byte_41842C6 = 1;
  }
  statusList = this->fields.statusList;
  v8 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v8 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B2C42C(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__6_0,
      v11,
      Method_BattleCommandSealStatus___c__get_HasKindOfDontAction_b__6_0__,
      (const MethodInfo_2951820 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v12 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v12->__9__6_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__6_0;
    sub_B2C2F8(&v12->__9__6_0, _9__6_0);
  }
  if ( !statusList )
    sub_B2C434(v8, method);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__6_0,
           (const MethodInfo_2F6A824 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
}


bool __fastcall BattleCommandSealStatus__get_HasKindOfSealed(BattleCommandSealStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleCommandSealStatus_Status__o *statusList; // x19
  BattleCommandSealStatus___c_c *v8; // x0
  struct BattleCommandSealStatus___c_StaticFields *static_fields; // x8
  System_Predicate_EventTutorialMaster_OpenType__o *_9__4_0; // x20
  Il2CppObject *v11; // x21
  struct BattleCommandSealStatus___c_StaticFields *v12; // x0

  if ( (byte_41842C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__, method);
    sub_B2C35C(&Method_System_Predicate_BattleCommandSealStatus_Status___ctor__, v3);
    sub_B2C35C(&System_Predicate_BattleCommandSealStatus_Status__TypeInfo, v4);
    sub_B2C35C(&Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__, v5);
    sub_B2C35C(&BattleCommandSealStatus___c_TypeInfo, v6);
    byte_41842C5 = 1;
  }
  statusList = this->fields.statusList;
  v8 = BattleCommandSealStatus___c_TypeInfo;
  if ( (BYTE3(BattleCommandSealStatus___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandSealStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandSealStatus___c_TypeInfo);
    v8 = BattleCommandSealStatus___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleCommandSealStatus___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_EventTutorialMaster_OpenType__o *)sub_B2C42C(System_Predicate_BattleCommandSealStatus_Status__TypeInfo);
    System_Predicate_EventTutorialMaster_OpenType____ctor(
      _9__4_0,
      v11,
      Method_BattleCommandSealStatus___c__get_HasKindOfSealed_b__4_0__,
      (const MethodInfo_2951820 *)Method_System_Predicate_BattleCommandSealStatus_Status___ctor__);
    v12 = BattleCommandSealStatus___c_TypeInfo->static_fields;
    v12->__9__4_0 = (struct System_Predicate_BattleCommandSealStatus_Status__o *)_9__4_0;
    sub_B2C2F8(&v12->__9__4_0, _9__4_0);
  }
  if ( !statusList )
    sub_B2C434(v8, method);
  return System_Collections_Generic_List_BattleCommandSealStatus_Status___Exists(
           statusList,
           (System_Predicate_T__o *)_9__4_0,
           (const MethodInfo_2F6A824 *)Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__Exists__);
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

  if ( (byte_41842C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandSealStatus_Status__get_Count__, v3);
    byte_41842C4 = 1;
  }
  statusList = this->fields.statusList;
  if ( !statusList )
    sub_B2C434(0LL, method);
  if ( statusList->fields._size < 1 )
    return 0x7FFFFFFF;
  else
    return System_Linq_Enumerable__Min_BattleCommandSealStatus_Status_(
             (System_Collections_Generic_IEnumerable_TSource__o *)statusList,
             (const MethodInfo_1A92D40 *)Method_System_Linq_Enumerable_Min_BattleCommandSealStatus_Status___);
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
  sub_B2C2F8(&this->fields, value);
}


void __fastcall BattleCommandSealStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A52 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandSealStatus___c_TypeInfo, v1);
    byte_4186A52 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleCommandSealStatus___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleCommandSealStatus___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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