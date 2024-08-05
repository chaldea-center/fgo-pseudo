void __fastcall BattleActionData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleActionData_StaticFields *static_fields; // x8

  if ( (byte_4A00613 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, v1);
    byte_4A00613 = 1;
  }
  static_fields = BattleActionData_TypeInfo->static_fields;
  static_fields->addActionOrder = 0;
  *(_OWORD *)&static_fields->TYPE_DEAD = xmmword_BA39F0;
  *(_OWORD *)&static_fields->TYPE_RESURRECTION = xmmword_BA4490;
  *(_OWORD *)&static_fields->TYPE_ORDERBUSTER = xmmword_BA3CD0;
}


void __fastcall BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  System_Collections_Generic_List_int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_T__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_int__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_HashSet_int__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_List_object__o *v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3

  if ( (byte_4A00612 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__,
      method);
    sub_1B64870(
      &System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo,
      v3);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int___ctor__, v4);
    sub_1B64870(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo, v11);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64870(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo, v13);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData__TypeInfo, v14);
    sub_1B64870(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v15);
    sub_1B64870(&StringLiteral_1/*""*/, v16);
    byte_4A00612 = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1LL;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1LL;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v17;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.damageSideEffectedSvtIds, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1B64ABC(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v20,
    (const MethodInfo_33FCFC0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v20;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.attackSideEffectedSvtIds, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v23;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.servantLogicResultList, (int32_t)v23, v24, v25);
  this->fields.funcResult = 1;
  v26 = (System_Collections_Generic_List_T__o *)sub_1B64ABC(System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v26,
    (const MethodInfo_3494230 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v26;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v29;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.funcTargetList, (int32_t)v29, v30, v31);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_1B64ABC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_3365C88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v32;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int32_t)v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v35,
    (const MethodInfo_30E34AC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v35;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int32_t)v35,
    v36,
    v37);
  v38 = (int)StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.skillCutInMessage, v38, v39, v40);
  v41 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v41;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectList, (int32_t)v41, v42, v43);
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
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.afterActionData,
    (int32_t)afterActionData,
    isPreActCheckDead,
    (int32_t)method);
  if ( *p_afterActionData )
    (*p_afterActionData)->fields.isPreAfterActCheckDead = isPreActCheckDead;
}


void __fastcall BattleActionData__AddBuffList(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x0
  ServantStatusBattleListViewItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A005CE & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v7);
    byte_4A005CE = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.buffdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B64814(p_buffdatalist, (int32_t)v10, v11, v12);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
    if ( !p_buffdatalist->klass )
      goto LABEL_11;
  }
  items = buffdatalist->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__;
  ++buffdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1B64ACC(buffdatalist, data);
  size = buffdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      buffdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    buffdatalist->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
  }
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
  const MethodInfo *v13; // x4
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *DispMsgList_k__BackingField; // x0
  ServantStatusBattleListViewItem_o *p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A005E3 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_DisplayMessageData_TypeInfo, ent);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo, v11);
    byte_4A005E3 = 1;
  }
  v12 = (BattleActionData_DisplayMessageData_o *)sub_1B64ABC(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor(v12, ent, parser, preMsg, v13);
  DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._DispMsgList_k__BackingField;
    v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    p_DispMsgList_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B64814(p_DispMsgList_k__BackingField, (int32_t)v19, v20, v21);
    DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)p_DispMsgList_k__BackingField->klass;
    if ( !p_DispMsgList_k__BackingField->klass )
      goto LABEL_10;
  }
  items = DispMsgList_k__BackingField->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
  ++DispMsgList_k__BackingField->fields._version;
  if ( !items )
LABEL_10:
    sub_1B64ACC(DispMsgList_k__BackingField, v14);
  size = DispMsgList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DispMsgList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    DispMsgList_k__BackingField->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v12;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v12, v15, v16);
  }
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
  BattleServantData_o *key; // x21
  System_Action_object__o *v11; // x22
  Il2CppObject *v12; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  v5 = this;
  if ( (byte_4A005C3 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleBuffData_BuffData__TypeInfo, task);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__,
      v6);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      v7);
    sub_1B64870(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__151_0__, v8);
    this = (BattleActionData_o *)sub_1B64870(&BattleActionData___c_TypeInfo, v9);
    byte_4A005C3 = 1;
  }
  if ( !task )
    goto LABEL_12;
  key = task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key;
  this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  }
  v11 = *(System_Action_object__o **)(*(_QWORD *)&this->fields.commandAssistId + 80LL);
  if ( !v11 )
  {
    if ( !*(_DWORD *)&this->fields.funcResult )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
    }
    v12 = **(Il2CppObject ***)&this->fields.commandAssistId;
    v11 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(v11, v12, Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__151_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__151_0 = (struct System_Action_BattleBuffData_BuffData__o *)v11;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__151_0, (int32_t)v11, v14, v15);
  }
  if ( !v5 )
LABEL_12:
    sub_1B64ACC(this, task);
  BattleActionData__AddUpdateIntervalBuffDict(
    v5,
    key,
    (System_Action_BattleBuffData_BuffData__o *)v11,
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
  int endcameraname; // w8
  BattleActionData_o *v7; // x20
  unsigned int v8; // w24
  BattleActionData_c **v9; // x8
  BattleServantData_o *v10; // x21
  BattleBuffData_BuffData_array *UpdateWaitIntervalBuffArray; // x22
  System_Action_object__o *v12; // x23
  const MethodInfo *v13; // x4

  v4 = (Il2CppObject *)this;
  if ( (byte_4A005BE & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    this = (BattleActionData_o *)sub_1B64870(&Method_BattleActionData_UpdateIntervalCurrent__, v5);
    byte_4A005BE = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (BattleActionData_o *)BattleData__getFieldServantList(data, 0, 0LL);
  if ( !this )
    goto LABEL_12;
  endcameraname = (int)this->fields.endcameraname;
  v7 = this;
  if ( endcameraname >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= endcameraname )
        sub_1B64AD4(this, data);
      v9 = &v7->klass + (int)v8;
      v10 = (BattleServantData_o *)v9[4];
      if ( !v10 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v9[4], 0LL);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0LL);
      v12 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(v12, v4, Method_BattleActionData_UpdateIntervalCurrent__, 0LL);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v4,
        v10,
        (System_Action_BattleBuffData_BuffData__o *)v12,
        UpdateWaitIntervalBuffArray,
        v13);
      endcameraname = (int)v7->fields.endcameraname;
      if ( (int)++v8 >= endcameraname )
        return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable[5].method)(
                 v4,
                 v4->klass->vtable[6].methodPtr);
    }
LABEL_12:
    sub_1B64ACC(this, data);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x0
  ServantStatusBattleListViewItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A005D2 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v7);
    byte_4A005D2 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.healdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B64814(p_healdatalist, (int32_t)v10, v11, v12);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
    if ( !p_healdatalist->klass )
      goto LABEL_11;
  }
  items = healdatalist->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_HealData__Add__;
  ++healdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1B64ACC(healdatalist, data);
  size = healdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      healdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    healdatalist->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
  }
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
  bool IsRelatedHpDecrease; // w0
  System_Action_int__o *v10; // x21

  if ( (byte_4A005BC & 1) == 0 )
  {
    sub_1B64870(&System_Action_int__TypeInfo, *(_QWORD *)&funcType);
    sub_1B64870(&Method_BasicHelper_ForEach_int___, v7);
    sub_1B64870(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__133_0__, v8);
    byte_4A005BC = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0LL);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v10 = (System_Action_int__o *)sub_1B64ABC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v10,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__133_0__,
        0LL);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v10,
        (const MethodInfo_2E28224 *)Method_BasicHelper_ForEach_int___);
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
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x19
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A005D7 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__, *(_QWORD *)&index);
    sub_1B64870(&BattleActionData_MoveToSubMember_TypeInfo, v11);
    byte_4A005D7 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = (System_Collections_Generic_List_object__o *)this->fields.moveToSubMemberList;
  v13 = sub_1B64ABC(BattleActionData_MoveToSubMember_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 28) = index;
  *(_DWORD *)(v13 + 32) = uniqueId;
  *(_DWORD *)(v13 + 16) = funcIndex;
  *(_BYTE *)(v13 + 36) = isSucceeded;
  if ( !moveToSubMemberList
    || (items = moveToSubMemberList->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
        ++moveToSubMemberList->fields._version,
        !items) )
  {
    sub_1B64ACC(v14, v15);
  }
  size = moveToSubMemberList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      moveToSubMemberList,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    moveToSubMemberList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), v13, v16, v17);
  }
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
  __int64 v13; // x22
  BattlePerformance_o *v14; // x0
  BattleActionData_array *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  BattlePerformance_o **v18; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  BattleActionData___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__object__o *_9__305_1; // x21
  Il2CppObject *v25; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4A00605 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___, perf);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_BattleActionData___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleActionData___, v6);
    sub_1B64870(&System_Func_BattleActionData__BattleActionData__TypeInfo, v7);
    sub_1B64870(&System_Func_BattleActionData__bool__TypeInfo, v8);
    sub_1B64870(&Method_BattleActionData___c__AddSideEffectAfterAction_b__305_1__, v9);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass305_0__AddSideEffectAfterAction_b__0__, v10);
    sub_1B64870(&BattleActionData___c__DisplayClass305_0_TypeInfo, v11);
    sub_1B64870(&BattleActionData___c_TypeInfo, v12);
    byte_4A00605 = 1;
  }
  v13 = sub_1B64ABC(BattleActionData___c__DisplayClass305_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = perf;
  v18 = (BattlePerformance_o **)(v13 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)perf, v16, v17);
  sideEffectList = this->fields.sideEffectList;
  v20 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_BattleActionData___c__DisplayClass305_0__AddSideEffectAfterAction_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v22 = BattleActionData___c_TypeInfo;
  v23 = v21;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v22 = BattleActionData___c_TypeInfo;
  }
  _9__305_1 = (System_Func_object__object__o *)v22->static_fields->__9__305_1;
  if ( !_9__305_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = BattleActionData___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__305_1 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_BattleActionData__BattleActionData__TypeInfo);
    System_Func_object__object____ctor(
      _9__305_1,
      v25,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__305_1__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__305_1 = (struct System_Func_BattleActionData__BattleActionData__o *)_9__305_1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__305_1, (int32_t)_9__305_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__305_1,
                                                               (const MethodInfo_2E6B688 *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v14 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_object_(
                                 v29,
                                 (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v14 )
    goto LABEL_15;
  v15 = (BattleActionData_array *)v14;
  if ( v14->fields.m_CancellationTokenSource )
  {
    v14 = *v18;
    if ( *v18 )
    {
      BattlePerformance__addActionData(v14, v15, 0LL);
      return;
    }
LABEL_15:
    sub_1B64ACC(v14, v15);
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
  __int64 v12; // x19
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *transformServantlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4A005D9 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__, *(_QWORD *)&index);
    sub_1B64870(&BattleActionData_TransformServant_TypeInfo, v11);
    byte_4A005D9 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v12 = sub_1B64ABC(BattleActionData_TransformServant_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 28) = index;
  *(_DWORD *)(v12 + 32) = uniqueId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 36) = overwriteLimitCount;
  transformServantlist = (System_Collections_Generic_List_object__o *)this->fields.transformServantlist;
  if ( !transformServantlist
    || (items = transformServantlist->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
        ++transformServantlist->fields._version,
        !items) )
  {
    sub_1B64ACC(transformServantlist, v13);
  }
  size = transformServantlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      transformServantlist,
      (Il2CppObject *)v12,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    transformServantlist->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 4), v12, v14, v15);
  }
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
  const MethodInfo_33E706C *v15; // x4
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_object__o *v21; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v22; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v23; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v24; // 0:x1.16

  if ( (byte_4A005BF & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__,
      svtData);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__,
      v9);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__,
      v10);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v11);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1B64870(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_4A005BF = 1;
  }
  v22.fields.key = 0LL;
  v22.fields.value = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)intervalArray, 0LL) )
  {
    v23.fields.key = (Il2CppObject *)&v22;
    v23.fields.value = (Il2CppObject *)svtData;
    System_Collections_Generic_KeyValuePair_object__object____ctor(
      v23,
      (Il2CppObject *)updateAction,
      (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v15);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_12;
    if ( !System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___ContainsKey(
            IntervalBuffDict_k__BackingField,
            v22,
            (const MethodInfo_30E409C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v22.fields.key;
      value = v22.fields.value;
      v21 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v21,
        (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v18 )
        goto LABEL_12;
      v24.fields.key = key;
      v24.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v18,
        v24,
        (Il2CppObject *)v21,
        (const MethodInfo_30E3E7C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v22,
                                                                                                    (const MethodInfo_30E3DE4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_1B64ACC(IntervalBuffDict_k__BackingField, v16);
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
  __int64 v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v18; // x0
  System_Func_object__bool__o *_9__123_0; // x21
  Il2CppObject *v20; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  System_Action_object__o *v25; // x21

  if ( (byte_4A005B7 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_BuffData__TypeInfo, data);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v6);
    sub_1B64870(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v7);
    sub_1B64870(&Method_BattleActionData___c__ExecUnappliedProcess_b__123_0__, v8);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass123_0__ExecUnappliedProcess_b__1__, v9);
    sub_1B64870(&BattleActionData___c__DisplayClass123_0_TypeInfo, v10);
    sub_1B64870(&BattleActionData___c_TypeInfo, v11);
    byte_4A005B7 = 1;
  }
  v12 = sub_1B64ABC(BattleActionData___c__DisplayClass123_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64ACC(v13, v14);
  *(_QWORD *)(v12 + 16) = data;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)data, v15, v16);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v18 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v18 = BattleActionData___c_TypeInfo;
    }
    _9__123_0 = (System_Func_object__bool__o *)v18->static_fields->__9__123_0;
    if ( !_9__123_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleActionData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__123_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__123_0,
        v20,
        Method_BattleActionData___c__ExecUnappliedProcess_b__123_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__123_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__123_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v22, v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__123_0,
                                                           (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v25 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v25,
      (Il2CppObject *)v12,
      Method_BattleActionData___c__DisplayClass123_0__ExecUnappliedProcess_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v24,
      (System_Action_T__o *)v25,
      (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool __fastcall BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleActionData___c_c *v7; // x0
  System_Func_object__bool__o *_9__157_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A005C4 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_BattleActionData_BaseData___, method);
    sub_1B64870(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v3);
    sub_1B64870(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__157_0__, v4);
    sub_1B64870(&BattleActionData___c_TypeInfo, v5);
    byte_4A005C4 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, 0LL) )
    return 0;
  v7 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v7 = BattleActionData___c_TypeInfo;
  }
  _9__157_0 = (System_Func_object__bool__o *)v7->static_fields->__9__157_0;
  if ( !_9__157_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActionData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__157_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__157_0,
      v9,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__157_0__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__157_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__157_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__157_0, (int32_t)_9__157_0, v11, v12);
  }
  return BasicHelper__Any_object__48393208(
           (System_Object_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__157_0,
           (const MethodInfo_2E26BF8 *)Method_BasicHelper_Any_BattleActionData_BaseData___);
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
    sub_1B64ACC(this, 0LL);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0LL);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4A005F4 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, *(_QWORD *)&funcIdx);
    byte_4A005F4 = 1;
  }
  return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
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
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x2
  BattleActionData_DamageData_array *DamageList; // x0
  Il2CppObject *v15; // x1
  BattleActionData_DamageData_array *v16; // x20
  unsigned __int64 v17; // x24
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  BattleActionData_DamageData_o *v21; // x1
  System_Func_object__bool__o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4A005CD & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_BattleActionData_DamageData___, *(_QWORD *)&funcIndex);
    sub_1B64870(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v9);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass173_0__GetDamageArrayDistinctIndex_b__0__, v10);
    sub_1B64870(&BattleActionData___c__DisplayClass173_0_TypeInfo, v11);
    byte_4A005CD = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v13);
  if ( !DamageList )
    goto LABEL_17;
  v16 = DamageList;
  if ( (int)DamageList->max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v18 = sub_1B64ABC(BattleActionData___c__DisplayClass173_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v18, 0LL);
      if ( v17 >= v16->max_length )
        sub_1B64AD4(DamageList, v15);
      if ( !v18 )
        break;
      v21 = v16->m_Items[v17];
      *(_QWORD *)(v18 + 16) = v21;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v21, v19, v20);
      v22 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v18,
        Method_BattleActionData___c__DisplayClass173_0__GetDamageArrayDistinctIndex_b__0__,
        0LL);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_object_(
                                                          (System_Collections_Generic_List_T__o *)v12,
                                                          (System_Func_T__bool__o *)v22,
                                                          (const MethodInfo_2E26B4C *)Method_BasicHelper_Any_BattleActionData_DamageData___);
      if ( ((unsigned __int8)DamageList & 1) == 0 )
      {
        if ( !v12 )
          break;
        v15 = *(Il2CppObject **)(v18 + 16);
        items = v12->fields._items;
        v26 = Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v15,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v15;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v15, v23, v24);
        }
      }
      if ( (__int64)++v17 >= (int)v16->max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B64ACC(DamageList, v15);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                v12,
                                                (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
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
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v10; // x1
  System_Int32_array *v11; // x19
  const MethodInfo *v12; // x1
  il2cpp_array_size_t i; // w22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  char *v16; // x9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A005F3 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__,
      *(_QWORD *)&funcIdx);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v5);
    sub_1B64870(&int___TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__, v8);
    byte_4A005F3 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                  this,
                                                                  *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v11 = (System_Int32_array *)sub_1B64918(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v12)) == 0LL) )
  {
    sub_1B64ACC(damagedatalist, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    damagedatalist,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v14 )
      break;
    if ( !v18.fields._current )
      sub_1B64ACC(v14, v15);
    if ( !v11 )
      sub_1B64ACC(v14, v15);
    if ( i >= v11->max_length )
      sub_1B64AD4(v14, v15);
    v16 = (char *)v11 + 4 * (int)i;
    *((_DWORD *)v16 + 8) = HIDWORD(v18.fields._current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4A005F5 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, *(_QWORD *)&funcIdx);
    byte_4A005F5 = 1;
  }
  return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
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
  __int64 v18; // x22
  System_Collections_Generic_List_object__o *v19; // x23
  BattleActionData___c_c *v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  BattleActionData___c_c **v24; // x21
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  System_Action_object__o *v27; // x24
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x19
  System_Action_object__o *v30; // x20
  System_Collections_Generic_List_object__o *v31; // x19
  System_Comparison_T__o *_9__124_2; // x20
  Il2CppObject *v33; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A005B8 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_HealData__TypeInfo, *(_QWORD *)&funcIndex);
    sub_1B64870(&System_Action_BattleActionData_BuffData__TypeInfo, v5);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v6);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v7);
    sub_1B64870(&System_Comparison_BattleActionData_BaseData__TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v12);
    sub_1B64870(&Method_BattleActionData___c__GetExecOrderArray_b__124_2__, v13);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__0__, v14);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__1__, v15);
    sub_1B64870(&BattleActionData___c__DisplayClass124_0_TypeInfo, v16);
    sub_1B64870(&BattleActionData___c_TypeInfo, v17);
    byte_4A005B8 = 1;
  }
  v18 = sub_1B64ABC(BattleActionData___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = v19;
  v24 = (BattleActionData___c_c **)(v18 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v19, v22, v23);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v25);
  v27 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    BuffList,
    (System_Action_T__o *)v27,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v28);
  v30 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    HealList,
    (System_Action_T__o *)v30,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  v20 = BattleActionData___c_TypeInfo;
  v31 = *(System_Collections_Generic_List_object__o **)(v18 + 16);
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v20 = BattleActionData___c_TypeInfo;
  }
  _9__124_2 = (System_Comparison_T__o *)v20->static_fields->__9__124_2;
  if ( !_9__124_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleActionData___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v20->static_fields->__9;
    _9__124_2 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_BattleActionData_BaseData__TypeInfo);
    System_Comparison_object____ctor(_9__124_2, v33, Method_BattleActionData___c__GetExecOrderArray_b__124_2__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__124_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__124_2;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__124_2, (int32_t)_9__124_2, v35, v36);
  }
  if ( !v31
    || (System_Collections_Generic_List_object___Sort_55252244(
          v31,
          _9__124_2,
          (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v20 = *v24) == 0LL) )
  {
LABEL_13:
    sub_1B64ACC(v20, v21);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)v20,
                                              (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
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
  System_Collections_Generic_List_object__o *v14; // x19
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x0
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x0
  BattleActionData___c_c *v22; // x0
  System_Comparison_T__o *_9__125_0; // x20
  Il2CppObject *v24; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A005B9 & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_BattleActionData_BaseData__TypeInfo, *(_QWORD *)&funcIndex);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v11);
    sub_1B64870(&Method_BattleActionData___c__GetExecOrderArrayEx_b__125_0__, v12);
    sub_1B64870(&BattleActionData___c_TypeInfo, v13);
    byte_4A005B9 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v15);
  if ( !v14 )
    sub_1B64ACC(BuffList, v17);
  System_Collections_Generic_List_object___AddRange(
    v14,
    BuffList,
    (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v18);
  System_Collections_Generic_List_object___AddRange(
    v14,
    HealList,
    (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v20);
  System_Collections_Generic_List_object___AddRange(
    v14,
    DamageList,
    (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v22 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v22 = BattleActionData___c_TypeInfo;
    }
    _9__125_0 = (System_Comparison_T__o *)v22->static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleActionData___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__125_0 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_BattleActionData_BaseData__TypeInfo);
      System_Comparison_object____ctor(_9__125_0, v24, Method_BattleActionData___c__GetExecOrderArrayEx_b__125_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__125_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__125_0, (int32_t)_9__125_0, v26, v27);
    }
    System_Collections_Generic_List_object___Sort_55252244(
      v14,
      _9__125_0,
      (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              v14,
                                              (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
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
  _QWORD *v19; // x19
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  System_Int32_array *v24; // x22
  System_Func_int__bool__o *v25; // x23
  __int64 v26; // x1
  __int64 targetId; // x0
  System_Func_T__TResult__o *v28; // x21
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0

  if ( (byte_4A005B0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_BattleServantData___, bData);
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, v9);
    sub_1B64870(&Method_BasicHelper_ExcludeNull_BattleServantData___, v10);
    sub_1B64870(&Method_BasicHelper_IndexValue_int____75719712, v11);
    sub_1B64870(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__107_0__, v12);
    sub_1B64870(&Method_BattleData_getServantData__, v13);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v14);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v15);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v16);
    sub_1B64870(&System_Func_int__BattleServantData__TypeInfo, v17);
    sub_1B64870(&int___TypeInfo, v18);
    byte_4A005B0 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, 0LL) )
  {
    v19 = Method_System_Array_Empty_BattleServantData___;
    v20 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v20 )
    {
      sub_1BB67A8(Method_System_Array_Empty_BattleServantData___);
      v20 = v19[7];
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1BB674C(v21);
    if ( !*(_DWORD *)(v21 + 224) )
      j_il2cpp_runtime_class_init_0(v21);
    v22 = *(_QWORD *)(v19[7] + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BB674C(v22);
    return **(BattleServantData_array ***)(v22 + 184);
  }
  else
  {
    if ( isMainOnly )
    {
      v24 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
      v25 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v25,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__107_0__,
        0LL);
      if ( BasicHelper__Any_int__48392396(
             targetIds,
             (System_Func_T__bool__o *)v25,
             (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888) )
      {
        targetId = (unsigned int)this->fields.targetId;
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_2E2A430 *)Method_BasicHelper_IndexValue_int____75719712);
      }
      if ( !v24 )
        sub_1B64ACC(targetId, v26);
      if ( !v24->max_length )
        sub_1B64AD4(targetId, v26);
      targetIds = v24;
      v24->m_Items[1] = targetId;
    }
    v28 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(v28, (Il2CppObject *)bData, Method_BattleData_getServantData__, 0LL);
    v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                           (System_Func_TSource__TResult__o *)v28,
                                                           (const MethodInfo_2E692A8 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v30 = BasicHelper__ExcludeNull_object_(
            v29,
            (const MethodInfo_2E274A0 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                        (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
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
  __int64 v24; // x21
  System_Collections_Generic_HashSet_int__o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  System_Action_object__o *v32; // x23
  const MethodInfo *v33; // x2
  BattleActionData_BuffData_array *BuffList; // x0
  BattleActionData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  System_Func_object__bool__o *_9__284_1; // x23
  Il2CppObject *v38; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_T__o *v42; // x22
  System_Action_object__o *v43; // x23
  const MethodInfo *v44; // x2
  BattleActionData_HealData_array *HealList; // x0
  BattleActionData___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_Func_object__bool__o *_9__284_3; // x20
  Il2CppObject *v49; // x22
  struct BattleActionData___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_IEnumerable_T__o *v53; // x19
  System_Action_object__o *v54; // x20

  if ( (byte_4A005F9 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_DamageData__TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&System_Action_BattleActionData_HealData__TypeInfo, v5);
    sub_1B64870(&System_Action_BattleActionData_BuffData__TypeInfo, v6);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v7);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_DamageData___, v8);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v9);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v11);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___, v12);
    sub_1B64870(&System_Func_BattleActionData_HealData__bool__TypeInfo, v13);
    sub_1B64870(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v14);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1B64870(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1B64870(&Method_BattleActionData___c__GetFuncTargetIds_b__284_1__, v17);
    sub_1B64870(&Method_BattleActionData___c__GetFuncTargetIds_b__284_3__, v18);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__0__, v19);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__2__, v20);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__4__, v21);
    sub_1B64870(&BattleActionData___c__DisplayClass284_0_TypeInfo, v22);
    sub_1B64870(&BattleActionData___c_TypeInfo, v23);
    byte_4A005F9 = 1;
  }
  v24 = sub_1B64ABC(BattleActionData___c__DisplayClass284_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_1B64ABC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_3365C88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v24 )
    sub_1B64ACC(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v30);
  v32 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_DamageData__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v24,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    DamageList,
    (System_Action_T__o *)v32,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = BattleActionData__getBuffList(this, index, v33);
  v35 = BattleActionData___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v35 = BattleActionData___c_TypeInfo;
  }
  _9__284_1 = (System_Func_object__bool__o *)v35->static_fields->__9__284_1;
  if ( !_9__284_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleActionData___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__284_1 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__284_1, v38, Method_BattleActionData___c__GetFuncTargetIds_b__284_1__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__284_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__284_1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__284_1, (int32_t)_9__284_1, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v36,
                                                         (System_Func_TSource__bool__o *)_9__284_1,
                                                         (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v43 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)v24,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__2__,
    0LL);
  BasicHelper__ForEach_object_(
    v42,
    (System_Action_T__o *)v43,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v44);
  v46 = BattleActionData___c_TypeInfo;
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v46 = BattleActionData___c_TypeInfo;
  }
  _9__284_3 = (System_Func_object__bool__o *)v46->static_fields->__9__284_3;
  if ( !_9__284_3 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = BattleActionData___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__284_3 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData_HealData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__284_3, v49, Method_BattleActionData___c__GetFuncTargetIds_b__284_3__, 0LL);
    v50 = BattleActionData___c_TypeInfo->static_fields;
    v50->__9__284_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__284_3;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v50->__9__284_3, (int32_t)_9__284_3, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v47,
                                                         (System_Func_TSource__bool__o *)_9__284_3,
                                                         (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v54 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v54,
    (Il2CppObject *)v24,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__4__,
    0LL);
  BasicHelper__ForEach_object_(
    v53,
    (System_Action_T__o *)v54,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v24 + 16),
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v14; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListFunctionIndex; // x21
  System_Func_int__bool__o *v20; // x0
  __int64 *v21; // x8
  System_Func_TSource__bool__o *v23; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4A005FC & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&effectTiming);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v8);
    sub_1B64870(&Method_System_Nullable_int__get_HasValue__, v9);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__, v10);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__, v11);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__, v12);
    sub_1B64870(&BattleActionData___c__DisplayClass287_0_TypeInfo, v13);
    byte_4A005FC = 1;
  }
  v14 = sub_1B64ABC(BattleActionData___c__DisplayClass287_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0LL);
  if ( !v14 )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B64ACC)(FuncIndexForSplitFuncSequence, v18);
  *(System_Nullable_int__o *)(v14 + 16) = FuncIndexForSplitFuncSequence;
  if ( !FuncIndexForSplitFuncSequence.fields.hasValue )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v18);
  if ( effectTiming == 2 )
  {
    v20 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    v21 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v20 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    v21 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v20 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
  v21 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v23 = (System_Func_TSource__bool__o *)v20;
  System_Func_int__bool____ctor(v20, (Il2CppObject *)v14, *v21, 0LL);
  v24 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v23,
          (const MethodInfo_2E790A4 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v14; // x23
  System_Collections_Generic_Dictionary_int__int__o *v15; // x24
  System_Collections_Generic_Dictionary_int__int__o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_Dictionary_int__int__o **v20; // x22
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Action_object__o *v23; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4A005FE & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData__TypeInfo, isAtkFirst);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v8);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v9);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData__ForEach__, v11);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass292_0__GetMaxSideEffectCountByTarget_b__0__, v12);
    sub_1B64870(&BattleActionData___c__DisplayClass292_0_TypeInfo, v13);
    byte_4A005FE = 1;
  }
  v14 = sub_1B64ABC(BattleActionData___c__DisplayClass292_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = v15;
  v20 = (System_Collections_Generic_Dictionary_int__int__o **)(v14 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v15, v18, v19);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(
      this,
      (System_Collections_Generic_Dictionary_int__int__o **)(v14 + 16),
      v21);
    sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList;
    v23 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(
      v23,
      (Il2CppObject *)v14,
      Method_BattleActionData___c__DisplayClass292_0__GetMaxSideEffectCountByTarget_b__0__,
      0LL);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_object___ForEach(
      sideEffectList,
      (System_Action_T__o *)v23,
      (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v16 = *v20;
  if ( !*v20 )
LABEL_13:
    sub_1B64ACC(v16, v17);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v16,
         (const MethodInfo_311CE44 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v16 = *v20;
    if ( *v20 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v16,
                 (const MethodInfo_311CFA4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
    goto LABEL_13;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget_41933044(
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
  __int64 v12; // x22
  System_Collections_Generic_Dictionary_int__int__o *v13; // x23
  System_Collections_Generic_Dictionary_int__int__o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_int__int__o **v18; // x21
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  System_Action_object__o *v21; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4A00600 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData__TypeInfo, *(_QWORD *)&targetType);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData___, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v8);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass294_0__GetMaxSideEffectCountByTarget_b__0__, v10);
    sub_1B64870(&BattleActionData___c__DisplayClass294_0_TypeInfo, v11);
    byte_4A00600 = 1;
  }
  v12 = sub_1B64ABC(BattleActionData___c__DisplayClass294_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = v13;
  v18 = (System_Collections_Generic_Dictionary_int__int__o **)(v12 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v13, v16, v17);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v19);
  v21 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v12,
    Method_BattleActionData___c__DisplayClass294_0__GetMaxSideEffectCountByTarget_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    SideEffectList,
    (System_Action_T__o *)v21,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData___);
  v14 = *(System_Collections_Generic_Dictionary_int__int__o **)(v12 + 16);
  if ( !v14 )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v14,
         (const MethodInfo_311CE44 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v14 = *v18;
    if ( *v18 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v14,
                 (const MethodInfo_311CFA4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
LABEL_9:
    sub_1B64ACC(v14, v15);
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

  if ( (byte_4A005FD & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_IndexValue_int___, *(_QWORD *)&effectIndex);
    byte_4A005FD = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0LL,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__48407476(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_2E2A3B4 *)Method_BasicHelper_IndexValue_int___);
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
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_moveToSubMemberList; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A005D8 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo, v3);
    byte_4A005D8 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = (ServantStatusBattleListViewItem_o *)&this->fields.moveToSubMemberList;
    v5 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    p_moveToSubMemberList->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B64814(p_moveToSubMemberList, (int32_t)v5, v6, v7);
  }
}


bool __fastcall BattleActionData__IsExecInActionData(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 8;
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
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A00604 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, *(_QWORD *)&type);
    byte_4A00604 = 1;
  }
  v5 = sub_1B64ABC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, v6);
  if ( !v5 )
    sub_1B64ACC(v7, v8);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)&this->fields.actorId;
  BattleActionData__addSideEffectActionData(this, (BattleActionData_o *)v5, type, v9);
  return (BattleActionData_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData_41934792(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_1B64ACC(0LL, v6);
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
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x21
  BattleActionData___c_c *v19; // x0
  System_Func_object__bool__o *_9__122_0; // x20
  Il2CppObject *v21; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x20
  System_Action_object__o *v27; // x21

  if ( (byte_4A005B6 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_BuffData__TypeInfo, data);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v7);
    sub_1B64870(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v8);
    sub_1B64870(&Method_BattleActionData___c__PreActionProcess_b__122_0__, v9);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass122_0__PreActionProcess_b__1__, v10);
    sub_1B64870(&BattleActionData___c__DisplayClass122_0_TypeInfo, v11);
    sub_1B64870(&BattleActionData___c_TypeInfo, v12);
    byte_4A005B6 = 1;
  }
  v13 = sub_1B64ABC(BattleActionData___c__DisplayClass122_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64ACC(v14, v15);
  *(_QWORD *)(v13 + 16) = data;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)data, v16, v17);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist && !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v19 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v19 = BattleActionData___c_TypeInfo;
    }
    _9__122_0 = (System_Func_object__bool__o *)v19->static_fields->__9__122_0;
    if ( !_9__122_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattleActionData___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__122_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__122_0, v21, Method_BattleActionData___c__PreActionProcess_b__122_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__122_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__122_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__122_0, (int32_t)_9__122_0, v23, v24);
    }
    v25 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (System_Func_TSource__bool__o *)_9__122_0,
            (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_object_(
                                                           v25,
                                                           (const MethodInfo_2E663CC *)Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    v27 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)v13,
      Method_BattleActionData___c__DisplayClass122_0__PreActionProcess_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v26,
      (System_Action_T__o *)v27,
      (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void __fastcall BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x19
  BattleActionData___c_c *v7; // x0
  System_Action_object__o *_9__181_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A005D0 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_BuffData__TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v3);
    sub_1B64870(&Method_BattleActionData___c__ResetAllCheckDead_b__181_0__, v4);
    sub_1B64870(&BattleActionData___c_TypeInfo, v5);
    byte_4A005D0 = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v7 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v7 = BattleActionData___c_TypeInfo;
    }
    _9__181_0 = (System_Action_object__o *)v7->static_fields->__9__181_0;
    if ( !_9__181_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleActionData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__181_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(_9__181_0, v9, Method_BattleActionData___c__ResetAllCheckDead_b__181_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__181_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__181_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__181_0, (int32_t)_9__181_0, v11, v12);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__181_0,
      (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
}


void __fastcall BattleActionData__SetAfterChangeField(
        BattleActionData_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        DataVals_o *baseVals,
        BattleFieldEnvironmentData_o *fieldEnvData,
        AddBgmArgument_o *addBgmArg,
        const MethodInfo *method)
{
  BattleActionData_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x23
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  v10 = this;
  if ( (byte_4A005E4 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_AfterChangeField_TypeInfo, fieldChange);
    this = (BattleActionData_o *)sub_1B64870(&BattleActionData_AfterChangeTakeOverField_TypeInfo, v11);
    byte_4A005E4 = 1;
  }
  if ( !baseVals )
    goto LABEL_10;
  if ( DataVals__isParam(baseVals, 106, 0LL) )
  {
    v12 = sub_1B64ABC(BattleActionData_AfterChangeTakeOverField_TypeInfo);
    BattleActionData_AfterChangeTakeOverField___ctor(
      (BattleActionData_AfterChangeTakeOverField_o *)v12,
      fieldChange,
      fieldEnvData,
      v13);
  }
  else
  {
    v12 = sub_1B64ABC(BattleActionData_AfterChangeField_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    *(_QWORD *)(v12 + 32) = fieldChange;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)fieldChange, v16, v17);
  }
  if ( !v10
    || (v10->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v12,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v10->fields._ChangeField_k__BackingField, v12, v14, v15),
        (this = (BattleActionData_o *)v10->fields._ChangeField_k__BackingField) == 0LL) )
  {
LABEL_10:
    sub_1B64ACC(this, fieldChange);
  }
  this->fields.pttargetIds = (struct System_Int32_array *)addBgmArg;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.pttargetIds, (int32_t)addBgmArg, v18, v19);
}


void __fastcall BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Func_int__bool__o *v8; // x21
  int32_t targetId; // w0

  if ( (byte_4A005AF & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, targetIds);
    sub_1B64870(&Method_BasicHelper_IndexValue_int____75719712, v5);
    sub_1B64870(&Method_BattleActionData__SetFirstAtkMainTargetId_b__106_0__, v6);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v7);
    byte_4A005AF = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v8 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__106_0__,
      0LL);
    if ( BasicHelper__Any_int__48392396(
           targetIds,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_2E2A430 *)Method_BasicHelper_IndexValue_int____75719712);
    }
    this->fields._FirstAtkMainTargetId_k__BackingField = targetId;
  }
}


void __fastcall BattleActionData__SetFuncDamageData(
        BattleActionData_o *this,
        BattleActionData_DamageData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x5

  if ( !vals || !data )
    sub_1B64ACC(this, data);
  BattleActionData_DamageData__SetEffectFlipProc(data, vals->fields.funcEnt, (const MethodInfo *)vals);
  BattleActionData__setDamageData(this, data, vals, 0, 0, v7);
}


void __fastcall BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  BattleActionData___c_c *v16; // x0
  System_Func_object__int__o *_9__126_0; // x21
  Il2CppObject *v18; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x0
  __int64 v23; // x1
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  BattleActionData___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_T__o *v27; // x19
  System_Action_object__o *_9__126_2; // x20
  Il2CppObject *v29; // x21
  struct BattleActionData___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A005BA & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_BaseData__TypeInfo, method);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___, v4);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___, v5);
    sub_1B64870(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v6);
    sub_1B64870(&System_Func_BattleActionData_BaseData__int__TypeInfo, v7);
    sub_1B64870(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_0__, v8);
    sub_1B64870(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_2__, v9);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass126_0__SetFuncSideEffectTrigger_b__1__, v10);
    sub_1B64870(&BattleActionData___c__DisplayClass126_0_TypeInfo, v11);
    sub_1B64870(&BattleActionData___c_TypeInfo, v12);
    byte_4A005BA = 1;
  }
  v13 = sub_1B64ABC(BattleActionData___c__DisplayClass126_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v14);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, 0LL) )
  {
    v16 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v16 = BattleActionData___c_TypeInfo;
    }
    _9__126_0 = (System_Func_object__int__o *)v16->static_fields->__9__126_0;
    if ( !_9__126_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleActionData___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__126_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_BattleActionData_BaseData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__126_0,
        v18,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__126_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__126_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__126_0, (int32_t)_9__126_0, v20, v21);
    }
    v22 = System_Linq_Enumerable__Max_object_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__126_0,
            (const MethodInfo_2E64050 *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v13 )
      sub_1B64ACC(v22, v23);
    *(_DWORD *)(v13 + 16) = v22;
    v24 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)v13,
      Method_BattleActionData___c__DisplayClass126_0__SetFuncSideEffectTrigger_b__1__,
      0LL);
    v25 = System_Linq_Enumerable__Where_object_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v26 = BattleActionData___c_TypeInfo;
    v27 = (System_Collections_Generic_IEnumerable_T__o *)v25;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v26 = BattleActionData___c_TypeInfo;
    }
    _9__126_2 = (System_Action_object__o *)v26->static_fields->__9__126_2;
    if ( !_9__126_2 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = BattleActionData___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__126_2 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(
        _9__126_2,
        v29,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_2__,
        0LL);
      v30 = BattleActionData___c_TypeInfo->static_fields;
      v30->__9__126_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__126_2;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v30->__9__126_2, (int32_t)_9__126_2, v31, v32);
    }
    BasicHelper__ForEach_object_(
      v27,
      (System_Action_T__o *)_9__126_2,
      (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  __int64 v16; // x21
  _BOOL8 isEnemyID; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x22
  System_Func_T__TResult__o *v20; // x23
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  System_Func_object__bool__o *v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x20
  BattleActionData___c_c *v26; // x0
  System_Func_object__bool__o *_9__138_1; // x21
  Il2CppObject *v28; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A005BD & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_BattleServantData____75717736, data);
    sub_1B64870(&Method_BasicHelper_ExcludeNull_BattleServantData___, v5);
    sub_1B64870(&Method_BattleData_getServantData__, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_1B64870(&System_Func_int__BattleServantData__TypeInfo, v10);
    sub_1B64870(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1B64870(&Method_BattleActionData___c__SetFuncTargetAllDead_b__138_1__, v12);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass138_0__SetFuncTargetAllDead_b__0__, v13);
    sub_1B64870(&BattleActionData___c__DisplayClass138_0_TypeInfo, v14);
    sub_1B64870(&BattleActionData___c_TypeInfo, v15);
    byte_4A005BD = 1;
  }
  v16 = sub_1B64ABC(BattleActionData___c__DisplayClass138_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0LL), !v16) )
    sub_1B64ACC(isEnemyID, v18);
  *(_BYTE *)(v16 + 16) = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v20 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(v20, (Il2CppObject *)data, Method_BattleData_getServantData__, 0LL);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v20,
                                                         (const MethodInfo_2E692A8 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v22 = BasicHelper__ExcludeNull_object_(
          v21,
          (const MethodInfo_2E274A0 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v23 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_BattleActionData___c__DisplayClass138_0__SetFuncTargetAllDead_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v24,
          (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v25, 0LL) )
  {
    v26 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v26 = BattleActionData___c_TypeInfo;
    }
    _9__138_1 = (System_Func_object__bool__o *)v26->static_fields->__9__138_1;
    if ( !_9__138_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = BattleActionData___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__138_1 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__138_1,
        v28,
        Method_BattleActionData___c__SetFuncTargetAllDead_b__138_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__138_1 = (struct System_Func_BattleServantData__bool__o *)_9__138_1;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__138_1, (int32_t)_9__138_1, v30, v31);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_object__48393208(
                                                           v25,
                                                           (System_Func_T__bool__o *)_9__138_1,
                                                           (const MethodInfo_2E26BF8 *)Method_BasicHelper_Any_BattleServantData____75717736);
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
  Il2CppObject *v11; // x24
  struct BattleActionData_GimmickData_o **p_gimmickData; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleActionData_GimmickData_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A005E2 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_GimmickData_TypeInfo, indexArray);
    byte_4A005E2 = 1;
  }
  v11 = (Il2CppObject *)sub_1B64ABC(BattleActionData_GimmickData_TypeInfo);
  System_Object___ctor(v11, 0LL);
  this->fields.gimmickData = (struct BattleActionData_GimmickData_o *)v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_gimmickData, (int32_t)v11, v13, v14);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v18->fields.indexArray = indexArray;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v18->fields.indexArray, (int32_t)indexArray, v16, v17);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v18->fields.startVoiceIdArray = startArray,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v18->fields.startVoiceIdArray, (int32_t)startArray, v19, v20),
        (v18 = *p_gimmickData) == 0LL)
    || (v18->fields.resultVoiceIdArray = resultArray,
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&v18->fields.resultVoiceIdArray,
          (int32_t)resultArray,
          v21,
          v22),
        (v18 = *p_gimmickData) == 0LL) )
  {
LABEL_8:
    sub_1B64ACC(v18, v15);
  }
  v18->fields.animationTypes = types;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v18->fields.animationTypes, (int32_t)types, v23, v24);
}


void __fastcall BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  BattleActionData___c_c *v9; // x0
  System_Action_object__o *_9__127_0; // x20
  Il2CppObject *v11; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A005BB & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_BaseData__TypeInfo, method);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v4);
    sub_1B64870(&Method_BattleActionData___c__SetPopupOnce_b__127_0__, v5);
    sub_1B64870(&BattleActionData___c_TypeInfo, v6);
    byte_4A005BB = 1;
  }
  ExecOrderArray = BattleActionData__GetExecOrderArrayEx(this, -1, 0, v2);
  if ( ExecOrderArray )
  {
    v8 = (System_Collections_Generic_IEnumerable_T__o *)ExecOrderArray;
    v9 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v9 = BattleActionData___c_TypeInfo;
    }
    _9__127_0 = (System_Action_object__o *)v9->static_fields->__9__127_0;
    if ( !_9__127_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattleActionData___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__127_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(_9__127_0, v11, Method_BattleActionData___c__SetPopupOnce_b__127_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__127_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__127_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__127_0, (int32_t)_9__127_0, v13, v14);
    }
    BasicHelper__ForEach_object_(
      v8,
      (System_Action_T__o *)_9__127_0,
      (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  int32_t v3; // w3

  this->fields._ShiftGauge_k__BackingField = shiftGauge;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ShiftGauge_k__BackingField,
    (int32_t)shiftGauge,
    (int32_t)method,
    v3);
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
  __int64 v15; // x21
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_int__o *v20; // x22
  System_Collections_Generic_List_int__o **v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x22
  __int64 v25; // x1
  int32_t current; // w20
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+0h] [xbp-80h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A005FF & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, dicTarget);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__GetEnumerator__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass293_0__SetSideEffectCountByTarget_b__0__, v13);
    sub_1B64870(&BattleActionData___c__DisplayClass293_0_TypeInfo, v14);
    byte_4A005FF = 1;
  }
  memset(&v30, 0, sizeof(v30));
  value = 0;
  v15 = sub_1B64ABC(BattleActionData___c__DisplayClass293_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v15 + 24) = v20;
  v21 = (System_Collections_Generic_List_int__o **)(v15 + 24);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)v20, v22, v23);
  v24 = sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v24,
    (Il2CppObject *)v15,
    Method_BattleActionData___c__DisplayClass293_0__SetSideEffectCountByTarget_b__0__,
    0LL);
  if ( !v24
    || ((*(void (__fastcall **)(_QWORD, _QWORD))(v24 + 24))(*(_QWORD *)(v24 + 64), *(_QWORD *)(v24 + 40)),
        (v16 = *v21) == 0LL) )
  {
LABEL_14:
    sub_1B64ACC(v16, v17);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v16,
    (const MethodInfo_3492D2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v30 = v28;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_32282C0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_1B64ACC(0LL, v25);
    current = v30.fields._current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v30.fields._current,
      &value,
      (const MethodInfo_311E828 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_1B64ACC(0LL, v27);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_32282BC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActionData__SetState(BattleActionData_o *this, int32_t s, const MethodInfo *method)
{
  this->fields.state = s;
}


void __fastcall BattleActionData__SetTreasureDvcAfterChangeBgm(
        BattleActionData_o *this,
        BattleBuffData_ChangeBgmData_o *changeBgm,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A005E5 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo, changeBgm);
    byte_4A005E5 = 1;
  }
  v5 = sub_1B64ABC(BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_QWORD *)(v5 + 32) = changeBgm;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)changeBgm, v6, v7);
  this->fields._TdAfterChangeBgm_k__BackingField = (struct BattleActionData_TreasureDvcAfterChangeBgm_o *)v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField, v5, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__SetTypeEnemyCutIn(
        BattleActionData_o *this,
        int32_t effectType,
        const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4A005EE & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, *(_QWORD *)&effectType);
    byte_4A005EE = 1;
  }
  this->fields.state = 4;
  if ( effectType == 2 )
  {
    v5 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v5 = BattleActionData_TypeInfo;
    }
    v6 = 44LL;
  }
  else
  {
    if ( effectType != 1 )
      return;
    v5 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v5 = BattleActionData_TypeInfo;
    }
    v6 = 40LL;
  }
  this->fields.type = *(int32_t *)((char *)&v5->static_fields->TYPE_DEAD + v6);
}


BattleActionData_o *__fastcall BattleActionData__SetWaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *cond,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = cond;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaitCond_k__BackingField,
    (int32_t)cond,
    (int32_t)method,
    v3);
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
  int32_t MaxSideEffectCountByTarget_41933044; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_41933044 = BattleActionData__GetMaxSideEffectCountByTarget_41933044(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_41933044 >= 1 )
    *interval = totalTime / (float)(MaxSideEffectCountByTarget_41933044 + existTriggerFunc);
  return MaxSideEffectCountByTarget_41933044 > 0;
}


void __fastcall BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_transformServantlist; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A005DA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo, v3);
    byte_4A005DA = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = (ServantStatusBattleListViewItem_o *)&this->fields.transformServantlist;
    v5 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    p_transformServantlist->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B64814(p_transformServantlist, (int32_t)v5, v6, v7);
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
  __int64 v18; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  __int64 v20; // x1
  Il2CppObject *Master_object; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Func_object__bool__o **v24; // x20
  System_Action_T__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  System_Func_object__bool__o *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  __int128 v31; // [xsp+0h] [xbp-90h] BYREF
  __int128 v32; // [xsp+10h] [xbp-80h]
  __int128 v33; // [xsp+20h] [xbp-70h]

  if ( (byte_4A005C2 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, *(_QWORD *)&targetType);
    sub_1B64870(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v8);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v9);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v10);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v11);
    sub_1B64870(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v13);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v14);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v15);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass150_0__UpdateDirectIntervalBuffData_b__0__, v16);
    sub_1B64870(&BattleActionData___c__DisplayClass150_0_TypeInfo, v17);
    byte_4A005C2 = 1;
  }
  v32 = 0u;
  v33 = 0u;
  v31 = 0u;
  v18 = sub_1B64ABC(BattleActionData___c__DisplayClass150_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_16;
  *(_DWORD *)(v18 + 24) = targetType;
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
         0LL) )
  {
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BuffMaster___);
  *(_QWORD *)(v18 + 16) = Master_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)Master_object, v22, v23);
  IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_16:
    sub_1B64ACC(IntervalBuffDict_k__BackingField, v20);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
    IntervalBuffDict_k__BackingField,
    (const MethodInfo_30E4308 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  v24 = (System_Func_object__bool__o **)(v18 + 32);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
            (const MethodInfo_326052C *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v25 = (System_Action_T__o *)*((_QWORD *)&v32 + 1);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33, 0LL) )
    {
      v27 = *v24;
      if ( !*v24 )
      {
        v27 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v18,
          Method_BattleActionData___c__DisplayClass150_0__UpdateDirectIntervalBuffData_b__0__,
          0LL);
        *v24 = v27;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)v27, v28, v29);
      }
      v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v26,
                                                             (System_Func_TSource__bool__o *)v27,
                                                             (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_object_(
        v30,
        v25,
        (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
    (const MethodInfo_3260660 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void __fastcall BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x20
  BattleActionData___c_c *v10; // x0
  System_Action_object__o *_9__158_0; // x21
  Il2CppObject *v12; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *healdatalist; // x19
  BattleActionData___c_c *v17; // x0
  System_Action_object__o *_9__158_1; // x20
  Il2CppObject *v19; // x21
  struct BattleActionData___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A005C5 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionData_HealData__TypeInfo, method);
    sub_1B64870(&System_Action_BattleActionData_BuffData__TypeInfo, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v5);
    sub_1B64870(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_0__, v6);
    sub_1B64870(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_1__, v7);
    sub_1B64870(&BattleActionData___c_TypeInfo, v8);
    byte_4A005C5 = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v10 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v10 = BattleActionData___c_TypeInfo;
    }
    _9__158_0 = (System_Action_object__o *)v10->static_fields->__9__158_0;
    if ( !_9__158_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleActionData___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__158_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__158_0,
        v12,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__158_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__158_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__158_0, (int32_t)_9__158_0, v14, v15);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__158_0,
      (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v17 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v17 = BattleActionData___c_TypeInfo;
    }
    _9__158_1 = (System_Action_object__o *)v17->static_fields->__9__158_1;
    if ( !_9__158_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleActionData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__158_1 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        _9__158_1,
        v19,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_1__,
        0LL);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__158_1 = (struct System_Action_BattleActionData_HealData__o *)_9__158_1;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v20->__9__158_1, (int32_t)_9__158_1, v21, v22);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__158_1,
      (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void __fastcall BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  BattleActionData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *_9__148_0; // x20
  Il2CppObject *v10; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A005C0 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleServantData__TypeInfo, method);
    sub_1B64870(&Method_BasicHelper_ForEach_BattleServantData___, v3);
    sub_1B64870(&Method_BattleActionData___c__UpdateIntervalBuff_b__148_0__, v4);
    sub_1B64870(&BattleActionData___c_TypeInfo, v5);
    byte_4A005C0 = 1;
  }
  v6 = ((__int64 (__fastcall *)(BattleActionData_o *, Il2CppMethodPointer))this->klass->vtable._7_UpdateIntervalBuffData.method)(
         this,
         this->klass->vtable._8_FixDisplayWaitingIntervalBuff.methodPtr);
  v7 = BattleActionData___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)v6;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v7 = BattleActionData___c_TypeInfo;
  }
  _9__148_0 = (System_Action_object__o *)v7->static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActionData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__148_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__148_0, v10, Method_BattleActionData___c__UpdateIntervalBuff_b__148_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = (struct System_Action_BattleServantData__o *)_9__148_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__148_0, (int32_t)_9__148_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)_9__148_0,
    (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *__fastcall BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_HashSet_T__o *v15; // x20
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_List_object__o *v18; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x22
  __int128 v23[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v24; // [xsp+30h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+40h] [xbp-60h]
  __int128 v26; // [xsp+50h] [xbp-50h]

  if ( (byte_4A005C1 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__,
      method);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v3);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v4);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v6);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v9);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v10);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__,
      v11);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v12);
    sub_1B64870(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v13);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v14);
    byte_4A005C1 = 1;
  }
  *(_OWORD *)action = 0u;
  v26 = 0u;
  v24 = 0u;
  v15 = (System_Collections_Generic_HashSet_T__o *)sub_1B64ABC(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v15,
    (const MethodInfo_336C0AC *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          0LL) )
  {
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v23,
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_30E4308 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    v24 = v23[0];
    *(_OWORD *)action = v23[1];
    v26 = v23[2];
    v18 = 0LL;
    while ( 1 )
    {
      v19 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v24,
              (const MethodInfo_326052C *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v19 )
        break;
      v21 = (Il2CppObject *)action[0];
      if ( (_QWORD)v26 )
        v18 = (System_Collections_Generic_List_object__o *)v26;
      if ( (_QWORD)v26 )
      {
        if ( !v18 )
          sub_1B64ACC(v19, v20);
        System_Collections_Generic_List_object___ForEach(
          v18,
          action[1],
          (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      }
      if ( v21 )
      {
        if ( !v15 )
          sub_1B64ACC(v19, v20);
        System_Collections_Generic_HashSet_object___Add(
          v15,
          v21,
          (const MethodInfo_336D290 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v24,
      (const MethodInfo_3260660 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_20:
      sub_1B64ACC(IntervalBuffDict_k__BackingField, v16);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_30E4030 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v15;
}


void __fastcall BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B64ACC(this, 0LL);
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
void __fastcall BattleActionData___AddHpDecreaseFuncTargets_b__133_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x0

  if ( (byte_4A00614 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_4A00614 = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_1B64ACC(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


bool __fastcall BattleActionData___GetFuncSideEffectTargetServants_b__107_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


bool __fastcall BattleActionData___SetFirstAtkMainTargetId_b__106_0(
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
  System_Collections_Generic_List_object__o *damagedatalist; // x21
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4A005F6 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___, addData);
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___, v5);
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_HealData___, v6);
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___, v7);
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___, v8);
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___, v9);
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___, v10);
    sub_1B64870(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__, v12);
    byte_4A005F6 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                    this,
                                                                    (const MethodInfo *)addData);
    v15 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v14);
    if ( !damagedatalist )
      sub_1B64ACC(v15, v16);
    System_Collections_Generic_List_object___AddRange(
      damagedatalist,
      v15,
      (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_2E2BEB8 *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    this->fields.redrawCommandCard |= addData->fields.redrawCommandCard;
    BattleActionData__addReflectLogicResultServantIds(this, addData->fields.servantLogicResultList, v17);
    this->fields.funcResult = addData->fields.funcResult;
    if ( addData->fields.isAllAttack )
      this->fields.isAllAttack = addData->fields.isAllAttack;
  }
  else
  {
    this->fields.funcResult = 0;
  }
}


void __fastcall BattleActionData__addBattleData___Il2CppFullySharedGenericType_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_2E2BF60 *method)
{
  System_Collections_Generic_List_T__o *v7; // x0
  Il2CppClass *_0_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_T__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_1BB67A8(method);
    if ( !addDataList )
      return;
  }
  v7 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1BB674C(_0_System_Collections_Generic_List_T);
    v9 = (System_Collections_Generic_List_T__o *)sub_1B64ABC(_0_System_Collections_Generic_List_T);
    method->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
    *dataList = v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)dataList, (int32_t)v9, v10, v11);
    v7 = *dataList;
    if ( !*dataList )
      sub_1B64ACC(0LL, v12);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_T__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange->methodPointer)(
    v7,
    addDataList);
}


void __fastcall BattleActionData__addBattleData_object_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_2E2BEB8 *method)
{
  System_Collections_Generic_List_T__o *v7; // x0
  Il2CppClass *_0_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_1BB67A8(method);
    if ( !addDataList )
      return;
  }
  v7 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1BB674C(_0_System_Collections_Generic_List_T);
    v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(_0_System_Collections_Generic_List_T);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_34AF17C *)method->rgctx_data->_2_System_Collections_Generic_List_T___ctor);
    *dataList = (System_Collections_Generic_List_T__o *)v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)dataList, (int32_t)v9, v10, v11);
    v7 = *dataList;
    if ( !*dataList )
      sub_1B64ACC(0LL, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v7,
    (System_Collections_Generic_IEnumerable_T__o *)addDataList,
    (const MethodInfo_34AFBBC *)method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange);
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
  BattleActionData_SideEffectData_o *v14; // x21
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleActionData_SideEffectData_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w8

  if ( (byte_4A005CB & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__, sideEffectList);
    sub_1B64870(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__, v10);
    this = (BattleActionData_o *)sub_1B64870(&BattleActionData_SideEffectData_TypeInfo, v11);
    byte_4A005CB = 1;
  }
  if ( !actList )
    goto LABEL_13;
  if ( actList->fields._size < 1 )
    return;
  if ( !damage
    || (targetId = damage->fields.targetId,
        v13 = (BuffList_ACTION_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                         (System_Collections_Generic_List_T__o *)actList,
                                         (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__),
        v14 = (BattleActionData_SideEffectData_o *)sub_1B64ABC(BattleActionData_SideEffectData_TypeInfo),
        BattleActionData_SideEffectData___ctor(v14, targetId, v13, v15),
        !sideEffectList)
    || (items = sideEffectList->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__,
        ++sideEffectList->fields._version,
        !items) )
  {
LABEL_13:
    sub_1B64ACC(this, sideEffectList);
  }
  size = sideEffectList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (Il2CppObject *)v14,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    sideEffectList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v14;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
  }
  v22 = actList->fields._version + 1;
  actList->fields._size = 0;
  actList->fields._version = v22;
}


void __fastcall BattleActionData__addReflectAttackSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  struct System_Collections_Generic_KeyValuePair_int__int__array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  System_Collections_Generic_KeyValuePair_int__int__o v9; // 0:x1.8

  if ( (byte_4A00609 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__, pairAttackAndTarget);
    byte_4A00609 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds
    || (items = attackSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__,
        ++attackSideEffectedSvtIds->fields._version,
        !items) )
  {
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B64ACC)(attackSideEffectedSvtIds, pairAttackAndTarget);
  }
  size = attackSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    v9 = pairAttackAndTarget;
    System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
      attackSideEffectedSvtIds,
      v9,
      *(const MethodInfo_33FD814 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    attackSideEffectedSvtIds->fields._size = size + 1;
    *(System_Collections_Generic_KeyValuePair_int__int__o *)&items->m_Items[size].fields.value = pairAttackAndTarget;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__addReflectDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4A00607 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&uniqueSvtId);
    byte_4A00607 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds
    || (items = damageSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++damageSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_1B64ACC(damageSideEffectedSvtIds, *(_QWORD *)&uniqueSvtId);
  }
  size = damageSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      damageSideEffectedSvtIds,
      uniqueSvtId,
      *(const MethodInfo_34921B8 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    damageSideEffectedSvtIds->fields._size = size + 1;
    items->m_Items[size + 1] = uniqueSvtId;
  }
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
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *servantLogicResultList; // x21
  System_Predicate_object__o *v14; // x22
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A0060B & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
      *(_QWORD *)&uniqueSvtId);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__, v5);
    sub_1B64870(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo, v6);
    sub_1B64870(&BattleActionData_ServantLogicResultData_TypeInfo, v7);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass315_0__addReflectLogicResultServantId_b__0__, v8);
    sub_1B64870(&BattleActionData___c__DisplayClass315_0_TypeInfo, v9);
    byte_4A0060B = 1;
  }
  v10 = sub_1B64ABC(BattleActionData___c__DisplayClass315_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_DWORD *)(v10 + 16) = uniqueSvtId;
  servantLogicResultList = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v14 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BattleActionData___c__DisplayClass315_0__addReflectLogicResultServantId_b__0__,
    0LL);
  if ( !servantLogicResultList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_object___FindIndex(
         servantLogicResultList,
         (System_Predicate_T__o *)v14,
         (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v15 = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v16 = sub_1B64ABC(BattleActionData_ServantLogicResultData_TypeInfo);
  *(_DWORD *)(v16 + 20) = -1;
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(_DWORD *)(v16 + 16) = *(_DWORD *)(v10 + 16);
  if ( !v15
    || (items = v15->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
        ++v15->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B64ACC(v11, v12);
  }
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v16,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v16;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v22 + 4), v16, v17, v18);
  }
}


void __fastcall BattleActionData__addReflectLogicResultServantIds(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *addLogicResultList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4A0060A & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
      addLogicResultList);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v5);
    byte_4A0060A = 1;
  }
  if ( addLogicResultList && addLogicResultList->fields._size >= 1 )
  {
    v6 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)addLogicResultList,
               v6,
               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !Item )
        sub_1B64ACC(0LL, v8);
      BattleActionData__addReflectLogicResultServantId(this, (int32_t)Item[1].klass, v9);
      ++v6;
    }
    while ( v6 < addLogicResultList->fields._size );
  }
}


void __fastcall BattleActionData__addSideEffectActionData(
        BattleActionData_o *this,
        BattleActionData_o *sideEffectActionData,
        int32_t actType,
        const MethodInfo *method)
{
  BattleActionData_o *v6; // x21
  __int64 v7; // x8
  _QWORD *v8; // x9
  __int64 endcameraname_low; // x10
  __int64 v10; // x8

  v6 = this;
  if ( (byte_4A00602 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1B64870(
                                   &Method_System_Collections_Generic_List_BattleActionData__Add__,
                                   sideEffectActionData);
    byte_4A00602 = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v6->fields.sideEffectList) == 0LL)
    || (v7 = *(_QWORD *)&this->fields.state,
        v8 = Method_System_Collections_Generic_List_BattleActionData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v7) )
  {
    sub_1B64ACC(this, sideEffectActionData);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)sideEffectActionData,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = v7 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v10 + 32) = sideEffectActionData;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)(v10 + 32),
      (int32_t)sideEffectActionData,
      actType,
      (int32_t)method);
  }
}


bool __fastcall BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_4A005DD & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__, method);
    byte_4A005DD = 1;
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
  __int64 v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  ServantStatusBattleListViewItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_Predicate_object__o *v19; // x19
  const MethodInfo_34B15A8 *v20; // x1

  v3 = funcIndex;
  if ( (byte_4A005CF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__, *(_QWORD *)&funcIndex);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v7);
    sub_1B64870(&System_Predicate_BattleActionData_BuffData__TypeInfo, v8);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass180_0__getBuffList_b__0__, v9);
    sub_1B64870(&BattleActionData___c__DisplayClass180_0_TypeInfo, v10);
    byte_4A005CF = 1;
  }
  v11 = sub_1B64ABC(BattleActionData___c__DisplayClass180_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_DWORD *)(v11 + 16) = v3;
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.buffdatalist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (ServantStatusBattleListViewItem_c *)v16;
    sub_1B64814(p_buffdatalist, (int32_t)v16, v17, v18);
    v3 = *(_DWORD *)(v11 + 16);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
  }
  if ( v3 == -1 )
  {
    if ( buffdatalist )
    {
      v20 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v20);
    }
LABEL_13:
    sub_1B64ACC(All, v13);
  }
  v19 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleActionData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass180_0__getBuffList_b__0__,
    0LL);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          buffdatalist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v20 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v20);
}


BattleActionData_ChangeBg_o *__fastcall BattleActionData__getChangeBg(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *changeBgList; // x0

  if ( (byte_4A005E1 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__, v3);
    byte_4A005E1 = 1;
  }
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return (BattleActionData_ChangeBg_o *)System_Collections_Generic_List_object___get_Item(
                                            changeBgList,
                                            0,
                                            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
  else
    return 0LL;
}


int32_t __fastcall BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  StageEntity_c *v3; // x0
  int32_t actionIndex; // w21
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_4A00601 & 1) == 0 )
  {
    sub_1B64870(&StageEntity_TypeInfo, method);
    byte_4A00601 = 1;
  }
  v3 = StageEntity_TypeInfo;
  actionIndex = this->fields.actionIndex;
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
    v3 = StageEntity_TypeInfo;
  }
  DEFAULT_ENEMY_ACTION_COUNT = v3->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  if ( actionIndex < DEFAULT_ENEMY_ACTION_COUNT )
    return this->fields.actionIndex + 1;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    return StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return DEFAULT_ENEMY_ACTION_COUNT;
}


BattleActionData_SideEffectData_array *__fastcall BattleActionData__getDamageAttackSideEffectList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A005CA & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__, v7);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo, v8);
    byte_4A005CA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v10);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    damagedatalist,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v13 )
      break;
    if ( !v17.fields._current )
      sub_1B64ACC(v13, v14);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v13,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v9,
      (BattleActionData_DamageData_o *)v17.fields._current,
      (System_Collections_Generic_List_BuffList_ACTION__o *)v17.fields._current[5].klass,
      v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v9 )
LABEL_11:
    sub_1B64ACC(damagedatalist, v12);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v9,
                                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
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
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  const MethodInfo *v11; // x1
  bool v12; // zf
  System_Collections_Generic_List_object__o *v13; // x19
  System_Predicate_object__o *v14; // x20
  const MethodInfo_34B15A8 *v15; // x1

  if ( (byte_4A005C8 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__, *(_QWORD *)&funcIndex);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v5);
    sub_1B64870(&System_Predicate_BattleActionData_DamageData__TypeInfo, v6);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass168_0__getDamageList_b__0__, v7);
    sub_1B64870(&BattleActionData___c__DisplayClass168_0_TypeInfo, v8);
    byte_4A005C8 = 1;
  }
  v9 = sub_1B64ABC(BattleActionData___c__DisplayClass168_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_DWORD *)(v9 + 16) = funcIndex;
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v11);
  v12 = funcIndex == -1;
  v13 = damagedatalist;
  if ( v12 )
  {
    if ( damagedatalist )
    {
      v15 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v15);
    }
LABEL_11:
    sub_1B64ACC(damagedatalist, v11);
  }
  v14 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleActionData_DamageData__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BattleActionData___c__DisplayClass168_0__getDamageList_b__0__,
    0LL);
  if ( !v13 )
    goto LABEL_11;
  damagedatalist = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                  v13,
                                                                  (System_Predicate_T__o *)v14,
                                                                  (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_11;
  v15 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v15);
}


System_Int32_array *__fastcall BattleActionData__getDamageTargetIdList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_HashSet_int__o *v10; // x19
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A005C9 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v5);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1B64870(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v9);
    byte_4A005C9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1B64ABC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_3365C88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v11);
  if ( !damagedatalist )
    sub_1B64ACC(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    damagedatalist,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1B64ACC(v14, v15);
    if ( !v10 )
      sub_1B64ACC(v14, v15);
    System_Collections_Generic_HashSet_int___Add(
      v10,
      HIDWORD(v17.fields._current[1].monitor),
      (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v10,
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__getEffect(BattleActionData_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int32_array *effectlist; // x8
  int32_t max_length; // w9

  effectlist = this->fields.effectlist;
  if ( !effectlist )
    return -1;
  max_length = effectlist->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
    sub_1B64AD4(this, *(_QWORD *)&index);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w21
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A00611 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__, *(_QWORD *)&index);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v9);
    byte_4A00611 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( (index & 0x80000000) != 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
    if ( funcTargetPlayerTypeList )
    {
      System_Collections_Generic_List_Int32Enum___GetEnumerator(
        &v13,
        funcTargetPlayerTypeList,
        (const MethodInfo_34955F8 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v10 = 0;
      while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                &v13,
                (const MethodInfo_3228E7C *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v10 |= LODWORD(v13.fields._current);
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
        &v13,
        (const MethodInfo_3228E78 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v10;
    }
LABEL_13:
    sub_1B64ACC(funcTargetPlayerTypeList, *(_QWORD *)&index);
  }
  v10 = 0;
  funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_13;
  if ( funcTargetPlayerTypeList->fields._size > index )
    return System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_3494794 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
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
  __int64 v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  ServantStatusBattleListViewItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_Predicate_object__o *v19; // x19
  const MethodInfo_34B15A8 *v20; // x1

  v3 = funcIndex;
  if ( (byte_4A005D3 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__, *(_QWORD *)&funcIndex);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v7);
    sub_1B64870(&System_Predicate_BattleActionData_HealData__TypeInfo, v8);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass187_0__getHealList_b__0__, v9);
    sub_1B64870(&BattleActionData___c__DisplayClass187_0_TypeInfo, v10);
    byte_4A005D3 = 1;
  }
  v11 = sub_1B64ABC(BattleActionData___c__DisplayClass187_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_DWORD *)(v11 + 16) = v3;
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.healdatalist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (ServantStatusBattleListViewItem_c *)v16;
    sub_1B64814(p_healdatalist, (int32_t)v16, v17, v18);
    v3 = *(_DWORD *)(v11 + 16);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
  }
  if ( v3 == -1 )
  {
    if ( healdatalist )
    {
      v20 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v20);
    }
LABEL_13:
    sub_1B64ACC(All, v13);
  }
  v19 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleActionData_HealData__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass187_0__getHealList_b__0__,
    0LL);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          healdatalist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v20 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v20);
}


System_Int32_array *__fastcall BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x19
  System_Int32_array *DamageTargets; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct System_Int32_array *pttargetIds; // x22
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  __int64 v14; // x8
  System_Int32_array *v15; // x20
  unsigned __int64 v16; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_4A005F7 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v4);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4A005F7 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v7 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v7,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v7,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    v12 = *(_QWORD *)&pttargetIds->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      while ( v13 < (unsigned int)v12 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v7,
          pttargetIds->m_Items[v13 + 1],
          pttargetIds->m_Items[v13 + 1],
          (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(v12) = pttargetIds->max_length;
        if ( (__int64)++v13 >= (int)v12 )
          goto LABEL_9;
      }
LABEL_15:
      sub_1B64AD4(DamageTargets, v9);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v9, v10);
  if ( !DamageTargets )
LABEL_16:
    sub_1B64ACC(DamageTargets, v9);
  v14 = *(_QWORD *)&DamageTargets->max_length;
  v15 = DamageTargets;
  if ( (int)v14 >= 1 )
  {
    v16 = 0LL;
    while ( v16 < (unsigned int)v14 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v7,
        v15->m_Items[v16 + 1],
        v15->m_Items[v16 + 1],
        (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v14) = v15->max_length;
      if ( (__int64)++v16 >= (int)v14 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v7,
           (const MethodInfo_311CE54 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndex(
        BattleActionData_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *v17; // x19
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x21
  BattleActionData___c_c *v20; // x0
  System_Converter_object__int__o *_9__285_0; // x22
  Il2CppObject *v22; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  void *v26; // x0
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v28; // x0
  System_Converter_object__int__o *_9__285_1; // x21
  Il2CppObject *v30; // x22
  struct BattleActionData___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Comparison_int__o *v34; // x20
  Il2CppObject *v35; // x21
  struct BattleActionData___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4A005FA & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_int__TypeInfo, method);
    sub_1B64870(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v3);
    sub_1B64870(&System_Converter_BattleActionData_HealData__int__TypeInfo, v4);
    sub_1B64870(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Sort___75665800, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndex_b__285_0__, v13);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndex_b__285_1__, v14);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndex_b__285_2__, v15);
    sub_1B64870(&BattleActionData___c_TypeInfo, v16);
    byte_4A005FA = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v20 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v20 = BattleActionData___c_TypeInfo;
    }
    _9__285_0 = (System_Converter_object__int__o *)v20->static_fields->__9__285_0;
    if ( !_9__285_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleActionData___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__285_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__285_0,
        v22,
        Method_BattleActionData___c__getListFunctionIndex_b__285_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__285_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__285_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__285_0, (int32_t)_9__285_0, v24, v25);
    }
    v26 = System_Collections_Generic_List_object___ConvertAll_int_(
            buffdatalist,
            (System_Converter_T__TOutput__o *)_9__285_0,
            (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v17 )
      goto LABEL_29;
    System_Collections_Generic_List_int___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)v26,
      (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
    goto LABEL_21;
  v28 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v28 = BattleActionData___c_TypeInfo;
  }
  _9__285_1 = (System_Converter_object__int__o *)v28->static_fields->__9__285_1;
  if ( !_9__285_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleActionData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__285_1 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_BattleActionData_HealData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__285_1,
      v30,
      Method_BattleActionData___c__getListFunctionIndex_b__285_1__,
      0LL);
    v31 = BattleActionData___c_TypeInfo->static_fields;
    v31->__9__285_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__285_1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v31->__9__285_1, (int32_t)_9__285_1, v32, v33);
  }
  v26 = System_Collections_Generic_List_object___ConvertAll_int_(
          healdatalist,
          (System_Converter_T__TOutput__o *)_9__285_1,
          (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
  if ( !v17 )
LABEL_29:
    sub_1B64ACC(v26, v18);
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_21:
  v26 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v26 = BattleActionData___c_TypeInfo;
  }
  v34 = *(System_Comparison_int__o **)(*((_QWORD *)v26 + 23) + 152LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)v26 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = BattleActionData___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)v26 + 23);
    v34 = (System_Comparison_int__o *)sub_1B64ABC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v34, v35, Method_BattleActionData___c__getListFunctionIndex_b__285_2__, 0LL);
    v36 = BattleActionData___c_TypeInfo->static_fields;
    v36->__9__285_2 = v34;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v36->__9__285_2, (int32_t)v34, v37, v38);
  }
  if ( !v17 )
    goto LABEL_29;
  System_Collections_Generic_List_int___Sort_55131260(
    v17,
    (System_Comparison_T__o *)v34,
    (const MethodInfo_3493C7C *)Method_System_Collections_Generic_List_int__Sort___75665800);
  v39 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (const MethodInfo_2E5A07C *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v39,
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_Collections_Generic_List_int__o *v25; // x20
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  BattleActionData___c_c *v28; // x0
  System_Converter_object__int__o *_9__286_0; // x23
  Il2CppObject *v30; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Int32_array *result; // x0
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  BattleActionData___c_c *v37; // x0
  System_Converter_object__int__o *_9__286_1; // x23
  Il2CppObject *v39; // x24
  ServantStatusBattleListViewItem_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  BattleActionData___c_c *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x22
  System_Converter_object__int__o *_9__286_2; // x23
  Il2CppObject *v46; // x24
  struct BattleActionData___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  BattleActionData___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__int__o *_9__286_3; // x22
  Il2CppObject *v55; // x23
  struct BattleActionData___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w21
  System_Comparison_int__o *v60; // x22
  Il2CppObject *v61; // x23
  struct BattleActionData___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0

  if ( (byte_4A005FB & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_int__TypeInfo, displayFuncNum);
    sub_1B64870(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v5);
    sub_1B64870(&System_Converter_BattleActionData_HealData__int__TypeInfo, v6);
    sub_1B64870(&System_Converter_BattleActionData_DamageData__int__TypeInfo, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Distinct_int___, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___, v9);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B64870(&System_Func_BattleActionData_DamageData__int__TypeInfo, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_int__AddRange__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Sort___75665800, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_0__, v19);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_1__, v20);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_2__, v21);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_3__, v22);
    sub_1B64870(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_4__, v23);
    sub_1B64870(&BattleActionData___c_TypeInfo, v24);
    byte_4A005FB = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v28 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v28 = BattleActionData___c_TypeInfo;
    }
    _9__286_0 = (System_Converter_object__int__o *)v28->static_fields->__9__286_0;
    if ( !_9__286_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = BattleActionData___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__286_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__286_0,
        v30,
        Method_BattleActionData___c__getListFunctionIndexEx_b__286_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__286_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__286_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__286_0, (int32_t)_9__286_0, v32, v33);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__286_0,
                                     (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v25 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v25,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v37 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v37 = BattleActionData___c_TypeInfo;
    }
    _9__286_1 = (System_Converter_object__int__o *)v37->static_fields->__9__286_1;
    if ( !_9__286_1 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = BattleActionData___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__286_1 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__286_1,
        v39,
        Method_BattleActionData___c__getListFunctionIndexEx_b__286_1__,
        0LL);
      v40 = (ServantStatusBattleListViewItem_o *)BattleActionData___c_TypeInfo->static_fields;
      v40[1].klass = (ServantStatusBattleListViewItem_c *)_9__286_1;
      sub_1B64814(v40 + 1, (int32_t)_9__286_1, v41, v42);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__286_1,
                                     (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v25 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v25,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v26) )
  {
    v59 = 0;
    goto LABEL_38;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v35);
  v43 = BattleActionData___c_TypeInfo;
  v44 = (System_Collections_Generic_List_object__o *)result;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v43 = BattleActionData___c_TypeInfo;
  }
  _9__286_2 = (System_Converter_object__int__o *)v43->static_fields->__9__286_2;
  if ( !_9__286_2 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = BattleActionData___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__286_2 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__286_2,
      v46,
      Method_BattleActionData___c__getListFunctionIndexEx_b__286_2__,
      0LL);
    v47 = BattleActionData___c_TypeInfo->static_fields;
    v47->__9__286_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__286_2;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v47->__9__286_2, (int32_t)_9__286_2, v48, v49);
  }
  if ( !v44
    || (result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                         v44,
                                         (System_Converter_T__TOutput__o *)_9__286_2,
                                         (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___),
        !v25) )
  {
LABEL_47:
    sub_1B64ACC(result, v35);
  }
  System_Collections_Generic_List_int___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v50);
  v52 = BattleActionData___c_TypeInfo;
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v52 = BattleActionData___c_TypeInfo;
  }
  _9__286_3 = (System_Func_object__int__o *)v52->static_fields->__9__286_3;
  if ( !_9__286_3 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = BattleActionData___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__286_3 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_BattleActionData_DamageData__int__TypeInfo);
    System_Func_object__int____ctor(_9__286_3, v55, Method_BattleActionData___c__getListFunctionIndexEx_b__286_3__, 0LL);
    v56 = BattleActionData___c_TypeInfo->static_fields;
    v56->__9__286_3 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__286_3;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v56->__9__286_3, (int32_t)_9__286_3, v57, v58);
  }
  v59 = System_Linq_Enumerable__Sum_object_(
          v53,
          (System_Func_TSource__int__o *)_9__286_3,
          (const MethodInfo_2E723B8 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_38:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v60 = *(System_Comparison_int__o **)(*(_QWORD *)&result->m_Items[39] + 192LL);
  if ( !v60 )
  {
    if ( !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (System_Int32_array *)BattleActionData___c_TypeInfo;
    }
    v61 = **(Il2CppObject ***)&result->m_Items[39];
    v60 = (System_Comparison_int__o *)sub_1B64ABC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v60, v61, Method_BattleActionData___c__getListFunctionIndexEx_b__286_4__, 0LL);
    v62 = BattleActionData___c_TypeInfo->static_fields;
    v62->__9__286_4 = v60;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v62->__9__286_4, (int32_t)v60, v63, v64);
  }
  if ( !v25 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort_55131260(
    v25,
    (System_Comparison_T__o *)v60,
    (const MethodInfo_3493C7C *)Method_System_Collections_Generic_List_int__Sort___75665800);
  v65 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
          (const MethodInfo_2E5A07C *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v65,
             (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_47;
  *displayFuncNum = v59 + result->max_length;
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
  __int64 v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *replacememberlist; // x22
  ServantStatusBattleListViewItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_Predicate_object__o *v19; // x19
  const MethodInfo_34B15A8 *v20; // x1

  v3 = funcIndex;
  if ( (byte_4A005D6 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__,
      *(_QWORD *)&funcIndex);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v7);
    sub_1B64870(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo, v8);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass192_0__getReplaceMember_b__0__, v9);
    sub_1B64870(&BattleActionData___c__DisplayClass192_0_TypeInfo, v10);
    byte_4A005D6 = 1;
  }
  v11 = sub_1B64ABC(BattleActionData___c__DisplayClass192_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_DWORD *)(v11 + 16) = v3;
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (ServantStatusBattleListViewItem_o *)&this->fields.replacememberlist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (ServantStatusBattleListViewItem_c *)v16;
    sub_1B64814(p_replacememberlist, (int32_t)v16, v17, v18);
    v3 = *(_DWORD *)(v11 + 16);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
  }
  if ( v3 == -1 )
  {
    if ( replacememberlist )
    {
      v20 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       v20);
    }
LABEL_13:
    sub_1B64ACC(All, v13);
  }
  v19 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass192_0__getReplaceMember_b__0__,
    0LL);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          replacememberlist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  v20 = (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   v20);
}


BattleActionData_ShiftServant_o *__fastcall BattleActionData__getShiftServant(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *shiftServantList; // x0

  if ( (byte_4A005DF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__, v3);
    byte_4A005DF = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return (BattleActionData_ShiftServant_o *)System_Collections_Generic_List_object___get_Item(
                                                shiftServantList,
                                                0,
                                                (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
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
  __int64 v9; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4A00603 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData__FindAll__, *(_QWORD *)&actType);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData__ToArray__, v5);
    sub_1B64870(&System_Predicate_BattleActionData__TypeInfo, v6);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass301_0__getSideEffectList_b__0__, v7);
    sub_1B64870(&BattleActionData___c__DisplayClass301_0_TypeInfo, v8);
    byte_4A00603 = 1;
  }
  v9 = sub_1B64ABC(BattleActionData___c__DisplayClass301_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = actType,
        sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList,
        v13 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleActionData___c__DisplayClass301_0__getSideEffectList_b__0__,
          0LL),
        !sideEffectList)
    || (All = System_Collections_Generic_List_object___FindAll(
                sideEffectList,
                (System_Predicate_T__o *)v13,
                (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0LL )
  {
    sub_1B64ACC(All, v11);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_object___ToArray(
                                     (System_Collections_Generic_List_object__o *)All,
                                     (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
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
  __int64 v10; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *summonServantList; // x20
  System_Predicate_object__o *v14; // x19

  if ( (byte_4A005DC & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__,
      *(_QWORD *)&funcIndex);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__, v5);
    sub_1B64870(&System_Predicate_BattleActionData_SummonServant__TypeInfo, v6);
    sub_1B64870(&BattleActionData_SummonServant___TypeInfo, v7);
    sub_1B64870(&Method_BattleActionData___c__DisplayClass205_0__getSummonServant_b__0__, v8);
    sub_1B64870(&BattleActionData___c__DisplayClass205_0_TypeInfo, v9);
    byte_4A005DC = 1;
  }
  v10 = sub_1B64ABC(BattleActionData___c__DisplayClass205_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_DWORD *)(v10 + 16) = funcIndex;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_1B64918(BattleActionData_SummonServant___TypeInfo, 0LL);
  if ( funcIndex != -1 )
  {
    v14 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_BattleActionData_SummonServant__TypeInfo);
    System_Predicate_object____ctor(
      v14,
      (Il2CppObject *)v10,
      Method_BattleActionData___c__DisplayClass205_0__getSummonServant_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            summonServantList,
            (System_Predicate_T__o *)v14,
            (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_1B64ACC(All, v12);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getTargetIds(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x19
  int32_t v8; // w1
  const MethodInfo *v9; // x2
  _QWORD *DamageTargets; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  _QWORD *v14; // x21
  unsigned __int64 v15; // x23
  __int64 v16; // x8
  _QWORD *v17; // x20
  unsigned __int64 v18; // x21
  __int64 v19; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_4A005F8 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v4);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4A005F8 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_311C7CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  DamageTargets = BattleActionData__GetDamageTargets(this, v8, v9);
  if ( !DamageTargets )
    goto LABEL_20;
  v13 = DamageTargets[3];
  v14 = DamageTargets;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( v15 < (unsigned int)v13 )
    {
      if ( !v7 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v7,
        *((_DWORD *)v14 + v15 + 8),
        *((_DWORD *)v14 + v15 + 8),
        (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v13) = *((_DWORD *)v14 + 6);
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_9;
    }
LABEL_19:
    sub_1B64AD4(DamageTargets, v11);
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
        if ( !v7 )
          goto LABEL_20;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v7,
          *(_DWORD *)(v19 + 40),
          *(_DWORD *)(v19 + 40),
          (const MethodInfo_311D17C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      LODWORD(v16) = *((_DWORD *)v17 + 6);
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_17;
    }
    goto LABEL_19;
  }
LABEL_17:
  if ( !v7 )
LABEL_20:
    sub_1B64ACC(DamageTargets, v11);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v7,
           (const MethodInfo_311CE54 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v7; // x1
  int32_t v8; // w19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x11
  unsigned __int64 namespaze; // x9
  unsigned __int64 v13; // x8
  Il2CppType *p_byval_arg; // x11
  int v15; // w12
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A005CC & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v5);
    byte_4A005CC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_1B64ACC(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    damagedatalist,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v8 = 0;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v17.fields._current )
      sub_1B64ACC(v9, v10);
    klass = v17.fields._current[6].klass;
    if ( klass && (int)klass->_1.namespaze >= 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      v13 = 0LL;
      p_byval_arg = &klass->_1.byval_arg;
      do
      {
        if ( v13 >= namespaze )
          sub_1B64AD4(v9, v10);
        v15 = *((_DWORD *)&p_byval_arg->data + v13++);
        v8 += v15;
      }
      while ( (__int64)v13 < (int)namespaze );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v8;
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


BattleActionData_TreasureDvcAfterChangeBgm_o *__fastcall BattleActionData__get_TdAfterChangeBgm(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._TdAfterChangeBgm_k__BackingField;
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
  __int64 v3; // x1
  System_Collections_Generic_List_BattleActionData_DamageData__o *result; // x0
  ServantStatusBattleListViewItem_o *p_damagedatalist; // x19
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A005C6 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v3);
    byte_4A005C6 = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = (ServantStatusBattleListViewItem_o *)&this->fields._damagedatalist;
    v6 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    p_damagedatalist->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B64814(p_damagedatalist, (int32_t)v6, v7, v8);
    return (System_Collections_Generic_List_BattleActionData_DamageData__o *)p_damagedatalist->klass;
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0060F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___, *(_QWORD *)&length);
    sub_1B64870(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___, v5);
    byte_4A0060F = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Int32Enum_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_2E65EB8 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v7 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                            v6,
                                                                            (const MethodInfo_2E77108 *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v7, v8, v9);
}


bool __fastcall BattleActionData__isActors(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 0;
}


bool __fastcall BattleActionData__isArtsOrderAttack(BattleActionData_o *this, const MethodInfo *method)
{
  bool flash; // w19

  flash = this->fields.flash;
  return BattleCommand__isARTS(this->fields.type, 0LL) && flash;
}


bool __fastcall BattleActionData__isBoostSkill(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4A005B4 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005B4 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_BOOSTSKILL;
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
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4A005B1 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005B1 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_DEAD;
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
  bool flash; // w20

  flash = this->fields.flash;
  return BattleCommand__isARTS(this->fields.type, 0LL) && flash && this->fields.three;
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

  if ( (byte_4A00608 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__, pairAttackAndTarget);
    byte_4A00608 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B64ACC)(0LL, pairAttackAndTarget);
  v7 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v7,
           (const MethodInfo_33FDB8C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_4A00606 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&uniqueSvtId);
    byte_4A00606 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_1B64ACC(0LL, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4A005B2 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005B2 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_RESURRECTION;
}


bool __fastcall BattleActionData__isSkill(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4A005B3 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005B3 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_SKILL;
}


bool __fastcall BattleActionData__isSkillCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  return skillInfo
      && ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._7_getCutInId.method)(
           skillInfo,
           skillInfo->klass->vtable._8_PreLoad.methodPtr) >= 1
      && (this->fields.state & 0xFFFFFFFD) == 0;
}


bool __fastcall BattleActionData__isSystem(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 1;
}


bool __fastcall BattleActionData__isTypeEnemyCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005F0 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005F0 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeEnemySpellCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005F1 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005F1 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_SPELL_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeMasterCommandSpell(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4A005EF & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005EF = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_COMMAND_SPELL;
}


bool __fastcall BattleActionData__isTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005EB & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005EB = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERARTS == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005EC & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005EC = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERBUSTER == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005ED & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005ED = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERQUICK == this->fields.type;
}


bool __fastcall BattleActionData__isTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005E7 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005E7 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
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
  __int64 v7; // x1
  void *servantLogicResultList; // x0
  int32_t v9; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w2
  int v14; // w8

  if ( (byte_4A0060D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v6);
    byte_4A0060D = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_19:
    sub_1B64ACC(servantLogicResultList, v7);
  if ( *((int *)servantLogicResultList + 6) >= 1 )
  {
    v9 = 0;
    do
    {
      servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                 v9,
                                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !servantLogicResultList || !data )
        goto LABEL_19;
      ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0LL);
      if ( ServantData )
      {
        v11 = ServantData;
        servantLogicResultList = this->fields.servantLogicResultList;
        if ( !servantLogicResultList )
          goto LABEL_19;
        servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                   v9,
                                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
        if ( !servantLogicResultList )
          goto LABEL_19;
        v12 = *((_DWORD *)servantLogicResultList + 5);
        if ( v12 != -1 && BattleServantData__getNowHp(v11, 0LL) != v12 )
        {
          BattleServantData__setHp(v11, v12, 0, 0LL);
          BattleServantData__updateHp(v11, 0LL);
        }
      }
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_19;
      v13 = *((_DWORD *)servantLogicResultList + 6);
      ++v9;
    }
    while ( v9 < v13 );
    v14 = *((_DWORD *)servantLogicResultList + 7) + 1;
    *((_DWORD *)servantLogicResultList + 6) = 0;
    *((_DWORD *)servantLogicResultList + 7) = v14;
    if ( v13 >= 1 )
      System_Array__Clear(*((System_Array_o **)servantLogicResultList + 2), 0, v13, 0LL);
  }
}


void __fastcall BattleActionData__saveServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *servantLogicResultList; // x0
  int32_t v7; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v9; // x22
  Il2CppObject *Item; // x23

  if ( (byte_4A0060C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v5);
    byte_4A0060C = 1;
  }
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_13:
    sub_1B64ACC(servantLogicResultList, data);
  v7 = 0;
  while ( v7 < *((_DWORD *)servantLogicResultList + 6) )
  {
    servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)servantLogicResultList,
                               v7,
                               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    if ( !servantLogicResultList || !data )
      goto LABEL_13;
    ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0LL);
    if ( ServantData )
    {
      v9 = ServantData;
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_13;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)servantLogicResultList,
               v7,
               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      servantLogicResultList = (void *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v9->klass->vtable._13_get_resultHp.method)(
                                         v9,
                                         v9->klass->vtable._14_set_resultHp.methodPtr);
      if ( !Item )
        goto LABEL_13;
      HIDWORD(Item[1].klass) = (_DWORD)servantLogicResultList;
    }
    servantLogicResultList = this->fields.servantLogicResultList;
    ++v7;
    if ( !servantLogicResultList )
      goto LABEL_13;
  }
}


void __fastcall BattleActionData__servantLogicResultClear(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v7; // w9

  v2 = this;
  if ( (byte_4A0060E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, method);
    this = (BattleActionData_o *)sub_1B64870(
                                   &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
                                   v3);
    byte_4A0060E = 1;
  }
  servantLogicResultList = v2->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_1B64ACC(this, method);
  size = servantLogicResultList->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)servantLogicResultList->fields._items;
    v7 = servantLogicResultList->fields._version + 1;
    servantLogicResultList->fields._size = 0;
    servantLogicResultList->fields._version = v7;
    System_Array__Clear(items, 0, size, 0LL);
  }
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
      sub_1B64ACC(this, 0LL);
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
  __int64 v12; // x19
  System_Collections_Generic_List_object__o *changeBgList; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  ServantStatusBattleListViewItem_o *p_changeBgList; // x20
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4A005E0 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_ChangeBg_TypeInfo, *(_QWORD *)&inbgNo);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo, v11);
    byte_4A005E0 = 1;
  }
  v12 = sub_1B64ABC(BattleActionData_ChangeBg_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_DWORD *)(v12 + 28) = inbgNo;
  *(_DWORD *)(v12 + 32) = inTp;
  *(_DWORD *)(v12 + 36) = priority;
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = (ServantStatusBattleListViewItem_o *)&this->fields.changeBgList;
    v18 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    p_changeBgList->klass = (ServantStatusBattleListViewItem_c *)v18;
    sub_1B64814(p_changeBgList, (int32_t)v18, v19, v20);
    changeBgList = (System_Collections_Generic_List_object__o *)p_changeBgList->klass;
    if ( !p_changeBgList->klass )
      goto LABEL_10;
  }
  items = changeBgList->fields._items;
  v22 = Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__;
  ++changeBgList->fields._version;
  if ( !items )
LABEL_10:
    sub_1B64ACC(changeBgList, v14);
  size = changeBgList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      changeBgList,
      (Il2CppObject *)v12,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    changeBgList->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), v12, v15, v16);
  }
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 endcameraname_low; // x10
  __int64 v16; // x8

  v10 = this;
  if ( (byte_4A005C7 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1B64870(
                                   &Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
                                   data);
    byte_4A005C7 = 1;
  }
  if ( vals )
  {
    if ( isIndiviAtk )
    {
      if ( !data )
        goto LABEL_21;
      if ( !data->fields.isNobleIndividualAtk )
        goto LABEL_14;
    }
    else if ( isRarityAtk )
    {
      if ( !data )
        goto LABEL_21;
      if ( !data->fields.isNobleRareAtk )
        goto LABEL_14;
    }
    else if ( !data )
    {
      goto LABEL_21;
    }
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
LABEL_14:
    if ( Target__isAllTargets(vals->fields.targetType, 0LL) )
      v10->fields.isAllAttack = 1;
  }
  this = (BattleActionData_o *)BattleActionData__get_damagedatalist(v10, (const MethodInfo *)data);
  if ( !this
    || (v13 = *(_QWORD *)&this->fields.state,
        v14 = Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v13) )
  {
LABEL_21:
    sub_1B64ACC(this, data);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = v13 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v16 + 32) = data;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)data, v11, v12);
  }
}


void __fastcall BattleActionData__setEffect(
        BattleActionData_o *this,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.effectlist = effectList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.effectlist, (int32_t)effectList, (int32_t)method, v3);
}


void __fastcall BattleActionData__setEndCamera(
        BattleActionData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.endcameraname = name;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endcameraname, (int32_t)name, (int32_t)method, v3);
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
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x20
  int v11; // w2

  v6 = this;
  if ( (byte_4A00610 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, *(_QWORD *)&index);
    sub_1B64870(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v7);
    this = (BattleActionData_o *)sub_1B64870(
                                   &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__,
                                   v8);
    byte_4A00610 = 1;
  }
  if ( isTargetEnemy )
    v9 = 2;
  else
    v9 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_1B64ACC(this, *(_QWORD *)&index);
    if ( funcTargetPlayerTypeList->fields._size > index )
    {
      v11 = System_Collections_Generic_List_Int32Enum___get_Item(
              funcTargetPlayerTypeList,
              index,
              (const MethodInfo_3494794 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__) | v9;
      System_Collections_Generic_List_Int32Enum___set_Item(
        funcTargetPlayerTypeList,
        index,
        v11,
        (const MethodInfo_34947E8 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
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
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  bool isShowForcedEffect; // w8

  if ( (byte_4A005D1 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_HealData_TypeInfo, *(_QWORD *)&targetId);
    byte_4A005D1 = 1;
  }
  v15 = sub_1B64ABC(BattleActionData_HealData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1B64ACC(v16, v17);
  *(_DWORD *)(v15 + 28) = targetId;
  *(_DWORD *)(v15 + 32) = healPoint;
  *(_DWORD *)(v15 + 16) = funcIndex;
  *(_DWORD *)(v15 + 36) = bufId;
  *(_BYTE *)(v15 + 41) = isCommandAfter;
  if ( vals )
    isShowForcedEffect = vals->fields.isShowForcedEffect;
  else
    isShowForcedEffect = 0;
  *(_BYTE *)(v15 + 42) = isShowForcedEffect;
  BattleActionData__setHealData_41918348(this, (BattleActionData_HealData_o *)v15, vals, v18);
  return (BattleActionData_HealData_o *)v15;
}


void __fastcall BattleActionData__setHealData_41918348(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  struct System_String_o *StrParam; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( vals )
  {
    if ( !data )
      sub_1B64ACC(this, 0LL);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 117, 0LL, 0LL);
    data->fields.popValueText = StrParam;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&data->fields.popValueText, (int32_t)StrParam, v7, v8);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A005B5 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, *(_QWORD *)&pttargetId);
    byte_4A005B5 = 1;
  }
  v5 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B64ACC(0LL, v6);
  if ( !v5->max_length )
    sub_1B64AD4(v5, v5);
  v5->m_Items[1] = pttargetId;
  this->fields.pttargetIds = v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.pttargetIds, (int32_t)v5, v7, v8);
}


void __fastcall BattleActionData__setPTTargetId_41906588(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.pttargetIds = pttargetIds;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.pttargetIds, (int32_t)pttargetIds, (int32_t)method, v3);
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
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4A005D4 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_ReplaceMember_TypeInfo, *(_QWORD *)&index);
    byte_4A005D4 = 1;
  }
  v11 = sub_1B64ABC(BattleActionData_ReplaceMember_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64ACC(v12, v13);
  *(_DWORD *)(v11 + 32) = outUniqueId;
  *(_DWORD *)(v11 + 36) = inUniqueId;
  *(_DWORD *)(v11 + 28) = index;
  *(_DWORD *)(v11 + 16) = funcIndex;
  BattleActionData__setReplaceMember_41918872(this, (BattleActionData_ReplaceMember_o *)v11, v14);
}


void __fastcall BattleActionData__setReplaceMember_41918872(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *replacememberlist; // x0
  ServantStatusBattleListViewItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A005D5 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v7);
    byte_4A005D5 = 1;
  }
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (ServantStatusBattleListViewItem_o *)&this->fields.replacememberlist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B64814(p_replacememberlist, (int32_t)v10, v11, v12);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
    if ( !p_replacememberlist->klass )
      goto LABEL_9;
  }
  items = replacememberlist->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__;
  ++replacememberlist->fields._version;
  if ( !items )
LABEL_9:
    sub_1B64ACC(replacememberlist, data);
  size = replacememberlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replacememberlist,
      (Il2CppObject *)data,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    replacememberlist->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *shiftServantList; // x0
  ServantStatusBattleListViewItem_o *p_shiftServantList; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A005DE & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo, v7);
    byte_4A005DE = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = (ServantStatusBattleListViewItem_o *)&this->fields.shiftServantList;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    p_shiftServantList->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B64814(p_shiftServantList, (int32_t)v10, v11, v12);
    shiftServantList = (System_Collections_Generic_List_object__o *)p_shiftServantList->klass;
    if ( !p_shiftServantList->klass )
      goto LABEL_9;
  }
  items = shiftServantList->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__;
  ++shiftServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B64ACC(shiftServantList, data);
  size = shiftServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      shiftServantList,
      (Il2CppObject *)data,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    shiftServantList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
  }
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
  __int64 v16; // x19
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *summonServantList; // x0
  ServantStatusBattleListViewItem_o *p_summonServantList; // x20
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4A005DB & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__, *(_QWORD *)&uniqueId);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__, v13);
    sub_1B64870(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo, v14);
    sub_1B64870(&BattleActionData_SummonServant_TypeInfo, v15);
    byte_4A005DB = 1;
  }
  v16 = sub_1B64ABC(BattleActionData_SummonServant_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(_DWORD *)(v16 + 16) = funcIndex;
  *(_DWORD *)(v16 + 28) = uniqueId;
  *(_DWORD *)(v16 + 32) = unloadUniqueId;
  *(_BYTE *)(v16 + 36) = isEffect;
  *(_DWORD *)(v16 + 40) = callSvtEffectId;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = (ServantStatusBattleListViewItem_o *)&this->fields.summonServantList;
    v22 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    p_summonServantList->klass = (ServantStatusBattleListViewItem_c *)v22;
    sub_1B64814(p_summonServantList, (int32_t)v22, v23, v24);
    summonServantList = (System_Collections_Generic_List_object__o *)p_summonServantList->klass;
    if ( !p_summonServantList->klass )
      goto LABEL_9;
  }
  items = summonServantList->fields._items;
  v26 = Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__;
  ++summonServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B64ACC(summonServantList, v17);
  size = summonServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      summonServantList,
      (Il2CppObject *)v16,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    summonServantList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v16;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v28 + 4), v16, v18, v19);
  }
}


void __fastcall BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005E8 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005E8 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERARTS;
}


void __fastcall BattleActionData__setTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005E9 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005E9 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERBUSTER;
}


void __fastcall BattleActionData__setTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005EA & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005EA = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERQUICK;
}


void __fastcall BattleActionData__setTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A005E6 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A005E6 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
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
  int32_t v3; // w3

  this->fields._ChangeField_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ChangeField_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_DispMsgList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._DispMsgList_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._DispMsgList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._HpDecreaseFuncTargetHash_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_IntervalBuffDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._ShiftGauge_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ShiftGauge_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_TdAfterChangeBgm(
        BattleActionData_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TdAfterChangeBgm_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_WaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._WaitCond_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaitCond_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_damagedatalist(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DamageData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._damagedatalist = value;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._damagedatalist, (int32_t)value, (int32_t)method, v3);
}


System_String_o *__fastcall BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t type; // w8
  Il2CppObject *v11; // x0
  __int64 *v12; // x8
  int v14; // [xsp+Ch] [xbp-24h] BYREF
  int v15; // [xsp+18h] [xbp-18h] BYREF
  int v16; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4A005F2 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, method);
    sub_1B64870(&StringLiteral_18802/*"effect/BitEffect/bit_buster{0:00}"*/, v6);
    sub_1B64870(&StringLiteral_18801/*"effect/BitEffect/bit_arts{0:00}"*/, v7);
    sub_1B64870(&StringLiteral_18809/*"effect/BitEffect/bit_flash02"*/, v8);
    sub_1B64870(&StringLiteral_18811/*"effect/BitEffect/bit_quick{0:00}"*/, v9);
    byte_4A005F2 = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v15 = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v2, v3, v4);
      v12 = &StringLiteral_18801/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v12, v11, 0LL);
    case 3:
      v14 = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v2, v3, v4);
      v12 = &StringLiteral_18811/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v12, v11, 0LL);
    case 2:
      v16 = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v2, v3, v4);
      v12 = &StringLiteral_18802/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v12, v11, 0LL);
    case 4:
      return (System_String_o *)StringLiteral_18809/*"effect/BitEffect/bit_flash02"*/;
    default:
      return 0LL;
  }
}


void __fastcall BattleActionData_AfterChangeField___ctor(
        BattleActionData_AfterChangeField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v5, v6);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  v8 = this;
  if ( (byte_4A0063E & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1B64870(&Generator_BGFromFieldChangeBGBuff_TypeInfo, perf);
    byte_4A0063E = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v12 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B64ABC(Generator_BGFromFieldChangeBGBuff_TypeInfo),
        Generator_BGFromFieldChangeBGBuff___ctor(v12, fieldChange, 0LL),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_AddBackground.method)(
                                                        v11,
                                                        v12,
                                                        2LL,
                                                        v11->klass->vtable._6_AddBGM.methodPtr)) == 0LL )
  {
    sub_1B64ACC(this, perf);
  }
  v13 = (int)this;
  v14 = System_Int32__ToString((int)this + 28, 0LL);
  *bgName = v14;
  sub_1B64814((ServantStatusBattleListViewItem_o *)bgName, (int32_t)v14, v15, v16);
  v17 = System_Int32__ToString(v13 + 32, 0LL);
  *bgType = v17;
  sub_1B64814((ServantStatusBattleListViewItem_o *)bgType, (int32_t)v17, v18, v19);
}


System_String_o *__fastcall BattleActionData_AfterChangeField__GetPriorityBgmName(
        BattleActionData_AfterChangeField_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  BattleActionData_AfterChangeField_o *v6; // x20
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  BattleData_o *data; // x23
  BattleBuffData_FieldChangeData_o *fieldChange; // x24
  BattleFieldEnvironmentData_o *v10; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v11; // x22
  BattleActionData_AfterChangeField_c *klass; // x8

  v6 = this;
  if ( (byte_4A0063F & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1B64870(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, perf);
    byte_4A0063F = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        data = perf->fields.data,
        fieldChange = v6->fields.fieldChange,
        v10 = FieldEnvData,
        v11 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B64ABC(Generator_BGMFromFieldChangeBGBuff_TypeInfo),
        Generator_BGMFromFieldChangeBGBuff___ctor(v11, data, fieldChange, 0LL),
        !v10)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, struct AddBgmArgument_o *, Il2CppMethodPointer))v10->klass->vtable._6_AddBGM.method)(
                                                        v10,
                                                        v11,
                                                        2LL,
                                                        v6->fields.addBgmArg,
                                                        v10->klass->vtable._7_RemoveAfterResetBGM.methodPtr)) == 0LL )
  {
    sub_1B64ACC(this, perf);
  }
  klass = this[1].klass;
  if ( klass )
    return (System_String_o *)klass->_1.namespaze;
  return defBgmName;
}


void __fastcall BattleActionData_AfterChangeField__SetAddBgmArg(
        BattleActionData_AfterChangeField_o *this,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.addBgmArg = arg;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.addBgmArg, (int32_t)arg, (int32_t)method, v3);
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


bool __fastcall BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
        BattleActionData_AfterChangeField_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8

  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    sub_1B64ACC(this, method);
  return fieldChange->fields.isAllowSubBgmPlaying;
}


void __fastcall BattleActionData_AfterChangeTakeOverField___ctor(
        BattleActionData_AfterChangeTakeOverField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v7, v8);
  if ( !fieldEnvData
    || (CurBackGround_k__BackingField = fieldEnvData->fields._CurBackGround_k__BackingField) == 0LL
    || (v9 = ((__int64 (__fastcall *)(BattleActionData_AfterChangeTakeOverField_o *, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_SetTakeOverBG.method)(
               this,
               *((unsigned int *)&CurBackGround_k__BackingField->fields.isActive + 1),
               (unsigned int)CurBackGround_k__BackingField->fields.id,
               this->klass->vtable._5_SetTakeOverBgmName.methodPtr),
        (CurBGM_k__BackingField = fieldEnvData->fields._CurBGM_k__BackingField) == 0LL)
    || (BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField) == 0LL )
  {
    sub_1B64ACC(v9, v10);
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

  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    sub_1B64ACC(this, id);
  fieldChange->fields.bgId = id;
  fieldChange->fields.bgType = type;
}


void __fastcall BattleActionData_AfterChangeTakeOverField__SetTakeOverBgmName(
        BattleActionData_AfterChangeTakeOverField_o *this,
        System_String_o *bgmName,
        int32_t bgmId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  BgmMaster_o *v13; // x22
  struct BattleBuffData_FieldChangeData_o *v14; // x23
  struct BattleBuffData_FieldChangeData_o *v15; // x19

  if ( (byte_4A00640 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_BgmMaster___, bgmName);
    sub_1B64870(&DataManager_TypeInfo, v7);
    byte_4A00640 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BgmMaster___);
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange
    || (fieldChange->fields.bgmName = bgmName,
        v13 = (BgmMaster_o *)Master_object,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&fieldChange->fields.bgmName, (int32_t)bgmName, v10, v11),
        !v13)
    || (v14 = this->fields.fieldChange,
        Master_object = (Il2CppObject *)BgmMaster__GetBgmIdFromFileName(v13, bgmName, bgmId, 0LL),
        !v14)
    || (v14->fields.bgmId = (int)Master_object, (v15 = this->fields.fieldChange) == 0LL) )
  {
    sub_1B64ACC(Master_object, v9);
  }
  if ( !v15->fields._HasBgmPriorityInVals_k__BackingField )
    v15->fields.bgmPriority = BgmMaster__GetBgmPriority(v13, v15->fields.bgmId, 0, 0LL);
}


void __fastcall BattleActionData_AttackDamageData___ctor(
        BattleActionData_AttackDamageData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  struct System_Int32_array **v9; // x8
  struct System_Int32_array *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4A0061F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_int___, method);
    byte_4A0061F = 1;
  }
  v5 = Method_System_Array_Empty_int___;
  v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v6 )
  {
    sub_1BB67A8(Method_System_Array_Empty_int___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB674C(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB674C(v8);
  v9 = *(struct System_Int32_array ***)(v8 + 184);
  v10 = *v9;
  this->fields.attackRatio = *v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.attackRatio, (int32_t)v10, v2, v3);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, v11);
}


int32_t __fastcall BattleActionData_AttackDamageData__GetRatioDamageList(
        BattleActionData_AttackDamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  _BOOL4 v5; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v12; // x4
  System_Collections_Generic_List_int__o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1
  struct System_Int32_array *attackRatio; // x8
  unsigned __int64 v19; // x26
  int v20; // w24
  __int64 v21; // x27
  int32_t v22; // w28
  _BOOL4 v23; // w10
  int32_t v24; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10

  v5 = minimumDamageFlg;
  if ( (byte_4A0061E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, damageList);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A0061E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.attackRatio, 0LL);
  if ( IsNullOrEmpty )
  {
    BattleActionData_DamageData__GetRatioDamageList(
      (BattleActionData_DamageData_o *)IsNullOrEmpty,
      damageList,
      damage,
      0,
      v12);
  }
  else
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
    *damageList = v13;
    sub_1B64814((ServantStatusBattleListViewItem_o *)damageList, (int32_t)v13, v14, v15);
    v16 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                      (System_Collections_Generic_IEnumerable_int__o *)this->fields.attackRatio,
                                                      0LL);
    attackRatio = this->fields.attackRatio;
    if ( !attackRatio )
      goto LABEL_20;
    v19 = 0LL;
    v20 = 0;
    v21 = (int)v16;
    v22 = damage;
    while ( (__int64)v19 < (int)(*(_QWORD *)&attackRatio->max_length - 1) )
    {
      if ( v19 >= (unsigned int)*(_QWORD *)&attackRatio->max_length )
        sub_1B64AD4(v16, v17);
      v16 = *damageList;
      v23 = (int)(attackRatio->m_Items[v19 + 1] * (__int64)v22 / v21) < 1;
      if ( v23 && v5 )
        v24 = 1;
      else
        v24 = attackRatio->m_Items[v19 + 1] * (__int64)v22 / v21;
      if ( v23 && v5 )
        v22 = (v22 - 1) & ~((v22 - 1) >> 31);
      if ( v16 )
      {
        items = v16->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( items )
        {
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v24,
              *(const MethodInfo_34921B8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            attackRatio = this->fields.attackRatio;
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size + 1] = v24;
          }
          v20 += v24;
          damage = (damage - v24) & ~((damage - v24) >> 31);
          ++v19;
          if ( attackRatio )
            continue;
        }
      }
      goto LABEL_20;
    }
    v16 = *damageList;
    if ( damage < 1 && v5 )
      damage = 1;
    if ( !v16
      || (v28 = v16->fields._items, v29 = Method_System_Collections_Generic_List_int__Add__,
                                    ++v16->fields._version,
                                    !v28) )
    {
LABEL_20:
      sub_1B64ACC(v16, v17);
    }
    v30 = v16->fields._size;
    if ( (unsigned int)v30 >= v28->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        damage,
        *(const MethodInfo_34921B8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = v30 + 1;
      v28->m_Items[v30 + 1] = damage;
    }
    damage += v20;
  }
  return damage;
}


void __fastcall BattleActionData_AttackDamageData__SetAttackRatio(
        BattleActionData_AttackDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Int32_array *klass; // x20
  BattleActionData_AttackDamageData_o *v5; // x19
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0

  klass = ratio;
  v5 = this;
  if ( (byte_4A0061D & 1) != 0 )
  {
    if ( ratio )
      goto LABEL_3;
  }
  else
  {
    this = (BattleActionData_AttackDamageData_o *)sub_1B64870(&Method_System_Array_Empty_int___, ratio);
    byte_4A0061D = 1;
    if ( klass )
    {
LABEL_3:
      if ( v5 )
        goto LABEL_4;
LABEL_15:
      sub_1B64ACC(this, ratio);
    }
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BB67A8(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB674C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  this = *(BattleActionData_AttackDamageData_o **)(v6[7] + 16LL);
  if ( (BYTE5(this[1].fields.defnplist) & 1) == 0 )
    this = (BattleActionData_AttackDamageData_o *)sub_1BB674C(this);
  klass = (struct System_Int32_array *)this->fields.attackRatio->obj.klass;
  if ( !v5 )
    goto LABEL_15;
LABEL_4:
  v5->fields.attackRatio = klass;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v5->fields.attackRatio, (int32_t)klass, (int32_t)method, v3);
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

  if ( (byte_4A00616 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, method);
    byte_4A00616 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
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
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1

  if ( (byte_4A0062A & 1) == 0 )
  {
    sub_1B64870(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_1B64870(&StringLiteral_19905/*"hp_iconeffect_before_1_"*/, v2);
    byte_4A0062A = 1;
  }
  v3 = sub_1B64ABC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v3, 0LL);
  if ( !v3 )
    sub_1B64ACC(v4, v5);
  v8 = StringLiteral_19905/*"hp_iconeffect_before_1_"*/;
  *(_QWORD *)(v3 + 24) = StringLiteral_19905/*"hp_iconeffect_before_1_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 24), v8, v6, v7);
  return (BattleServantHpShiftComponent_EffectData_o *)v3;
}


BattleAction_ShiftHpData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_4A0062D & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_IndexValue_ShiftHpData___, method);
    byte_4A0062D = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_object__48407704(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0LL,
                                         (const MethodInfo_2E2A498 *)Method_BasicHelper_IndexValue_ShiftHpData___);
}


void __fastcall BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v4 = this;
  if ( (byte_4A0062B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ShiftHpData___ctor__, svtData);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_1B64870(
                                                      &System_Collections_Generic_List_ShiftHpData__TypeInfo,
                                                      v5);
    byte_4A0062B = 1;
  }
  if ( !svtData )
    sub_1B64ACC(this, svtData);
  v4->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ShiftHpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v4->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v6;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields._ShiftHpDataList_k__BackingField, (int32_t)v6, v7, v8);
}


void __fastcall BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleActionData_BaseShiftGaugeData___c_c *v6; // x0
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  System_Action_object__o *_9__34_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A0062C & 1) == 0 )
  {
    sub_1B64870(&System_Action_ShiftHpData__TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__, v3);
    sub_1B64870(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__, v4);
    sub_1B64870(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v5);
    byte_4A0062C = 1;
  }
  this->fields.hpDataIndex = 0;
  v6 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  if ( !BattleActionData_BaseShiftGaugeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    v6 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  }
  _9__34_0 = (System_Action_object__o *)v6->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__34_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_ShiftHpData__TypeInfo);
    System_Action_object____ctor(
      _9__34_0,
      v9,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      0LL);
    static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v11, v12);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_1B64ACC(v6, method);
  System_Collections_Generic_List_object___ForEach(
    ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
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
  int32_t v3; // w3

  this->fields._ShiftHpDataList_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ShiftHpDataList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0062E & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v1);
    byte_4A0062E = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64ACC(this, 0LL);
  BattleAction_ShiftHpData__InitHpIndex(x, 0LL);
}


void __fastcall BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00626 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_4A00626 = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.removeBuffList, (int32_t)v4, v5, v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p_effectProcList; // x19
  System_Collections_ICollection_o *effectProcList; // t1
  System_Collections_Generic_List_object__o *klass; // x20
  System_Action_object__o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A00625 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionEffect_Base__TypeInfo, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__, v5);
    sub_1B64870(&Method_BattleActionData_BuffData___c__DisplayClass57_0__ExecAfterEffectProc_b__0__, v6);
    sub_1B64870(&BattleActionData_BuffData___c__DisplayClass57_0_TypeInfo, v7);
    byte_4A00625 = 1;
  }
  v8 = sub_1B64ABC(BattleActionData_BuffData___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_7;
  *(_QWORD *)(v8 + 16) = data;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)data, v11, v12);
  effectProcList = (System_Collections_ICollection_o *)this->fields.effectProcList;
  p_effectProcList = (ServantStatusBattleListViewItem_o *)&this->fields.effectProcList;
  if ( BasicHelper__IsNullOrEmpty(effectProcList, 0LL) )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
  v16 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_BattleActionData_BuffData___c__DisplayClass57_0__ExecAfterEffectProc_b__0__,
    0LL);
  if ( !klass )
LABEL_7:
    sub_1B64ACC(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    klass,
    (System_Action_T__o *)v16,
    (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
  p_effectProcList->klass = 0LL;
  sub_1B64814(p_effectProcList, 0, v17, v18);
}


void __fastcall BattleActionData_BuffData__ExecPreActionProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *effectProcList; // x19
  System_Action_object__o *v14; // x20

  if ( (byte_4A00624 & 1) == 0 )
  {
    sub_1B64870(&System_Action_BattleActionEffect_Base__TypeInfo, data);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__, v5);
    sub_1B64870(&Method_BattleActionData_BuffData___c__DisplayClass56_0__ExecPreActionProc_b__0__, v6);
    sub_1B64870(&BattleActionData_BuffData___c__DisplayClass56_0_TypeInfo, v7);
    byte_4A00624 = 1;
  }
  v8 = sub_1B64ABC(BattleActionData_BuffData___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_7;
  *(_QWORD *)(v8 + 16) = data;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)data, v11, v12);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0LL) )
    return;
  effectProcList = (System_Collections_Generic_List_object__o *)this->fields.effectProcList;
  v14 = (System_Action_object__o *)sub_1B64ABC(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_BattleActionData_BuffData___c__DisplayClass56_0__ExecPreActionProc_b__0__,
    0LL);
  if ( !effectProcList )
LABEL_7:
    sub_1B64ACC(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    effectProcList,
    (System_Action_T__o *)v14,
    (const MethodInfo_34B0490 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
}


System_Int32_array *__fastcall BattleActionData_BuffData__GetDisplayEffectIds(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
  result = (BattleBuffData_o *)BattleData__getServantData(data, this->fields.targetId, 0LL);
  if ( result )
    return (BattleBuffData_o *)result[4].fields.wkStr;
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
    sub_1B64ACC(this, 0LL);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *klass; // x0
  ServantStatusBattleListViewItem_o *p_effectProcList; // x20
  struct System_Collections_Generic_List_BattleActionEffect_Base__o *effectProcList; // t1
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4A00623 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__, effectProc);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo, v7);
    byte_4A00623 = 1;
  }
  effectProcList = this->fields.effectProcList;
  p_effectProcList = (ServantStatusBattleListViewItem_o *)&this->fields.effectProcList;
  klass = (System_Collections_Generic_List_object__o *)effectProcList;
  if ( !effectProcList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    p_effectProcList->klass = (ServantStatusBattleListViewItem_c *)v11;
    sub_1B64814(p_effectProcList, (int32_t)v11, v12, v13);
    klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
    if ( !p_effectProcList->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v15 = Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__;
  ++klass->fields._version;
  if ( !items )
LABEL_9:
    sub_1B64ACC(klass, effectProc);
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)effectProc,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v17[4] = (Il2CppClass *)effectProc;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)effectProc, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData_BuffData__SetCheckHideWhenDeadInfo(
        BattleActionData_BuffData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t v3; // w3
  DataVals_o *v4; // x20
  __int64 v6; // x1

  v4 = vals;
  if ( (byte_4A00622 & 1) == 0 )
  {
    sub_1B64870(&DataVals_TypeInfo, vals);
    sub_1B64870(&StringLiteral_1/*""*/, v6);
    byte_4A00622 = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !v4 )
  {
    v4 = (DataVals_o *)sub_1B64ABC(DataVals_TypeInfo);
    DataVals___ctor(v4, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.dataVals = v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dataVals, (int32_t)v4, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_BuffData__SetSaveTpTurn(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  if ( (byte_4A00621 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Nullable_int___ctor__, *(_QWORD *)&value);
    byte_4A00621 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, value, (const MethodInfo_35D0064 *)Method_System_Nullable_int___ctor__);
  this->fields._SaveTpTurnValue_k__BackingField = v5;
}


bool __fastcall BattleActionData_BuffData__get_ExistEffectProc(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0LL);
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


System_Nullable_int__o __fastcall BattleActionData_BuffData__get_SaveTpTurnValue(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._SaveTpTurnValue_k__BackingField;
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


void __fastcall BattleActionData_BuffData__set_SaveTpTurnValue(
        BattleActionData_BuffData_o *this,
        System_Nullable_int__o value,
        const MethodInfo *method)
{
  this->fields._SaveTpTurnValue_k__BackingField = value;
}


void __fastcall BattleActionData_BuffData__set_saveNpValue(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._saveNpValue_k__BackingField = value;
}


void __fastcall BattleActionData_BuffData___c__DisplayClass56_0___ctor(
        BattleActionData_BuffData___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_BuffData___c__DisplayClass56_0___ExecPreActionProc_b__0(
        BattleActionData_BuffData___c__DisplayClass56_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_1B64ACC(this, 0LL);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, Il2CppMethodPointer))proc->klass->vtable._4_PreActionProc.method)(
    proc,
    this->fields.data,
    proc->klass->vtable._5_AfterEffectProc.methodPtr);
}


void __fastcall BattleActionData_BuffData___c__DisplayClass57_0___ctor(
        BattleActionData_BuffData___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_BuffData___c__DisplayClass57_0___ExecAfterEffectProc_b__0(
        BattleActionData_BuffData___c__DisplayClass57_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_1B64ACC(this, 0LL);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, void *))proc->klass->vtable._5_AfterEffectProc.method)(
    proc,
    this->fields.data,
    proc->klass[1]._1.image);
}


void __fastcall BattleActionData_ChangeBg___ctor(BattleActionData_ChangeBg_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_DamageData___ctor(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct System_Int32_array **v14; // x8
  struct System_Int32_array *v15; // x1

  if ( (byte_4A0061C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_int___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo, v4);
    byte_4A0061C = 1;
  }
  this->fields.multiatk = 1;
  v5 = (System_Collections_Generic_List_T__o *)sub_1B64ABC(System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_3494230 *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.attackSideEffectActList, (int32_t)v5, v6, v7);
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1BB67A8(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB674C(v12);
  if ( !*(_DWORD *)(v12 + 224) )
    j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB674C(v13);
  v14 = *(struct System_Int32_array ***)(v13 + 184);
  v15 = *v14;
  this->fields._ResetDamageArray_k__BackingField = *v14;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)v15,
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
    return (damagelist->max_length - 1) & ~((signed int)(damagelist->max_length - 1) >> 31);
  else
    return 0;
}


int32_t __fastcall BattleActionData_DamageData__GetRatioDamageList(
        BattleActionData_DamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4A00618 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, damageList);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4A00618 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9
    || (items = v9->fields._items, v15 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v9->fields._version,
                                   !items) )
  {
    sub_1B64ACC(v10, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      damage,
      *(const MethodInfo_34921B8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    items->m_Items[size + 1] = damage;
  }
  *damageList = v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)damageList, (int32_t)v9, v12, v13);
  return damage;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__GetResetDamageValue(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4A00619 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_IndexValue_int____75719712, *(_QWORD *)&index);
    byte_4A00619 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields._ResetDamageArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2E2A430 *)Method_BasicHelper_IndexValue_int____75719712);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DamageData__SaveResetDamageArray(
        BattleActionData_DamageData_o *this,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Int32_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_int__o *v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A0061A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&damage);
    byte_4A0061A = 1;
  }
  v11 = 0LL;
  ((void (__fastcall *)(BattleActionData_DamageData_o *, System_Collections_Generic_List_int__o **, _QWORD, bool, void *))this->klass->vtable._4_GetRatioDamageList.method)(
    this,
    &v11,
    (unsigned int)damage,
    minimumDamageFlg,
    this->klass[1]._1.image);
  if ( !v11 )
    sub_1B64ACC(0LL, v7);
  v8 = System_Collections_Generic_List_int___ToArray(
         v11,
         (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._ResetDamageArray_k__BackingField = v8;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)v8,
    v9,
    v10);
}


void __fastcall BattleActionData_DamageData__SetEffectFlipProc(
        BattleActionData_DamageData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  FunctionEntity_o *ActEnemyEffectFlipDataArray; // x20
  ActEnemyEffectFlipProc_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  ActEnemyEffectFlipDataArray = funcEnt;
  if ( (byte_4A0061B & 1) == 0 )
  {
    sub_1B64870(&ActEnemyEffectFlipProc_TypeInfo, funcEnt);
    byte_4A0061B = 1;
  }
  if ( ActEnemyEffectFlipDataArray )
    ActEnemyEffectFlipDataArray = (FunctionEntity_o *)FunctionEntity__GetActEnemyEffectFlipDataArray(
                                                        ActEnemyEffectFlipDataArray,
                                                        0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ActEnemyEffectFlipDataArray, 0LL) )
  {
    v5 = (ActEnemyEffectFlipProc_o *)sub_1B64ABC(ActEnemyEffectFlipProc_TypeInfo);
    ActEnemyEffectFlipProc___ctor(v5, (EffectFlipData_array *)ActEnemyEffectFlipDataArray, 0LL);
    this->fields._EffectFlipProc_k__BackingField = v5;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._EffectFlipProc_k__BackingField, (int32_t)v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DamageData__addAttackSideEffectAction(
        BattleActionData_DamageData_o *this,
        int32_t act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *attackSideEffectActList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10

  if ( (byte_4A00617 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__, *(_QWORD *)&act);
    sub_1B64870(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__, v5);
    byte_4A00617 = 1;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_Int32Enum___Contains(
         attackSideEffectActList,
         act,
         (const MethodInfo_3494DFC *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
  {
    return;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList
    || (items = attackSideEffectActList->fields._items,
        v8 = Method_System_Collections_Generic_List_BuffList_ACTION__Add__,
        ++attackSideEffectActList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B64ACC(attackSideEffectActList, *(_QWORD *)&act);
  }
  size = attackSideEffectActList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      attackSideEffectActList,
      act,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    attackSideEffectActList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = act;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__getAtkNp(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *atknplist; // x8
  int32_t max_length; // w9

  atknplist = this->fields.atknplist;
  if ( !atknplist )
    return 0;
  max_length = atknplist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1B64AD4(this, *(_QWORD *)&index);
  return atknplist->m_Items[index + 1];
}


int32_t __fastcall BattleActionData_DamageData__getAttackCount(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    sub_1B64ACC(this, method);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData_DamageData__getCriticalPoint(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *starlist; // x8
  int32_t max_length; // w9

  starlist = this->fields.starlist;
  if ( !starlist )
    return 0;
  max_length = starlist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1B64AD4(this, *(_QWORD *)&index);
  return starlist->m_Items[index + 1] > 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__getCriticalPointCount(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *starlist; // x8
  int32_t max_length; // w9

  starlist = this->fields.starlist;
  if ( !starlist )
    return 0;
  max_length = starlist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1B64AD4(this, *(_QWORD *)&index);
  return starlist->m_Items[index + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__getDamage(
        BattleActionData_DamageData_o *this,
        int32_t index,
        bool isCheckCount,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8
  int32_t max_length; // w9

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    return -1;
  max_length = damagelist->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
    sub_1B64AD4(this, *(_QWORD *)&index);
  return damagelist->m_Items[index + 1];
}


System_Int32_array *__fastcall BattleActionData_DamageData__getDamageList(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.damagelist;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__getDefNp(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *defnplist; // x8
  int32_t max_length; // w9

  defnplist = this->fields.defnplist;
  if ( !defnplist )
    return 0;
  max_length = defnplist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1B64AD4(this, *(_QWORD *)&index);
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


ActEnemyEffectFlipProc_o *__fastcall BattleActionData_DamageData__get_EffectFlipProc(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectFlipProc_k__BackingField;
}


bool __fastcall BattleActionData_DamageData__get_IsDisplayResetDamage(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._ResetDamageArray_k__BackingField,
            0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleActionData_DamageData__get_NoDamageAffectedBuff(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields._NoDamageAffectedBuff_k__BackingField;
}


System_Int32_array *__fastcall BattleActionData_DamageData__get_ResetDamageArray(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields._ResetDamageArray_k__BackingField;
}


void __fastcall BattleActionData_DamageData__set_EffectFlipProc(
        BattleActionData_DamageData_o *this,
        ActEnemyEffectFlipProc_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EffectFlipProc_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._EffectFlipProc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData_DamageData__set_NoDamageAffectedBuff(
        BattleActionData_DamageData_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._NoDamageAffectedBuff_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._NoDamageAffectedBuff_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData_DamageData__set_ResetDamageArray(
        BattleActionData_DamageData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ResetDamageArray_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData_DamageValueFuncDamageData___ctor(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, (const MethodInfo *)ratio);
  this->fields.damageRates = ratio;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.damageRates, (int32_t)ratio, v5, v6);
}


int32_t __fastcall BattleActionData_DamageValueFuncDamageData__GetRatioDamageList(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_int__o *v17; // x0
  __int64 v18; // x1
  struct System_Int32_array *damageRates; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x22
  __int64 v22; // x25
  __int64 v23; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v27; // x21
  int v28; // w8
  int32_t v29; // w22
  int32_t Item; // w0
  System_Collections_Generic_List_int__o *v31; // x8
  int32_t v32; // w20
  int32_t v33; // w23
  int32_t v34; // w0

  if ( (byte_4A00620 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, damageList);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int__set_Item__, v11);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64870(&System_Math_TypeInfo, v13);
    byte_4A00620 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  *damageList = v14;
  sub_1B64814((ServantStatusBattleListViewItem_o *)damageList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                    (System_Collections_Generic_IEnumerable_int__o *)this->fields.damageRates,
                                                    0LL);
  damageRates = this->fields.damageRates;
  if ( !damageRates )
    goto LABEL_19;
  v20 = *(_QWORD *)&damageRates->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    v22 = (int)v17;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1B64AD4(v17, v18);
      v17 = *damageList;
      if ( !*damageList )
        break;
      v23 = damageRates->m_Items[v21 + 1];
      items = v17->fields._items;
      v25 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      v18 = v23 * damage / v22;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v17,
          v18,
          *(const MethodInfo_34921B8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        items->m_Items[size + 1] = v18;
      }
      LODWORD(v20) = damageRates->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        goto LABEL_13;
    }
LABEL_19:
    sub_1B64ACC(v17, v18);
  }
LABEL_13:
  v27 = *damageList;
  if ( !*damageList )
    goto LABEL_19;
  v28 = v27->fields._size;
  v29 = v28 - 1;
  if ( v28 >= 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             *damageList,
             v29,
             (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
    v31 = *damageList;
    v32 = Item;
    v33 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v31, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v34 = System_Math__Max_62202216(0, damage - v33, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v27,
      v29,
      v34 + v32,
      (const MethodInfo_3491F1C *)Method_System_Collections_Generic_List_int__set_Item__);
  }
  return damage;
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
  struct System_String_array *IsNullOrEmpty; // x0
  struct System_String_array *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Master_object; // x22
  BattleMessageEntity_o *v23; // x2
  const MethodInfo *v24; // x4
  int32_t DefInterval; // w0
  BattleActionData_DisplayMessageData_o *ScriptInt; // x0
  BattleMessageEntity_o *v27; // x2
  const MethodInfo *v28; // x4
  int32_t DefBaseTime; // w0
  BattleActionData_DisplayMessageData_o *v30; // x0
  BattleMessageEntity_o *v31; // x2
  const MethodInfo *v32; // x4
  int32_t DefTimePerChara; // w0
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x22
  System_Func_object__int__o *v35; // x23
  int64_t MessageType_k__BackingField; // x2

  if ( (byte_4A00639 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_ConstantMaster___, ent);
    sub_1B64870(&DataManager_TypeInfo, v9);
    sub_1B64870(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__, v10);
    sub_1B64870(&Method_System_Linq_Enumerable_Sum_string___, v11);
    sub_1B64870(&System_Func_string__int__TypeInfo, v12);
    sub_1B64870(&string___TypeInfo, v13);
    sub_1B64870(&StringLiteral_14383/*"TimePerChara"*/, v14);
    sub_1B64870(&StringLiteral_3162/*"BaseTime"*/, v15);
    sub_1B64870(&StringLiteral_8962/*"MessageType"*/, v16);
    sub_1B64870(&StringLiteral_7650/*"Interval"*/, v17);
    byte_4A00639 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !ent )
    goto LABEL_15;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_1B64918(string___TypeInfo, 0LL);
  }
  else
  {
    if ( !parser )
      goto LABEL_15;
    IsNullOrEmpty = ParseBattleMessage__Replace(parser, ent->fields.message, 0LL);
  }
  v19 = IsNullOrEmpty;
  if ( !this )
LABEL_15:
    sub_1B64ACC(IsNullOrEmpty, v19);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._Messages_k__BackingField,
    (int32_t)IsNullOrEmpty,
    v20,
    v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_object,
                  (ConstantMaster_o *)Master_object,
                  v23,
                  preMsg,
                  v24);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7650/*"Interval"*/,
                                                         DefInterval,
                                                         0LL);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_object,
                  v27,
                  preMsg,
                  v28);
  v30 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_3162/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0LL);
  this->fields.baseTime = (int)v30;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v30,
                      (ConstantMaster_o *)Master_object,
                      v31,
                      preMsg,
                      v32);
  this->fields.timePerChara = BattleMessageEntity__GetScriptInt(
                                ent,
                                (System_String_o *)StringLiteral_14383/*"TimePerChara"*/,
                                DefTimePerChara,
                                0LL);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v35 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(
    v35,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    0LL);
  this->fields.messageLen = System_Linq_Enumerable__Sum_object_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v35,
                              (const MethodInfo_2E723B8 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0LL;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_8962/*"MessageType"*/,
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
  if ( (byte_4A0063B & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1B64870(&StringLiteral_2905/*"BATTLE_MSG_BASE_TIME"*/, constMst);
    byte_4A0063B = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_1B64ACC(this, constMst);
  return ConstantMaster__GetValue_38735716(constMst, (System_String_o *)StringLiteral_2905/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4A0063A & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1B64870(&StringLiteral_2906/*"BATTLE_MSG_INTERVAL"*/, constMst);
    byte_4A0063A = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_1B64ACC(this, constMst);
  return ConstantMaster__GetValue_38735716(constMst, (System_String_o *)StringLiteral_2906/*"BATTLE_MSG_INTERVAL"*/, 250, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4A0063C & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1B64870(&StringLiteral_2978/*"BATTLE_TIME_PER_CHARA"*/, constMst);
    byte_4A0063C = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_1B64ACC(this, constMst);
  return ConstantMaster__GetValue_38735716(constMst, (System_String_o *)StringLiteral_2978/*"BATTLE_TIME_PER_CHARA"*/, 15, 0LL);
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

  if ( (byte_4A0063D & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, text);
    byte_4A0063D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__ReplaceNameTag(text, 0, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4, 0LL);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v4 )
      sub_1B64ACC(0LL, v5);
    return v4->fields._stringLength;
  }
  return result;
}


float __fastcall BattleActionData_DisplayMessageData__get_DispTime(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  int32_t baseTime; // w22
  int32_t timePerChara; // w19
  int32_t v6; // w21
  int32_t *p_timePerChara; // t2

  if ( (byte_4A00638 & 1) == 0 )
  {
    sub_1B64870(&BattleDataDefine_TypeInfo, method);
    byte_4A00638 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  baseTime = this->fields.baseTime;
  p_timePerChara = &this->fields.timePerChara;
  timePerChara = this->fields.timePerChara;
  v6 = p_timePerChara[1];
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  return (float)(baseTime + timePerChara * v6) / v3->static_fields->PERMILLAGE_DENOMINATOR;
}


float __fastcall BattleActionData_DisplayMessageData__get_Interval(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  int32_t interval; // w19

  if ( (byte_4A00637 & 1) == 0 )
  {
    sub_1B64870(&BattleDataDefine_TypeInfo, method);
    byte_4A00637 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  interval = this->fields.interval;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  return (float)interval / v3->static_fields->PERMILLAGE_DENOMINATOR;
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
  int32_t v3; // w3

  this->fields._Messages_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._Messages_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_ShiftDownHpData_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A00636 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex);
    sub_1B64870(&BattleAction_ShiftDownHpData_TypeInfo, v11);
    byte_4A00636 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v13 = (BattleAction_ShiftDownHpData_o *)sub_1B64ABC(BattleAction_ShiftDownHpData_TypeInfo);
  BattleAction_ShiftDownHpData___ctor(v13, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v19 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1B64ACC(v14, v15);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1

  if ( (byte_4A00635 & 1) == 0 )
  {
    sub_1B64870(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_1B64870(&StringLiteral_19904/*"hp_iconeffect_1_"*/, v2);
    byte_4A00635 = 1;
  }
  v3 = sub_1B64ABC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v3, 0LL);
  if ( !v3 )
    sub_1B64ACC(v4, v5);
  v8 = StringLiteral_19904/*"hp_iconeffect_1_"*/;
  *(_QWORD *)(v3 + 24) = StringLiteral_19904/*"hp_iconeffect_1_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 24), v8, v6, v7);
  return (BattleServantHpShiftComponent_EffectData_o *)v3;
}


int32_t __fastcall BattleActionData_DownShiftGaugeData__GetShiftValue(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8
  int32_t shiftDeckIndex; // w9
  signed int max_length; // w8

  if ( !svtData || (shiftDeckList = svtData->fields.shiftDeckList) == 0LL )
    sub_1B64ACC(this, svtData);
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  max_length = shiftDeckList->max_length;
  if ( shiftDeckIndex + baseValue <= max_length )
    max_length = shiftDeckIndex + baseValue;
  return max_length - shiftDeckIndex;
}


bool __fastcall BattleActionData_DownShiftGaugeData__IsInvalid(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B64ACC(this, 0LL);
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
  if ( (byte_4A00633 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_8691/*"MOTION_SHIFT_GAUGE_DOWN"*/, method);
    byte_4A00633 = 1;
  }
  return (System_String_o *)StringLiteral_8691/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A00634 & 1) == 0 )
  {
    sub_1B64870(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, method);
    byte_4A00634 = 1;
  }
  v3 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_1B64ABC(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
  BattleAction_PlayDownShiftGaugeMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_1B64ACC(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, Il2CppMethodPointer))v3->klass->vtable._7_Init.method)(
                                                v3,
                                                this,
                                                v3->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  BattleActionEffect_UpdateFieldInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A00627 & 1) == 0 )
  {
    sub_1B64870(&BattleActionEffect_UpdateFieldInfo_TypeInfo, method);
    byte_4A00627 = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v3 = (BattleActionEffect_UpdateFieldInfo_o *)sub_1B64ABC(BattleActionEffect_UpdateFieldInfo_TypeInfo);
  BattleActionEffect_UpdateFieldInfo___ctor(v3, 0LL);
  BattleActionData_BuffData__SetActionEffectProc(
    (BattleActionData_BuffData_o *)this,
    (BattleActionEffect_Base_o *)v3,
    v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData_FieldBuffData__DisplayBuff(
        BattleActionData_FieldBuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v6; // x20
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *FieldEffectPos; // x23
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  int v12; // s0
  int v15; // s0
  int v18; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1

  v6 = (BattleActionData_BuffData_o *)this;
  if ( (byte_4A00628 & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, perf);
    byte_4A00628 = 1;
  }
  if ( !perf )
    goto LABEL_22;
  this = (BattleActionData_FieldBuffData_o *)BattlePerformance__GetFieldPopupPos(perf, 0LL);
  if ( !arg )
    goto LABEL_22;
  v7 = (UnityEngine_Object_o *)this;
  FieldEffectPos = (UnityEngine_Object_o *)BattlePerformance__GetFieldEffectPos(perf, arg->fields.isTreasureDevice, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActionData_FieldBuffData_o *)UnityEngine_Object__op_Equality(FieldEffectPos, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !arg->fields.isTreasureDevice )
  {
    if ( FieldEffectPos )
      goto LABEL_19;
LABEL_22:
    sub_1B64ACC(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0LL);
  if ( !uicamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Camera__WorldToViewportPoint_68942216(
                                     uicamera,
                                     *(UnityEngine_Vector3_o *)&v12,
                                     0LL);
  if ( !actorcamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ViewportToWorldPoint_68942224(
                                     actorcamera,
                                     *(UnityEngine_Vector3_o *)&v15,
                                     0LL);
  if ( !FieldEffectPos )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)FieldEffectPos,
    *(UnityEngine_Vector3_o *)&v18,
    0LL);
LABEL_19:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldEffectPos, 0LL);
  BattlePerformance__DisplayFieldBuffEffect(perf, gameObject, v6, arg, 0LL);
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v22);
    byte_49F9201 = 1;
  }
  BattlePerformance__DisplayFieldBuffPopup(
    perf,
    (UnityEngine_Transform_o *)v7,
    v6,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  return 1;
}


BattleBuffData_o *__fastcall BattleActionData_FieldBuffData__GetTargetBattleBuffData(
        BattleActionData_FieldBuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionData_FieldBuffData_o *)data->fields._FieldEnvData_k__BackingField) == 0LL )
    sub_1B64ACC(this, data);
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
    sub_1B64ACC(v5, v6);
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
    sub_1B64ACC(this, perf);
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
    goto LABEL_7;
  if ( popLabel->fields._stringLength && this->fields.popColor > 0 )
    return 1;
  effectList = this->fields.effectList;
  if ( !effectList )
LABEL_7:
    sub_1B64ACC(this, method);
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


void __fastcall BattleActionData_ShiftServant___ctor(
        BattleActionData_ShiftServant_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.functionIndex = funcIndex;
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


BattleServantSnapShot_o *__fastcall BattleActionData_ShiftServant__get_AfterSvtCache(
        BattleActionData_ShiftServant_o *this,
        const MethodInfo *method)
{
  return this->fields._AfterSvtCache_k__BackingField;
}


bool __fastcall BattleActionData_ShiftServant__get_IsUiUpdated(
        BattleActionData_ShiftServant_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUiUpdated_k__BackingField;
}


void __fastcall BattleActionData_ShiftServant__setBeforeSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( !svtData )
    sub_1B64ACC(this, 0LL);
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
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.loadedAssetArgs,
    (int32_t)LoadedAssetArgs_k__BackingField,
    v6,
    v7);
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
    sub_1B64ACC(this, 0LL);
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


void __fastcall BattleActionData_ShiftServant__set_AfterSvtCache(
        BattleActionData_ShiftServant_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._AfterSvtCache_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._AfterSvtCache_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData_ShiftServant__set_IsUiUpdated(
        BattleActionData_ShiftServant_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUiUpdated_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_SideEffectData___ctor(
        BattleActionData_SideEffectData_o *this,
        int32_t targetId,
        BuffList_ACTION_array *sideEffectActs,
        const MethodInfo *method)
{
  struct BuffList_ACTION_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A00615 & 1) == 0 )
  {
    sub_1B64870(&BuffList_ACTION___TypeInfo, *(_QWORD *)&targetId);
    byte_4A00615 = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_1B64918(BuffList_ACTION___TypeInfo, 0LL);
  this->fields.sideEffectActs = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectActs, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetId = targetId;
  this->fields.sideEffectActs = sideEffectActs;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectActs, (int32_t)sideEffectActs, v10, v11);
}


void __fastcall BattleActionData_SkillShiftServant___ctor(
        BattleActionData_SkillShiftServant_o *this,
        BattleData_o *data,
        int32_t shiftNpcId,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = this;
  this->fields.displayType = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.data = data;
  v6 = (BattleActionData_SkillShiftServant_o *)((char *)v6 + 80);
  v6[-1].fields.svtId = 0;
  sub_1B64814((ServantStatusBattleListViewItem_o *)v6, (int32_t)data, v7, v8);
  LODWORD(v6->monitor) = shiftNpcId;
}


void __fastcall BattleActionData_SkillShiftServant__SetAddBeforeSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B64ACC(this, 0LL);
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
      sub_1B64ACC(this, 0LL);
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
  int v6; // w8
  struct BattleData_o *data; // x8
  const MethodInfo *v8; // x2

  v3 = targetData;
  v4 = this;
  if ( (byte_4A00629 & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_1B64870(&int___TypeInfo, targetData);
    byte_4A00629 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  buffData = v3->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_1B64918(int___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_11;
  v6 = *(_DWORD *)&this->fields.IsForceBuffEffect;
  targetData = (BattleServantData_o *)this;
  if ( !v6 || (this->fields.svtId = 10, v6 == 1) )
    sub_1B64AD4(this, this);
  this->fields.limit = 24;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypePassiveBuff(buffData, (System_Int32_array *)this, 0LL),
        BattleServantData__setSkillShiftServant(v3, v4->fields.data, v4->fields.npcId, 0LL),
        (data = v4->fields.data) == 0LL)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0LL )
  {
LABEL_11:
    sub_1B64ACC(this, targetData);
  }
  BattleLogic__actClassPassiveSkill((BattleLogic_o *)this, v3->fields.uniqueId, 0LL);
  BattleActionData_ShiftServant__setCheckSvtData((BattleActionData_ShiftServant_o *)v4, v3, v8);
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
  bool v12; // w24

  v12 = isEffect;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.functionIndex = inFuncIndex;
  this->fields.uniqueId = inUniqueId;
  this->fields.unloadUniqueId = inUnloadUniqueId;
  this->fields.isEffectSummon = v12;
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


void __fastcall BattleActionData_TreasureDvcAfterChangeBgm___ctor(
        BattleActionData_TreasureDvcAfterChangeBgm_o *this,
        BattleBuffData_ChangeBgmData_o *inChangeBgm,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.changeBgm = inChangeBgm;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.changeBgm, (int32_t)inChangeBgm, v5, v6);
}


System_String_o *__fastcall BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
        BattleActionData_TreasureDvcAfterChangeBgm_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  BattleActionData_TreasureDvcAfterChangeBgm_o *v5; // x20
  BattleBuffData_ChangeBgmData_o *changeBgm; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *v8; // x20
  System_String_o *monitor; // x8

  if ( !perf
    || (v5 = this,
        this = (BattleActionData_TreasureDvcAfterChangeBgm_o *)BattlePerformance__get_FieldEnvData(perf, 0LL),
        (changeBgm = v5->fields.changeBgm) == 0LL)
    || (v8 = this,
        this = (BattleActionData_TreasureDvcAfterChangeBgm_o *)BattleBuffData_ChangeBgmData__MakeBgmGenerator(
                                                                 changeBgm,
                                                                 perf->fields.data,
                                                                 0LL),
        !v8)
    || (this = (BattleActionData_TreasureDvcAfterChangeBgm_o *)(*(__int64 (__fastcall **)(BattleActionData_TreasureDvcAfterChangeBgm_o *, BattleActionData_TreasureDvcAfterChangeBgm_o *, __int64, _QWORD, void *))&v8->klass[1]._1.byval_arg.bits)(
                                                                 v8,
                                                                 this,
                                                                 2LL,
                                                                 0LL,
                                                                 v8->klass[1]._1.this_arg.data)) == 0LL )
  {
    sub_1B64ACC(this, perf);
  }
  monitor = (System_String_o *)this[1].monitor;
  if ( monitor )
    monitor = (System_String_o *)monitor[1].klass;
  if ( monitor )
    return monitor;
  else
    return defBgmName;
}


bool __fastcall BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(
        BattleActionData_TreasureDvcAfterChangeBgm_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgm; // x8

  changeBgm = this->fields.changeBgm;
  if ( !changeBgm )
    sub_1B64ACC(this, method);
  return changeBgm->fields.isAllowSubBgmPlaying;
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
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_ShiftUpHpData_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A00632 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex);
    sub_1B64870(&BattleAction_ShiftUpHpData_TypeInfo, v11);
    byte_4A00632 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v13 = (BattleAction_ShiftUpHpData_o *)sub_1B64ABC(BattleAction_ShiftUpHpData_TypeInfo);
  BattleAction_ShiftUpHpData___ctor(v13, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v19 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1B64ACC(v14, v15);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1

  if ( (byte_4A00631 & 1) == 0 )
  {
    sub_1B64870(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_1B64870(&StringLiteral_19903/*"hp_iconcharge_1_"*/, v2);
    byte_4A00631 = 1;
  }
  v3 = sub_1B64ABC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v3, 0LL);
  if ( !v3 )
    sub_1B64ACC(v4, v5);
  v8 = StringLiteral_19903/*"hp_iconcharge_1_"*/;
  *(_QWORD *)(v3 + 24) = StringLiteral_19903/*"hp_iconcharge_1_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 24), v8, v6, v7);
  return (BattleServantHpShiftComponent_EffectData_o *)v3;
}


int32_t __fastcall BattleActionData_UpShiftGaugeData__GetShiftValue(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  int32_t shiftDeckIndex; // w8
  int v5; // w9

  if ( !svtData )
    sub_1B64ACC(this, 0LL);
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  v5 = shiftDeckIndex - baseValue;
  if ( shiftDeckIndex - baseValue <= 1 )
    v5 = 1;
  return v5 - shiftDeckIndex;
}


bool __fastcall BattleActionData_UpShiftGaugeData__IsInvalid(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B64ACC(this, 0LL);
  return svtData->fields.shiftDeckIndex < 2;
}


void __fastcall BattleActionData_UpShiftGaugeData__UpdateMaxShift(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *targetSvtData,
        bool isChangeMaxBreakGauge,
        const MethodInfo *method)
{
  int32_t lowLimitShift; // w8

  if ( !targetSvtData )
    sub_1B64ACC(this, 0LL);
  lowLimitShift = targetSvtData->fields.lowLimitShift;
  if ( isChangeMaxBreakGauge )
  {
    if ( --lowLimitShift <= 1 )
      lowLimitShift = 1;
  }
  else if ( lowLimitShift >= targetSvtData->fields.shiftDeckIndex )
  {
    lowLimitShift = targetSvtData->fields.shiftDeckIndex;
  }
  targetSvtData->fields.lowLimitShift = lowLimitShift;
}


System_String_o *__fastcall BattleActionData_UpShiftGaugeData__get_Motion(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0062F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_8692/*"MOTION_SHIFT_GAUGE_UP"*/, method);
    byte_4A0062F = 1;
  }
  return (System_String_o *)StringLiteral_8692/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A00630 & 1) == 0 )
  {
    sub_1B64870(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo, method);
    byte_4A00630 = 1;
  }
  v3 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1B64ABC(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_1B64ACC(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, Il2CppMethodPointer))v3->klass->vtable._7_Init.method)(
                                                v3,
                                                this,
                                                v3->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A00641 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData___c_TypeInfo, v1);
    byte_4A00641 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(BattleActionData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActionData___c_TypeInfo->static_fields->__9 = (struct BattleActionData___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)BattleActionData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleActionData___c___ctor(BattleActionData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c___AddDisplayTriggerIntervalBuff_b__151_0(
        BattleActionData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B64ACC(this, 0LL);
  BattleBuffData_BuffData__UpdateInterval(buff, 0LL);
}


BattleActionData_o *__fastcall BattleActionData___c___AddSideEffectAfterAction_b__305_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_1B64ACC(this, 0LL);
  return act->fields.afterActionData;
}


bool __fastcall BattleActionData___c___ExecUnappliedProcess_b__123_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


bool __fastcall BattleActionData___c___ExistFuncSideEffectTrigger_b__157_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArrayEx_b__125_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B64ACC(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArray_b__124_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B64ACC(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__284_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__284_3(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BattleActionData___c___PreActionProcess_b__122_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


void __fastcall BattleActionData___c___ResetAllCheckDead_b__181_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__126_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.functionIndex;
}


void __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__126_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool __fastcall BattleActionData___c___SetFuncTargetAllDead_b__138_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return BattleServantData__isAliveLogic(x, 0, 0LL);
}


void __fastcall BattleActionData___c___SetPopupOnce_b__127_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  x->fields.isOncePop = 1;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__293_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.targetId;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__293_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__158_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__158_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateIntervalBuff_b__148_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B64ACC(this, 0LL);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_1B64ACC(this, 0LL);
  damagelist = x->fields.damagelist;
  if ( damagelist )
    return (damagelist->max_length - 1) & ~((signed int)(damagelist->max_length - 1) >> 31);
  else
    return 0;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_4(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__285_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__285_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__285_2(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


void __fastcall BattleActionData___c__DisplayClass122_0___ctor(
        BattleActionData___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass122_0___PreActionProcess_b__1(
        BattleActionData___c__DisplayClass122_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  BattleActionData_BuffData__ExecPreActionProc(x, this->fields.data, method);
}


void __fastcall BattleActionData___c__DisplayClass123_0___ctor(
        BattleActionData___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass123_0___ExecUnappliedProcess_b__1(
        BattleActionData___c__DisplayClass123_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  BattleActionData_BuffData__ExecAfterEffectProc(x, this->fields.data, method);
}


void __fastcall BattleActionData___c__DisplayClass124_0___ctor(
        BattleActionData___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass124_0___GetExecOrderArray_b__0(
        BattleActionData___c__DisplayClass124_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A00642 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x);
    byte_4A00642 = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1B64ACC(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData___c__DisplayClass124_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass124_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A00643 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x);
    byte_4A00643 = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1B64ACC(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData___c__DisplayClass126_0___ctor(
        BattleActionData___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass126_0___SetFuncSideEffectTrigger_b__1(
        BattleActionData___c__DisplayClass126_0_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.functionIndex == this->fields.lastIndex;
}


void __fastcall BattleActionData___c__DisplayClass138_0___ctor(
        BattleActionData___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass138_0___SetFuncTargetAllDead_b__0(
        BattleActionData___c__DisplayClass138_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.isEnemy != this->fields.isActorEnemy;
}


void __fastcall BattleActionData___c__DisplayClass150_0___ctor(
        BattleActionData___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass150_0___UpdateDirectIntervalBuffData_b__0(
        BattleActionData___c__DisplayClass150_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B64ACC(this, 0LL);
  return BattleBuffData_BuffData__EqualBuffType(buff, this->fields.buffMst, this->fields.targetType, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass168_0___ctor(
        BattleActionData___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass168_0___getDamageList_b__0(
        BattleActionData___c__DisplayClass168_0_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass173_0___ctor(
        BattleActionData___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass173_0___GetDamageArrayDistinctIndex_b__0(
        BattleActionData___c__DisplayClass173_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct BattleActionData_DamageData_o *damage; // x8

  if ( !x || (damage = this->fields.damage) == 0LL )
    sub_1B64ACC(this, x);
  return x->fields.functionIndex == damage->fields.functionIndex;
}


void __fastcall BattleActionData___c__DisplayClass180_0___ctor(
        BattleActionData___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass180_0___getBuffList_b__0(
        BattleActionData___c__DisplayClass180_0_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass187_0___ctor(
        BattleActionData___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass187_0___getHealList_b__0(
        BattleActionData___c__DisplayClass187_0_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass192_0___ctor(
        BattleActionData___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass192_0___getReplaceMember_b__0(
        BattleActionData___c__DisplayClass192_0_o *this,
        BattleActionData_ReplaceMember_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass205_0___ctor(
        BattleActionData___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass205_0___getSummonServant_b__0(
        BattleActionData___c__DisplayClass205_0_o *this,
        BattleActionData_SummonServant_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass284_0___ctor(
        BattleActionData___c__DisplayClass284_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetFuncTargetIds_b__0(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A00644 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1B64870(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_4A00644 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1B64ACC(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A00645 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1B64870(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_4A00645 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1B64ACC(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A00646 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1B64870(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_4A00646 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1B64ACC(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass287_0___ctor(
        BattleActionData___c__DisplayClass287_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__0(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4A00647 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_4A00647 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_35D007C *)Method_System_Nullable_int__get_Value__) > x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4A00648 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_4A00648 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_35D007C *)Method_System_Nullable_int__get_Value__) == x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4A00649 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_4A00649 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_35D007C *)Method_System_Nullable_int__get_Value__) < x;
}


void __fastcall BattleActionData___c__DisplayClass292_0___ctor(
        BattleActionData___c__DisplayClass292_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass292_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass292_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64ACC(this, 0LL);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, method);
}


void __fastcall BattleActionData___c__DisplayClass293_0___ctor(
        BattleActionData___c__DisplayClass293_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass293_0___SetSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass293_0_o *this,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass293_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  BattleActionData___c_c *v12; // x0
  System_Collections_Generic_List_int__o *targetList; // x20
  System_Func_object__int__o *_9__293_1; // x22
  Il2CppObject *v15; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  BattleActionData___c_c *v20; // x0
  System_Collections_Generic_List_int__o *v21; // x19
  System_Func_object__int__o *_9__293_2; // x21
  Il2CppObject *v23; // x22
  struct BattleActionData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  v2 = this;
  if ( (byte_4A0064A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, method);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___, v3);
    sub_1B64870(&System_Func_BattleActionData_HealData__int__TypeInfo, v4);
    sub_1B64870(&System_Func_BattleActionData_BuffData__int__TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B64870(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_1__, v7);
    sub_1B64870(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_2__, v8);
    this = (BattleActionData___c__DisplayClass293_0_o *)sub_1B64870(&BattleActionData___c_TypeInfo, v9);
    byte_4A0064A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v12 = BattleActionData___c_TypeInfo;
    targetList = v2->fields.targetList;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v12 = BattleActionData___c_TypeInfo;
    }
    _9__293_1 = (System_Func_object__int__o *)v12->static_fields->__9__293_1;
    if ( !_9__293_1 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleActionData___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__293_1 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__293_1,
        v15,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__293_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__293_1;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__293_1, (int32_t)_9__293_1, v17, v18);
    }
    this = (BattleActionData___c__DisplayClass293_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__293_1,
                                                          (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_23;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_23;
  }
  healdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.healdatalist;
  if ( healdatalist )
  {
    v20 = BattleActionData___c_TypeInfo;
    v21 = v2->fields.targetList;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v20 = BattleActionData___c_TypeInfo;
    }
    _9__293_2 = (System_Func_object__int__o *)v20->static_fields->__9__293_2;
    if ( !_9__293_2 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleActionData___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__293_2 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_BattleActionData_HealData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__293_2,
        v23,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_2__,
        0LL);
      v24 = BattleActionData___c_TypeInfo->static_fields;
      v24->__9__293_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__293_2;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v24->__9__293_2, (int32_t)_9__293_2, v25, v26);
    }
    this = (BattleActionData___c__DisplayClass293_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__293_2,
                                                          (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v21 )
    {
      System_Collections_Generic_List_int___AddRange(
        v21,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_23:
    sub_1B64ACC(this, method);
  }
}


void __fastcall BattleActionData___c__DisplayClass294_0___ctor(
        BattleActionData___c__DisplayClass294_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass294_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass294_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64ACC(this, 0LL);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, method);
}


void __fastcall BattleActionData___c__DisplayClass301_0___ctor(
        BattleActionData___c__DisplayClass301_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass301_0___getSideEffectList_b__0(
        BattleActionData___c__DisplayClass301_0_o *this,
        BattleActionData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64ACC(this, 0LL);
  return s->fields.actType == this->fields.actType;
}


void __fastcall BattleActionData___c__DisplayClass305_0___ctor(
        BattleActionData___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass305_0___AddSideEffectAfterAction_b__0(
        BattleActionData___c__DisplayClass305_0_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || !act )
    sub_1B64ACC(this, act);
  return BattleActionData__ExistsAddableAfterAction(act, perf->fields.data, method);
}


void __fastcall BattleActionData___c__DisplayClass315_0___ctor(
        BattleActionData___c__DisplayClass315_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass315_0___addReflectLogicResultServantId_b__0(
        BattleActionData___c__DisplayClass315_0_o *this,
        BattleActionData_ServantLogicResultData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}