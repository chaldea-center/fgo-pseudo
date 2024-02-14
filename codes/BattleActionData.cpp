void __fastcall BattleActionData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleActionData_c *v2; // x8

  if ( (byte_42116E2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, v1);
    byte_42116E2 = 1;
  }
  BattleActionData_TypeInfo->static_fields->TYPE_DEAD = 100;
  BattleActionData_TypeInfo->static_fields->TYPE_TW = 101;
  v2 = BattleActionData_TypeInfo;
  BattleActionData_TypeInfo->static_fields->TYPE_SKILL = 102;
  v2->static_fields->TYPE_BACKSTEP = 103;
  v2->static_fields->TYPE_RESURRECTION = 104;
  v2->static_fields->TYPE_BOOSTSKILL = 105;
  v2->static_fields->TYPE_COMMAND_SPELL = 106;
  v2->static_fields->TYPE_ORDERARTS = 121;
  v2->static_fields->TYPE_ORDERBUSTER = 122;
  v2->static_fields->TYPE_ORDERQUICK = 123;
  v2->static_fields->TYPE_ENEMY_CUTIN = 131;
  v2->static_fields->TYPE_ENEMY_SPELL_CUTIN = 132;
  v2->static_fields->addActionOrder = 0;
}


void __fastcall BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_KeyValuePair_int__int___o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_int__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_HashSet_int__o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v36; // x20
  void *v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20

  if ( (byte_42116E1 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__,
      method);
    sub_B0D8A4(
      &System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v5);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData__TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_42116E1 = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1LL;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1LL;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v18;
  sub_B0D840(&this->fields.damageSideEffectedSvtIds, v18);
  v21 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B0D974(
                                                                       System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo,
                                                                       v19,
                                                                       v20);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v21,
    (const MethodInfo_2D27F80 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v21;
  sub_B0D840(&this->fields.attackSideEffectedSvtIds, v21);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v24;
  sub_B0D840(&this->fields.servantLogicResultList, v24);
  this->fields.funcResult = 1;
  v27 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo,
                                                                   v25,
                                                                   v26);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v27,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v27;
  sub_B0D840(&this->fields.funcTargetPlayerTypeList, v27);
  v30 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v28, v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v30;
  sub_B0D840(&this->fields.funcTargetList, v30);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  v33 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v31,
                                                       v32);
  System_Collections_Generic_HashSet_int____ctor(
    v33,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v33;
  sub_B0D840(&this->fields._HpDecreaseFuncTargetHash_k__BackingField, v33);
  v36 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B0D974(
                                                                   System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo,
                                                                   v34,
                                                                   v35);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v36,
    (const MethodInfo_266FAF0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v36;
  sub_B0D840(&this->fields._IntervalBuffDict_k__BackingField, v36);
  v37 = StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.skillCutInMessage, v37);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleActionData__TypeInfo,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v40;
  sub_B0D840(&this->fields.sideEffectList, v40);
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
  sub_B0D840(&this->fields.afterActionData, afterActionData);
  if ( *p_afterActionData )
    (*p_afterActionData)->fields.isPreAfterActCheckDead = isPreActCheckDead;
}


void __fastcall BattleActionData__AddBuffList(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x0
  struct System_Collections_Generic_List_BattleActionData_BuffData__o **p_buffdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21

  if ( (byte_421169E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v6);
    byte_421169E = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  buffdatalist = this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = &this->fields.buffdatalist;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo,
                                                                                                   data,
                                                                                                   method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    *p_buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v9;
    sub_B0D840(p_buffdatalist, v9);
    buffdatalist = *p_buffdatalist;
    if ( !*p_buffdatalist )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffdatalist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
}


BattleActionData_DisplayMessageData_o *__fastcall BattleActionData__AddDisplayMessage(
        BattleActionData_o *this,
        BattleMessageEntity_o *ent,
        ParseBattleMessage_o *parser,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleActionData_DisplayMessageData_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *DispMsgList_k__BackingField; // x0
  struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o **p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21

  if ( (byte_42116B3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_DisplayMessageData_TypeInfo, ent);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo, v11);
    byte_42116B3 = 1;
  }
  v12 = (BattleActionData_DisplayMessageData_o *)sub_B0D974(BattleActionData_DisplayMessageData_TypeInfo, ent, parser);
  BattleActionData_DisplayMessageData___ctor(v12, ent, parser, preMsg, 0LL);
  DispMsgList_k__BackingField = this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = &this->fields._DispMsgList_k__BackingField;
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo,
                                                                                                    v13,
                                                                                                    v14);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    *p_DispMsgList_k__BackingField = (struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *)v17;
    sub_B0D840(p_DispMsgList_k__BackingField, v17);
    DispMsgList_k__BackingField = *p_DispMsgList_k__BackingField;
    if ( !*p_DispMsgList_k__BackingField )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DispMsgList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
  return v12;
}


BattleActionData_o *__fastcall BattleActionData__AddDisplayTriggerIntervalBuff(
        BattleActionData_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BattleActionData_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantData_o *key; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__150_0; // x22
  Il2CppObject *v14; // x23
  struct BattleActionData___c_StaticFields *v15; // x0

  v5 = this;
  if ( (byte_4211693 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, task);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      v8);
    sub_B0D8A4(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__150_0__, v9);
    this = (BattleActionData_o *)sub_B0D8A4(&BattleActionData___c_TypeInfo, v10);
    byte_4211693 = 1;
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
    v14 = (Il2CppObject *)static_fields->__9;
    _9__150_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                       task,
                                                                                       method);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__150_0,
      v14,
      Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__150_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v15 = BattleActionData___c_TypeInfo->static_fields;
    v15->__9__150_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__150_0;
    sub_B0D840(&v15->__9__150_0, _9__150_0);
  }
  if ( !v5 )
LABEL_14:
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  int endcameraname; // w8
  BattleActionData_o *v8; // x20
  unsigned int v9; // w24
  BattleActionData_c **v10; // x8
  BattleServantData_o *v11; // x21
  BattleBuffData_BuffData_array *UpdateWaitIntervalBuffArray; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x23
  const MethodInfo *v16; // x4
  __int64 v18; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_421168E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, data);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    this = (BattleActionData_o *)sub_B0D8A4(&Method_BattleActionData_UpdateIntervalCurrent__, v6);
    byte_421168E = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (BattleActionData_o *)BattleData__getFieldServantList(data, 0, 0LL);
  if ( !this )
    goto LABEL_12;
  endcameraname = (int)this->fields.endcameraname;
  v8 = this;
  if ( endcameraname >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= endcameraname )
      {
        v18 = sub_B0D9A8(this);
        sub_B0D948(v18, 0LL);
      }
      v10 = &v8->klass + (int)v9;
      v11 = (BattleServantData_o *)v10[4];
      if ( !v11 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v10[4], 0LL);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0LL);
      v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                   System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                   v13,
                                                                                   v14);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v15,
        v4,
        Method_BattleActionData_UpdateIntervalCurrent__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v4,
        v11,
        (System_Action_BattleBuffData_BuffData__o *)v15,
        UpdateWaitIntervalBuffArray,
        v16);
      endcameraname = (int)v8->fields.endcameraname;
      if ( (int)++v9 >= endcameraname )
        return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable[5].method)(
                 v4,
                 v4->klass->vtable[6].methodPtr);
    }
LABEL_12:
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x0
  struct System_Collections_Generic_List_BattleActionData_HealData__o **p_healdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21

  if ( (byte_42116A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v6);
    byte_42116A2 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  healdatalist = this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = &this->fields.healdatalist;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleActionData_HealData__TypeInfo,
                                                                                                   data,
                                                                                                   method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    *p_healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)v9;
    sub_B0D840(p_healdatalist, v9);
    healdatalist = *p_healdatalist;
    if ( !*p_healdatalist )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)healdatalist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_HealData__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__AddHpDecreaseFuncTargets(
        BattleActionData_o *this,
        int32_t funcType,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  bool IsRelatedHpDecrease; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_int__o *v13; // x21

  if ( (byte_421168C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, *(_QWORD *)&funcType);
    sub_B0D8A4(&System_Action_int__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_int___, v8);
    sub_B0D8A4(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__132_0__, v9);
    byte_421168C = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0LL);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v13 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v11, v12);
      System_Action_int____ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__132_0__,
        (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v13,
        (const MethodInfo_1707E48 *)Method_BasicHelper_ForEach_int___);
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
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o *moveToSubMemberList; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  BattleActionData_MoveToSubMember_o *v15; // x24
  __int64 v16; // x0

  if ( (byte_42116A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__, *(_QWORD *)&index);
    sub_B0D8A4(&BattleActionData_MoveToSubMember_TypeInfo, v11);
    byte_42116A7 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = this->fields.moveToSubMemberList;
  v15 = (BattleActionData_MoveToSubMember_o *)sub_B0D974(BattleActionData_MoveToSubMember_TypeInfo, v13, v14);
  BattleActionData_MoveToSubMember___ctor(v15, index, uniqueId, funcIndex, isSucceeded, 0LL);
  if ( !moveToSubMemberList )
    sub_B0D97C(v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveToSubMemberList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__);
}


void __fastcall BattleActionData__AddSideEffectAfterAction(
        BattleActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActionData___c__DisplayClass294_0_o *v15; // x22
  BattlePerformance_o *v16; // x0
  BattlePerformance_o **p_perf; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  BattleActionData___c_c *v25; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__294_1; // x21
  Il2CppObject *v28; // x22
  struct BattleActionData___c_StaticFields *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  BattleActionData_array *v31; // x1

  if ( (byte_42116D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___, perf);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleActionData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleActionData___, v6);
    sub_B0D8A4(&Method_System_Func_BattleActionData__BattleActionData___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_BattleActionData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleActionData__BattleActionData__TypeInfo, v9);
    sub_B0D8A4(&System_Func_BattleActionData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleActionData___c__AddSideEffectAfterAction_b__294_1__, v11);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass294_0__AddSideEffectAfterAction_b__0__, v12);
    sub_B0D8A4(&BattleActionData___c__DisplayClass294_0_TypeInfo, v13);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v14);
    byte_42116D4 = 1;
  }
  v15 = (BattleActionData___c__DisplayClass294_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass294_0_TypeInfo,
                                                       perf,
                                                       method);
  BattleActionData___c__DisplayClass294_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  v15->fields.perf = perf;
  p_perf = &v15->fields.perf;
  sub_B0D840(&v15->fields, perf);
  sideEffectList = this->fields.sideEffectList;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleActionData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_BattleActionData___c__DisplayClass294_0__AddSideEffectAfterAction_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData__bool___ctor__);
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v25 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v25 = BattleActionData___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__294_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__294_1;
  if ( !_9__294_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__294_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                  System_Func_BattleActionData__BattleActionData__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__294_1,
      v28,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__294_1__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleActionData__BattleActionData___ctor__);
    v29 = BattleActionData___c_TypeInfo->static_fields;
    v29->__9__294_1 = (struct System_Func_BattleActionData__BattleActionData__o *)_9__294_1;
    sub_B0D840(&v29->__9__294_1, _9__294_1);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__294_1,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v16 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v30,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v16 )
    goto LABEL_17;
  v31 = (BattleActionData_array *)v16;
  if ( v16->fields.fsm )
  {
    v16 = *p_perf;
    if ( *p_perf )
    {
      BattlePerformance__addActionData(v16, v31, 0LL);
      return;
    }
LABEL_17:
    sub_B0D97C(v16);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  BattleActionData_TransformServant_o *v14; // x24
  struct System_Collections_Generic_List_BattleActionData_TransformServant__o *transformServantlist; // x0

  if ( (byte_42116A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__, *(_QWORD *)&index);
    sub_B0D8A4(&BattleActionData_TransformServant_TypeInfo, v11);
    byte_42116A9 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v14 = (BattleActionData_TransformServant_o *)sub_B0D974(BattleActionData_TransformServant_TypeInfo, v12, v13);
  BattleActionData_TransformServant___ctor(v14, index, uniqueId, funcIndex, overwriteLimitCount, 0LL);
  transformServantlist = this->fields.transformServantlist;
  if ( !transformServantlist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transformServantlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__);
}


void __fastcall BattleActionData__AddUpdateIntervalBuffDict(
        BattleActionData_o *this,
        BattleServantData_o *svtData,
        System_Action_BattleBuffData_BuffData__o *updateAction,
        BattleBuffData_BuffData_array *intervalArray,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo_2029F4C *v15; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v23; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_Variant__Variant__o v24; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v25; // 0:x1.16

  if ( (byte_421168F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__,
      svtData);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__,
      v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__,
      v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_421168F = 1;
  }
  v23.fields.key = 0LL;
  v23.fields.value = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)intervalArray, (const MethodInfo *)svtData) )
  {
    v24.fields.key = (struct Firebase_Variant_o *)&v23;
    v24.fields.value = (struct Firebase_Variant_o *)svtData;
    System_Collections_Generic_KeyValuePair_Variant__Variant____ctor(
      v24,
      (Firebase_Variant_o *)updateAction,
      (Firebase_Variant_o *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v15);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_12;
    if ( !System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___ContainsKey(
            IntervalBuffDict_k__BackingField,
            v23,
            (const MethodInfo_267092C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v23.fields.key;
      value = v23.fields.value;
      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v17, v18);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v22,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v19 )
        goto LABEL_12;
      v25.fields.key = key;
      v25.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v19,
        v25,
        (Il2CppObject *)v22,
        (const MethodInfo_2670680 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v23,
                                                                                                    (const MethodInfo_26705E4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(IntervalBuffDict_k__BackingField);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleActionData___c__DisplayClass122_0_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v19; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__122_0; // x21
  Il2CppObject *v22; // x22
  struct BattleActionData___c_StaticFields *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x21

  if ( (byte_4211687 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_BuffData___ctor__, data);
    sub_B0D8A4(&System_Action_BattleActionData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v7);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BuffData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleActionData___c__ExecUnappliedProcess_b__122_0__, v10);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass122_0__ExecUnappliedProcess_b__1__, v11);
    sub_B0D8A4(&BattleActionData___c__DisplayClass122_0_TypeInfo, v12);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v13);
    byte_4211687 = 1;
  }
  v14 = (BattleActionData___c__DisplayClass122_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass122_0_TypeInfo,
                                                       data,
                                                       method);
  BattleActionData___c__DisplayClass122_0___ctor(v14, 0LL);
  if ( !v14 )
    sub_B0D97C(v15);
  v14->fields.data = data;
  sub_B0D840(&v14->fields, data);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v19 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v19 = BattleActionData___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__122_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__122_0;
    if ( !_9__122_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__122_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_BattleActionData_BuffData__bool__TypeInfo,
                                                                                       v16,
                                                                                       v17);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__122_0,
        v22,
        Method_BattleActionData___c__ExecUnappliedProcess_b__122_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
      v23 = BattleActionData___c_TypeInfo->static_fields;
      v23->__9__122_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__122_0;
      sub_B0D840(&v23->__9__122_0, _9__122_0);
    }
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__122_0,
                                                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_BattleActionData_BuffData__TypeInfo,
                                                                                 v25,
                                                                                 v26);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v27,
      (Il2CppObject *)v14,
      Method_BattleActionData___c__DisplayClass122_0__ExecUnappliedProcess_b__1__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v24,
      (System_Action_T__o *)v27,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool __fastcall BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  BattleActionData___c_c *v10; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_0; // x20
  Il2CppObject *v13; // x21
  struct BattleActionData___c_StaticFields *v14; // x0

  if ( (byte_4211694 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleActionData_BaseData___, method);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BaseData__bool___ctor__, v3);
    sub_B0D8A4(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v4);
    sub_B0D8A4(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__156_0__, v5);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v6);
    byte_4211694 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, method) )
    return 0;
  v10 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v10 = BattleActionData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__156_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleActionData_BaseData__bool__TypeInfo,
                                                                                     v7,
                                                                                     v8);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__156_0,
      v13,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__156_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    v14 = BattleActionData___c_TypeInfo->static_fields;
    v14->__9__156_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__156_0;
    sub_B0D840(&v14->__9__156_0, _9__156_0);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__156_0,
           (const MethodInfo_17071E4 *)Method_BasicHelper_Any_BattleActionData_BaseData___);
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
    sub_B0D97C(this);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0LL);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_42116C3 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&funcIdx);
    byte_42116C3 = 1;
  }
  return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_DamageData_array *__fastcall BattleActionData__GetDamageArrayDistinctIndex(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  const MethodInfo *v14; // x2
  BattleActionData_DamageData_array *DamageList; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  BattleActionData_DamageData_array *v18; // x20
  unsigned __int64 v19; // x24
  __int64 v20; // x22
  BattleActionData_DamageData_o *v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x23
  __int64 v26; // x0

  if ( (byte_421169D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleActionData_DamageData___, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_System_Func_BattleActionData_DamageData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass169_0__GetDamageArrayDistinctIndex_b__0__, v11);
    sub_B0D8A4(&BattleActionData___c__DisplayClass169_0_TypeInfo, v12);
    byte_421169D = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo,
                                                                                                  *(_QWORD *)&funcIndex,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v14);
  if ( !DamageList )
    goto LABEL_14;
  v18 = DamageList;
  if ( (int)DamageList->max_length >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      v20 = sub_B0D974(BattleActionData___c__DisplayClass169_0_TypeInfo, v16, v17);
      BattleActionData___c__DisplayClass169_0___ctor((BattleActionData___c__DisplayClass169_0_o *)v20, 0LL);
      if ( v19 >= v18->max_length )
      {
        v26 = sub_B0D9A8(DamageList);
        sub_B0D948(v26, 0LL);
      }
      if ( !v20 )
        break;
      v21 = v18->m_Items[v19];
      *(_QWORD *)(v20 + 16) = v21;
      sub_B0D840(v20 + 16, v21);
      v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_BattleActionData_DamageData__bool__TypeInfo,
                                                                                 v22,
                                                                                 v23);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v24,
        (Il2CppObject *)v20,
        Method_BattleActionData___c__DisplayClass169_0__GetDamageArrayDistinctIndex_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                          (System_Collections_Generic_List_T__o *)v13,
                                                          (System_Func_T__bool__o *)v24,
                                                          (const MethodInfo_1707138 *)Method_BasicHelper_Any_BattleActionData_DamageData___);
      if ( ((unsigned __int8)DamageList & 1) == 0 )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v20 + 16),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
      }
      if ( (__int64)++v19 >= (int)v18->max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B0D97C(DamageList);
  }
LABEL_12:
  if ( !v13 )
    goto LABEL_14;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDamageTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *damagedatalist; // x0
  System_Int32_array *v10; // x19
  const MethodInfo *v11; // x1
  il2cpp_array_size_t i; // w20
  char *v13; // x9
  _BOOL8 v14; // x0
  __int64 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42116C2 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__,
      *(_QWORD *)&funcIdx);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__, v8);
    byte_42116C2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  damagedatalist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleActionData__get_damagedatalist(
                                                                                                    this,
                                                                                                    *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v10 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleActionData__get_damagedatalist(this, v11)) == 0LL) )
  {
    sub_B0D97C(damagedatalist);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    damagedatalist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields.current )
      sub_B0D97C(v14);
    if ( !v10 )
      sub_B0D97C(v14);
    if ( i >= v10->max_length )
    {
      v16 = sub_B0D9A8(v14);
      sub_B0D948(v16, 0LL);
    }
    v13 = (char *)v10 + 4 * (int)i;
    *((_DWORD *)v13 + 8) = HIDWORD(v17.fields.current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_42116C4 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&funcIdx);
    byte_42116C4 = 1;
  }
  return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArray(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  BattleActionData___c__DisplayClass123_0_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  BattleActionData___c_c *v25; // x0
  BattleActionData___c_c **p_fields; // x19
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x24
  const MethodInfo *v32; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *execOrderList; // x20
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__123_2; // x21
  Il2CppObject *v42; // x22
  struct BattleActionData___c_StaticFields *v43; // x0

  if ( (byte_4211688 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_HealData___ctor__, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_System_Action_BattleActionData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Action_BattleActionData_HealData__TypeInfo, v6);
    sub_B0D8A4(&System_Action_BattleActionData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v8);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v9);
    sub_B0D8A4(&Method_System_Comparison_BattleActionData_BaseData___ctor__, v10);
    sub_B0D8A4(&System_Comparison_BattleActionData_BaseData__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v15);
    sub_B0D8A4(&Method_BattleActionData___c__GetExecOrderArray_b__123_2__, v16);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__0__, v17);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__1__, v18);
    sub_B0D8A4(&BattleActionData___c__DisplayClass123_0_TypeInfo, v19);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v20);
    byte_4211688 = 1;
  }
  v21 = (BattleActionData___c__DisplayClass123_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass123_0_TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       method);
  BattleActionData___c__DisplayClass123_0___ctor(v21, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v21 )
    goto LABEL_15;
  v21->fields.execOrderList = (struct System_Collections_Generic_List_BattleActionData_BaseData__o *)v24;
  p_fields = (BattleActionData___c_c **)&v21->fields;
  sub_B0D840(&v21->fields, v24);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v27);
  v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleActionData_BuffData__TypeInfo,
                                                                               v29,
                                                                               v30);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    BuffList,
    (System_Action_T__o *)v31,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v32);
  v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleActionData_HealData__TypeInfo,
                                                                               v34,
                                                                               v35);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v36,
    (Il2CppObject *)v21,
    Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__1__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_HealData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    HealList,
    (System_Action_T__o *)v36,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  execOrderList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v21->fields.execOrderList;
  v25 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v25 = BattleActionData___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__123_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__123_2;
  if ( !_9__123_2 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__123_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_BattleActionData_BaseData__TypeInfo,
                                                                            v37,
                                                                            v38);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__123_2,
      v42,
      Method_BattleActionData___c__GetExecOrderArray_b__123_2__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleActionData_BaseData___ctor__);
    v43 = BattleActionData___c_TypeInfo->static_fields;
    v43->__9__123_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__123_2;
    sub_B0D840(&v43->__9__123_2, _9__123_2);
  }
  if ( !execOrderList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          execOrderList,
          (System_Comparison_T__o *)_9__123_2,
          (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v25 = *p_fields) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(v25);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArrayEx(
        BattleActionData_o *this,
        int32_t funcIndex,
        bool isSort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  BattleActionData___c_c *v24; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__124_0; // x20
  Il2CppObject *v27; // x21
  struct BattleActionData___c_StaticFields *v28; // x0

  if ( (byte_4211689 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_BattleActionData_BaseData___ctor__, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&System_Comparison_BattleActionData_BaseData__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v12);
    sub_B0D8A4(&Method_BattleActionData___c__GetExecOrderArrayEx_b__124_0__, v13);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v14);
    byte_4211689 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo,
                                                                                                  *(_QWORD *)&funcIndex,
                                                                                                  isSort);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v16);
  if ( !v15 )
    sub_B0D97C(BuffList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    BuffList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v18);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    HealList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v20);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    DamageList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v24 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v24 = BattleActionData___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__124_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__124_0;
    if ( !_9__124_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__124_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                              System_Comparison_BattleActionData_BaseData__TypeInfo,
                                                                              v22,
                                                                              v23);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__124_0,
        v27,
        Method_BattleActionData___c__GetExecOrderArrayEx_b__124_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_BattleActionData_BaseData___ctor__);
      v28 = BattleActionData___c_TypeInfo->static_fields;
      v28->__9__124_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__124_0;
      sub_B0D840(&v28->__9__124_0, _9__124_0);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
      (System_Comparison_T__o *)_9__124_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleServantData_array *__fastcall BattleActionData__GetFuncSideEffectTargetServants(
        BattleActionData_o *this,
        BattleData_o *bData,
        bool isMainOnly,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  _QWORD **v23; // x20
  __int64 v24; // x19
  __int16 v25; // w8
  __int64 v26; // x19
  __int64 v27; // x19
  __int64 v28; // x19
  System_Int32_array *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_int__bool__o *v33; // x23
  __int64 targetId; // x0
  System_Func_int__BattleActionData_SideEffectData__o *v35; // x21
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  __int64 v38; // x0

  if ( (byte_4211680 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BattleServantData___, bData);
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, v9);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_BattleServantData___, v10);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, v11);
    sub_B0D8A4(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__106_0__, v12);
    sub_B0D8A4(&Method_BattleData_getServantData__, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v14);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v15);
    sub_B0D8A4(&Method_System_Func_int__BattleServantData___ctor__, v16);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v18);
    sub_B0D8A4(&System_Func_int__BattleServantData__TypeInfo, v19);
    sub_B0D8A4(&int___TypeInfo, v20);
    byte_4211680 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, (const MethodInfo *)bData) )
  {
    if ( isMainOnly )
    {
      v30 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
      v33 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v31, v32);
      System_Func_int__bool____ctor(
        v33,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__106_0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int__24145568(
             targetIds,
             (System_Func_T__bool__o *)v33,
             (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
      {
        targetId = (unsigned int)this->fields.targetId;
        if ( !v30 )
LABEL_24:
          sub_B0D97C(targetId);
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
        if ( !v30 )
          goto LABEL_24;
      }
      if ( !v30->max_length )
      {
        v38 = sub_B0D9A8(targetId);
        sub_B0D948(v38, 0LL);
      }
      targetIds = v30;
      v30->m_Items[1] = targetId;
    }
    v35 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                   System_Func_int__BattleServantData__TypeInfo,
                                                                   v21,
                                                                   v22);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v35,
      (Il2CppObject *)bData,
      Method_BattleData_getServantData__,
      (const MethodInfo_26145DC *)Method_System_Func_int__BattleServantData___ctor__);
    v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                           (System_Func_TSource__TResult__o *)v35,
                                                           (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v37 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v36,
            (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
  v23 = (_QWORD **)Method_System_Array_Empty_BattleServantData___;
  v24 = **((_QWORD **)Method_System_Array_Empty_BattleServantData___ + 6);
  v25 = *(_WORD *)(v24 + 306);
  if ( (v25 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BattleServantData___ + 6));
    v25 = *(_WORD *)(v24 + 306);
  }
  if ( (v25 & 0x400) != 0 )
  {
    v26 = *v23[6];
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      sub_AA65A4(*v23[6]);
    if ( !*(_DWORD *)(v26 + 224) )
    {
      v27 = *v23[6];
      if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
        sub_AA65A4(*v23[6]);
      j_il2cpp_runtime_class_init_0(v27);
    }
  }
  v28 = *v23[6];
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AA65A4(*v23[6]);
  return **(BattleServantData_array ***)(v28 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetFuncTargetIds(
        BattleActionData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_HashSet_int__o *v32; // x22
  __int64 v33; // x0
  const MethodInfo *v34; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x23
  const MethodInfo *v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x22
  BattleActionData___c_c *v43; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__273_1; // x23
  Il2CppObject *v46; // x24
  struct BattleActionData___c_StaticFields *v47; // x0
  System_Collections_Generic_IEnumerable_T__o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v51; // x23
  const MethodInfo *v52; // x2
  BattleActionData_HealData_array *HealList; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  BattleActionData___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x19
  struct BattleActionData___c_StaticFields *v58; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__273_3; // x20
  Il2CppObject *v60; // x22
  struct BattleActionData___c_StaticFields *v61; // x0
  System_Collections_Generic_IEnumerable_T__o *v62; // x19
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v65; // x20

  if ( (byte_42116C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_DamageData___ctor__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Action_BattleActionData_HealData___ctor__, v5);
    sub_B0D8A4(&Method_System_Action_BattleActionData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Action_BattleActionData_DamageData__TypeInfo, v7);
    sub_B0D8A4(&System_Action_BattleActionData_HealData__TypeInfo, v8);
    sub_B0D8A4(&System_Action_BattleActionData_BuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v10);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_DamageData___, v11);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v14);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___, v15);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BuffData__bool___ctor__, v16);
    sub_B0D8A4(&Method_System_Func_BattleActionData_HealData__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v18);
    sub_B0D8A4(&System_Func_BattleActionData_HealData__bool__TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v20);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v21);
    sub_B0D8A4(&Method_BattleActionData___c__GetFuncTargetIds_b__273_1__, v22);
    sub_B0D8A4(&Method_BattleActionData___c__GetFuncTargetIds_b__273_3__, v23);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass273_0__GetFuncTargetIds_b__0__, v24);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass273_0__GetFuncTargetIds_b__2__, v25);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass273_0__GetFuncTargetIds_b__4__, v26);
    sub_B0D8A4(&BattleActionData___c__DisplayClass273_0_TypeInfo, v27);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v28);
    byte_42116C8 = 1;
  }
  v29 = sub_B0D974(BattleActionData___c__DisplayClass273_0_TypeInfo, *(_QWORD *)&index, method);
  BattleActionData___c__DisplayClass273_0___ctor((BattleActionData___c__DisplayClass273_0_o *)v29, 0LL);
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( !v29 )
    sub_B0D97C(v33);
  *(_QWORD *)(v29 + 16) = v32;
  sub_B0D840(v29 + 16, v32);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v34);
  v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleActionData_DamageData__TypeInfo,
                                                                               v36,
                                                                               v37);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v38,
    (Il2CppObject *)v29,
    Method_BattleActionData___c__DisplayClass273_0__GetFuncTargetIds_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_DamageData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    DamageList,
    (System_Action_T__o *)v38,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(this, index, v39);
  v43 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v43 = BattleActionData___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__273_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__273_1;
  if ( !_9__273_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__273_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleActionData_BuffData__bool__TypeInfo,
                                                                                     v40,
                                                                                     v41);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__273_1,
      v46,
      Method_BattleActionData___c__GetFuncTargetIds_b__273_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
    v47 = BattleActionData___c_TypeInfo->static_fields;
    v47->__9__273_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__273_1;
    sub_B0D840(&v47->__9__273_1, _9__273_1);
  }
  v48 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         BuffList,
                                                         (System_Func_TSource__bool__o *)_9__273_1,
                                                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v51 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleActionData_BuffData__TypeInfo,
                                                                               v49,
                                                                               v50);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v51,
    (Il2CppObject *)v29,
    Method_BattleActionData___c__DisplayClass273_0__GetFuncTargetIds_b__2__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v48,
    (System_Action_T__o *)v51,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v52);
  v56 = BattleActionData___c_TypeInfo;
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v56 = BattleActionData___c_TypeInfo;
  }
  v58 = v56->static_fields;
  _9__273_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v58->__9__273_3;
  if ( !_9__273_3 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v58 = BattleActionData___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)v58->__9;
    _9__273_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleActionData_HealData__bool__TypeInfo,
                                                                                     v54,
                                                                                     v55);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__273_3,
      v60,
      Method_BattleActionData___c__GetFuncTargetIds_b__273_3__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_HealData__bool___ctor__);
    v61 = BattleActionData___c_TypeInfo->static_fields;
    v61->__9__273_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__273_3;
    sub_B0D840(&v61->__9__273_3, _9__273_3);
  }
  v62 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         v57,
                                                         (System_Func_TSource__bool__o *)_9__273_3,
                                                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v65 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleActionData_HealData__TypeInfo,
                                                                               v63,
                                                                               v64);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v65,
    (Il2CppObject *)v29,
    Method_BattleActionData___c__DisplayClass273_0__GetFuncTargetIds_b__4__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_HealData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v62,
    (System_Action_T__o *)v65,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v29 + 16),
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetFunctionIndexArrayNearByCuriousFunc(
        BattleActionData_o *this,
        int32_t effectTiming,
        System_Int32_array *resultOnGetFailed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActionData___c__DisplayClass276_0_o *v15; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ListFunctionIndex; // x21
  System_Func_int__bool__o *v23; // x0
  __int64 *v24; // x8
  System_Func_TSource__bool__o *v26; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_42116CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&effectTiming);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Nullable_int__get_HasValue__, v10);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass276_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__, v11);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass276_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__, v12);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass276_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__, v13);
    sub_B0D8A4(&BattleActionData___c__DisplayClass276_0_TypeInfo, v14);
    byte_42116CB = 1;
  }
  v15 = (BattleActionData___c__DisplayClass276_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass276_0_TypeInfo,
                                                       *(_QWORD *)&effectTiming,
                                                       resultOnGetFailed);
  BattleActionData___c__DisplayClass276_0___ctor(v15, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0LL);
  if ( !v15 )
    ((void (__fastcall __noreturn *)(_QWORD))sub_B0D97C)(FuncIndexForSplitFuncSequence);
  v15->fields.curiousFuncIndex = FuncIndexForSplitFuncSequence;
  if ( (*(_QWORD *)&FuncIndexForSplitFuncSequence & 0xFF00000000LL) == 0 )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v19);
  if ( effectTiming == 2 )
  {
    v23 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v20, v21);
    v24 = &Method_BattleActionData___c__DisplayClass276_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v23 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v20, v21);
    v24 = &Method_BattleActionData___c__DisplayClass276_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v23 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v20, v21);
  v24 = &Method_BattleActionData___c__DisplayClass276_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v26 = (System_Func_TSource__bool__o *)v23;
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)v15,
    *v24,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v26,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v27,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget(
        BattleActionData_o *this,
        bool isAtkFirst,
        bool isAtkLast,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActionData___c__DisplayClass281_0_o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_int__int__o *v18; // x24
  System_Collections_Generic_Dictionary_int__int__o *v19; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_dicTarget; // x22
  const MethodInfo *v21; // x2
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_42116CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData___ctor__, isAtkFirst);
    sub_B0D8A4(&System_Action_BattleActionData__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData__ForEach__, v12);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass281_0__GetMaxSideEffectCountByTarget_b__0__, v13);
    sub_B0D8A4(&BattleActionData___c__DisplayClass281_0_TypeInfo, v14);
    byte_42116CD = 1;
  }
  v15 = (BattleActionData___c__DisplayClass281_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass281_0_TypeInfo,
                                                       isAtkFirst,
                                                       isAtkLast);
  BattleActionData___c__DisplayClass281_0___ctor(v15, 0LL);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v16,
                                                               v17);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v15 )
    goto LABEL_13;
  v15->fields.dicTarget = v18;
  p_dicTarget = &v15->fields.dicTarget;
  sub_B0D840(&v15->fields, v18);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(this, &v15->fields.dicTarget, v21);
    sideEffectList = this->fields.sideEffectList;
    v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_BattleActionData__TypeInfo,
                                                                                 v23,
                                                                                 v24);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v25,
      (Il2CppObject *)v15,
      Method_BattleActionData___c__DisplayClass281_0__GetMaxSideEffectCountByTarget_b__0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData___ctor__);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)sideEffectList,
      (System_Action_T__o *)v25,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v19 = *p_dicTarget;
  if ( !*p_dicTarget )
LABEL_13:
    sub_B0D97C(v19);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v19,
         (const MethodInfo_2E69454 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v19 = *p_dicTarget;
    if ( *p_dicTarget )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v19,
                 (const MethodInfo_2E695FC *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
    goto LABEL_13;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget_18751776(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleActionData___c__DisplayClass283_0_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__int__o *v16; // x23
  System_Collections_Generic_Dictionary_int__int__o *dicTarget; // x0
  System_Collections_Generic_Dictionary_int__int__o **p_dicTarget; // x21
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_42116CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData___ctor__, *(_QWORD *)&targetType);
    sub_B0D8A4(&System_Action_BattleActionData__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass283_0__GetMaxSideEffectCountByTarget_b__0__, v11);
    sub_B0D8A4(&BattleActionData___c__DisplayClass283_0_TypeInfo, v12);
    byte_42116CF = 1;
  }
  v13 = (BattleActionData___c__DisplayClass283_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass283_0_TypeInfo,
                                                       *(_QWORD *)&targetType,
                                                       method);
  BattleActionData___c__DisplayClass283_0___ctor(v13, 0LL);
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v14,
                                                               v15);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.dicTarget = v16;
  p_dicTarget = &v13->fields.dicTarget;
  sub_B0D840(&v13->fields, v16);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v19);
  v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleActionData__TypeInfo,
                                                                               v21,
                                                                               v22);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v23,
    (Il2CppObject *)v13,
    Method_BattleActionData___c__DisplayClass283_0__GetMaxSideEffectCountByTarget_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    SideEffectList,
    (System_Action_T__o *)v23,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData___);
  dicTarget = v13->fields.dicTarget;
  if ( !dicTarget )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         dicTarget,
         (const MethodInfo_2E69454 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    dicTarget = *p_dicTarget;
    if ( *p_dicTarget )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 dicTarget,
                 (const MethodInfo_2E695FC *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
LABEL_9:
    sub_B0D97C(dicTarget);
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

  if ( (byte_42116CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int___, *(_QWORD *)&effectIndex);
    byte_42116CC = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0LL,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__24154928(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_1709330 *)Method_BasicHelper_IndexValue_int___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o **p_moveToSubMemberList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20

  if ( (byte_42116A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo, v4);
    byte_42116A8 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = &this->fields.moveToSubMemberList;
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo,
                                                                                                   method,
                                                                                                   v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    *p_moveToSubMemberList = (struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o *)v6;
    sub_B0D840(p_moveToSubMemberList, v6);
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


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData(
        BattleActionData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  BattleActionData_o *v5; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42116D3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&type);
    byte_42116D3 = 1;
  }
  v5 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, *(_QWORD *)&type, method);
  BattleActionData___ctor(v5, v6);
  if ( !v5 )
    sub_B0D97C(v7);
  v5->fields.actorId = this->fields.actorId;
  v5->fields.targetId = this->fields.targetId;
  BattleActionData__addSideEffectActionData(this, v5, type, v8);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData_18753744(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_B0D97C(0LL);
  result->fields.targetId = overwriteTargetId;
  return result;
}


void __fastcall BattleActionData__PreActionProcess(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActionData___c__DisplayClass121_0_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v20; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x21
  Il2CppObject *v23; // x22
  struct BattleActionData___c_StaticFields *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x21

  if ( (byte_4211686 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_BuffData___ctor__, data);
    sub_B0D8A4(&System_Action_BattleActionData_BuffData__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v8);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BuffData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleActionData___c__PreActionProcess_b__121_0__, v11);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass121_0__PreActionProcess_b__1__, v12);
    sub_B0D8A4(&BattleActionData___c__DisplayClass121_0_TypeInfo, v13);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v14);
    byte_4211686 = 1;
  }
  v15 = (BattleActionData___c__DisplayClass121_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass121_0_TypeInfo,
                                                       data,
                                                       method);
  BattleActionData___c__DisplayClass121_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.data = data;
  sub_B0D840(&v15->fields, data);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist && !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v20 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v20 = BattleActionData___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
    if ( !_9__121_0 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_BattleActionData_BuffData__bool__TypeInfo,
                                                                                       v17,
                                                                                       v18);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__121_0,
        v23,
        Method_BattleActionData___c__PreActionProcess_b__121_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
      v24 = BattleActionData___c_TypeInfo->static_fields;
      v24->__9__121_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__121_0;
      sub_B0D840(&v24->__9__121_0, _9__121_0);
    }
    v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (System_Func_TSource__bool__o *)_9__121_0,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_BattleActionData_BuffData_(
                                                           v25,
                                                           (const MethodInfo_1B4F1D4 *)Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_BattleActionData_BuffData__TypeInfo,
                                                                                 v27,
                                                                                 v28);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v29,
      (Il2CppObject *)v15,
      Method_BattleActionData___c__DisplayClass121_0__PreActionProcess_b__1__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v26,
      (System_Action_T__o *)v29,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void __fastcall BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x19
  BattleActionData___c_c *v9; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__176_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActionData___c_StaticFields *v13; // x0

  if ( (byte_42116A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleActionData_BuffData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v5);
    sub_B0D8A4(&Method_BattleActionData___c__ResetAllCheckDead_b__176_0__, v6);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v7);
    byte_42116A0 = 1;
  }
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
    _9__176_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__176_0;
    if ( !_9__176_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__176_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                         System_Action_BattleActionData_BuffData__TypeInfo,
                                                                                         method,
                                                                                         v2);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__176_0,
        v12,
        Method_BattleActionData___c__ResetAllCheckDead_b__176_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BuffData___ctor__);
      v13 = BattleActionData___c_TypeInfo->static_fields;
      v13->__9__176_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__176_0;
      sub_B0D840(&v13->__9__176_0, _9__176_0);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)buffdatalist,
      (System_Action_T__o *)_9__176_0,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  BattleActionData_AfterChangeTakeOverField_o *v12; // x22

  v8 = this;
  if ( (byte_42116B4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_AfterChangeField_TypeInfo, fieldChange);
    this = (BattleActionData_o *)sub_B0D8A4(&BattleActionData_AfterChangeTakeOverField_TypeInfo, v9);
    byte_42116B4 = 1;
  }
  if ( !baseVals )
LABEL_9:
    sub_B0D97C(this);
  if ( DataVals__isParam(baseVals, 107, 0LL) )
  {
    v12 = (BattleActionData_AfterChangeTakeOverField_o *)sub_B0D974(
                                                           BattleActionData_AfterChangeTakeOverField_TypeInfo,
                                                           v10,
                                                           v11);
    BattleActionData_AfterChangeTakeOverField___ctor(v12, fieldChange, fieldEnvData, 0LL);
    if ( !v8 )
      goto LABEL_9;
  }
  else
  {
    v12 = (BattleActionData_AfterChangeTakeOverField_o *)sub_B0D974(
                                                           BattleActionData_AfterChangeField_TypeInfo,
                                                           v10,
                                                           v11);
    BattleActionData_AfterChangeField___ctor((BattleActionData_AfterChangeField_o *)v12, fieldChange, 0LL);
    if ( !v8 )
      goto LABEL_9;
  }
  v8->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v12;
  sub_B0D840(&v8->fields._ChangeField_k__BackingField, v12);
}


void __fastcall BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Func_int__bool__o *v9; // x21
  int32_t targetId; // w0

  if ( (byte_421167F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, targetIds);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, v5);
    sub_B0D8A4(&Method_BattleActionData__SetFirstAtkMainTargetId_b__105_0__, v6);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v8);
    byte_421167F = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v9 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, targetIds, method);
    System_Func_int__bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__105_0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__24145568(
           targetIds,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
    }
    this->fields._FirstAtkMainTargetId_k__BackingField = targetId;
  }
}


void __fastcall BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  BattleActionData___c__DisplayClass125_0_o *v17; // x19
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  BattleActionData___c_c *v23; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__125_0; // x21
  Il2CppObject *v26; // x22
  struct BattleActionData___c_StaticFields *v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  BattleActionData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_T__o *v36; // x19
  struct BattleActionData___c_StaticFields *v37; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__125_2; // x20
  Il2CppObject *v39; // x21
  struct BattleActionData___c_StaticFields *v40; // x0

  if ( (byte_421168A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_BaseData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleActionData_BaseData__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___, v7);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BaseData__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BaseData__int___ctor__, v9);
    sub_B0D8A4(&System_Func_BattleActionData_BaseData__int__TypeInfo, v10);
    sub_B0D8A4(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_0__, v12);
    sub_B0D8A4(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_2__, v13);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass125_0__SetFuncSideEffectTrigger_b__1__, v14);
    sub_B0D8A4(&BattleActionData___c__DisplayClass125_0_TypeInfo, v15);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v16);
    byte_421168A = 1;
  }
  v17 = (BattleActionData___c__DisplayClass125_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass125_0_TypeInfo,
                                                       method,
                                                       v2);
  BattleActionData___c__DisplayClass125_0___ctor(v17, 0LL);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v18);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, v20) )
  {
    v23 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v23 = BattleActionData___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__125_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__125_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleActionData_BaseData__int__TypeInfo,
                                                                                    v21,
                                                                                    v22);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__125_0,
        v26,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_0__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleActionData_BaseData__int___ctor__);
      v27 = BattleActionData___c_TypeInfo->static_fields;
      v27->__9__125_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__125_0;
      sub_B0D840(&v27->__9__125_0, _9__125_0);
    }
    v28 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__125_0,
            (const MethodInfo_1B4DF7C *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v17 )
      sub_B0D97C(v28);
    v17->fields.lastIndex = v28;
    v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_BattleActionData_BaseData__bool__TypeInfo,
                                                                               v29,
                                                                               v30);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v31,
      (Il2CppObject *)v17,
      Method_BattleActionData___c__DisplayClass125_0__SetFuncSideEffectTrigger_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v31,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v35 = BattleActionData___c_TypeInfo;
    v36 = (System_Collections_Generic_IEnumerable_T__o *)v32;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v35 = BattleActionData___c_TypeInfo;
    }
    v37 = v35->static_fields;
    _9__125_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v37->__9__125_2;
    if ( !_9__125_2 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v37 = BattleActionData___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)v37->__9;
      _9__125_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                         System_Action_BattleActionData_BaseData__TypeInfo,
                                                                                         v33,
                                                                                         v34);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__125_2,
        v39,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_2__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BaseData___ctor__);
      v40 = BattleActionData___c_TypeInfo->static_fields;
      v40->__9__125_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__125_2;
      sub_B0D840(&v40->__9__125_2, _9__125_2);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v36,
      (System_Action_T__o *)_9__125_2,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void __fastcall BattleActionData__SetFuncTargetAllDead(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleActionData___c__DisplayClass137_0_o *v18; // x21
  _BOOL8 isEnemyID; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HpDecreaseFuncTargetHash_k__BackingField; // x22
  System_Func_int__BattleActionData_SideEffectData__o *v23; // x23
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v30; // x20
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  BattleActionData___c_c *v34; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__137_1; // x21
  Il2CppObject *v37; // x22
  struct BattleActionData___c_StaticFields *v38; // x0

  if ( (byte_421168D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleServantData____67954192, data);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_BattleServantData___, v5);
    sub_B0D8A4(&Method_BattleData_getServantData__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_B0D8A4(&Method_System_Func_int__BattleServantData___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v12);
    sub_B0D8A4(&System_Func_int__BattleServantData__TypeInfo, v13);
    sub_B0D8A4(&Method_BattleActionData___c__SetFuncTargetAllDead_b__137_1__, v14);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass137_0__SetFuncTargetAllDead_b__0__, v15);
    sub_B0D8A4(&BattleActionData___c__DisplayClass137_0_TypeInfo, v16);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v17);
    byte_421168D = 1;
  }
  v18 = (BattleActionData___c__DisplayClass137_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass137_0_TypeInfo,
                                                       data,
                                                       method);
  BattleActionData___c__DisplayClass137_0___ctor(v18, 0LL);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0LL), !v18) )
    sub_B0D97C(isEnemyID);
  v18->fields.isActorEnemy = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v23 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                 System_Func_int__BattleServantData__TypeInfo,
                                                                 v20,
                                                                 v21);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v23,
    (Il2CppObject *)data,
    Method_BattleData_getServantData__,
    (const MethodInfo_26145DC *)Method_System_Func_int__BattleServantData___ctor__);
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                         HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v23,
                                                         (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v25 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v24,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass137_0__SetFuncTargetAllDead_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v30 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v29,
          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v30, v31) )
  {
    v34 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v34 = BattleActionData___c_TypeInfo;
    }
    static_fields = v34->static_fields;
    _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__137_1;
    if ( !_9__137_1 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)static_fields->__9;
      _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_BattleServantData__bool__TypeInfo,
                                                                                       v32,
                                                                                       v33);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__137_1,
        v37,
        Method_BattleActionData___c__SetFuncTargetAllDead_b__137_1__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
      v38 = BattleActionData___c_TypeInfo->static_fields;
      v38->__9__137_1 = (struct System_Func_BattleServantData__bool__o *)_9__137_1;
      sub_B0D840(&v38->__9__137_1, _9__137_1);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                                           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v30,
                                                           (System_Func_T__bool__o *)_9__137_1,
                                                           (const MethodInfo_17071E4 *)Method_BasicHelper_Any_BattleServantData____67954192);
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
  struct BattleActionData_GimmickData_o *v13; // x0

  if ( (byte_42116B2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_GimmickData_TypeInfo, indexArray);
    byte_42116B2 = 1;
  }
  v11 = (BattleActionData_GimmickData_o *)sub_B0D974(BattleActionData_GimmickData_TypeInfo, indexArray, startArray);
  BattleActionData_GimmickData___ctor(v11, 0LL);
  this->fields.gimmickData = v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_B0D840(p_gimmickData, v11);
  v13 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v13->fields.indexArray = indexArray;
  sub_B0D840(&v13->fields.indexArray, indexArray);
  v13 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v13->fields.startVoiceIdArray = startArray,
        sub_B0D840(&v13->fields.startVoiceIdArray, startArray),
        (v13 = *p_gimmickData) == 0LL)
    || (v13->fields.resultVoiceIdArray = resultArray,
        sub_B0D840(&v13->fields.resultVoiceIdArray, resultArray),
        (v13 = *p_gimmickData) == 0LL) )
  {
LABEL_8:
    sub_B0D97C(v13);
  }
  v13->fields.animationTypes = types;
  sub_B0D840(&v13->fields.animationTypes, types);
}


void __fastcall BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_T__o *v11; // x19
  BattleActionData___c_c *v12; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__126_0; // x20
  Il2CppObject *v15; // x21
  struct BattleActionData___c_StaticFields *v16; // x0

  if ( (byte_421168B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_BaseData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleActionData_BaseData__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v5);
    sub_B0D8A4(&Method_BattleActionData___c__SetPopupOnce_b__126_0__, v6);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v7);
    byte_421168B = 1;
  }
  ExecOrderArray = BattleActionData__GetExecOrderArrayEx(this, -1, 0, v2);
  if ( ExecOrderArray )
  {
    v11 = (System_Collections_Generic_IEnumerable_T__o *)ExecOrderArray;
    v12 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v12 = BattleActionData___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__126_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__126_0;
    if ( !_9__126_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__126_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                         System_Action_BattleActionData_BaseData__TypeInfo,
                                                                                         v9,
                                                                                         v10);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__126_0,
        v15,
        Method_BattleActionData___c__SetPopupOnce_b__126_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BaseData___ctor__);
      v16 = BattleActionData___c_TypeInfo->static_fields;
      v16->__9__126_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__126_0;
      sub_B0D840(&v16->__9__126_0, _9__126_0);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v11,
      (System_Action_T__o *)_9__126_0,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  sub_B0D840(&this->fields._ShiftGauge_k__BackingField, shiftGauge);
}


void __fastcall BattleActionData__SetSideEffectCountByTarget(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_int__int__o **dicTarget,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActionData___c__DisplayClass282_0_o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x22
  System_Collections_Generic_List_int__o **p_targetList; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x22
  int32_t current; // w20
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-50h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_42116CE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, dicTarget);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass282_0__SetSideEffectCountByTarget_b__0__, v13);
    sub_B0D8A4(&BattleActionData___c__DisplayClass282_0_TypeInfo, v14);
    byte_42116CE = 1;
  }
  memset(&v26, 0, sizeof(v26));
  value = 0;
  v15 = (BattleActionData___c__DisplayClass282_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass282_0_TypeInfo,
                                                       dicTarget,
                                                       method);
  BattleActionData___c__DisplayClass282_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  v15->fields.__4__this = this;
  sub_B0D840(&v15->fields, this);
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v17, v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  p_targetList = &v15->fields.targetList;
  v15->fields.targetList = v19;
  sub_B0D840(&v15->fields.targetList, v19);
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v15,
    Method_BattleActionData___c__DisplayClass282_0__SetSideEffectCountByTarget_b__0__,
    0LL);
  if ( !v23 || (System_Action__Invoke(v23, 0LL), (v16 = *p_targetList) == 0LL) )
LABEL_14:
    sub_B0D97C(v16);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    v16,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_B0D97C(0LL);
    current = v26.fields.current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v26.fields.current,
      &value,
      (const MethodInfo_2E6B464 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActionData__SetState(BattleActionData_o *this, int32_t s, const MethodInfo *method)
{
  this->fields.state = s;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__SetTypeEnemyCutIn(
        BattleActionData_o *this,
        int32_t effectType,
        const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  int32_t *p_TYPE_ENEMY_SPELL_CUTIN; // x8
  BattleActionData_c *v7; // x0

  if ( (byte_42116BD & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, *(_QWORD *)&effectType);
    byte_42116BD = 1;
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
  sub_B0D840(&this->fields._WaitCond_k__BackingField, cond);
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
  int32_t MaxSideEffectCountByTarget_18751776; // w0
  float v9; // s0
  bool result; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_18751776 = BattleActionData__GetMaxSideEffectCountByTarget_18751776(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_18751776 < 1 )
    return 0;
  v9 = totalTime / (float)(MaxSideEffectCountByTarget_18751776 + existTriggerFunc);
  result = 1;
  *interval = v9;
  return result;
}


void __fastcall BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleActionData_TransformServant__o **p_transformServantlist; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20

  if ( (byte_42116AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo, v4);
    byte_42116AA = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = &this->fields.transformServantlist;
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo,
                                                                                                   method,
                                                                                                   v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    *p_transformServantlist = (struct System_Collections_Generic_List_BattleActionData_TransformServant__o *)v6;
    sub_B0D840(p_transformServantlist, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__UpdateDirectIntervalBuffData(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  BattleActionData___c__DisplayClass149_0_o *v19; // x19
  struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *IntervalBuffDict_k__BackingField; // x0
  const MethodInfo *v21; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p__9__0; // x20
  const MethodInfo *v24; // x1
  System_Action_T__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x23
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  __int128 v31; // [xsp+0h] [xbp-80h] BYREF
  __int128 v32; // [xsp+10h] [xbp-70h]
  __int128 v33; // [xsp+20h] [xbp-60h]

  if ( (byte_4211692 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, *(_QWORD *)&targetType);
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v11);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v16);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass149_0__UpdateDirectIntervalBuffData_b__0__, v17);
    sub_B0D8A4(&BattleActionData___c__DisplayClass149_0_TypeInfo, v18);
    byte_4211692 = 1;
  }
  v32 = 0u;
  v33 = 0u;
  v31 = 0u;
  v19 = (BattleActionData___c__DisplayClass149_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass149_0_TypeInfo,
                                                       *(_QWORD *)&targetType,
                                                       method);
  BattleActionData___c__DisplayClass149_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_17;
  v19->fields.targetType = targetType;
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
         v21) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  v19->fields.buffMst = (struct BuffMaster_o *)Master_WarQuestSelectionMaster;
  sub_B0D840(&v19->fields, Master_WarQuestSelectionMaster);
  IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_17:
    sub_B0D97C(IntervalBuffDict_k__BackingField);
  System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
    (System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer__o *)IntervalBuffDict_k__BackingField,
    (const MethodInfo_2670CBC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  p__9__0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v19->fields.__9__0;
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
            (const MethodInfo_22992A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v25 = (System_Action_T__o *)*((_QWORD *)&v32 + 1);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33, v24) )
    {
      v29 = *p__9__0;
      if ( !*p__9__0 )
      {
        v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                   v27,
                                                                                   v28);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v29,
          (Il2CppObject *)v19,
          Method_BattleActionData___c__DisplayClass149_0__UpdateDirectIntervalBuffData_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        *p__9__0 = v29;
        sub_B0D840(&v19->fields.__9__0, v29);
      }
      v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                             v26,
                                                             (System_Func_TSource__bool__o *)v29,
                                                             (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v30,
        v25,
        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
    (const MethodInfo_2299420 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void __fastcall BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v13; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__157_0; // x21
  Il2CppObject *v16; // x22
  struct BattleActionData___c_StaticFields *v17; // x0
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x19
  BattleActionData___c_c *v19; // x0
  struct BattleActionData___c_StaticFields *v20; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__157_1; // x20
  Il2CppObject *v22; // x21
  struct BattleActionData___c_StaticFields *v23; // x0

  if ( (byte_4211695 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_HealData___ctor__, method);
    sub_B0D8A4(&Method_System_Action_BattleActionData_BuffData___ctor__, v4);
    sub_B0D8A4(&System_Action_BattleActionData_HealData__TypeInfo, v5);
    sub_B0D8A4(&System_Action_BattleActionData_BuffData__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__, v8);
    sub_B0D8A4(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_0__, v9);
    sub_B0D8A4(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_1__, v10);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v11);
    byte_4211695 = 1;
  }
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v13 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v13 = BattleActionData___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__157_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__157_0;
    if ( !_9__157_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__157_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                         System_Action_BattleActionData_BuffData__TypeInfo,
                                                                                         method,
                                                                                         v2);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__157_0,
        v16,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_BuffData___ctor__);
      v17 = BattleActionData___c_TypeInfo->static_fields;
      v17->__9__157_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__157_0;
      sub_B0D840(&v17->__9__157_0, _9__157_0);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)buffdatalist,
      (System_Action_T__o *)_9__157_0,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v19 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v19 = BattleActionData___c_TypeInfo;
    }
    v20 = v19->static_fields;
    _9__157_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v20->__9__157_1;
    if ( !_9__157_1 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v20 = BattleActionData___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__157_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                         System_Action_BattleActionData_HealData__TypeInfo,
                                                                                         method,
                                                                                         v2);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__157_1,
        v22,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_1__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_HealData___ctor__);
      v23 = BattleActionData___c_TypeInfo->static_fields;
      v23->__9__157_1 = (struct System_Action_BattleActionData_HealData__o *)_9__157_1;
      sub_B0D840(&v23->__9__157_1, _9__157_1);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)healdatalist,
      (System_Action_T__o *)_9__157_1,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void __fastcall BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  BattleActionData___c_c *v10; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__147_0; // x20
  Il2CppObject *v13; // x21
  struct BattleActionData___c_StaticFields *v14; // x0

  if ( (byte_4211690 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleServantData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleServantData__TypeInfo, v3);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleServantData___, v4);
    sub_B0D8A4(&Method_BattleActionData___c__UpdateIntervalBuff_b__147_0__, v5);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v6);
    byte_4211690 = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleActionData_o *, Il2CppMethodPointer))this->klass->vtable._7_UpdateIntervalBuffData.method)(
                                                        this,
                                                        this->klass->vtable._8_FixDisplayWaitingIntervalBuff.methodPtr);
  v10 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v10 = BattleActionData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__147_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_BattleServantData__TypeInfo,
                                                                                       v7,
                                                                                       v8);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__147_0,
      v13,
      Method_BattleActionData___c__UpdateIntervalBuff_b__147_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleServantData___ctor__);
    v14 = BattleActionData___c_TypeInfo->static_fields;
    v14->__9__147_0 = (struct System_Action_BattleServantData__o *)_9__147_0;
    sub_B0D840(&v14->__9__147_0, _9__147_0);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v9,
    (System_Action_T__o *)_9__147_0,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *__fastcall BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v16; // x20
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v19; // x21
  _BOOL8 v20; // x0
  WarBoardAIRoute_RouteData_o *v21; // x22
  __int128 v23[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v24; // [xsp+30h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+40h] [xbp-60h]
  __int128 v26; // [xsp+50h] [xbp-50h]

  if ( (byte_4211691 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v15);
    byte_4211691 = 1;
  }
  *(_OWORD *)action = 0u;
  v26 = 0u;
  v24 = 0u;
  v16 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_BattleServantData__TypeInfo,
                                                                             method,
                                                                             v2);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v16,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          v17) )
  {
    IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v23,
      (System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer__o *)IntervalBuffDict_k__BackingField,
      (const MethodInfo_2670CBC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    *(_OWORD *)action = v23[1];
    v26 = v23[2];
    v24 = v23[0];
    v19 = 0LL;
    while ( 1 )
    {
      v20 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v24,
              (const MethodInfo_22992A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v20 )
        break;
      v21 = (WarBoardAIRoute_RouteData_o *)action[0];
      if ( (_QWORD)v26 )
        v19 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v26;
      if ( (_QWORD)v26 )
      {
        if ( !v19 )
          sub_B0D97C(v20);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v19,
          action[1],
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      }
      if ( v21 )
      {
        if ( !v16 )
          sub_B0D97C(v20);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v16,
          v21,
          (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v24,
      (const MethodInfo_2299420 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_20:
      sub_B0D97C(IntervalBuffDict_k__BackingField);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)IntervalBuffDict_k__BackingField,
      (const MethodInfo_2670894 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v16;
}


void __fastcall BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
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

  if ( (byte_42116E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_42116E3 = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *damagedatalist; // x21
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  const MethodInfo *v16; // x2

  if ( (byte_42116C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___, addData);
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___, v5);
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_HealData___, v6);
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___, v7);
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___, v8);
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___, v9);
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___, v10);
    sub_B0D8A4(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__, v12);
    byte_42116C5 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleActionData__get_damagedatalist(
                                                                                         this,
                                                                                         (const MethodInfo *)addData);
    v15 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v14);
    if ( !damagedatalist )
      sub_B0D97C(v15);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      damagedatalist,
      v15,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_170A378 *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    this->fields.redrawCommandCard |= addData->fields.redrawCommandCard;
    BattleActionData__addReflectLogicResultServantIds(this, addData->fields.servantLogicResultList, v16);
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
        const MethodInfo_170A378 *method)
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

  if ( addDataList )
  {
    v4 = *dataList;
    if ( !*dataList )
    {
      _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
      if ( (BYTE2(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(method->rgctx_data->_0_System_Collections_Generic_List_T_);
      v9 = (System_Collections_Generic_List_T__o *)sub_B0D974(
                                                     _0_System_Collections_Generic_List_T,
                                                     addDataList,
                                                     dataList);
      method->rgctx_data->_1_System_Collections_Generic_List_T___ctor->methodPointer();
      *dataList = v9;
      sub_B0D840((BattleServantConfConponent_o *)dataList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
      v4 = *dataList;
      if ( !*dataList )
        sub_B0D97C(0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t targetId; // w22
  BuffList_ACTION_array *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  BattleActionData_SideEffectData_o *v16; // x21

  if ( (byte_421169B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__, sideEffectList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__, v10);
    this = (BattleActionData_o *)sub_B0D8A4(&BattleActionData_SideEffectData_TypeInfo, v11);
    byte_421169B = 1;
  }
  if ( !actList )
    goto LABEL_9;
  if ( actList->fields._size >= 1 )
  {
    if ( damage )
    {
      targetId = damage->fields.targetId;
      v13 = (BuffList_ACTION_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                       (System_Collections_Generic_List_Voice_BATTLE__o *)actList,
                                       (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__);
      v16 = (BattleActionData_SideEffectData_o *)sub_B0D974(BattleActionData_SideEffectData_TypeInfo, v14, v15);
      BattleActionData_SideEffectData___ctor(v16, targetId, v13, 0LL);
      if ( sideEffectList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sideEffectList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__);
        System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
          (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)actList,
          (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_BuffList_ACTION__Clear__);
        return;
      }
    }
LABEL_9:
    sub_B0D97C(this);
  }
}


void __fastcall BattleActionData__addReflectAttackSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v6; // 0:x1.8

  if ( (byte_42116D8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__, pairAttackAndTarget);
    byte_42116D8 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    sub_B0D97C(0LL);
  v6 = pairAttackAndTarget;
  System_Collections_Generic_List_KeyValuePair_int__int____Add(
    attackSideEffectedSvtIds,
    v6,
    (const MethodInfo_2D28CE0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__addReflectDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_42116D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&uniqueSvtId);
    byte_42116D6 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_int___Add(
    damageSideEffectedSvtIds,
    uniqueSvtId,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__addReflectLogicResultServantId(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleActionData___c__DisplayClass304_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v19; // x19
  BattleActionData_ServantLogicResultData_o *v20; // x21

  if ( (byte_42116DA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
      *(_QWORD *)&uniqueSvtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleActionData_ServantLogicResultData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo, v7);
    sub_B0D8A4(&BattleActionData_ServantLogicResultData_TypeInfo, v8);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass304_0__addReflectLogicResultServantId_b__0__, v9);
    sub_B0D8A4(&BattleActionData___c__DisplayClass304_0_TypeInfo, v10);
    byte_42116DA = 1;
  }
  v11 = (BattleActionData___c__DisplayClass304_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass304_0_TypeInfo,
                                                       *(_QWORD *)&uniqueSvtId,
                                                       method);
  BattleActionData___c__DisplayClass304_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v11->fields.uniqueSvtId = uniqueSvtId;
  servantLogicResultList = this->fields.servantLogicResultList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo,
                                                                   v13,
                                                                   v14);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass304_0__addReflectLogicResultServantId_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleActionData_ServantLogicResultData___ctor__);
  if ( !servantLogicResultList )
    goto LABEL_9;
  if ( System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
         (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)servantLogicResultList,
         (System_Predicate_T__o *)v16,
         (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v19 = this->fields.servantLogicResultList;
  v20 = (BattleActionData_ServantLogicResultData_o *)sub_B0D974(
                                                       BattleActionData_ServantLogicResultData_TypeInfo,
                                                       v17,
                                                       v18);
  BattleActionData_ServantLogicResultData___ctor(v20, 0LL);
  if ( !v20 || (v20->fields.uniqueId = v11->fields.uniqueSvtId, !v19) )
LABEL_9:
    sub_B0D97C(v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__);
}


void __fastcall BattleActionData__addReflectLogicResultServantIds(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *addLogicResultList,
        const MethodInfo *method)
{
  BattleActionData_o *v4; // x20
  __int64 v5; // x1
  int32_t size; // w8
  __int64 v7; // x21
  BattleActionData_ServantLogicResultData_o *v8; // x8

  v4 = this;
  if ( (byte_42116D9 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
      addLogicResultList);
    this = (BattleActionData_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__,
                                   v5);
    byte_42116D9 = 1;
  }
  if ( addLogicResultList )
  {
    size = addLogicResultList->fields._size;
    if ( size >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( size <= (unsigned int)v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v8 = addLogicResultList->fields._items->m_Items[v7];
        if ( !v8 )
          sub_B0D97C(this);
        BattleActionData__addReflectLogicResultServantId(v4, v8->fields.uniqueId, method);
        size = addLogicResultList->fields._size;
        ++v7;
      }
      while ( (int)v7 < size );
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
  if ( (byte_42116D1 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_BattleActionData__Add__,
                                   sideEffectActionData);
    byte_42116D1 = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v6->fields.sideEffectList) == 0LL) )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)sideEffectActionData,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData__Add__);
}


bool __fastcall BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_42116AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__, method);
    byte_42116AD = 1;
  }
  summonServantList = this->fields.summonServantList;
  return summonServantList && summonServantList->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BuffData_array *__fastcall BattleActionData__getBuffList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleActionData___c__DisplayClass175_0_o *v12; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x22
  struct System_Collections_Generic_List_BattleActionData_BuffData__o **p_buffdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x19

  v3 = funcIndex;
  if ( (byte_421169F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleActionData_BuffData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleActionData_BuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass175_0__getBuffList_b__0__, v10);
    sub_B0D8A4(&BattleActionData___c__DisplayClass175_0_TypeInfo, v11);
    byte_421169F = 1;
  }
  v12 = (BattleActionData___c__DisplayClass175_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass175_0_TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       method);
  BattleActionData___c__DisplayClass175_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.funcIndex = v3;
  buffdatalist = this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = &this->fields.buffdatalist;
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo,
                                                                                                    v14,
                                                                                                    v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    *p_buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v18;
    sub_B0D840(p_buffdatalist, v18);
    v3 = v12->fields.funcIndex;
    buffdatalist = *p_buffdatalist;
  }
  if ( v3 == -1 )
  {
    if ( buffdatalist )
    {
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
    }
LABEL_13:
    sub_B0D97C(All);
  }
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleActionData_BuffData__TypeInfo,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_BattleActionData___c__DisplayClass175_0__getBuffList_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleActionData_BuffData___ctor__);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)buffdatalist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
}


BattleActionData_ChangeBg_o *__fastcall BattleActionData__getChangeBg(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *changeBgList; // x8

  if ( (byte_42116B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__, v3);
    byte_42116B1 = 1;
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

  if ( (byte_42116D0 & 1) == 0 )
  {
    sub_B0D8A4(&StageEntity_TypeInfo, method);
    byte_42116D0 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x4
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421169A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo, v9);
    byte_421169A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = BattleActionData__get_damagedatalist(this, v11);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields.current )
      sub_B0D97C(v13);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v13,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v10,
      (BattleActionData_DamageData_o *)v16.fields.current,
      (System_Collections_Generic_List_BuffList_ACTION__o *)v16.fields.current[5].klass,
      v14);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v10 )
LABEL_11:
    sub_B0D97C(damagedatalist);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_DamageData_array *__fastcall BattleActionData__getDamageList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleActionData___c__DisplayClass164_0_o *v10; // x21
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *damagedatalist; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  bool v15; // zf
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v16; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_4211698 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleActionData_DamageData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleActionData_DamageData__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass164_0__getDamageList_b__0__, v8);
    sub_B0D8A4(&BattleActionData___c__DisplayClass164_0_TypeInfo, v9);
    byte_4211698 = 1;
  }
  v10 = (BattleActionData___c__DisplayClass164_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass164_0_TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       method);
  BattleActionData___c__DisplayClass164_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  v10->fields.funcIndex = funcIndex;
  damagedatalist = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)BattleActionData__get_damagedatalist(
                                                                                   this,
                                                                                   v12);
  v15 = funcIndex == -1;
  v16 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)damagedatalist;
  if ( v15 )
  {
    if ( damagedatalist )
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    damagedatalist,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
LABEL_10:
    sub_B0D97C(damagedatalist);
  }
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleActionData_DamageData__TypeInfo,
                                                                   v13,
                                                                   v14);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleActionData___c__DisplayClass164_0__getDamageList_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleActionData_DamageData___ctor__);
  if ( !v16 )
    goto LABEL_10;
  damagedatalist = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                   v16,
                                                                                   (System_Predicate_T__o *)v17,
                                                                                   (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_10;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                damagedatalist,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getDamageTargetIdList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_HashSet_int__o *v11; // x19
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  _BOOL8 v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211699 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v8);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v10);
    byte_4211699 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  damagedatalist = BattleActionData__get_damagedatalist(this, v12);
  if ( !damagedatalist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v14 )
      break;
    if ( !v16.fields.current )
      sub_B0D97C(v14);
    if ( !v11 )
      sub_B0D97C(v14);
    System_Collections_Generic_HashSet_int___Add(
      v11,
      HIDWORD(v16.fields.current[1].monitor),
      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v11,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w21
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *funcTargetPlayerTypeList; // x20
  int32_t size; // w8
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42116E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, v8);
    this = (BattleActionData_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__,
                                   v9);
    byte_42116E0 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( (index & 0x80000000) != 0 )
  {
    this = (BattleActionData_o *)v4->fields.funcTargetPlayerTypeList;
    if ( this )
    {
      System_Collections_Generic_List_Target_PlayerTypeFlag___GetEnumerator(
        &v14,
        (System_Collections_Generic_List_Target_PlayerTypeFlag__o *)this,
        (const MethodInfo_2FB3D1C *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v10 = 0;
      while ( System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___MoveNext(
                &v14,
                (const MethodInfo_21108B0 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v10 |= LODWORD(v14.fields.current);
      System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___Dispose(
        &v14,
        (const MethodInfo_21108AC *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v10;
    }
LABEL_15:
    sub_B0D97C(this);
  }
  v10 = 0;
  funcTargetPlayerTypeList = v4->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_15;
  size = funcTargetPlayerTypeList->fields._size;
  if ( size > index )
  {
    if ( size <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    return funcTargetPlayerTypeList->fields._items->m_Items[index + 1];
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_HealData_array *__fastcall BattleActionData__getHealList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleActionData___c__DisplayClass182_0_o *v12; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x22
  struct System_Collections_Generic_List_BattleActionData_HealData__o **p_healdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x19

  v3 = funcIndex;
  if ( (byte_42116A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleActionData_HealData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleActionData_HealData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass182_0__getHealList_b__0__, v10);
    sub_B0D8A4(&BattleActionData___c__DisplayClass182_0_TypeInfo, v11);
    byte_42116A3 = 1;
  }
  v12 = (BattleActionData___c__DisplayClass182_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass182_0_TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       method);
  BattleActionData___c__DisplayClass182_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.funcIndex = v3;
  healdatalist = this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = &this->fields.healdatalist;
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleActionData_HealData__TypeInfo,
                                                                                                    v14,
                                                                                                    v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    *p_healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)v18;
    sub_B0D840(p_healdatalist, v18);
    v3 = v12->fields.funcIndex;
    healdatalist = *p_healdatalist;
  }
  if ( v3 == -1 )
  {
    if ( healdatalist )
    {
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
    }
LABEL_13:
    sub_B0D97C(All);
  }
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleActionData_HealData__TypeInfo,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_BattleActionData___c__DisplayClass182_0__getHealList_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleActionData_HealData___ctor__);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)healdatalist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  System_Int32_array *DamageTargets; // x0
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  struct System_Int32_array *pttargetIds; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  __int64 v15; // x8
  System_Int32_array *v16; // x20
  unsigned __int64 v17; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v20; // x0

  if ( (byte_42116C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    byte_42116C6 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              method,
                                                              v2);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v8 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v8,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v8,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    v13 = *(_QWORD *)&pttargetIds->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      while ( v14 < (unsigned int)v13 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          pttargetIds->m_Items[v14 + 1],
          pttargetIds->m_Items[v14 + 1],
          (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(v13) = pttargetIds->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          goto LABEL_9;
      }
LABEL_15:
      v20 = sub_B0D9A8(DamageTargets);
      sub_B0D948(v20, 0LL);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v10, v11);
  if ( !DamageTargets )
LABEL_16:
    sub_B0D97C(DamageTargets);
  v15 = *(_QWORD *)&DamageTargets->max_length;
  v16 = DamageTargets;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( v17 < (unsigned int)v15 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v8,
        v16->m_Items[v17 + 1],
        v16->m_Items[v17 + 1],
        (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v15) = v16->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v8,
           (const MethodInfo_2E69464 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndex(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_int__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x21
  BattleActionData___c_c *v25; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__274_0; // x22
  Il2CppObject *v28; // x23
  struct BattleActionData___c_StaticFields *v29; // x0
  void *v30; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x20
  BattleActionData___c_c *v32; // x0
  struct BattleActionData___c_StaticFields *v33; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__274_1; // x21
  Il2CppObject *v35; // x22
  struct BattleActionData___c_StaticFields *v36; // x0
  struct BattleActionData___c_StaticFields *v37; // x8
  System_Comparison_int__o *_9__274_2; // x20
  Il2CppObject *v39; // x21
  struct BattleActionData___c_StaticFields *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0

  if ( (byte_42116C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, method);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Converter_BattleActionData_HealData__int___ctor__, v5);
    sub_B0D8A4(&Method_System_Converter_BattleActionData_BuffData__int___ctor__, v6);
    sub_B0D8A4(&System_Converter_BattleActionData_HealData__int__TypeInfo, v7);
    sub_B0D8A4(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort___67885080, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndex_b__274_0__, v17);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndex_b__274_1__, v18);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndex_b__274_2__, v19);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v20);
    byte_42116C9 = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v25 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v25 = BattleActionData___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__274_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__274_0;
    if ( !_9__274_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__274_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                          System_Converter_BattleActionData_BuffData__int__TypeInfo,
                                                                          v22,
                                                                          v23);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__274_0,
        v28,
        Method_BattleActionData___c__getListFunctionIndex_b__274_0__,
        (const MethodInfo_2665D70 *)Method_System_Converter_BattleActionData_BuffData__int___ctor__);
      v29 = BattleActionData___c_TypeInfo->static_fields;
      v29->__9__274_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__274_0;
      sub_B0D840(&v29->__9__274_0, _9__274_0);
    }
    v30 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
            (System_Collections_Generic_List_BattleActionData_HealData__o *)buffdatalist,
            (System_Converter_T__TOutput__o *)_9__274_0,
            (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v21 )
      goto LABEL_35;
    System_Collections_Generic_List_int___AddRange(
      v21,
      (System_Collections_Generic_IEnumerable_T__o *)v30,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v32 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v32 = BattleActionData___c_TypeInfo;
    }
    v33 = v32->static_fields;
    _9__274_1 = v33->__9__274_1;
    if ( !_9__274_1 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v33 = BattleActionData___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v33->__9;
      _9__274_1 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                          System_Converter_BattleActionData_HealData__int__TypeInfo,
                                                                          v22,
                                                                          v23);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__274_1,
        v35,
        Method_BattleActionData___c__getListFunctionIndex_b__274_1__,
        (const MethodInfo_2665D70 *)Method_System_Converter_BattleActionData_HealData__int___ctor__);
      v36 = BattleActionData___c_TypeInfo->static_fields;
      v36->__9__274_1 = _9__274_1;
      sub_B0D840(&v36->__9__274_1, _9__274_1);
    }
    v30 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
            healdatalist,
            (System_Converter_T__TOutput__o *)_9__274_1,
            (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( v21 )
    {
      System_Collections_Generic_List_int___AddRange(
        v21,
        (System_Collections_Generic_IEnumerable_T__o *)v30,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_25;
    }
LABEL_35:
    sub_B0D97C(v30);
  }
LABEL_25:
  v30 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v30 = BattleActionData___c_TypeInfo;
  }
  v37 = (struct BattleActionData___c_StaticFields *)*((_QWORD *)v30 + 23);
  _9__274_2 = v37->__9__274_2;
  if ( !_9__274_2 )
  {
    if ( (*((_BYTE *)v30 + 307) & 4) != 0 && !*((_DWORD *)v30 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v37 = BattleActionData___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__274_2 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, v22, v23);
    System_Comparison_int____ctor(
      _9__274_2,
      v39,
      Method_BattleActionData___c__getListFunctionIndex_b__274_2__,
      (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
    v40 = BattleActionData___c_TypeInfo->static_fields;
    v40->__9__274_2 = _9__274_2;
    sub_B0D840(&v40->__9__274_2, _9__274_2);
  }
  if ( !v21 )
    goto LABEL_35;
  System_Collections_Generic_List_int___Sort_50012060(
    v21,
    (System_Comparison_T__o *)_9__274_2,
    (const MethodInfo_2FB1F9C *)Method_System_Collections_Generic_List_int__Sort___67885080);
  v41 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v41,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndexEx(
        BattleActionData_o *this,
        int32_t *displayFuncNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_List_int__o *v30; // x20
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x22
  BattleActionData___c_c *v34; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__275_0; // x23
  Il2CppObject *v37; // x24
  struct BattleActionData___c_StaticFields *v38; // x0
  System_Int32_array *result; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x22
  BattleActionData___c_c *v41; // x0
  struct BattleActionData___c_StaticFields *v42; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__275_1; // x23
  Il2CppObject *v44; // x24
  struct BattleActionData___c_StaticFields *v45; // x0
  const MethodInfo *v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v50; // x22
  BattleActionData___c_c *v51; // x8
  struct BattleActionData___c_StaticFields *v52; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__275_2; // x23
  Il2CppObject *v54; // x24
  struct BattleActionData___c_StaticFields *v55; // x0
  const MethodInfo *v56; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  BattleActionData___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x21
  struct BattleActionData___c_StaticFields *v62; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__275_3; // x22
  Il2CppObject *v64; // x23
  struct BattleActionData___c_StaticFields *v65; // x0
  int32_t v66; // w21
  struct BattleActionData___c_StaticFields *v67; // x8
  System_Comparison_int__o *_9__275_4; // x22
  Il2CppObject *v69; // x23
  struct BattleActionData___c_StaticFields *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0

  if ( (byte_42116CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, displayFuncNum);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Converter_BattleActionData_HealData__int___ctor__, v6);
    sub_B0D8A4(&Method_System_Converter_BattleActionData_BuffData__int___ctor__, v7);
    sub_B0D8A4(&Method_System_Converter_BattleActionData_DamageData__int___ctor__, v8);
    sub_B0D8A4(&System_Converter_BattleActionData_HealData__int__TypeInfo, v9);
    sub_B0D8A4(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v10);
    sub_B0D8A4(&System_Converter_BattleActionData_DamageData__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v14);
    sub_B0D8A4(&Method_System_Func_BattleActionData_DamageData__int___ctor__, v15);
    sub_B0D8A4(&System_Func_BattleActionData_DamageData__int__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort___67885080, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndexEx_b__275_0__, v24);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndexEx_b__275_1__, v25);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndexEx_b__275_2__, v26);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndexEx_b__275_3__, v27);
    sub_B0D8A4(&Method_BattleActionData___c__getListFunctionIndexEx_b__275_4__, v28);
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v29);
    byte_42116CA = 1;
  }
  v30 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    displayFuncNum,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v34 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v34 = BattleActionData___c_TypeInfo;
    }
    static_fields = v34->static_fields;
    _9__275_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__275_0;
    if ( !_9__275_0 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)static_fields->__9;
      _9__275_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                          System_Converter_BattleActionData_BuffData__int__TypeInfo,
                                                                          v31,
                                                                          v32);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__275_0,
        v37,
        Method_BattleActionData___c__getListFunctionIndexEx_b__275_0__,
        (const MethodInfo_2665D70 *)Method_System_Converter_BattleActionData_BuffData__int___ctor__);
      v38 = BattleActionData___c_TypeInfo->static_fields;
      v38->__9__275_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__275_0;
      sub_B0D840(&v38->__9__275_0, _9__275_0);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                     (System_Collections_Generic_List_BattleActionData_HealData__o *)buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__275_0,
                                     (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v30 )
      goto LABEL_57;
    System_Collections_Generic_List_int___AddRange(
      v30,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v41 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v41 = BattleActionData___c_TypeInfo;
    }
    v42 = v41->static_fields;
    _9__275_1 = v42->__9__275_1;
    if ( !_9__275_1 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v42 = BattleActionData___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v42->__9;
      _9__275_1 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                          System_Converter_BattleActionData_HealData__int__TypeInfo,
                                                                          v31,
                                                                          v32);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__275_1,
        v44,
        Method_BattleActionData___c__getListFunctionIndexEx_b__275_1__,
        (const MethodInfo_2665D70 *)Method_System_Converter_BattleActionData_HealData__int___ctor__);
      v45 = BattleActionData___c_TypeInfo->static_fields;
      v45->__9__275_1 = _9__275_1;
      sub_B0D840(&v45->__9__275_1, _9__275_1);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__275_1,
                                     (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v30 )
      goto LABEL_57;
    System_Collections_Generic_List_int___AddRange(
      v30,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v31) )
  {
    v66 = 0;
    goto LABEL_46;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v46);
  v50 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
  v51 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v51 = BattleActionData___c_TypeInfo;
  }
  v52 = v51->static_fields;
  _9__275_2 = (System_Converter_BattleActionData_HealData__int__o *)v52->__9__275_2;
  if ( !_9__275_2 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v52 = BattleActionData___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)v52->__9;
    _9__275_2 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                        System_Converter_BattleActionData_DamageData__int__TypeInfo,
                                                                        v48,
                                                                        v49);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__275_2,
      v54,
      Method_BattleActionData___c__getListFunctionIndexEx_b__275_2__,
      (const MethodInfo_2665D70 *)Method_System_Converter_BattleActionData_DamageData__int___ctor__);
    v55 = BattleActionData___c_TypeInfo->static_fields;
    v55->__9__275_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__275_2;
    sub_B0D840(&v55->__9__275_2, _9__275_2);
  }
  if ( !v50
    || (result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                         v50,
                                         (System_Converter_T__TOutput__o *)_9__275_2,
                                         (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___),
        !v30) )
  {
LABEL_57:
    sub_B0D97C(result);
  }
  System_Collections_Generic_List_int___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v56);
  v60 = BattleActionData___c_TypeInfo;
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v60 = BattleActionData___c_TypeInfo;
  }
  v62 = v60->static_fields;
  _9__275_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v62->__9__275_3;
  if ( !_9__275_3 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v62 = BattleActionData___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)v62->__9;
    _9__275_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_BattleActionData_DamageData__int__TypeInfo,
                                                                                  v58,
                                                                                  v59);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__275_3,
      v64,
      Method_BattleActionData___c__getListFunctionIndexEx_b__275_3__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
    v65 = BattleActionData___c_TypeInfo->static_fields;
    v65->__9__275_3 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__275_3;
    sub_B0D840(&v65->__9__275_3, _9__275_3);
  }
  v66 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
          v61,
          (System_Func_TSource__int__o *)_9__275_3,
          (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_46:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v67 = *(struct BattleActionData___c_StaticFields **)&result->m_Items[39];
  _9__275_4 = v67->__9__275_4;
  if ( !_9__275_4 )
  {
    if ( (result->m_Items[69] & 0x4000000) != 0 && !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      v67 = BattleActionData___c_TypeInfo->static_fields;
    }
    v69 = (Il2CppObject *)v67->__9;
    _9__275_4 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, v46, v47);
    System_Comparison_int____ctor(
      _9__275_4,
      v69,
      Method_BattleActionData___c__getListFunctionIndexEx_b__275_4__,
      (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
    v70 = BattleActionData___c_TypeInfo->static_fields;
    v70->__9__275_4 = _9__275_4;
    sub_B0D840(&v70->__9__275_4, _9__275_4);
  }
  if ( !v30 )
    goto LABEL_57;
  System_Collections_Generic_List_int___Sort_50012060(
    v30,
    (System_Comparison_T__o *)_9__275_4,
    (const MethodInfo_2FB1F9C *)Method_System_Collections_Generic_List_int__Sort___67885080);
  v71 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v30,
          (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v71,
             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_57;
  *displayFuncNum = v66 + result->max_length;
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


// local variable allocation has failed, the output may be wrong!
BattleActionData_ReplaceMember_array *__fastcall BattleActionData__getReplaceMember(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleActionData___c__DisplayClass187_0_o *v12; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *replacememberlist; // x22
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o **p_replacememberlist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x19

  v3 = funcIndex;
  if ( (byte_42116A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleActionData_ReplaceMember___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass187_0__getReplaceMember_b__0__, v10);
    sub_B0D8A4(&BattleActionData___c__DisplayClass187_0_TypeInfo, v11);
    byte_42116A6 = 1;
  }
  v12 = (BattleActionData___c__DisplayClass187_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass187_0_TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       method);
  BattleActionData___c__DisplayClass187_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.funcIndex = v3;
  replacememberlist = this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = &this->fields.replacememberlist;
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo,
                                                                                                    v14,
                                                                                                    v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    *p_replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)v18;
    sub_B0D840(p_replacememberlist, v18);
    v3 = v12->fields.funcIndex;
    replacememberlist = *p_replacememberlist;
  }
  if ( v3 == -1 )
  {
    if ( replacememberlist )
    {
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
    }
LABEL_13:
    sub_B0D97C(All);
  }
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleActionData_ReplaceMember__TypeInfo,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_BattleActionData___c__DisplayClass187_0__getReplaceMember_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleActionData_ReplaceMember___ctor__);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)replacememberlist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
}


BattleActionData_ShiftServant_o *__fastcall BattleActionData__getShiftServant(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *shiftServantList; // x8

  if ( (byte_42116AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__, v3);
    byte_42116AF = 1;
  }
  shiftServantList = this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return shiftServantList->fields._items->m_Items[0];
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_array *__fastcall BattleActionData__getSideEffectList(
        BattleActionData_o *this,
        int32_t actType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleActionData___c__DisplayClass290_0_o *v10; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_42116D2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData__FindAll__, *(_QWORD *)&actType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData__ToArray__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleActionData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleActionData__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass290_0__getSideEffectList_b__0__, v8);
    sub_B0D8A4(&BattleActionData___c__DisplayClass290_0_TypeInfo, v9);
    byte_42116D2 = 1;
  }
  v10 = (BattleActionData___c__DisplayClass290_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass290_0_TypeInfo,
                                                       *(_QWORD *)&actType,
                                                       method);
  BattleActionData___c__DisplayClass290_0___ctor(v10, 0LL);
  if ( !v10
    || (v10->fields.actType = actType,
        sideEffectList = this->fields.sideEffectList,
        v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleActionData__TypeInfo,
                                                                         v12,
                                                                         v13),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v15,
          (Il2CppObject *)v10,
          Method_BattleActionData___c__DisplayClass290_0__getSideEffectList_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleActionData___ctor__),
        !sideEffectList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)sideEffectList,
                (System_Predicate_T__o *)v15,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
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


// local variable allocation has failed, the output may be wrong!
BattleActionData_SummonServant_array *__fastcall BattleActionData__getSummonServant(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleActionData___c__DisplayClass200_0_o *v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x19

  if ( (byte_42116AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleActionData_SummonServant___ctor__, v6);
    sub_B0D8A4(&System_Predicate_BattleActionData_SummonServant__TypeInfo, v7);
    sub_B0D8A4(&BattleActionData_SummonServant___TypeInfo, v8);
    sub_B0D8A4(&Method_BattleActionData___c__DisplayClass200_0__getSummonServant_b__0__, v9);
    sub_B0D8A4(&BattleActionData___c__DisplayClass200_0_TypeInfo, v10);
    byte_42116AC = 1;
  }
  v11 = (BattleActionData___c__DisplayClass200_0_o *)sub_B0D974(
                                                       BattleActionData___c__DisplayClass200_0_TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       method);
  BattleActionData___c__DisplayClass200_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v11->fields.funcIndex = funcIndex;
  summonServantList = this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_B0D8BC(BattleActionData_SummonServant___TypeInfo, 0LL);
  if ( funcIndex != -1 )
  {
    v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleActionData_SummonServant__TypeInfo,
                                                                     v13,
                                                                     v14);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v16,
      (Il2CppObject *)v11,
      Method_BattleActionData___c__DisplayClass200_0__getSummonServant_b__0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleActionData_SummonServant___ctor__);
    All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
            (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)summonServantList,
            (System_Predicate_T__o *)v16,
            (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_B0D97C(All);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getTargetIds(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  int32_t v9; // w1
  const MethodInfo *v10; // x2
  _QWORD *DamageTargets; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  _QWORD *v14; // x21
  unsigned __int64 v15; // x22
  __int64 v16; // x8
  _QWORD *v17; // x20
  unsigned __int64 v18; // x21
  __int64 v19; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v22; // x0

  if ( (byte_42116C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    byte_42116C7 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              method,
                                                              v2);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  DamageTargets = BattleActionData__GetDamageTargets(this, v9, v10);
  if ( !DamageTargets )
    goto LABEL_20;
  v13 = DamageTargets[3];
  v14 = DamageTargets;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( v15 < (unsigned int)v13 )
    {
      if ( !v8 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v8,
        *((_DWORD *)v14 + v15 + 8),
        *((_DWORD *)v14 + v15 + 8),
        (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v13) = *((_DWORD *)v14 + 6);
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_9;
    }
LABEL_19:
    v22 = sub_B0D9A8(DamageTargets);
    sub_B0D948(v22, 0LL);
  }
LABEL_9:
  DamageTargets = BattleActionData__getBuffList(this, -1, v12);
  if ( !DamageTargets )
    goto LABEL_20;
  v16 = DamageTargets[3];
  v17 = DamageTargets;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)v16 )
    {
      v19 = v17[v18 + 4];
      if ( v19 )
      {
        if ( !v8 )
          goto LABEL_20;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          *(_DWORD *)(v19 + 40),
          *(_DWORD *)(v19 + 40),
          (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      LODWORD(v16) = *((_DWORD *)v17 + 6);
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_17;
    }
    goto LABEL_19;
  }
LABEL_17:
  if ( !v8 )
LABEL_20:
    sub_B0D97C(DamageTargets);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v8,
           (const MethodInfo_2E69464 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  int32_t v7; // w19
  Il2CppClass *klass; // x11
  unsigned __int64 namespaze; // x9
  unsigned __int64 v10; // x8
  Il2CppType *p_byval_arg; // x11
  int v12; // w12
  _BOOL8 v13; // x0
  __int64 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421169C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v5);
    byte_421169C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  damagedatalist = BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields.current )
      sub_B0D97C(v13);
    klass = v16.fields.current[6].klass;
    if ( klass && (int)klass->_1.namespaze >= 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      v10 = 0LL;
      p_byval_arg = &klass->_1.byval_arg;
      do
      {
        if ( v10 >= namespaze )
        {
          v15 = sub_B0D9A8(v13);
          sub_B0D948(v15, 0LL);
        }
        v12 = *((_DWORD *)&p_byval_arg->data + v10++);
        v7 += v12;
      }
      while ( (__int64)v10 < (int)namespaze );
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v7;
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *result; // x0
  System_Collections_Generic_List_BattleActionData_DamageData__o **p_damagedatalist; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20

  if ( (byte_4211696 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v4);
    byte_4211696 = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = &this->fields._damagedatalist;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo,
                                                                                                   method,
                                                                                                   v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    *p_damagedatalist = (System_Collections_Generic_List_BattleActionData_DamageData__o *)v7;
    sub_B0D840(p_damagedatalist, v7);
    return *p_damagedatalist;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__initFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t length,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *v7; // x0

  if ( (byte_42116DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___, *(_QWORD *)&length);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___, v5);
    byte_42116DE = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Target_PlayerTypeFlag_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_1B4EF44 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v7 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Target_PlayerTypeFlag_(
                                                                            v6,
                                                                            (const MethodInfo_1B59038 *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v7;
  sub_B0D840(&this->fields.funcTargetPlayerTypeList, v7);
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

  if ( (byte_4211684 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_4211684 = 1;
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

  if ( (byte_4211681 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_4211681 = 1;
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

  if ( (byte_42116D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__, pairAttackAndTarget);
    byte_42116D7 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    sub_B0D97C(0LL);
  v7 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v7,
           (const MethodInfo_2D29134 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_42116D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&uniqueSvtId);
    byte_42116D5 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w19
  BattleActionData_c *v4; // x0

  if ( (byte_4211682 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_4211682 = 1;
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

  if ( (byte_4211683 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_4211683 = 1;
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

  if ( (byte_42116BF & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116BF = 1;
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

  if ( (byte_42116C0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116C0 = 1;
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

  if ( (byte_42116BE & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116BE = 1;
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

  if ( (byte_42116BA & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116BA = 1;
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

  if ( (byte_42116BB & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116BB = 1;
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

  if ( (byte_42116BC & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116BC = 1;
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

  if ( (byte_42116B6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116B6 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  BattleServantData_o *ServantData; // x0
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  int size; // w8
  unsigned int i; // w23
  BattleActionData_ServantLogicResultData_o *v11; // x8
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v12; // x22
  BattleServantData_o *v13; // x21
  BattleActionData_ServantLogicResultData_o *v14; // x8
  int32_t hp; // w22

  if ( (byte_42116DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v6);
    byte_42116DC = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_22:
    sub_B0D97C(ServantData);
  size = servantLogicResultList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; (int)i < size; ++i )
    {
      if ( size <= i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v11 = servantLogicResultList->fields._items->m_Items[i];
      if ( !v11 || !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v11->fields.uniqueId, 0LL);
      if ( ServantData )
      {
        v12 = this->fields.servantLogicResultList;
        if ( !v12 )
          goto LABEL_22;
        v13 = ServantData;
        if ( v12->fields._size <= i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v14 = v12->fields._items->m_Items[i];
        if ( !v14 )
          goto LABEL_22;
        hp = v14->fields.hp;
        if ( hp != -1 )
        {
          ServantData = (BattleServantData_o *)BattleServantData__getNowHp(ServantData, 0LL);
          if ( (_DWORD)ServantData != hp )
          {
            BattleServantData__setHp(v13, hp, 0, 0LL);
            BattleServantData__updateHp(v13, 0LL);
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
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
  }
}


void __fastcall BattleActionData__saveServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleActionData_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  __int64 v7; // x22
  int size; // w8
  unsigned int v9; // w23
  __int64 v10; // x8
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v11; // x24
  __int64 v12; // x23

  v4 = this;
  if ( (byte_42116DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, data);
    this = (BattleActionData_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__,
                                   v5);
    byte_42116DB = 1;
  }
  servantLogicResultList = v4->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_17:
    sub_B0D97C(this);
  v7 = 4LL;
  while ( 1 )
  {
    size = servantLogicResultList->fields._size;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= size )
      break;
    if ( size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = *((_QWORD *)&servantLogicResultList->fields._items->obj.klass + v7);
    if ( !v10 || !data )
      goto LABEL_17;
    this = (BattleActionData_o *)BattleData__getServantData(data, *(_DWORD *)(v10 + 16), 0LL);
    if ( this )
    {
      v11 = v4->fields.servantLogicResultList;
      if ( !v11 )
        goto LABEL_17;
      if ( v11->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v12 = *((_QWORD *)&v11->fields._items->obj.klass + v7);
      this = (BattleActionData_o *)(*(__int64 (__fastcall **)(BattleActionData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                     this,
                                     this->klass[1]._1.element_class);
      if ( !v12 )
        goto LABEL_17;
      *(_DWORD *)(v12 + 20) = (_DWORD)this;
    }
    servantLogicResultList = v4->fields.servantLogicResultList;
    ++v7;
    if ( !servantLogicResultList )
      goto LABEL_17;
  }
}


void __fastcall BattleActionData__servantLogicResultClear(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *servantLogicResultList; // x0

  if ( (byte_42116DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, v3);
    byte_42116DD = 1;
  }
  servantLogicResultList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_B0D97C(0LL);
  if ( servantLogicResultList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      servantLogicResultList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
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
      sub_B0D97C(this);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    if ( DataVals__isParam(vals, 34, 0LL) )
      data->fields.statusEffectId = DataVals__GetParam(vals, 34, 0, 0LL);
  }
  BattleActionData__AddBuffList(this, data, (const MethodInfo *)vals);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setChangeBg(
        BattleActionData_o *this,
        int32_t inbgNo,
        int32_t inTp,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleActionData_ChangeBg_o *v12; // x20
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *changeBgList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o **p_changeBgList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21

  if ( (byte_42116B0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_ChangeBg_TypeInfo, *(_QWORD *)&inbgNo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo, v11);
    byte_42116B0 = 1;
  }
  v12 = (BattleActionData_ChangeBg_o *)sub_B0D974(
                                         BattleActionData_ChangeBg_TypeInfo,
                                         *(_QWORD *)&inbgNo,
                                         *(_QWORD *)&inTp);
  BattleActionData_ChangeBg___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  v12->fields.bgNo = inbgNo;
  v12->fields.bgTp = inTp;
  v12->fields.priority = priority;
  changeBgList = this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = &this->fields.changeBgList;
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo,
                                                                                                    v14,
                                                                                                    v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    *p_changeBgList = (struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *)v17;
    sub_B0D840(p_changeBgList, v17);
    changeBgList = *p_changeBgList;
    if ( !*p_changeBgList )
LABEL_7:
      sub_B0D97C(changeBgList);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)changeBgList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__);
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
  if ( (byte_4211697 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
                                   data);
    byte_4211697 = 1;
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
    sub_B0D97C(this);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
}


void __fastcall BattleActionData__setEffect(
        BattleActionData_o *this,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  this->fields.effectlist = effectList;
  sub_B0D840(&this->fields.effectlist, effectList);
}


void __fastcall BattleActionData__setEndCamera(
        BattleActionData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  this->fields.endcameraname = name;
  sub_B0D840(&this->fields.endcameraname, name);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t index,
        bool isTargetEnemy,
        const MethodInfo *method)
{
  BattleActionData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w21
  System_Collections_Generic_List_Target_PlayerTypeFlag__o *funcTargetPlayerTypeList; // x20
  int32_t size; // w8

  v6 = this;
  if ( (byte_42116DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v7);
    this = (BattleActionData_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__,
                                   v8);
    byte_42116DF = 1;
  }
  if ( isTargetEnemy )
    v9 = 2;
  else
    v9 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_B0D97C(this);
    size = funcTargetPlayerTypeList->fields._size;
    if ( size > index )
    {
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      System_Collections_Generic_List_Target_PlayerTypeFlag___set_Item(
        funcTargetPlayerTypeList,
        index,
        funcTargetPlayerTypeList->fields._items->m_Items[index + 1] | v9,
        (const MethodInfo_2FB2B98 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v17; // x3
  bool isShowForcedEffect; // w8

  if ( (byte_42116A1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_HealData_TypeInfo, *(_QWORD *)&targetId);
    byte_42116A1 = 1;
  }
  v15 = (BattleActionData_HealData_o *)sub_B0D974(
                                         BattleActionData_HealData_TypeInfo,
                                         *(_QWORD *)&targetId,
                                         *(_QWORD *)&healPoint);
  BattleActionData_HealData___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
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
  BattleActionData__setHealData_18738264(this, v15, vals, v17);
  return v15;
}


void __fastcall BattleActionData__setHealData_18738264(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  struct System_String_o *StrParam; // x0

  if ( vals )
  {
    if ( !data )
      sub_B0D97C(this);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 118, 0LL, 0LL);
    data->fields.popValueText = StrParam;
    sub_B0D840(&data->fields.popValueText, StrParam);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x0

  if ( (byte_4211685 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&pttargetId);
    byte_4211685 = 1;
  }
  v5 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B0D97C(0LL);
  if ( !v5->max_length )
  {
    v6 = sub_B0D9A8(v5);
    sub_B0D948(v6, 0LL);
  }
  v5->m_Items[1] = pttargetId;
  this->fields.pttargetIds = v5;
  sub_B0D840(&this->fields.pttargetIds, v5);
}


void __fastcall BattleActionData__setPTTargetId_18725512(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  this->fields.pttargetIds = pttargetIds;
  sub_B0D840(&this->fields.pttargetIds, pttargetIds);
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v13; // x2

  if ( (byte_42116A4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_ReplaceMember_TypeInfo, *(_QWORD *)&index);
    byte_42116A4 = 1;
  }
  v11 = (BattleActionData_ReplaceMember_o *)sub_B0D974(
                                              BattleActionData_ReplaceMember_TypeInfo,
                                              *(_QWORD *)&index,
                                              *(_QWORD *)&inUniqueId);
  BattleActionData_ReplaceMember___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.outUniqeId = outUniqueId;
  v11->fields.inUniqeId = inUniqueId;
  v11->fields.index = index;
  v11->fields.functionIndex = funcIndex;
  BattleActionData__setReplaceMember_18738712(this, v11, v13);
}


void __fastcall BattleActionData__setReplaceMember_18738712(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *replacememberlist; // x0
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o **p_replacememberlist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21

  if ( (byte_42116A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v6);
    byte_42116A5 = 1;
  }
  replacememberlist = this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = &this->fields.replacememberlist;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo,
                                                                                                   data,
                                                                                                   method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    *p_replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)v9;
    sub_B0D840(p_replacememberlist, v9);
    replacememberlist = *p_replacememberlist;
    if ( !*p_replacememberlist )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replacememberlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__);
}


void __fastcall BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *shiftServantList; // x0
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o **p_shiftServantList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21

  if ( (byte_42116AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo, v6);
    byte_42116AE = 1;
  }
  shiftServantList = this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = &this->fields.shiftServantList;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo,
                                                                                                   data,
                                                                                                   method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    *p_shiftServantList = (struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *)v9;
    sub_B0D840(p_shiftServantList, v9);
    shiftServantList = *p_shiftServantList;
    if ( !*p_shiftServantList )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)shiftServantList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setSummonServant(
        BattleActionData_o *this,
        int32_t uniqueId,
        int32_t unloadUniqueId,
        int32_t funcIndex,
        bool isEffect,
        int32_t callSvtEffectId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleActionData_SummonServant_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x0
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o **p_summonServantList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21

  if ( (byte_42116AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo, v14);
    sub_B0D8A4(&BattleActionData_SummonServant_TypeInfo, v15);
    byte_42116AB = 1;
  }
  v16 = (BattleActionData_SummonServant_o *)sub_B0D974(
                                              BattleActionData_SummonServant_TypeInfo,
                                              *(_QWORD *)&uniqueId,
                                              *(_QWORD *)&unloadUniqueId);
  BattleActionData_SummonServant___ctor(v16, uniqueId, unloadUniqueId, funcIndex, isEffect, callSvtEffectId, 0LL);
  summonServantList = this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = &this->fields.summonServantList;
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo,
                                                                                                    v17,
                                                                                                    v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v21,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    *p_summonServantList = (struct System_Collections_Generic_List_BattleActionData_SummonServant__o *)v21;
    sub_B0D840(p_summonServantList, v21);
    summonServantList = *p_summonServantList;
    if ( !*p_summonServantList )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)summonServantList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__);
}


void __fastcall BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_42116B7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116B7 = 1;
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

  if ( (byte_42116B8 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116B8 = 1;
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

  if ( (byte_42116B9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116B9 = 1;
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

  if ( (byte_42116B5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42116B5 = 1;
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
  sub_B0D840(&this->fields._ChangeField_k__BackingField, value);
}


void __fastcall BattleActionData__set_DispMsgList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *value,
        const MethodInfo *method)
{
  this->fields._DispMsgList_k__BackingField = value;
  sub_B0D840(&this->fields._DispMsgList_k__BackingField, value);
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
  sub_B0D840(&this->fields._HpDecreaseFuncTargetHash_k__BackingField, value);
}


void __fastcall BattleActionData__set_IntervalBuffDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *value,
        const MethodInfo *method)
{
  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_B0D840(&this->fields._IntervalBuffDict_k__BackingField, value);
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
  sub_B0D840(&this->fields._ShiftGauge_k__BackingField, value);
}


void __fastcall BattleActionData__set_WaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *value,
        const MethodInfo *method)
{
  this->fields._WaitCond_k__BackingField = value;
  sub_B0D840(&this->fields._WaitCond_k__BackingField, value);
}


void __fastcall BattleActionData__set_damagedatalist(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DamageData__o *value,
        const MethodInfo *method)
{
  this->fields._damagedatalist = value;
  sub_B0D840(&this->fields._damagedatalist, value);
}


System_String_o *__fastcall BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t type; // w8
  Il2CppObject *v8; // x0
  __int64 *v9; // x8
  int v11; // [xsp+4h] [xbp-1Ch] BYREF
  int v12; // [xsp+8h] [xbp-18h] BYREF
  int v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42116C1 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18283/*"effect/BitEffect/bit_buster{0:00}"*/, v3);
    sub_B0D8A4(&StringLiteral_18282/*"effect/BitEffect/bit_arts{0:00}"*/, v4);
    sub_B0D8A4(&StringLiteral_18290/*"effect/BitEffect/bit_flash02"*/, v5);
    sub_B0D8A4(&StringLiteral_18292/*"effect/BitEffect/bit_quick{0:00}"*/, v6);
    byte_42116C1 = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v12 = 1;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
      v9 = &StringLiteral_18282/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v9, v8, 0LL);
    case 3:
      v11 = 1;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
      v9 = &StringLiteral_18292/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v9, v8, 0LL);
    case 2:
      v13 = 1;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
      v9 = &StringLiteral_18283/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v9, v8, 0LL);
    case 4:
      return (System_String_o *)StringLiteral_18290/*"effect/BitEffect/bit_flash02"*/;
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
  sub_B0D840(
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
  __int64 v12; // x1
  __int64 v13; // x2
  Generator_BGFromFieldChangeBGBuff_o *v14; // x22
  int v15; // w21
  System_String_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  v8 = this;
  if ( (byte_42139A6 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_B0D8A4(&Generator_BGFromFieldChangeBGBuff_TypeInfo, perf);
    byte_42139A6 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v14 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B0D974(Generator_BGFromFieldChangeBGBuff_TypeInfo, v12, v13),
        Generator_BGFromFieldChangeBGBuff___ctor(v14, fieldChange, 0LL),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_AddBackground.method)(
                                                        v11,
                                                        v14,
                                                        2LL,
                                                        v11->klass->vtable._6_AddBGM.methodPtr)) == 0LL )
  {
    sub_B0D97C(this);
  }
  v15 = (int)this;
  v16 = System_Int32__ToString((int)this + 28, 0LL);
  *bgName = v16;
  sub_B0D840((BattleServantConfConponent_o *)bgName, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = System_Int32__ToString(v15 + 32, 0LL);
  *bgType = v23;
  sub_B0D840((BattleServantConfConponent_o *)bgType, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
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
  __int64 v11; // x1
  __int64 v12; // x2
  Generator_BGMFromFieldChangeBGBuff_o *v13; // x21
  void *monitor; // x8

  v6 = this;
  if ( (byte_42139A7 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_B0D8A4(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, perf);
    byte_42139A7 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        data = perf->fields.data,
        fieldChange = v6->fields.fieldChange,
        v10 = FieldEnvData,
        v13 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B0D974(Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11, v12),
        Generator_BGMFromFieldChangeBGBuff___ctor(v13, data, fieldChange, 0LL),
        !v10)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._6_AddBGM.method)(
                                                        v10,
                                                        v13,
                                                        2LL,
                                                        v10->klass->vtable._7_RemoveAfterResetBGM.methodPtr)) == 0LL )
  {
    sub_B0D97C(this);
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
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_B0D840(
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
    sub_B0D97C(v13);
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
    sub_B0D97C(this);
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
  __int64 v11; // x1
  void *fieldChange; // x0
  struct BattleBuffData_FieldChangeData_o *v13; // x21

  if ( (byte_42139A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, bgmName);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    byte_42139A8 = 1;
  }
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    goto LABEL_10;
  *((_QWORD *)fieldChange + 5) = bgmName;
  sub_B0D840(
    (BattleServantConfConponent_o *)((char *)fieldChange + 40),
    (System_Int32_array **)bgmName,
    *(System_String_array ***)&bgmId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v13 = this->fields.fieldChange;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fieldChange = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !fieldChange
    || (fieldChange = (void *)BgmMaster__GetBgmIdFromFileName((BgmMaster_o *)fieldChange, bgmName, bgmId, 0LL), !v13) )
  {
LABEL_10:
    sub_B0D97C(fieldChange);
  }
  v13->fields.bgmId = (int)fieldChange;
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

  if ( (byte_42139A9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, method);
    byte_42139A9 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1

  if ( (byte_42139AA & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19250/*"hp_iconeffect_before_1_"*/, v3);
    byte_42139AA = 1;
  }
  v4 = sub_B0D974(BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v12 = (System_Int32_array **)StringLiteral_19250/*"hp_iconeffect_before_1_"*/;
  *(_QWORD *)(v4 + 24) = StringLiteral_19250/*"hp_iconeffect_before_1_"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 24), v12, v6, v7, v8, v9, v10, v11);
  return (BattleServantHpShiftComponent_EffectData_o *)v4;
}


BattleAction_ShiftHpData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_42139AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_ShiftHpData___, method);
    byte_42139AD = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0LL,
                                         (const MethodInfo_1709420 *)Method_BasicHelper_IndexValue_ShiftHpData___);
}


void __fastcall BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v4 = this;
  if ( (byte_42139AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShiftHpData___ctor__, svtData);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_B0D8A4(
                                                      &System_Collections_Generic_List_ShiftHpData__TypeInfo,
                                                      v5);
    byte_42139AB = 1;
  }
  if ( !svtData )
    sub_B0D97C(this);
  v4->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ShiftHpData__TypeInfo,
                                                                                                 svtData,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v4->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v4->fields._ShiftHpDataList_k__BackingField,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x19
  BattleActionData_BaseShiftGaugeData___c_c *v9; // x0
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42139AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ShiftHpData___ctor__, method);
    sub_B0D8A4(&System_Action_ShiftHpData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__, v5);
    sub_B0D8A4(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__, v6);
    sub_B0D8A4(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v7);
    byte_42139AC = 1;
  }
  this->fields.hpDataIndex = 0;
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v9 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  if ( (BYTE3(BattleActionData_BaseShiftGaugeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_BaseShiftGaugeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    v9 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_ShiftHpData__TypeInfo,
                                                                                      method,
                                                                                      v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v12,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_ShiftHpData___ctor__);
    v13 = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    v13->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_B0D97C(v9);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
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
  sub_B0D840(
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x0

  if ( (byte_4211F5B & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v1);
    byte_4211F5B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleActionData_BaseShiftGaugeData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  BattleAction_ShiftHpData__InitHpIndex(x, 0LL);
}


void __fastcall BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42139AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v4);
    byte_42139AF = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.removeBuffList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    sub_B0D840(p_EffectProc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
  DataVals_o *v8; // x20
  __int64 v10; // x1

  v8 = vals;
  if ( (byte_42139AE & 1) == 0 )
  {
    sub_B0D8A4(&DataVals_TypeInfo, vals);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_42139AE = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !v8 )
  {
    v8 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, vals, method);
    DataVals___ctor(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.dataVals = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dataVals,
    (System_Int32_array **)v8,
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42139B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo, v4);
    byte_42139B1 = 1;
  }
  this->fields.multiatk = 1;
  v5 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                  System_Collections_Generic_List_BuffList_ACTION__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v5,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.attackSideEffectActList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleActionData_DamageData__GetAttackCountExceptFirst(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( damagelist )
    return UnityEngine_Mathf__Max_40819140(0, damagelist->max_length - 1, 0LL);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DamageData__addAttackSideEffectAction(
        BattleActionData_DamageData_o *this,
        int32_t act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_BuffList_ACTION__o *attackSideEffectActList; // x0

  if ( (byte_42139B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__, *(_QWORD *)&act);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__, v5);
    byte_42139B0 = 1;
  }
  attackSideEffectActList = this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_7;
  if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
         (System_Collections_Generic_List_VoiceCondType_Type__o *)attackSideEffectActList,
         act,
         (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
  {
    return;
  }
  attackSideEffectActList = this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
LABEL_7:
    sub_B0D97C(attackSideEffectActList);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)attackSideEffectActList,
    act,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_BuffList_ACTION__Add__);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_String_array *IsNullOrEmpty; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x22
  BattleMessageEntity_o *v27; // x2
  const MethodInfo *v28; // x4
  int32_t DefInterval; // w0
  BattleActionData_DisplayMessageData_o *ScriptInt; // x0
  BattleMessageEntity_o *v31; // x2
  const MethodInfo *v32; // x4
  int32_t DefBaseTime; // w0
  BattleActionData_DisplayMessageData_o *v34; // x0
  BattleMessageEntity_o *v35; // x2
  const MethodInfo *v36; // x4
  int32_t DefTimePerChara; // w0
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v41; // x23
  int64_t MessageType_k__BackingField; // x2

  if ( (byte_42139B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantMaster___, ent);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_string___, v11);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v12);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v13);
    sub_B0D8A4(&string___TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_14475/*"TimePerChara"*/, v15);
    sub_B0D8A4(&StringLiteral_2745/*"BaseTime"*/, v16);
    sub_B0D8A4(&StringLiteral_9084/*"MessageType"*/, v17);
    sub_B0D8A4(&StringLiteral_7737/*"Interval"*/, v18);
    byte_42139B4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !ent )
    goto LABEL_16;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_B0D8BC(string___TypeInfo, 0LL);
  }
  else
  {
    if ( !parser )
      goto LABEL_16;
    IsNullOrEmpty = ParseBattleMessage__Replace(parser, ent->fields.message, 0LL);
  }
  if ( !this )
LABEL_16:
    sub_B0D97C(IsNullOrEmpty);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Messages_k__BackingField,
    (System_Int32_array **)IsNullOrEmpty,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_WarQuestSelectionMaster,
                  (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                  v27,
                  preMsg,
                  v28);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7737/*"Interval"*/,
                                                         DefInterval,
                                                         0LL);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                  v31,
                  preMsg,
                  v32);
  v34 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_2745/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0LL);
  this->fields.baseTime = (int)v34;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v34,
                      (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                      v35,
                      preMsg,
                      v36);
  this->fields.timePerChara = BattleMessageEntity__GetScriptInt(
                                ent,
                                (System_String_o *)StringLiteral_14475/*"TimePerChara"*/,
                                DefTimePerChara,
                                0LL);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v41 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                          System_Func_string__int__TypeInfo,
                                                                          v39,
                                                                          v40);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v41,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
  this->fields.messageLen = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v41,
                              (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0LL;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9084/*"MessageType"*/,
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
  if ( (byte_42139B6 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B0D8A4(&StringLiteral_2472/*"BATTLE_MSG_BASE_TIME"*/, constMst);
    byte_42139B6 = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_B0D97C(this);
  return ConstantMaster__GetValue_27713676(constMst, (System_String_o *)StringLiteral_2472/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_42139B5 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B0D8A4(&StringLiteral_2473/*"BATTLE_MSG_INTERVAL"*/, constMst);
    byte_42139B5 = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_B0D97C(this);
  return ConstantMaster__GetValue_27713676(constMst, (System_String_o *)StringLiteral_2473/*"BATTLE_MSG_INTERVAL"*/, 250, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_42139B7 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B0D8A4(&StringLiteral_2544/*"BATTLE_TIME_PER_CHARA"*/, constMst);
    byte_42139B7 = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_B0D97C(this);
  return ConstantMaster__GetValue_27713676(constMst, (System_String_o *)StringLiteral_2544/*"BATTLE_TIME_PER_CHARA"*/, 15, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__StrlenByDisp(
        BattleActionData_DisplayMessageData_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  bool IsNullOrEmpty; // w8
  int32_t result; // w0

  if ( (byte_42139B8 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, text);
    byte_42139B8 = 1;
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
      sub_B0D97C(0LL);
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

  if ( (byte_42139B3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleDataDefine_TypeInfo, method);
    byte_42139B3 = 1;
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

  if ( (byte_42139B2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleDataDefine_TypeInfo, method);
    byte_42139B2 = 1;
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
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DownShiftGaugeData__AddShiftHpData(
        BattleActionData_DownShiftGaugeData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x23
  BattleAction_ShiftDownHpData_o *v13; // x24
  __int64 v14; // x0

  if ( (byte_42139BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex);
    sub_B0D8A4(&BattleAction_ShiftDownHpData_TypeInfo, v11);
    byte_42139BC = 1;
  }
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v13 = (BattleAction_ShiftDownHpData_o *)sub_B0D974(
                                            BattleAction_ShiftDownHpData_TypeInfo,
                                            *(_QWORD *)&curGaugeIndex,
                                            *(_QWORD *)&maxGaugeIconIndex);
  BattleAction_ShiftDownHpData___ctor(v13, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField )
    sub_B0D97C(v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ShiftHpDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShiftHpData__Add__);
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1

  if ( (byte_42139BB & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19249/*"hp_iconeffect_1_"*/, v3);
    byte_42139BB = 1;
  }
  v4 = sub_B0D974(BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v12 = (System_Int32_array **)StringLiteral_19249/*"hp_iconeffect_1_"*/;
  *(_QWORD *)(v4 + 24) = StringLiteral_19249/*"hp_iconeffect_1_"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 24), v12, v6, v7, v8, v9, v10, v11);
  return (BattleServantHpShiftComponent_EffectData_o *)v4;
}


int32_t __fastcall BattleActionData_DownShiftGaugeData__GetShiftValue(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  if ( !svtData || (shiftDeckList = svtData->fields.shiftDeckList) == 0LL )
    sub_B0D97C(this);
  return UnityEngine_Mathf__Min_40819044(shiftDeckList->max_length, svtData->fields.shiftDeckIndex + baseValue, 0LL)
       - svtData->fields.shiftDeckIndex;
}


bool __fastcall BattleActionData_DownShiftGaugeData__IsInvalid(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
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
  if ( (byte_42139B9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8830/*"MOTION_SHIFT_GAUGE_DOWN"*/, method);
    byte_42139B9 = 1;
  }
  return (System_String_o *)StringLiteral_8830/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleAction_PlayDownShiftGaugeMain_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_42139BA & 1) == 0 )
  {
    sub_B0D8A4(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, method);
    byte_42139BA = 1;
  }
  v4 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_B0D974(BattleAction_PlayDownShiftGaugeMain_TypeInfo, method, v2);
  BattleAction_PlayDownShiftGaugeMain___ctor(v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, Il2CppMethodPointer))v4->klass->vtable._7_Init.method)(
                                                v4,
                                                this,
                                                v4->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42139BD & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionEffect_UpdateFieldInfo_TypeInfo, method);
    byte_42139BD = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v5 = (Il2CppObject *)sub_B0D974(BattleActionEffect_UpdateFieldInfo_TypeInfo, v3, v4);
  System_Object___ctor(v5, 0LL);
  this->fields.EffectProc = (struct BattleActionEffect_Base_o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.EffectProc,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  if ( (byte_42139BE & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, perf);
    byte_42139BE = 1;
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
    sub_B0D97C(this);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0LL);
  if ( !uicamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Camera__WorldToViewportPoint_40755064(
                                     uicamera,
                                     *(UnityEngine_Vector3_o *)&v12,
                                     0LL);
  if ( !actorcamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ViewportToWorldPoint_40755072(
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
    sub_B0D97C(this);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42139BF & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_ACTION___TypeInfo, *(_QWORD *)&targetId);
    byte_42139BF = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_B0D8BC(BuffList_ACTION___TypeInfo, 0LL);
  this->fields.sideEffectActs = v7;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)v6, (System_Int32_array **)data, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = shiftNpcId;
}


void __fastcall BattleActionData_SkillShiftServant__SetAddBeforeSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
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
      sub_B0D97C(this);
    this->fields.isChange = this->fields.displayType != svtData->fields.displayType;
  }
}


void __fastcall BattleActionData_SkillShiftServant__UpdateAfterShiftData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v4; // x20
  BattleBuffData_o *buffData; // x21
  struct BattleData_o *data; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  v4 = this;
  if ( (byte_42139C0 & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_B0D8A4(&int___TypeInfo, targetData);
    byte_42139C0 = 1;
  }
  if ( !targetData )
    goto LABEL_10;
  buffData = targetData->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_10;
  if ( !*(_DWORD *)&this->fields.IsForceBuffEffect )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this->fields.svtId = 10;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypePassiveBuff(buffData, (System_Int32_array *)this, 0LL),
        BattleServantData__setSkillShiftServant(targetData, v4->fields.data, v4->fields.npcId, 0LL),
        (data = v4->fields.data) == 0LL)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0LL )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  BattleLogic__actClassPassiveSkill((BattleLogic_o *)this, targetData->fields.uniqueId, 0LL);
  BattleActionData_ShiftServant__setCheckSvtData((BattleActionData_ShiftServant_o *)v4, targetData, v7);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_UpShiftGaugeData__AddShiftHpData(
        BattleActionData_UpShiftGaugeData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x23
  BattleAction_ShiftUpHpData_o *v13; // x24
  __int64 v14; // x0

  if ( (byte_42139C4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex);
    sub_B0D8A4(&BattleAction_ShiftUpHpData_TypeInfo, v11);
    byte_42139C4 = 1;
  }
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v13 = (BattleAction_ShiftUpHpData_o *)sub_B0D974(
                                          BattleAction_ShiftUpHpData_TypeInfo,
                                          *(_QWORD *)&curGaugeIndex,
                                          *(_QWORD *)&maxGaugeIconIndex);
  BattleAction_ShiftUpHpData___ctor(v13, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField )
    sub_B0D97C(v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ShiftHpDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShiftHpData__Add__);
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1

  if ( (byte_42139C3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_19248/*"hp_iconcharge_1_"*/, v3);
    byte_42139C3 = 1;
  }
  v4 = sub_B0D974(BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v12 = (System_Int32_array **)StringLiteral_19248/*"hp_iconcharge_1_"*/;
  *(_QWORD *)(v4 + 24) = StringLiteral_19248/*"hp_iconcharge_1_"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 24), v12, v6, v7, v8, v9, v10, v11);
  return (BattleServantHpShiftComponent_EffectData_o *)v4;
}


int32_t __fastcall BattleActionData_UpShiftGaugeData__GetShiftValue(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
  return UnityEngine_Mathf__Max_40819140(1, svtData->fields.shiftDeckIndex - baseValue, 0LL)
       - svtData->fields.shiftDeckIndex;
}


bool __fastcall BattleActionData_UpShiftGaugeData__IsInvalid(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  lowLimitShift = targetSvtData->fields.lowLimitShift;
  if ( isChangeMaxBreakGauge )
    v6 = UnityEngine_Mathf__Max_40819140(1, lowLimitShift - 1, 0LL);
  else
    v6 = UnityEngine_Mathf__Min_40819044(lowLimitShift, targetSvtData->fields.shiftDeckIndex, 0LL);
  targetSvtData->fields.lowLimitShift = v6;
}


System_String_o *__fastcall BattleActionData_UpShiftGaugeData__get_Motion(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_42139C1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8831/*"MOTION_SHIFT_GAUGE_UP"*/, method);
    byte_42139C1 = 1;
  }
  return (System_String_o *)StringLiteral_8831/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleAction_PlayUpShiftGaugeUpMain_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_42139C2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo, method);
    byte_42139C2 = 1;
  }
  v4 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_B0D974(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo, method, v2);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, Il2CppMethodPointer))v4->klass->vtable._7_Init.method)(
                                                v4,
                                                this,
                                                v4->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData___c___cctor(const MethodInfo *method)
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

  if ( (byte_421399C & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData___c_TypeInfo, v1);
    byte_421399C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleActionData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActionData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  BattleBuffData_BuffData__UpdateInterval(buff, 0LL);
}


BattleActionData_o *__fastcall BattleActionData___c___AddSideEffectAfterAction_b__294_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_B0D97C(this);
  return act->fields.afterActionData;
}


bool __fastcall BattleActionData___c___ExecUnappliedProcess_b__122_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.EffectProc != 0LL;
}


bool __fastcall BattleActionData___c___ExistFuncSideEffectTrigger_b__156_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArrayEx_b__124_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B0D97C(this);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArray_b__123_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B0D97C(this);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__273_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__273_3(
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
    sub_B0D97C(this);
  return x->fields.EffectProc != 0LL;
}


void __fastcall BattleActionData___c___ResetAllCheckDead_b__176_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__125_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.functionIndex;
}


void __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__125_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool __fastcall BattleActionData___c___SetFuncTargetAllDead_b__137_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleServantData__isAliveLogic(x, 0, 0LL);
}


void __fastcall BattleActionData___c___SetPopupOnce_b__126_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  x->fields.isOncePop = 1;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__282_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.targetId;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__282_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.targetId;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__157_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__157_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateIntervalBuff_b__147_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B0D97C(this);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__275_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__275_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__275_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__275_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_B0D97C(this);
  damagelist = x->fields.damagelist;
  if ( damagelist )
    return UnityEngine_Mathf__Max_40819140(0, damagelist->max_length - 1, 0LL);
  else
    return 0;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__275_4(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__274_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__274_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__274_2(
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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

  if ( (byte_421399D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x);
    byte_421399D = 1;
  }
  execOrderList = this->fields.execOrderList;
  if ( !execOrderList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)execOrderList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)x,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
}


void __fastcall BattleActionData___c__DisplayClass123_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass123_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_BaseData__o *execOrderList; // x0

  if ( (byte_421399E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x);
    byte_421399E = 1;
  }
  execOrderList = this->fields.execOrderList;
  if ( !execOrderList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)execOrderList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)x,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.functionIndex == damage->fields.functionIndex;
}


void __fastcall BattleActionData___c__DisplayClass175_0___ctor(
        BattleActionData___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass175_0___getBuffList_b__0(
        BattleActionData___c__DisplayClass175_0_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass182_0___ctor(
        BattleActionData___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass182_0___getHealList_b__0(
        BattleActionData___c__DisplayClass182_0_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass187_0___ctor(
        BattleActionData___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass187_0___getReplaceMember_b__0(
        BattleActionData___c__DisplayClass187_0_o *this,
        BattleActionData_ReplaceMember_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass200_0___ctor(
        BattleActionData___c__DisplayClass200_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass200_0___getSummonServant_b__0(
        BattleActionData___c__DisplayClass200_0_o *this,
        BattleActionData_SummonServant_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass273_0___ctor(
        BattleActionData___c__DisplayClass273_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass273_0___GetFuncTargetIds_b__0(
        BattleActionData___c__DisplayClass273_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass273_0_o *v4; // x20

  v4 = this;
  if ( (byte_421399F & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass273_0_o *)sub_B0D8A4(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_421399F = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass273_0_o *)v4->fields.ids) == 0LL )
    sub_B0D97C(this);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass273_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass273_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass273_0_o *v4; // x20

  v4 = this;
  if ( (byte_42139A0 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass273_0_o *)sub_B0D8A4(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_42139A0 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass273_0_o *)v4->fields.ids) == 0LL )
    sub_B0D97C(this);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass273_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass273_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass273_0_o *v4; // x20

  v4 = this;
  if ( (byte_42139A1 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass273_0_o *)sub_B0D8A4(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_42139A1 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass273_0_o *)v4->fields.ids) == 0LL )
    sub_B0D97C(this);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass276_0___ctor(
        BattleActionData___c__DisplayClass276_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass276_0___GetFunctionIndexArrayNearByCuriousFunc_b__0(
        BattleActionData___c__DisplayClass276_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42139A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_42139A2 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_297F990 *)Method_System_Nullable_int__get_Value__) > x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass276_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass276_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42139A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_42139A3 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_297F990 *)Method_System_Nullable_int__get_Value__) == x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass276_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass276_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42139A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_42139A4 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_297F990 *)Method_System_Nullable_int__get_Value__) < x;
}


void __fastcall BattleActionData___c__DisplayClass281_0___ctor(
        BattleActionData___c__DisplayClass281_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass281_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass281_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass282_0___ctor(
        BattleActionData___c__DisplayClass282_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass282_0___SetSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass282_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData___c__DisplayClass282_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  System_Collections_Generic_List_int__o *targetList; // x20
  BattleActionData___c_c *v16; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__282_1; // x22
  Il2CppObject *v19; // x23
  struct BattleActionData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  System_Collections_Generic_List_int__o *v28; // x19
  BattleActionData___c_c *v29; // x0
  struct BattleActionData___c_StaticFields *v30; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__282_2; // x21
  Il2CppObject *v32; // x22
  struct BattleActionData___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  v3 = this;
  if ( (byte_42139A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___, v4);
    sub_B0D8A4(&Method_System_Func_BattleActionData_HealData__int___ctor__, v5);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BuffData__int___ctor__, v6);
    sub_B0D8A4(&System_Func_BattleActionData_BuffData__int__TypeInfo, v7);
    sub_B0D8A4(&System_Func_BattleActionData_HealData__int__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B0D8A4(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__282_1__, v10);
    sub_B0D8A4(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__282_2__, v11);
    this = (BattleActionData___c__DisplayClass282_0_o *)sub_B0D8A4(&BattleActionData___c_TypeInfo, v12);
    byte_42139A5 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.buffdatalist;
  if ( buffdatalist )
  {
    targetList = v3->fields.targetList;
    v16 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v16 = BattleActionData___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__282_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__282_1;
    if ( !_9__282_1 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__282_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleActionData_BuffData__int__TypeInfo,
                                                                                    method,
                                                                                    v2);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__282_1,
        v19,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__282_1__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__282_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__282_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v20->__9__282_1,
        (System_Int32_array **)_9__282_1,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    this = (BattleActionData___c__DisplayClass282_0_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__282_1,
                                                          (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_27;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
    _4__this = v3->fields.__4__this;
    if ( !_4__this )
      goto LABEL_27;
  }
  healdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.healdatalist;
  if ( healdatalist )
  {
    v28 = v3->fields.targetList;
    v29 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v29 = BattleActionData___c_TypeInfo;
    }
    v30 = v29->static_fields;
    _9__282_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v30->__9__282_2;
    if ( !_9__282_2 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v30 = BattleActionData___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)v30->__9;
      _9__282_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleActionData_HealData__int__TypeInfo,
                                                                                    method,
                                                                                    v2);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__282_2,
        v32,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__282_2__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleActionData_HealData__int___ctor__);
      v33 = BattleActionData___c_TypeInfo->static_fields;
      v33->__9__282_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__282_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v33->__9__282_2,
        (System_Int32_array **)_9__282_2,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    this = (BattleActionData___c__DisplayClass282_0_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__282_2,
                                                          (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v28 )
    {
      System_Collections_Generic_List_int___AddRange(
        v28,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_27:
    sub_B0D97C(this);
  }
}


void __fastcall BattleActionData___c__DisplayClass283_0___ctor(
        BattleActionData___c__DisplayClass283_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass283_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass283_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass290_0___ctor(
        BattleActionData___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass290_0___getSideEffectList_b__0(
        BattleActionData___c__DisplayClass290_0_o *this,
        BattleActionData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.actType == this->fields.actType;
}


void __fastcall BattleActionData___c__DisplayClass294_0___ctor(
        BattleActionData___c__DisplayClass294_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass294_0___AddSideEffectAfterAction_b__0(
        BattleActionData___c__DisplayClass294_0_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || (this = (BattleActionData___c__DisplayClass294_0_o *)act) == 0LL )
    sub_B0D97C(this);
  return BattleActionData__ExistsAddableAfterAction(act, perf->fields.data, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass304_0___ctor(
        BattleActionData___c__DisplayClass304_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass304_0___addReflectLogicResultServantId_b__0(
        BattleActionData___c__DisplayClass304_0_o *this,
        BattleActionData_ServantLogicResultData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}