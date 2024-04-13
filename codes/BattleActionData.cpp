void __fastcall BattleActionData___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v4; // x8

  if ( (byte_42E7FE2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, v1, v2, v3);
    byte_42E7FE2 = 1;
  }
  BattleActionData_TypeInfo->static_fields->TYPE_DEAD = 100;
  BattleActionData_TypeInfo->static_fields->TYPE_TW = 101;
  v4 = BattleActionData_TypeInfo;
  BattleActionData_TypeInfo->static_fields->TYPE_SKILL = 102;
  v4->static_fields->TYPE_BACKSTEP = 103;
  v4->static_fields->TYPE_RESURRECTION = 104;
  v4->static_fields->TYPE_BOOSTSKILL = 105;
  v4->static_fields->TYPE_COMMAND_SPELL = 106;
  v4->static_fields->TYPE_ORDERARTS = 121;
  v4->static_fields->TYPE_ORDERBUSTER = 122;
  v4->static_fields->TYPE_ORDERQUICK = 123;
  v4->static_fields->TYPE_ENEMY_CUTIN = 131;
  v4->static_fields->TYPE_ENEMY_SPELL_CUTIN = 132;
  v4->static_fields->addActionOrder = 0;
}


void __fastcall BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Collections_Generic_List_int__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v68; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_List_int__o *v75; // x20
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_HashSet_int__o *v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v89; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v103; // x20
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7

  if ( (byte_42E7FE1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_1/*""*/, v44, v45, v46);
    byte_42E7FE1 = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1LL;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1LL;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  v47 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v47,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.damageSideEffectedSvtIds = v47;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.damageSideEffectedSvtIds,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_B5D694(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v54,
    (const MethodInfo_2FAA17C *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v54;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.attackSideEffectedSvtIds,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantLogicResultList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.funcResult = 1;
  v68 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v68,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.funcTargetPlayerTypeList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v75,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.funcTargetList = v75;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.funcTargetList,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  v82 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v82,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v82;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B5D694(System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v89,
    (const MethodInfo_2400D2C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v89;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.skillCutInMessage, v96, v97, v98, v99, v100, v101, v102);
  v103 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v103,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v103;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sideEffectList,
    (System_Int32_array **)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__AddAfterActionData(
        BattleActionData_o *this,
        BattleActionData_o *afterActionData,
        bool isPreActCheckDead,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleActionData_o **p_afterActionData; // x20

  this->fields.afterActionData = afterActionData;
  p_afterActionData = &this->fields.afterActionData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.afterActionData,
    (System_Int32_array **)afterActionData,
    (System_String_array **)isPreActCheckDead,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( *p_afterActionData )
    (*p_afterActionData)->fields.isPreAfterActCheckDead = isPreActCheckDead;
}


void __fastcall BattleActionData__AddBuffList(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x0
  BattleServantConfConponent_o *p_buffdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1

  if ( (byte_42E7F9E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v9, v10, v11);
    byte_42E7F9E = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  buffdatalist = this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (BattleServantConfConponent_o *)&this->fields.buffdatalist;
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (BattleServantConfConponent_c *)v14;
    sub_B5D560(p_buffdatalist, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)p_buffdatalist->klass;
    if ( !p_buffdatalist->klass )
      sub_B5D69C(0LL, v21);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffdatalist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
}


BattleActionData_DisplayMessageData_o *__fastcall BattleActionData__AddDisplayMessage(
        BattleActionData_o *this,
        BattleMessageEntity_o *ent,
        ParseBattleMessage_o *parser,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleActionData_DisplayMessageData_o *v18; // x19
  struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *DispMsgList_k__BackingField; // x0
  BattleServantConfConponent_o *p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1

  if ( (byte_42E7FB3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_DisplayMessageData_TypeInfo, (_DWORD)ent, (_DWORD)parser, preMsg);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo, v15, v16, v17);
    byte_42E7FB3 = 1;
  }
  v18 = (BattleActionData_DisplayMessageData_o *)sub_B5D694(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor(v18, ent, parser, preMsg, 0LL);
  DispMsgList_k__BackingField = this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = (BattleServantConfConponent_o *)&this->fields._DispMsgList_k__BackingField;
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v21,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    p_DispMsgList_k__BackingField->klass = (BattleServantConfConponent_c *)v21;
    sub_B5D560(p_DispMsgList_k__BackingField, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
    DispMsgList_k__BackingField = (struct System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *)p_DispMsgList_k__BackingField->klass;
    if ( !p_DispMsgList_k__BackingField->klass )
      sub_B5D69C(0LL, v28);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DispMsgList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
  return v18;
}


BattleActionData_o *__fastcall BattleActionData__AddDisplayTriggerIntervalBuff(
        BattleActionData_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  BattleActionData_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  BattleServantData_o *key; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__150_0; // x22
  Il2CppObject *v25; // x23
  struct BattleActionData___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v6 = this;
  if ( (byte_42E7F93 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__150_0__, v16, v17, v18);
    this = (BattleActionData_o *)sub_B5D5C4(&BattleActionData___c_TypeInfo, v19, v20, v21);
    byte_42E7F93 = 1;
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
    v25 = (Il2CppObject *)static_fields->__9;
    _9__150_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__150_0,
      v25,
      Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__150_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    v26 = BattleActionData___c_TypeInfo->static_fields;
    v26->__9__150_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__150_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v26->__9__150_0,
      (System_Int32_array **)_9__150_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v6 )
LABEL_14:
    sub_B5D69C(this, task);
  BattleActionData__AddUpdateIntervalBuffDict(
    v6,
    key,
    (System_Action_BattleBuffData_BuffData__o *)_9__150_0,
    task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value,
    v4);
  return v6;
}


bool __fastcall BattleActionData__AddFieldServantUpdateIntervalBuff(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int endcameraname; // w8
  BattleActionData_o *v13; // x20
  unsigned int v14; // w24
  BattleActionData_c **v15; // x8
  BattleServantData_o *v16; // x21
  BattleBuffData_BuffData_array *UpdateWaitIntervalBuffArray; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x23
  const MethodInfo *v19; // x4
  __int64 v21; // x0

  v5 = (Il2CppObject *)this;
  if ( (byte_42E7F8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    this = (BattleActionData_o *)sub_B5D5C4(&Method_BattleActionData_UpdateIntervalCurrent__, v9, v10, v11);
    byte_42E7F8E = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (BattleActionData_o *)BattleData__getFieldServantList(data, 0, 0LL);
  if ( !this )
    goto LABEL_12;
  endcameraname = (int)this->fields.endcameraname;
  v13 = this;
  if ( endcameraname >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= endcameraname )
      {
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      v15 = &v13->klass + (int)v14;
      v16 = (BattleServantData_o *)v15[4];
      if ( !v16 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v15[4], 0LL);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0LL);
      v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v18,
        v5,
        Method_BattleActionData_UpdateIntervalCurrent__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v5,
        v16,
        (System_Action_BattleBuffData_BuffData__o *)v18,
        UpdateWaitIntervalBuffArray,
        v19);
      endcameraname = (int)v13->fields.endcameraname;
      if ( (int)++v14 >= endcameraname )
        return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v5->klass->vtable[5].method)(
                 v5,
                 v5->klass->vtable[6].methodPtr);
    }
LABEL_12:
    sub_B5D69C(this, data);
  }
  return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v5->klass->vtable[5].method)(
           v5,
           v5->klass->vtable[6].methodPtr);
}


void __fastcall BattleActionData__AddHealList(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x0
  BattleServantConfConponent_o *p_healdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1

  if ( (byte_42E7FA2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_HealData__Add__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v9, v10, v11);
    byte_42E7FA2 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  healdatalist = this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (BattleServantConfConponent_o *)&this->fields.healdatalist;
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (BattleServantConfConponent_c *)v14;
    sub_B5D560(p_healdatalist, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)p_healdatalist->klass;
    if ( !p_healdatalist->klass )
      sub_B5D69C(0LL, v21);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)healdatalist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_HealData__Add__);
}


void __fastcall BattleActionData__AddHpDecreaseFuncTargets(
        BattleActionData_o *this,
        int32_t funcType,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  bool IsRelatedHpDecrease; // w0
  System_Action_int__o *v17; // x21

  if ( (byte_42E7F8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, funcType, (_DWORD)targets, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v10, v11, v12);
    sub_B5D5C4(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__132_0__, v13, v14, v15);
    byte_42E7F8C = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0LL);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v17 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__132_0__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v17,
        (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o *moveToSubMemberList; // x23
  BattleActionData_MoveToSubMember_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42E7FA7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
      index,
      uniqueId,
      *(_QWORD *)&funcIndex);
    sub_B5D5C4(&BattleActionData_MoveToSubMember_TypeInfo, v11, v12, v13);
    byte_42E7FA7 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = this->fields.moveToSubMemberList;
  v15 = (BattleActionData_MoveToSubMember_o *)sub_B5D694(BattleActionData_MoveToSubMember_TypeInfo);
  BattleActionData_MoveToSubMember___ctor(v15, index, uniqueId, funcIndex, isSucceeded, 0LL);
  if ( !moveToSubMemberList )
    sub_B5D69C(v16, v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)moveToSubMemberList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__);
}


void __fastcall BattleActionData__AddSideEffectAfterAction(
        BattleActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x22
  BattlePerformance_o *v37; // x0
  BattleActionData_array *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  BattlePerformance_o **v45; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  BattleActionData___c_c *v49; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__295_1; // x21
  Il2CppObject *v52; // x22
  struct BattleActionData___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0

  if ( (byte_42E7FD4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___,
      (_DWORD)perf,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleActionData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActionData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_BattleActionData__BattleActionData___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_BattleActionData__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_BattleActionData__BattleActionData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Func_BattleActionData__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleActionData___c__AddSideEffectAfterAction_b__295_1__, v24, v25, v26);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass295_0__AddSideEffectAfterAction_b__0__, v27, v28, v29);
    sub_B5D5C4(&BattleActionData___c__DisplayClass295_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v33, v34, v35);
    byte_42E7FD4 = 1;
  }
  v36 = sub_B5D694(BattleActionData___c__DisplayClass295_0_TypeInfo);
  BattleActionData___c__DisplayClass295_0___ctor((BattleActionData___c__DisplayClass295_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_17;
  *(_QWORD *)(v36 + 16) = perf;
  v45 = (BattlePerformance_o **)(v36 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)perf, v39, v40, v41, v42, v43, v44);
  sideEffectList = this->fields.sideEffectList;
  v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v47,
    (Il2CppObject *)v36,
    Method_BattleActionData___c__DisplayClass295_0__AddSideEffectAfterAction_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData__bool___ctor__);
  v48 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v49 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v49 = BattleActionData___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__295_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__295_1;
  if ( !_9__295_1 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__295_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleActionData__BattleActionData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__295_1,
      v52,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__295_1__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleActionData__BattleActionData___ctor__);
    v53 = BattleActionData___c_TypeInfo->static_fields;
    v53->__9__295_1 = (struct System_Func_BattleActionData__BattleActionData__o *)_9__295_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__295_1,
      (System_Int32_array **)_9__295_1,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v48,
                                                               (System_Func_TSource__TResult__o *)_9__295_1,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v37 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v60,
                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v37 )
    goto LABEL_17;
  v38 = (BattleActionData_array *)v37;
  if ( v37->fields.fsm )
  {
    v37 = *v45;
    if ( *v45 )
    {
      BattlePerformance__addActionData(v37, v38, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(v37, v38);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleActionData_TransformServant_o *v14; // x24
  __int64 v15; // x1
  struct System_Collections_Generic_List_BattleActionData_TransformServant__o *transformServantlist; // x0

  if ( (byte_42E7FA9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
      index,
      uniqueId,
      *(_QWORD *)&funcIndex);
    sub_B5D5C4(&BattleActionData_TransformServant_TypeInfo, v11, v12, v13);
    byte_42E7FA9 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v14 = (BattleActionData_TransformServant_o *)sub_B5D694(BattleActionData_TransformServant_TypeInfo);
  BattleActionData_TransformServant___ctor(v14, index, uniqueId, funcIndex, overwriteLimitCount, 0LL);
  transformServantlist = this->fields.transformServantlist;
  if ( !transformServantlist )
    sub_B5D69C(0LL, v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transformServantlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__);
}


void __fastcall BattleActionData__AddUpdateIntervalBuffDict(
        BattleActionData_o *this,
        BattleServantData_o *svtData,
        System_Action_BattleBuffData_BuffData__o *updateAction,
        BattleBuffData_BuffData_array *intervalArray,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  const MethodInfo_237DB80 *v27; // x4
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v30; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v34; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_Variant__Variant__o v35; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v36; // 0:x1.16

  if ( (byte_42E7F8F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__,
      (_DWORD)svtData,
      (_DWORD)updateAction,
      intervalArray);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v24, v25, v26);
    byte_42E7F8F = 1;
  }
  v34.fields.key = 0LL;
  v34.fields.value = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)intervalArray, 0LL) )
  {
    v35.fields.key = (struct Firebase_Variant_o *)&v34;
    v35.fields.value = (struct Firebase_Variant_o *)svtData;
    System_Collections_Generic_KeyValuePair_Variant__Variant____ctor(
      v35,
      (Firebase_Variant_o *)updateAction,
      (Firebase_Variant_o *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v27);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_12;
    if ( !System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___ContainsKey(
            IntervalBuffDict_k__BackingField,
            v34,
            (const MethodInfo_2401B68 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v30 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v34.fields.key;
      value = v34.fields.value;
      v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v33,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v30 )
        goto LABEL_12;
      v36.fields.key = key;
      v36.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v30,
        v36,
        (Il2CppObject *)v33,
        (const MethodInfo_24018BC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v34,
                                                                                                    (const MethodInfo_2401820 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(IntervalBuffDict_k__BackingField, v28);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v43; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__122_0; // x21
  Il2CppObject *v46; // x22
  struct BattleActionData___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_T__o *v54; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v55; // x21

  if ( (byte_42E7F87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_BuffData___ctor__, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleActionData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BuffData__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BattleActionData___c__ExecUnappliedProcess_b__122_0__, v21, v22, v23);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass122_0__ExecUnappliedProcess_b__1__, v24, v25, v26);
    sub_B5D5C4(&BattleActionData___c__DisplayClass122_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v30, v31, v32);
    byte_42E7F87 = 1;
  }
  v33 = sub_B5D694(BattleActionData___c__DisplayClass122_0_TypeInfo);
  BattleActionData___c__DisplayClass122_0___ctor((BattleActionData___c__DisplayClass122_0_o *)v33, 0LL);
  if ( !v33 )
    sub_B5D69C(v34, v35);
  *(_QWORD *)(v33 + 16) = data;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)data, v36, v37, v38, v39, v40, v41);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v43 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v43 = BattleActionData___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__122_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__122_0;
    if ( !_9__122_0 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v46 = (Il2CppObject *)static_fields->__9;
      _9__122_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__122_0,
        v46,
        Method_BattleActionData___c__ExecUnappliedProcess_b__122_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
      v47 = BattleActionData___c_TypeInfo->static_fields;
      v47->__9__122_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__122_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v47->__9__122_0,
        (System_Int32_array **)_9__122_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__122_0,
                                                           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v55 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v55,
      (Il2CppObject *)v33,
      Method_BattleActionData___c__DisplayClass122_0__ExecUnappliedProcess_b__1__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v54,
      (System_Action_T__o *)v55,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool __fastcall BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
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
  BattleActionData___c_c *v18; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_0; // x20
  Il2CppObject *v21; // x21
  struct BattleActionData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7F94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleActionData_BaseData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BaseData__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__156_0__, v11, v12, v13);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v14, v15, v16);
    byte_42E7F94 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, 0LL) )
    return 0;
  v18 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v18 = BattleActionData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__156_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__156_0,
      v21,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__156_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    v22 = BattleActionData___c_TypeInfo->static_fields;
    v22->__9__156_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__156_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__156_0,
      (System_Int32_array **)_9__156_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__156_0,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleActionData_BaseData___);
}


bool __fastcall BattleActionData__ExistSideEffect(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *SideEffectList; // x0

  SideEffectList = (System_Collections_ICollection_o *)BattleActionData__getSideEffectList(this, targetType, method);
  return !BasicHelper__IsNullOrEmpty(SideEffectList, 0LL);
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
    sub_B5D69C(this, 0LL);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0LL);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL);
}


System_Int32_array *__fastcall BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7FC3 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, funcIdx, (_DWORD)method, v3);
    byte_42E7FC3 = 1;
  }
  return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
}


BattleActionData_DamageData_array *__fastcall BattleActionData__GetDamageArrayDistinctIndex(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  const MethodInfo *v31; // x2
  BattleActionData_DamageData_array *DamageList; // x0
  __int64 v33; // x1
  BattleActionData_DamageData_array *v34; // x20
  unsigned __int64 v35; // x24
  __int64 v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x23
  __int64 v46; // x0

  if ( (byte_42E7F9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleActionData_DamageData___, funcIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_BattleActionData_DamageData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass169_0__GetDamageArrayDistinctIndex_b__0__, v24, v25, v26);
    sub_B5D5C4(&BattleActionData___c__DisplayClass169_0_TypeInfo, v27, v28, v29);
    byte_42E7F9D = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v31);
  if ( !DamageList )
    goto LABEL_14;
  v34 = DamageList;
  if ( (int)DamageList->max_length >= 1 )
  {
    v35 = 0LL;
    while ( 1 )
    {
      v36 = sub_B5D694(BattleActionData___c__DisplayClass169_0_TypeInfo);
      BattleActionData___c__DisplayClass169_0___ctor((BattleActionData___c__DisplayClass169_0_o *)v36, 0LL);
      if ( v35 >= v34->max_length )
      {
        v46 = sub_B5D6C8(DamageList);
        sub_B5D668(v46, 0LL);
      }
      if ( !v36 )
        break;
      v43 = (System_Int32_array **)v34->m_Items[v35];
      *(_QWORD *)(v36 + 16) = v43;
      sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), v43, v37, v38, v39, v40, v41, v42);
      v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_DamageData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v44,
        (Il2CppObject *)v36,
        Method_BattleActionData___c__DisplayClass169_0__GetDamageArrayDistinctIndex_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                          (System_Collections_Generic_List_T__o *)v30,
                                                          (System_Func_T__bool__o *)v44,
                                                          (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_BattleActionData_DamageData___);
      if ( ((unsigned __int8)DamageList & 1) == 0 )
      {
        if ( !v30 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v36 + 16),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
      }
      if ( (__int64)++v35 >= (int)v34->max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B5D69C(DamageList, v33);
  }
LABEL_12:
  if ( !v30 )
    goto LABEL_14;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDamageTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *damagedatalist; // x0
  __int64 v21; // x1
  System_Int32_array *v22; // x19
  const MethodInfo *v23; // x1
  il2cpp_array_size_t i; // w20
  char *v25; // x9
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7FC2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__,
      funcIdx,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__, v17, v18, v19);
    byte_42E7FC2 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  damagedatalist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleActionData__get_damagedatalist(
                                                                                                    this,
                                                                                                    *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v22 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleActionData__get_damagedatalist(this, v23)) == 0LL) )
  {
    sub_B5D69C(damagedatalist, v21);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    damagedatalist,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v26 )
      break;
    if ( !v30.fields.current )
      sub_B5D69C(v26, v27);
    if ( !v22 )
      sub_B5D69C(v26, v27);
    if ( i >= v22->max_length )
    {
      v29 = sub_B5D6C8(v26);
      sub_B5D668(v29, 0LL);
    }
    v25 = (char *)v22 + 4 * (int)i;
    *((_DWORD *)v25 + 8) = HIDWORD(v30.fields.current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v22;
}


System_Int32_array *__fastcall BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7FC4 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, funcIdx, (_DWORD)method, v3);
    byte_42E7FC4 = 1;
  }
  return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
}


BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArray(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x23
  BattleActionData___c_c *v56; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  BattleActionData___c_c **v64; // x19
  const MethodInfo *v65; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v67; // x24
  const MethodInfo *v68; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v70; // x21
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v71; // x20
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__123_2; // x21
  Il2CppObject *v74; // x22
  struct BattleActionData___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  if ( (byte_42E7F88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_HealData___ctor__, funcIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Action_BattleActionData_BuffData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Action_BattleActionData_HealData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Action_BattleActionData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v15, v16, v17);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Comparison_BattleActionData_BaseData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Comparison_BattleActionData_BaseData__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_BattleActionData___c__GetExecOrderArray_b__123_2__, v39, v40, v41);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__0__, v42, v43, v44);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__1__, v45, v46, v47);
    sub_B5D5C4(&BattleActionData___c__DisplayClass123_0_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v51, v52, v53);
    byte_42E7F88 = 1;
  }
  v54 = sub_B5D694(BattleActionData___c__DisplayClass123_0_TypeInfo);
  BattleActionData___c__DisplayClass123_0___ctor((BattleActionData___c__DisplayClass123_0_o *)v54, 0LL);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v54 )
    goto LABEL_15;
  *(_QWORD *)(v54 + 16) = v55;
  v64 = (BattleActionData___c_c **)(v54 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)v55, v58, v59, v60, v61, v62, v63);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v65);
  v67 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v67,
    (Il2CppObject *)v54,
    Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    BuffList,
    (System_Action_T__o *)v67,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v68);
  v70 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v70,
    (Il2CppObject *)v54,
    Method_BattleActionData___c__DisplayClass123_0__GetExecOrderArray_b__1__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_HealData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    HealList,
    (System_Action_T__o *)v70,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  v71 = *(System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **)(v54 + 16);
  v56 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v56 = BattleActionData___c_TypeInfo;
  }
  static_fields = v56->static_fields;
  _9__123_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__123_2;
  if ( !_9__123_2 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)static_fields->__9;
    _9__123_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleActionData_BaseData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__123_2,
      v74,
      Method_BattleActionData___c__GetExecOrderArray_b__123_2__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleActionData_BaseData___ctor__);
    v75 = BattleActionData___c_TypeInfo->static_fields;
    v75->__9__123_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__123_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v75->__9__123_2,
      (System_Int32_array **)_9__123_2,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  if ( !v71
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          v71,
          (System_Comparison_T__o *)_9__123_2,
          (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v56 = *v64) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(v56, v57);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArrayEx(
        BattleActionData_o *this,
        int32_t funcIndex,
        bool isSort,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x19
  const MethodInfo *v32; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x0
  const MethodInfo *v37; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x0
  BattleActionData___c_c *v39; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__124_0; // x20
  Il2CppObject *v42; // x21
  struct BattleActionData___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42E7F89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_BattleActionData_BaseData___ctor__, funcIndex, isSort, method);
    sub_B5D5C4(&System_Comparison_BattleActionData_BaseData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_BattleActionData___c__GetExecOrderArrayEx_b__124_0__, v25, v26, v27);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v28, v29, v30);
    byte_42E7F89 = 1;
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v32);
  if ( !v31 )
    sub_B5D69C(BuffList, v34);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
    BuffList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v35);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
    HealList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v37);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
    DamageList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v39 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v39 = BattleActionData___c_TypeInfo;
    }
    static_fields = v39->static_fields;
    _9__124_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__124_0;
    if ( !_9__124_0 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)static_fields->__9;
      _9__124_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleActionData_BaseData__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__124_0,
        v42,
        Method_BattleActionData___c__GetExecOrderArrayEx_b__124_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_BattleActionData_BaseData___ctor__);
      v43 = BattleActionData___c_TypeInfo->static_fields;
      v43->__9__124_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__124_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v43->__9__124_0,
        (System_Int32_array **)_9__124_0,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v31,
      (System_Comparison_T__o *)_9__124_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleServantData_array *__fastcall BattleActionData__GetFuncSideEffectTargetServants(
        BattleActionData_o *this,
        BattleData_o *bData,
        bool isMainOnly,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x20
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  _QWORD **v45; // x20
  __int64 v46; // x19
  __int16 v47; // w8
  __int64 v48; // x19
  __int64 v49; // x19
  __int64 v50; // x19
  __int64 v52; // x22
  System_Func_int__bool__o *v53; // x23
  __int64 v54; // x1
  __int64 targetId; // x0
  System_Func_int__BattleActionData_SideEffectData__o *v56; // x21
  System_Collections_Generic_IEnumerable_T__o *v57; // x0
  System_Collections_Generic_IEnumerable_T__o *v58; // x0
  __int64 v59; // x0

  v5 = targetIds;
  if ( (byte_42E7F80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BattleServantData___, (_DWORD)bData, isMainOnly, targetIds);
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BattleServantData___, v12, v13, v14);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, v15, v16, v17);
    sub_B5D5C4(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__106_0__, v18, v19, v20);
    sub_B5D5C4(&Method_BattleData_getServantData__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_int__BattleServantData___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Func_int__BattleServantData__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&int___TypeInfo, v42, v43, v44);
    byte_42E7F80 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v5, 0LL) )
  {
    if ( isMainOnly )
    {
      v52 = sub_B5D5DC(int___TypeInfo, 1LL);
      v53 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v53,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__106_0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int__28142236(
             v5,
             (System_Func_T__bool__o *)v53,
             (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
      {
        targetId = (unsigned int)this->fields.targetId;
        if ( !v52 )
LABEL_24:
          sub_B5D69C(targetId, v54);
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     v5,
                     0,
                     -1,
                     (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
        if ( !v52 )
          goto LABEL_24;
      }
      if ( !*(_DWORD *)(v52 + 24) )
      {
        v59 = sub_B5D6C8(targetId);
        sub_B5D668(v59, 0LL);
      }
      v5 = (System_Int32_array *)v52;
      *(_DWORD *)(v52 + 32) = targetId;
    }
    v56 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v56,
      (Il2CppObject *)bData,
      Method_BattleData_getServantData__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__BattleServantData___ctor__);
    v57 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                           (System_Func_TSource__TResult__o *)v56,
                                                           (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v58 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v57,
            (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
  v45 = (_QWORD **)Method_System_Array_Empty_BattleServantData___;
  v46 = **((_QWORD **)Method_System_Array_Empty_BattleServantData___ + 6);
  v47 = *(_WORD *)(v46 + 306);
  if ( (v47 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleServantData___ + 6));
    v47 = *(_WORD *)(v46 + 306);
  }
  if ( (v47 & 0x400) != 0 )
  {
    v48 = *v45[6];
    if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
      sub_AF52C4(*v45[6]);
    if ( !*(_DWORD *)(v48 + 224) )
    {
      v49 = *v45[6];
      if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
        sub_AF52C4(*v45[6]);
      j_il2cpp_runtime_class_init_0(v49);
    }
  }
  v50 = *v45[6];
  if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
    sub_AF52C4(*v45[6]);
  return **(BattleServantData_array ***)(v50 + 184);
}


System_Int32_array *__fastcall BattleActionData__GetFuncTargetIds(
        BattleActionData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  __int64 v78; // x21
  System_Collections_Generic_HashSet_int__o *v79; // x22
  __int64 v80; // x0
  __int64 v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  const MethodInfo *v88; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v90; // x23
  const MethodInfo *v91; // x2
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x22
  BattleActionData___c_c *v93; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__274_1; // x23
  Il2CppObject *v96; // x24
  struct BattleActionData___c_StaticFields *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_IEnumerable_T__o *v104; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v105; // x23
  const MethodInfo *v106; // x2
  BattleActionData_HealData_array *HealList; // x0
  BattleActionData___c_c *v108; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x19
  struct BattleActionData___c_StaticFields *v110; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__274_3; // x20
  Il2CppObject *v112; // x22
  struct BattleActionData___c_StaticFields *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Collections_Generic_IEnumerable_T__o *v120; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v121; // x20

  if ( (byte_42E7FC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_DamageData___ctor__, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Action_BattleActionData_HealData___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Action_BattleActionData_BuffData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Action_BattleActionData_DamageData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Action_BattleActionData_HealData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Action_BattleActionData_BuffData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v21, v22, v23);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_DamageData___, v24, v25, v26);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v33, v34, v35);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___, v36, v37, v38);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BuffData__bool___ctor__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Func_BattleActionData_HealData__bool___ctor__, v42, v43, v44);
    sub_B5D5C4(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&System_Func_BattleActionData_HealData__bool__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_BattleActionData___c__GetFuncTargetIds_b__274_1__, v57, v58, v59);
    sub_B5D5C4(&Method_BattleActionData___c__GetFuncTargetIds_b__274_3__, v60, v61, v62);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__0__, v63, v64, v65);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__2__, v66, v67, v68);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__4__, v69, v70, v71);
    sub_B5D5C4(&BattleActionData___c__DisplayClass274_0_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v75, v76, v77);
    byte_42E7FC8 = 1;
  }
  v78 = sub_B5D694(BattleActionData___c__DisplayClass274_0_TypeInfo);
  BattleActionData___c__DisplayClass274_0___ctor((BattleActionData___c__DisplayClass274_0_o *)v78, 0LL);
  v79 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v79,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !v78 )
    sub_B5D69C(v80, v81);
  *(_QWORD *)(v78 + 16) = v79;
  sub_B5D560((BattleServantConfConponent_o *)(v78 + 16), (System_Int32_array **)v79, v82, v83, v84, v85, v86, v87);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v88);
  v90 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_DamageData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v90,
    (Il2CppObject *)v78,
    Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_DamageData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    DamageList,
    (System_Action_T__o *)v90,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(this, index, v91);
  v93 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v93 = BattleActionData___c_TypeInfo;
  }
  static_fields = v93->static_fields;
  _9__274_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__274_1;
  if ( !_9__274_1 )
  {
    if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v93);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v96 = (Il2CppObject *)static_fields->__9;
    _9__274_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__274_1,
      v96,
      Method_BattleActionData___c__GetFuncTargetIds_b__274_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
    v97 = BattleActionData___c_TypeInfo->static_fields;
    v97->__9__274_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__274_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v97->__9__274_1,
      (System_Int32_array **)_9__274_1,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  v104 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                          BuffList,
                                                          (System_Func_TSource__bool__o *)_9__274_1,
                                                          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v105 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v105,
    (Il2CppObject *)v78,
    Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__2__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v104,
    (System_Action_T__o *)v105,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v106);
  v108 = BattleActionData___c_TypeInfo;
  v109 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v108 = BattleActionData___c_TypeInfo;
  }
  v110 = v108->static_fields;
  _9__274_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v110->__9__274_3;
  if ( !_9__274_3 )
  {
    if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 && !v108->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v108);
      v110 = BattleActionData___c_TypeInfo->static_fields;
    }
    v112 = (Il2CppObject *)v110->__9;
    _9__274_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_HealData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__274_3,
      v112,
      Method_BattleActionData___c__GetFuncTargetIds_b__274_3__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_HealData__bool___ctor__);
    v113 = BattleActionData___c_TypeInfo->static_fields;
    v113->__9__274_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__274_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v113->__9__274_3,
      (System_Int32_array **)_9__274_3,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
  }
  v120 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                          v109,
                                                          (System_Func_TSource__bool__o *)_9__274_3,
                                                          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v121 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v121,
    (Il2CppObject *)v78,
    Method_BattleActionData___c__DisplayClass274_0__GetFuncTargetIds_b__4__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_HealData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v120,
    (System_Action_T__o *)v121,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v78 + 16),
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__GetFunctionIndexArrayNearByCuriousFunc(
        BattleActionData_o *this,
        int32_t effectTiming,
        System_Int32_array *resultOnGetFailed,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  BattleActionData___c__DisplayClass277_0_o *v31; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v35; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListFunctionIndex; // x21
  System_Func_int__bool__o *v37; // x0
  __int64 *v38; // x8
  System_Func_TSource__bool__o *v40; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0

  if ( (byte_42E7FCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, effectTiming, (_DWORD)resultOnGetFailed, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Nullable_int__get_HasValue__, v16, v17, v18);
    sub_B5D5C4(
      &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__,
      v25,
      v26,
      v27);
    sub_B5D5C4(&BattleActionData___c__DisplayClass277_0_TypeInfo, v28, v29, v30);
    byte_42E7FCB = 1;
  }
  v31 = (BattleActionData___c__DisplayClass277_0_o *)sub_B5D694(BattleActionData___c__DisplayClass277_0_TypeInfo);
  BattleActionData___c__DisplayClass277_0___ctor(v31, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0LL);
  if ( !v31 )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(FuncIndexForSplitFuncSequence, v35);
  v31->fields.curiousFuncIndex = FuncIndexForSplitFuncSequence;
  if ( (*(_QWORD *)&FuncIndexForSplitFuncSequence & 0xFF00000000LL) == 0 )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v35);
  if ( effectTiming == 2 )
  {
    v37 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    v38 = &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v37 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    v38 = &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v37 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  v38 = &Method_BattleActionData___c__DisplayClass277_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v40 = (System_Func_TSource__bool__o *)v37;
  System_Func_int__bool____ctor(
    v37,
    (Il2CppObject *)v31,
    *v38,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v41 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v40,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v41,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget(
        BattleActionData_o *this,
        bool isAtkFirst,
        bool isAtkLast,
        const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  char v22; // w1
  char v23; // w2
  __int64 v24; // x3
  char v25; // w1
  char v26; // w2
  __int64 v27; // x3
  char v28; // w1
  char v29; // w2
  __int64 v30; // x3
  __int64 v31; // x23
  System_Collections_Generic_Dictionary_int__int__o *v32; // x24
  System_Collections_Generic_Dictionary_int__int__o *v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_Dictionary_int__int__o **v41; // x22
  const MethodInfo *v42; // x2
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_42E7FCD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData___ctor__, isAtkFirst, isAtkLast, method);
    sub_B5D5C4(&System_Action_BattleActionData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData__ForEach__, v22, v23, v24);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass282_0__GetMaxSideEffectCountByTarget_b__0__, v25, v26, v27);
    sub_B5D5C4(&BattleActionData___c__DisplayClass282_0_TypeInfo, v28, v29, v30);
    byte_42E7FCD = 1;
  }
  v31 = sub_B5D694(BattleActionData___c__DisplayClass282_0_TypeInfo);
  BattleActionData___c__DisplayClass282_0___ctor((BattleActionData___c__DisplayClass282_0_o *)v31, 0LL);
  v32 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v32,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v31 )
    goto LABEL_13;
  *(_QWORD *)(v31 + 16) = v32;
  v41 = (System_Collections_Generic_Dictionary_int__int__o **)(v31 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)v32, v35, v36, v37, v38, v39, v40);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(
      this,
      (System_Collections_Generic_Dictionary_int__int__o **)(v31 + 16),
      v42);
    sideEffectList = this->fields.sideEffectList;
    v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v44,
      (Il2CppObject *)v31,
      Method_BattleActionData___c__DisplayClass282_0__GetMaxSideEffectCountByTarget_b__0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleActionData___ctor__);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)sideEffectList,
      (System_Action_T__o *)v44,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v33 = *v41;
  if ( !*v41 )
LABEL_13:
    sub_B5D69C(v33, v34);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v33,
         (const MethodInfo_2F0AA58 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v33 = *v41;
    if ( *v41 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v33,
                 (const MethodInfo_2F0AC00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
    goto LABEL_13;
  }
  return 0;
}


int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget_24154748(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x22
  System_Collections_Generic_Dictionary_int__int__o *v31; // x23
  System_Collections_Generic_Dictionary_int__int__o *v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_Dictionary_int__int__o **v40; // x21
  const MethodInfo *v41; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_42E7FCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData___ctor__, targetType, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleActionData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass284_0__GetMaxSideEffectCountByTarget_b__0__, v24, v25, v26);
    sub_B5D5C4(&BattleActionData___c__DisplayClass284_0_TypeInfo, v27, v28, v29);
    byte_42E7FCF = 1;
  }
  v30 = sub_B5D694(BattleActionData___c__DisplayClass284_0_TypeInfo);
  BattleActionData___c__DisplayClass284_0___ctor((BattleActionData___c__DisplayClass284_0_o *)v30, 0LL);
  v31 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v31,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v30 )
    goto LABEL_9;
  *(_QWORD *)(v30 + 16) = v31;
  v40 = (System_Collections_Generic_Dictionary_int__int__o **)(v30 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)v31, v34, v35, v36, v37, v38, v39);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v41);
  v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v43,
    (Il2CppObject *)v30,
    Method_BattleActionData___c__DisplayClass284_0__GetMaxSideEffectCountByTarget_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleActionData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    SideEffectList,
    (System_Action_T__o *)v43,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData___);
  v32 = *(System_Collections_Generic_Dictionary_int__int__o **)(v30 + 16);
  if ( !v32 )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v32,
         (const MethodInfo_2F0AA58 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v32 = *v40;
    if ( *v40 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v32,
                 (const MethodInfo_2F0AC00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
LABEL_9:
    sub_B5D69C(v32, v33);
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

  if ( (byte_42E7FCC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int___, effectIndex, resultOnGetFailed, method);
    byte_42E7FCC = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0LL,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__28151596(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_1AD8F2C *)Method_BasicHelper_IndexValue_int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_moveToSubMemberList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E7FA8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo, v5, v6, v7);
    byte_42E7FA8 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = (BattleServantConfConponent_o *)&this->fields.moveToSubMemberList;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    p_moveToSubMemberList->klass = (BattleServantConfConponent_c *)v9;
    sub_B5D560(p_moveToSubMemberList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  __int64 v3; // x3
  BattleActionData_o *v6; // x21
  const MethodInfo *v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_42E7FD3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, type, (_DWORD)method, v3);
    byte_42E7FD3 = 1;
  }
  v6 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v6, v7);
  if ( !v6 )
    sub_B5D69C(v8, v9);
  v6->fields.actorId = this->fields.actorId;
  v6->fields.targetId = this->fields.targetId;
  BattleActionData__addSideEffectActionData(this, v6, type, v10);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData_24156716(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_B5D69C(0LL, v6);
  result->fields.targetId = overwriteTargetId;
  return result;
}


void __fastcall BattleActionData__PreActionProcess(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v46; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x21
  Il2CppObject *v49; // x22
  struct BattleActionData___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Collections_Generic_IEnumerable_T__o *v58; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v59; // x21

  if ( (byte_42E7F86 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_BuffData___ctor__, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleActionData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BuffData__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleActionData___c__PreActionProcess_b__121_0__, v24, v25, v26);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass121_0__PreActionProcess_b__1__, v27, v28, v29);
    sub_B5D5C4(&BattleActionData___c__DisplayClass121_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v33, v34, v35);
    byte_42E7F86 = 1;
  }
  v36 = sub_B5D694(BattleActionData___c__DisplayClass121_0_TypeInfo);
  BattleActionData___c__DisplayClass121_0___ctor((BattleActionData___c__DisplayClass121_0_o *)v36, 0LL);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  *(_QWORD *)(v36 + 16) = data;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)data, v39, v40, v41, v42, v43, v44);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist && !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v46 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v46 = BattleActionData___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
    if ( !_9__121_0 )
    {
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)static_fields->__9;
      _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__121_0,
        v49,
        Method_BattleActionData___c__PreActionProcess_b__121_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_BuffData__bool___ctor__);
      v50 = BattleActionData___c_TypeInfo->static_fields;
      v50->__9__121_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__121_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v50->__9__121_0,
        (System_Int32_array **)_9__121_0,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (System_Func_TSource__bool__o *)_9__121_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v58 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_BattleActionData_MasterBuffData_(
                                                           v57,
                                                           (const MethodInfo_1CAFBE8 *)Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v59,
      (Il2CppObject *)v36,
      Method_BattleActionData___c__DisplayClass121_0__PreActionProcess_b__1__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v58,
      (System_Action_T__o *)v59,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void __fastcall BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x19
  BattleActionData___c_c *v18; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__177_0; // x20
  Il2CppObject *v21; // x21
  struct BattleActionData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7FA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleActionData_BuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActionData___c__ResetAllCheckDead_b__177_0__, v11, v12, v13);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v14, v15, v16);
    byte_42E7FA0 = 1;
  }
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v18 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v18 = BattleActionData___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__177_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__177_0;
    if ( !_9__177_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__177_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__177_0,
        v21,
        Method_BattleActionData___c__ResetAllCheckDead_b__177_0__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BuffData___ctor__);
      v22 = BattleActionData___c_TypeInfo->static_fields;
      v22->__9__177_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__177_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v22->__9__177_0,
        (System_Int32_array **)_9__177_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)buffdatalist,
      (System_Action_T__o *)_9__177_0,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleActionData_AfterChangeTakeOverField_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v8 = this;
  if ( (byte_42E7FB4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_AfterChangeField_TypeInfo, (_DWORD)fieldChange, (_DWORD)baseVals, fieldEnvData);
    this = (BattleActionData_o *)sub_B5D5C4(&BattleActionData_AfterChangeTakeOverField_TypeInfo, v9, v10, v11);
    byte_42E7FB4 = 1;
  }
  if ( !baseVals )
LABEL_9:
    sub_B5D69C(this, fieldChange);
  if ( DataVals__isParam(baseVals, 107, 0LL) )
  {
    v12 = (BattleActionData_AfterChangeTakeOverField_o *)sub_B5D694(BattleActionData_AfterChangeTakeOverField_TypeInfo);
    BattleActionData_AfterChangeTakeOverField___ctor(v12, fieldChange, fieldEnvData, 0LL);
    if ( !v8 )
      goto LABEL_9;
  }
  else
  {
    v12 = (BattleActionData_AfterChangeTakeOverField_o *)sub_B5D694(BattleActionData_AfterChangeField_TypeInfo);
    BattleActionData_AfterChangeField___ctor((BattleActionData_AfterChangeField_o *)v12, fieldChange, 0LL);
    if ( !v8 )
      goto LABEL_9;
  }
  v8->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v8->fields._ChangeField_k__BackingField,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Func_int__bool__o *v18; // x21
  int32_t targetId; // w0

  if ( (byte_42E7F7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)targetIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, v6, v7, v8);
    sub_B5D5C4(&Method_BattleActionData__SetFirstAtkMainTargetId_b__105_0__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v15, v16, v17);
    byte_42E7F7F = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v18 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v18,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__105_0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__28142236(
           targetIds,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
    }
    this->fields._FirstAtkMainTargetId_k__BackingField = targetId;
  }
}


void __fastcall BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  BattleActionData___c__DisplayClass125_0_o *v44; // x19
  const MethodInfo *v45; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  BattleActionData___c_c *v47; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__125_0; // x21
  Il2CppObject *v50; // x22
  struct BattleActionData___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  __int64 v59; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v60; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  BattleActionData___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_T__o *v63; // x19
  struct BattleActionData___c_StaticFields *v64; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__125_2; // x20
  Il2CppObject *v66; // x21
  struct BattleActionData___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42E7F8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_BaseData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleActionData_BaseData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BaseData__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BaseData__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_BattleActionData_BaseData__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_0__, v29, v30, v31);
    sub_B5D5C4(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_2__, v32, v33, v34);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass125_0__SetFuncSideEffectTrigger_b__1__, v35, v36, v37);
    sub_B5D5C4(&BattleActionData___c__DisplayClass125_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v41, v42, v43);
    byte_42E7F8A = 1;
  }
  v44 = (BattleActionData___c__DisplayClass125_0_o *)sub_B5D694(BattleActionData___c__DisplayClass125_0_TypeInfo);
  BattleActionData___c__DisplayClass125_0___ctor(v44, 0LL);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v45);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, 0LL) )
  {
    v47 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v47 = BattleActionData___c_TypeInfo;
    }
    static_fields = v47->static_fields;
    _9__125_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)static_fields->__9;
      _9__125_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleActionData_BaseData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__125_0,
        v50,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleActionData_BaseData__int___ctor__);
      v51 = BattleActionData___c_TypeInfo->static_fields;
      v51->__9__125_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__125_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v51->__9__125_0,
        (System_Int32_array **)_9__125_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    v58 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__125_0,
            (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v44 )
      sub_B5D69C(v58, v59);
    v44->fields.lastIndex = v58;
    v60 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v60,
      (Il2CppObject *)v44,
      Method_BattleActionData___c__DisplayClass125_0__SetFuncSideEffectTrigger_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_BaseData__bool___ctor__);
    v61 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v60,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v62 = BattleActionData___c_TypeInfo;
    v63 = (System_Collections_Generic_IEnumerable_T__o *)v61;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v62 = BattleActionData___c_TypeInfo;
    }
    v64 = v62->static_fields;
    _9__125_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v64->__9__125_2;
    if ( !_9__125_2 )
    {
      if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v64 = BattleActionData___c_TypeInfo->static_fields;
      }
      v66 = (Il2CppObject *)v64->__9;
      _9__125_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__125_2,
        v66,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__125_2__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BaseData___ctor__);
      v67 = BattleActionData___c_TypeInfo->static_fields;
      v67->__9__125_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__125_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v67->__9__125_2,
        (System_Int32_array **)_9__125_2,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v63,
      (System_Action_T__o *)_9__125_2,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void __fastcall BattleActionData__SetFuncTargetAllDead(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  BattleActionData___c__DisplayClass137_0_o *v45; // x21
  _BOOL8 isEnemyID; // x0
  __int64 v47; // x1
  System_Collections_Generic_IEnumerable_TSource__o *HpDecreaseFuncTargetHash_k__BackingField; // x22
  System_Func_int__BattleActionData_SideEffectData__o *v49; // x23
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  System_Collections_Generic_IEnumerable_T__o *v51; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v54; // x20
  BattleActionData___c_c *v55; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__137_1; // x21
  Il2CppObject *v58; // x22
  struct BattleActionData___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_42E7F8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleServantData____68810264, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BattleServantData___, v6, v7, v8);
    sub_B5D5C4(&Method_BattleData_getServantData__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_int__BattleServantData___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Func_int__BattleServantData__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_BattleActionData___c__SetFuncTargetAllDead_b__137_1__, v33, v34, v35);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass137_0__SetFuncTargetAllDead_b__0__, v36, v37, v38);
    sub_B5D5C4(&BattleActionData___c__DisplayClass137_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v42, v43, v44);
    byte_42E7F8D = 1;
  }
  v45 = (BattleActionData___c__DisplayClass137_0_o *)sub_B5D694(BattleActionData___c__DisplayClass137_0_TypeInfo);
  BattleActionData___c__DisplayClass137_0___ctor(v45, 0LL);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0LL), !v45) )
    sub_B5D69C(isEnemyID, v47);
  v45->fields.isActorEnemy = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v49 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v49,
    (Il2CppObject *)data,
    Method_BattleData_getServantData__,
    (const MethodInfo_2C29938 *)Method_System_Func_int__BattleServantData___ctor__);
  v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                         HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v49,
                                                         (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v51 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v50,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    (Il2CppObject *)v45,
    Method_BattleActionData___c__DisplayClass137_0__SetFuncTargetAllDead_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v51,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v54 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v53,
          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v54, 0LL) )
  {
    v55 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v55 = BattleActionData___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__137_1;
    if ( !_9__137_1 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)static_fields->__9;
      _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__137_1,
        v58,
        Method_BattleActionData___c__SetFuncTargetAllDead_b__137_1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
      v59 = BattleActionData___c_TypeInfo->static_fields;
      v59->__9__137_1 = (struct System_Func_BattleServantData__bool__o *)_9__137_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v59->__9__137_1,
        (System_Int32_array **)_9__137_1,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                                           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v54,
                                                           (System_Func_T__bool__o *)_9__137_1,
                                                           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleServantData____68810264);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleActionData_GimmickData_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42E7FB2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_GimmickData_TypeInfo, (_DWORD)indexArray, (_DWORD)startArray, resultArray);
    byte_42E7FB2 = 1;
  }
  v11 = (BattleActionData_GimmickData_o *)sub_B5D694(BattleActionData_GimmickData_TypeInfo);
  BattleActionData_GimmickData___ctor(v11, 0LL);
  this->fields.gimmickData = v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_B5D560((BattleServantConfConponent_o *)p_gimmickData, (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  v26 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v26->fields.indexArray = indexArray;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v26->fields.indexArray,
    (System_Int32_array **)indexArray,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v26->fields.startVoiceIdArray = startArray,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v26->fields.startVoiceIdArray,
          (System_Int32_array **)startArray,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        (v26 = *p_gimmickData) == 0LL)
    || (v26->fields.resultVoiceIdArray = resultArray,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v26->fields.resultVoiceIdArray,
          (System_Int32_array **)resultArray,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (v26 = *p_gimmickData) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(v26, v19);
  }
  v26->fields.animationTypes = types;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v26->fields.animationTypes,
    (System_Int32_array **)types,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


void __fastcall BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
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
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  BattleActionData___c_c *v19; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__126_0; // x20
  Il2CppObject *v22; // x21
  struct BattleActionData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E7F8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_BaseData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleActionData_BaseData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActionData___c__SetPopupOnce_b__126_0__, v11, v12, v13);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v14, v15, v16);
    byte_42E7F8B = 1;
  }
  ExecOrderArray = BattleActionData__GetExecOrderArrayEx(this, -1, 0, v3);
  if ( ExecOrderArray )
  {
    v18 = (System_Collections_Generic_IEnumerable_T__o *)ExecOrderArray;
    v19 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v19 = BattleActionData___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__126_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__126_0;
    if ( !_9__126_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__126_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__126_0,
        v22,
        Method_BattleActionData___c__SetPopupOnce_b__126_0__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BaseData___ctor__);
      v23 = BattleActionData___c_TypeInfo->static_fields;
      v23->__9__126_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__126_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v23->__9__126_0,
        (System_Int32_array **)_9__126_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v18,
      (System_Action_T__o *)_9__126_0,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ShiftGauge_k__BackingField = shiftGauge;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ShiftGauge_k__BackingField,
    (System_Int32_array **)shiftGauge,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData__SetSideEffectCountByTarget(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_int__int__o **dicTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x21
  System_Collections_Generic_List_int__o *v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_int__o *v45; // x22
  System_Collections_Generic_List_int__o **v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Action_o *v53; // x22
  __int64 v54; // x1
  int32_t current; // w20
  __int64 v56; // x1
  System_Collections_Generic_List_Enumerator_int__o v57; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v58; // [xsp+20h] [xbp-50h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-24h] BYREF

  if ( (byte_42E7FCE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)dicTarget, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass283_0__SetSideEffectCountByTarget_b__0__, v30, v31, v32);
    sub_B5D5C4(&BattleActionData___c__DisplayClass283_0_TypeInfo, v33, v34, v35);
    byte_42E7FCE = 1;
  }
  memset(&v58, 0, sizeof(v58));
  value = 0;
  v36 = sub_B5D694(BattleActionData___c__DisplayClass283_0_TypeInfo);
  BattleActionData___c__DisplayClass283_0___ctor((BattleActionData___c__DisplayClass283_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_14;
  *(_QWORD *)(v36 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v46 = (System_Collections_Generic_List_int__o **)(v36 + 24);
  *(_QWORD *)(v36 + 24) = v45;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)v45, v47, v48, v49, v50, v51, v52);
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v36,
    Method_BattleActionData___c__DisplayClass283_0__SetSideEffectCountByTarget_b__0__,
    0LL);
  if ( !v53 || (System_Action__Invoke(v53, 0LL), (v37 = *v46) == 0LL) )
LABEL_14:
    sub_B5D69C(v37, v38);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v37,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v58,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_B5D69C(0LL, v54);
    current = v58.fields.current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v58.fields.current,
      &value,
      (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_B5D69C(0LL, v56);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v58,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v3; // x3
  BattleActionData_c *v6; // x0
  int32_t *p_TYPE_ENEMY_SPELL_CUTIN; // x8
  BattleActionData_c *v8; // x0

  if ( (byte_42E7FBD & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, effectType, (_DWORD)method, v3);
    byte_42E7FBD = 1;
  }
  this->fields.state = 4;
  if ( effectType == 2 )
  {
    v8 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v8 = BattleActionData_TypeInfo;
    }
    p_TYPE_ENEMY_SPELL_CUTIN = &v8->static_fields->TYPE_ENEMY_SPELL_CUTIN;
  }
  else
  {
    if ( effectType != 1 )
      return;
    v6 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v6 = BattleActionData_TypeInfo;
    }
    p_TYPE_ENEMY_SPELL_CUTIN = &v6->static_fields->TYPE_ENEMY_CUTIN;
  }
  this->fields.type = *p_TYPE_ENEMY_SPELL_CUTIN;
}


BattleActionData_o *__fastcall BattleActionData__SetWaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *cond,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = cond;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._WaitCond_k__BackingField,
    (System_Int32_array **)cond,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t MaxSideEffectCountByTarget_24154748; // w0
  float v9; // s0
  bool result; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_24154748 = BattleActionData__GetMaxSideEffectCountByTarget_24154748(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_24154748 < 1 )
    return 0;
  v9 = totalTime / (float)(MaxSideEffectCountByTarget_24154748 + existTriggerFunc);
  result = 1;
  *interval = v9;
  return result;
}


void __fastcall BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_transformServantlist; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E7FAA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo, v5, v6, v7);
    byte_42E7FAA = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = (BattleServantConfConponent_o *)&this->fields.transformServantlist;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    p_transformServantlist->klass = (BattleServantConfConponent_c *)v9;
    sub_B5D560(p_transformServantlist, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall BattleActionData__UpdateDirectIntervalBuffData(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  __int64 v48; // x19
  struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *IntervalBuffDict_k__BackingField; // x0
  __int64 v50; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v58; // x20
  System_Action_T__o *v59; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_T__o *v68; // x0
  __int128 v69; // [xsp+0h] [xbp-80h] BYREF
  __int128 v70; // [xsp+10h] [xbp-70h]
  __int128 v71; // [xsp+20h] [xbp-60h]

  if ( (byte_42E7F92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, targetType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v33,
      v34,
      v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v36,
      v37,
      v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v39,
      v40,
      v41);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass149_0__UpdateDirectIntervalBuffData_b__0__, v42, v43, v44);
    sub_B5D5C4(&BattleActionData___c__DisplayClass149_0_TypeInfo, v45, v46, v47);
    byte_42E7F92 = 1;
  }
  v70 = 0u;
  v71 = 0u;
  v69 = 0u;
  v48 = sub_B5D694(BattleActionData___c__DisplayClass149_0_TypeInfo);
  BattleActionData___c__DisplayClass149_0___ctor((BattleActionData___c__DisplayClass149_0_o *)v48, 0LL);
  if ( !v48 )
    goto LABEL_17;
  *(_DWORD *)(v48 + 24) = targetType;
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
         0LL) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  *(_QWORD *)(v48 + 16) = Master_WarQuestSelectionMaster;
  sub_B5D560((BattleServantConfConponent_o *)(v48 + 16), Master_WarQuestSelectionMaster, v52, v53, v54, v55, v56, v57);
  IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_17:
    sub_B5D69C(IntervalBuffDict_k__BackingField, v50);
  System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v69,
    (System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer__o *)IntervalBuffDict_k__BackingField,
    (const MethodInfo_2401EF8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v48 + 32);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v69,
            (const MethodInfo_22EFF48 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v59 = (System_Action_T__o *)*((_QWORD *)&v70 + 1);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v71;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v71, 0LL) )
    {
      v61 = *v58;
      if ( !*v58 )
      {
        v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v61,
          (Il2CppObject *)v48,
          Method_BattleActionData___c__DisplayClass149_0__UpdateDirectIntervalBuffData_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
        *v58 = v61;
        sub_B5D560((BattleServantConfConponent_o *)(v48 + 32), (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
      }
      v68 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                             v60,
                                                             (System_Func_TSource__bool__o *)v61,
                                                             (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v68,
        v59,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v69,
    (const MethodInfo_22F00C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void __fastcall BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v30; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__157_0; // x21
  Il2CppObject *v33; // x22
  struct BattleActionData___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x19
  BattleActionData___c_c *v42; // x0
  struct BattleActionData___c_StaticFields *v43; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__157_1; // x20
  Il2CppObject *v45; // x21
  struct BattleActionData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42E7F95 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_HealData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_BattleActionData_BuffData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_BattleActionData_HealData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Action_BattleActionData_BuffData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__, v17, v18, v19);
    sub_B5D5C4(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_0__, v20, v21, v22);
    sub_B5D5C4(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_1__, v23, v24, v25);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v26, v27, v28);
    byte_42E7F95 = 1;
  }
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v30 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v30 = BattleActionData___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__157_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__157_0;
    if ( !_9__157_0 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__157_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__157_0,
        v33,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_0__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_BuffData___ctor__);
      v34 = BattleActionData___c_TypeInfo->static_fields;
      v34->__9__157_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__157_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v34->__9__157_0,
        (System_Int32_array **)_9__157_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)buffdatalist,
      (System_Action_T__o *)_9__157_0,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v42 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v42 = BattleActionData___c_TypeInfo;
    }
    v43 = v42->static_fields;
    _9__157_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v43->__9__157_1;
    if ( !_9__157_1 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v43 = BattleActionData___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)v43->__9;
      _9__157_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__157_1,
        v45,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__157_1__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_HealData___ctor__);
      v46 = BattleActionData___c_TypeInfo->static_fields;
      v46->__9__157_1 = (struct System_Action_BattleActionData_HealData__o *)_9__157_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v46->__9__157_1,
        (System_Int32_array **)_9__157_1,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)healdatalist,
      (System_Action_T__o *)_9__157_1,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void __fastcall BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  BattleActionData___c_c *v18; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__147_0; // x20
  Il2CppObject *v21; // x21
  struct BattleActionData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7F90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleServantData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleServantData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleServantData___, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActionData___c__UpdateIntervalBuff_b__147_0__, v11, v12, v13);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v14, v15, v16);
    byte_42E7F90 = 1;
  }
  v17 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleActionData_o *, Il2CppMethodPointer))this->klass->vtable._7_UpdateIntervalBuffData.method)(
                                                         this,
                                                         this->klass->vtable._8_FixDisplayWaitingIntervalBuff.methodPtr);
  v18 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v18 = BattleActionData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__147_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__147_0,
      v21,
      Method_BattleActionData___c__UpdateIntervalBuff_b__147_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleServantData___ctor__);
    v22 = BattleActionData___c_TypeInfo->static_fields;
    v22->__9__147_0 = (struct System_Action_BattleServantData__o *)_9__147_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__147_0,
      (System_Int32_array **)_9__147_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v17,
    (System_Action_T__o *)_9__147_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *__fastcall BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v41; // x20
  __int64 v42; // x1
  struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v44; // x21
  _BOOL8 v45; // x0
  __int64 v46; // x1
  WarBoardAIRoute_RouteData_o *v47; // x22
  __int128 v49[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v50; // [xsp+30h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+40h] [xbp-60h]
  __int128 v52; // [xsp+50h] [xbp-50h]

  if ( (byte_42E7F91 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v38, v39, v40);
    byte_42E7F91 = 1;
  }
  *(_OWORD *)action = 0u;
  v52 = 0u;
  v50 = 0u;
  v41 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v41,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          0LL) )
  {
    IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v49,
      (System_Collections_Generic_Dictionary_KeyValuePair_Type__XmlRootAttribute___XmlSerializer__o *)IntervalBuffDict_k__BackingField,
      (const MethodInfo_2401EF8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    *(_OWORD *)action = v49[1];
    v52 = v49[2];
    v50 = v49[0];
    v44 = 0LL;
    while ( 1 )
    {
      v45 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v50,
              (const MethodInfo_22EFF48 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v45 )
        break;
      v47 = (WarBoardAIRoute_RouteData_o *)action[0];
      if ( (_QWORD)v52 )
        v44 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v52;
      if ( (_QWORD)v52 )
      {
        if ( !v44 )
          sub_B5D69C(v45, v46);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v44,
          action[1],
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      }
      if ( v47 )
      {
        if ( !v41 )
          sub_B5D69C(v45, v46);
        System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
          v41,
          v47,
          (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_Type__XmlRootAttribute___XmlSerializer___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v50,
      (const MethodInfo_22F00C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_20:
      sub_B5D69C(IntervalBuffDict_k__BackingField, v42);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)IntervalBuffDict_k__BackingField,
      (const MethodInfo_2401AD0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v41;
}


void __fastcall BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x0

  if ( (byte_42E7FE3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, x, (_DWORD)method, v3);
    byte_42E7FE3 = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_B5D69C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *damagedatalist; // x21
  const MethodInfo *v31; // x1
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2

  if ( (byte_42E7FC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___, (_DWORD)addData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___, v6, v7, v8);
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_HealData___, v9, v10, v11);
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___, v12, v13, v14);
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___, v15, v16, v17);
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___, v18, v19, v20);
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___, v21, v22, v23);
    sub_B5D5C4(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__, v27, v28, v29);
    byte_42E7FC5 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleActionData__get_damagedatalist(
                                                                                         this,
                                                                                         (const MethodInfo *)addData);
    v32 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v31);
    if ( !damagedatalist )
      sub_B5D69C(v32, v33);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      damagedatalist,
      v32,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_BattleActionData_TransformServant_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_1AD9F74 *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    this->fields.redrawCommandCard |= addData->fields.redrawCommandCard;
    BattleActionData__addReflectLogicResultServantIds(this, addData->fields.servantLogicResultList, v34);
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
        const MethodInfo_1AD9F74 *method)
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
        sub_AF52C4(method->rgctx_data->_0_System_Collections_Generic_List_T_);
      v9 = (System_Collections_Generic_List_T__o *)sub_B5D694(_0_System_Collections_Generic_List_T);
      method->rgctx_data->_1_System_Collections_Generic_List_T___ctor->methodPointer();
      *dataList = v9;
      sub_B5D560((BattleServantConfConponent_o *)dataList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
      v4 = *dataList;
      if ( !*dataList )
        sub_B5D69C(0LL, v16);
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
  int32_t targetId; // w22
  BuffList_ACTION_array *v21; // x23
  BattleActionData_SideEffectData_o *v22; // x21

  if ( (byte_42E7F9B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__,
      (_DWORD)sideEffectList,
      (_DWORD)damage,
      actList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__, v14, v15, v16);
    this = (BattleActionData_o *)sub_B5D5C4(&BattleActionData_SideEffectData_TypeInfo, v17, v18, v19);
    byte_42E7F9B = 1;
  }
  if ( !actList )
    goto LABEL_9;
  if ( actList->fields._size >= 1 )
  {
    if ( damage )
    {
      targetId = damage->fields.targetId;
      v21 = (BuffList_ACTION_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                       (System_Collections_Generic_List_Voice_BATTLE__o *)actList,
                                       (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__);
      v22 = (BattleActionData_SideEffectData_o *)sub_B5D694(BattleActionData_SideEffectData_TypeInfo);
      BattleActionData_SideEffectData___ctor(v22, targetId, v21, 0LL);
      if ( sideEffectList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sideEffectList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__);
        System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
          (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)actList,
          (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_BuffList_ACTION__Clear__);
        return;
      }
    }
LABEL_9:
    sub_B5D69C(this, sideEffectList);
  }
}


void __fastcall BattleActionData__addReflectAttackSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v7; // 0:x1.8

  if ( (byte_42E7FD8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__,
      pairAttackAndTarget.fields.key,
      (_DWORD)method,
      v3);
    byte_42E7FD8 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(0LL, pairAttackAndTarget);
  v7 = pairAttackAndTarget;
  System_Collections_Generic_List_KeyValuePair_int__int____Add(
    attackSideEffectedSvtIds,
    v7,
    (const MethodInfo_2FAAEDC *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__addReflectDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_42E7FD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, uniqueSvtId, (_DWORD)method, v3);
    byte_42E7FD6 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_B5D69C(0LL, *(_QWORD *)&uniqueSvtId);
  System_Collections_Generic_List_int___Add(
    damageSideEffectedSvtIds,
    uniqueSvtId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleActionData__addReflectLogicResultServantId(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  BattleActionData___c__DisplayClass305_0_o *v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x22
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v29; // x19
  BattleActionData_ServantLogicResultData_o *v30; // x21

  if ( (byte_42E7FDA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
      uniqueSvtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_BattleActionData_ServantLogicResultData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BattleActionData_ServantLogicResultData_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass305_0__addReflectLogicResultServantId_b__0__, v18, v19, v20);
    sub_B5D5C4(&BattleActionData___c__DisplayClass305_0_TypeInfo, v21, v22, v23);
    byte_42E7FDA = 1;
  }
  v24 = (BattleActionData___c__DisplayClass305_0_o *)sub_B5D694(BattleActionData___c__DisplayClass305_0_TypeInfo);
  BattleActionData___c__DisplayClass305_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_9;
  v24->fields.uniqueSvtId = uniqueSvtId;
  servantLogicResultList = this->fields.servantLogicResultList;
  v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v28,
    (Il2CppObject *)v24,
    Method_BattleActionData___c__DisplayClass305_0__addReflectLogicResultServantId_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleActionData_ServantLogicResultData___ctor__);
  if ( !servantLogicResultList )
    goto LABEL_9;
  if ( System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
         (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)servantLogicResultList,
         (System_Predicate_T__o *)v28,
         (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v29 = this->fields.servantLogicResultList;
  v30 = (BattleActionData_ServantLogicResultData_o *)sub_B5D694(BattleActionData_ServantLogicResultData_TypeInfo);
  BattleActionData_ServantLogicResultData___ctor(v30, 0LL);
  if ( !v30 || (v30->fields.uniqueId = v24->fields.uniqueSvtId, !v29) )
LABEL_9:
    sub_B5D69C(v25, v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__);
}


void __fastcall BattleActionData__addReflectLogicResultServantIds(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *addLogicResultList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t size; // w8
  __int64 v10; // x21
  BattleActionData_ServantLogicResultData_o *v11; // x8

  v5 = this;
  if ( (byte_42E7FD9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
      (_DWORD)addLogicResultList,
      (_DWORD)method,
      v3);
    this = (BattleActionData_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__,
                                   v6,
                                   v7,
                                   v8);
    byte_42E7FD9 = 1;
  }
  if ( addLogicResultList )
  {
    size = addLogicResultList->fields._size;
    if ( size >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v11 = addLogicResultList->fields._items->m_Items[v10];
        if ( !v11 )
          sub_B5D69C(this, addLogicResultList);
        BattleActionData__addReflectLogicResultServantId(v5, v11->fields.uniqueId, method);
        size = addLogicResultList->fields._size;
        ++v10;
      }
      while ( (int)v10 < size );
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
  if ( (byte_42E7FD1 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_BattleActionData__Add__,
                                   (_DWORD)sideEffectActionData,
                                   actType,
                                   method);
    byte_42E7FD1 = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v6->fields.sideEffectList) == 0LL) )
  {
    sub_B5D69C(this, sideEffectActionData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)sideEffectActionData,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData__Add__);
}


bool __fastcall BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_42E7FAD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7FAD = 1;
  }
  summonServantList = this->fields.summonServantList;
  return summonServantList && summonServantList->fields._size > 0;
}


BattleActionData_BuffData_array *__fastcall BattleActionData__getBuffList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  BattleActionData___c__DisplayClass176_0_o *v27; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v29; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x22
  BattleServantConfConponent_o *p_buffdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x19

  v4 = funcIndex;
  if ( (byte_42E7F9F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__,
      funcIndex,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_BattleActionData_BuffData___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_BattleActionData_BuffData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass176_0__getBuffList_b__0__, v21, v22, v23);
    sub_B5D5C4(&BattleActionData___c__DisplayClass176_0_TypeInfo, v24, v25, v26);
    byte_42E7F9F = 1;
  }
  v27 = (BattleActionData___c__DisplayClass176_0_o *)sub_B5D694(BattleActionData___c__DisplayClass176_0_TypeInfo);
  BattleActionData___c__DisplayClass176_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_13;
  v27->fields.funcIndex = v4;
  buffdatalist = this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (BattleServantConfConponent_o *)&this->fields.buffdatalist;
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (BattleServantConfConponent_c *)v32;
    sub_B5D560(p_buffdatalist, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    v4 = v27->fields.funcIndex;
    buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)p_buffdatalist->klass;
  }
  if ( v4 == -1 )
  {
    if ( buffdatalist )
    {
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
    }
LABEL_13:
    sub_B5D69C(All, v29);
  }
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleActionData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_BattleActionData___c__DisplayClass176_0__getBuffList_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleActionData_BuffData___ctor__);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)buffdatalist,
          (System_Predicate_T__o *)v39,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
}


BattleActionData_ChangeBg_o *__fastcall BattleActionData__getChangeBg(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *changeBgList; // x8

  if ( (byte_42E7FB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__, v5, v6, v7);
    byte_42E7FB1 = 1;
  }
  changeBgList = this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return changeBgList->fields._items->m_Items[0];
  else
    return 0LL;
}


int32_t __fastcall BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t actionIndex; // w21
  StageEntity_c *v6; // x0
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_42E7FD0 & 1) == 0 )
  {
    sub_B5D5C4(&StageEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FD0 = 1;
  }
  actionIndex = this->fields.actionIndex;
  v6 = StageEntity_TypeInfo;
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
    v6 = StageEntity_TypeInfo;
  }
  DEFAULT_ENEMY_ACTION_COUNT = v6->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  if ( actionIndex < DEFAULT_ENEMY_ACTION_COUNT )
    return this->fields.actionIndex + 1;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    return StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return DEFAULT_ENEMY_ACTION_COUNT;
}


BattleActionData_SideEffectData_array *__fastcall BattleActionData__getDamageAttackSideEffectList(
        BattleActionData_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7F9A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo, v20, v21, v22);
    byte_42E7F9A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = BattleActionData__get_damagedatalist(this, v24);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v27 )
      break;
    if ( !v31.fields.current )
      sub_B5D69C(v27, v28);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v27,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v23,
      (BattleActionData_DamageData_o *)v31.fields.current,
      (System_Collections_Generic_List_BuffList_ACTION__o *)v31.fields.current[5].klass,
      v29);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v23 )
LABEL_11:
    sub_B5D69C(damagedatalist, v26);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
}


BattleActionData_DamageData_array *__fastcall BattleActionData__getDamageList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleActionData___c__DisplayClass164_0_o *v21; // x21
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *damagedatalist; // x0
  const MethodInfo *v23; // x1
  bool v24; // zf
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v25; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x20

  if ( (byte_42E7F98 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__,
      funcIndex,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_BattleActionData_DamageData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_BattleActionData_DamageData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass164_0__getDamageList_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleActionData___c__DisplayClass164_0_TypeInfo, v18, v19, v20);
    byte_42E7F98 = 1;
  }
  v21 = (BattleActionData___c__DisplayClass164_0_o *)sub_B5D694(BattleActionData___c__DisplayClass164_0_TypeInfo);
  BattleActionData___c__DisplayClass164_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_10;
  v21->fields.funcIndex = funcIndex;
  damagedatalist = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)BattleActionData__get_damagedatalist(
                                                                                   this,
                                                                                   v23);
  v24 = funcIndex == -1;
  v25 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)damagedatalist;
  if ( v24 )
  {
    if ( damagedatalist )
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    damagedatalist,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
LABEL_10:
    sub_B5D69C(damagedatalist, v23);
  }
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleActionData_DamageData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_BattleActionData___c__DisplayClass164_0__getDamageList_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleActionData_DamageData___ctor__);
  if ( !v25 )
    goto LABEL_10;
  damagedatalist = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                                                                   v25,
                                                                                   (System_Predicate_T__o *)v26,
                                                                                   (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_10;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                damagedatalist,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getDamageTargetIdList(
        BattleActionData_o *this,
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
  System_Collections_Generic_HashSet_int__o *v26; // x19
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  __int64 v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7F99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v23, v24, v25);
    byte_42E7F99 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  damagedatalist = BattleActionData__get_damagedatalist(this, v27);
  if ( !damagedatalist )
    sub_B5D69C(0LL, v29);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v30 )
      break;
    if ( !v33.fields.current )
      sub_B5D69C(v30, v31);
    if ( !v26 )
      sub_B5D69C(v30, v31);
    System_Collections_Generic_HashSet_int___Add(
      v26,
      HIDWORD(v33.fields.current[1].monitor),
      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v26,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
  __int64 v3; // x3
  BattleActionData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t v21; // w21
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *funcTargetPlayerTypeList; // x20
  int32_t size; // w8
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42E7FE0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__,
      index,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, v15, v16, v17);
    this = (BattleActionData_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__,
                                   v18,
                                   v19,
                                   v20);
    byte_42E7FE0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( (index & 0x80000000) != 0 )
  {
    this = (BattleActionData_o *)v5->fields.funcTargetPlayerTypeList;
    if ( this )
    {
      System_Collections_Generic_List_Voice_BATTLE___GetEnumerator(
        &v25,
        (System_Collections_Generic_List_Voice_BATTLE__o *)this,
        (const MethodInfo_30455F4 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v21 = 0;
      while ( System_Collections_Generic_List_Enumerator_Voice_BATTLE___MoveNext(
                &v25,
                (const MethodInfo_201D330 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v21 |= LODWORD(v25.fields.current);
      System_Collections_Generic_List_Enumerator_Voice_BATTLE___Dispose(
        &v25,
        (const MethodInfo_201D32C *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v21;
    }
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  v21 = 0;
  funcTargetPlayerTypeList = v5->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_15;
  size = funcTargetPlayerTypeList->fields._size;
  if ( size > index )
  {
    if ( size <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    return funcTargetPlayerTypeList->fields._items->m_Items[index + 1];
  }
  return v21;
}


BattleActionData_HealData_array *__fastcall BattleActionData__getHealList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  BattleActionData___c__DisplayClass183_0_o *v27; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v29; // x1
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x22
  BattleServantConfConponent_o *p_healdatalist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x19

  v4 = funcIndex;
  if ( (byte_42E7FA3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__,
      funcIndex,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_BattleActionData_HealData___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_BattleActionData_HealData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass183_0__getHealList_b__0__, v21, v22, v23);
    sub_B5D5C4(&BattleActionData___c__DisplayClass183_0_TypeInfo, v24, v25, v26);
    byte_42E7FA3 = 1;
  }
  v27 = (BattleActionData___c__DisplayClass183_0_o *)sub_B5D694(BattleActionData___c__DisplayClass183_0_TypeInfo);
  BattleActionData___c__DisplayClass183_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_13;
  v27->fields.funcIndex = v4;
  healdatalist = this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (BattleServantConfConponent_o *)&this->fields.healdatalist;
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (BattleServantConfConponent_c *)v32;
    sub_B5D560(p_healdatalist, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    v4 = v27->fields.funcIndex;
    healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)p_healdatalist->klass;
  }
  if ( v4 == -1 )
  {
    if ( healdatalist )
    {
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
    }
LABEL_13:
    sub_B5D69C(All, v29);
  }
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleActionData_HealData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_BattleActionData___c__DisplayClass183_0__getHealList_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleActionData_HealData___ctor__);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)healdatalist,
          (System_Predicate_T__o *)v39,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__int__o *v17; // x19
  System_Int32_array *DamageTargets; // x0
  __int64 v19; // x1
  int32_t v20; // w1
  const MethodInfo *v21; // x2
  struct System_Int32_array *pttargetIds; // x22
  __int64 v23; // x8
  unsigned __int64 v24; // x23
  __int64 v25; // x8
  System_Int32_array *v26; // x20
  unsigned __int64 v27; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v30; // x0

  if ( (byte_42E7FC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v14, v15, v16);
    byte_42E7FC6 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v17 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v17,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v17,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    v23 = *(_QWORD *)&pttargetIds->max_length;
    if ( (int)v23 >= 1 )
    {
      v24 = 0LL;
      while ( v24 < (unsigned int)v23 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v17,
          pttargetIds->m_Items[v24 + 1],
          pttargetIds->m_Items[v24 + 1],
          (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(v23) = pttargetIds->max_length;
        if ( (__int64)++v24 >= (int)v23 )
          goto LABEL_9;
      }
LABEL_15:
      v30 = sub_B5D6C8(DamageTargets);
      sub_B5D668(v30, 0LL);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v20, v21);
  if ( !DamageTargets )
LABEL_16:
    sub_B5D69C(DamageTargets, v19);
  v25 = *(_QWORD *)&DamageTargets->max_length;
  v26 = DamageTargets;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v25 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v17,
        v26->m_Items[v27 + 1],
        v26->m_Items[v27 + 1],
        (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v25) = v26->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v17,
           (const MethodInfo_2F0AA68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndex(
        BattleActionData_o *this,
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_Collections_Generic_List_int__o *v56; // x19
  __int64 v57; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x21
  BattleActionData___c_c *v59; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__275_0; // x22
  Il2CppObject *v62; // x23
  struct BattleActionData___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  void *v70; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x20
  BattleActionData___c_c *v72; // x0
  struct BattleActionData___c_StaticFields *v73; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__275_1; // x21
  Il2CppObject *v75; // x22
  struct BattleActionData___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct BattleActionData___c_StaticFields *v83; // x8
  System_Comparison_int__o *_9__275_2; // x20
  Il2CppObject *v85; // x21
  struct BattleActionData___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0

  if ( (byte_42E7FC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Converter_BattleActionData_HealData__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Converter_BattleActionData_BuffData__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Converter_BattleActionData_HealData__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort___68740352, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndex_b__275_0__, v44, v45, v46);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndex_b__275_1__, v47, v48, v49);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndex_b__275_2__, v50, v51, v52);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v53, v54, v55);
    byte_42E7FC9 = 1;
  }
  v56 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v56,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v59 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v59 = BattleActionData___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__275_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__275_0;
    if ( !_9__275_0 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)static_fields->__9;
      _9__275_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__275_0,
        v62,
        Method_BattleActionData___c__getListFunctionIndex_b__275_0__,
        (const MethodInfo_23F6FAC *)Method_System_Converter_BattleActionData_BuffData__int___ctor__);
      v63 = BattleActionData___c_TypeInfo->static_fields;
      v63->__9__275_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__275_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v63->__9__275_0,
        (System_Int32_array **)_9__275_0,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    v70 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
            (System_Collections_Generic_List_BattleActionData_HealData__o *)buffdatalist,
            (System_Converter_T__TOutput__o *)_9__275_0,
            (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v56 )
      goto LABEL_35;
    System_Collections_Generic_List_int___AddRange(
      v56,
      (System_Collections_Generic_IEnumerable_T__o *)v70,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v72 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v72 = BattleActionData___c_TypeInfo;
    }
    v73 = v72->static_fields;
    _9__275_1 = v73->__9__275_1;
    if ( !_9__275_1 )
    {
      if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v72);
        v73 = BattleActionData___c_TypeInfo->static_fields;
      }
      v75 = (Il2CppObject *)v73->__9;
      _9__275_1 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__275_1,
        v75,
        Method_BattleActionData___c__getListFunctionIndex_b__275_1__,
        (const MethodInfo_23F6FAC *)Method_System_Converter_BattleActionData_HealData__int___ctor__);
      v76 = BattleActionData___c_TypeInfo->static_fields;
      v76->__9__275_1 = _9__275_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v76->__9__275_1,
        (System_Int32_array **)_9__275_1,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
    v70 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
            healdatalist,
            (System_Converter_T__TOutput__o *)_9__275_1,
            (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( v56 )
    {
      System_Collections_Generic_List_int___AddRange(
        v56,
        (System_Collections_Generic_IEnumerable_T__o *)v70,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_25;
    }
LABEL_35:
    sub_B5D69C(v70, v57);
  }
LABEL_25:
  v70 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v70 = BattleActionData___c_TypeInfo;
  }
  v83 = (struct BattleActionData___c_StaticFields *)*((_QWORD *)v70 + 23);
  _9__275_2 = v83->__9__275_2;
  if ( !_9__275_2 )
  {
    if ( (*((_BYTE *)v70 + 307) & 4) != 0 && !*((_DWORD *)v70 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v83 = BattleActionData___c_TypeInfo->static_fields;
    }
    v85 = (Il2CppObject *)v83->__9;
    _9__275_2 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__275_2,
      v85,
      Method_BattleActionData___c__getListFunctionIndex_b__275_2__,
      (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
    v86 = BattleActionData___c_TypeInfo->static_fields;
    v86->__9__275_2 = _9__275_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v86->__9__275_2,
      (System_Int32_array **)_9__275_2,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  if ( !v56 )
    goto LABEL_35;
  System_Collections_Generic_List_int___Sort_50881704(
    v56,
    (System_Comparison_T__o *)_9__275_2,
    (const MethodInfo_30864A8 *)Method_System_Collections_Generic_List_int__Sort___68740352);
  v93 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v56,
          (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v93,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndexEx(
        BattleActionData_o *this,
        int32_t *displayFuncNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  System_Collections_Generic_List_int__o *v81; // x20
  const MethodInfo *v82; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x22
  BattleActionData___c_c *v84; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__276_0; // x23
  Il2CppObject *v87; // x24
  struct BattleActionData___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array *result; // x0
  const MethodInfo *v96; // x1
  System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x22
  BattleActionData___c_c *v98; // x0
  struct BattleActionData___c_StaticFields *v99; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__276_1; // x23
  Il2CppObject *v101; // x24
  struct BattleActionData___c_StaticFields *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Collections_Generic_List_BattleActionData_HealData__o *v109; // x22
  BattleActionData___c_c *v110; // x8
  struct BattleActionData___c_StaticFields *v111; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__276_2; // x23
  Il2CppObject *v113; // x24
  struct BattleActionData___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  const MethodInfo *v121; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  BattleActionData___c_c *v123; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x21
  struct BattleActionData___c_StaticFields *v125; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__276_3; // x22
  Il2CppObject *v127; // x23
  struct BattleActionData___c_StaticFields *v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  int32_t v135; // w21
  struct BattleActionData___c_StaticFields *v136; // x8
  System_Comparison_int__o *_9__276_4; // x22
  Il2CppObject *v138; // x23
  struct BattleActionData___c_StaticFields *v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0

  if ( (byte_42E7FCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, (_DWORD)displayFuncNum, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Converter_BattleActionData_HealData__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Converter_BattleActionData_BuffData__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Converter_BattleActionData_DamageData__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Converter_BattleActionData_HealData__int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Converter_BattleActionData_DamageData__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v33, v34, v35);
    sub_B5D5C4(&Method_System_Func_BattleActionData_DamageData__int___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Func_BattleActionData_DamageData__int__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort___68740352, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v57, v58, v59);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_0__, v63, v64, v65);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_1__, v66, v67, v68);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_2__, v69, v70, v71);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_3__, v72, v73, v74);
    sub_B5D5C4(&Method_BattleActionData___c__getListFunctionIndexEx_b__276_4__, v75, v76, v77);
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v78, v79, v80);
    byte_42E7FCA = 1;
  }
  v81 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v81,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v84 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v84 = BattleActionData___c_TypeInfo;
    }
    static_fields = v84->static_fields;
    _9__276_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__276_0;
    if ( !_9__276_0 )
    {
      if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v84);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v87 = (Il2CppObject *)static_fields->__9;
      _9__276_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__276_0,
        v87,
        Method_BattleActionData___c__getListFunctionIndexEx_b__276_0__,
        (const MethodInfo_23F6FAC *)Method_System_Converter_BattleActionData_BuffData__int___ctor__);
      v88 = BattleActionData___c_TypeInfo->static_fields;
      v88->__9__276_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__276_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v88->__9__276_0,
        (System_Int32_array **)_9__276_0,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                     (System_Collections_Generic_List_BattleActionData_HealData__o *)buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__276_0,
                                     (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v81 )
      goto LABEL_57;
    System_Collections_Generic_List_int___AddRange(
      v81,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = this->fields.healdatalist;
  if ( healdatalist )
  {
    v98 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v98 = BattleActionData___c_TypeInfo;
    }
    v99 = v98->static_fields;
    _9__276_1 = v99->__9__276_1;
    if ( !_9__276_1 )
    {
      if ( (BYTE3(v98->vtable._0_Equals.methodPtr) & 4) != 0 && !v98->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v98);
        v99 = BattleActionData___c_TypeInfo->static_fields;
      }
      v101 = (Il2CppObject *)v99->__9;
      _9__276_1 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_BattleActionData_HealData__int____ctor(
        _9__276_1,
        v101,
        Method_BattleActionData___c__getListFunctionIndexEx_b__276_1__,
        (const MethodInfo_23F6FAC *)Method_System_Converter_BattleActionData_HealData__int___ctor__);
      v102 = BattleActionData___c_TypeInfo->static_fields;
      v102->__9__276_1 = _9__276_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v102->__9__276_1,
        (System_Int32_array **)_9__276_1,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__276_1,
                                     (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v81 )
      goto LABEL_57;
    System_Collections_Generic_List_int___AddRange(
      v81,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v82) )
  {
    v135 = 0;
    goto LABEL_46;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v96);
  v109 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
  v110 = BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v110 = BattleActionData___c_TypeInfo;
  }
  v111 = v110->static_fields;
  _9__276_2 = (System_Converter_BattleActionData_HealData__int__o *)v111->__9__276_2;
  if ( !_9__276_2 )
  {
    if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v110);
      v111 = BattleActionData___c_TypeInfo->static_fields;
    }
    v113 = (Il2CppObject *)v111->__9;
    _9__276_2 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__276_2,
      v113,
      Method_BattleActionData___c__getListFunctionIndexEx_b__276_2__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_BattleActionData_DamageData__int___ctor__);
    v114 = BattleActionData___c_TypeInfo->static_fields;
    v114->__9__276_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__276_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v114->__9__276_2,
      (System_Int32_array **)_9__276_2,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
  }
  if ( !v109
    || (result = (System_Int32_array *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                         v109,
                                         (System_Converter_T__TOutput__o *)_9__276_2,
                                         (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___),
        !v81) )
  {
LABEL_57:
    sub_B5D69C(result, v96);
  }
  System_Collections_Generic_List_int___AddRange(
    v81,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v121);
  v123 = BattleActionData___c_TypeInfo;
  v124 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v123 = BattleActionData___c_TypeInfo;
  }
  v125 = v123->static_fields;
  _9__276_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v125->__9__276_3;
  if ( !_9__276_3 )
  {
    if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v123);
      v125 = BattleActionData___c_TypeInfo->static_fields;
    }
    v127 = (Il2CppObject *)v125->__9;
    _9__276_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleActionData_DamageData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__276_3,
      v127,
      Method_BattleActionData___c__getListFunctionIndexEx_b__276_3__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
    v128 = BattleActionData___c_TypeInfo->static_fields;
    v128->__9__276_3 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__276_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v128->__9__276_3,
      (System_Int32_array **)_9__276_3,
      v129,
      v130,
      v131,
      v132,
      v133,
      v134);
  }
  v135 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           v124,
           (System_Func_TSource__int__o *)_9__276_3,
           (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_46:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v136 = *(struct BattleActionData___c_StaticFields **)&result->m_Items[39];
  _9__276_4 = v136->__9__276_4;
  if ( !_9__276_4 )
  {
    if ( (result->m_Items[69] & 0x4000000) != 0 && !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      v136 = BattleActionData___c_TypeInfo->static_fields;
    }
    v138 = (Il2CppObject *)v136->__9;
    _9__276_4 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__276_4,
      v138,
      Method_BattleActionData___c__getListFunctionIndexEx_b__276_4__,
      (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
    v139 = BattleActionData___c_TypeInfo->static_fields;
    v139->__9__276_4 = _9__276_4;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v139->__9__276_4,
      (System_Int32_array **)_9__276_4,
      v140,
      v141,
      v142,
      v143,
      v144,
      v145);
  }
  if ( !v81 )
    goto LABEL_57;
  System_Collections_Generic_List_int___Sort_50881704(
    v81,
    (System_Comparison_T__o *)_9__276_4,
    (const MethodInfo_30864A8 *)Method_System_Collections_Generic_List_int__Sort___68740352);
  v146 = System_Linq_Enumerable__Distinct_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v81,
           (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v146,
             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_57;
  *displayFuncNum = v135 + result->max_length;
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
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  BattleActionData___c__DisplayClass188_0_o *v27; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v29; // x1
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *replacememberlist; // x22
  BattleServantConfConponent_o *p_replacememberlist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x19

  v4 = funcIndex;
  if ( (byte_42E7FA6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__,
      funcIndex,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_BattleActionData_ReplaceMember___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass188_0__getReplaceMember_b__0__, v21, v22, v23);
    sub_B5D5C4(&BattleActionData___c__DisplayClass188_0_TypeInfo, v24, v25, v26);
    byte_42E7FA6 = 1;
  }
  v27 = (BattleActionData___c__DisplayClass188_0_o *)sub_B5D694(BattleActionData___c__DisplayClass188_0_TypeInfo);
  BattleActionData___c__DisplayClass188_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_13;
  v27->fields.funcIndex = v4;
  replacememberlist = this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (BattleServantConfConponent_o *)&this->fields.replacememberlist;
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (BattleServantConfConponent_c *)v32;
    sub_B5D560(p_replacememberlist, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
    v4 = v27->fields.funcIndex;
    replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)p_replacememberlist->klass;
  }
  if ( v4 == -1 )
  {
    if ( replacememberlist )
    {
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
    }
LABEL_13:
    sub_B5D69C(All, v29);
  }
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_BattleActionData___c__DisplayClass188_0__getReplaceMember_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleActionData_ReplaceMember___ctor__);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)replacememberlist,
          (System_Predicate_T__o *)v39,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
}


BattleActionData_ShiftServant_o *__fastcall BattleActionData__getShiftServant(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *shiftServantList; // x8

  if ( (byte_42E7FAF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__, v5, v6, v7);
    byte_42E7FAF = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleActionData___c__DisplayClass291_0_o *v21; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20

  if ( (byte_42E7FD2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData__FindAll__, actType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_BattleActionData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_BattleActionData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass291_0__getSideEffectList_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleActionData___c__DisplayClass291_0_TypeInfo, v18, v19, v20);
    byte_42E7FD2 = 1;
  }
  v21 = (BattleActionData___c__DisplayClass291_0_o *)sub_B5D694(BattleActionData___c__DisplayClass291_0_TypeInfo);
  BattleActionData___c__DisplayClass291_0___ctor(v21, 0LL);
  if ( !v21
    || (v21->fields.actType = actType,
        sideEffectList = this->fields.sideEffectList,
        v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v25,
          (Il2CppObject *)v21,
          Method_BattleActionData___c__DisplayClass291_0__getSideEffectList_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleActionData___ctor__),
        !sideEffectList)
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)sideEffectList,
                (System_Predicate_T__o *)v25,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0LL )
  {
    sub_B5D69C(All, v23);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  BattleActionData___c__DisplayClass201_0_o *v24; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x19

  if ( (byte_42E7FAC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__,
      funcIndex,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_BattleActionData_SummonServant___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_BattleActionData_SummonServant__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BattleActionData_SummonServant___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_BattleActionData___c__DisplayClass201_0__getSummonServant_b__0__, v18, v19, v20);
    sub_B5D5C4(&BattleActionData___c__DisplayClass201_0_TypeInfo, v21, v22, v23);
    byte_42E7FAC = 1;
  }
  v24 = (BattleActionData___c__DisplayClass201_0_o *)sub_B5D694(BattleActionData___c__DisplayClass201_0_TypeInfo);
  BattleActionData___c__DisplayClass201_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_11;
  v24->fields.funcIndex = funcIndex;
  summonServantList = this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_B5D5DC(BattleActionData_SummonServant___TypeInfo, 0LL);
  if ( funcIndex != -1 )
  {
    v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleActionData_SummonServant__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v28,
      (Il2CppObject *)v24,
      Method_BattleActionData___c__DisplayClass201_0__getSummonServant_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleActionData_SummonServant___ctor__);
    All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
            (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)summonServantList,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_B5D69C(All, v26);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getTargetIds(BattleActionData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__int__o *v17; // x19
  int32_t v18; // w1
  const MethodInfo *v19; // x2
  _QWORD *DamageTargets; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  _QWORD *v24; // x21
  unsigned __int64 v25; // x22
  __int64 v26; // x8
  _QWORD *v27; // x20
  unsigned __int64 v28; // x21
  __int64 v29; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v32; // x0

  if ( (byte_42E7FC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v14, v15, v16);
    byte_42E7FC7 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  DamageTargets = BattleActionData__GetDamageTargets(this, v18, v19);
  if ( !DamageTargets )
    goto LABEL_20;
  v23 = DamageTargets[3];
  v24 = DamageTargets;
  if ( (int)v23 >= 1 )
  {
    v25 = 0LL;
    while ( v25 < (unsigned int)v23 )
    {
      if ( !v17 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v17,
        *((_DWORD *)v24 + v25 + 8),
        *((_DWORD *)v24 + v25 + 8),
        (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v23) = *((_DWORD *)v24 + 6);
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_9;
    }
LABEL_19:
    v32 = sub_B5D6C8(DamageTargets);
    sub_B5D668(v32, 0LL);
  }
LABEL_9:
  DamageTargets = BattleActionData__getBuffList(this, -1, v22);
  if ( !DamageTargets )
    goto LABEL_20;
  v26 = DamageTargets[3];
  v27 = DamageTargets;
  if ( (int)v26 >= 1 )
  {
    v28 = 0LL;
    while ( v28 < (unsigned int)v26 )
    {
      v29 = v27[v28 + 4];
      if ( v29 )
      {
        if ( !v17 )
          goto LABEL_20;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v17,
          *(_DWORD *)(v29 + 40),
          *(_DWORD *)(v29 + 40),
          (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      LODWORD(v26) = *((_DWORD *)v27 + 6);
      if ( (__int64)++v28 >= (int)v26 )
        goto LABEL_17;
    }
    goto LABEL_19;
  }
LABEL_17:
  if ( !v17 )
LABEL_20:
    sub_B5D69C(DamageTargets, v21);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v17,
           (const MethodInfo_2F0AA68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  __int64 v15; // x1
  int32_t v16; // w19
  Il2CppClass *klass; // x11
  unsigned __int64 namespaze; // x9
  unsigned __int64 v19; // x8
  Il2CppType *p_byval_arg; // x11
  int v21; // w12
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7F9C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v11, v12, v13);
    byte_42E7F9C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  damagedatalist = BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_B5D69C(0LL, v15);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)damagedatalist,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v16 = 0;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v22 )
      break;
    if ( !v26.fields.current )
      sub_B5D69C(v22, v23);
    klass = v26.fields.current[6].klass;
    if ( klass && (int)klass->_1.namespaze >= 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      v19 = 0LL;
      p_byval_arg = &klass->_1.byval_arg;
      do
      {
        if ( v19 >= namespaze )
        {
          v25 = sub_B5D6C8(v22);
          sub_B5D668(v25, 0LL);
        }
        v21 = *((_DWORD *)&p_byval_arg->data + v19++);
        v16 += v21;
      }
      while ( (__int64)v19 < (int)namespaze );
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v16;
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
            0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_BattleActionData_DamageData__o *result; // x0
  BattleServantConfConponent_o *p_damagedatalist; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E7F96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v5, v6, v7);
    byte_42E7F96 = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = (BattleServantConfConponent_o *)&this->fields._damagedatalist;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    p_damagedatalist->klass = (BattleServantConfConponent_c *)v10;
    sub_B5D560(p_damagedatalist, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    return (System_Collections_Generic_List_BattleActionData_DamageData__o *)p_damagedatalist->klass;
  }
  return result;
}


void __fastcall BattleActionData__initFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t length,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E7FDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___, length, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___, v6, v7, v8);
    byte_42E7FDE = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Target_PlayerTypeFlag_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_1CAF908 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v10 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Target_PlayerTypeFlag_(
                                                                             v9,
                                                                             (const MethodInfo_1CBA604 *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.funcTargetPlayerTypeList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w19
  BattleActionData_c *v6; // x0

  if ( (byte_42E7F84 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7F84 = 1;
  }
  type = this->fields.type;
  v6 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v6 = BattleActionData_TypeInfo;
  }
  return type == v6->static_fields->TYPE_BOOSTSKILL;
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
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w19
  BattleActionData_c *v6; // x0

  if ( (byte_42E7F81 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7F81 = 1;
  }
  type = this->fields.type;
  v6 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v6 = BattleActionData_TypeInfo;
  }
  return type == v6->static_fields->TYPE_DEAD;
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
  __int64 v3; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v8; // 0:x1.8

  if ( (byte_42E7FD7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__,
      pairAttackAndTarget.fields.key,
      (_DWORD)method,
      v3);
    byte_42E7FD7 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(0LL, pairAttackAndTarget);
  v8 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v8,
           (const MethodInfo_2FAB330 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_42E7FD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, uniqueSvtId, (_DWORD)method, v3);
    byte_42E7FD5 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_B5D69C(0LL, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w19
  BattleActionData_c *v6; // x0

  if ( (byte_42E7F82 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7F82 = 1;
  }
  type = this->fields.type;
  v6 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v6 = BattleActionData_TypeInfo;
  }
  return type == v6->static_fields->TYPE_RESURRECTION;
}


bool __fastcall BattleActionData__isSkill(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w19
  BattleActionData_c *v6; // x0

  if ( (byte_42E7F83 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7F83 = 1;
  }
  type = this->fields.type;
  v6 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v6 = BattleActionData_TypeInfo;
  }
  return type == v6->static_fields->TYPE_SKILL;
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
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FBF & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FBF = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  return v5->static_fields->TYPE_ENEMY_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeEnemySpellCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FC0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FC0 = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  return v5->static_fields->TYPE_ENEMY_SPELL_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeMasterCommandSpell(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w19
  BattleActionData_c *v6; // x0

  if ( (byte_42E7FBE & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FBE = 1;
  }
  type = this->fields.type;
  v6 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v6 = BattleActionData_TypeInfo;
  }
  return type == v6->static_fields->TYPE_COMMAND_SPELL;
}


bool __fastcall BattleActionData__isTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FBA & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FBA = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  return v5->static_fields->TYPE_ORDERARTS == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FBB & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FBB = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  return v5->static_fields->TYPE_ORDERBUSTER == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FBC & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FBC = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  return v5->static_fields->TYPE_ORDERQUICK == this->fields.type;
}


bool __fastcall BattleActionData__isTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FB6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FB6 = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  return v5->static_fields->TYPE_TW == this->fields.type;
}


void __fastcall BattleActionData__reflectServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleServantData_o *ServantData; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  int size; // w8
  unsigned int i; // w23
  BattleActionData_ServantLogicResultData_o *v17; // x8
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v18; // x22
  BattleServantData_o *v19; // x21
  BattleActionData_ServantLogicResultData_o *v20; // x8
  int32_t hp; // w22

  if ( (byte_42E7FDC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__,
      v9,
      v10,
      v11);
    byte_42E7FDC = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_22:
    sub_B5D69C(ServantData, v13);
  size = servantLogicResultList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; (int)i < size; ++i )
    {
      if ( size <= i )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v17 = servantLogicResultList->fields._items->m_Items[i];
      if ( !v17 || !data )
        goto LABEL_22;
      ServantData = BattleData__getServantData(data, v17->fields.uniqueId, 0LL);
      if ( ServantData )
      {
        v18 = this->fields.servantLogicResultList;
        if ( !v18 )
          goto LABEL_22;
        v19 = ServantData;
        if ( v18->fields._size <= i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v20 = v18->fields._items->m_Items[i];
        if ( !v20 )
          goto LABEL_22;
        hp = v20->fields.hp;
        if ( hp != -1 )
        {
          ServantData = (BattleServantData_o *)BattleServantData__getNowHp(ServantData, 0LL);
          if ( (_DWORD)ServantData != hp )
          {
            BattleServantData__setHp(v19, hp, 0, 0LL);
            BattleServantData__updateHp(v19, 0LL);
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
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
  }
}


void __fastcall BattleActionData__saveServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x21
  __int64 v10; // x22
  int size; // w8
  unsigned int v12; // w23
  __int64 v13; // x8
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *v14; // x24
  __int64 v15; // x23

  v5 = this;
  if ( (byte_42E7FDB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    this = (BattleActionData_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__,
                                   v6,
                                   v7,
                                   v8);
    byte_42E7FDB = 1;
  }
  servantLogicResultList = v5->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_17:
    sub_B5D69C(this, data);
  v10 = 4LL;
  while ( 1 )
  {
    size = servantLogicResultList->fields._size;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= size )
      break;
    if ( size <= v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v13 = *((_QWORD *)&servantLogicResultList->fields._items->obj.klass + v10);
    if ( !v13 || !data )
      goto LABEL_17;
    this = (BattleActionData_o *)BattleData__getServantData(data, *(_DWORD *)(v13 + 16), 0LL);
    if ( this )
    {
      v14 = v5->fields.servantLogicResultList;
      if ( !v14 )
        goto LABEL_17;
      if ( v14->fields._size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v15 = *((_QWORD *)&v14->fields._items->obj.klass + v10);
      this = (BattleActionData_o *)(*(__int64 (__fastcall **)(BattleActionData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                     this,
                                     this->klass[1]._1.element_class);
      if ( !v15 )
        goto LABEL_17;
      *(_DWORD *)(v15 + 20) = (_DWORD)this;
    }
    servantLogicResultList = v5->fields.servantLogicResultList;
    ++v10;
    if ( !servantLogicResultList )
      goto LABEL_17;
  }
}


void __fastcall BattleActionData__servantLogicResultClear(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *servantLogicResultList; // x0

  if ( (byte_42E7FDD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, v5, v6, v7);
    byte_42E7FDD = 1;
  }
  servantLogicResultList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_B5D69C(0LL, method);
  if ( servantLogicResultList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      servantLogicResultList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
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
      sub_B5D69C(this, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleActionData_ChangeBg_o *v18; // x20
  struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *changeBgList; // x0
  __int64 v20; // x1
  BattleServantConfConponent_o *p_changeBgList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7FB0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_ChangeBg_TypeInfo, inbgNo, inTp, *(_QWORD *)&priority);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo, v15, v16, v17);
    byte_42E7FB0 = 1;
  }
  v18 = (BattleActionData_ChangeBg_o *)sub_B5D694(BattleActionData_ChangeBg_TypeInfo);
  BattleActionData_ChangeBg___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_7;
  v18->fields.bgNo = inbgNo;
  v18->fields.bgTp = inTp;
  v18->fields.priority = priority;
  changeBgList = this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = (BattleServantConfConponent_o *)&this->fields.changeBgList;
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v22,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    p_changeBgList->klass = (BattleServantConfConponent_c *)v22;
    sub_B5D560(p_changeBgList, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    changeBgList = (struct System_Collections_Generic_List_BattleActionData_ChangeBg__o *)p_changeBgList->klass;
    if ( !p_changeBgList->klass )
LABEL_7:
      sub_B5D69C(changeBgList, v20);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)changeBgList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_42E7F97 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
                                   (_DWORD)data,
                                   (_DWORD)vals,
                                   isIndiviAtk);
    byte_42E7F97 = 1;
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
    sub_B5D69C(this, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
}


void __fastcall BattleActionData__setEffect(
        BattleActionData_o *this,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.effectlist = effectList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectlist,
    (System_Int32_array **)effectList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData__setEndCamera(
        BattleActionData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.endcameraname = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endcameraname,
    (System_Int32_array **)name,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t index,
        bool isTargetEnemy,
        const MethodInfo *method)
{
  BattleActionData_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w21
  System_Collections_Generic_List_Target_PlayerTypeFlag__o *funcTargetPlayerTypeList; // x20
  int32_t size; // w8

  v6 = this;
  if ( (byte_42E7FDF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, index, isTargetEnemy, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v7, v8, v9);
    this = (BattleActionData_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__,
                                   v10,
                                   v11,
                                   v12);
    byte_42E7FDF = 1;
  }
  if ( isTargetEnemy )
    v13 = 2;
  else
    v13 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_B5D69C(this, *(_QWORD *)&index);
    size = funcTargetPlayerTypeList->fields._size;
    if ( size > index )
    {
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      System_Collections_Generic_List_Target_PlayerTypeFlag___set_Item(
        funcTargetPlayerTypeList,
        index,
        funcTargetPlayerTypeList->fields._items->m_Items[index + 1] | v13,
        (const MethodInfo_3044470 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  bool isShowForcedEffect; // w8

  if ( (byte_42E7FA1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_HealData_TypeInfo, targetId, healPoint, *(_QWORD *)&funcIndex);
    byte_42E7FA1 = 1;
  }
  v15 = (BattleActionData_HealData_o *)sub_B5D694(BattleActionData_HealData_TypeInfo);
  BattleActionData_HealData___ctor(v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
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
  BattleActionData__setHealData_24141236(this, v15, vals, v18);
  return v15;
}


void __fastcall BattleActionData__setHealData_24141236(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  struct System_String_o *StrParam; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( vals )
  {
    if ( !data )
      sub_B5D69C(this, 0LL);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 118, 0LL, 0LL);
    data->fields.popValueText = StrParam;
    sub_B5D560(
      (BattleServantConfConponent_o *)&data->fields.popValueText,
      (System_Int32_array **)StrParam,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


void __fastcall BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Int32_array *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0

  if ( (byte_42E7F85 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, pttargetId, (_DWORD)method, v3);
    byte_42E7F85 = 1;
  }
  v6 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
  if ( !v6->max_length )
  {
    v14 = sub_B5D6C8(v6);
    sub_B5D668(v14, 0LL);
  }
  v6->m_Items[1] = pttargetId;
  this->fields.pttargetIds = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pttargetIds,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall BattleActionData__setPTTargetId_24128452(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.pttargetIds = pttargetIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pttargetIds,
    (System_Int32_array **)pttargetIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7FA4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_ReplaceMember_TypeInfo, index, inUniqueId, *(_QWORD *)&outUniqueId);
    byte_42E7FA4 = 1;
  }
  v11 = (BattleActionData_ReplaceMember_o *)sub_B5D694(BattleActionData_ReplaceMember_TypeInfo);
  BattleActionData_ReplaceMember___ctor(v11, 0LL);
  if ( !v11 )
    sub_B5D69C(v12, v13);
  v11->fields.outUniqeId = outUniqueId;
  v11->fields.inUniqeId = inUniqueId;
  v11->fields.index = index;
  v11->fields.functionIndex = funcIndex;
  BattleActionData__setReplaceMember_24141684(this, v11, v14);
}


void __fastcall BattleActionData__setReplaceMember_24141684(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *replacememberlist; // x0
  BattleServantConfConponent_o *p_replacememberlist; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1

  if ( (byte_42E7FA5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v9, v10, v11);
    byte_42E7FA5 = 1;
  }
  replacememberlist = this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (BattleServantConfConponent_o *)&this->fields.replacememberlist;
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (BattleServantConfConponent_c *)v14;
    sub_B5D560(p_replacememberlist, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)p_replacememberlist->klass;
    if ( !p_replacememberlist->klass )
      sub_B5D69C(0LL, v21);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)replacememberlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__);
}


void __fastcall BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *shiftServantList; // x0
  BattleServantConfConponent_o *p_shiftServantList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1

  if ( (byte_42E7FAE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo, v9, v10, v11);
    byte_42E7FAE = 1;
  }
  shiftServantList = this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = (BattleServantConfConponent_o *)&this->fields.shiftServantList;
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    p_shiftServantList->klass = (BattleServantConfConponent_c *)v14;
    sub_B5D560(p_shiftServantList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    shiftServantList = (struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *)p_shiftServantList->klass;
    if ( !p_shiftServantList->klass )
      sub_B5D69C(0LL, v21);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)shiftServantList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  BattleActionData_SummonServant_o *v22; // x20
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x0
  BattleServantConfConponent_o *p_summonServantList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1

  if ( (byte_42E7FAB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__,
      uniqueId,
      unloadUniqueId,
      *(_QWORD *)&funcIndex);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleActionData_SummonServant_TypeInfo, v19, v20, v21);
    byte_42E7FAB = 1;
  }
  v22 = (BattleActionData_SummonServant_o *)sub_B5D694(BattleActionData_SummonServant_TypeInfo);
  BattleActionData_SummonServant___ctor(v22, uniqueId, unloadUniqueId, funcIndex, isEffect, callSvtEffectId, 0LL);
  summonServantList = this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = (BattleServantConfConponent_o *)&this->fields.summonServantList;
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    p_summonServantList->klass = (BattleServantConfConponent_c *)v25;
    sub_B5D560(p_summonServantList, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
    summonServantList = (struct System_Collections_Generic_List_BattleActionData_SummonServant__o *)p_summonServantList->klass;
    if ( !p_summonServantList->klass )
      sub_B5D69C(0LL, v32);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)summonServantList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__);
}


void __fastcall BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FB7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FB7 = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  this->fields.type = v5->static_fields->TYPE_ORDERARTS;
}


void __fastcall BattleActionData__setTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FB8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FB8 = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  this->fields.type = v5->static_fields->TYPE_ORDERBUSTER;
}


void __fastcall BattleActionData__setTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FB9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FB9 = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  this->fields.type = v5->static_fields->TYPE_ORDERQUICK;
}


void __fastcall BattleActionData__setTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0

  if ( (byte_42E7FB5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FB5 = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  this->fields.type = v5->static_fields->TYPE_TW;
}


void __fastcall BattleActionData__set_ChangeField(
        BattleActionData_o *this,
        BattleActionData_AfterChangeField_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ChangeField_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ChangeField_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData__set_DispMsgList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DispMsgList_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._DispMsgList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._HpDecreaseFuncTargetHash_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData__set_IntervalBuffDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ShiftGauge_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ShiftGauge_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData__set_WaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._WaitCond_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._WaitCond_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData__set_damagedatalist(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DamageData__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._damagedatalist = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._damagedatalist,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *__fastcall BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
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
  int32_t type; // w8
  Il2CppObject *v18; // x0
  __int64 *v19; // x8
  int v21; // [xsp+4h] [xbp-1Ch] BYREF
  int v22; // [xsp+8h] [xbp-18h] BYREF
  int v23; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7FC1 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18455/*"effect/BitEffect/bit_buster{0:00}"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18454/*"effect/BitEffect/bit_arts{0:00}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18462/*"effect/BitEffect/bit_flash02"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18464/*"effect/BitEffect/bit_quick{0:00}"*/, v14, v15, v16);
    byte_42E7FC1 = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v22 = 1;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v19 = &StringLiteral_18454/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v19, v18, 0LL);
    case 3:
      v21 = 1;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v19 = &StringLiteral_18464/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v19, v18, 0LL);
    case 2:
      v23 = 1;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v19 = &StringLiteral_18455/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v19, v18, 0LL);
    case 4:
      return (System_String_o *)StringLiteral_18462/*"effect/BitEffect/bit_flash02"*/;
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
  sub_B5D560(
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
  if ( (byte_42E7561 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_B5D5C4(
                                                    &Generator_BGFromFieldChangeBGBuff_TypeInfo,
                                                    (_DWORD)perf,
                                                    (_DWORD)bgName,
                                                    bgType);
    byte_42E7561 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v12 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B5D694(Generator_BGFromFieldChangeBGBuff_TypeInfo),
        Generator_BGFromFieldChangeBGBuff___ctor(v12, fieldChange, 0LL),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_AddBackground.method)(
                                                        v11,
                                                        v12,
                                                        2LL,
                                                        v11->klass->vtable._6_AddBGM.methodPtr)) == 0LL )
  {
    sub_B5D69C(this, perf);
  }
  v13 = (int)this;
  v14 = System_Int32__ToString((int)this + 28, 0LL);
  *bgName = v14;
  sub_B5D560((BattleServantConfConponent_o *)bgName, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = System_Int32__ToString(v13 + 32, 0LL);
  *bgType = v21;
  sub_B5D560((BattleServantConfConponent_o *)bgType, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
}


System_String_o *__fastcall BattleActionData_AfterChangeField__GetPriorityBgmName(
        BattleActionData_AfterChangeField_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  BattleActionData_AfterChangeField_o *v6; // x21
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  BattleData_o *data; // x22
  BattleBuffData_FieldChangeData_o *fieldChange; // x23
  BattleFieldEnvironmentData_o *v10; // x20
  Generator_BGMFromFieldChangeBGBuff_o *v11; // x21
  void *monitor; // x8

  v4 = defBgmName;
  v6 = this;
  if ( (byte_42E7562 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_B5D5C4(
                                                    &Generator_BGMFromFieldChangeBGBuff_TypeInfo,
                                                    (_DWORD)perf,
                                                    (_DWORD)defBgmName,
                                                    method);
    byte_42E7562 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        data = perf->fields.data,
        fieldChange = v6->fields.fieldChange,
        v10 = FieldEnvData,
        v11 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B5D694(Generator_BGMFromFieldChangeBGBuff_TypeInfo),
        Generator_BGMFromFieldChangeBGBuff___ctor(v11, data, fieldChange, 0LL),
        !v10)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._6_AddBGM.method)(
                                                        v10,
                                                        v11,
                                                        2LL,
                                                        v10->klass->vtable._7_RemoveAfterResetBGM.methodPtr)) == 0LL )
  {
    sub_B5D69C(this, perf);
  }
  monitor = this[1].monitor;
  if ( monitor )
    return (System_String_o *)*((_QWORD *)monitor + 3);
  return v4;
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
  sub_B5D560(
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
    sub_B5D69C(v13, v14);
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
    sub_B5D69C(this, id);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *fieldChange; // x0
  struct BattleBuffData_FieldChangeData_o *v15; // x21

  if ( (byte_42E7563 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, (_DWORD)bgmName, bgmId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    byte_42E7563 = 1;
  }
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    goto LABEL_10;
  *((_QWORD *)fieldChange + 5) = bgmName;
  sub_B5D560(
    (BattleServantConfConponent_o *)((char *)fieldChange + 40),
    (System_Int32_array **)bgmName,
    *(System_String_array ***)&bgmId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v15 = this->fields.fieldChange;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fieldChange = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !fieldChange
    || (fieldChange = (void *)BgmMaster__GetBgmIdFromFileName((BgmMaster_o *)fieldChange, bgmName, bgmId, 0LL), !v15) )
  {
LABEL_10:
    sub_B5D69C(fieldChange, bgmName);
  }
  v15->fields.bgmId = (int)fieldChange;
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
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_c *v5; // x0
  struct BattleActionData_StaticFields *static_fields; // x8
  int32_t addActionOrder; // w9

  if ( (byte_42E7564 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7564 = 1;
  }
  v5 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v5 = BattleActionData_TypeInfo;
  }
  static_fields = v5->static_fields;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1

  if ( (byte_42E7565 & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantHpShiftComponent_EffectData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19432/*"hp_iconeffect_before_1_"*/, v4, v5, v6);
    byte_42E7565 = 1;
  }
  v7 = sub_B5D694(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v7, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v16 = (System_Int32_array **)StringLiteral_19432/*"hp_iconeffect_before_1_"*/;
  *(_QWORD *)(v7 + 24) = StringLiteral_19432/*"hp_iconeffect_before_1_"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 24), v16, v10, v11, v12, v13, v14, v15);
  return (BattleServantHpShiftComponent_EffectData_o *)v7;
}


BattleAction_ShiftHpData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_42E7568 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_ShiftHpData___, (_DWORD)method, v2, v3);
    byte_42E7568 = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0LL,
                                         (const MethodInfo_1AD901C *)Method_BasicHelper_IndexValue_ShiftHpData___);
}


void __fastcall BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData_BaseShiftGaugeData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v5 = this;
  if ( (byte_42E7566 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShiftHpData___ctor__, (_DWORD)svtData, (_DWORD)method, v3);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_B5D5C4(
                                                      &System_Collections_Generic_List_ShiftHpData__TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8);
    byte_42E7566 = 1;
  }
  if ( !svtData )
    sub_B5D69C(this, svtData);
  v5->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShiftHpData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v5->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields._ShiftHpDataList_k__BackingField,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
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
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x19
  BattleActionData_BaseShiftGaugeData___c_c *v18; // x0
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__34_0; // x20
  Il2CppObject *v21; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7567 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ShiftHpData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_ShiftHpData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__, v11, v12, v13);
    sub_B5D5C4(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v14, v15, v16);
    byte_42E7567 = 1;
  }
  this->fields.hpDataIndex = 0;
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v18 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  if ( (BYTE3(BattleActionData_BaseShiftGaugeData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_BaseShiftGaugeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    v18 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ShiftHpData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__34_0,
      v21,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      (const MethodInfo_258B320 *)Method_System_Action_ShiftHpData___ctor__);
    v22 = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    v22->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_B5D69C(v18, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x0

  if ( (byte_42E6023 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v1, v2, v3);
    byte_42E6023 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  BattleAction_ShiftHpData__InitHpIndex(x, 0LL);
}


void __fastcall BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E756A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v5, v6, v7);
    byte_42E756A = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.removeBuffList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    sub_B5D560(p_EffectProc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  sub_B5D560(
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  v8 = vals;
  if ( (byte_42E7569 & 1) == 0 )
  {
    sub_B5D5C4(&DataVals_TypeInfo, (_DWORD)vals, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42E7569 = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !v8 )
  {
    v8 = (DataVals_o *)sub_B5D694(DataVals_TypeInfo);
    DataVals___ctor(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.dataVals = v8;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E756C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo, v5, v6, v7);
    byte_42E756C = 1;
  }
  this->fields.multiatk = 1;
  v8 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v8,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.attackSideEffectActList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleActionData_DamageData__GetAttackCountExceptFirst(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( damagelist )
    return UnityEngine_Mathf__Max_41629432(0, damagelist->max_length - 1, 0LL);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DamageData__addAttackSideEffectAction(
        BattleActionData_DamageData_o *this,
        int32_t act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_BuffList_ACTION__o *attackSideEffectActList; // x0

  if ( (byte_42E756B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__, act, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__, v6, v7, v8);
    byte_42E756B = 1;
  }
  attackSideEffectActList = this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_7;
  if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
         (System_Collections_Generic_List_VoiceCondType_Type__o *)attackSideEffectActList,
         act,
         (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
  {
    return;
  }
  attackSideEffectActList = this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
LABEL_7:
    sub_B5D69C(attackSideEffectActList, *(_QWORD *)&act);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)attackSideEffectActList,
    act,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_BuffList_ACTION__Add__);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
    sub_B5D69C(this, method);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct System_String_array *IsNullOrEmpty; // x0
  struct System_String_array *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x22
  BattleMessageEntity_o *v48; // x2
  const MethodInfo *v49; // x4
  int32_t DefInterval; // w0
  BattleActionData_DisplayMessageData_o *ScriptInt; // x0
  BattleMessageEntity_o *v52; // x2
  const MethodInfo *v53; // x4
  int32_t DefBaseTime; // w0
  BattleActionData_DisplayMessageData_o *v55; // x0
  BattleMessageEntity_o *v56; // x2
  const MethodInfo *v57; // x4
  int32_t DefTimePerChara; // w0
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x22
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v60; // x23
  int64_t MessageType_k__BackingField; // x2

  if ( (byte_42E756F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantMaster___, (_DWORD)ent, (_DWORD)parser, preMsg);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_string___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&string___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_14587/*"TimePerChara"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_2788/*"BaseTime"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_9155/*"MessageType"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_7800/*"Interval"*/, v36, v37, v38);
    byte_42E756F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !ent )
    goto LABEL_16;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  }
  else
  {
    if ( !parser )
      goto LABEL_16;
    IsNullOrEmpty = ParseBattleMessage__Replace(parser, ent->fields.message, 0LL);
  }
  v40 = IsNullOrEmpty;
  if ( !this )
LABEL_16:
    sub_B5D69C(IsNullOrEmpty, v40);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._Messages_k__BackingField,
    (System_Int32_array **)IsNullOrEmpty,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_WarQuestSelectionMaster,
                  (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                  v48,
                  preMsg,
                  v49);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7800/*"Interval"*/,
                                                         DefInterval,
                                                         0LL);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                  v52,
                  preMsg,
                  v53);
  v55 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_2788/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0LL);
  this->fields.baseTime = (int)v55;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v55,
                      (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                      v56,
                      preMsg,
                      v57);
  this->fields.timePerChara = BattleMessageEntity__GetScriptInt(
                                ent,
                                (System_String_o *)StringLiteral_14587/*"TimePerChara"*/,
                                DefTimePerChara,
                                0LL);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v60 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v60,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
  this->fields.messageLen = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v60,
                              (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0LL;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9155/*"MessageType"*/,
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
  if ( (byte_42E7571 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B5D5C4(
                                                      &StringLiteral_2514/*"BATTLE_MSG_BASE_TIME"*/,
                                                      (_DWORD)constMst,
                                                      (_DWORD)ent,
                                                      preMsg);
    byte_42E7571 = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_B5D69C(this, constMst);
  return ConstantMaster__GetValue_28723684(constMst, (System_String_o *)StringLiteral_2514/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_42E7570 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B5D5C4(
                                                      &StringLiteral_2515/*"BATTLE_MSG_INTERVAL"*/,
                                                      (_DWORD)constMst,
                                                      (_DWORD)ent,
                                                      preMsg);
    byte_42E7570 = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_B5D69C(this, constMst);
  return ConstantMaster__GetValue_28723684(constMst, (System_String_o *)StringLiteral_2515/*"BATTLE_MSG_INTERVAL"*/, 250, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_42E7572 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_B5D5C4(
                                                      &StringLiteral_2587/*"BATTLE_TIME_PER_CHARA"*/,
                                                      (_DWORD)constMst,
                                                      (_DWORD)ent,
                                                      preMsg);
    byte_42E7572 = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_B5D69C(this, constMst);
  return ConstantMaster__GetValue_28723684(constMst, (System_String_o *)StringLiteral_2587/*"BATTLE_TIME_PER_CHARA"*/, 15, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__StrlenByDisp(
        BattleActionData_DisplayMessageData_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x19
  __int64 v6; // x1
  bool IsNullOrEmpty; // w8
  int32_t result; // w0

  if ( (byte_42E7573 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)text, (_DWORD)method, v3);
    byte_42E7573 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__ReplaceNameTag(text, 0, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v5, 0LL);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v5 )
      sub_B5D69C(0LL, v6);
    return v5->fields.m_stringLength;
  }
  return result;
}


float __fastcall BattleActionData_DisplayMessageData__get_DispTime(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t messageLen; // w20
  int32_t timePerChara; // w19
  int32_t baseTime; // w21
  BattleDataDefine_c *v8; // x0

  if ( (byte_42E756E & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E756E = 1;
  }
  messageLen = this->fields.messageLen;
  baseTime = this->fields.baseTime;
  timePerChara = this->fields.timePerChara;
  v8 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v8 = BattleDataDefine_TypeInfo;
  }
  return (float)(baseTime + timePerChara * messageLen) / v8->static_fields->PERMILLAGE_DENOMINATOR;
}


float __fastcall BattleActionData_DisplayMessageData__get_Interval(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t interval; // w19
  BattleDataDefine_c *v6; // x0

  if ( (byte_42E756D & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E756D = 1;
  }
  interval = this->fields.interval;
  v6 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v6 = BattleDataDefine_TypeInfo;
  }
  return (float)interval / v6->static_fields->PERMILLAGE_DENOMINATOR;
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
  sub_B5D560(
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x23
  BattleAction_ShiftDownHpData_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42E7577 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShiftHpData__Add__, curGaugeIndex, maxGaugeIconIndex, prevHp);
    sub_B5D5C4(&BattleAction_ShiftDownHpData_TypeInfo, v11, v12, v13);
    byte_42E7577 = 1;
  }
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v15 = (BattleAction_ShiftDownHpData_o *)sub_B5D694(BattleAction_ShiftDownHpData_TypeInfo);
  BattleAction_ShiftDownHpData___ctor(v15, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField )
    sub_B5D69C(v16, v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ShiftHpDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShiftHpData__Add__);
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1

  if ( (byte_42E7576 & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantHpShiftComponent_EffectData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19431/*"hp_iconeffect_1_"*/, v4, v5, v6);
    byte_42E7576 = 1;
  }
  v7 = sub_B5D694(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v7, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v16 = (System_Int32_array **)StringLiteral_19431/*"hp_iconeffect_1_"*/;
  *(_QWORD *)(v7 + 24) = StringLiteral_19431/*"hp_iconeffect_1_"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 24), v16, v10, v11, v12, v13, v14, v15);
  return (BattleServantHpShiftComponent_EffectData_o *)v7;
}


int32_t __fastcall BattleActionData_DownShiftGaugeData__GetShiftValue(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  if ( !svtData || (shiftDeckList = svtData->fields.shiftDeckList) == 0LL )
    sub_B5D69C(this, svtData);
  return UnityEngine_Mathf__Min_41629336(shiftDeckList->max_length, svtData->fields.shiftDeckIndex + baseValue, 0LL)
       - svtData->fields.shiftDeckIndex;
}


bool __fastcall BattleActionData_DownShiftGaugeData__IsInvalid(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7574 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8898/*"MOTION_SHIFT_GAUGE_DOWN"*/, (_DWORD)method, v2, v3);
    byte_42E7574 = 1;
  }
  return (System_String_o *)StringLiteral_8898/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleAction_PlayDownShiftGaugeMain_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E7575 & 1) == 0 )
  {
    sub_B5D5C4(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7575 = 1;
  }
  v5 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_B5D694(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
  BattleAction_PlayDownShiftGaugeMain___ctor(v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, Il2CppMethodPointer))v5->klass->vtable._7_Init.method)(
                                                v5,
                                                this,
                                                v5->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7578 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionEffect_UpdateFieldInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7578 = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v5 = (Il2CppObject *)sub_B5D694(BattleActionEffect_UpdateFieldInfo_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields.EffectProc = (struct BattleActionEffect_Base_o *)v5;
  sub_B5D560(
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
  if ( (byte_42E7579 & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_B5D5C4(
                                                 &UnityEngine_Object_TypeInfo,
                                                 (_DWORD)perf,
                                                 (_DWORD)arg,
                                                 method);
    byte_42E7579 = 1;
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
    sub_B5D69C(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0LL);
  if ( !uicamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Camera__WorldToViewportPoint_41565356(
                                     uicamera,
                                     *(UnityEngine_Vector3_o *)&v12,
                                     0LL);
  if ( !actorcamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ViewportToWorldPoint_41565364(
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
    sub_B5D69C(this, data);
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
    sub_B5D69C(v5, v6);
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
    sub_B5D69C(this, perf);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(this, 0LL);
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

  if ( (byte_42E757A & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_ACTION___TypeInfo, targetId, (_DWORD)sideEffectActs, method);
    byte_42E757A = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_B5D5DC(BuffList_ACTION___TypeInfo, 0LL);
  this->fields.sideEffectActs = v7;
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)v6, (System_Int32_array **)data, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = shiftNpcId;
}


void __fastcall BattleActionData_SkillShiftServant__SetAddBeforeSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B5D69C(this, 0LL);
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
      sub_B5D69C(this, 0LL);
    this->fields.isChange = this->fields.displayType != svtData->fields.displayType;
  }
}


void __fastcall BattleActionData_SkillShiftServant__UpdateAfterShiftData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantData_o *v4; // x19
  BattleActionData_SkillShiftServant_o *v5; // x20
  BattleBuffData_o *buffData; // x21
  struct BattleData_o *data; // x8
  const MethodInfo *v8; // x2
  __int64 v9; // x0

  v4 = targetData;
  v5 = this;
  if ( (byte_42E757B & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_B5D5C4(&int___TypeInfo, (_DWORD)targetData, (_DWORD)method, v3);
    byte_42E757B = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  buffData = v4->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_10;
  targetData = (BattleServantData_o *)this;
  if ( !*(_DWORD *)&this->fields.IsForceBuffEffect )
  {
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
  }
  this->fields.svtId = 10;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypePassiveBuff(buffData, (System_Int32_array *)this, 0LL),
        BattleServantData__setSkillShiftServant(v4, v5->fields.data, v5->fields.npcId, 0LL),
        (data = v5->fields.data) == 0LL)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, targetData);
  }
  BattleLogic__actClassPassiveSkill((BattleLogic_o *)this, v4->fields.uniqueId, 0LL);
  BattleActionData_ShiftServant__setCheckSvtData((BattleActionData_ShiftServant_o *)v5, v4, v8);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_ShiftHpData__o *ShiftHpDataList_k__BackingField; // x23
  BattleAction_ShiftUpHpData_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42E757F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShiftHpData__Add__, curGaugeIndex, maxGaugeIconIndex, prevHp);
    sub_B5D5C4(&BattleAction_ShiftUpHpData_TypeInfo, v11, v12, v13);
    byte_42E757F = 1;
  }
  ShiftHpDataList_k__BackingField = this->fields._ShiftHpDataList_k__BackingField;
  v15 = (BattleAction_ShiftUpHpData_o *)sub_B5D694(BattleAction_ShiftUpHpData_TypeInfo);
  BattleAction_ShiftUpHpData___ctor(v15, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField )
    sub_B5D69C(v16, v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ShiftHpDataList_k__BackingField,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShiftHpData__Add__);
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1

  if ( (byte_42E757E & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantHpShiftComponent_EffectData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19430/*"hp_iconcharge_1_"*/, v4, v5, v6);
    byte_42E757E = 1;
  }
  v7 = sub_B5D694(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v7, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v16 = (System_Int32_array **)StringLiteral_19430/*"hp_iconcharge_1_"*/;
  *(_QWORD *)(v7 + 24) = StringLiteral_19430/*"hp_iconcharge_1_"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 24), v16, v10, v11, v12, v13, v14, v15);
  return (BattleServantHpShiftComponent_EffectData_o *)v7;
}


int32_t __fastcall BattleActionData_UpShiftGaugeData__GetShiftValue(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B5D69C(this, 0LL);
  return UnityEngine_Mathf__Max_41629432(1, svtData->fields.shiftDeckIndex - baseValue, 0LL)
       - svtData->fields.shiftDeckIndex;
}


bool __fastcall BattleActionData_UpShiftGaugeData__IsInvalid(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  lowLimitShift = targetSvtData->fields.lowLimitShift;
  if ( isChangeMaxBreakGauge )
    v6 = UnityEngine_Mathf__Max_41629432(1, lowLimitShift - 1, 0LL);
  else
    v6 = UnityEngine_Mathf__Min_41629336(lowLimitShift, targetSvtData->fields.shiftDeckIndex, 0LL);
  targetSvtData->fields.lowLimitShift = v6;
}


System_String_o *__fastcall BattleActionData_UpShiftGaugeData__get_Motion(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E757C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8899/*"MOTION_SHIFT_GAUGE_UP"*/, (_DWORD)method, v2, v3);
    byte_42E757C = 1;
  }
  return (System_String_o *)StringLiteral_8899/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleAction_PlayUpShiftGaugeUpMain_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E757D & 1) == 0 )
  {
    sub_B5D5C4(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E757D = 1;
  }
  v5 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_B5D694(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, Il2CppMethodPointer))v5->klass->vtable._7_Init.method)(
                                                v5,
                                                this,
                                                v5->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7557 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData___c_TypeInfo, v1, v2, v3);
    byte_42E7557 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleActionData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActionData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  BattleBuffData_BuffData__UpdateInterval(buff, 0LL);
}


BattleActionData_o *__fastcall BattleActionData___c___AddSideEffectAfterAction_b__295_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_B5D69C(this, 0LL);
  return act->fields.afterActionData;
}


bool __fastcall BattleActionData___c___ExecUnappliedProcess_b__122_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.EffectProc != 0LL;
}


bool __fastcall BattleActionData___c___ExistFuncSideEffectTrigger_b__156_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArrayEx_b__124_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B5D69C(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArray_b__123_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
  return x->fields.EffectProc != 0LL;
}


void __fastcall BattleActionData___c___ResetAllCheckDead_b__177_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__125_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.functionIndex;
}


void __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__125_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool __fastcall BattleActionData___c___SetFuncTargetAllDead_b__137_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleServantData__isAliveLogic(x, 0, 0LL);
}


void __fastcall BattleActionData___c___SetPopupOnce_b__126_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields.isOncePop = 1;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__283_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.targetId;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__283_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__157_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__157_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateIntervalBuff_b__147_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B5D69C(this, 0LL);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__276_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_B5D69C(this, 0LL);
  damagelist = x->fields.damagelist;
  if ( damagelist )
    return UnityEngine_Mathf__Max_41629432(0, damagelist->max_length - 1, 0LL);
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
    sub_B5D69C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__275_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleActionData_BaseData__o *execOrderList; // x0

  if ( (byte_42E7558 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7558 = 1;
  }
  execOrderList = this->fields.execOrderList;
  if ( !execOrderList )
    sub_B5D69C(0LL, x);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)execOrderList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)x,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
}


void __fastcall BattleActionData___c__DisplayClass123_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass123_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleActionData_BaseData__o *execOrderList; // x0

  if ( (byte_42E7559 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7559 = 1;
  }
  execOrderList = this->fields.execOrderList;
  if ( !execOrderList )
    sub_B5D69C(0LL, x);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)execOrderList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)x,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  BattleActionData___c__DisplayClass274_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E755A & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass274_0_o *)sub_B5D5C4(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          (_DWORD)x,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E755A = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass274_0_o *)v5->fields.ids) == 0LL )
    sub_B5D69C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass274_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass274_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData___c__DisplayClass274_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E755B & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass274_0_o *)sub_B5D5C4(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          (_DWORD)x,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E755B = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass274_0_o *)v5->fields.ids) == 0LL )
    sub_B5D69C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass274_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass274_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData___c__DisplayClass274_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E755C & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass274_0_o *)sub_B5D5C4(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          (_DWORD)x,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E755C = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass274_0_o *)v5->fields.ids) == 0LL )
    sub_B5D69C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  __int64 v3; // x3
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42E755D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_int__get_Value__, x, (_DWORD)method, v3);
    byte_42E755D = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_234B308 *)Method_System_Nullable_int__get_Value__) > x;
}


bool __fastcall BattleActionData___c__DisplayClass277_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass277_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42E755E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_int__get_Value__, x, (_DWORD)method, v3);
    byte_42E755E = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_234B308 *)Method_System_Nullable_int__get_Value__) == x;
}


bool __fastcall BattleActionData___c__DisplayClass277_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass277_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_42E755F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_int__get_Value__, x, (_DWORD)method, v3);
    byte_42E755F = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_234B308 *)Method_System_Nullable_int__get_Value__) < x;
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleActionData___c__DisplayClass283_0_o *v4; // x19
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  System_Collections_Generic_List_int__o *targetList; // x20
  BattleActionData___c_c *v35; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__283_1; // x22
  Il2CppObject *v38; // x23
  struct BattleActionData___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  System_Collections_Generic_List_int__o *v47; // x19
  BattleActionData___c_c *v48; // x0
  struct BattleActionData___c_StaticFields *v49; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__283_2; // x21
  Il2CppObject *v51; // x22
  struct BattleActionData___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  v4 = this;
  if ( (byte_42E7560 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleActionData_HealData__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BuffData__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BattleActionData_BuffData__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Func_BattleActionData_HealData__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_1__, v23, v24, v25);
    sub_B5D5C4(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_2__, v26, v27, v28);
    this = (BattleActionData___c__DisplayClass283_0_o *)sub_B5D5C4(&BattleActionData___c_TypeInfo, v29, v30, v31);
    byte_42E7560 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.buffdatalist;
  if ( buffdatalist )
  {
    targetList = v4->fields.targetList;
    v35 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v35 = BattleActionData___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__283_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__283_1;
    if ( !_9__283_1 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__283_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__283_1,
        v38,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
      v39 = BattleActionData___c_TypeInfo->static_fields;
      v39->__9__283_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__283_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v39->__9__283_1,
        (System_Int32_array **)_9__283_1,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    this = (BattleActionData___c__DisplayClass283_0_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__283_1,
                                                          (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_27;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_27;
  }
  healdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.healdatalist;
  if ( healdatalist )
  {
    v47 = v4->fields.targetList;
    v48 = BattleActionData___c_TypeInfo;
    if ( (BYTE3(BattleActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v48 = BattleActionData___c_TypeInfo;
    }
    v49 = v48->static_fields;
    _9__283_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v49->__9__283_2;
    if ( !_9__283_2 )
    {
      if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v49 = BattleActionData___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)v49->__9;
      _9__283_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleActionData_HealData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__283_2,
        v51,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__283_2__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleActionData_HealData__int___ctor__);
      v52 = BattleActionData___c_TypeInfo->static_fields;
      v52->__9__283_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__283_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v52->__9__283_2,
        (System_Int32_array **)_9__283_2,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    this = (BattleActionData___c__DisplayClass283_0_o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__283_2,
                                                          (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v47 )
    {
      System_Collections_Generic_List_int___AddRange(
        v47,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_27:
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, act);
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
    sub_B5D69C(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}