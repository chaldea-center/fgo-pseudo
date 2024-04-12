void __fastcall BattleActionData___cctor(const MethodInfo *method)
{
  BattleActionData_c *v1; // x8

  if ( (byte_42ACFAC & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACFAC = 1;
  }
  BattleActionData_TypeInfo->static_fields->TYPE_DEAD = 100;
  BattleActionData_TypeInfo->static_fields->TYPE_TW = 101;
  v1 = BattleActionData_TypeInfo;
  BattleActionData_TypeInfo->static_fields->TYPE_SKILL = 102;
  v1->static_fields->TYPE_BACKSTEP = 103;
  v1->static_fields->TYPE_RESURRECTION = 104;
  v1->static_fields->TYPE_BOOSTSKILL = 105;
  v1->static_fields->TYPE_COMMAND_SPELL = 106;
  v1->static_fields->TYPE_ORDERARTS = 121;
  v1->static_fields->TYPE_ORDERBUSTER = 122;
  v1->static_fields->TYPE_ORDERQUICK = 123;
  v1->static_fields->TYPE_ENEMY_CUTIN = 131;
  v1->static_fields->TYPE_ENEMY_SPELL_CUTIN = 132;
  v1->static_fields->addActionOrder = 0;
}


void __fastcall BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_KeyValuePair_int__int___o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_Collections_Generic_List_VoiceCondType_Type__o *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_HashSet_int__o *v8; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20

  if ( (byte_42ACFAB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_B52984(&System_Collections_Generic_List_BattleActionData__TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ACFAB = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1LL;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1LL;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v3;
  sub_B52920(&this->fields.damageSideEffectedSvtIds);
  v4 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B52A54(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v4,
    (const MethodInfo_22A1340 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v4;
  sub_B52920(&this->fields.attackSideEffectedSvtIds);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v5;
  sub_B52920(&this->fields.servantLogicResultList);
  this->fields.funcResult = 1;
  v6 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v6,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v6;
  sub_B52920(&this->fields.funcTargetPlayerTypeList);
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v7;
  sub_B52920(&this->fields.funcTargetList);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v8;
  sub_B52920(&this->fields._HpDecreaseFuncTargetHash_k__BackingField);
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B52A54(System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v9,
    (const MethodInfo_23E81F4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v9;
  sub_B52920(&this->fields._IntervalBuffDict_k__BackingField);
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(&this->fields.skillCutInMessage);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v10;
  sub_B52920(&this->fields.sideEffectList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData__AddAfterActionData(
        BattleActionData_o *this,
        BattleActionData_o *afterActionData,
        bool isPreActCheckDead,
        const MethodInfo *method)
{
  struct BattleActionData_o **p_afterActionData; // x20

  this->fields.afterActionData = afterActionData;
  p_afterActionData = &this->fields.afterActionData;
  sub_B52920(&this->fields.afterActionData);
  if ( *p_afterActionData )
    (*p_afterActionData)->fields.isPreAfterActCheckDead = isPreActCheckDead;
}


void __fastcall BattleActionData__AddBuffList(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x0
  struct System_Collections_Generic_List_BattleActionData_BuffData__o **p_buffdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  __int64 v8; // x1

  if ( (byte_42ACF68 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    byte_42ACF68 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  buffdatalist = this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = &this->fields.buffdatalist;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    *p_buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v7;
    sub_B52920(p_buffdatalist);
    buffdatalist = *p_buffdatalist;
    if ( !*p_buffdatalist )
      sub_B52A5C(0LL, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffdatalist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
}


BattleActionData_DisplayMessageData_o *__fastcall BattleActionData__AddDisplayMessage(
        BattleActionData_o *this,
        BattleMessageEntity_o *ent,
        ParseBattleMessage_o *parser,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  BattleActionData_DisplayMessageData_o *v9; // x19
  struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *DispMsgList_k__BackingField; // x0
  struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o **p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x1

  if ( (byte_42ACF7D & 1) == 0 )
  {
    sub_B52984(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_42ACF7D = 1;
  }
  v9 = (BattleActionData_DisplayMessageData_o *)sub_B52A54(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor(v9, ent, parser, preMsg, 0LL);
  DispMsgList_k__BackingField = this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = &this->fields._DispMsgList_k__BackingField;
    v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v12,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    *p_DispMsgList_k__BackingField = (struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *)v12;
    sub_B52920(p_DispMsgList_k__BackingField);
    DispMsgList_k__BackingField = *p_DispMsgList_k__BackingField;
    if ( !*p_DispMsgList_k__BackingField )
      sub_B52A5C(0LL, v13);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DispMsgList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
  return v9;
}


BattleActionData_o *__fastcall BattleActionData__AddDisplayTriggerIntervalBuff(
        BattleActionData_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BattleActionData_o *v5; // x19
  BattleServantData_o *key; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__150_0; // x22
  Il2CppObject *v9; // x23
  struct BattleActionData___c_StaticFields *v10; // x0

  v5 = this;
  if ( (byte_42ACF5D & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__);
    sub_B52984(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__150_0__);
    this = (BattleActionData_o *)sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF5D = 1;
  }
  if ( !task )
    goto LABEL_14;
  key = task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key;
  this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  }
  static_fields = *(struct BattleActionData___c_StaticFields **)&this->fields.commandAssistId;
  _9__150_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__150_0;
  if ( !_9__150_0 )
  {
    if ( (HIBYTE(this->fields.cutinAdditionalTime) & 4) != 0 && !*(_DWORD *)&this->fields.funcResult )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__150_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__150_0,
      v9,
      Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__150_0__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v10 = BattleActionData___c_TypeInfo->static_fields;
    v10->__9__150_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__150_0;
    sub_B52920(&v10->__9__150_0);
  }
  if ( !v5 )
LABEL_14:
    sub_B52A5C(this, task);
  BattleActionData__AddUpdateIntervalBuffDict(
    v5,
    key,
    (System_Action_BattleBuffData_BuffData__o *)_9__150_0,
    task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value,
    v3);
  return v5;
}


bool __fastcall BattleActionData__AddFieldServantUpdateIntervalBuff(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  int endcameraname; // w8
  BattleActionData_o *v6; // x20
  unsigned int v7; // w24
  BattleActionData_c **v8; // x8
  BattleServantData_o *v9; // x21
  BattleBuffData_BuffData_array *UpdateWaitIntervalBuffArray; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x23
  const MethodInfo *v12; // x4
  __int64 v14; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42ACF58 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleBuffData_BuffData__TypeInfo);
    this = (BattleActionData_o *)sub_B52984(&Method_BattleActionData_UpdateIntervalCurrent__);
    byte_42ACF58 = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (BattleActionData_o *)BattleData__getFieldServantList(data, 0, 0LL);
  if ( !this )
    goto LABEL_12;
  endcameraname = (int)this->fields.endcameraname;
  v6 = this;
  if ( endcameraname >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= endcameraname )
      {
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
      }
      v8 = &v6->klass + (int)v7;
      v9 = (BattleServantData_o *)v8[4];
      if ( !v9 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v8[4], 0LL);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0LL);
      v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v11,
        v4,
        Method_BattleActionData_UpdateIntervalCurrent__,
        (const MethodInfo_2627780 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v4,
        v9,
        (System_Action_BattleBuffData_BuffData__o *)v11,
        UpdateWaitIntervalBuffArray,
        v12);
      endcameraname = (int)v6->fields.endcameraname;
      if ( (int)++v7 >= endcameraname )
        return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable[5].method)(
                 v4,
                 v4->klass->vtable[6].methodPtr);
    }
LABEL_12:
    sub_B52A5C(this, data);
  }
  return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable[5].method)(
           v4,
           v4->klass->vtable[6].methodPtr);
}


void __fastcall BattleActionData__AddHealList(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x0
  struct System_Collections_Generic_List_BattleActionData_HealData__o **p_healdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  __int64 v8; // x1

  if ( (byte_42ACF6C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    byte_42ACF6C = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  healdatalist = this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = &this->fields.healdatalist;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    *p_healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)v7;
    sub_B52920(p_healdatalist);
    healdatalist = *p_healdatalist;
    if ( !*p_healdatalist )
      sub_B52A5C(0LL, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)healdatalist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_HealData__Add__);
}


void __fastcall BattleActionData__AddHpDecreaseFuncTargets(
        BattleActionData_o *this,
        int32_t funcType,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  bool IsRelatedHpDecrease; // w0
  System_Action_int__o *v8; // x21

  if ( (byte_42ACF56 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_int___);
    sub_B52984(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__132_0__);
    byte_42ACF56 = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0LL);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v8 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v8,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__132_0__,
        (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v8,
        (const MethodInfo_1A4297C *)Method_BasicHelper_ForEach_int___);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__AddNewMoveToSubMember(
        BattleActionData_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        bool isSucceeded,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o *moveToSubMemberList; // x23
  BattleActionData_MoveToSubMember_o *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42ACF71 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__);
    sub_B52984(&BattleActionData_MoveToSubMember_TypeInfo);
    byte_42ACF71 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = this->fields.moveToSubMemberList;
  v12 = (BattleActionData_MoveToSubMember_o *)sub_B52A54(BattleActionData_MoveToSubMember_TypeInfo);
  BattleActionData_MoveToSubMember___ctor(v12, index, uniqueId, funcIndex, isSucceeded, 0LL);
  if ( !moveToSubMemberList )
    sub_B52A5C(v13, v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveToSubMemberList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__);
}


void __fastcall BattleActionData__AddSideEffectAfterAction(
        BattleActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass295_0_o *v5; // x22
  BattlePerformance_o *v6; // x0
  BattleActionData_array *v7; // x1
  BattlePerformance_o **p_perf; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  BattleActionData___c_c *v12; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__295_1; // x21
  Il2CppObject *v15; // x22
  struct BattleActionData___c_StaticFields *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_42ACF9E & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleActionData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleActionData___);
    sub_B52984(&Method_System_Func_BattleActionData__BattleActionData___ctor__);
    sub_B52984(&Method_System_Func_BattleActionData__bool___ctor__);
    sub_B52984(&System_Func_BattleActionData__BattleActionData__TypeInfo);
    sub_B52984(&System_Func_BattleActionData__bool__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__AddSideEffectAfterAction_b__295_1__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass295_0__AddSideEffectAfterAction_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass295_0_TypeInfo);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF9E = 1;
  }
  v5 = (BattleActionData___c__DisplayClass295_0_o *)sub_B52A54(BattleActionData___c__DisplayClass295_0_TypeInfo);
  BattleActionData___c__DisplayClass295_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  v5->fields.perf = perf;
  p_perf = &v5->fields.perf;
  sub_B52920(&v5->fields);
  sideEffectList = this->fields.sideEffectList;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass295_0__AddSideEffectAfterAction_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData__bool___ctor__);
  v11 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v12 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v12 = BattleActionData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__295_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__295_1;
  if ( !_9__295_1 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__295_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleActionData__BattleActionData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__295_1,
      v15,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__295_1__,
      (const MethodInfo_2BCA808 *)Method_System_Func_BattleActionData__BattleActionData___ctor__);
    v16 = BattleActionData___c_TypeInfo->static_fields;
    v16->__9__295_1 = (struct System_Func_BattleActionData__BattleActionData__o *)_9__295_1;
    sub_B52920(&v16->__9__295_1);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__295_1,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v6 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                v17,
                                (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v6 )
    goto LABEL_17;
  v7 = (BattleActionData_array *)v6;
  if ( v6->fields.fsm )
  {
    v6 = *p_perf;
    if ( *p_perf )
    {
      BattlePerformance__addActionData(v6, v7, 0LL);
      return;
    }
LABEL_17:
    sub_B52A5C(v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__AddTransformServant(
        BattleActionData_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  BattleActionData_TransformServant_o *v11; // x24
  __int64 v12; // x1
  struct System_Collections_Generic_List_BattleActionData_TransformServant__o *transformServantlist; // x0

  if ( (byte_42ACF73 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__);
    sub_B52984(&BattleActionData_TransformServant_TypeInfo);
    byte_42ACF73 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v11 = (BattleActionData_TransformServant_o *)sub_B52A54(BattleActionData_TransformServant_TypeInfo);
  BattleActionData_TransformServant___ctor(v11, index, uniqueId, funcIndex, overwriteLimitCount, 0LL);
  transformServantlist = this->fields.transformServantlist;
  if ( !transformServantlist )
    sub_B52A5C(0LL, v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transformServantlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__);
}


void __fastcall BattleActionData__AddUpdateIntervalBuffDict(
        BattleActionData_o *this,
        BattleServantData_o *svtData,
        System_Action_BattleBuffData_BuffData__o *updateAction,
        BattleBuffData_BuffData_array *intervalArray,
        const MethodInfo *method)
{
  const MethodInfo_228F4D8 *v9; // x4
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v16; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_Variant__Variant__o v17; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v18; // 0:x1.16

  if ( (byte_42ACF59 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_42ACF59 = 1;
  }
  v16.fields.key = 0LL;
  v16.fields.value = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)intervalArray, (const MethodInfo *)svtData) )
  {
    v17.fields.key = (struct Firebase_Variant_o *)&v16;
    v17.fields.value = (struct Firebase_Variant_o *)svtData;
    System_Collections_Generic_KeyValuePair_Variant__Variant____ctor(
      v17,
      (Firebase_Variant_o *)updateAction,
      (Firebase_Variant_o *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v9);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_12;
    if ( !System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___ContainsKey(
            IntervalBuffDict_k__BackingField,
            v16,
            (const MethodInfo_23E9030 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v16.fields.key;
      value = v16.fields.value;
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v15,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v12 )
        goto LABEL_12;
      v18.fields.key = key;
      v18.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v12,
        v18,
        (Il2CppObject *)v15,
        (const MethodInfo_23E8D84 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v16,
                                                                                                    (const MethodInfo_23E8CE8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_B52A5C(IntervalBuffDict_k__BackingField, v10);
  }
}


void __fastcall BattleActionData__ExecAction(
        BattleActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionData__ExecUnappliedProcess(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass122_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v9; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__122_0; // x21
  Il2CppObject *v12; // x22
  struct BattleActionData___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_42ACF51 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_B52984(&Method_System_Func_BattleActionData_BuffData__bool___ctor__);
    sub_B52984(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__ExecUnappliedProcess_b__122_0__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass122_0__ExecUnappliedProcess_b__1__);
    sub_B52984(&BattleActionData___c__DisplayClass122_0_TypeInfo);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF51 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass122_0_o *)sub_B52A54(BattleActionData___c__DisplayClass122_0_TypeInfo);
  BattleActionData___c__DisplayClass122_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.data = data;
  sub_B52920(&v5->fields);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v9 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v9 = BattleActionData___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__122_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__122_0;
    if ( !_9__122_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__122_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__122_0,
        v12,
        Method_BattleActionData___c__ExecUnappliedProcess_b__122_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
      v13 = BattleActionData___c_TypeInfo->static_fields;
      v13->__9__122_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__122_0;
      sub_B52920(&v13->__9__122_0);
    }
    v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__122_0,
                                                           (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass122_0__ExecUnappliedProcess_b__1__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v14,
      (System_Action_T__o *)v15,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool __fastcall BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  BattleActionData___c_c *v4; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData___c_StaticFields *v8; // x0

  if ( (byte_42ACF5E & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_BattleActionData_BaseData___);
    sub_B52984(&Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    sub_B52984(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__156_0__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF5E = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, method) )
    return 0;
  v4 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v4 = BattleActionData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__156_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__156_0,
      v7,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__156_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    v8 = BattleActionData___c_TypeInfo->static_fields;
    v8->__9__156_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__156_0;
    sub_B52920(&v8->__9__156_0);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__156_0,
           (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_BattleActionData_BaseData___);
}


bool __fastcall BattleActionData__ExistSideEffect(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *SideEffectList; // x0
  const MethodInfo *v4; // x1

  SideEffectList = (System_Collections_ICollection_o *)BattleActionData__getSideEffectList(this, targetType, method);
  return !BasicHelper__IsNullOrEmpty(SideEffectList, v4);
}


bool __fastcall BattleActionData__ExistsAddableAfterAction(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleActionData_o *afterActionData; // x8
  BattleServantData_o *ServantData; // x0

  afterActionData = this->fields.afterActionData;
  if ( !afterActionData )
    return 0;
  if ( !afterActionData->fields.isPreAfterActCheckDead )
    return 1;
  if ( !data )
    sub_B52A5C(this, 0LL);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0LL);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL);
}


System_Int32_array *__fastcall BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_42ACF8D & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42ACF8D = 1;
  }
  return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
}


BattleActionData_DamageData_array *__fastcall BattleActionData__GetDamageArrayDistinctIndex(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  const MethodInfo *v6; // x2
  BattleActionData_DamageData_array *DamageList; // x0
  __int64 v8; // x1
  BattleActionData_DamageData_array *v9; // x20
  unsigned __int64 v10; // x24
  __int64 v11; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x23
  __int64 v14; // x0

  if ( (byte_42ACF67 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_BattleActionData_DamageData___);
    sub_B52984(&Method_System_Func_BattleActionData_DamageData__bool___ctor__);
    sub_B52984(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass169_0__GetDamageArrayDistinctIndex_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass169_0_TypeInfo);
    byte_42ACF67 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v6);
  if ( !DamageList )
    goto LABEL_14;
  v9 = DamageList;
  if ( (int)DamageList->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_B52A54(BattleActionData___c__DisplayClass169_0_TypeInfo);
      BattleActionData___c__DisplayClass169_0___ctor((BattleActionData___c__DisplayClass169_0_o *)v11, 0LL);
      if ( v10 >= v9->max_length )
      {
        v14 = sub_B52A88(DamageList);
        sub_B52A28(v14, 0LL);
      }
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 16) = v9->m_Items[v10];
      sub_B52920(v11 + 16);
      v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_DamageData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v12,
        (Il2CppObject *)v11,
        Method_BattleActionData___c__DisplayClass169_0__GetDamageArrayDistinctIndex_b__0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                          (System_Collections_Generic_List_T__o *)v5,
                                                          (System_Func_T__bool__o *)v12,
                                                          (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_BattleActionData_DamageData___);
      if ( ((unsigned __int8)DamageList & 1) == 0 )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v11 + 16),
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
      }
      if ( (__int64)++v10 >= (int)v9->max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B52A5C(DamageList, v8);
  }
LABEL_12:
  if ( !v5 )
    goto LABEL_14;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDamageTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *damagedatalist; // x0
  __int64 v5; // x1
  System_Int32_array *v6; // x19
  const MethodInfo *v7; // x1
  il2cpp_array_size_t i; // w20
  char *v9; // x9
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ACF8C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__);
    byte_42ACF8C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  damagedatalist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleActionData__get_damagedatalist(
                                                                                                    this,
                                                                                                    *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v6 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleActionData__get_damagedatalist(this, v7)) == 0LL) )
  {
    sub_B52A5C(damagedatalist, v5);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    damagedatalist,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v10 )
      break;
    if ( !v14.fields.current )
      sub_B52A5C(v10, v11);
    if ( !v6 )
      sub_B52A5C(v10, v11);
    if ( i >= v6->max_length )
    {
      v13 = sub_B52A88(v10);
      sub_B52A28(v13, 0LL);
    }
    v9 = (char *)v6 + 4 * (int)i;
    *((_DWORD *)v9 + 8) = HIDWORD(v14.fields.current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v6;
}


System_Int32_array *__fastcall BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_42ACF8E & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42ACF8E = 1;
  }
  return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
}


BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArray(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass123_0_o *v5; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x23
  BattleActionData___c_c *v7; // x0
  __int64 v8; // x1
  BattleActionData___c_c **p_fields; // x19
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x24
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *execOrderList; // x20
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__123_2; // x21
  Il2CppObject *v19; // x22
  struct BattleActionData___c_StaticFields *v20; // x0

  if ( (byte_42ACF52 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_HealData___ctor__);
    sub_B52984(&Method_System_Action_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_B52984(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_B52984(&Method_System_Comparison_BattleActionData_BaseData___ctor__);
    sub_B52984(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__GetExecOrderArray_b__123_2__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__0__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__1__);
    sub_B52984(&BattleActionData___c__DisplayClass123_0_TypeInfo);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF52 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass123_0_o *)sub_B52A54(BattleActionData___c__DisplayClass123_0_TypeInfo);
  BattleActionData___c__DisplayClass123_0___ctor(v5, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v5 )
    goto LABEL_15;
  v5->fields.execOrderList = (struct System_Collections_Generic_List_BattleActionData_BaseData__o *)v6;
  p_fields = (BattleActionData___c_c **)&v5->fields;
  sub_B52920(&v5->fields);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v10);
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    BuffList,
    (System_Action_T__o *)v12,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v13);
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__1__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_HealData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    HealList,
    (System_Action_T__o *)v15,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  execOrderList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5->fields.execOrderList;
  v7 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v7 = BattleActionData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__123_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__123_2;
  if ( !_9__123_2 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__123_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_BattleActionData_BaseData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__123_2,
      v19,
      Method_BattleActionData___c__GetExecOrderArray_b__123_2__,
      (const MethodInfo_2483370 *)Method_System_Comparison_BattleActionData_BaseData___ctor__);
    v20 = BattleActionData___c_TypeInfo->static_fields;
    v20->__9__123_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__123_2;
    sub_B52920(&v20->__9__123_2);
  }
  if ( !execOrderList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          execOrderList,
          (System_Comparison_T__o *)_9__123_2,
          (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v7 = *p_fields) == 0LL) )
  {
LABEL_15:
    sub_B52A5C(v7, v8);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArrayEx(
        BattleActionData_o *this,
        int32_t funcIndex,
        bool isSort,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x0
  BattleActionData___c_c *v15; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__124_0; // x20
  Il2CppObject *v18; // x21
  struct BattleActionData___c_StaticFields *v19; // x0

  if ( (byte_42ACF53 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_BattleActionData_BaseData___ctor__);
    sub_B52984(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__GetExecOrderArrayEx_b__124_0__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF53 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v8);
  if ( !v7 )
    sub_B52A5C(BuffList, v10);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    BuffList,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v11);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    HealList,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v13);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    DamageList,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v15 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v15 = BattleActionData___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__124_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__124_0;
    if ( !_9__124_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__124_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_BattleActionData_BaseData__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__124_0,
        v18,
        Method_BattleActionData___c__GetExecOrderArrayEx_b__124_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_BattleActionData_BaseData___ctor__);
      v19 = BattleActionData___c_TypeInfo->static_fields;
      v19->__9__124_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__124_0;
      sub_B52920(&v19->__9__124_0);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
      (System_Comparison_T__o *)_9__124_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleServantData_array *__fastcall BattleActionData__GetFuncSideEffectTargetServants(
        BattleActionData_o *this,
        BattleData_o *bData,
        bool isMainOnly,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  _QWORD **v9; // x20
  __int64 v10; // x19
  __int16 v11; // w8
  __int64 v12; // x19
  __int64 v13; // x19
  __int64 v14; // x19
  System_Int32_array *v16; // x22
  System_Func_int__bool__o *v17; // x23
  __int64 v18; // x1
  __int64 targetId; // x0
  System_Func_int__BattleActionData_SideEffectData__o *v20; // x21
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  __int64 v23; // x0

  if ( (byte_42ACF4A & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_BattleServantData___);
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_B52984(&Method_BasicHelper_IndexValue_int____68584400);
    sub_B52984(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__106_0__);
    sub_B52984(&Method_BattleData_getServantData__);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_B52984(&Method_System_Func_int__BattleServantData___ctor__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&System_Func_int__BattleServantData__TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42ACF4A = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, (const MethodInfo *)bData) )
  {
    if ( isMainOnly )
    {
      v16 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      v17 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__106_0__,
        (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int__27531732(
             targetIds,
             (System_Func_T__bool__o *)v17,
             (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832) )
      {
        targetId = (unsigned int)this->fields.targetId;
        if ( !v16 )
LABEL_24:
          sub_B52A5C(targetId, v18);
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
        if ( !v16 )
          goto LABEL_24;
      }
      if ( !v16->max_length )
      {
        v23 = sub_B52A88(targetId);
        sub_B52A28(v23, 0LL);
      }
      targetIds = v16;
      v16->m_Items[1] = targetId;
    }
    v20 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v20,
      (Il2CppObject *)bData,
      Method_BattleData_getServantData__,
      (const MethodInfo_2BC49BC *)Method_System_Func_int__BattleServantData___ctor__);
    v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                           (System_Func_TSource__TResult__o *)v20,
                                                           (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v22 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v21,
            (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                        (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
  v9 = (_QWORD **)Method_System_Array_Empty_BattleServantData___;
  v10 = **((_QWORD **)Method_System_Array_Empty_BattleServantData___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_BattleServantData___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AEB684(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AEB684(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AEB684(*v9[6]);
  return **(BattleServantData_array ***)(v14 + 184);
}


System_Int32_array *__fastcall BattleActionData__GetFuncTargetIds(
        BattleActionData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x23
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x22
  BattleActionData___c_c *v14; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__274_1; // x23
  Il2CppObject *v17; // x24
  struct BattleActionData___c_StaticFields *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x23
  const MethodInfo *v21; // x2
  BattleActionData_HealData_array *HealList; // x0
  BattleActionData___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  struct BattleActionData___c_StaticFields *v25; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__274_3; // x20
  Il2CppObject *v27; // x22
  struct BattleActionData___c_StaticFields *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x20

  if ( (byte_42ACF92 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_DamageData___ctor__);
    sub_B52984(&Method_System_Action_BattleActionData_HealData___ctor__);
    sub_B52984(&Method_System_Action_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_B52984(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_B52984(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_DamageData___);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_B52984(&Method_System_Func_BattleActionData_BuffData__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleActionData_HealData__bool___ctor__);
    sub_B52984(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_B52984(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__GetFuncTargetIds_b__274_1__);
    sub_B52984(&Method_BattleActionData___c__GetFuncTargetIds_b__274_3__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__0__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__2__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__4__);
    sub_B52984(&BattleActionData___c__DisplayClass274_0_TypeInfo);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF92 = 1;
  }
  v5 = sub_B52A54(BattleActionData___c__DisplayClass274_0_TypeInfo);
  BattleActionData___c__DisplayClass274_0___ctor((BattleActionData___c__DisplayClass274_0_o *)v5, 0LL);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  if ( !v5 )
    sub_B52A5C(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_B52920(v5 + 16);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v9);
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_DamageData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_DamageData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    DamageList,
    (System_Action_T__o *)v11,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(this, index, v12);
  v14 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v14 = BattleActionData___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__274_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__274_1;
  if ( !_9__274_1 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__274_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__274_1,
      v17,
      Method_BattleActionData___c__GetFuncTargetIds_b__274_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
    v18 = BattleActionData___c_TypeInfo->static_fields;
    v18->__9__274_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__274_1;
    sub_B52920(&v18->__9__274_1);
  }
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         BuffList,
                                                         (System_Func_TSource__bool__o *)_9__274_1,
                                                         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__2__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v19,
    (System_Action_T__o *)v20,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v21);
  v23 = BattleActionData___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v23 = BattleActionData___c_TypeInfo;
  }
  v25 = v23->static_fields;
  _9__274_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v25->__9__274_3;
  if ( !_9__274_3 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v25 = BattleActionData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)v25->__9;
    _9__274_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_HealData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__274_3,
      v27,
      Method_BattleActionData___c__GetFuncTargetIds_b__274_3__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_HealData__bool___ctor__);
    v28 = BattleActionData___c_TypeInfo->static_fields;
    v28->__9__274_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__274_3;
    sub_B52920(&v28->__9__274_3);
  }
  v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v24,
                                                         (System_Func_TSource__bool__o *)_9__274_3,
                                                         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v30,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__4__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_HealData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v29,
    (System_Action_T__o *)v30,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__GetFunctionIndexArrayNearByCuriousFunc(
        BattleActionData_o *this,
        int32_t effectTiming,
        System_Int32_array *resultOnGetFailed,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass277_0_o *v7; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListFunctionIndex; // x21
  System_Func_int__bool__o *v13; // x0
  __int64 *v14; // x8
  System_Func_TSource__bool__o *v16; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_42ACF95 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_System_Nullable_int__get_HasValue__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__);
    sub_B52984(&BattleActionData___c__DisplayClass277_0_TypeInfo);
    byte_42ACF95 = 1;
  }
  v7 = (BattleActionData___c__DisplayClass277_0_o *)sub_B52A54(BattleActionData___c__DisplayClass277_0_TypeInfo);
  BattleActionData___c__DisplayClass277_0___ctor(v7, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0LL);
  if ( !v7 )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(FuncIndexForSplitFuncSequence, v11);
  v7->fields.curiousFuncIndex = FuncIndexForSplitFuncSequence;
  if ( (*(_QWORD *)&FuncIndexForSplitFuncSequence & 0xFF00000000LL) == 0 )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v11);
  if ( effectTiming == 2 )
  {
    v13 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    v14 = &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    v14 = &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v13 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  v14 = &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v16 = (System_Func_TSource__bool__o *)v13;
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    *v14,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  v17 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v16,
          (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget(
        BattleActionData_o *this,
        bool isAtkFirst,
        bool isAtkLast,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass282_0_o *v7; // x23
  System_Collections_Generic_Dictionary_int__int__o *v8; // x24
  System_Collections_Generic_Dictionary_int__int__o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__int__o **p_dicTarget; // x22
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_42ACF97 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData___ctor__);
    sub_B52984(&System_Action_BattleActionData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData__ForEach__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass282_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass282_0_TypeInfo);
    byte_42ACF97 = 1;
  }
  v7 = (BattleActionData___c__DisplayClass282_0_o *)sub_B52A54(BattleActionData___c__DisplayClass282_0_TypeInfo);
  BattleActionData___c__DisplayClass282_0___ctor(v7, 0LL);
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v7 )
    goto LABEL_13;
  v7->fields.dicTarget = v8;
  p_dicTarget = &v7->fields.dicTarget;
  sub_B52920(&v7->fields);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(this, &v7->fields.dicTarget, v12);
    sideEffectList = this->fields.sideEffectList;
    v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass282_0__GetMaxSideEffectCountByTarget_b__0__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleActionData___ctor__);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)sideEffectList,
      (System_Action_T__o *)v14,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v9 = *p_dicTarget;
  if ( !*p_dicTarget )
LABEL_13:
    sub_B52A5C(v9, v10);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v9,
         (const MethodInfo_2EFF69C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v9 = *p_dicTarget;
    if ( *p_dicTarget )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v9,
                 (const MethodInfo_2EFF844 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
    goto LABEL_13;
  }
  return 0;
}


int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget_19386184(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v5; // x22
  System_Collections_Generic_Dictionary_int__int__o *v6; // x23
  System_Collections_Generic_Dictionary_int__int__o *dicTarget; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__int__o **p_dicTarget; // x21
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_42ACF99 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData___ctor__);
    sub_B52984(&System_Action_BattleActionData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass284_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass284_0_TypeInfo);
    byte_42ACF99 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass284_0_o *)sub_B52A54(BattleActionData___c__DisplayClass284_0_TypeInfo);
  BattleActionData___c__DisplayClass284_0___ctor(v5, 0LL);
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.dicTarget = v6;
  p_dicTarget = &v5->fields.dicTarget;
  sub_B52920(&v5->fields);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v10);
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass284_0__GetMaxSideEffectCountByTarget_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleActionData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    SideEffectList,
    (System_Action_T__o *)v12,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData___);
  dicTarget = v5->fields.dicTarget;
  if ( !dicTarget )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         dicTarget,
         (const MethodInfo_2EFF69C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    dicTarget = *p_dicTarget;
    if ( *p_dicTarget )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 dicTarget,
                 (const MethodInfo_2EFF844 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
LABEL_9:
    sub_B52A5C(dicTarget, v8);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__GetOptionalBattleEffectId(
        BattleActionData_o *this,
        int32_t effectIndex,
        int32_t resultOnGetFailed,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *OptionalBattleEffectIdList; // x0

  if ( (byte_42ACF96 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_int___);
    byte_42ACF96 = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0LL,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__27541092(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_1A43E64 *)Method_BasicHelper_IndexValue_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleActionData__GetOptionalBattleEffectIdList(
        BattleActionData_o *this,
        System_Collections_Generic_List_int__o *resultOnGetFailed,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo && (SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL)) != 0LL )
    return SkillLvEntity__GetOptionalBattleEffectIdList(SelfSkillLvEntity, 0LL);
  else
    return resultOnGetFailed;
}


int32_t __fastcall BattleActionData__GetTarget(BattleActionData_o *this, int32_t funcIdx, const MethodInfo *method)
{
  return this->fields.targetId;
}


System_Collections_Generic_List_BattleActionData_TransformServant__o *__fastcall BattleActionData__GetTransformServantList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  BattleActionData__TryInitTransformServant(this, method);
  return this->fields.transformServantlist;
}


void __fastcall BattleActionData__InitMoveToSubMemberList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o **p_moveToSubMemberList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_42ACF72 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    byte_42ACF72 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = &this->fields.moveToSubMemberList;
    v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v4,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    *p_moveToSubMemberList = (struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o *)v4;
    sub_B52920(p_moveToSubMemberList);
  }
}


bool __fastcall BattleActionData__IsGimmick(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.gimmickData != 0LL;
}


bool __fastcall BattleActionData__IsIgnoreWhiteFadeOnSkillMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0

  skillInfo = this->fields.skillInfo;
  return skillInfo
      && (SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL)) != 0LL
      && SkillLvEntity__IsIgnoreWhiteFade(SelfSkillLvEntity, 0LL);
}


bool __fastcall BattleActionData__IsOptionalBattleEffectIdAvaliable(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleActionData__GetOptionalBattleEffectIdList(this, 0LL, v2) != 0LL;
}


bool __fastcall BattleActionData__IsSelectedAddTargetIndex(
        BattleActionData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  return !skillInfo || BattleSkillInfoData__IsSelectedAddTargetIndex(skillInfo, dataVal, 0LL);
}


bool __fastcall BattleActionData__IsUpdateShiftHp(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._ShiftGauge_k__BackingField == 0LL;
}


bool __fastcall BattleActionData__IsUpdateView(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 7;
}


bool __fastcall BattleActionData__IsWaitCond(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 6;
}


BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData(
        BattleActionData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  BattleActionData_o *v5; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_42ACF9D & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF9D = 1;
  }
  v5 = (BattleActionData_o *)sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v5, v6);
  if ( !v5 )
    sub_B52A5C(v7, v8);
  v5->fields.actorId = this->fields.actorId;
  v5->fields.targetId = this->fields.targetId;
  BattleActionData__addSideEffectActionData(this, v5, type, v9);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData_19388152(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_B52A5C(0LL, v6);
  result->fields.targetId = overwriteTargetId;
  return result;
}


void __fastcall BattleActionData__PreActionProcess(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass121_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v9; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x21
  Il2CppObject *v12; // x22
  struct BattleActionData___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x21

  if ( (byte_42ACF50 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_B52984(&Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_B52984(&Method_System_Func_BattleActionData_BuffData__bool___ctor__);
    sub_B52984(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__PreActionProcess_b__121_0__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass121_0__PreActionProcess_b__1__);
    sub_B52984(&BattleActionData___c__DisplayClass121_0_TypeInfo);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF50 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass121_0_o *)sub_B52A54(BattleActionData___c__DisplayClass121_0_TypeInfo);
  BattleActionData___c__DisplayClass121_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.data = data;
  sub_B52920(&v5->fields);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist && !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v9 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v9 = BattleActionData___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
    if ( !_9__121_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__121_0,
        v12,
        Method_BattleActionData___c__PreActionProcess_b__121_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
      v13 = BattleActionData___c_TypeInfo->static_fields;
      v13->__9__121_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__121_0;
      sub_B52920(&v13->__9__121_0);
    }
    v14 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (System_Func_TSource__bool__o *)_9__121_0,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_BattleActionData_MasterBuffData_(
                                                           v14,
                                                           (const MethodInfo_1B66CC0 *)Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v16,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass121_0__PreActionProcess_b__1__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v15,
      (System_Action_T__o *)v16,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void __fastcall BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x19
  BattleActionData___c_c *v4; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__177_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData___c_StaticFields *v8; // x0

  if ( (byte_42ACF6A & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_B52984(&Method_BattleActionData___c__ResetAllCheckDead_b__177_0__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF6A = 1;
  }
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v4 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v4 = BattleActionData___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__177_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__177_0;
    if ( !_9__177_0 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__177_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__177_0,
        v7,
        Method_BattleActionData___c__ResetAllCheckDead_b__177_0__,
        (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BuffData___ctor__);
      v8 = BattleActionData___c_TypeInfo->static_fields;
      v8->__9__177_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__177_0;
      sub_B52920(&v8->__9__177_0);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)buffdatalist,
      (System_Action_T__o *)_9__177_0,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
}


void __fastcall BattleActionData__SetAfterChangeField(
        BattleActionData_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        DataVals_o *baseVals,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  BattleActionData_o *v8; // x19
  BattleActionData_AfterChangeTakeOverField_o *v9; // x22

  v8 = this;
  if ( (byte_42ACF7E & 1) == 0 )
  {
    sub_B52984(&BattleActionData_AfterChangeField_TypeInfo);
    this = (BattleActionData_o *)sub_B52984(&BattleActionData_AfterChangeTakeOverField_TypeInfo);
    byte_42ACF7E = 1;
  }
  if ( !baseVals )
LABEL_9:
    sub_B52A5C(this, fieldChange);
  if ( DataVals__isParam(baseVals, 107, 0LL) )
  {
    v9 = (BattleActionData_AfterChangeTakeOverField_o *)sub_B52A54(BattleActionData_AfterChangeTakeOverField_TypeInfo);
    BattleActionData_AfterChangeTakeOverField___ctor(v9, fieldChange, fieldEnvData, 0LL);
    if ( !v8 )
      goto LABEL_9;
  }
  else
  {
    v9 = (BattleActionData_AfterChangeTakeOverField_o *)sub_B52A54(BattleActionData_AfterChangeField_TypeInfo);
    BattleActionData_AfterChangeField___ctor((BattleActionData_AfterChangeField_o *)v9, fieldChange, 0LL);
    if ( !v8 )
      goto LABEL_9;
  }
  v8->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v9;
  sub_B52920(&v8->fields._ChangeField_k__BackingField);
}


void __fastcall BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  System_Func_int__bool__o *v5; // x21
  int32_t targetId; // w0

  if ( (byte_42ACF49 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_BasicHelper_IndexValue_int____68584400);
    sub_B52984(&Method_BattleActionData__SetFirstAtkMainTargetId_b__105_0__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    byte_42ACF49 = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v5 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__105_0__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__27531732(
           targetIds,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
    }
    this->fields._FirstAtkMainTargetId_k__BackingField = targetId;
  }
}


void __fastcall BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData___c__DisplayClass125_0_o *v3; // x19
  const MethodInfo *v4; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  const MethodInfo *v6; // x1
  BattleActionData___c_c *v7; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__125_0; // x21
  Il2CppObject *v10; // x22
  struct BattleActionData___c_StaticFields *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BattleActionData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  struct BattleActionData___c_StaticFields *v18; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__125_2; // x20
  Il2CppObject *v20; // x21
  struct BattleActionData___c_StaticFields *v21; // x0

  if ( (byte_42ACF54 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_BaseData___ctor__);
    sub_B52984(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_B52984(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    sub_B52984(&Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleActionData_BaseData__int___ctor__);
    sub_B52984(&System_Func_BattleActionData_BaseData__int__TypeInfo);
    sub_B52984(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_0__);
    sub_B52984(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_2__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass125_0__SetFuncSideEffectTrigger_b__1__);
    sub_B52984(&BattleActionData___c__DisplayClass125_0_TypeInfo);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF54 = 1;
  }
  v3 = (BattleActionData___c__DisplayClass125_0_o *)sub_B52A54(BattleActionData___c__DisplayClass125_0_TypeInfo);
  BattleActionData___c__DisplayClass125_0___ctor(v3, 0LL);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v4);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, v6) )
  {
    v7 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v7 = BattleActionData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__125_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__125_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleActionData_BaseData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__125_0,
        v10,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_0__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_BattleActionData_BaseData__int___ctor__);
      v11 = BattleActionData___c_TypeInfo->static_fields;
      v11->__9__125_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__125_0;
      sub_B52920(&v11->__9__125_0);
    }
    v12 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__125_0,
            (const MethodInfo_1B65988 *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v3 )
      sub_B52A5C(v12, v13);
    v3->fields.lastIndex = v12;
    v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v14,
      (Il2CppObject *)v3,
      Method_BattleActionData___c__DisplayClass125_0__SetFuncSideEffectTrigger_b__1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v16 = BattleActionData___c_TypeInfo;
    v17 = (System_Collections_Generic_IEnumerable_T__o *)v15;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v16 = BattleActionData___c_TypeInfo;
    }
    v18 = v16->static_fields;
    _9__125_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v18->__9__125_2;
    if ( !_9__125_2 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v18 = BattleActionData___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)v18->__9;
      _9__125_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__125_2,
        v20,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_2__,
        (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BaseData___ctor__);
      v21 = BattleActionData___c_TypeInfo->static_fields;
      v21->__9__125_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__125_2;
      sub_B52920(&v21->__9__125_2);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v17,
      (System_Action_T__o *)_9__125_2,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void __fastcall BattleActionData__SetFuncTargetAllDead(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass137_0_o *v5; // x21
  _BOOL8 isEnemyID; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *HpDecreaseFuncTargetHash_k__BackingField; // x22
  System_Func_int__BattleActionData_SideEffectData__o *v9; // x23
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v14; // x20
  const MethodInfo *v15; // x1
  BattleActionData___c_c *v16; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__137_1; // x21
  Il2CppObject *v19; // x22
  struct BattleActionData___c_StaticFields *v20; // x0

  if ( (byte_42ACF57 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_BattleServantData____68582712);
    sub_B52984(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_B52984(&Method_BattleData_getServantData__);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_int__BattleServantData___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&System_Func_int__BattleServantData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__SetFuncTargetAllDead_b__137_1__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass137_0__SetFuncTargetAllDead_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass137_0_TypeInfo);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF57 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass137_0_o *)sub_B52A54(BattleActionData___c__DisplayClass137_0_TypeInfo);
  BattleActionData___c__DisplayClass137_0___ctor(v5, 0LL);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0LL), !v5) )
    sub_B52A5C(isEnemyID, v7);
  v5->fields.isActorEnemy = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v9 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v9,
    (Il2CppObject *)data,
    Method_BattleData_getServantData__,
    (const MethodInfo_2BC49BC *)Method_System_Func_int__BattleServantData___ctor__);
  v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                         HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v9,
                                                         (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v11 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v10,
          (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass137_0__SetFuncTargetAllDead_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
  v13 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v14 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v13,
          (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, v15) )
  {
    v16 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v16 = BattleActionData___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__137_1;
    if ( !_9__137_1 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__137_1,
        v19,
        Method_BattleActionData___c__SetFuncTargetAllDead_b__137_1__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__137_1 = (struct System_Func_BattleServantData__bool__o *)_9__137_1;
      sub_B52920(&v20->__9__137_1);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                                           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v14,
                                                           (System_Func_T__bool__o *)_9__137_1,
                                                           (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_BattleServantData____68582712);
  }
}


void __fastcall BattleActionData__SetGimmickData(
        BattleActionData_o *this,
        System_Int32_array *indexArray,
        System_String_array *startArray,
        System_Object_array *resultArray,
        System_Int32_array *types,
        const MethodInfo *method)
{
  BattleActionData_GimmickData_o *v11; // x24
  struct BattleActionData_GimmickData_o **p_gimmickData; // x21
  __int64 v13; // x1
  struct BattleActionData_GimmickData_o *v14; // x0

  if ( (byte_42ACF7C & 1) == 0 )
  {
    sub_B52984(&BattleActionData_GimmickData_TypeInfo);
    byte_42ACF7C = 1;
  }
  v11 = (BattleActionData_GimmickData_o *)sub_B52A54(BattleActionData_GimmickData_TypeInfo);
  BattleActionData_GimmickData___ctor(v11, 0LL);
  this->fields.gimmickData = v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_B52920(p_gimmickData);
  v14 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v14->fields.indexArray = indexArray;
  sub_B52920(&v14->fields.indexArray);
  v14 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v14->fields.startVoiceIdArray = startArray,
        sub_B52920(&v14->fields.startVoiceIdArray),
        (v14 = *p_gimmickData) == 0LL)
    || (v14->fields.resultVoiceIdArray = resultArray,
        sub_B52920(&v14->fields.resultVoiceIdArray),
        (v14 = *p_gimmickData) == 0LL) )
  {
LABEL_8:
    sub_B52A5C(v14, v13);
  }
  v14->fields.animationTypes = types;
  sub_B52920(&v14->fields.animationTypes);
}


void __fastcall BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  BattleActionData___c_c *v6; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__126_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActionData___c_StaticFields *v10; // x0

  if ( (byte_42ACF55 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_BaseData___ctor__);
    sub_B52984(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_B52984(&Method_BattleActionData___c__SetPopupOnce_b__126_0__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF55 = 1;
  }
  ExecOrderArray = BattleActionData__GetExecOrderArrayEx(this, -1, 0, v2);
  if ( ExecOrderArray )
  {
    v5 = (System_Collections_Generic_IEnumerable_T__o *)ExecOrderArray;
    v6 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__126_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__126_0;
    if ( !_9__126_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__126_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__126_0,
        v9,
        Method_BattleActionData___c__SetPopupOnce_b__126_0__,
        (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BaseData___ctor__);
      v10 = BattleActionData___c_TypeInfo->static_fields;
      v10->__9__126_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__126_0;
      sub_B52920(&v10->__9__126_0);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v5,
      (System_Action_T__o *)_9__126_0,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void __fastcall BattleActionData__SetRelatedNotSkillSkip(BattleActionData_o *this, const MethodInfo *method)
{
  do
  {
    this->fields._IsNotSkillSkip_k__BackingField = 1;
    this = this->fields.afterActionData;
  }
  while ( this );
}


void __fastcall BattleActionData__SetShiftGauge(
        BattleActionData_o *this,
        BattleActionData_BaseShiftGaugeData_o *shiftGauge,
        const MethodInfo *method)
{
  this->fields._ShiftGauge_k__BackingField = shiftGauge;
  sub_B52920(&this->fields._ShiftGauge_k__BackingField);
}


void __fastcall BattleActionData__SetSideEffectCountByTarget(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_int__int__o **dicTarget,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass283_0_o *v5; // x21
  System_Collections_Generic_List_int__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x22
  System_Collections_Generic_List_int__o **p_targetList; // x20
  System_Action_o *v10; // x22
  __int64 v11; // x1
  int32_t current; // w20
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+20h] [xbp-50h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_42ACF98 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass283_0__SetSideEffectCountByTarget_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass283_0_TypeInfo);
    byte_42ACF98 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  value = 0;
  v5 = (BattleActionData___c__DisplayClass283_0_o *)sub_B52A54(BattleActionData___c__DisplayClass283_0_TypeInfo);
  BattleActionData___c__DisplayClass283_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields);
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  p_targetList = &v5->fields.targetList;
  v5->fields.targetList = v8;
  sub_B52920(&v5->fields.targetList);
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass283_0__SetSideEffectCountByTarget_b__0__,
    0LL);
  if ( !v10 || (System_Action__Invoke(v10, 0LL), (v6 = *p_targetList) == 0LL) )
LABEL_14:
    sub_B52A5C(v6, v7);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    v6,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v15,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_B52A5C(0LL, v11);
    current = v15.fields.current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v15.fields.current,
      &value,
      (const MethodInfo_2F016AC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_B52A5C(0LL, v13);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v15,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActionData__SetState(BattleActionData_o *this, int32_t s, const MethodInfo *method)
{
  this->fields.state = s;
}


void __fastcall BattleActionData__SetTypeEnemyCutIn(
        BattleActionData_o *this,
        int32_t effectType,
        const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  int32_t *p_TYPE_ENEMY_SPELL_CUTIN; // x8
  BattleActionData_c *v7; // x0

  if ( (byte_42ACF87 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF87 = 1;
  }
  this->fields.state = 4;
  if ( effectType == 2 )
  {
    v7 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v7 = BattleActionData_TypeInfo;
    }
    p_TYPE_ENEMY_SPELL_CUTIN = &v7->static_fields->TYPE_ENEMY_SPELL_CUTIN;
  }
  else
  {
    if ( effectType != 1 )
      return;
    v5 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v5 = BattleActionData_TypeInfo;
    }
    p_TYPE_ENEMY_SPELL_CUTIN = &v5->static_fields->TYPE_ENEMY_CUTIN;
  }
  this->fields.type = *p_TYPE_ENEMY_SPELL_CUTIN;
}


BattleActionData_o *__fastcall BattleActionData__SetWaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *cond,
        const MethodInfo *method)
{
  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = cond;
  sub_B52920(&this->fields._WaitCond_k__BackingField);
  return this;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__TryGetFuncSideEffectInterval(
        BattleActionData_o *this,
        float *interval,
        bool existTriggerFunc,
        float totalTime,
        const MethodInfo *method)
{
  int32_t MaxSideEffectCountByTarget_19386184; // w0
  float v9; // s0
  bool result; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_19386184 = BattleActionData__GetMaxSideEffectCountByTarget_19386184(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_19386184 < 1 )
    return 0;
  v9 = totalTime / (float)(MaxSideEffectCountByTarget_19386184 + existTriggerFunc);
  result = 1;
  *interval = v9;
  return result;
}


void __fastcall BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_TransformServant__o **p_transformServantlist; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_42ACF74 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    byte_42ACF74 = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = &this->fields.transformServantlist;
    v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v4,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    *p_transformServantlist = (struct System_Collections_Generic_List_BattleActionData_TransformServant__o *)v4;
    sub_B52920(p_transformServantlist);
  }
}


void __fastcall BattleActionData__UpdateDirectIntervalBuffData(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass149_0_o *v5; // x19
  struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *IntervalBuffDict_k__BackingField; // x0
  const MethodInfo *v7; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p__9__0; // x20
  const MethodInfo *v9; // x1
  System_Action_T__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x23
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  __int128 v14; // [xsp+0h] [xbp-80h] BYREF
  __int128 v15; // [xsp+10h] [xbp-70h]
  __int128 v16; // [xsp+20h] [xbp-60h]

  if ( (byte_42ACF5C & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B52984(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_B52984(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B52984(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_B52984(&Method_BattleActionData___c__DisplayClass149_0__UpdateDirectIntervalBuffData_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass149_0_TypeInfo);
    byte_42ACF5C = 1;
  }
  v15 = 0u;
  v16 = 0u;
  v14 = 0u;
  v5 = (BattleActionData___c__DisplayClass149_0_o *)sub_B52A54(BattleActionData___c__DisplayClass149_0_TypeInfo);
  BattleActionData___c__DisplayClass149_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  v5->fields.targetType = targetType;
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
         v7) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v5->fields.buffMst = (struct BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BuffMaster___);
  sub_B52920(&v5->fields);
  IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_17:
    sub_B52A5C(IntervalBuffDict_k__BackingField, v7);
  System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v14,
    (System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer__o *)IntervalBuffDict_k__BackingField,
    (const MethodInfo_23E93C0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  p__9__0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v5->fields.__9__0;
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v14,
            (const MethodInfo_2310FFC *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v10 = (System_Action_T__o *)*((_QWORD *)&v15 + 1);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16, v9) )
    {
      v12 = *p__9__0;
      if ( !*p__9__0 )
      {
        v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v12,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass149_0__UpdateDirectIntervalBuffData_b__0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        *p__9__0 = v12;
        sub_B52920(&v5->fields.__9__0);
      }
      v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                             v11,
                                                             (System_Func_TSource__bool__o *)v12,
                                                             (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v13,
        v10,
        (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v14,
    (const MethodInfo_2311178 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void __fastcall BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v4; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__157_0; // x21
  Il2CppObject *v7; // x22
  struct BattleActionData___c_StaticFields *v8; // x0
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x19
  BattleActionData___c_c *v10; // x0
  struct BattleActionData___c_StaticFields *v11; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__157_1; // x20
  Il2CppObject *v13; // x21
  struct BattleActionData___c_StaticFields *v14; // x0

  if ( (byte_42ACF5F & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleActionData_HealData___ctor__);
    sub_B52984(&Method_System_Action_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_B52984(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_B52984(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_0__);
    sub_B52984(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_1__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF5F = 1;
  }
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v4 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v4 = BattleActionData___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__157_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__157_0;
    if ( !_9__157_0 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__157_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__157_0,
        v7,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_0__,
        (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_BuffData___ctor__);
      v8 = BattleActionData___c_TypeInfo->static_fields;
      v8->__9__157_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__157_0;
      sub_B52920(&v8->__9__157_0);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)buffdatalist,
      (System_Action_T__o *)_9__157_0,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v10 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v10 = BattleActionData___c_TypeInfo;
    }
    v11 = v10->static_fields;
    _9__157_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v11->__9__157_1;
    if ( !_9__157_1 )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v11 = BattleActionData___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)v11->__9;
      _9__157_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__157_1,
        v13,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_1__,
        (const MethodInfo_2627780 *)Method_System_Action_BattleActionData_HealData___ctor__);
      v14 = BattleActionData___c_TypeInfo->static_fields;
      v14->__9__157_1 = (struct System_Action_BattleActionData_HealData__o *)_9__157_1;
      sub_B52920(&v14->__9__157_1);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)healdatalist,
      (System_Action_T__o *)_9__157_1,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void __fastcall BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x19
  BattleActionData___c_c *v4; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__147_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData___c_StaticFields *v8; // x0

  if ( (byte_42ACF5A & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleServantData___ctor__);
    sub_B52984(&System_Action_BattleServantData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_B52984(&Method_BattleActionData___c__UpdateIntervalBuff_b__147_0__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF5A = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleActionData_o *, Il2CppMethodPointer))this->klass->vtable._7_UpdateIntervalBuffData.method)(
                                                        this,
                                                        this->klass->vtable._8_FixDisplayWaitingIntervalBuff.methodPtr);
  v4 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v4 = BattleActionData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__147_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__147_0,
      v7,
      Method_BattleActionData___c__UpdateIntervalBuff_b__147_0__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleServantData___ctor__);
    v8 = BattleActionData___c_TypeInfo->static_fields;
    v8->__9__147_0 = (struct System_Action_BattleServantData__o *)_9__147_0;
    sub_B52920(&v8->__9__147_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v3,
    (System_Action_T__o *)_9__147_0,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *__fastcall BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  WarBoardAIRoute_RouteData_o *v10; // x22
  __int128 v12[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v13; // [xsp+30h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+40h] [xbp-60h]
  __int128 v15; // [xsp+50h] [xbp-50h]

  if ( (byte_42ACF5B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    byte_42ACF5B = 1;
  }
  *(_OWORD *)action = 0u;
  v15 = 0u;
  v13 = 0u;
  v3 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v3,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          v4) )
  {
    IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v12,
      (System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer__o *)IntervalBuffDict_k__BackingField,
      (const MethodInfo_23E93C0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    *(_OWORD *)action = v12[1];
    v15 = v12[2];
    v13 = v12[0];
    v7 = 0LL;
    while ( 1 )
    {
      v8 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___MoveNext(
             (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v13,
             (const MethodInfo_2310FFC *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v8 )
        break;
      v10 = (WarBoardAIRoute_RouteData_o *)action[0];
      if ( (_QWORD)v15 )
        v7 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v15;
      if ( (_QWORD)v15 )
      {
        if ( !v7 )
          sub_B52A5C(v8, v9);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v7,
          action[1],
          (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      }
      if ( v10 )
      {
        if ( !v3 )
          sub_B52A5C(v8, v9);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v3,
          v10,
          (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v13,
      (const MethodInfo_2311178 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_20:
      sub_B52A5C(IntervalBuffDict_k__BackingField, v5);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)IntervalBuffDict_k__BackingField,
      (const MethodInfo_23E8F98 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v3;
}


void __fastcall BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B52A5C(this, 0LL);
  BattleBuffData_BuffData__UpdateIntervalCurrent(buff, 0LL);
}


void __fastcall BattleActionData__UpdateNotSkillSkip(BattleActionData_o *this, const MethodInfo *method)
{
  if ( this->fields.isForcedSpeedOne )
  {
    do
    {
      this->fields._IsNotSkillSkip_k__BackingField = 1;
      this = this->fields.afterActionData;
    }
    while ( this );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData___AddHpDecreaseFuncTargets_b__132_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x0

  if ( (byte_42ACFAD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_42ACFAD = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_B52A5C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


bool __fastcall BattleActionData___GetFuncSideEffectTargetServants_b__106_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


bool __fastcall BattleActionData___SetFirstAtkMainTargetId_b__105_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void __fastcall BattleActionData__addAction(
        BattleActionData_o *this,
        BattleActionData_o *addData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *damagedatalist; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_42ACF8F & 1) == 0 )
  {
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    sub_B52984(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    byte_42ACF8F = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleActionData__get_damagedatalist(
                                                                                         this,
                                                                                         (const MethodInfo *)addData);
    v7 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v6);
    if ( !damagedatalist )
      sub_B52A5C(v7, v8);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      damagedatalist,
      v7,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_1A44EAC *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    this->fields.redrawCommandCard |= addData->fields.redrawCommandCard;
    BattleActionData__addReflectLogicResultServantIds(this, addData->fields.servantLogicResultList, v9);
    this->fields.funcResult = addData->fields.funcResult;
    if ( addData->fields.isAllAttack )
      this->fields.isAllAttack = addData->fields.isAllAttack;
  }
  else
  {
    this->fields.funcResult = 0;
  }
}


void __fastcall BattleActionData__addBattleData_BattleActionData_TransformServant_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_1A44EAC *method)
{
  System_Collections_Generic_List_T__o *v4; // x0
  Il2CppClass *_0_System_Collections_Generic_List_T; // x22
  System_Collections_Generic_List_T__o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1

  if ( addDataList )
  {
    v4 = *dataList;
    if ( !*dataList )
    {
      _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
      if ( (BYTE2(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
        sub_AEB684(method->rgctx_data->_0_System_Collections_Generic_List_T_);
      v9 = (System_Collections_Generic_List_T__o *)sub_B52A54(_0_System_Collections_Generic_List_T);
      method->rgctx_data->_1_System_Collections_Generic_List_T___ctor->methodPointer();
      *dataList = v9;
      sub_B52920((BattleServantConfConponent_o *)dataList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
      v4 = *dataList;
      if ( !*dataList )
        sub_B52A5C(0LL, v16);
    }
    ((void (__fastcall *)(System_Collections_Generic_List_T__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_2_System_Collections_Generic_List_T__AddRange->methodPointer)(
      v4,
      addDataList);
  }
}


void __fastcall BattleActionData__addCriticalStar(BattleActionData_o *this, int32_t num, const MethodInfo *method)
{
  this->fields.addCriticalStars += num;
}


void __fastcall BattleActionData__addDamageSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_SideEffectData__o *sideEffectList,
        BattleActionData_DamageData_o *damage,
        System_Collections_Generic_List_BuffList_ACTION__o *actList,
        const MethodInfo *method)
{
  int32_t targetId; // w22
  BuffList_ACTION_array *v9; // x23
  BattleActionData_SideEffectData_o *v10; // x21

  if ( (byte_42ACF65 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__);
    this = (BattleActionData_o *)sub_B52984(&BattleActionData_SideEffectData_TypeInfo);
    byte_42ACF65 = 1;
  }
  if ( !actList )
    goto LABEL_9;
  if ( actList->fields._size >= 1 )
  {
    if ( damage )
    {
      targetId = damage->fields.targetId;
      v9 = (BuffList_ACTION_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                      (System_Collections_Generic_List_Voice_BATTLE__o *)actList,
                                      (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__);
      v10 = (BattleActionData_SideEffectData_o *)sub_B52A54(BattleActionData_SideEffectData_TypeInfo);
      BattleActionData_SideEffectData___ctor(v10, targetId, v9, 0LL);
      if ( sideEffectList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sideEffectList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__);
        System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
          (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)actList,
          (const MethodInfo_305A394 *)Method_System_Collections_Generic_List_BuffList_ACTION__Clear__);
        return;
      }
    }
LABEL_9:
    sub_B52A5C(this, sideEffectList);
  }
}


void __fastcall BattleActionData__addReflectAttackSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v6; // 0:x1.8

  if ( (byte_42ACFA2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
    byte_42ACFA2 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(0LL, pairAttackAndTarget);
  v6 = pairAttackAndTarget;
  System_Collections_Generic_List_KeyValuePair_int__int____Add(
    attackSideEffectedSvtIds,
    v6,
    (const MethodInfo_22A20A0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__addReflectDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_42ACFA0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    byte_42ACFA0 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_B52A5C(0LL, *(_QWORD *)&uniqueSvtId);
  System_Collections_Generic_List_int___Add(
    damageSideEffectedSvtIds,
    uniqueSvtId,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleActionData__addReflectLogicResultServantId(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass305_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x22
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v10; // x19
  BattleActionData_ServantLogicResultData_o *v11; // x21

  if ( (byte_42ACFA4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__);
    sub_B52984(&Method_System_Predicate_BattleActionData_ServantLogicResultData___ctor__);
    sub_B52984(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_B52984(&BattleActionData_ServantLogicResultData_TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass305_0__addReflectLogicResultServantId_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass305_0_TypeInfo);
    byte_42ACFA4 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass305_0_o *)sub_B52A54(BattleActionData___c__DisplayClass305_0_TypeInfo);
  BattleActionData___c__DisplayClass305_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.uniqueSvtId = uniqueSvtId;
  servantLogicResultList = this->fields.servantLogicResultList;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass305_0__addReflectLogicResultServantId_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleActionData_ServantLogicResultData___ctor__);
  if ( !servantLogicResultList )
    goto LABEL_9;
  if ( System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
         (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)servantLogicResultList,
         (System_Predicate_T__o *)v9,
         (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v10 = this->fields.servantLogicResultList;
  v11 = (BattleActionData_ServantLogicResultData_o *)sub_B52A54(BattleActionData_ServantLogicResultData_TypeInfo);
  BattleActionData_ServantLogicResultData___ctor(v11, 0LL);
  if ( !v11 || (v11->fields.uniqueId = v5->fields.uniqueSvtId, !v10) )
LABEL_9:
    sub_B52A5C(v6, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__);
}


void __fastcall BattleActionData__addReflectLogicResultServantIds(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *addLogicResultList,
        const MethodInfo *method)
{
  BattleActionData_o *v4; // x20
  int32_t size; // w8
  __int64 v6; // x21
  BattleActionData_ServantLogicResultData_o *v7; // x8

  v4 = this;
  if ( (byte_42ACFA3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    this = (BattleActionData_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_42ACFA3 = 1;
  }
  if ( addLogicResultList )
  {
    size = addLogicResultList->fields._size;
    if ( size >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( size <= (unsigned int)v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v7 = addLogicResultList->fields._items->m_Items[v6];
        if ( !v7 )
          sub_B52A5C(this, addLogicResultList);
        BattleActionData__addReflectLogicResultServantId(v4, v7->fields.uniqueId, method);
        size = addLogicResultList->fields._size;
        ++v6;
      }
      while ( (int)v6 < size );
    }
  }
}


void __fastcall BattleActionData__addSideEffectActionData(
        BattleActionData_o *this,
        BattleActionData_o *sideEffectActionData,
        int32_t actType,
        const MethodInfo *method)
{
  BattleActionData_o *v6; // x21

  v6 = this;
  if ( (byte_42ACF9B & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleActionData__Add__);
    byte_42ACF9B = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v6->fields.sideEffectList) == 0LL) )
  {
    sub_B52A5C(this, sideEffectActionData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)sideEffectActionData,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData__Add__);
}


bool __fastcall BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_42ACF77 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__);
    byte_42ACF77 = 1;
  }
  summonServantList = this->fields.summonServantList;
  return summonServantList && summonServantList->fields._size > 0;
}


BattleActionData_BuffData_array *__fastcall BattleActionData__getBuffList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass176_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x22
  struct System_Collections_Generic_List_BattleActionData_BuffData__o **p_buffdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x19

  if ( (byte_42ACF69 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_System_Predicate_BattleActionData_BuffData___ctor__);
    sub_B52984(&System_Predicate_BattleActionData_BuffData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass176_0__getBuffList_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass176_0_TypeInfo);
    byte_42ACF69 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass176_0_o *)sub_B52A54(BattleActionData___c__DisplayClass176_0_TypeInfo);
  BattleActionData___c__DisplayClass176_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.funcIndex = funcIndex;
  buffdatalist = this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = &this->fields.buffdatalist;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    *p_buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v10;
    sub_B52920(p_buffdatalist);
    funcIndex = v5->fields.funcIndex;
    buffdatalist = *p_buffdatalist;
  }
  if ( funcIndex == -1 )
  {
    if ( buffdatalist )
    {
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
    }
LABEL_13:
    sub_B52A5C(All, v7);
  }
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleActionData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass176_0__getBuffList_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleActionData_BuffData___ctor__);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)buffdatalist,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
}


BattleActionData_ChangeBg_o *__fastcall BattleActionData__getChangeBg(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *changeBgList; // x8

  if ( (byte_42ACF7B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
    byte_42ACF7B = 1;
  }
  changeBgList = this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return changeBgList->fields._items->m_Items[0];
  else
    return 0LL;
}


int32_t __fastcall BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t actionIndex; // w21
  StageEntity_c *v4; // x0
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_42ACF9A & 1) == 0 )
  {
    sub_B52984(&StageEntity_TypeInfo);
    byte_42ACF9A = 1;
  }
  actionIndex = this->fields.actionIndex;
  v4 = StageEntity_TypeInfo;
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
    v4 = StageEntity_TypeInfo;
  }
  DEFAULT_ENEMY_ACTION_COUNT = v4->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  if ( actionIndex < DEFAULT_ENEMY_ACTION_COUNT )
    return this->fields.actionIndex + 1;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    return StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return DEFAULT_ENEMY_ACTION_COUNT;
}


BattleActionData_SideEffectData_array *__fastcall BattleActionData__getDamageAttackSideEffectList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ACF64 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
    byte_42ACF64 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v11.fields.current )
      sub_B52A5C(v7, v8);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v7,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v3,
      (BattleActionData_DamageData_o *)v11.fields.current,
      (System_Collections_Generic_List_BuffList_ACTION__o *)v11.fields.current[5].klass,
      v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v3 )
LABEL_11:
    sub_B52A5C(damagedatalist, v6);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
}


BattleActionData_DamageData_array *__fastcall BattleActionData__getDamageList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass164_0_o *v5; // x21
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *damagedatalist; // x0
  const MethodInfo *v7; // x1
  bool v8; // zf
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v9; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v10; // x20

  if ( (byte_42ACF62 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_B52984(&Method_System_Predicate_BattleActionData_DamageData___ctor__);
    sub_B52984(&System_Predicate_BattleActionData_DamageData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass164_0__getDamageList_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass164_0_TypeInfo);
    byte_42ACF62 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass164_0_o *)sub_B52A54(BattleActionData___c__DisplayClass164_0_TypeInfo);
  BattleActionData___c__DisplayClass164_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  v5->fields.funcIndex = funcIndex;
  damagedatalist = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)BattleActionData__get_damagedatalist(
                                                                                   this,
                                                                                   v7);
  v8 = funcIndex == -1;
  v9 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)damagedatalist;
  if ( v8 )
  {
    if ( damagedatalist )
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    damagedatalist,
                                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
LABEL_10:
    sub_B52A5C(damagedatalist, v7);
  }
  v10 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleActionData_DamageData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass164_0__getDamageList_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleActionData_DamageData___ctor__);
  if ( !v9 )
    goto LABEL_10;
  damagedatalist = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                   v9,
                                                                                   (System_Predicate_T__o *)v10,
                                                                                   (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_10;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                damagedatalist,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getDamageTargetIdList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ACF63 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_42ACF63 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  damagedatalist = BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    sub_B52A5C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields.current )
      sub_B52A5C(v7, v8);
    if ( !v3 )
      sub_B52A5C(v7, v8);
    System_Collections_Generic_HashSet_int___Add(
      v3,
      HIDWORD(v10.fields.current[1].monitor),
      (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__getEffect(BattleActionData_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int32_array *effectlist; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  effectlist = this->fields.effectlist;
  if ( !effectlist )
    return -1;
  max_length = effectlist->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  return effectlist->m_Items[index + 1];
}


System_String_o *__fastcall BattleActionData__getEndCamera(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.endcameraname;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__getFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleActionData_o *v4; // x20
  int32_t v5; // w21
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *funcTargetPlayerTypeList; // x20
  int32_t size; // w8
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42ACFAA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    this = (BattleActionData_o *)sub_B52984(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    byte_42ACFAA = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( (index & 0x80000000) != 0 )
  {
    this = (BattleActionData_o *)v4->fields.funcTargetPlayerTypeList;
    if ( this )
    {
      System_Collections_Generic_List_Voice_BATTLE___GetEnumerator(
        &v9,
        (System_Collections_Generic_List_Voice_BATTLE__o *)this,
        (const MethodInfo_305ADCC *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v5 = 0;
      while ( System_Collections_Generic_List_Enumerator_Voice_BATTLE___MoveNext(
                &v9,
                (const MethodInfo_200FCBC *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v5 |= LODWORD(v9.fields.current);
      System_Collections_Generic_List_Enumerator_Voice_BATTLE___Dispose(
        &v9,
        (const MethodInfo_200FCB8 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v5;
    }
LABEL_15:
    sub_B52A5C(this, *(_QWORD *)&index);
  }
  v5 = 0;
  funcTargetPlayerTypeList = v4->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_15;
  size = funcTargetPlayerTypeList->fields._size;
  if ( size > index )
  {
    if ( size <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    return funcTargetPlayerTypeList->fields._items->m_Items[index + 1];
  }
  return v5;
}


BattleActionData_HealData_array *__fastcall BattleActionData__getHealList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass183_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x22
  struct System_Collections_Generic_List_BattleActionData_HealData__o **p_healdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x19

  if ( (byte_42ACF6D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    sub_B52984(&Method_System_Predicate_BattleActionData_HealData___ctor__);
    sub_B52984(&System_Predicate_BattleActionData_HealData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass183_0__getHealList_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass183_0_TypeInfo);
    byte_42ACF6D = 1;
  }
  v5 = (BattleActionData___c__DisplayClass183_0_o *)sub_B52A54(BattleActionData___c__DisplayClass183_0_TypeInfo);
  BattleActionData___c__DisplayClass183_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.funcIndex = funcIndex;
  healdatalist = this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = &this->fields.healdatalist;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    *p_healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)v10;
    sub_B52920(p_healdatalist);
    funcIndex = v5->fields.funcIndex;
    healdatalist = *p_healdatalist;
  }
  if ( funcIndex == -1 )
  {
    if ( healdatalist )
    {
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
    }
LABEL_13:
    sub_B52A5C(All, v7);
  }
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleActionData_HealData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass183_0__getHealList_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleActionData_HealData___ctor__);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)healdatalist,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_Int32_array *DamageTargets; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  struct System_Int32_array *pttargetIds; // x22
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  __int64 v11; // x8
  System_Int32_array *v12; // x20
  unsigned __int64 v13; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v16; // x0

  if ( (byte_42ACF90 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42ACF90 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v3 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    v9 = *(_QWORD *)&pttargetIds->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      while ( v10 < (unsigned int)v9 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v3,
          pttargetIds->m_Items[v10 + 1],
          pttargetIds->m_Items[v10 + 1],
          (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(v9) = pttargetIds->max_length;
        if ( (__int64)++v10 >= (int)v9 )
          goto LABEL_9;
      }
LABEL_15:
      v16 = sub_B52A88(DamageTargets);
      sub_B52A28(v16, 0LL);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v6, v7);
  if ( !DamageTargets )
LABEL_16:
    sub_B52A5C(DamageTargets, v5);
  v11 = *(_QWORD *)&DamageTargets->max_length;
  v12 = DamageTargets;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)v11 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v3,
        v12->m_Items[v13 + 1],
        v12->m_Items[v13 + 1],
        (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v11) = v12->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_2EFF6AC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndex(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x21
  BattleActionData___c_c *v6; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__275_0; // x22
  Il2CppObject *v9; // x23
  struct BattleActionData___c_StaticFields *v10; // x0
  void *v11; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x20
  BattleActionData___c_c *v13; // x0
  struct BattleActionData___c_StaticFields *v14; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__275_1; // x21
  Il2CppObject *v16; // x22
  struct BattleActionData___c_StaticFields *v17; // x0
  struct BattleActionData___c_StaticFields *v18; // x8
  System_Comparison_int__o *_9__275_2; // x20
  Il2CppObject *v20; // x21
  struct BattleActionData___c_StaticFields *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_42ACF93 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_int___ctor__);
    sub_B52984(&System_Comparison_int__TypeInfo);
    sub_B52984(&Method_System_Converter_BattleActionData_HealData__int___ctor__);
    sub_B52984(&Method_System_Converter_BattleActionData_BuffData__int___ctor__);
    sub_B52984(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_B52984(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort___68512952);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndex_b__275_0__);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndex_b__275_1__);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndex_b__275_2__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF93 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v6 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__275_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__275_0;
    if ( !_9__275_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__275_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__275_0,
        v9,
        Method_BattleActionData___c__getListFunctionIndex_b__275_0__,
        (const MethodInfo_23DE474 *)Method_System_Converter_BattleActionData_BuffData__int___ctor__);
      v10 = BattleActionData___c_TypeInfo->static_fields;
      v10->__9__275_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__275_0;
      sub_B52920(&v10->__9__275_0);
    }
    v11 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
            (System_Collections_Generic_List_BattleActionData_HealData__o *)buffdatalist,
            (System_Converter_T__TOutput__o *)_9__275_0,
            (const MethodInfo_191393C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v3 )
      goto LABEL_35;
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v11,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v13 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v13 = BattleActionData___c_TypeInfo;
    }
    v14 = v13->static_fields;
    _9__275_1 = v14->__9__275_1;
    if ( !_9__275_1 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v14 = BattleActionData___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)v14->__9;
      _9__275_1 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__275_1,
        v16,
        Method_BattleActionData___c__getListFunctionIndex_b__275_1__,
        (const MethodInfo_23DE474 *)Method_System_Converter_BattleActionData_HealData__int___ctor__);
      v17 = BattleActionData___c_TypeInfo->static_fields;
      v17->__9__275_1 = _9__275_1;
      sub_B52920(&v17->__9__275_1);
    }
    v11 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
            healdatalist,
            (System_Converter_T__TOutput__o *)_9__275_1,
            (const MethodInfo_191393C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( v3 )
    {
      System_Collections_Generic_List_int___AddRange(
        v3,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_25;
    }
LABEL_35:
    sub_B52A5C(v11, v4);
  }
LABEL_25:
  v11 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v11 = BattleActionData___c_TypeInfo;
  }
  v18 = (struct BattleActionData___c_StaticFields *)*((_QWORD *)v11 + 23);
  _9__275_2 = v18->__9__275_2;
  if ( !_9__275_2 )
  {
    if ( (*((_BYTE *)v11 + 307) & 4) != 0 && !*((_DWORD *)v11 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v18 = BattleActionData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__275_2 = (System_Comparison_int__o *)sub_B52A54(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__275_2,
      v20,
      Method_BattleActionData___c__getListFunctionIndex_b__275_2__,
      (const MethodInfo_2481A3C *)Method_System_Comparison_int___ctor__);
    v21 = BattleActionData___c_TypeInfo->static_fields;
    v21->__9__275_2 = _9__275_2;
    sub_B52920(&v21->__9__275_2);
  }
  if ( !v3 )
    goto LABEL_35;
  System_Collections_Generic_List_int___Sort_50696268(
    v3,
    (System_Comparison_T__o *)_9__275_2,
    (const MethodInfo_305904C *)Method_System_Collections_Generic_List_int__Sort___68512952);
  v22 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v22,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndexEx(
        BattleActionData_o *this,
        int32_t *displayFuncNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x22
  BattleActionData___c_c *v8; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__276_0; // x23
  Il2CppObject *v11; // x24
  struct BattleActionData___c_StaticFields *v12; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x22
  BattleActionData___c_c *v16; // x0
  struct BattleActionData___c_StaticFields *v17; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__276_1; // x23
  Il2CppObject *v19; // x24
  struct BattleActionData___c_StaticFields *v20; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v21; // x22
  BattleActionData___c_c *v22; // x8
  struct BattleActionData___c_StaticFields *v23; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__276_2; // x23
  Il2CppObject *v25; // x24
  struct BattleActionData___c_StaticFields *v26; // x0
  const MethodInfo *v27; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  BattleActionData___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  struct BattleActionData___c_StaticFields *v31; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__276_3; // x22
  Il2CppObject *v33; // x23
  struct BattleActionData___c_StaticFields *v34; // x0
  int32_t v35; // w21
  struct BattleActionData___c_StaticFields *v36; // x8
  System_Comparison_int__o *_9__276_4; // x22
  Il2CppObject *v38; // x23
  struct BattleActionData___c_StaticFields *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_42ACF94 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_int___ctor__);
    sub_B52984(&System_Comparison_int__TypeInfo);
    sub_B52984(&Method_System_Converter_BattleActionData_HealData__int___ctor__);
    sub_B52984(&Method_System_Converter_BattleActionData_BuffData__int___ctor__);
    sub_B52984(&Method_System_Converter_BattleActionData_DamageData__int___ctor__);
    sub_B52984(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_B52984(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_B52984(&System_Converter_BattleActionData_DamageData__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_BattleActionData_DamageData__int___ctor__);
    sub_B52984(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort___68512952);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_0__);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_1__);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_2__);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_3__);
    sub_B52984(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_4__);
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42ACF94 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v8 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v8 = BattleActionData___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__276_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__276_0;
    if ( !_9__276_0 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__276_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__276_0,
        v11,
        Method_BattleActionData___c__getListFunctionIndexEx_b__276_0__,
        (const MethodInfo_23DE474 *)Method_System_Converter_BattleActionData_BuffData__int___ctor__);
      v12 = BattleActionData___c_TypeInfo->static_fields;
      v12->__9__276_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__276_0;
      sub_B52920(&v12->__9__276_0);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                     (System_Collections_Generic_List_BattleActionData_HealData__o *)buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__276_0,
                                     (const MethodInfo_191393C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v5 )
      goto LABEL_57;
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v16 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v16 = BattleActionData___c_TypeInfo;
    }
    v17 = v16->static_fields;
    _9__276_1 = v17->__9__276_1;
    if ( !_9__276_1 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v17 = BattleActionData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)v17->__9;
      _9__276_1 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__276_1,
        v19,
        Method_BattleActionData___c__getListFunctionIndexEx_b__276_1__,
        (const MethodInfo_23DE474 *)Method_System_Converter_BattleActionData_HealData__int___ctor__);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__276_1 = _9__276_1;
      sub_B52920(&v20->__9__276_1);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__276_1,
                                     (const MethodInfo_191393C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v5 )
      goto LABEL_57;
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v6) )
  {
    v35 = 0;
    goto LABEL_46;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v14);
  v21 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
  v22 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v22 = BattleActionData___c_TypeInfo;
  }
  v23 = v22->static_fields;
  _9__276_2 = (System_Converter_BattleActionData_HealData__int__o *)v23->__9__276_2;
  if ( !_9__276_2 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v23 = BattleActionData___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__276_2 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__276_2,
      v25,
      Method_BattleActionData___c__getListFunctionIndexEx_b__276_2__,
      (const MethodInfo_23DE474 *)Method_System_Converter_BattleActionData_DamageData__int___ctor__);
    v26 = BattleActionData___c_TypeInfo->static_fields;
    v26->__9__276_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__276_2;
    sub_B52920(&v26->__9__276_2);
  }
  if ( !v21
    || (result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                         v21,
                                         (System_Converter_T__TOutput__o *)_9__276_2,
                                         (const MethodInfo_191393C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___),
        !v5) )
  {
LABEL_57:
    sub_B52A5C(result, v14);
  }
  System_Collections_Generic_List_int___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v27);
  v29 = BattleActionData___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v29 = BattleActionData___c_TypeInfo;
  }
  v31 = v29->static_fields;
  _9__276_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v31->__9__276_3;
  if ( !_9__276_3 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v31 = BattleActionData___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)v31->__9;
    _9__276_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleActionData_DamageData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__276_3,
      v33,
      Method_BattleActionData___c__getListFunctionIndexEx_b__276_3__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
    v34 = BattleActionData___c_TypeInfo->static_fields;
    v34->__9__276_3 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__276_3;
    sub_B52920(&v34->__9__276_3);
  }
  v35 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
          v30,
          (System_Func_TSource__int__o *)_9__276_3,
          (const MethodInfo_1B6DB18 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_46:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v36 = *(struct BattleActionData___c_StaticFields **)&result->m_Items[39];
  _9__276_4 = v36->__9__276_4;
  if ( !_9__276_4 )
  {
    if ( (result->m_Items[69] & 0x4000000) != 0 && !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      v36 = BattleActionData___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__276_4 = (System_Comparison_int__o *)sub_B52A54(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__276_4,
      v38,
      Method_BattleActionData___c__getListFunctionIndexEx_b__276_4__,
      (const MethodInfo_2481A3C *)Method_System_Comparison_int___ctor__);
    v39 = BattleActionData___c_TypeInfo->static_fields;
    v39->__9__276_4 = _9__276_4;
    sub_B52920(&v39->__9__276_4);
  }
  if ( !v5 )
    goto LABEL_57;
  System_Collections_Generic_List_int___Sort_50696268(
    v5,
    (System_Comparison_T__o *)_9__276_4,
    (const MethodInfo_305904C *)Method_System_Collections_Generic_List_int__Sort___68512952);
  v40 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v40,
             (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_57;
  *displayFuncNum = v35 + result->max_length;
  return result;
}


int32_t __fastcall BattleActionData__getPTSubTargetId(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *pttargetIds; // x8

  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds && (int)pttargetIds->max_length >= 2 )
    return pttargetIds->m_Items[2];
  else
    return 0;
}


int32_t __fastcall BattleActionData__getPTTargetId(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *pttargetIds; // x8

  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds && (int)pttargetIds->max_length >= 1 )
    return pttargetIds->m_Items[1];
  else
    return 0;
}


BattleActionData_ReplaceMember_array *__fastcall BattleActionData__getReplaceMember(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass188_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *replacememberlist; // x22
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o **p_replacememberlist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x19

  if ( (byte_42ACF70 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    sub_B52984(&Method_System_Predicate_BattleActionData_ReplaceMember___ctor__);
    sub_B52984(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass188_0__getReplaceMember_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass188_0_TypeInfo);
    byte_42ACF70 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass188_0_o *)sub_B52A54(BattleActionData___c__DisplayClass188_0_TypeInfo);
  BattleActionData___c__DisplayClass188_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.funcIndex = funcIndex;
  replacememberlist = this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = &this->fields.replacememberlist;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    *p_replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)v10;
    sub_B52920(p_replacememberlist);
    funcIndex = v5->fields.funcIndex;
    replacememberlist = *p_replacememberlist;
  }
  if ( funcIndex == -1 )
  {
    if ( replacememberlist )
    {
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
    }
LABEL_13:
    sub_B52A5C(All, v7);
  }
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass188_0__getReplaceMember_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleActionData_ReplaceMember___ctor__);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)replacememberlist,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                   (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
}


BattleActionData_ShiftServant_o *__fastcall BattleActionData__getShiftServant(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *shiftServantList; // x8

  if ( (byte_42ACF79 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
    byte_42ACF79 = 1;
  }
  shiftServantList = this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return shiftServantList->fields._items->m_Items[0];
  else
    return 0LL;
}


BattleActionData_array *__fastcall BattleActionData__getSideEffectList(
        BattleActionData_o *this,
        int32_t actType,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass291_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42ACF9C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData__ToArray__);
    sub_B52984(&Method_System_Predicate_BattleActionData___ctor__);
    sub_B52984(&System_Predicate_BattleActionData__TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass291_0__getSideEffectList_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass291_0_TypeInfo);
    byte_42ACF9C = 1;
  }
  v5 = (BattleActionData___c__DisplayClass291_0_o *)sub_B52A54(BattleActionData___c__DisplayClass291_0_TypeInfo);
  BattleActionData___c__DisplayClass291_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.actType = actType,
        sideEffectList = this->fields.sideEffectList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass291_0__getSideEffectList_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleActionData___ctor__),
        !sideEffectList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)sideEffectList,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0LL )
  {
    sub_B52A5C(All, v7);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
}


bool __fastcall BattleActionData__getSkillCutInCamField(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LOBYTE(skillInfo) = BattleSkillInfoData__getSkillCutInCamField(skillInfo, 0LL);
  return (char)skillInfo;
}


bool __fastcall BattleActionData__getSkillCutInCamPlayerAll(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LOBYTE(skillInfo) = BattleSkillInfoData__getSkillCutInCamPlayerAll(skillInfo, 0LL);
  return (char)skillInfo;
}


int32_t __fastcall BattleActionData__getSkillCutInId(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LODWORD(skillInfo) = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._7_getCutInId.method)(
                           skillInfo,
                           skillInfo->klass->vtable._8_PreLoad.methodPtr);
  return (int)skillInfo;
}


int32_t __fastcall BattleActionData__getSkillCutInMessageMode(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LODWORD(skillInfo) = BattleSkillInfoData__getSkillCutInMessageMode(skillInfo, 0LL);
  return (int)skillInfo;
}


System_String_array *__fastcall BattleActionData__getSkillCutInPrefabInfo(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_String_array *result; // x0

  result = (System_String_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInPrefabInfo((BattleSkillInfoData_o *)result, 0LL);
  return result;
}


UnityEngine_Vector3_array *__fastcall BattleActionData__getSkillCutInPrefabOffsets(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_array *result; // x0

  result = (UnityEngine_Vector3_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInPrefabOffsets((BattleSkillInfoData_o *)result, 0LL);
  return result;
}


UnityEngine_Vector3_array *__fastcall BattleActionData__getSkillCutInPrefabSizes(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_array *result; // x0

  result = (UnityEngine_Vector3_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInPrefabSizes((BattleSkillInfoData_o *)result, 0LL);
  return result;
}


System_String_array *__fastcall BattleActionData__getSkillCutInVoices(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_String_array *result; // x0

  result = (System_String_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInVoices((BattleSkillInfoData_o *)result, 0LL);
  return result;
}


BattleActionData_SummonServant_array *__fastcall BattleActionData__getSummonServant(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass201_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x19

  if ( (byte_42ACF76 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
    sub_B52984(&Method_System_Predicate_BattleActionData_SummonServant___ctor__);
    sub_B52984(&System_Predicate_BattleActionData_SummonServant__TypeInfo);
    sub_B52984(&BattleActionData_SummonServant___TypeInfo);
    sub_B52984(&Method_BattleActionData___c__DisplayClass201_0__getSummonServant_b__0__);
    sub_B52984(&BattleActionData___c__DisplayClass201_0_TypeInfo);
    byte_42ACF76 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass201_0_o *)sub_B52A54(BattleActionData___c__DisplayClass201_0_TypeInfo);
  BattleActionData___c__DisplayClass201_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  v5->fields.funcIndex = funcIndex;
  summonServantList = this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_B5299C(BattleActionData_SummonServant___TypeInfo, 0LL);
  if ( funcIndex != -1 )
  {
    v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BattleActionData_SummonServant__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass201_0__getSummonServant_b__0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_BattleActionData_SummonServant___ctor__);
    All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
            (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)summonServantList,
            (System_Predicate_T__o *)v9,
            (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_B52A5C(All, v7);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                   (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getTargetIds(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  int32_t v4; // w1
  const MethodInfo *v5; // x2
  _QWORD *DamageTargets; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  _QWORD *v10; // x21
  unsigned __int64 v11; // x22
  __int64 v12; // x8
  _QWORD *v13; // x20
  unsigned __int64 v14; // x21
  __int64 v15; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v18; // x0

  if ( (byte_42ACF91 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42ACF91 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  DamageTargets = BattleActionData__GetDamageTargets(this, v4, v5);
  if ( !DamageTargets )
    goto LABEL_20;
  v9 = DamageTargets[3];
  v10 = DamageTargets;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( v11 < (unsigned int)v9 )
    {
      if ( !v3 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v3,
        *((_DWORD *)v10 + v11 + 8),
        *((_DWORD *)v10 + v11 + 8),
        (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v9) = *((_DWORD *)v10 + 6);
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_9;
    }
LABEL_19:
    v18 = sub_B52A88(DamageTargets);
    sub_B52A28(v18, 0LL);
  }
LABEL_9:
  DamageTargets = BattleActionData__getBuffList(this, -1, v8);
  if ( !DamageTargets )
    goto LABEL_20;
  v12 = DamageTargets[3];
  v13 = DamageTargets;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = v13[v14 + 4];
      if ( v15 )
      {
        if ( !v3 )
          goto LABEL_20;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v3,
          *(_DWORD *)(v15 + 40),
          *(_DWORD *)(v15 + 40),
          (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      LODWORD(v12) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_17;
    }
    goto LABEL_19;
  }
LABEL_17:
  if ( !v3 )
LABEL_20:
    sub_B52A5C(DamageTargets, v7);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_2EFF6AC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  __int64 v4; // x1
  int32_t v5; // w19
  Il2CppClass *klass; // x11
  unsigned __int64 namespaze; // x9
  unsigned __int64 v8; // x8
  Il2CppType *p_byval_arg; // x11
  int v10; // w12
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ACF66 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_42ACF66 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  damagedatalist = BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v5 = 0;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v11 )
      break;
    if ( !v15.fields.current )
      sub_B52A5C(v11, v12);
    klass = v15.fields.current[6].klass;
    if ( klass && (int)klass->_1.namespaze >= 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      v8 = 0LL;
      p_byval_arg = &klass->_1.byval_arg;
      do
      {
        if ( v8 >= namespaze )
        {
          v14 = sub_B52A88(v11);
          sub_B52A28(v14, 0LL);
        }
        v10 = *((_DWORD *)&p_byval_arg->data + v8++);
        v5 += v10;
      }
      while ( (__int64)v8 < (int)namespaze );
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v5;
}


BattleActionData_AfterChangeField_o *__fastcall BattleActionData__get_ChangeField(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeField_k__BackingField;
}


System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *__fastcall BattleActionData__get_DispMsgList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispMsgList_k__BackingField;
}


bool __fastcall BattleActionData__get_ExistUpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
            method);
}


int32_t __fastcall BattleActionData__get_FirstAtkMainTargetId(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._FirstAtkMainTargetId_k__BackingField;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleActionData__get_HpDecreaseFuncTargetHash(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._HpDecreaseFuncTargetHash_k__BackingField;
}


System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *__fastcall BattleActionData__get_IntervalBuffDict(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._IntervalBuffDict_k__BackingField;
}


bool __fastcall BattleActionData__get_IsFuncTargetAllDead(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsFuncTargetAllDead_k__BackingField;
}


bool __fastcall BattleActionData__get_IsNotSkillSkip(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsNotSkillSkip_k__BackingField;
}


int32_t __fastcall BattleActionData__get_MessageType(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._MessageType_k__BackingField;
}


bool __fastcall BattleActionData__get_NoOperation(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.noOperation;
}


int32_t __fastcall BattleActionData__get_NotShiftUpdateFlag(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleActionData_BaseShiftGaugeData_o *ShiftGauge_k__BackingField; // x8

  ShiftGauge_k__BackingField = this->fields._ShiftGauge_k__BackingField;
  if ( ShiftGauge_k__BackingField )
    return ShiftGauge_k__BackingField->fields._NotShiftUpdateState_k__BackingField;
  else
    return 0;
}


BattleActionData_BaseShiftGaugeData_o *__fastcall BattleActionData__get_ShiftGauge(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ShiftGauge_k__BackingField;
}


BattleActionWaitCond_Base_o *__fastcall BattleActionData__get_WaitCond(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._WaitCond_k__BackingField;
}


System_Collections_Generic_List_BattleActionData_DamageData__o *__fastcall BattleActionData__get_damagedatalist(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleActionData_DamageData__o *result; // x0
  System_Collections_Generic_List_BattleActionData_DamageData__o **p_damagedatalist; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_42ACF60 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    byte_42ACF60 = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = &this->fields._damagedatalist;
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    *p_damagedatalist = (System_Collections_Generic_List_BattleActionData_DamageData__o *)v5;
    sub_B52920(p_damagedatalist);
    return *p_damagedatalist;
  }
  return result;
}


void __fastcall BattleActionData__initFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t length,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_42ACFA8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
    byte_42ACFA8 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Target_PlayerTypeFlag_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_1B66A30 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Target_PlayerTypeFlag_(v5, (const MethodInfo_1B713B4 *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  sub_B52920(&this->fields.funcTargetPlayerTypeList);
}


bool __fastcall BattleActionData__isActors(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 0;
}


bool __fastcall BattleActionData__isArtsOrderAttack(BattleActionData_o *this, const MethodInfo *method)
{
  _BOOL4 flash; // w8

  flash = this->fields.flash;
  return flash & BattleCommand__isARTS(this->fields.type, 0LL);
}


bool __fastcall BattleActionData__isBoostSkill(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w19
  BattleActionData_c *v4; // x0

  if ( (byte_42ACF4E & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF4E = 1;
  }
  type = this->fields.type;
  v4 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v4 = BattleActionData_TypeInfo;
  }
  return type == v4->static_fields->TYPE_BOOSTSKILL;
}


bool __fastcall BattleActionData__isCommandAttack(BattleActionData_o *this, const MethodInfo *method)
{
  return BattleCommand__isARTS(this->fields.type, 0LL)
      || BattleCommand__isQUICK(this->fields.type, 0LL)
      || BattleCommand__isBUSTER(this->fields.type, 0LL)
      || BattleCommand__isADDATTACK(this->fields.type, 0LL);
}


bool __fastcall BattleActionData__isCommonEnemyAttack(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w8

  type = this->fields.type;
  return type == 10 || type == 11;
}


bool __fastcall BattleActionData__isDeadMotion(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w19
  BattleActionData_c *v4; // x0

  if ( (byte_42ACF4B & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF4B = 1;
  }
  type = this->fields.type;
  v4 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v4 = BattleActionData_TypeInfo;
  }
  return type == v4->static_fields->TYPE_DEAD;
}


bool __fastcall BattleActionData__isEndCamera(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.endcameraname != 0LL;
}


bool __fastcall BattleActionData__isEnemyMaster(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 4;
}


bool __fastcall BattleActionData__isField(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


bool __fastcall BattleActionData__isGrandArtsOrderAttack(BattleActionData_o *this, const MethodInfo *method)
{
  _BOOL4 flash; // w8

  flash = this->fields.flash;
  return flash & BattleCommand__isARTS(this->fields.type, 0LL) & this->fields.three;
}


bool __fastcall BattleActionData__isLoadImmediateEntryServant(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 5;
}


bool __fastcall BattleActionData__isMotion(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 3;
}


bool __fastcall BattleActionData__isReflectedAttackSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v7; // 0:x1.8

  if ( (byte_42ACFA1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
    byte_42ACFA1 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(0LL, pairAttackAndTarget);
  v7 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v7,
           (const MethodInfo_22A24F4 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_42ACF9F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42ACF9F = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_B52A5C(0LL, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w19
  BattleActionData_c *v4; // x0

  if ( (byte_42ACF4C & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF4C = 1;
  }
  type = this->fields.type;
  v4 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v4 = BattleActionData_TypeInfo;
  }
  return type == v4->static_fields->TYPE_RESURRECTION;
}


bool __fastcall BattleActionData__isSkill(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w19
  BattleActionData_c *v4; // x0

  if ( (byte_42ACF4D & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF4D = 1;
  }
  type = this->fields.type;
  v4 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v4 = BattleActionData_TypeInfo;
  }
  return type == v4->static_fields->TYPE_SKILL;
}


bool __fastcall BattleActionData__isSkillCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  return skillInfo
      && ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._7_getCutInId.method)(
           skillInfo,
           skillInfo->klass->vtable._8_PreLoad.methodPtr) >= 1
      && (this->fields.state | 2) == 2;
}


bool __fastcall BattleActionData__isSystem(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 1;
}


bool __fastcall BattleActionData__isTypeEnemyCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF89 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF89 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeEnemySpellCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF8A & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF8A = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_SPELL_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeMasterCommandSpell(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w19
  BattleActionData_c *v4; // x0

  if ( (byte_42ACF88 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF88 = 1;
  }
  type = this->fields.type;
  v4 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v4 = BattleActionData_TypeInfo;
  }
  return type == v4->static_fields->TYPE_COMMAND_SPELL;
}


bool __fastcall BattleActionData__isTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF84 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF84 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERARTS == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF85 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF85 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERBUSTER == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF86 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF86 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERQUICK == this->fields.type;
}


bool __fastcall BattleActionData__isTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF80 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF80 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_TW == this->fields.type;
}


void __fastcall BattleActionData__reflectServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  int size; // w8
  unsigned int i; // w23
  BattleActionData_ServantLogicResultData_o *v10; // x8
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v11; // x22
  BattleServantData_o *v12; // x21
  BattleActionData_ServantLogicResultData_o *v13; // x8
  int32_t hp; // w22

  if ( (byte_42ACFA6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_42ACFA6 = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_22:
    sub_B52A5C(ServantData, v6);
  size = servantLogicResultList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; (int)i < size; ++i )
    {
      if ( size <= i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v10 = servantLogicResultList->fields._items->m_Items[i];
      if ( !v10 || !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v10->fields.uniqueId, 0LL);
      if ( ServantData )
      {
        v11 = this->fields.servantLogicResultList;
        if ( !v11 )
          goto LABEL_22;
        v12 = ServantData;
        if ( v11->fields._size <= i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v13 = v11->fields._items->m_Items[i];
        if ( !v13 )
          goto LABEL_22;
        hp = v13->fields.hp;
        if ( hp != -1 )
        {
          ServantData = (BattleServantData_o *)BattleServantData__getNowHp(ServantData, 0LL);
          if ( (_DWORD)ServantData != hp )
          {
            BattleServantData__setHp(v12, hp, 0, 0LL);
            BattleServantData__updateHp(v12, 0LL);
          }
        }
      }
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_22;
      size = servantLogicResultList->fields._size;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantLogicResultList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
  }
}


void __fastcall BattleActionData__saveServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleActionData_o *v4; // x20
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  __int64 v6; // x22
  int size; // w8
  unsigned int v8; // w23
  __int64 v9; // x8
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v10; // x24
  __int64 v11; // x23

  v4 = this;
  if ( (byte_42ACFA5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    this = (BattleActionData_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_42ACFA5 = 1;
  }
  servantLogicResultList = v4->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_17:
    sub_B52A5C(this, data);
  v6 = 4LL;
  while ( 1 )
  {
    size = servantLogicResultList->fields._size;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= size )
      break;
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v9 = *((_QWORD *)&servantLogicResultList->fields._items->obj.klass + v6);
    if ( !v9 || !data )
      goto LABEL_17;
    this = (BattleActionData_o *)BattleData__getServantData(data, *(_DWORD *)(v9 + 16), 0LL);
    if ( this )
    {
      v10 = v4->fields.servantLogicResultList;
      if ( !v10 )
        goto LABEL_17;
      if ( v10->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v11 = *((_QWORD *)&v10->fields._items->obj.klass + v6);
      this = (BattleActionData_o *)(*(__int64 (__fastcall **)(BattleActionData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                     this,
                                     this->klass[1]._1.element_class);
      if ( !v11 )
        goto LABEL_17;
      *(_DWORD *)(v11 + 20) = (_DWORD)this;
    }
    servantLogicResultList = v4->fields.servantLogicResultList;
    ++v6;
    if ( !servantLogicResultList )
      goto LABEL_17;
  }
}


void __fastcall BattleActionData__servantLogicResultClear(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *servantLogicResultList; // x0

  if ( (byte_42ACFA7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    byte_42ACFA7 = 1;
  }
  servantLogicResultList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_B52A5C(0LL, method);
  if ( servantLogicResultList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      servantLogicResultList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
}


void __fastcall BattleActionData__setBuffData(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  if ( vals )
  {
    if ( !data )
      sub_B52A5C(this, 0LL);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    if ( DataVals__isParam(vals, 34, 0LL) )
      data->fields.statusEffectId = DataVals__GetParam(vals, 34, 0, 0LL);
  }
  BattleActionData__AddBuffList(this, data, (const MethodInfo *)vals);
}


void __fastcall BattleActionData__setChangeBg(
        BattleActionData_o *this,
        int32_t inbgNo,
        int32_t inTp,
        int32_t priority,
        const MethodInfo *method)
{
  BattleActionData_ChangeBg_o *v9; // x20
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *changeBgList; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o **p_changeBgList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21

  if ( (byte_42ACF7A & 1) == 0 )
  {
    sub_B52984(&BattleActionData_ChangeBg_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    byte_42ACF7A = 1;
  }
  v9 = (BattleActionData_ChangeBg_o *)sub_B52A54(BattleActionData_ChangeBg_TypeInfo);
  BattleActionData_ChangeBg___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  v9->fields.bgNo = inbgNo;
  v9->fields.bgTp = inTp;
  v9->fields.priority = priority;
  changeBgList = this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = &this->fields.changeBgList;
    v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v13,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    *p_changeBgList = (struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *)v13;
    sub_B52920(p_changeBgList);
    changeBgList = *p_changeBgList;
    if ( !*p_changeBgList )
LABEL_7:
      sub_B52A5C(changeBgList, v11);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)changeBgList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__);
}


void __fastcall BattleActionData__setCommand(
        BattleActionData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  if ( command )
  {
    this->fields.flash = command->fields.flash;
    this->fields.three = BattleCommandData__isThree(command, 0LL);
    this->fields.pair = BattleCommandData__isPair(command, 0LL);
    this->fields.chainCount = command->fields.chainCount;
    this->fields.commandattack = command->fields.actionIndex;
    this->fields.treasureDvcId = command->fields.treasureDvc;
    this->fields.commandType = BattleCommandData__get_type(command, 0LL);
  }
}


void __fastcall BattleActionData__setDamageData(
        BattleActionData_o *this,
        BattleActionData_DamageData_o *data,
        DataVals_o *vals,
        bool isIndiviAtk,
        bool isRarityAtk,
        const MethodInfo *method)
{
  BattleActionData_o *v10; // x20

  v10 = this;
  if ( (byte_42ACF61 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    byte_42ACF61 = 1;
  }
  if ( vals )
  {
    if ( isIndiviAtk )
    {
      if ( !data )
        goto LABEL_18;
      if ( !data->fields.isNobleIndividualAtk )
        goto LABEL_14;
    }
    else if ( isRarityAtk )
    {
      if ( !data )
        goto LABEL_18;
      if ( !data->fields.isNobleRareAtk )
        goto LABEL_14;
    }
    else if ( !data )
    {
      goto LABEL_18;
    }
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
LABEL_14:
    if ( Target__isAllTargets(vals->fields.targetType, 0LL) )
      v10->fields.isAllAttack = 1;
  }
  this = (BattleActionData_o *)BattleActionData__get_damagedatalist(v10, (const MethodInfo *)data);
  if ( !this )
LABEL_18:
    sub_B52A5C(this, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
}


void __fastcall BattleActionData__setEffect(
        BattleActionData_o *this,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  this->fields.effectlist = effectList;
  sub_B52920(&this->fields.effectlist);
}


void __fastcall BattleActionData__setEndCamera(
        BattleActionData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  this->fields.endcameraname = name;
  sub_B52920(&this->fields.endcameraname);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t index,
        bool isTargetEnemy,
        const MethodInfo *method)
{
  BattleActionData_o *v6; // x20
  int v7; // w21
  System_Collections_Generic_List_Target_PlayerTypeFlag__o *funcTargetPlayerTypeList; // x20
  int32_t size; // w8

  v6 = this;
  if ( (byte_42ACFA9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    this = (BattleActionData_o *)sub_B52984(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
    byte_42ACFA9 = 1;
  }
  if ( isTargetEnemy )
    v7 = 2;
  else
    v7 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_B52A5C(this, *(_QWORD *)&index);
    size = funcTargetPlayerTypeList->fields._size;
    if ( size > index )
    {
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      System_Collections_Generic_List_Target_PlayerTypeFlag___set_Item(
        funcTargetPlayerTypeList,
        index,
        funcTargetPlayerTypeList->fields._items->m_Items[index + 1] | v7,
        (const MethodInfo_3059C48 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
    }
  }
}


BattleActionData_HealData_o *__fastcall BattleActionData__setHealData(
        BattleActionData_o *this,
        int32_t targetId,
        int32_t healPoint,
        int32_t funcIndex,
        int32_t bufId,
        DataVals_o *vals,
        bool isCommandAfter,
        const MethodInfo *method)
{
  BattleActionData_HealData_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  bool isShowForcedEffect; // w8

  if ( (byte_42ACF6B & 1) == 0 )
  {
    sub_B52984(&BattleActionData_HealData_TypeInfo);
    byte_42ACF6B = 1;
  }
  v15 = (BattleActionData_HealData_o *)sub_B52A54(BattleActionData_HealData_TypeInfo);
  BattleActionData_HealData___ctor(v15, 0LL);
  if ( !v15 )
    sub_B52A5C(v16, v17);
  v15->fields.targetId = targetId;
  v15->fields.healPoint = healPoint;
  v15->fields.functionIndex = funcIndex;
  v15->fields.buffId = bufId;
  v15->fields.isCommandAfter = isCommandAfter;
  if ( vals )
    isShowForcedEffect = vals->fields.isShowForcedEffect;
  else
    isShowForcedEffect = 0;
  v15->fields.isShowForcedHeal = isShowForcedEffect;
  BattleActionData__setHealData_19372672(this, v15, vals, v18);
  return v15;
}


void __fastcall BattleActionData__setHealData_19372672(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  if ( vals )
  {
    if ( !data )
      sub_B52A5C(this, 0LL);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    data->fields.popValueText = DataVals__GetStrParam(vals, 118, 0LL, 0LL);
    sub_B52920(&data->fields.popValueText);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


void __fastcall BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x0

  if ( (byte_42ACF4F & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42ACF4F = 1;
  }
  v5 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B52A5C(0LL, v6);
  if ( !v5->max_length )
  {
    v7 = sub_B52A88(v5);
    sub_B52A28(v7, 0LL);
  }
  v5->m_Items[1] = pttargetId;
  this->fields.pttargetIds = v5;
  sub_B52920(&this->fields.pttargetIds);
}


void __fastcall BattleActionData__setPTTargetId_19359920(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  this->fields.pttargetIds = pttargetIds;
  sub_B52920(&this->fields.pttargetIds);
}


void __fastcall BattleActionData__setReplaceMember(
        BattleActionData_o *this,
        int32_t index,
        int32_t inUniqueId,
        int32_t outUniqueId,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData_ReplaceMember_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ACF6E & 1) == 0 )
  {
    sub_B52984(&BattleActionData_ReplaceMember_TypeInfo);
    byte_42ACF6E = 1;
  }
  v11 = (BattleActionData_ReplaceMember_o *)sub_B52A54(BattleActionData_ReplaceMember_TypeInfo);
  BattleActionData_ReplaceMember___ctor(v11, 0LL);
  if ( !v11 )
    sub_B52A5C(v12, v13);
  v11->fields.outUniqeId = outUniqueId;
  v11->fields.inUniqeId = inUniqueId;
  v11->fields.index = index;
  v11->fields.functionIndex = funcIndex;
  BattleActionData__setReplaceMember_19373120(this, v11, v14);
}


void __fastcall BattleActionData__setReplaceMember_19373120(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *replacememberlist; // x0
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o **p_replacememberlist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  __int64 v8; // x1

  if ( (byte_42ACF6F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    byte_42ACF6F = 1;
  }
  replacememberlist = this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = &this->fields.replacememberlist;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    *p_replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)v7;
    sub_B52920(p_replacememberlist);
    replacememberlist = *p_replacememberlist;
    if ( !*p_replacememberlist )
      sub_B52A5C(0LL, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replacememberlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__);
}


void __fastcall BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *shiftServantList; // x0
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o **p_shiftServantList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  __int64 v8; // x1

  if ( (byte_42ACF78 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    byte_42ACF78 = 1;
  }
  shiftServantList = this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = &this->fields.shiftServantList;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    *p_shiftServantList = (struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *)v7;
    sub_B52920(p_shiftServantList);
    shiftServantList = *p_shiftServantList;
    if ( !*p_shiftServantList )
      sub_B52A5C(0LL, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)shiftServantList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__);
}


void __fastcall BattleActionData__setStateActors(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall BattleActionData__setStateField(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall BattleActionData__setStateMotion(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
}


void __fastcall BattleActionData__setStateSystem(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall BattleActionData__setSummonServant(
        BattleActionData_o *this,
        int32_t uniqueId,
        int32_t unloadUniqueId,
        int32_t funcIndex,
        bool isEffect,
        int32_t callSvtEffectId,
        const MethodInfo *method)
{
  BattleActionData_SummonServant_o *v13; // x20
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x0
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o **p_summonServantList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  __int64 v17; // x1

  if ( (byte_42ACF75 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    sub_B52984(&BattleActionData_SummonServant_TypeInfo);
    byte_42ACF75 = 1;
  }
  v13 = (BattleActionData_SummonServant_o *)sub_B52A54(BattleActionData_SummonServant_TypeInfo);
  BattleActionData_SummonServant___ctor(v13, uniqueId, unloadUniqueId, funcIndex, isEffect, callSvtEffectId, 0LL);
  summonServantList = this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = &this->fields.summonServantList;
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    *p_summonServantList = (struct System_Collections_Generic_List_BattleActionData_SummonServant__o *)v16;
    sub_B52920(p_summonServantList);
    summonServantList = *p_summonServantList;
    if ( !*p_summonServantList )
      sub_B52A5C(0LL, v17);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)summonServantList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__);
}


void __fastcall BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF81 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF81 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERARTS;
}


void __fastcall BattleActionData__setTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF82 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF82 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERBUSTER;
}


void __fastcall BattleActionData__setTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF83 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF83 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERQUICK;
}


void __fastcall BattleActionData__setTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42ACF7F & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42ACF7F = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_TW;
}


void __fastcall BattleActionData__set_ChangeField(
        BattleActionData_o *this,
        BattleActionData_AfterChangeField_o *value,
        const MethodInfo *method)
{
  this->fields._ChangeField_k__BackingField = value;
  sub_B52920(&this->fields._ChangeField_k__BackingField);
}


void __fastcall BattleActionData__set_DispMsgList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *value,
        const MethodInfo *method)
{
  this->fields._DispMsgList_k__BackingField = value;
  sub_B52920(&this->fields._DispMsgList_k__BackingField);
}


void __fastcall BattleActionData__set_FirstAtkMainTargetId(
        BattleActionData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FirstAtkMainTargetId_k__BackingField = value;
}


void __fastcall BattleActionData__set_HpDecreaseFuncTargetHash(
        BattleActionData_o *this,
        System_Collections_Generic_HashSet_int__o *value,
        const MethodInfo *method)
{
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = value;
  sub_B52920(&this->fields._HpDecreaseFuncTargetHash_k__BackingField);
}


void __fastcall BattleActionData__set_IntervalBuffDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *value,
        const MethodInfo *method)
{
  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_B52920(&this->fields._IntervalBuffDict_k__BackingField);
}


void __fastcall BattleActionData__set_IsFuncTargetAllDead(
        BattleActionData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsFuncTargetAllDead_k__BackingField = value;
}


void __fastcall BattleActionData__set_IsNotSkillSkip(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNotSkillSkip_k__BackingField = value;
}


void __fastcall BattleActionData__set_MessageType(BattleActionData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MessageType_k__BackingField = value;
}


void __fastcall BattleActionData__set_NoOperation(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields.noOperation = value;
}


void __fastcall BattleActionData__set_ShiftGauge(
        BattleActionData_o *this,
        BattleActionData_BaseShiftGaugeData_o *value,
        const MethodInfo *method)
{
  this->fields._ShiftGauge_k__BackingField = value;
  sub_B52920(&this->fields._ShiftGauge_k__BackingField);
}


void __fastcall BattleActionData__set_WaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *value,
        const MethodInfo *method)
{
  this->fields._WaitCond_k__BackingField = value;
  sub_B52920(&this->fields._WaitCond_k__BackingField);
}


void __fastcall BattleActionData__set_damagedatalist(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DamageData__o *value,
        const MethodInfo *method)
{
  this->fields._damagedatalist = value;
  sub_B52920(&this->fields._damagedatalist);
}


System_String_o *__fastcall BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  Il2CppObject *v4; // x0
  __int64 *v5; // x8
  int v7; // [xsp+4h] [xbp-1Ch] BYREF
  int v8; // [xsp+8h] [xbp-18h] BYREF
  int v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ACF8B & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_18361/*"effect/BitEffect/bit_buster{0:00}"*/);
    sub_B52984(&StringLiteral_18360/*"effect/BitEffect/bit_arts{0:00}"*/);
    sub_B52984(&StringLiteral_18368/*"effect/BitEffect/bit_flash02"*/);
    sub_B52984(&StringLiteral_18370/*"effect/BitEffect/bit_quick{0:00}"*/);
    byte_42ACF8B = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v8 = 1;
      v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
      v5 = &StringLiteral_18360/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v5, v4, 0LL);
    case 3:
      v7 = 1;
      v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
      v5 = &StringLiteral_18370/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v5, v4, 0LL);
    case 2:
      v9 = 1;
      v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
      v5 = &StringLiteral_18361/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v5, v4, 0LL);
    case 4:
      return (System_String_o *)StringLiteral_18368/*"effect/BitEffect/bit_flash02"*/;
    default:
      return 0LL;
  }
}


void __fastcall BattleActionData_AfterChangeField___ctor(
        BattleActionData_AfterChangeField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fieldChange,
    (System_Int32_array **)fieldChange,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleActionData_AfterChangeField__GetPriorityBG(
        BattleActionData_AfterChangeField_o *this,
        BattlePerformance_o *perf,
        System_String_o **bgName,
        System_String_o **bgType,
        const MethodInfo *method)
{
  BattleActionData_AfterChangeField_o *v8; // x21
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  BattleBuffData_FieldChangeData_o *fieldChange; // x23
  BattleFieldEnvironmentData_o *v11; // x21
  Generator_BGFromFieldChangeBGBuff_o *v12; // x22
  int v13; // w21
  System_String_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  v8 = this;
  if ( (byte_42AEC44 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_B52984(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    byte_42AEC44 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v12 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B52A54(Generator_BGFromFieldChangeBGBuff_TypeInfo),
        Generator_BGFromFieldChangeBGBuff___ctor(v12, fieldChange, 0LL),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_AddBackground.method)(
                                                        v11,
                                                        v12,
                                                        2LL,
                                                        v11->klass->vtable._6_AddBGM.methodPtr)) == 0LL )
  {
    sub_B52A5C(this, perf);
  }
  v13 = (int)this;
  v14 = System_Int32__ToString((int)this + 28, 0LL);
  *bgName = v14;
  sub_B52920((BattleServantConfConponent_o *)bgName, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = System_Int32__ToString(v13 + 32, 0LL);
  *bgType = v21;
  sub_B52920((BattleServantConfConponent_o *)bgType, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
}


System_String_o *__fastcall BattleActionData_AfterChangeField__GetPriorityBgmName(
        BattleActionData_AfterChangeField_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  BattleActionData_AfterChangeField_o *v6; // x21
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  BattleData_o *data; // x22
  BattleBuffData_FieldChangeData_o *fieldChange; // x23
  BattleFieldEnvironmentData_o *v10; // x20
  Generator_BGMFromFieldChangeBGBuff_o *v11; // x21
  void *monitor; // x8

  v6 = this;
  if ( (byte_42AEC45 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_B52984(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_42AEC45 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        data = perf->fields.data,
        fieldChange = v6->fields.fieldChange,
        v10 = FieldEnvData,
        v11 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B52A54(Generator_BGMFromFieldChangeBGBuff_TypeInfo),
        Generator_BGMFromFieldChangeBGBuff___ctor(v11, data, fieldChange, 0LL),
        !v10)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._6_AddBGM.method)(
                                                        v10,
                                                        v11,
                                                        2LL,
                                                        v10->klass->vtable._7_RemoveAfterResetBGM.methodPtr)) == 0LL )
  {
    sub_B52A5C(this, perf);
  }
  monitor = this[1].monitor;
  if ( monitor )
    return (System_String_o *)*((_QWORD *)monitor + 3);
  return defBgmName;
}


void __fastcall BattleActionData_AfterChangeField__SetTakeOverBG(
        BattleActionData_AfterChangeField_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionData_AfterChangeField__SetTakeOverBgmName(
        BattleActionData_AfterChangeField_o *this,
        System_String_o *bgmName,
        int32_t bgmId,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionData_AfterChangeTakeOverField___ctor(
        BattleActionData_AfterChangeTakeOverField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fieldChange,
    (System_Int32_array **)fieldChange,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !fieldEnvData
    || (CurBackGround_k__BackingField = fieldEnvData->fields._CurBackGround_k__BackingField) == 0LL
    || (v13 = ((__int64 (__fastcall *)(BattleActionData_AfterChangeTakeOverField_o *, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_SetTakeOverBG.method)(
                this,
                *((unsigned int *)&CurBackGround_k__BackingField->fields.isActive + 1),
                (unsigned int)CurBackGround_k__BackingField->fields.id,
                this->klass->vtable._5_SetTakeOverBgmName.methodPtr),
        (CurBGM_k__BackingField = fieldEnvData->fields._CurBGM_k__BackingField) == 0LL)
    || (BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField) == 0LL )
  {
    sub_B52A5C(v13, v14);
  }
  ((void (__fastcall *)(BattleActionData_AfterChangeTakeOverField_o *, struct System_String_o *, _QWORD, void *))this->klass->vtable._5_SetTakeOverBgmName.method)(
    this,
    BgmData_k__BackingField->fields._BgmName_k__BackingField,
    (unsigned int)BgmData_k__BackingField->fields._BgmId_k__BackingField,
    this->klass[1]._1.image);
}


void __fastcall BattleActionData_AfterChangeTakeOverField__SetTakeOverBG(
        BattleActionData_AfterChangeTakeOverField_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  struct BattleBuffData_FieldChangeData_o *v5; // x8

  fieldChange = this->fields.fieldChange;
  if ( !fieldChange || (fieldChange->fields.bgId = id, (v5 = this->fields.fieldChange) == 0LL) )
    sub_B52A5C(this, id);
  v5->fields.bgType = type;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_AfterChangeTakeOverField__SetTakeOverBgmName(
        BattleActionData_AfterChangeTakeOverField_o *this,
        System_String_o *bgmName,
        int32_t bgmId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  void *fieldChange; // x0
  struct BattleBuffData_FieldChangeData_o *v12; // x21

  if ( (byte_42AEC46 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AEC46 = 1;
  }
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    goto LABEL_10;
  *((_QWORD *)fieldChange + 5) = bgmName;
  sub_B52920(
    (BattleServantConfConponent_o *)((char *)fieldChange + 40),
    (System_Int32_array **)bgmName,
    *(System_String_array ***)&bgmId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v12 = this->fields.fieldChange;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fieldChange = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !fieldChange
    || (fieldChange = (void *)BgmMaster__GetBgmIdFromFileName((BgmMaster_o *)fieldChange, bgmName, bgmId, 0LL), !v12) )
  {
LABEL_10:
    sub_B52A5C(fieldChange, bgmName);
  }
  v12->fields.bgmId = (int)fieldChange;
}


void __fastcall BattleActionData_BaseData___ctor(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData_BaseData__CheckEntryBuffEffect(
        BattleActionData_BaseData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return this->fields.IsForceBuffEffect
      || svtData
      && (svtData->fields.isEntry
       || (((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))svtData->klass->vtable._15_get_IsAiNpc.method)(
             svtData,
             svtData->klass->vtable._16_getSaveData.methodPtr,
             method) & 1) != 0);
}


void __fastcall BattleActionData_BaseData__InitAddOrder(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  struct BattleActionData_StaticFields *static_fields; // x8
  int32_t addActionOrder; // w9

  if ( (byte_42AEC47 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42AEC47 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  static_fields = v3->static_fields;
  addActionOrder = static_fields->addActionOrder;
  static_fields->addActionOrder = addActionOrder + 1;
  this->fields._AddOrder_k__BackingField = addActionOrder;
}


int32_t __fastcall BattleActionData_BaseData__get_AddOrder(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  return this->fields._AddOrder_k__BackingField;
}


void __fastcall BattleActionData_BaseData__set_AddOrder(
        BattleActionData_BaseData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AddOrder_k__BackingField = value;
}


void __fastcall BattleActionData_BaseShiftGaugeData___ctor(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetBeforeEffectData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1

  if ( (byte_42AEC48 & 1) == 0 )
  {
    sub_B52984(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_B52984(&StringLiteral_19335/*"hp_iconeffect_before_1_"*/);
    byte_42AEC48 = 1;
  }
  v2 = sub_B52A54(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0LL);
  if ( !v2 )
    sub_B52A5C(v3, v4);
  v11 = (System_Int32_array **)StringLiteral_19335/*"hp_iconeffect_before_1_"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_19335/*"hp_iconeffect_before_1_"*/;
  sub_B52920((BattleServantConfConponent_o *)(v2 + 24), v11, v5, v6, v7, v8, v9, v10);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


BattleAction_ShiftHpData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_42AEC4B & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_ShiftHpData___);
    byte_42AEC4B = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0LL,
                                         (const MethodInfo_1A43F54 *)Method_BasicHelper_IndexValue_ShiftHpData___);
}


void __fastcall BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *v4; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v4 = this;
  if ( (byte_42AEC49 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ShiftHpData___ctor__);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_B52984(&System_Collections_Generic_List_ShiftHpData__TypeInfo);
    byte_42AEC49 = 1;
  }
  if ( !svtData )
    sub_B52A5C(this, svtData);
  v4->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShiftHpData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v4->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&v4->fields._ShiftHpDataList_k__BackingField,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x19
  BattleActionData_BaseShiftGaugeData___c_c *v4; // x0
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42AEC4A & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ShiftHpData___ctor__);
    sub_B52984(&System_Action_ShiftHpData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
    sub_B52984(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__);
    sub_B52984(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_42AEC4A = 1;
  }
  this->fields.hpDataIndex = 0;
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v4 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  if ( (BYTE3(BattleActionData_BaseShiftGaugeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_BaseShiftGaugeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    v4 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ShiftHpData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v7,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      (const MethodInfo_2627780 *)Method_System_Action_ShiftHpData___ctor__);
    v8 = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    v8->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_B52A5C(v4, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
}


bool __fastcall BattleActionData_BaseShiftGaugeData__IsPlaying(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields._PlayedState_k__BackingField & state) < 0) ^ v3 | ((this->fields._PlayedState_k__BackingField & state) == 0));
}


void __fastcall BattleActionData_BaseShiftGaugeData__OffState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  this->fields._PlayedState_k__BackingField &= ~state;
}


void __fastcall BattleActionData_BaseShiftGaugeData__OnNotUpdateState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  this->fields._NotShiftUpdateState_k__BackingField |= state;
}


void __fastcall BattleActionData_BaseShiftGaugeData__OnState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  this->fields._PlayedState_k__BackingField |= state;
}


int32_t __fastcall BattleActionData_BaseShiftGaugeData__get_NotShiftUpdateState(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._NotShiftUpdateState_k__BackingField;
}


int32_t __fastcall BattleActionData_BaseShiftGaugeData__get_PlayedState(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._PlayedState_k__BackingField;
}


System_Collections_Generic_List_ShiftHpData__o *__fastcall BattleActionData_BaseShiftGaugeData__get_ShiftHpDataList(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._ShiftHpDataList_k__BackingField;
}


int32_t __fastcall BattleActionData_BaseShiftGaugeData__get_TargetId(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


void __fastcall BattleActionData_BaseShiftGaugeData__set_NotShiftUpdateState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NotShiftUpdateState_k__BackingField = value;
}


void __fastcall BattleActionData_BaseShiftGaugeData__set_PlayedState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PlayedState_k__BackingField = value;
}


void __fastcall BattleActionData_BaseShiftGaugeData__set_ShiftHpDataList(
        BattleActionData_BaseShiftGaugeData_o *this,
        System_Collections_Generic_List_ShiftHpData__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ShiftHpDataList_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ShiftHpDataList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData_BaseShiftGaugeData__set_TargetId(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void __fastcall BattleActionData_BaseShiftGaugeData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x0

  if ( (byte_42AD7A1 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_42AD7A1 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BattleActionData_BaseShiftGaugeData___c___ctor(
        BattleActionData_BaseShiftGaugeData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_BaseShiftGaugeData___c___InitShiftHpPos_b__34_0(
        BattleActionData_BaseShiftGaugeData___c_o *this,
        BattleAction_ShiftHpData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  BattleAction_ShiftHpData__InitHpIndex(x, 0LL);
}


void __fastcall BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AEC4D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_42AEC4D = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.removeBuffList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData_BuffData__DisplayBuff(
        BattleActionData_BuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleActionData_BuffData__ExecAfterEffectProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleActionEffect_Base_o *EffectProc; // x0
  BattleServantConfConponent_o *p_EffectProc; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_EffectProc = (BattleServantConfConponent_o *)&this->fields.EffectProc;
  EffectProc = this->fields.EffectProc;
  if ( EffectProc )
  {
    ((void (__fastcall *)(struct BattleActionEffect_Base_o *, BattleData_o *, void *))EffectProc->klass->vtable._5_AfterEffectProc.method)(
      EffectProc,
      data,
      EffectProc->klass[1]._1.image);
    p_EffectProc->klass = 0LL;
    sub_B52920(p_EffectProc, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall BattleActionData_BuffData__ExecPreActionProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct BattleActionEffect_Base_o *EffectProc; // x0

  EffectProc = this->fields.EffectProc;
  if ( EffectProc )
    ((void (__fastcall *)(struct BattleActionEffect_Base_o *, BattleData_o *, Il2CppMethodPointer))EffectProc->klass->vtable._4_PreActionProc.method)(
      EffectProc,
      data,
      EffectProc->klass->vtable._5_AfterEffectProc.methodPtr);
}


System_Int32_array *__fastcall BattleActionData_BuffData__GetDisplayEffectIds(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    sub_B52A5C(this, 0LL);
  if ( !arg->fields.overwriteEffectIds )
    return this->fields.effectList;
  if ( this->fields.isMiss )
    return 0LL;
  if ( this->fields.IsNoEffect )
    return 0LL;
  return arg->fields.overwriteEffectIds;
}


BattleBuffData_o *__fastcall BattleActionData_BuffData__GetTargetBattleBuffData(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *result; // x0

  if ( !data )
    sub_B52A5C(this, 0LL);
  result = (BattleBuffData_o *)BattleData__getServantData(data, this->fields.targetId, 0LL);
  if ( result )
    return (BattleBuffData_o *)result[4].fields.buffMaster;
  return result;
}


bool __fastcall BattleActionData_BuffData__IsEnableSideEffect(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( this->fields.statusEffectId == -1 )
    return 0;
  if ( !arg )
    sub_B52A5C(this, 0LL);
  return !arg->fields.isTreasureDevice;
}


bool __fastcall BattleActionData_BuffData__IsPopLabel(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.popLabel, 0LL);
}


bool __fastcall BattleActionData_BuffData__IsUpdateBuffType(
        BattleActionData_BuffData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.updateType & type) < 0) ^ v3 | ((this->fields.updateType & type) == 0));
}


void __fastcall BattleActionData_BuffData__OnUpdateBuffType(
        BattleActionData_BuffData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  this->fields.updateType |= type;
}


void __fastcall BattleActionData_BuffData__ResetCheckHideWhenDead(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  this->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


void __fastcall BattleActionData_BuffData__SetActionEffectProc(
        BattleActionData_BuffData_o *this,
        BattleActionEffect_Base_o *effectProc,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.EffectProc = effectProc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.EffectProc,
    (System_Int32_array **)effectProc,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData_BuffData__SetCheckHideWhenDeadInfo(
        BattleActionData_BuffData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_42AEC4C & 1) == 0 )
  {
    sub_B52984(&DataVals_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEC4C = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !vals )
  {
    vals = (DataVals_o *)sub_B52A54(DataVals_TypeInfo);
    DataVals___ctor(vals, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.dataVals = vals;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dataVals,
    (System_Int32_array **)vals,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall BattleActionData_BuffData__get_ExistEffectProc(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields.EffectProc != 0LL;
}


bool __fastcall BattleActionData_BuffData__get_IsCheckHideWhenDead(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCheckHideWhenDead_k__BackingField;
}


bool __fastcall BattleActionData_BuffData__get_IsSetUpdateBuffType(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields.updateType > 0;
}


int32_t __fastcall BattleActionData_BuffData__get_saveNpValue(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._saveNpValue_k__BackingField;
}


void __fastcall BattleActionData_BuffData__setSaveNp(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._saveNpValue_k__BackingField = value;
}


void __fastcall BattleActionData_BuffData__set_IsCheckHideWhenDead(
        BattleActionData_BuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCheckHideWhenDead_k__BackingField = value;
}


void __fastcall BattleActionData_BuffData__set_saveNpValue(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._saveNpValue_k__BackingField = value;
}


void __fastcall BattleActionData_ChangeBg___ctor(BattleActionData_ChangeBg_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_DamageData___ctor(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AEC4F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
    sub_B52984(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
    byte_42AEC4F = 1;
  }
  this->fields.multiatk = 1;
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.attackSideEffectActList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleActionData_DamageData__GetAttackCountExceptFirst(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( damagelist )
    return UnityEngine_Mathf__Max_41525284(0, damagelist->max_length - 1, 0LL);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DamageData__addAttackSideEffectAction(
        BattleActionData_DamageData_o *this,
        int32_t act,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BuffList_ACTION__o *attackSideEffectActList; // x0

  if ( (byte_42AEC4E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__);
    byte_42AEC4E = 1;
  }
  attackSideEffectActList = this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_7;
  if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
         (System_Collections_Generic_List_VoiceCondType_Type__o *)attackSideEffectActList,
         act,
         (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
  {
    return;
  }
  attackSideEffectActList = this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
LABEL_7:
    sub_B52A5C(attackSideEffectActList, *(_QWORD *)&act);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)attackSideEffectActList,
    act,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_BuffList_ACTION__Add__);
}


int32_t __fastcall BattleActionData_DamageData__getAtkNp(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *atknplist; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  atknplist = this->fields.atknplist;
  if ( !atknplist )
    return 0;
  max_length = atknplist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  return atknplist->m_Items[index + 1];
}


int32_t __fastcall BattleActionData_DamageData__getAttackCount(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    sub_B52A5C(this, method);
  return damagelist->max_length;
}


System_Collections_Generic_List_BuffList_ACTION__o *__fastcall BattleActionData_DamageData__getAttackSideEffectActionList(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.attackSideEffectActList;
}


bool __fastcall BattleActionData_DamageData__getAvoidance(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.hitStates == 2;
}


bool __fastcall BattleActionData_DamageData__getCritical(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.critical;
}


bool __fastcall BattleActionData_DamageData__getCriticalPoint(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *starlist; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  starlist = this->fields.starlist;
  if ( !starlist )
    return 0;
  max_length = starlist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  return starlist->m_Items[index + 1] > 0;
}


int32_t __fastcall BattleActionData_DamageData__getCriticalPointCount(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *starlist; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  starlist = this->fields.starlist;
  if ( !starlist )
    return 0;
  max_length = starlist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  return starlist->m_Items[index + 1];
}


int32_t __fastcall BattleActionData_DamageData__getDamage(
        BattleActionData_DamageData_o *this,
        int32_t index,
        bool isCheckCount,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8
  int32_t max_length; // w9
  __int64 v7; // x0

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    return -1;
  max_length = damagelist->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
  {
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  return damagelist->m_Items[index + 1];
}


System_Int32_array *__fastcall BattleActionData_DamageData__getDamageList(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.damagelist;
}


int32_t __fastcall BattleActionData_DamageData__getDefNp(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *defnplist; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  defnplist = this->fields.defnplist;
  if ( !defnplist )
    return 0;
  max_length = defnplist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  return defnplist->m_Items[index + 1];
}


bool __fastcall BattleActionData_DamageData__getInvincible(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.hitStates == 1;
}


bool __fastcall BattleActionData_DamageData__getRegist(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.regist;
}


bool __fastcall BattleActionData_DamageData__getWeak(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.weak;
}


void __fastcall BattleActionData_DisplayMessageData___ctor(
        BattleActionData_DisplayMessageData_o *this,
        BattleMessageEntity_o *ent,
        ParseBattleMessage_o *parser,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  struct System_String_array *IsNullOrEmpty; // x0
  struct System_String_array *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x22
  BattleMessageEntity_o *v18; // x2
  const MethodInfo *v19; // x4
  int32_t DefInterval; // w0
  BattleActionData_DisplayMessageData_o *ScriptInt; // x0
  BattleMessageEntity_o *v22; // x2
  const MethodInfo *v23; // x4
  int32_t DefBaseTime; // w0
  BattleActionData_DisplayMessageData_o *v25; // x0
  BattleMessageEntity_o *v26; // x2
  const MethodInfo *v27; // x4
  int32_t DefTimePerChara; // w0
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x22
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v30; // x23
  int64_t MessageType_k__BackingField; // x2

  if ( (byte_42AEC52 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_string___);
    sub_B52984(&Method_System_Func_string__int___ctor__);
    sub_B52984(&System_Func_string__int__TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_14528/*"TimePerChara"*/);
    sub_B52984(&StringLiteral_2766/*"BaseTime"*/);
    sub_B52984(&StringLiteral_9117/*"MessageType"*/);
    sub_B52984(&StringLiteral_7763/*"Interval"*/);
    byte_42AEC52 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !ent )
    goto LABEL_16;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_B5299C(string___TypeInfo, 0LL);
  }
  else
  {
    if ( !parser )
      goto LABEL_16;
    IsNullOrEmpty = ParseBattleMessage__Replace(parser, ent->fields.message, 0LL);
  }
  v10 = IsNullOrEmpty;
  if ( !this )
LABEL_16:
    sub_B52A5C(IsNullOrEmpty, v10);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._Messages_k__BackingField,
    (System_Int32_array **)IsNullOrEmpty,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_WarQuestSelectionMaster,
                  (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                  v18,
                  preMsg,
                  v19);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7763/*"Interval"*/,
                                                         DefInterval,
                                                         0LL);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                  v22,
                  preMsg,
                  v23);
  v25 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_2766/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0LL);
  this->fields.baseTime = (int)v25;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v25,
                      (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                      v26,
                      preMsg,
                      v27);
  this->fields.timePerChara = BattleMessageEntity__GetScriptInt(
                                ent,
                                (System_String_o *)StringLiteral_14528/*"TimePerChara"*/,
                                DefTimePerChara,
                                0LL);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v30 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    (const MethodInfo_2BC9C68 *)Method_System_Func_string__int___ctor__);
  this->fields.messageLen = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v30,
                              (const MethodInfo_1B6DB18 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0LL;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9117/*"MessageType"*/,
                                                MessageType_k__BackingField,
                                                0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefBaseTime(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_42AEC54 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B52984(&StringLiteral_2493/*"BATTLE_MSG_BASE_TIME"*/);
    byte_42AEC54 = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_B52A5C(this, constMst);
  return ConstantMaster__GetValue_28577068(constMst, (System_String_o *)StringLiteral_2493/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_42AEC53 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B52984(&StringLiteral_2494/*"BATTLE_MSG_INTERVAL"*/);
    byte_42AEC53 = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_B52A5C(this, constMst);
  return ConstantMaster__GetValue_28577068(constMst, (System_String_o *)StringLiteral_2494/*"BATTLE_MSG_INTERVAL"*/, 250, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_42AEC55 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B52984(&StringLiteral_2565/*"BATTLE_TIME_PER_CHARA"*/);
    byte_42AEC55 = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_B52A5C(this, constMst);
  return ConstantMaster__GetValue_28577068(constMst, (System_String_o *)StringLiteral_2565/*"BATTLE_TIME_PER_CHARA"*/, 15, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__StrlenByDisp(
        BattleActionData_DisplayMessageData_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v5; // x1
  bool IsNullOrEmpty; // w8
  int32_t result; // w0

  if ( (byte_42AEC56 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42AEC56 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__ReplaceNameTag(text, 0, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4, 0LL);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v4 )
      sub_B52A5C(0LL, v5);
    return v4->fields.m_stringLength;
  }
  return result;
}


float __fastcall BattleActionData_DisplayMessageData__get_DispTime(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  int32_t messageLen; // w20
  int32_t timePerChara; // w19
  int32_t baseTime; // w21
  BattleDataDefine_c *v6; // x0

  if ( (byte_42AEC51 & 1) == 0 )
  {
    sub_B52984(&BattleDataDefine_TypeInfo);
    byte_42AEC51 = 1;
  }
  messageLen = this->fields.messageLen;
  baseTime = this->fields.baseTime;
  timePerChara = this->fields.timePerChara;
  v6 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v6 = BattleDataDefine_TypeInfo;
  }
  return (float)(baseTime + timePerChara * messageLen) / v6->static_fields->PERMILLAGE_DENOMINATOR;
}


float __fastcall BattleActionData_DisplayMessageData__get_Interval(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  int32_t interval; // w19
  BattleDataDefine_c *v4; // x0

  if ( (byte_42AEC50 & 1) == 0 )
  {
    sub_B52984(&BattleDataDefine_TypeInfo);
    byte_42AEC50 = 1;
  }
  interval = this->fields.interval;
  v4 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v4 = BattleDataDefine_TypeInfo;
  }
  return (float)interval / v4->static_fields->PERMILLAGE_DENOMINATOR;
}


int32_t __fastcall BattleActionData_DisplayMessageData__get_MessageType(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageType_k__BackingField;
}


System_String_array *__fastcall BattleActionData_DisplayMessageData__get_Messages(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Messages_k__BackingField;
}


void __fastcall BattleActionData_DisplayMessageData__set_MessageType(
        BattleActionData_DisplayMessageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MessageType_k__BackingField = value;
}


void __fastcall BattleActionData_DisplayMessageData__set_Messages(
        BattleActionData_DisplayMessageData_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Messages_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._Messages_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData_DownShiftGaugeData___ctor(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_DownShiftGaugeData__AddShiftHpData(
        BattleActionData_DownShiftGaugeData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x23
  BattleAction_ShiftDownHpData_o *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42AEC5A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_B52984(&BattleAction_ShiftDownHpData_TypeInfo);
    byte_42AEC5A = 1;
  }
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftDownHpData_o *)sub_B52A54(BattleAction_ShiftDownHpData_TypeInfo);
  BattleAction_ShiftDownHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField )
    sub_B52A5C(v13, v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ShiftHpDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShiftHpData__Add__);
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1

  if ( (byte_42AEC59 & 1) == 0 )
  {
    sub_B52984(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_B52984(&StringLiteral_19334/*"hp_iconeffect_1_"*/);
    byte_42AEC59 = 1;
  }
  v2 = sub_B52A54(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0LL);
  if ( !v2 )
    sub_B52A5C(v3, v4);
  v11 = (System_Int32_array **)StringLiteral_19334/*"hp_iconeffect_1_"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_19334/*"hp_iconeffect_1_"*/;
  sub_B52920((BattleServantConfConponent_o *)(v2 + 24), v11, v5, v6, v7, v8, v9, v10);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


int32_t __fastcall BattleActionData_DownShiftGaugeData__GetShiftValue(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  if ( !svtData || (shiftDeckList = svtData->fields.shiftDeckList) == 0LL )
    sub_B52A5C(this, svtData);
  return UnityEngine_Mathf__Min_41525188(shiftDeckList->max_length, svtData->fields.shiftDeckIndex + baseValue, 0LL)
       - svtData->fields.shiftDeckIndex;
}


bool __fastcall BattleActionData_DownShiftGaugeData__IsInvalid(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B52A5C(this, 0LL);
  return !BattleServantData__isShiftableServant(svtData, 0LL);
}


void __fastcall BattleActionData_DownShiftGaugeData__UpdateMaxShift(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *targetSvtData,
        bool isChangeMaxBreakGauge,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall BattleActionData_DownShiftGaugeData__get_Motion(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEC57 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8861/*"MOTION_SHIFT_GAUGE_DOWN"*/);
    byte_42AEC57 = 1;
  }
  return (System_String_o *)StringLiteral_8861/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_42AEC58 & 1) == 0 )
  {
    sub_B52984(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_42AEC58 = 1;
  }
  v3 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_B52A54(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
  BattleAction_PlayDownShiftGaugeMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, Il2CppMethodPointer))v3->klass->vtable._7_Init.method)(
                                                v3,
                                                this,
                                                v3->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AEC5B & 1) == 0 )
  {
    sub_B52984(&BattleActionEffect_UpdateFieldInfo_TypeInfo);
    byte_42AEC5B = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v3 = (Il2CppObject *)sub_B52A54(BattleActionEffect_UpdateFieldInfo_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.EffectProc = (struct BattleActionEffect_Base_o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.EffectProc,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData_FieldBuffData__DisplayBuff(
        BattleActionData_FieldBuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v6; // x20
  UnityEngine_Object_o *v7; // x22
  UnityEngine_Object_o *FieldEffectPos; // x23
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  int v12; // s0
  int v15; // s0
  int v18; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v6 = (BattleActionData_BuffData_o *)this;
  if ( (byte_42AEC5C & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEC5C = 1;
  }
  if ( !perf )
    goto LABEL_22;
  this = (BattleActionData_FieldBuffData_o *)BattlePerformance__GetFieldPopupPos(perf, 0LL);
  if ( !arg )
    goto LABEL_22;
  v7 = (UnityEngine_Object_o *)this;
  FieldEffectPos = (UnityEngine_Object_o *)BattlePerformance__GetFieldEffectPos(perf, arg->fields.isTreasureDevice, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleActionData_FieldBuffData_o *)UnityEngine_Object__op_Equality(FieldEffectPos, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !arg->fields.isTreasureDevice )
  {
    if ( FieldEffectPos )
      goto LABEL_21;
LABEL_22:
    sub_B52A5C(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0LL);
  if ( !uicamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Camera__WorldToViewportPoint_41461208(
                                     uicamera,
                                     *(UnityEngine_Vector3_o *)&v12,
                                     0LL);
  if ( !actorcamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ViewportToWorldPoint_41461216(
                                     actorcamera,
                                     *(UnityEngine_Vector3_o *)&v15,
                                     0LL);
  if ( !FieldEffectPos )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)FieldEffectPos,
    *(UnityEngine_Vector3_o *)&v18,
    0LL);
LABEL_21:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldEffectPos, 0LL);
  BattlePerformance__DisplayFieldBuffEffect(perf, gameObject, v6, arg, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  BattlePerformance__DisplayFieldBuffPopup(perf, (UnityEngine_Transform_o *)v7, v6, zero, 0LL);
  return 1;
}


BattleBuffData_o *__fastcall BattleActionData_FieldBuffData__GetTargetBattleBuffData(
        BattleActionData_FieldBuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionData_FieldBuffData_o *)data->fields._FieldEnvData_k__BackingField) == 0LL )
    sub_B52A5C(this, data);
  return BattleFieldEnvironmentData__get_BuffData((BattleFieldEnvironmentData_o *)this, 0LL);
}


void __fastcall BattleActionData_GimmickData___ctor(BattleActionData_GimmickData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_HealData___ctor(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData_HealData__CheckExecHeal(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields.healPoint > 0 || this->fields.isShowForcedHeal;
}


void __fastcall BattleActionData_MasterBuffData___ctor(
        BattleActionData_MasterBuffData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, (const MethodInfo *)funcEnt);
  this->fields.IsForceBuffEffect = 1;
  if ( !funcEnt )
    sub_B52A5C(v5, v6);
  this->fields.popLabelCondensedScaleSize = FunctionEntity__GetPopupTextCondensedScaleSize(funcEnt, 0LL);
  this->fields.popLabelCondensedScaleValue = FunctionEntity__GetPopupTextCondensedScaleValue(funcEnt, 0LL);
}


bool __fastcall BattleActionData_MasterBuffData__DisplayBuff(
        BattleActionData_MasterBuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  struct BattlePerformanceStatus_o *statusPerf; // x9
  BattleActionData_MasterBuffData_o *v5; // x8

  if ( !perf
    || (statusPerf = perf->fields.statusPerf) == 0LL
    || (v5 = this, (this = (BattleActionData_MasterBuffData_o *)statusPerf->fields.masterPerf) == 0LL) )
  {
    sub_B52A5C(this, perf);
  }
  BattlePerformanceMaster__startMasterBuffEffect((BattlePerformanceMaster_o *)this, v5, 0LL);
  return 1;
}


bool __fastcall BattleActionData_MasterBuffData__IsEffectEnable(
        BattleActionData_MasterBuffData_o *this,
        const MethodInfo *method)
{
  struct System_String_o *popLabel; // x8
  struct System_Int32_array *effectList; // x8

  popLabel = this->fields.popLabel;
  if ( !popLabel )
    goto LABEL_8;
  if ( popLabel->fields.m_stringLength && this->fields.popColor > 0 )
    return 1;
  effectList = this->fields.effectList;
  if ( !effectList )
LABEL_8:
    sub_B52A5C(this, method);
  return effectList->max_length != 0;
}


bool __fastcall BattleActionData_MasterBuffData__get_IsEnd(
        BattleActionData_MasterBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnd_k__BackingField;
}


bool __fastcall BattleActionData_MasterBuffData__get_IsStart(
        BattleActionData_MasterBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsStart_k__BackingField;
}


void __fastcall BattleActionData_MasterBuffData__set_IsEnd(
        BattleActionData_MasterBuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnd_k__BackingField = value;
}


void __fastcall BattleActionData_MasterBuffData__set_IsStart(
        BattleActionData_MasterBuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsStart_k__BackingField = value;
}


void __fastcall BattleActionData_MoveToSubMember___ctor(
        BattleActionData_MoveToSubMember_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        bool isSucceeded,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._index_k__BackingField = index;
  this->fields._uniqueId_k__BackingField = uniqueId;
  this->fields.functionIndex = funcIndex;
  this->fields._isSucceeded_k__BackingField = isSucceeded;
}


int32_t __fastcall BattleActionData_MoveToSubMember__get_index(
        BattleActionData_MoveToSubMember_o *this,
        const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


bool __fastcall BattleActionData_MoveToSubMember__get_isSucceeded(
        BattleActionData_MoveToSubMember_o *this,
        const MethodInfo *method)
{
  return this->fields._isSucceeded_k__BackingField;
}


int32_t __fastcall BattleActionData_MoveToSubMember__get_uniqueId(
        BattleActionData_MoveToSubMember_o *this,
        const MethodInfo *method)
{
  return this->fields._uniqueId_k__BackingField;
}


void __fastcall BattleActionData_MoveToSubMember__set_index(
        BattleActionData_MoveToSubMember_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._index_k__BackingField = value;
}


void __fastcall BattleActionData_MoveToSubMember__set_isSucceeded(
        BattleActionData_MoveToSubMember_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isSucceeded_k__BackingField = value;
}


void __fastcall BattleActionData_MoveToSubMember__set_uniqueId(
        BattleActionData_MoveToSubMember_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._uniqueId_k__BackingField = value;
}


void __fastcall BattleActionData_ReplaceMember___ctor(BattleActionData_ReplaceMember_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_ServantLogicResultData___ctor(
        BattleActionData_ServantLogicResultData_o *this,
        const MethodInfo *method)
{
  this->fields.hp = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_ShiftServant___ctor(BattleActionData_ShiftServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_ShiftServant__SetAddBeforeSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionData_ShiftServant__SetAddCheckSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionData_ShiftServant__UpdateAfterShiftData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionData_ShiftServant__setBeforeSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( !svtData )
    sub_B52A5C(this, 0LL);
  this->fields.svtId = BattleServantData__getActorSvtId(svtData, 0LL);
  this->fields.limit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  this->fields.weapon = BattleServantData__getWeaponGroup(svtData, 0, 0LL);
  this->fields.effectFolder = BattleServantData__getEffectFolder(svtData, 0LL);
  this->fields.cameraId = BattleServantData__getCameraActionId(svtData, 0LL);
  this->fields.uniqueId = svtData->fields.uniqueId;
  this->fields.overwriteSvtVoiceId = svtData->fields.overwriteSvtVoiceId;
  this->fields.isNoVoice = BattleServantData__IsNoVoice(svtData, 0LL);
  this->fields.isHideShadow = svtData->fields.isHideShadow;
  LoadedAssetArgs_k__BackingField = svtData->fields._LoadedAssetArgs_k__BackingField;
  this->fields.loadedAssetArgs = LoadedAssetArgs_k__BackingField;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.loadedAssetArgs,
    (System_Int32_array **)LoadedAssetArgs_k__BackingField,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ((void (__fastcall *)(BattleActionData_ShiftServant_o *, BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._4_SetAddBeforeSvtData.method)(
    this,
    svtData,
    this->klass->vtable._5_SetAddCheckSvtData.methodPtr);
}


void __fastcall BattleActionData_ShiftServant__setCheckSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t svtId; // w21
  int32_t limit; // w21
  char v7; // w8
  BattleActionData_ShiftServant_c *klass; // x9

  if ( !svtData )
    sub_B52A5C(this, 0LL);
  svtId = this->fields.svtId;
  if ( svtId == BattleServantData__getActorSvtId(svtData, 0LL) )
  {
    limit = this->fields.limit;
    v7 = limit != BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  }
  else
  {
    v7 = 1;
  }
  klass = this->klass;
  this->fields.isChange = v7;
  ((void (__fastcall *)(BattleActionData_ShiftServant_o *, BattleServantData_o *, Il2CppMethodPointer))klass->vtable._5_SetAddCheckSvtData.method)(
    this,
    svtData,
    klass->vtable._6_UpdateAfterShiftData.methodPtr);
}


void __fastcall BattleActionData_SideEffectData___ctor(
        BattleActionData_SideEffectData_o *this,
        int32_t targetId,
        BuffList_ACTION_array *sideEffectActs,
        const MethodInfo *method)
{
  struct BuffList_ACTION_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42AEC5D & 1) == 0 )
  {
    sub_B52984(&BuffList_ACTION___TypeInfo);
    byte_42AEC5D = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_B5299C(BuffList_ACTION___TypeInfo, 0LL);
  this->fields.sideEffectActs = v7;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.sideEffectActs,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetId = targetId;
  this->fields.sideEffectActs = sideEffectActs;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.sideEffectActs,
    (System_Int32_array **)sideEffectActs,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall BattleActionData_SkillShiftServant___ctor(
        BattleActionData_SkillShiftServant_o *this,
        BattleData_o *data,
        int32_t shiftNpcId,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = this;
  this->fields.displayType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.data = data;
  v6 = (BattleActionData_SkillShiftServant_o *)((char *)v6 + 72);
  sub_B52920((BattleServantConfConponent_o *)v6, (System_Int32_array **)data, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = shiftNpcId;
}


void __fastcall BattleActionData_SkillShiftServant__SetAddBeforeSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B52A5C(this, 0LL);
  this->fields.displayType = svtData->fields.displayType;
}


void __fastcall BattleActionData_SkillShiftServant__SetAddCheckSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !this->fields.isChange )
  {
    if ( !svtData )
      sub_B52A5C(this, 0LL);
    this->fields.isChange = this->fields.displayType != svtData->fields.displayType;
  }
}


void __fastcall BattleActionData_SkillShiftServant__UpdateAfterShiftData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  BattleServantData_o *v3; // x19
  BattleActionData_SkillShiftServant_o *v4; // x20
  BattleBuffData_o *buffData; // x21
  struct BattleData_o *data; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  v3 = targetData;
  v4 = this;
  if ( (byte_42AEC5E & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_B52984(&int___TypeInfo);
    byte_42AEC5E = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  buffData = v3->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_B5299C(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_10;
  targetData = (BattleServantData_o *)this;
  if ( !*(_DWORD *)&this->fields.IsForceBuffEffect )
  {
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
  }
  this->fields.svtId = 10;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypePassiveBuff(buffData, (System_Int32_array *)this, 0LL),
        BattleServantData__setSkillShiftServant(v3, v4->fields.data, v4->fields.npcId, 0LL),
        (data = v4->fields.data) == 0LL)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0LL )
  {
LABEL_10:
    sub_B52A5C(this, targetData);
  }
  BattleLogic__actClassPassiveSkill((BattleLogic_o *)this, v3->fields.uniqueId, 0LL);
  BattleActionData_ShiftServant__setCheckSvtData((BattleActionData_ShiftServant_o *)v4, v3, v7);
}


void __fastcall BattleActionData_SummonServant___ctor(
        BattleActionData_SummonServant_o *this,
        int32_t inUniqueId,
        int32_t inUnloadUniqueId,
        int32_t inFuncIndex,
        bool isEffect,
        int32_t callSvtEffectId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.functionIndex = inFuncIndex;
  this->fields.uniqueId = inUniqueId;
  this->fields.unloadUniqueId = inUnloadUniqueId;
  this->fields.isEffectSummon = isEffect;
  this->fields.callSvtEffectId = callSvtEffectId;
}


void __fastcall BattleActionData_TransformServant___ctor(
        BattleActionData_TransformServant_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Index_k__BackingField = index;
  this->fields._UniqueId_k__BackingField = uniqueId;
  this->fields.functionIndex = funcIndex;
  this->fields._OverwriteLimitCount_k__BackingField = overwriteLimitCount;
}


int32_t __fastcall BattleActionData_TransformServant__get_Index(
        BattleActionData_TransformServant_o *this,
        const MethodInfo *method)
{
  return this->fields._Index_k__BackingField;
}


int32_t __fastcall BattleActionData_TransformServant__get_OverwriteLimitCount(
        BattleActionData_TransformServant_o *this,
        const MethodInfo *method)
{
  return this->fields._OverwriteLimitCount_k__BackingField;
}


int32_t __fastcall BattleActionData_TransformServant__get_UniqueId(
        BattleActionData_TransformServant_o *this,
        const MethodInfo *method)
{
  return this->fields._UniqueId_k__BackingField;
}


void __fastcall BattleActionData_TransformServant__set_Index(
        BattleActionData_TransformServant_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Index_k__BackingField = value;
}


void __fastcall BattleActionData_TransformServant__set_OverwriteLimitCount(
        BattleActionData_TransformServant_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OverwriteLimitCount_k__BackingField = value;
}


void __fastcall BattleActionData_TransformServant__set_UniqueId(
        BattleActionData_TransformServant_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UniqueId_k__BackingField = value;
}


void __fastcall BattleActionData_UpShiftGaugeData___ctor(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_UpShiftGaugeData__AddShiftHpData(
        BattleActionData_UpShiftGaugeData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x23
  BattleAction_ShiftUpHpData_o *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42AEC62 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_B52984(&BattleAction_ShiftUpHpData_TypeInfo);
    byte_42AEC62 = 1;
  }
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftUpHpData_o *)sub_B52A54(BattleAction_ShiftUpHpData_TypeInfo);
  BattleAction_ShiftUpHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField )
    sub_B52A5C(v13, v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ShiftHpDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShiftHpData__Add__);
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x1

  if ( (byte_42AEC61 & 1) == 0 )
  {
    sub_B52984(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_B52984(&StringLiteral_19333/*"hp_iconcharge_1_"*/);
    byte_42AEC61 = 1;
  }
  v2 = sub_B52A54(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0LL);
  if ( !v2 )
    sub_B52A5C(v3, v4);
  v11 = (System_Int32_array **)StringLiteral_19333/*"hp_iconcharge_1_"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_19333/*"hp_iconcharge_1_"*/;
  sub_B52920((BattleServantConfConponent_o *)(v2 + 24), v11, v5, v6, v7, v8, v9, v10);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


int32_t __fastcall BattleActionData_UpShiftGaugeData__GetShiftValue(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B52A5C(this, 0LL);
  return UnityEngine_Mathf__Max_41525284(1, svtData->fields.shiftDeckIndex - baseValue, 0LL)
       - svtData->fields.shiftDeckIndex;
}


bool __fastcall BattleActionData_UpShiftGaugeData__IsInvalid(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B52A5C(this, 0LL);
  return svtData->fields.shiftDeckIndex < 2;
}


void __fastcall BattleActionData_UpShiftGaugeData__UpdateMaxShift(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *targetSvtData,
        bool isChangeMaxBreakGauge,
        const MethodInfo *method)
{
  int32_t lowLimitShift; // w0
  int32_t v6; // w0

  if ( !targetSvtData )
    sub_B52A5C(this, 0LL);
  lowLimitShift = targetSvtData->fields.lowLimitShift;
  if ( isChangeMaxBreakGauge )
    v6 = UnityEngine_Mathf__Max_41525284(1, lowLimitShift - 1, 0LL);
  else
    v6 = UnityEngine_Mathf__Min_41525188(lowLimitShift, targetSvtData->fields.shiftDeckIndex, 0LL);
  targetSvtData->fields.lowLimitShift = v6;
}


System_String_o *__fastcall BattleActionData_UpShiftGaugeData__get_Motion(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEC5F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8862/*"MOTION_SHIFT_GAUGE_UP"*/);
    byte_42AEC5F = 1;
  }
  return (System_String_o *)StringLiteral_8862/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_42AEC60 & 1) == 0 )
  {
    sub_B52984(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
    byte_42AEC60 = 1;
  }
  v3 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_B52A54(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, Il2CppMethodPointer))v3->klass->vtable._7_Init.method)(
                                                v3,
                                                this,
                                                v3->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AEC3A & 1) == 0 )
  {
    sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42AEC3A = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleActionData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActionData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleActionData___c___ctor(BattleActionData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c___AddDisplayTriggerIntervalBuff_b__150_0(
        BattleActionData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B52A5C(this, 0LL);
  BattleBuffData_BuffData__UpdateInterval(buff, 0LL);
}


BattleActionData_o *__fastcall BattleActionData___c___AddSideEffectAfterAction_b__295_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_B52A5C(this, 0LL);
  return act->fields.afterActionData;
}


bool __fastcall BattleActionData___c___ExecUnappliedProcess_b__122_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.EffectProc != 0LL;
}


bool __fastcall BattleActionData___c___ExistFuncSideEffectTrigger_b__156_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArrayEx_b__124_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B52A5C(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArray_b__123_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B52A5C(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__274_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__274_3(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BattleActionData___c___PreActionProcess_b__121_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.EffectProc != 0LL;
}


void __fastcall BattleActionData___c___ResetAllCheckDead_b__177_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__125_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.functionIndex;
}


void __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__125_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool __fastcall BattleActionData___c___SetFuncTargetAllDead_b__137_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return BattleServantData__isAliveLogic(x, 0, 0LL);
}


void __fastcall BattleActionData___c___SetPopupOnce_b__126_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  x->fields.isOncePop = 1;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__283_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.targetId;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__283_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__157_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__157_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateIntervalBuff_b__147_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B52A5C(this, 0LL);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_B52A5C(this, 0LL);
  damagelist = x->fields.damagelist;
  if ( damagelist )
    return UnityEngine_Mathf__Max_41525284(0, damagelist->max_length - 1, 0LL);
  else
    return 0;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_4(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__275_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__275_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__275_2(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


void __fastcall BattleActionData___c__DisplayClass121_0___ctor(
        BattleActionData___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass121_0___PreActionProcess_b__1(
        BattleActionData___c__DisplayClass121_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleActionEffect_Base_o *EffectProc; // x8

  if ( !x )
    sub_B52A5C(this, 0LL);
  EffectProc = x->fields.EffectProc;
  if ( EffectProc )
    ((void (__fastcall *)(struct BattleActionEffect_Base_o *, struct BattleData_o *, Il2CppMethodPointer))EffectProc->klass->vtable._4_PreActionProc.method)(
      EffectProc,
      this->fields.data,
      EffectProc->klass->vtable._5_AfterEffectProc.methodPtr);
}


void __fastcall BattleActionData___c__DisplayClass122_0___ctor(
        BattleActionData___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass122_0___ExecUnappliedProcess_b__1(
        BattleActionData___c__DisplayClass122_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  BattleActionData_BuffData__ExecAfterEffectProc(x, this->fields.data, method);
}


void __fastcall BattleActionData___c__DisplayClass123_0___ctor(
        BattleActionData___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass123_0___GetExecOrderArray_b__0(
        BattleActionData___c__DisplayClass123_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_BaseData__o *execOrderList; // x0

  if ( (byte_42AEC3B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_42AEC3B = 1;
  }
  execOrderList = this->fields.execOrderList;
  if ( !execOrderList )
    sub_B52A5C(0LL, x);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)execOrderList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)x,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
}


void __fastcall BattleActionData___c__DisplayClass123_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass123_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_BaseData__o *execOrderList; // x0

  if ( (byte_42AEC3C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_42AEC3C = 1;
  }
  execOrderList = this->fields.execOrderList;
  if ( !execOrderList )
    sub_B52A5C(0LL, x);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)execOrderList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)x,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
}


void __fastcall BattleActionData___c__DisplayClass125_0___ctor(
        BattleActionData___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass125_0___SetFuncSideEffectTrigger_b__1(
        BattleActionData___c__DisplayClass125_0_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.functionIndex == this->fields.lastIndex;
}


void __fastcall BattleActionData___c__DisplayClass137_0___ctor(
        BattleActionData___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass137_0___SetFuncTargetAllDead_b__0(
        BattleActionData___c__DisplayClass137_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.isEnemy ^ this->fields.isActorEnemy;
}


void __fastcall BattleActionData___c__DisplayClass149_0___ctor(
        BattleActionData___c__DisplayClass149_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass149_0___UpdateDirectIntervalBuffData_b__0(
        BattleActionData___c__DisplayClass149_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B52A5C(this, 0LL);
  return BattleBuffData_BuffData__EqualBuffType(buff, this->fields.buffMst, this->fields.targetType, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass164_0___ctor(
        BattleActionData___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass164_0___getDamageList_b__0(
        BattleActionData___c__DisplayClass164_0_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass169_0___ctor(
        BattleActionData___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass169_0___GetDamageArrayDistinctIndex_b__0(
        BattleActionData___c__DisplayClass169_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct BattleActionData_DamageData_o *damage; // x8

  if ( !x || (damage = this->fields.damage) == 0LL )
    sub_B52A5C(this, x);
  return x->fields.functionIndex == damage->fields.functionIndex;
}


void __fastcall BattleActionData___c__DisplayClass176_0___ctor(
        BattleActionData___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass176_0___getBuffList_b__0(
        BattleActionData___c__DisplayClass176_0_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass183_0___ctor(
        BattleActionData___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass183_0___getHealList_b__0(
        BattleActionData___c__DisplayClass183_0_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass188_0___ctor(
        BattleActionData___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass188_0___getReplaceMember_b__0(
        BattleActionData___c__DisplayClass188_0_o *this,
        BattleActionData_ReplaceMember_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass201_0___ctor(
        BattleActionData___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass201_0___getSummonServant_b__0(
        BattleActionData___c__DisplayClass201_0_o *this,
        BattleActionData_SummonServant_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass274_0___ctor(
        BattleActionData___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass274_0___GetFuncTargetIds_b__0(
        BattleActionData___c__DisplayClass274_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass274_0_o *v4; // x20

  v4 = this;
  if ( (byte_42AEC3D & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass274_0_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_42AEC3D = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass274_0_o *)v4->fields.ids) == 0LL )
    sub_B52A5C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass274_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass274_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass274_0_o *v4; // x20

  v4 = this;
  if ( (byte_42AEC3E & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass274_0_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_42AEC3E = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass274_0_o *)v4->fields.ids) == 0LL )
    sub_B52A5C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass274_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass274_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass274_0_o *v4; // x20

  v4 = this;
  if ( (byte_42AEC3F & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass274_0_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_42AEC3F = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass274_0_o *)v4->fields.ids) == 0LL )
    sub_B52A5C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass277_0___ctor(
        BattleActionData___c__DisplayClass277_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass277_0___GetFunctionIndexArrayNearByCuriousFunc_b__0(
        BattleActionData___c__DisplayClass277_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42AEC40 & 1) == 0 )
  {
    sub_B52984(&Method_System_Nullable_int__get_Value__);
    byte_42AEC40 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_217190C *)Method_System_Nullable_int__get_Value__) > x;
}


bool __fastcall BattleActionData___c__DisplayClass277_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass277_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42AEC41 & 1) == 0 )
  {
    sub_B52984(&Method_System_Nullable_int__get_Value__);
    byte_42AEC41 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_217190C *)Method_System_Nullable_int__get_Value__) == x;
}


bool __fastcall BattleActionData___c__DisplayClass277_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass277_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42AEC42 & 1) == 0 )
  {
    sub_B52984(&Method_System_Nullable_int__get_Value__);
    byte_42AEC42 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_217190C *)Method_System_Nullable_int__get_Value__) < x;
}


void __fastcall BattleActionData___c__DisplayClass282_0___ctor(
        BattleActionData___c__DisplayClass282_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass282_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass282_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass283_0___ctor(
        BattleActionData___c__DisplayClass283_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass283_0___SetSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass283_0_o *this,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass283_0_o *v2; // x19
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  System_Collections_Generic_List_int__o *targetList; // x20
  BattleActionData___c_c *v6; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__283_1; // x22
  Il2CppObject *v9; // x23
  struct BattleActionData___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  System_Collections_Generic_List_int__o *v18; // x19
  BattleActionData___c_c *v19; // x0
  struct BattleActionData___c_StaticFields *v20; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__283_2; // x21
  Il2CppObject *v22; // x22
  struct BattleActionData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  v2 = this;
  if ( (byte_42AEC43 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    sub_B52984(&Method_System_Func_BattleActionData_HealData__int___ctor__);
    sub_B52984(&Method_System_Func_BattleActionData_BuffData__int___ctor__);
    sub_B52984(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_B52984(&System_Func_BattleActionData_HealData__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_1__);
    sub_B52984(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_2__);
    this = (BattleActionData___c__DisplayClass283_0_o *)sub_B52984(&BattleActionData___c_TypeInfo);
    byte_42AEC43 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.buffdatalist;
  if ( buffdatalist )
  {
    targetList = v2->fields.targetList;
    v6 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__283_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__283_1;
    if ( !_9__283_1 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__283_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__283_1,
        v9,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_1__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
      v10 = BattleActionData___c_TypeInfo->static_fields;
      v10->__9__283_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__283_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v10->__9__283_1,
        (System_Int32_array **)_9__283_1,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    this = (BattleActionData___c__DisplayClass283_0_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__283_1,
                                                          (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_27;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_27;
  }
  healdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.healdatalist;
  if ( healdatalist )
  {
    v18 = v2->fields.targetList;
    v19 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v19 = BattleActionData___c_TypeInfo;
    }
    v20 = v19->static_fields;
    _9__283_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v20->__9__283_2;
    if ( !_9__283_2 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v20 = BattleActionData___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__283_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleActionData_HealData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__283_2,
        v22,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_2__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_BattleActionData_HealData__int___ctor__);
      v23 = BattleActionData___c_TypeInfo->static_fields;
      v23->__9__283_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__283_2;
      sub_B52920(
        (BattleServantConfConponent_o *)&v23->__9__283_2,
        (System_Int32_array **)_9__283_2,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    this = (BattleActionData___c__DisplayClass283_0_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__283_2,
                                                          (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v18 )
    {
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_27:
    sub_B52A5C(this, method);
  }
}


void __fastcall BattleActionData___c__DisplayClass284_0___ctor(
        BattleActionData___c__DisplayClass284_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass291_0___ctor(
        BattleActionData___c__DisplayClass291_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass291_0___getSideEffectList_b__0(
        BattleActionData___c__DisplayClass291_0_o *this,
        BattleActionData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B52A5C(this, 0LL);
  return s->fields.actType == this->fields.actType;
}


void __fastcall BattleActionData___c__DisplayClass295_0___ctor(
        BattleActionData___c__DisplayClass295_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass295_0___AddSideEffectAfterAction_b__0(
        BattleActionData___c__DisplayClass295_0_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || (this = (BattleActionData___c__DisplayClass295_0_o *)act) == 0LL )
    sub_B52A5C(this, act);
  return BattleActionData__ExistsAddableAfterAction(act, perf->fields.data, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass305_0___ctor(
        BattleActionData___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass305_0___addReflectLogicResultServantId_b__0(
        BattleActionData___c__DisplayClass305_0_o *this,
        BattleActionData_ServantLogicResultData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}