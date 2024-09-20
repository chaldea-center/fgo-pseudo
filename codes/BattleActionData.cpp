void __fastcall BattleActionData___cctor(const MethodInfo *method)
{
  struct BattleActionData_StaticFields *static_fields; // x8

  if ( (byte_4A5D39E & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D39E = 1;
  }
  static_fields = BattleActionData_TypeInfo->static_fields;
  static_fields->addActionOrder = 0;
  *(_OWORD *)&static_fields->TYPE_DEAD = xmmword_BB4E70;
  *(_OWORD *)&static_fields->TYPE_RESURRECTION = xmmword_BB5920;
  *(_OWORD *)&static_fields->TYPE_ORDERBUSTER = xmmword_BB5150;
}


void __fastcall BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_T__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_int__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_HashSet_int__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_4A5D39D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D39D = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1LL;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1LL;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.damageSideEffectedSvtIds, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1B887FC(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v6,
    (const MethodInfo_344AF50 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.attackSideEffectedSvtIds, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantLogicResultList, (int32_t)v9, v10, v11);
  this->fields.funcResult = 1;
  v12 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcTargetList, (int32_t)v15, v16, v17);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v18;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int32_t)v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v21,
    (const MethodInfo_312AC60 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v21;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int32_t)v21,
    v22,
    v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillCutInMessage, v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectList, (int32_t)v27, v28, v29);
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
  sub_1B88554(
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
  System_Collections_Generic_List_object__o *buffdatalist; // x0
  ServantStatusBattleListViewItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A5D359 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    byte_4A5D359 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.buffdatalist;
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B88554(p_buffdatalist, (int32_t)v8, v9, v10);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
    if ( !p_buffdatalist->klass )
      goto LABEL_11;
  }
  items = buffdatalist->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__;
  ++buffdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1B8880C(buffdatalist, data);
  size = buffdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      buffdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    buffdatalist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


BattleActionData_DisplayMessageData_o *__fastcall BattleActionData__AddDisplayMessage(
        BattleActionData_o *this,
        BattleMessageEntity_o *ent,
        ParseBattleMessage_o *parser,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  BattleActionData_DisplayMessageData_o *v9; // x19
  const MethodInfo *v10; // x4
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *DispMsgList_k__BackingField; // x0
  ServantStatusBattleListViewItem_o *p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4A5D36E & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_4A5D36E = 1;
  }
  v9 = (BattleActionData_DisplayMessageData_o *)sub_1B887FC(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor(v9, ent, parser, preMsg, v10);
  DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._DispMsgList_k__BackingField;
    v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    p_DispMsgList_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v16;
    sub_1B88554(p_DispMsgList_k__BackingField, (int32_t)v16, v17, v18);
    DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)p_DispMsgList_k__BackingField->klass;
    if ( !p_DispMsgList_k__BackingField->klass )
      goto LABEL_10;
  }
  items = DispMsgList_k__BackingField->fields._items;
  v20 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
  ++DispMsgList_k__BackingField->fields._version;
  if ( !items )
LABEL_10:
    sub_1B8880C(DispMsgList_k__BackingField, v11);
  size = DispMsgList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DispMsgList_k__BackingField,
      (Il2CppObject *)v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    DispMsgList_k__BackingField->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v9, v12, v13);
  }
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
  System_Action_object__o *v7; // x22
  Il2CppObject *v8; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  v5 = this;
  if ( (byte_4A5D34E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__);
    sub_1B885B0(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__151_0__);
    this = (BattleActionData_o *)sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D34E = 1;
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
  v7 = *(System_Action_object__o **)(*(_QWORD *)&this->fields.commandAssistId + 80LL);
  if ( !v7 )
  {
    if ( !*(_DWORD *)&this->fields.funcResult )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
    }
    v8 = **(Il2CppObject ***)&this->fields.commandAssistId;
    v7 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(v7, v8, Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__151_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__151_0 = (struct System_Action_BattleBuffData_BuffData__o *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__151_0, (int32_t)v7, v10, v11);
  }
  if ( !v5 )
LABEL_12:
    sub_1B8880C(this, task);
  BattleActionData__AddUpdateIntervalBuffDict(
    v5,
    key,
    (System_Action_BattleBuffData_BuffData__o *)v7,
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
  System_Action_object__o *v11; // x23
  const MethodInfo *v12; // x4

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5D349 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleBuffData_BuffData__TypeInfo);
    this = (BattleActionData_o *)sub_1B885B0(&Method_BattleActionData_UpdateIntervalCurrent__);
    byte_4A5D349 = 1;
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
        sub_1B88814(this, data);
      v8 = &v6->klass + (int)v7;
      v9 = (BattleServantData_o *)v8[4];
      if ( !v9 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v8[4], 0LL);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray(
                                      (BattleBuffData_o *)this,
                                      (const MethodInfo *)data);
      v11 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(v11, v4, Method_BattleActionData_UpdateIntervalCurrent__, 0LL);
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
    sub_1B8880C(this, data);
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
  System_Collections_Generic_List_object__o *healdatalist; // x0
  ServantStatusBattleListViewItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A5D35D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    byte_4A5D35D = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.healdatalist;
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B88554(p_healdatalist, (int32_t)v8, v9, v10);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
    if ( !p_healdatalist->klass )
      goto LABEL_11;
  }
  items = healdatalist->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_HealData__Add__;
  ++healdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1B8880C(healdatalist, data);
  size = healdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      healdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    healdatalist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData__AddHpDecreaseFuncTargets(
        BattleActionData_o *this,
        int32_t funcType,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  bool IsRelatedHpDecrease; // w0
  System_Action_int__o *v8; // x21

  if ( (byte_4A5D347 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_int___);
    sub_1B885B0(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__133_0__);
    byte_4A5D347 = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0LL);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v8 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v8,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__133_0__,
        0LL);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v8,
        (const MethodInfo_2E6C3A8 *)Method_BasicHelper_ForEach_int___);
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
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x19
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A5D362 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__);
    sub_1B885B0(&BattleActionData_MoveToSubMember_TypeInfo);
    byte_4A5D362 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = (System_Collections_Generic_List_object__o *)this->fields.moveToSubMemberList;
  v12 = sub_1B887FC(BattleActionData_MoveToSubMember_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 28) = index;
  *(_DWORD *)(v12 + 32) = uniqueId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_BYTE *)(v12 + 36) = isSucceeded;
  if ( !moveToSubMemberList
    || (items = moveToSubMemberList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
        ++moveToSubMemberList->fields._version,
        !items) )
  {
    sub_1B8880C(v13, v14);
  }
  size = moveToSubMemberList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      moveToSubMemberList,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    moveToSubMemberList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), v12, v15, v16);
  }
}


void __fastcall BattleActionData__AddSideEffectAfterAction(
        BattleActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x22
  BattlePerformance_o *v6; // x0
  BattleActionData_array *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  BattlePerformance_o **v10; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  BattleActionData___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__object__o *_9__305_1; // x21
  Il2CppObject *v17; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4A5D390 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleActionData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActionData___);
    sub_1B885B0(&System_Func_BattleActionData__BattleActionData__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__AddSideEffectAfterAction_b__305_1__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass305_0__AddSideEffectAfterAction_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass305_0_TypeInfo);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D390 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass305_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = perf;
  v10 = (BattlePerformance_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)perf, v8, v9);
  sideEffectList = this->fields.sideEffectList;
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass305_0__AddSideEffectAfterAction_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v14 = BattleActionData___c_TypeInfo;
  v15 = v13;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v14 = BattleActionData___c_TypeInfo;
  }
  _9__305_1 = (System_Func_object__object__o *)v14->static_fields->__9__305_1;
  if ( !_9__305_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleActionData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__305_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleActionData__BattleActionData__TypeInfo);
    System_Func_object__object____ctor(
      _9__305_1,
      v17,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__305_1__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__305_1 = (struct System_Func_BattleActionData__BattleActionData__o *)_9__305_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__305_1, (int32_t)_9__305_1, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__305_1,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v6 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_object_(
                                v21,
                                (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v6 )
    goto LABEL_15;
  v7 = (BattleActionData_array *)v6;
  if ( v6->fields.m_CancellationTokenSource )
  {
    v6 = *v10;
    if ( *v10 )
    {
      BattlePerformance__addActionData(v6, v7, 0LL);
      return;
    }
LABEL_15:
    sub_1B8880C(v6, v7);
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
  __int64 v11; // x19
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *transformServantlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4A5D364 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__);
    sub_1B885B0(&BattleActionData_TransformServant_TypeInfo);
    byte_4A5D364 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v11 = sub_1B887FC(BattleActionData_TransformServant_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 28) = index;
  *(_DWORD *)(v11 + 32) = uniqueId;
  *(_DWORD *)(v11 + 16) = funcIndex;
  *(_DWORD *)(v11 + 36) = overwriteLimitCount;
  transformServantlist = (System_Collections_Generic_List_object__o *)this->fields.transformServantlist;
  if ( !transformServantlist
    || (items = transformServantlist->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
        ++transformServantlist->fields._version,
        !items) )
  {
    sub_1B8880C(transformServantlist, v12);
  }
  size = transformServantlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      transformServantlist,
      (Il2CppObject *)v11,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    transformServantlist->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), v11, v13, v14);
  }
}


void __fastcall BattleActionData__AddUpdateIntervalBuffDict(
        BattleActionData_o *this,
        BattleServantData_o *svtData,
        System_Action_BattleBuffData_BuffData__o *updateAction,
        BattleBuffData_BuffData_array *intervalArray,
        const MethodInfo *method)
{
  const MethodInfo_3434EEC *v9; // x4
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_object__o *v15; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v16; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v17; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v18; // 0:x1.16

  if ( (byte_4A5D34A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4A5D34A = 1;
  }
  v16.fields.key = 0LL;
  v16.fields.value = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)intervalArray, 0LL) )
  {
    v17.fields.key = (Il2CppObject *)&v16;
    v17.fields.value = (Il2CppObject *)svtData;
    System_Collections_Generic_KeyValuePair_object__object____ctor(
      v17,
      (Il2CppObject *)updateAction,
      (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v9);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_12;
    if ( !System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___ContainsKey(
            IntervalBuffDict_k__BackingField,
            v16,
            (const MethodInfo_312B850 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v16.fields.key;
      value = v16.fields.value;
      v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v12 )
        goto LABEL_12;
      v18.fields.key = key;
      v18.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v12,
        v18,
        (Il2CppObject *)v15,
        (const MethodInfo_312B630 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v16,
                                                                                                    (const MethodInfo_312B598 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(IntervalBuffDict_k__BackingField, v10);
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
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v11; // x0
  System_Func_object__bool__o *_9__123_0; // x21
  Il2CppObject *v13; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Action_object__o *v18; // x21

  if ( (byte_4A5D342 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1B885B0(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__ExecUnappliedProcess_b__123_0__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass123_0__ExecUnappliedProcess_b__1__);
    sub_1B885B0(&BattleActionData___c__DisplayClass123_0_TypeInfo);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D342 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass123_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v11 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v11 = BattleActionData___c_TypeInfo;
    }
    _9__123_0 = (System_Func_object__bool__o *)v11->static_fields->__9__123_0;
    if ( !_9__123_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleActionData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__123_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__123_0,
        v13,
        Method_BattleActionData___c__ExecUnappliedProcess_b__123_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__123_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__123_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__123_0,
                                                           (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v18 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass123_0__ExecUnappliedProcess_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)v18,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool __fastcall BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  BattleActionData___c_c *v4; // x0
  System_Func_object__bool__o *_9__157_0; // x20
  Il2CppObject *v6; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D34F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleActionData_BaseData___);
    sub_1B885B0(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__157_0__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D34F = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, 0LL) )
    return 0;
  v4 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v4 = BattleActionData___c_TypeInfo;
  }
  _9__157_0 = (System_Func_object__bool__o *)v4->static_fields->__9__157_0;
  if ( !_9__157_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleActionData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__157_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__157_0,
      v6,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__157_0__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__157_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__157_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__157_0, (int32_t)_9__157_0, v8, v9);
  }
  return BasicHelper__Any_object__48672124(
           (System_Object_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__157_0,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_BattleActionData_BaseData___);
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
    sub_1B8880C(this, 0LL);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0LL);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL);
}


System_Int32_array *__fastcall BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4A5D37F & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D37F = 1;
  }
  return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
}


BattleActionData_DamageData_array *__fastcall BattleActionData__GetDamageArrayDistinctIndex(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  BattleActionData_DamageData_array *DamageList; // x0
  Il2CppObject *v8; // x1
  BattleActionData_DamageData_array *v9; // x20
  unsigned __int64 v10; // x24
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  BattleActionData_DamageData_o *v14; // x1
  System_Func_object__bool__o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5D358 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleActionData_DamageData___);
    sub_1B885B0(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass173_0__GetDamageArrayDistinctIndex_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass173_0_TypeInfo);
    byte_4A5D358 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v6);
  if ( !DamageList )
    goto LABEL_17;
  v9 = DamageList;
  if ( (int)DamageList->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_1B887FC(BattleActionData___c__DisplayClass173_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( v10 >= v9->max_length )
        sub_1B88814(DamageList, v8);
      if ( !v11 )
        break;
      v14 = v9->m_Items[v10];
      *(_QWORD *)(v11 + 16) = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)v14, v12, v13);
      v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v15,
        (Il2CppObject *)v11,
        Method_BattleActionData___c__DisplayClass173_0__GetDamageArrayDistinctIndex_b__0__,
        0LL);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_object_(
                                                          (System_Collections_Generic_List_T__o *)v5,
                                                          (System_Func_T__bool__o *)v15,
                                                          (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_BattleActionData_DamageData___);
      if ( ((unsigned __int8)DamageList & 1) == 0 )
      {
        if ( !v5 )
          break;
        v8 = *(Il2CppObject **)(v11 + 16);
        items = v5->fields._items;
        v19 = Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v8,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v8, v16, v17);
        }
      }
      if ( (__int64)++v10 >= (int)v9->max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B8880C(DamageList, v8);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDamageTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v5; // x1
  System_Int32_array *v6; // x19
  const MethodInfo *v7; // x1
  il2cpp_array_size_t i; // w22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  char *v11; // x9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D37E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__);
    byte_4A5D37E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                  this,
                                                                  *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v6 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v7)) == 0LL) )
  {
    sub_1B8880C(damagedatalist, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    damagedatalist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields._current )
      sub_1B8880C(v9, v10);
    if ( !v6 )
      sub_1B8880C(v9, v10);
    if ( i >= v6->max_length )
      sub_1B88814(v9, v10);
    v11 = (char *)v6 + 4 * (int)i;
    *((_DWORD *)v11 + 8) = HIDWORD(v13.fields._current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v6;
}


System_Int32_array *__fastcall BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4A5D380 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D380 = 1;
  }
  return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
}


BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArray(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *v6; // x23
  BattleActionData___c_c *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  BattleActionData___c_c **v11; // x21
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  System_Action_object__o *v14; // x24
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x19
  System_Action_object__o *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x19
  System_Comparison_T__o *_9__124_2; // x20
  Il2CppObject *v20; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5D343 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1B885B0(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_1B885B0(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__GetExecOrderArray_b__124_2__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__0__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__1__);
    sub_1B885B0(&BattleActionData___c__DisplayClass124_0_TypeInfo);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D343 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = v6;
  v11 = (BattleActionData___c_c **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v12);
  v14 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    BuffList,
    (System_Action_T__o *)v14,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v15);
  v17 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    HealList,
    (System_Action_T__o *)v17,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  v7 = BattleActionData___c_TypeInfo;
  v18 = *(System_Collections_Generic_List_object__o **)(v5 + 16);
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v7 = BattleActionData___c_TypeInfo;
  }
  _9__124_2 = (System_Comparison_T__o *)v7->static_fields->__9__124_2;
  if ( !_9__124_2 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActionData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v7->static_fields->__9;
    _9__124_2 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleActionData_BaseData__TypeInfo);
    System_Comparison_object____ctor(_9__124_2, v20, Method_BattleActionData___c__GetExecOrderArray_b__124_2__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__124_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__124_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__124_2, (int32_t)_9__124_2, v22, v23);
  }
  if ( !v18
    || (System_Collections_Generic_List_object___Sort_55571192(
          v18,
          _9__124_2,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v7 = *v11) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(v7, v8);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)v7,
                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArrayEx(
        BattleActionData_o *this,
        int32_t funcIndex,
        bool isSort,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x0
  BattleActionData___c_c *v15; // x0
  System_Comparison_T__o *_9__125_0; // x20
  Il2CppObject *v17; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5D344 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__GetExecOrderArrayEx_b__125_0__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D344 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v8);
  if ( !v7 )
    sub_1B8880C(BuffList, v10);
  System_Collections_Generic_List_object___AddRange(
    v7,
    BuffList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v11);
  System_Collections_Generic_List_object___AddRange(
    v7,
    HealList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v13);
  System_Collections_Generic_List_object___AddRange(
    v7,
    DamageList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v15 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v15 = BattleActionData___c_TypeInfo;
    }
    _9__125_0 = (System_Comparison_T__o *)v15->static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattleActionData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__125_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleActionData_BaseData__TypeInfo);
      System_Comparison_object____ctor(_9__125_0, v17, Method_BattleActionData___c__GetExecOrderArrayEx_b__125_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__125_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__125_0, (int32_t)_9__125_0, v19, v20);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      v7,
      _9__125_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleServantData_array *__fastcall BattleActionData__GetFuncSideEffectTargetServants(
        BattleActionData_o *this,
        BattleData_o *bData,
        bool isMainOnly,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_Int32_array *v14; // x22
  System_Func_int__bool__o *v15; // x23
  __int64 v16; // x1
  __int64 targetId; // x0
  System_Func_T__TResult__o *v18; // x21
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x0

  if ( (byte_4A5D33B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleServantData___);
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__107_0__);
    sub_1B885B0(&Method_BattleData_getServantData__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_Func_int__BattleServantData__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D33B = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, 0LL) )
  {
    v9 = Method_System_Array_Empty_BattleServantData___;
    v10 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v10 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BattleServantData___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    if ( !*(_DWORD *)(v11 + 224) )
      j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BDA48C(v12);
    return **(BattleServantData_array ***)(v12 + 184);
  }
  else
  {
    if ( isMainOnly )
    {
      v14 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      v15 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v15,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__107_0__,
        0LL);
      if ( BasicHelper__Any_int__48671312(
             targetIds,
             (System_Func_T__bool__o *)v15,
             (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816) )
      {
        targetId = (unsigned int)this->fields.targetId;
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
      }
      if ( !v14 )
        sub_1B8880C(targetId, v16);
      if ( !v14->max_length )
        sub_1B88814(targetId, v16);
      targetIds = v14;
      v14->m_Items[1] = targetId;
    }
    v18 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(v18, (Il2CppObject *)bData, Method_BattleData_getServantData__, 0LL);
    v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                           (System_Func_TSource__TResult__o *)v18,
                                                           (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v20 = BasicHelper__ExcludeNull_object_(
            v19,
            (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  System_Action_object__o *v13; // x23
  const MethodInfo *v14; // x2
  BattleActionData_BuffData_array *BuffList; // x0
  BattleActionData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x22
  System_Func_object__bool__o *_9__284_1; // x23
  Il2CppObject *v19; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_T__o *v23; // x22
  System_Action_object__o *v24; // x23
  const MethodInfo *v25; // x2
  BattleActionData_HealData_array *HealList; // x0
  BattleActionData___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_object__bool__o *_9__284_3; // x20
  Il2CppObject *v30; // x22
  struct BattleActionData___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_T__o *v34; // x19
  System_Action_object__o *v35; // x20

  if ( (byte_4A5D384 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_1B885B0(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1B885B0(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_DamageData___);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_1B885B0(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__GetFuncTargetIds_b__284_1__);
    sub_1B885B0(&Method_BattleActionData___c__GetFuncTargetIds_b__284_3__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__0__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__2__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__4__);
    sub_1B885B0(&BattleActionData___c__DisplayClass284_0_TypeInfo);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D384 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass284_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v5 )
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v11);
  v13 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_DamageData__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    DamageList,
    (System_Action_T__o *)v13,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = BattleActionData__getBuffList(this, index, v14);
  v16 = BattleActionData___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v16 = BattleActionData___c_TypeInfo;
  }
  _9__284_1 = (System_Func_object__bool__o *)v16->static_fields->__9__284_1;
  if ( !_9__284_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleActionData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__284_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__284_1, v19, Method_BattleActionData___c__GetFuncTargetIds_b__284_1__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__284_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__284_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__284_1, (int32_t)_9__284_1, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v17,
                                                         (System_Func_TSource__bool__o *)_9__284_1,
                                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v24 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__2__,
    0LL);
  BasicHelper__ForEach_object_(
    v23,
    (System_Action_T__o *)v24,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v25);
  v27 = BattleActionData___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v27 = BattleActionData___c_TypeInfo;
  }
  _9__284_3 = (System_Func_object__bool__o *)v27->static_fields->__9__284_3;
  if ( !_9__284_3 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BattleActionData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__284_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_HealData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__284_3, v30, Method_BattleActionData___c__GetFuncTargetIds_b__284_3__, 0LL);
    v31 = BattleActionData___c_TypeInfo->static_fields;
    v31->__9__284_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__284_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->__9__284_3, (int32_t)_9__284_3, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v28,
                                                         (System_Func_TSource__bool__o *)_9__284_3,
                                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v35 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v35,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__4__,
    0LL);
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)v35,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__GetFunctionIndexArrayNearByCuriousFunc(
        BattleActionData_o *this,
        int32_t effectTiming,
        System_Int32_array *resultOnGetFailed,
        const MethodInfo *method)
{
  __int64 v7; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListFunctionIndex; // x21
  System_Func_int__bool__o *v13; // x0
  __int64 *v14; // x8
  System_Func_TSource__bool__o *v16; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4A5D387 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__);
    sub_1B885B0(&BattleActionData___c__DisplayClass287_0_TypeInfo);
    byte_4A5D387 = 1;
  }
  v7 = sub_1B887FC(BattleActionData___c__DisplayClass287_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0LL);
  if ( !v7 )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B8880C)(FuncIndexForSplitFuncSequence, v11);
  *(System_Nullable_int__o *)(v7 + 16) = FuncIndexForSplitFuncSequence;
  if ( !FuncIndexForSplitFuncSequence.fields.hasValue )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v11);
  if ( effectTiming == 2 )
  {
    v13 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    v14 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    v14 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v13 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  v14 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v16 = (System_Func_TSource__bool__o *)v13;
  System_Func_int__bool____ctor(v13, (Il2CppObject *)v7, *v14, 0LL);
  v17 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v16,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget(
        BattleActionData_o *this,
        bool isAtkFirst,
        bool isAtkLast,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Collections_Generic_Dictionary_int__int__o *v8; // x24
  System_Collections_Generic_Dictionary_int__int__o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_Dictionary_int__int__o **v13; // x22
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Action_object__o *v16; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4A5D389 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData__ForEach__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass292_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass292_0_TypeInfo);
    byte_4A5D389 = 1;
  }
  v7 = sub_1B887FC(BattleActionData___c__DisplayClass292_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = v8;
  v13 = (System_Collections_Generic_Dictionary_int__int__o **)(v7 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v8, v11, v12);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(
      this,
      (System_Collections_Generic_Dictionary_int__int__o **)(v7 + 16),
      v14);
    sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList;
    v16 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass292_0__GetMaxSideEffectCountByTarget_b__0__,
      0LL);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_object___ForEach(
      sideEffectList,
      (System_Action_T__o *)v16,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v9 = *v13;
  if ( !*v13 )
LABEL_13:
    sub_1B8880C(v9, v10);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v9,
         (const MethodInfo_3164B3C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v9 = *v13;
    if ( *v13 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v9,
                 (const MethodInfo_3164C9C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
    goto LABEL_13;
  }
  return 0;
}


int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget_42360424(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_Dictionary_int__int__o *v6; // x23
  System_Collections_Generic_Dictionary_int__int__o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_Dictionary_int__int__o **v11; // x21
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  System_Action_object__o *v14; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4A5D38B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass294_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass294_0_TypeInfo);
    byte_4A5D38B = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass294_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v6;
  v11 = (System_Collections_Generic_Dictionary_int__int__o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v12);
  v14 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass294_0__GetMaxSideEffectCountByTarget_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    SideEffectList,
    (System_Action_T__o *)v14,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData___);
  v7 = *(System_Collections_Generic_Dictionary_int__int__o **)(v5 + 16);
  if ( !v7 )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v7,
         (const MethodInfo_3164B3C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v7 = *v11;
    if ( *v11 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v7,
                 (const MethodInfo_3164C9C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
LABEL_9:
    sub_1B8880C(v7, v8);
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

  if ( (byte_4A5D388 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int___);
    byte_4A5D388 = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0LL,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__48686580(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_2E6E5F4 *)Method_BasicHelper_IndexValue_int___);
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
  ServantStatusBattleListViewItem_o *p_moveToSubMemberList; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5D363 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    byte_4A5D363 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = (ServantStatusBattleListViewItem_o *)&this->fields.moveToSubMemberList;
    v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    p_moveToSubMemberList->klass = (ServantStatusBattleListViewItem_c *)v4;
    sub_1B88554(p_moveToSubMemberList, (int32_t)v4, v5, v6);
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

  if ( (byte_4A5D38F & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D38F = 1;
  }
  v5 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, v6);
  if ( !v5 )
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)&this->fields.actorId;
  BattleActionData__addSideEffectActionData(this, (BattleActionData_o *)v5, type, v9);
  return (BattleActionData_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData_42362172(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_1B8880C(0LL, v6);
  result->fields.targetId = overwriteTargetId;
  return result;
}


void __fastcall BattleActionData__PreActionProcess(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x21
  BattleActionData___c_c *v11; // x0
  System_Func_object__bool__o *_9__122_0; // x20
  Il2CppObject *v13; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Action_object__o *v19; // x21

  if ( (byte_4A5D341 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1B885B0(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__PreActionProcess_b__122_0__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass122_0__PreActionProcess_b__1__);
    sub_1B885B0(&BattleActionData___c__DisplayClass122_0_TypeInfo);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D341 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass122_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist && !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v11 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v11 = BattleActionData___c_TypeInfo;
    }
    _9__122_0 = (System_Func_object__bool__o *)v11->static_fields->__9__122_0;
    if ( !_9__122_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleActionData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__122_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__122_0, v13, Method_BattleActionData___c__PreActionProcess_b__122_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__122_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__122_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__122_0, (int32_t)_9__122_0, v15, v16);
    }
    v17 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (System_Func_TSource__bool__o *)_9__122_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_object_(
                                                           v17,
                                                           (const MethodInfo_2EAAE5C *)Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    v19 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass122_0__PreActionProcess_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v18,
      (System_Action_T__o *)v19,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void __fastcall BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x19
  BattleActionData___c_c *v4; // x0
  System_Action_object__o *_9__181_0; // x20
  Il2CppObject *v6; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D35B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_1B885B0(&Method_BattleActionData___c__ResetAllCheckDead_b__181_0__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D35B = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v4 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v4 = BattleActionData___c_TypeInfo;
    }
    _9__181_0 = (System_Action_object__o *)v4->static_fields->__9__181_0;
    if ( !_9__181_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = BattleActionData___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__181_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(_9__181_0, v6, Method_BattleActionData___c__ResetAllCheckDead_b__181_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__181_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__181_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__181_0, (int32_t)_9__181_0, v8, v9);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__181_0,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  struct BattleActionData_AfterChangeField_o *ChangeField_k__BackingField; // x0

  v10 = this;
  if ( (byte_4A5D36F & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_AfterChangeField_TypeInfo);
    this = (BattleActionData_o *)sub_1B885B0(&BattleActionData_AfterChangeTakeOverField_TypeInfo);
    byte_4A5D36F = 1;
  }
  if ( !baseVals )
    goto LABEL_13;
  this = (BattleActionData_o *)DataVals__isParam(baseVals, 106, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = sub_1B887FC(BattleActionData_AfterChangeTakeOverField_TypeInfo);
    BattleActionData_AfterChangeTakeOverField___ctor(
      (BattleActionData_AfterChangeTakeOverField_o *)v13,
      fieldChange,
      fieldEnvData,
      v14);
    goto LABEL_9;
  }
  if ( !fieldChange )
LABEL_13:
    sub_1B8880C(this, fieldChange);
  if ( fieldChange->fields.bgId < 1 )
    goto LABEL_10;
  v13 = sub_1B887FC(BattleActionData_AfterChangeField_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_QWORD *)(v13 + 32) = fieldChange;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)fieldChange, v17, v18);
LABEL_9:
  v10->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields._ChangeField_k__BackingField, v13, v15, v16);
LABEL_10:
  ChangeField_k__BackingField = v10->fields._ChangeField_k__BackingField;
  if ( ChangeField_k__BackingField )
  {
    ChangeField_k__BackingField->fields.addBgmArg = addBgmArg;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&ChangeField_k__BackingField->fields.addBgmArg,
      (int32_t)addBgmArg,
      v11,
      v12);
  }
}


void __fastcall BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  System_Func_int__bool__o *v5; // x21
  int32_t targetId; // w0

  if ( (byte_4A5D33A & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&Method_BattleActionData__SetFirstAtkMainTargetId_b__106_0__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    byte_4A5D33A = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v5 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__106_0__,
      0LL);
    if ( BasicHelper__Any_int__48671312(
           targetIds,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
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
    sub_1B8880C(this, data);
  BattleActionData_DamageData__SetEffectFlipProc(data, vals->fields.funcEnt, (const MethodInfo *)vals);
  BattleActionData__setDamageData(this, data, vals, 0, 0, v7);
}


void __fastcall BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  BattleActionData___c_c *v6; // x0
  System_Func_object__int__o *_9__126_0; // x21
  Il2CppObject *v8; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x0
  __int64 v13; // x1
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BattleActionData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  System_Action_object__o *_9__126_2; // x20
  Il2CppObject *v19; // x21
  struct BattleActionData___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5D345 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    sub_1B885B0(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData_BaseData__int__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_0__);
    sub_1B885B0(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_2__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass126_0__SetFuncSideEffectTrigger_b__1__);
    sub_1B885B0(&BattleActionData___c__DisplayClass126_0_TypeInfo);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D345 = 1;
  }
  v3 = sub_1B887FC(BattleActionData___c__DisplayClass126_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v4);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, 0LL) )
  {
    v6 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    _9__126_0 = (System_Func_object__int__o *)v6->static_fields->__9__126_0;
    if ( !_9__126_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__126_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleActionData_BaseData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__126_0,
        v8,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__126_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__126_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__126_0, (int32_t)_9__126_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Max_object_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__126_0,
            (const MethodInfo_2EA8AE0 *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v3 )
      sub_1B8880C(v12, v13);
    *(_DWORD *)(v3 + 16) = v12;
    v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v3,
      Method_BattleActionData___c__DisplayClass126_0__SetFuncSideEffectTrigger_b__1__,
      0LL);
    v15 = System_Linq_Enumerable__Where_object_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v16 = BattleActionData___c_TypeInfo;
    v17 = (System_Collections_Generic_IEnumerable_T__o *)v15;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v16 = BattleActionData___c_TypeInfo;
    }
    _9__126_2 = (System_Action_object__o *)v16->static_fields->__9__126_2;
    if ( !_9__126_2 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleActionData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__126_2 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(
        _9__126_2,
        v19,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_2__,
        0LL);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__126_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__126_2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->__9__126_2, (int32_t)_9__126_2, v21, v22);
    }
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)_9__126_2,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void __fastcall BattleActionData__SetFuncTargetAllDead(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 isEnemyID; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x22
  System_Func_T__TResult__o *v9; // x23
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  System_Func_object__bool__o *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *v14; // x20
  BattleActionData___c_c *v15; // x0
  System_Func_object__bool__o *_9__138_1; // x21
  Il2CppObject *v17; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5D348 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleServantData____76088664);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1B885B0(&Method_BattleData_getServantData__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_int__BattleServantData__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__SetFuncTargetAllDead_b__138_1__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass138_0__SetFuncTargetAllDead_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass138_0_TypeInfo);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D348 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass138_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0LL), !v5) )
    sub_1B8880C(isEnemyID, v7);
  *(_BYTE *)(v5 + 16) = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v9 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(v9, (Il2CppObject *)data, Method_BattleData_getServantData__, 0LL);
  v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v9,
                                                         (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v11 = BasicHelper__ExcludeNull_object_(
          v10,
          (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass138_0__SetFuncTargetAllDead_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0LL) )
  {
    v15 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v15 = BattleActionData___c_TypeInfo;
    }
    _9__138_1 = (System_Func_object__bool__o *)v15->static_fields->__9__138_1;
    if ( !_9__138_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattleActionData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__138_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__138_1,
        v17,
        Method_BattleActionData___c__SetFuncTargetAllDead_b__138_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__138_1 = (struct System_Func_BattleServantData__bool__o *)_9__138_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__138_1, (int32_t)_9__138_1, v19, v20);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_object__48672124(
                                                           v14,
                                                           (System_Func_T__bool__o *)_9__138_1,
                                                           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_BattleServantData____76088664);
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

  if ( (byte_4A5D36D & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_GimmickData_TypeInfo);
    byte_4A5D36D = 1;
  }
  v11 = (Il2CppObject *)sub_1B887FC(BattleActionData_GimmickData_TypeInfo);
  System_Object___ctor(v11, 0LL);
  this->fields.gimmickData = (struct BattleActionData_GimmickData_o *)v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_gimmickData, (int32_t)v11, v13, v14);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v18->fields.indexArray = indexArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.indexArray, (int32_t)indexArray, v16, v17);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v18->fields.startVoiceIdArray = startArray,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.startVoiceIdArray, (int32_t)startArray, v19, v20),
        (v18 = *p_gimmickData) == 0LL)
    || (v18->fields.resultVoiceIdArray = resultArray,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v18->fields.resultVoiceIdArray,
          (int32_t)resultArray,
          v21,
          v22),
        (v18 = *p_gimmickData) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(v18, v15);
  }
  v18->fields.animationTypes = types;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.animationTypes, (int32_t)types, v23, v24);
}


void __fastcall BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  BattleActionData___c_c *v6; // x0
  System_Action_object__o *_9__127_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D346 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_1B885B0(&Method_BattleActionData___c__SetPopupOnce_b__127_0__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D346 = 1;
  }
  ExecOrderArray = BattleActionData__GetExecOrderArrayEx(this, -1, 0, v2);
  if ( ExecOrderArray )
  {
    v5 = (System_Collections_Generic_IEnumerable_T__o *)ExecOrderArray;
    v6 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    _9__127_0 = (System_Action_object__o *)v6->static_fields->__9__127_0;
    if ( !_9__127_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__127_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(_9__127_0, v8, Method_BattleActionData___c__SetPopupOnce_b__127_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__127_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__127_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__127_0, (int32_t)_9__127_0, v10, v11);
    }
    BasicHelper__ForEach_object_(
      v5,
      (System_Action_T__o *)_9__127_0,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  sub_1B88554(
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
  __int64 v5; // x21
  System_Collections_Generic_List_int__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_int__o *v10; // x22
  System_Collections_Generic_List_int__o **v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x22
  __int64 v15; // x1
  int32_t current; // w20
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+0h] [xbp-80h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5D38A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass293_0__SetSideEffectCountByTarget_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass293_0_TypeInfo);
    byte_4A5D38A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  value = 0;
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass293_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v5 + 24) = v10;
  v11 = (System_Collections_Generic_List_int__o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v10, v12, v13);
  v14 = sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v14,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass293_0__SetSideEffectCountByTarget_b__0__,
    0LL);
  if ( !v14
    || ((*(void (__fastcall **)(_QWORD, _QWORD))(v14 + 24))(*(_QWORD *)(v14 + 64), *(_QWORD *)(v14 + 40)),
        (v6 = *v11) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    v6,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v18;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_1B8880C(0LL, v15);
    current = v20.fields._current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v20.fields._current,
      &value,
      (const MethodInfo_3166520 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_1B8880C(0LL, v17);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_4A5D370 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
    byte_4A5D370 = 1;
  }
  v5 = sub_1B887FC(BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_QWORD *)(v5 + 32) = changeBgm;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)changeBgm, v6, v7);
  this->fields._TdAfterChangeBgm_k__BackingField = (struct BattleActionData_TreasureDvcAfterChangeBgm_o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField, v5, v8, v9);
}


void __fastcall BattleActionData__SetTypeEnemyCutIn(
        BattleActionData_o *this,
        int32_t effectType,
        const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4A5D379 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D379 = 1;
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
  sub_1B88554(
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
  int32_t MaxSideEffectCountByTarget_42360424; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_42360424 = BattleActionData__GetMaxSideEffectCountByTarget_42360424(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_42360424 >= 1 )
    *interval = totalTime / (float)(MaxSideEffectCountByTarget_42360424 + existTriggerFunc);
  return MaxSideEffectCountByTarget_42360424 > 0;
}


void __fastcall BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_transformServantlist; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5D365 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    byte_4A5D365 = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = (ServantStatusBattleListViewItem_o *)&this->fields.transformServantlist;
    v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    p_transformServantlist->klass = (ServantStatusBattleListViewItem_c *)v4;
    sub_1B88554(p_transformServantlist, (int32_t)v4, v5, v6);
  }
}


void __fastcall BattleActionData__UpdateDirectIntervalBuffData(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Func_object__bool__o **v11; // x20
  System_Action_T__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Func_object__bool__o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  __int128 v18; // [xsp+0h] [xbp-90h] BYREF
  __int128 v19; // [xsp+10h] [xbp-80h]
  __int128 v20; // [xsp+20h] [xbp-70h]

  if ( (byte_4A5D34D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass150_0__UpdateDirectIntervalBuffData_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass150_0_TypeInfo);
    byte_4A5D34D = 1;
  }
  v19 = 0u;
  v20 = 0u;
  v18 = 0u;
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass150_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_DWORD *)(v5 + 24) = targetType;
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
         0LL) )
  {
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffMaster___);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)Master_object, v9, v10);
  IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_16:
    sub_1B8880C(IntervalBuffDict_k__BackingField, v7);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
    IntervalBuffDict_k__BackingField,
    (const MethodInfo_312BABC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  v11 = (System_Func_object__bool__o **)(v5 + 32);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
            (const MethodInfo_32AADBC *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v12 = (System_Action_T__o *)*((_QWORD *)&v19 + 1);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v20, 0LL) )
    {
      v14 = *v11;
      if ( !*v11 )
      {
        v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass150_0__UpdateDirectIntervalBuffData_b__0__,
          0LL);
        *v11 = v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v14, v15, v16);
      }
      v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v13,
                                                             (System_Func_TSource__bool__o *)v14,
                                                             (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_object_(
        v17,
        v12,
        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
    (const MethodInfo_32AAEF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void __fastcall BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x20
  BattleActionData___c_c *v4; // x0
  System_Action_object__o *_9__158_0; // x21
  Il2CppObject *v6; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *healdatalist; // x19
  BattleActionData___c_c *v11; // x0
  System_Action_object__o *_9__158_1; // x20
  Il2CppObject *v13; // x21
  struct BattleActionData___c_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A5D350 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1B885B0(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_1B885B0(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_0__);
    sub_1B885B0(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_1__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D350 = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v4 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v4 = BattleActionData___c_TypeInfo;
    }
    _9__158_0 = (System_Action_object__o *)v4->static_fields->__9__158_0;
    if ( !_9__158_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = BattleActionData___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__158_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__158_0,
        v6,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__158_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__158_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__158_0, (int32_t)_9__158_0, v8, v9);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__158_0,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v11 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v11 = BattleActionData___c_TypeInfo;
    }
    _9__158_1 = (System_Action_object__o *)v11->static_fields->__9__158_1;
    if ( !_9__158_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleActionData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__158_1 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        _9__158_1,
        v13,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_1__,
        0LL);
      v14 = BattleActionData___c_TypeInfo->static_fields;
      v14->__9__158_1 = (struct System_Action_BattleActionData_HealData__o *)_9__158_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->__9__158_1, (int32_t)_9__158_1, v15, v16);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__158_1,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void __fastcall BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  BattleActionData___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  System_Action_object__o *_9__148_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D34B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_1B885B0(&Method_BattleActionData___c__UpdateIntervalBuff_b__148_0__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D34B = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleActionData_o *, Il2CppMethodPointer))this->klass->vtable._7_UpdateIntervalBuffData.method)(
         this,
         this->klass->vtable._8_FixDisplayWaitingIntervalBuff.methodPtr);
  v4 = BattleActionData___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_T__o *)v3;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v4 = BattleActionData___c_TypeInfo;
  }
  _9__148_0 = (System_Action_object__o *)v4->static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleActionData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__148_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__148_0, v7, Method_BattleActionData___c__UpdateIntervalBuff_b__148_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = (struct System_Action_BattleServantData__o *)_9__148_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__148_0, (int32_t)_9__148_0, v9, v10);
  }
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)_9__148_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *__fastcall BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_List_object__o *v6; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  __int128 v11[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v12; // [xsp+30h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+40h] [xbp-60h]
  __int128 v14; // [xsp+50h] [xbp-50h]

  if ( (byte_4A5D34C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    byte_4A5D34C = 1;
  }
  *(_OWORD *)action = 0u;
  v14 = 0u;
  v12 = 0u;
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          0LL) )
  {
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v11,
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_312BABC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    v12 = v11[0];
    *(_OWORD *)action = v11[1];
    v14 = v11[2];
    v6 = 0LL;
    while ( 1 )
    {
      v7 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
             (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v12,
             (const MethodInfo_32AADBC *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v7 )
        break;
      v9 = (Il2CppObject *)action[0];
      if ( (_QWORD)v14 )
        v6 = (System_Collections_Generic_List_object__o *)v14;
      if ( (_QWORD)v14 )
      {
        if ( !v6 )
          sub_1B8880C(v7, v8);
        System_Collections_Generic_List_object___ForEach(
          v6,
          action[1],
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      }
      if ( v9 )
      {
        if ( !v3 )
          sub_1B8880C(v7, v8);
        System_Collections_Generic_HashSet_object___Add(
          v3,
          v9,
          (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v12,
      (const MethodInfo_32AAEF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_20:
      sub_1B8880C(IntervalBuffDict_k__BackingField, v4);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_312B7E4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v3;
}


void __fastcall BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5D39F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5D39F = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_1B8880C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  System_Collections_Generic_List_object__o *damagedatalist; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4A5D381 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    sub_1B885B0(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    byte_4A5D381 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                    this,
                                                                    (const MethodInfo *)addData);
    v7 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v6);
    if ( !damagedatalist )
      sub_1B8880C(v7, v8);
    System_Collections_Generic_List_object___AddRange(
      damagedatalist,
      v7,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_2E700F8 *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
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


void __fastcall BattleActionData__addBattleData___Il2CppFullySharedGenericType_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_2E701A0 *method)
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
    sub_1BDA4E8(method);
    if ( !addDataList )
      return;
  }
  v7 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1BDA48C(_0_System_Collections_Generic_List_T);
    v9 = (System_Collections_Generic_List_T__o *)sub_1B887FC(_0_System_Collections_Generic_List_T);
    method->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
    *dataList = v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)dataList, (int32_t)v9, v10, v11);
    v7 = *dataList;
    if ( !*dataList )
      sub_1B8880C(0LL, v12);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_T__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange->methodPointer)(
    v7,
    addDataList);
}


void __fastcall BattleActionData__addBattleData_object_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_2E700F8 *method)
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
    sub_1BDA4E8(method);
    if ( !addDataList )
      return;
  }
  v7 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1BDA48C(_0_System_Collections_Generic_List_T);
    v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(_0_System_Collections_Generic_List_T);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_34FD000 *)method->rgctx_data->_2_System_Collections_Generic_List_T___ctor);
    *dataList = (System_Collections_Generic_List_T__o *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)dataList, (int32_t)v9, v10, v11);
    v7 = *dataList;
    if ( !*dataList )
      sub_1B8880C(0LL, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v7,
    (System_Collections_Generic_IEnumerable_T__o *)addDataList,
    (const MethodInfo_34FDA40 *)method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleActionData_SideEffectData_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  int32_t v18; // w8

  if ( (byte_4A5D356 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__);
    this = (BattleActionData_o *)sub_1B885B0(&BattleActionData_SideEffectData_TypeInfo);
    byte_4A5D356 = 1;
  }
  if ( !actList )
    goto LABEL_13;
  if ( actList->fields._size < 1 )
    return;
  if ( !damage
    || (targetId = damage->fields.targetId,
        v9 = (BuffList_ACTION_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)actList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__),
        v10 = (BattleActionData_SideEffectData_o *)sub_1B887FC(BattleActionData_SideEffectData_TypeInfo),
        BattleActionData_SideEffectData___ctor(v10, targetId, v9, v11),
        !sideEffectList)
    || (items = sideEffectList->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__,
        ++sideEffectList->fields._version,
        !items) )
  {
LABEL_13:
    sub_1B8880C(this, sideEffectList);
  }
  size = sideEffectList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (Il2CppObject *)v10,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    sideEffectList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
  }
  v18 = actList->fields._version + 1;
  actList->fields._size = 0;
  actList->fields._version = v18;
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

  if ( (byte_4A5D394 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
    byte_4A5D394 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds
    || (items = attackSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__,
        ++attackSideEffectedSvtIds->fields._version,
        !items) )
  {
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B8880C)(attackSideEffectedSvtIds, pairAttackAndTarget);
  }
  size = attackSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    v9 = pairAttackAndTarget;
    System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
      attackSideEffectedSvtIds,
      v9,
      *(const MethodInfo_344B7A4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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

  if ( (byte_4A5D392 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    byte_4A5D392 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds
    || (items = damageSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++damageSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_1B8880C(damageSideEffectedSvtIds, *(_QWORD *)&uniqueSvtId);
  }
  size = damageSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      damageSideEffectedSvtIds,
      uniqueSvtId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    damageSideEffectedSvtIds->fields._size = size + 1;
    items->m_Items[size + 1] = uniqueSvtId;
  }
}


void __fastcall BattleActionData__addReflectLogicResultServantId(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *servantLogicResultList; // x21
  System_Predicate_object__o *v9; // x22
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5D396 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__);
    sub_1B885B0(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_1B885B0(&BattleActionData_ServantLogicResultData_TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass315_0__addReflectLogicResultServantId_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass315_0_TypeInfo);
    byte_4A5D396 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass315_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = uniqueSvtId;
  servantLogicResultList = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass315_0__addReflectLogicResultServantId_b__0__,
    0LL);
  if ( !servantLogicResultList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_object___FindIndex(
         servantLogicResultList,
         (System_Predicate_T__o *)v9,
         (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v10 = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v11 = sub_1B887FC(BattleActionData_ServantLogicResultData_TypeInfo);
  *(_DWORD *)(v11 + 20) = -1;
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = *(_DWORD *)(v5 + 16);
  if ( !v10
    || (items = v10->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B8880C(v6, v7);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v11,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), v11, v12, v13);
  }
}


void __fastcall BattleActionData__addReflectLogicResultServantIds(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *addLogicResultList,
        const MethodInfo *method)
{
  int32_t v5; // w21
  Il2CppObject *Item; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A5D395 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_4A5D395 = 1;
  }
  if ( addLogicResultList && addLogicResultList->fields._size >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)addLogicResultList,
               v5,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !Item )
        sub_1B8880C(0LL, v7);
      BattleActionData__addReflectLogicResultServantId(this, (int32_t)Item[1].klass, v8);
      ++v5;
    }
    while ( v5 < addLogicResultList->fields._size );
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
  if ( (byte_4A5D38D & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData__Add__);
    byte_4A5D38D = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v6->fields.sideEffectList) == 0LL)
    || (v7 = *(_QWORD *)&this->fields.state,
        v8 = Method_System_Collections_Generic_List_BattleActionData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v7) )
  {
    sub_1B8880C(this, sideEffectActionData);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)sideEffectActionData,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = v7 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v10 + 32) = sideEffectActionData;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)(v10 + 32),
      (int32_t)sideEffectActionData,
      actType,
      (int32_t)method);
  }
}


bool __fastcall BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_4A5D368 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__);
    byte_4A5D368 = 1;
  }
  summonServantList = this->fields.summonServantList;
  return summonServantList && summonServantList->fields._size > 0;
}


BattleActionData_BuffData_array *__fastcall BattleActionData__getBuffList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  ServantStatusBattleListViewItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_Predicate_object__o *v13; // x19
  const MethodInfo_34FF38C *v14; // x1

  if ( (byte_4A5D35A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&System_Predicate_BattleActionData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass180_0__getBuffList_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass180_0_TypeInfo);
    byte_4A5D35A = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass180_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = funcIndex;
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.buffdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B88554(p_buffdatalist, (int32_t)v10, v11, v12);
    funcIndex = *(_DWORD *)(v5 + 16);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
  }
  if ( funcIndex == -1 )
  {
    if ( buffdatalist )
    {
      v14 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v14);
    }
LABEL_13:
    sub_1B8880C(All, v7);
  }
  v13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleActionData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass180_0__getBuffList_b__0__,
    0LL);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          buffdatalist,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v14 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v14);
}


BattleActionData_ChangeBg_o *__fastcall BattleActionData__getChangeBg(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *changeBgList; // x0

  if ( (byte_4A5D36C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
    byte_4A5D36C = 1;
  }
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return (BattleActionData_ChangeBg_o *)System_Collections_Generic_List_object___get_Item(
                                            changeBgList,
                                            0,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
  else
    return 0LL;
}


int32_t __fastcall BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  StageEntity_c *v3; // x0
  int32_t actionIndex; // w21
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_4A5D38C & 1) == 0 )
  {
    sub_1B885B0(&StageEntity_TypeInfo);
    byte_4A5D38C = 1;
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
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D355 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
    byte_4A5D355 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    damagedatalist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v11.fields._current )
      sub_1B8880C(v7, v8);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v7,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v3,
      (BattleActionData_DamageData_o *)v11.fields._current,
      (System_Collections_Generic_List_BuffList_ACTION__o *)v11.fields._current[5].klass,
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v3 )
LABEL_11:
    sub_1B8880C(damagedatalist, v6);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v3,
                                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
}


BattleActionData_DamageData_array *__fastcall BattleActionData__getDamageList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  const MethodInfo *v7; // x1
  bool v8; // zf
  System_Collections_Generic_List_object__o *v9; // x19
  System_Predicate_object__o *v10; // x20
  const MethodInfo_34FF38C *v11; // x1

  if ( (byte_4A5D353 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_1B885B0(&System_Predicate_BattleActionData_DamageData__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass168_0__getDamageList_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass168_0_TypeInfo);
    byte_4A5D353 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass168_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = funcIndex;
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v7);
  v8 = funcIndex == -1;
  v9 = damagedatalist;
  if ( v8 )
  {
    if ( damagedatalist )
    {
      v11 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v11);
    }
LABEL_11:
    sub_1B8880C(damagedatalist, v7);
  }
  v10 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleActionData_DamageData__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass168_0__getDamageList_b__0__,
    0LL);
  if ( !v9 )
    goto LABEL_11;
  damagedatalist = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                  v9,
                                                                  (System_Predicate_T__o *)v10,
                                                                  (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_11;
  v11 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v11);
}


System_Int32_array *__fastcall BattleActionData__getDamageTargetIdList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D354 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_4A5D354 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    damagedatalist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1B8880C(v7, v8);
    if ( !v3 )
      sub_1B8880C(v7, v8);
    System_Collections_Generic_HashSet_int___Add(
      v3,
      HIDWORD(v10.fields._current[1].monitor),
      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


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
    sub_1B88814(this, index);
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
  int32_t v5; // w21
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x0
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D39C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    byte_4A5D39C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( (index & 0x80000000) != 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
    if ( funcTargetPlayerTypeList )
    {
      System_Collections_Generic_List_Int32Enum___GetEnumerator(
        &v8,
        funcTargetPlayerTypeList,
        (const MethodInfo_34E3B10 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v5 = 0;
      while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                &v8,
                (const MethodInfo_3274DF4 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v5 |= LODWORD(v8.fields._current);
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
        &v8,
        (const MethodInfo_3274DF0 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v5;
    }
LABEL_13:
    sub_1B8880C(funcTargetPlayerTypeList, *(_QWORD *)&index);
  }
  v5 = 0;
  funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_13;
  if ( funcTargetPlayerTypeList->fields._size > index )
    return System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
  return v5;
}


BattleActionData_HealData_array *__fastcall BattleActionData__getHealList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  ServantStatusBattleListViewItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_Predicate_object__o *v13; // x19
  const MethodInfo_34FF38C *v14; // x1

  if ( (byte_4A5D35E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    sub_1B885B0(&System_Predicate_BattleActionData_HealData__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass187_0__getHealList_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass187_0_TypeInfo);
    byte_4A5D35E = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass187_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = funcIndex;
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (ServantStatusBattleListViewItem_o *)&this->fields.healdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B88554(p_healdatalist, (int32_t)v10, v11, v12);
    funcIndex = *(_DWORD *)(v5 + 16);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
  }
  if ( funcIndex == -1 )
  {
    if ( healdatalist )
    {
      v14 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v14);
    }
LABEL_13:
    sub_1B8880C(All, v7);
  }
  v13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleActionData_HealData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass187_0__getHealList_b__0__,
    0LL);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          healdatalist,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v14 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v14);
}


System_Int32_array *__fastcall BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_Int32_array *DamageTargets; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Int32_array *pttargetIds; // x22
  __int64 v8; // x8
  unsigned __int64 v9; // x23
  __int64 v10; // x8
  System_Int32_array *v11; // x20
  unsigned __int64 v12; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_4A5D382 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A5D382 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v3 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    v8 = *(_QWORD *)&pttargetIds->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      while ( v9 < (unsigned int)v8 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v3,
          pttargetIds->m_Items[v9 + 1],
          pttargetIds->m_Items[v9 + 1],
          (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(v8) = pttargetIds->max_length;
        if ( (__int64)++v9 >= (int)v8 )
          goto LABEL_9;
      }
LABEL_15:
      sub_1B88814(DamageTargets, v5);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v5, v6);
  if ( !DamageTargets )
LABEL_16:
    sub_1B8880C(DamageTargets, v5);
  v10 = *(_QWORD *)&DamageTargets->max_length;
  v11 = DamageTargets;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v3,
        v11->m_Items[v12 + 1],
        v11->m_Items[v12 + 1],
        (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v10) = v11->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_3164B4C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndex(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x21
  BattleActionData___c_c *v6; // x0
  System_Converter_object__int__o *_9__285_0; // x22
  Il2CppObject *v8; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  void *v12; // x0
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v14; // x0
  System_Converter_object__int__o *_9__285_1; // x21
  Il2CppObject *v16; // x22
  struct BattleActionData___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Comparison_int__o *v20; // x20
  Il2CppObject *v21; // x21
  struct BattleActionData___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4A5D385 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_1B885B0(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort___76036656);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndex_b__285_0__);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndex_b__285_1__);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndex_b__285_2__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D385 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v6 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    _9__285_0 = (System_Converter_object__int__o *)v6->static_fields->__9__285_0;
    if ( !_9__285_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__285_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__285_0,
        v8,
        Method_BattleActionData___c__getListFunctionIndex_b__285_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__285_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__285_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__285_0, (int32_t)_9__285_0, v10, v11);
    }
    v12 = System_Collections_Generic_List_object___ConvertAll_int_(
            buffdatalist,
            (System_Converter_T__TOutput__o *)_9__285_0,
            (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v3 )
      goto LABEL_29;
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
    goto LABEL_21;
  v14 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v14 = BattleActionData___c_TypeInfo;
  }
  _9__285_1 = (System_Converter_object__int__o *)v14->static_fields->__9__285_1;
  if ( !_9__285_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleActionData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__285_1 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_BattleActionData_HealData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__285_1,
      v16,
      Method_BattleActionData___c__getListFunctionIndex_b__285_1__,
      0LL);
    v17 = BattleActionData___c_TypeInfo->static_fields;
    v17->__9__285_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__285_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->__9__285_1, (int32_t)_9__285_1, v18, v19);
  }
  v12 = System_Collections_Generic_List_object___ConvertAll_int_(
          healdatalist,
          (System_Converter_T__TOutput__o *)_9__285_1,
          (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
  if ( !v3 )
LABEL_29:
    sub_1B8880C(v12, v4);
  System_Collections_Generic_List_int___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_21:
  v12 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v12 = BattleActionData___c_TypeInfo;
  }
  v20 = *(System_Comparison_int__o **)(*((_QWORD *)v12 + 23) + 152LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)v12 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleActionData___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)v12 + 23);
    v20 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v20, v21, Method_BattleActionData___c__getListFunctionIndex_b__285_2__, 0LL);
    v22 = BattleActionData___c_TypeInfo->static_fields;
    v22->__9__285_2 = v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__285_2, (int32_t)v20, v23, v24);
  }
  if ( !v3 )
    goto LABEL_29;
  System_Collections_Generic_List_int___Sort_55452212(
    v3,
    (System_Comparison_T__o *)v20,
    (const MethodInfo_34E2234 *)Method_System_Collections_Generic_List_int__Sort___76036656);
  v25 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndexEx(
        BattleActionData_o *this,
        int32_t *displayFuncNum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  BattleActionData___c_c *v8; // x0
  System_Converter_object__int__o *_9__286_0; // x23
  Il2CppObject *v10; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Int32_array *result; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  BattleActionData___c_c *v17; // x0
  System_Converter_object__int__o *_9__286_1; // x23
  Il2CppObject *v19; // x24
  ServantStatusBattleListViewItem_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  BattleActionData___c_c *v23; // x8
  System_Collections_Generic_List_object__o *v24; // x22
  System_Converter_object__int__o *_9__286_2; // x23
  Il2CppObject *v26; // x24
  struct BattleActionData___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  BattleActionData___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_object__int__o *_9__286_3; // x22
  Il2CppObject *v35; // x23
  struct BattleActionData___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w21
  System_Comparison_int__o *v40; // x22
  Il2CppObject *v41; // x23
  struct BattleActionData___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0

  if ( (byte_4A5D386 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_1B885B0(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_1B885B0(&System_Converter_BattleActionData_DamageData__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort___76036656);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_0__);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_1__);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_2__);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_3__);
    sub_1B885B0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_4__);
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D386 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v8 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v8 = BattleActionData___c_TypeInfo;
    }
    _9__286_0 = (System_Converter_object__int__o *)v8->static_fields->__9__286_0;
    if ( !_9__286_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = BattleActionData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__286_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__286_0,
        v10,
        Method_BattleActionData___c__getListFunctionIndexEx_b__286_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__286_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__286_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__286_0, (int32_t)_9__286_0, v12, v13);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__286_0,
                                     (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v5 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
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
    _9__286_1 = (System_Converter_object__int__o *)v17->static_fields->__9__286_1;
    if ( !_9__286_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleActionData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__286_1 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__286_1,
        v19,
        Method_BattleActionData___c__getListFunctionIndexEx_b__286_1__,
        0LL);
      v20 = (ServantStatusBattleListViewItem_o *)BattleActionData___c_TypeInfo->static_fields;
      v20[1].klass = (ServantStatusBattleListViewItem_c *)_9__286_1;
      sub_1B88554(v20 + 1, (int32_t)_9__286_1, v21, v22);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__286_1,
                                     (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v5 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v6) )
  {
    v39 = 0;
    goto LABEL_38;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v15);
  v23 = BattleActionData___c_TypeInfo;
  v24 = (System_Collections_Generic_List_object__o *)result;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v23 = BattleActionData___c_TypeInfo;
  }
  _9__286_2 = (System_Converter_object__int__o *)v23->static_fields->__9__286_2;
  if ( !_9__286_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = BattleActionData___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__286_2 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__286_2,
      v26,
      Method_BattleActionData___c__getListFunctionIndexEx_b__286_2__,
      0LL);
    v27 = BattleActionData___c_TypeInfo->static_fields;
    v27->__9__286_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__286_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->__9__286_2, (int32_t)_9__286_2, v28, v29);
  }
  if ( !v24
    || (result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                         v24,
                                         (System_Converter_T__TOutput__o *)_9__286_2,
                                         (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___),
        !v5) )
  {
LABEL_47:
    sub_1B8880C(result, v15);
  }
  System_Collections_Generic_List_int___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v30);
  v32 = BattleActionData___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v32 = BattleActionData___c_TypeInfo;
  }
  _9__286_3 = (System_Func_object__int__o *)v32->static_fields->__9__286_3;
  if ( !_9__286_3 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BattleActionData___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__286_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleActionData_DamageData__int__TypeInfo);
    System_Func_object__int____ctor(_9__286_3, v35, Method_BattleActionData___c__getListFunctionIndexEx_b__286_3__, 0LL);
    v36 = BattleActionData___c_TypeInfo->static_fields;
    v36->__9__286_3 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__286_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->__9__286_3, (int32_t)_9__286_3, v37, v38);
  }
  v39 = System_Linq_Enumerable__Sum_object_(
          v33,
          (System_Func_TSource__int__o *)_9__286_3,
          (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_38:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v40 = *(System_Comparison_int__o **)(*(_QWORD *)&result->m_Items[39] + 192LL);
  if ( !v40 )
  {
    if ( !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (System_Int32_array *)BattleActionData___c_TypeInfo;
    }
    v41 = **(Il2CppObject ***)&result->m_Items[39];
    v40 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v40, v41, Method_BattleActionData___c__getListFunctionIndexEx_b__286_4__, 0LL);
    v42 = BattleActionData___c_TypeInfo->static_fields;
    v42->__9__286_4 = v40;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v42->__9__286_4, (int32_t)v40, v43, v44);
  }
  if ( !v5 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort_55452212(
    v5,
    (System_Comparison_T__o *)v40,
    (const MethodInfo_34E2234 *)Method_System_Collections_Generic_List_int__Sort___76036656);
  v45 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v45,
             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_47;
  *displayFuncNum = v39 + result->max_length;
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
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *replacememberlist; // x22
  ServantStatusBattleListViewItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_Predicate_object__o *v13; // x19
  const MethodInfo_34FF38C *v14; // x1

  if ( (byte_4A5D361 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    sub_1B885B0(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass192_0__getReplaceMember_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass192_0_TypeInfo);
    byte_4A5D361 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass192_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = funcIndex;
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (ServantStatusBattleListViewItem_o *)&this->fields.replacememberlist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B88554(p_replacememberlist, (int32_t)v10, v11, v12);
    funcIndex = *(_DWORD *)(v5 + 16);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
  }
  if ( funcIndex == -1 )
  {
    if ( replacememberlist )
    {
      v14 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       v14);
    }
LABEL_13:
    sub_1B8880C(All, v7);
  }
  v13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass192_0__getReplaceMember_b__0__,
    0LL);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          replacememberlist,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  v14 = (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   v14);
}


BattleActionData_ShiftServant_o *__fastcall BattleActionData__getShiftServant(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *shiftServantList; // x0

  if ( (byte_4A5D36A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
    byte_4A5D36A = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return (BattleActionData_ShiftServant_o *)System_Collections_Generic_List_object___get_Item(
                                                shiftServantList,
                                                0,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
  else
    return 0LL;
}


BattleActionData_array *__fastcall BattleActionData__getSideEffectList(
        BattleActionData_o *this,
        int32_t actType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5D38E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData__ToArray__);
    sub_1B885B0(&System_Predicate_BattleActionData__TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass301_0__getSideEffectList_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass301_0_TypeInfo);
    byte_4A5D38E = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass301_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = actType,
        sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass301_0__getSideEffectList_b__0__,
          0LL),
        !sideEffectList)
    || (All = System_Collections_Generic_List_object___FindAll(
                sideEffectList,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0LL )
  {
    sub_1B8880C(All, v7);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_object___ToArray(
                                     (System_Collections_Generic_List_object__o *)All,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
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
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *summonServantList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_4A5D367 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
    sub_1B885B0(&System_Predicate_BattleActionData_SummonServant__TypeInfo);
    sub_1B885B0(&BattleActionData_SummonServant___TypeInfo);
    sub_1B885B0(&Method_BattleActionData___c__DisplayClass205_0__getSummonServant_b__0__);
    sub_1B885B0(&BattleActionData___c__DisplayClass205_0_TypeInfo);
    byte_4A5D367 = 1;
  }
  v5 = sub_1B887FC(BattleActionData___c__DisplayClass205_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = funcIndex;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_1B88658(BattleActionData_SummonServant___TypeInfo, 0LL);
  if ( funcIndex != -1 )
  {
    v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleActionData_SummonServant__TypeInfo);
    System_Predicate_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass205_0__getSummonServant_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            summonServantList,
            (System_Predicate_T__o *)v9,
            (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_1B8880C(All, v7);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
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
  unsigned __int64 v11; // x23
  __int64 v12; // x8
  _QWORD *v13; // x20
  unsigned __int64 v14; // x21
  __int64 v15; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_4A5D383 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A5D383 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
        (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v9) = *((_DWORD *)v10 + 6);
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_9;
    }
LABEL_19:
    sub_1B88814(DamageTargets, v7);
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
          (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1B8880C(DamageTargets, v7);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_3164B4C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v4; // x1
  int32_t v5; // w19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppClass *klass; // x11
  unsigned __int64 namespaze; // x9
  unsigned __int64 v10; // x8
  Il2CppType *p_byval_arg; // x11
  int v12; // w12
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D357 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_4A5D357 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    damagedatalist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v5 = 0;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v6 )
      break;
    if ( !v14.fields._current )
      sub_1B8880C(v6, v7);
    klass = v14.fields._current[6].klass;
    if ( klass && (int)klass->_1.namespaze >= 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      v10 = 0LL;
      p_byval_arg = &klass->_1.byval_arg;
      do
      {
        if ( v10 >= namespaze )
          sub_1B88814(v6, v7);
        v12 = *((_DWORD *)&p_byval_arg->data + v10++);
        v5 += v12;
      }
      while ( (__int64)v10 < (int)namespaze );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
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
  System_Collections_Generic_List_BattleActionData_DamageData__o *result; // x0
  ServantStatusBattleListViewItem_o *p_damagedatalist; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D351 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    byte_4A5D351 = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = (ServantStatusBattleListViewItem_o *)&this->fields._damagedatalist;
    v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    p_damagedatalist->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B88554(p_damagedatalist, (int32_t)v5, v6, v7);
    return (System_Collections_Generic_List_BattleActionData_DamageData__o *)p_damagedatalist->klass;
  }
  return result;
}


void __fastcall BattleActionData__initFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t length,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D39A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
    byte_4A5D39A = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Int32Enum_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_2EAA948 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v6 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                            v5,
                                                                            (const MethodInfo_2EBBE0C *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v6, v7, v8);
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

  if ( (byte_4A5D33F & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D33F = 1;
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

  if ( (byte_4A5D33C & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D33C = 1;
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

  if ( (byte_4A5D393 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
    byte_4A5D393 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B8880C)(0LL, pairAttackAndTarget);
  v7 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v7,
           (const MethodInfo_344BB1C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_4A5D391 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5D391 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_1B8880C(0LL, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4A5D33D & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D33D = 1;
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

  if ( (byte_4A5D33E & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D33E = 1;
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

  if ( (byte_4A5D37B & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D37B = 1;
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

  if ( (byte_4A5D37C & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D37C = 1;
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

  if ( (byte_4A5D37A & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D37A = 1;
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

  if ( (byte_4A5D376 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D376 = 1;
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

  if ( (byte_4A5D377 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D377 = 1;
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

  if ( (byte_4A5D378 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D378 = 1;
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

  if ( (byte_4A5D372 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D372 = 1;
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
  void *servantLogicResultList; // x0
  int32_t v7; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v9; // x22
  int32_t v10; // w23
  int32_t v11; // w2
  int v12; // w8

  if ( (byte_4A5D398 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_4A5D398 = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_19:
    sub_1B8880C(servantLogicResultList, v5);
  if ( *((int *)servantLogicResultList + 6) >= 1 )
  {
    v7 = 0;
    do
    {
      servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                 v7,
                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !servantLogicResultList || !data )
        goto LABEL_19;
      ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0LL);
      if ( ServantData )
      {
        v9 = ServantData;
        servantLogicResultList = this->fields.servantLogicResultList;
        if ( !servantLogicResultList )
          goto LABEL_19;
        servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                   v7,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
        if ( !servantLogicResultList )
          goto LABEL_19;
        v10 = *((_DWORD *)servantLogicResultList + 5);
        if ( v10 != -1 && BattleServantData__getNowHp(v9, 0LL) != v10 )
        {
          BattleServantData__setHp(v9, v10, 0, 0LL);
          BattleServantData__updateHp(v9, 0LL);
        }
      }
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_19;
      v11 = *((_DWORD *)servantLogicResultList + 6);
      ++v7;
    }
    while ( v7 < v11 );
    v12 = *((_DWORD *)servantLogicResultList + 7) + 1;
    *((_DWORD *)servantLogicResultList + 6) = 0;
    *((_DWORD *)servantLogicResultList + 7) = v12;
    if ( v11 >= 1 )
      System_Array__Clear(*((System_Array_o **)servantLogicResultList + 2), 0, v11, 0LL);
  }
}


void __fastcall BattleActionData__saveServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  void *servantLogicResultList; // x0
  int32_t v6; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v8; // x22
  Il2CppObject *Item; // x23

  if ( (byte_4A5D397 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_4A5D397 = 1;
  }
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_13:
    sub_1B8880C(servantLogicResultList, data);
  v6 = 0;
  while ( v6 < *((_DWORD *)servantLogicResultList + 6) )
  {
    servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)servantLogicResultList,
                               v6,
                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    if ( !servantLogicResultList || !data )
      goto LABEL_13;
    ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0LL);
    if ( ServantData )
    {
      v8 = ServantData;
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_13;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)servantLogicResultList,
               v6,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      servantLogicResultList = (void *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v8->klass->vtable._13_get_resultHp.method)(
                                         v8,
                                         v8->klass->vtable._14_set_resultHp.methodPtr);
      if ( !Item )
        goto LABEL_13;
      HIDWORD(Item[1].klass) = (_DWORD)servantLogicResultList;
    }
    servantLogicResultList = this->fields.servantLogicResultList;
    ++v6;
    if ( !servantLogicResultList )
      goto LABEL_13;
  }
}


void __fastcall BattleActionData__servantLogicResultClear(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_o *v2; // x19
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v6; // w9

  v2 = this;
  if ( (byte_4A5D399 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    this = (BattleActionData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    byte_4A5D399 = 1;
  }
  servantLogicResultList = v2->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_1B8880C(this, method);
  size = servantLogicResultList->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)servantLogicResultList->fields._items;
    v6 = servantLogicResultList->fields._version + 1;
    servantLogicResultList->fields._size = 0;
    servantLogicResultList->fields._version = v6;
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
      sub_1B8880C(this, 0LL);
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
  __int64 v9; // x19
  System_Collections_Generic_List_object__o *changeBgList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  ServantStatusBattleListViewItem_o *p_changeBgList; // x20
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4A5D36B & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_ChangeBg_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    byte_4A5D36B = 1;
  }
  v9 = sub_1B887FC(BattleActionData_ChangeBg_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_DWORD *)(v9 + 28) = inbgNo;
  *(_DWORD *)(v9 + 32) = inTp;
  *(_DWORD *)(v9 + 36) = priority;
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = (ServantStatusBattleListViewItem_o *)&this->fields.changeBgList;
    v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    p_changeBgList->klass = (ServantStatusBattleListViewItem_c *)v15;
    sub_1B88554(p_changeBgList, (int32_t)v15, v16, v17);
    changeBgList = (System_Collections_Generic_List_object__o *)p_changeBgList->klass;
    if ( !p_changeBgList->klass )
      goto LABEL_10;
  }
  items = changeBgList->fields._items;
  v19 = Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__;
  ++changeBgList->fields._version;
  if ( !items )
LABEL_10:
    sub_1B8880C(changeBgList, v11);
  size = changeBgList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      changeBgList,
      (Il2CppObject *)v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    changeBgList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), v9, v12, v13);
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
  if ( (byte_4A5D352 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    byte_4A5D352 = 1;
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
    sub_1B8880C(this, data);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = v13 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v16 + 32) = data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)data, v11, v12);
  }
}


void __fastcall BattleActionData__setEffect(
        BattleActionData_o *this,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.effectlist = effectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectlist, (int32_t)effectList, (int32_t)method, v3);
}


void __fastcall BattleActionData__setEndCamera(
        BattleActionData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.endcameraname = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endcameraname, (int32_t)name, (int32_t)method, v3);
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
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x20
  int v9; // w2

  v6 = this;
  if ( (byte_4A5D39B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    this = (BattleActionData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
    byte_4A5D39B = 1;
  }
  if ( isTargetEnemy )
    v7 = 2;
  else
    v7 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_1B8880C(this, *(_QWORD *)&index);
    if ( funcTargetPlayerTypeList->fields._size > index )
    {
      v9 = System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__) | v7;
      System_Collections_Generic_List_Int32Enum___set_Item(
        funcTargetPlayerTypeList,
        index,
        v9,
        (const MethodInfo_34E2DA0 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
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
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  bool isShowForcedEffect; // w8

  if ( (byte_4A5D35C & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_HealData_TypeInfo);
    byte_4A5D35C = 1;
  }
  v15 = sub_1B887FC(BattleActionData_HealData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1B8880C(v16, v17);
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
  BattleActionData__setHealData_42345696(this, (BattleActionData_HealData_o *)v15, vals, v18);
  return (BattleActionData_HealData_o *)v15;
}


void __fastcall BattleActionData__setHealData_42345696(
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
      sub_1B8880C(this, 0LL);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 117, 0LL, 0LL);
    data->fields.popValueText = StrParam;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&data->fields.popValueText, (int32_t)StrParam, v7, v8);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


void __fastcall BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D340 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D340 = 1;
  }
  v5 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B8880C(0LL, v6);
  if ( !v5->max_length )
    sub_1B88814(v5, v5);
  v5->m_Items[1] = pttargetId;
  this->fields.pttargetIds = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.pttargetIds, (int32_t)v5, v7, v8);
}


void __fastcall BattleActionData__setPTTargetId_42333772(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.pttargetIds = pttargetIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.pttargetIds, (int32_t)pttargetIds, (int32_t)method, v3);
}


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

  if ( (byte_4A5D35F & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_ReplaceMember_TypeInfo);
    byte_4A5D35F = 1;
  }
  v11 = sub_1B887FC(BattleActionData_ReplaceMember_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B8880C(v12, v13);
  *(_DWORD *)(v11 + 32) = outUniqueId;
  *(_DWORD *)(v11 + 36) = inUniqueId;
  *(_DWORD *)(v11 + 28) = index;
  *(_DWORD *)(v11 + 16) = funcIndex;
  BattleActionData__setReplaceMember_42346220(this, (BattleActionData_ReplaceMember_o *)v11, v14);
}


void __fastcall BattleActionData__setReplaceMember_42346220(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *replacememberlist; // x0
  ServantStatusBattleListViewItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A5D360 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    byte_4A5D360 = 1;
  }
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (ServantStatusBattleListViewItem_o *)&this->fields.replacememberlist;
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B88554(p_replacememberlist, (int32_t)v8, v9, v10);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
    if ( !p_replacememberlist->klass )
      goto LABEL_9;
  }
  items = replacememberlist->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__;
  ++replacememberlist->fields._version;
  if ( !items )
LABEL_9:
    sub_1B8880C(replacememberlist, data);
  size = replacememberlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replacememberlist,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    replacememberlist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *shiftServantList; // x0
  ServantStatusBattleListViewItem_o *p_shiftServantList; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A5D369 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    byte_4A5D369 = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = (ServantStatusBattleListViewItem_o *)&this->fields.shiftServantList;
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    p_shiftServantList->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B88554(p_shiftServantList, (int32_t)v8, v9, v10);
    shiftServantList = (System_Collections_Generic_List_object__o *)p_shiftServantList->klass;
    if ( !p_shiftServantList->klass )
      goto LABEL_9;
  }
  items = shiftServantList->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__;
  ++shiftServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B8880C(shiftServantList, data);
  size = shiftServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      shiftServantList,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    shiftServantList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
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


void __fastcall BattleActionData__setSummonServant(
        BattleActionData_o *this,
        int32_t uniqueId,
        int32_t unloadUniqueId,
        int32_t funcIndex,
        bool isEffect,
        int32_t callSvtEffectId,
        const MethodInfo *method)
{
  __int64 v13; // x19
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *summonServantList; // x0
  ServantStatusBattleListViewItem_o *p_summonServantList; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A5D366 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    sub_1B885B0(&BattleActionData_SummonServant_TypeInfo);
    byte_4A5D366 = 1;
  }
  v13 = sub_1B887FC(BattleActionData_SummonServant_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 16) = funcIndex;
  *(_DWORD *)(v13 + 28) = uniqueId;
  *(_DWORD *)(v13 + 32) = unloadUniqueId;
  *(_BYTE *)(v13 + 36) = isEffect;
  *(_DWORD *)(v13 + 40) = callSvtEffectId;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = (ServantStatusBattleListViewItem_o *)&this->fields.summonServantList;
    v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    p_summonServantList->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B88554(p_summonServantList, (int32_t)v19, v20, v21);
    summonServantList = (System_Collections_Generic_List_object__o *)p_summonServantList->klass;
    if ( !p_summonServantList->klass )
      goto LABEL_9;
  }
  items = summonServantList->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__;
  ++summonServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B8880C(summonServantList, v14);
  size = summonServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      summonServantList,
      (Il2CppObject *)v13,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    summonServantList->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), v13, v15, v16);
  }
}


void __fastcall BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4A5D373 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D373 = 1;
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

  if ( (byte_4A5D374 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D374 = 1;
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

  if ( (byte_4A5D375 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D375 = 1;
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

  if ( (byte_4A5D371 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D371 = 1;
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._damagedatalist, (int32_t)value, (int32_t)method, v3);
}


System_String_o *__fastcall BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t type; // w8
  Il2CppObject *v7; // x0
  __int64 *v8; // x8
  int v10; // [xsp+Ch] [xbp-24h] BYREF
  int v11; // [xsp+18h] [xbp-18h] BYREF
  int v12; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4A5D37D & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_18873/*"effect/BitEffect/bit_buster{0:00}"*/);
    sub_1B885B0(&StringLiteral_18872/*"effect/BitEffect/bit_arts{0:00}"*/);
    sub_1B885B0(&StringLiteral_18880/*"effect/BitEffect/bit_flash02"*/);
    sub_1B885B0(&StringLiteral_18882/*"effect/BitEffect/bit_quick{0:00}"*/);
    byte_4A5D37D = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v11 = 1;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4);
      v8 = &StringLiteral_18872/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v8, v7, 0LL);
    case 3:
      v10 = 1;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v2, v3, v4);
      v8 = &StringLiteral_18882/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v8, v7, 0LL);
    case 2:
      v12 = 1;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2, v3, v4);
      v8 = &StringLiteral_18873/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v8, v7, 0LL);
    case 4:
      return (System_String_o *)StringLiteral_18880/*"effect/BitEffect/bit_flash02"*/;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v5, v6);
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
  if ( (byte_4A5D3CA & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1B885B0(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    byte_4A5D3CA = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v12 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B887FC(Generator_BGFromFieldChangeBGBuff_TypeInfo),
        Generator_BGFromFieldChangeBGBuff___ctor(v12, fieldChange, 0LL),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_AddBackground.method)(
                                                        v11,
                                                        v12,
                                                        2LL,
                                                        v11->klass->vtable._6_AddBGM.methodPtr)) == 0LL )
  {
    sub_1B8880C(this, perf);
  }
  v13 = (int)this;
  v14 = System_Int32__ToString((int)this + 28, 0LL);
  *bgName = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)bgName, (int32_t)v14, v15, v16);
  v17 = System_Int32__ToString(v13 + 32, 0LL);
  *bgType = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)bgType, (int32_t)v17, v18, v19);
}


System_String_o *__fastcall BattleActionData_AfterChangeField__GetPriorityBgmName(
        BattleActionData_AfterChangeField_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  BattleActionData_AfterChangeField_o *v6; // x20
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  _QWORD *p_image; // x22
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  BattleData_o *data; // x23
  BattleBuffData_FieldChangeData_o *v11; // x24
  BattleFieldEnvironmentData_o *v12; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v13; // x22
  __int64 v14; // x8

  v6 = this;
  if ( (byte_4A5D3CB & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1B885B0(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_4A5D3CB = 1;
  }
  if ( !perf )
    goto LABEL_13;
  this = (BattleActionData_AfterChangeField_o *)BattlePerformance__get_FieldEnvData(perf, 0LL);
  if ( !this )
    goto LABEL_13;
  fieldChange = v6->fields.fieldChange;
  if ( !fieldChange )
    goto LABEL_13;
  p_image = &this[1].klass->_1.image;
  this = (BattleActionData_AfterChangeField_o *)System_String__IsNullOrEmpty(fieldChange->fields.bgmName, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL);
    data = perf->fields.data;
    v11 = v6->fields.fieldChange;
    v12 = FieldEnvData;
    v13 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B887FC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v13, data, v11, 0LL);
    if ( !v12 )
      goto LABEL_13;
    this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, struct AddBgmArgument_o *, Il2CppMethodPointer))v12->klass->vtable._6_AddBGM.method)(
                                                    v12,
                                                    v13,
                                                    2LL,
                                                    v6->fields.addBgmArg,
                                                    v12->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    p_image = &this->klass;
  }
  if ( !p_image )
LABEL_13:
    sub_1B8880C(this, perf);
  v14 = p_image[6];
  if ( v14 )
    return *(System_String_o **)(v14 + 24);
  return defBgmName;
}


void __fastcall BattleActionData_AfterChangeField__SetAddBgmArg(
        BattleActionData_AfterChangeField_o *this,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.addBgmArg = arg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.addBgmArg, (int32_t)arg, (int32_t)method, v3);
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
    sub_1B8880C(this, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v7, v8);
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
    sub_1B8880C(v9, v10);
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
    sub_1B8880C(this, id);
  fieldChange->fields.bgId = id;
  fieldChange->fields.bgType = type;
}


void __fastcall BattleActionData_AfterChangeTakeOverField__SetTakeOverBgmName(
        BattleActionData_AfterChangeTakeOverField_o *this,
        System_String_o *bgmName,
        int32_t bgmId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  BgmMaster_o *v12; // x22
  struct BattleBuffData_FieldChangeData_o *v13; // x23
  struct BattleBuffData_FieldChangeData_o *v14; // x19

  if ( (byte_4A5D3CC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D3CC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange
    || (fieldChange->fields.bgmName = bgmName,
        v12 = (BgmMaster_o *)Master_object,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&fieldChange->fields.bgmName, (int32_t)bgmName, v9, v10),
        !v12)
    || (v13 = this->fields.fieldChange,
        Master_object = (Il2CppObject *)BgmMaster__GetBgmIdFromFileName(v12, bgmName, bgmId, 0LL),
        !v13)
    || (v13->fields.bgmId = (int)Master_object, (v14 = this->fields.fieldChange) == 0LL) )
  {
    sub_1B8880C(Master_object, v8);
  }
  if ( !v14->fields._HasBgmPriorityInVals_k__BackingField )
    v14->fields.bgmPriority = BgmMaster__GetBgmPriority(v12, v14->fields.bgmId, 0, 0LL);
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

  if ( (byte_4A5D3AA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5D3AA = 1;
  }
  v5 = Method_System_Array_Empty_int___;
  v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v6 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = *(struct System_Int32_array ***)(v8 + 184);
  v10 = *v9;
  this->fields.attackRatio = *v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.attackRatio, (int32_t)v10, v2, v3);
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
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_int__o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_int__o *v14; // x0
  __int64 v15; // x1
  struct System_Int32_array *attackRatio; // x8
  unsigned __int64 v17; // x26
  int v18; // w24
  __int64 v19; // x27
  int32_t v20; // w28
  _BOOL4 v21; // w10
  int32_t v22; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  struct System_Int32_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10

  v5 = minimumDamageFlg;
  if ( (byte_4A5D3A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D3A9 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.attackRatio, 0LL);
  if ( IsNullOrEmpty )
  {
    BattleActionData_DamageData__GetRatioDamageList(
      (BattleActionData_DamageData_o *)IsNullOrEmpty,
      damageList,
      damage,
      0,
      v10);
  }
  else
  {
    v11 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    *damageList = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)damageList, (int32_t)v11, v12, v13);
    v14 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                      (System_Collections_Generic_IEnumerable_int__o *)this->fields.attackRatio,
                                                      0LL);
    attackRatio = this->fields.attackRatio;
    if ( !attackRatio )
      goto LABEL_20;
    v17 = 0LL;
    v18 = 0;
    v19 = (int)v14;
    v20 = damage;
    while ( (__int64)v17 < (int)(*(_QWORD *)&attackRatio->max_length - 1) )
    {
      if ( v17 >= (unsigned int)*(_QWORD *)&attackRatio->max_length )
        sub_1B88814(v14, v15);
      v14 = *damageList;
      v21 = (int)(attackRatio->m_Items[v17 + 1] * (__int64)v20 / v19) < 1;
      if ( v21 && v5 )
        v22 = 1;
      else
        v22 = attackRatio->m_Items[v17 + 1] * (__int64)v20 / v19;
      if ( v21 && v5 )
        v20 = (v20 - 1) & ~((v20 - 1) >> 31);
      if ( v14 )
      {
        items = v14->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( items )
        {
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              v22,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            attackRatio = this->fields.attackRatio;
          }
          else
          {
            v14->fields._size = size + 1;
            items->m_Items[size + 1] = v22;
          }
          v18 += v22;
          damage = (damage - v22) & ~((damage - v22) >> 31);
          ++v17;
          if ( attackRatio )
            continue;
        }
      }
      goto LABEL_20;
    }
    v14 = *damageList;
    if ( damage < 1 && v5 )
      damage = 1;
    if ( !v14
      || (v26 = v14->fields._items, v27 = Method_System_Collections_Generic_List_int__Add__,
                                    ++v14->fields._version,
                                    !v26) )
    {
LABEL_20:
      sub_1B8880C(v14, v15);
    }
    v28 = v14->fields._size;
    if ( (unsigned int)v28 >= v26->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        damage,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = v28 + 1;
      v26->m_Items[v28 + 1] = damage;
    }
    damage += v18;
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
  if ( (byte_4A5D3A8 & 1) != 0 )
  {
    if ( ratio )
      goto LABEL_3;
  }
  else
  {
    this = (BattleActionData_AttackDamageData_o *)sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5D3A8 = 1;
    if ( klass )
    {
LABEL_3:
      if ( v5 )
        goto LABEL_4;
LABEL_15:
      sub_1B8880C(this, ratio);
    }
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  this = *(BattleActionData_AttackDamageData_o **)(v6[7] + 16LL);
  if ( (BYTE5(this[1].fields.defnplist) & 1) == 0 )
    this = (BattleActionData_AttackDamageData_o *)sub_1BDA48C(this);
  klass = (struct System_Int32_array *)this->fields.attackRatio->obj.klass;
  if ( !v5 )
    goto LABEL_15;
LABEL_4:
  v5->fields.attackRatio = klass;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.attackRatio, (int32_t)klass, (int32_t)method, v3);
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

  if ( (byte_4A5D3A1 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5D3A1 = 1;
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


void __fastcall BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t curGaugeIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_UpHpDataBeforeShift_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5D3B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_1B885B0(&BattleAction_UpHpDataBeforeShift_TypeInfo);
    byte_4A5D3B9 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v10 = (BattleAction_UpHpDataBeforeShift_o *)sub_1B887FC(BattleAction_UpHpDataBeforeShift_TypeInfo);
  BattleAction_UpHpDataBeforeShift___ctor(v10, curGaugeIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v16 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1B8880C(v11, v12);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v10,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetBeforeEffectData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1

  if ( (byte_4A5D3B5 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_1B885B0(&StringLiteral_19981/*"hp_iconeffect_before"*/);
    byte_4A5D3B5 = 1;
  }
  v2 = sub_1B887FC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0LL);
  if ( !v2 )
    sub_1B8880C(v3, v4);
  v7 = StringLiteral_19981/*"hp_iconeffect_before"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_19981/*"hp_iconeffect_before"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 24), v7, v5, v6);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


BattleAction_ShiftHpData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_4A5D3B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_ShiftHpData___);
    byte_4A5D3B8 = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_object__48686808(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0LL,
                                         (const MethodInfo_2E6E6D8 *)Method_BasicHelper_IndexValue_ShiftHpData___);
}


void __fastcall BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v4 = this;
  if ( (byte_4A5D3B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ShiftHpData___ctor__);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_1B885B0(&System_Collections_Generic_List_ShiftHpData__TypeInfo);
    byte_4A5D3B6 = 1;
  }
  if ( !svtData )
    sub_1B8880C(this, svtData);
  v4->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShiftHpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v4->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._ShiftHpDataList_k__BackingField, (int32_t)v5, v6, v7);
}


void __fastcall BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData___c_c *v3; // x0
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  System_Action_object__o *_9__34_0; // x20
  Il2CppObject *v6; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D3B7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ShiftHpData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
    sub_1B885B0(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__);
    sub_1B885B0(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_4A5D3B7 = 1;
  }
  this->fields.hpDataIndex = 0;
  v3 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  if ( !BattleActionData_BaseShiftGaugeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    v3 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  }
  _9__34_0 = (System_Action_object__o *)v3->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__34_0 = (System_Action_object__o *)sub_1B887FC(System_Action_ShiftHpData__TypeInfo);
    System_Action_object____ctor(
      _9__34_0,
      v6,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      0LL);
    static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v8, v9);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_1B8880C(v3, method);
  System_Collections_Generic_List_object___ForEach(
    ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
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
  sub_1B88554(
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D3BA & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_4A5D3BA = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  BattleAction_ShiftHpData__InitHpIndex(x, 0LL);
}


void __fastcall BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D3B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4A5D3B1 = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.removeBuffList, (int32_t)v3, v4, v5);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p_effectProcList; // x19
  System_Collections_ICollection_o *effectProcList; // t1
  System_Collections_Generic_List_object__o *klass; // x20
  System_Action_object__o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5D3B0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionEffect_Base__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
    sub_1B885B0(&Method_BattleActionData_BuffData___c__DisplayClass57_0__ExecAfterEffectProc_b__0__);
    sub_1B885B0(&BattleActionData_BuffData___c__DisplayClass57_0_TypeInfo);
    byte_4A5D3B0 = 1;
  }
  v5 = sub_1B887FC(BattleActionData_BuffData___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  effectProcList = (System_Collections_ICollection_o *)this->fields.effectProcList;
  p_effectProcList = (ServantStatusBattleListViewItem_o *)&this->fields.effectProcList;
  if ( BasicHelper__IsNullOrEmpty(effectProcList, 0LL) )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
  v13 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData_BuffData___c__DisplayClass57_0__ExecAfterEffectProc_b__0__,
    0LL);
  if ( !klass )
LABEL_7:
    sub_1B8880C(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    klass,
    (System_Action_T__o *)v13,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
  p_effectProcList->klass = 0LL;
  sub_1B88554(p_effectProcList, 0, v14, v15);
}


void __fastcall BattleActionData_BuffData__ExecPreActionProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *effectProcList; // x19
  System_Action_object__o *v11; // x20

  if ( (byte_4A5D3AF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionEffect_Base__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
    sub_1B885B0(&Method_BattleActionData_BuffData___c__DisplayClass56_0__ExecPreActionProc_b__0__);
    sub_1B885B0(&BattleActionData_BuffData___c__DisplayClass56_0_TypeInfo);
    byte_4A5D3AF = 1;
  }
  v5 = sub_1B887FC(BattleActionData_BuffData___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0LL) )
    return;
  effectProcList = (System_Collections_Generic_List_object__o *)this->fields.effectProcList;
  v11 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActionData_BuffData___c__DisplayClass56_0__ExecPreActionProc_b__0__,
    0LL);
  if ( !effectProcList )
LABEL_7:
    sub_1B8880C(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    effectProcList,
    (System_Action_T__o *)v11,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
}


System_Int32_array *__fastcall BattleActionData_BuffData__GetDisplayEffectIds(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  result = (BattleBuffData_o *)BattleData__getServantData(data, this->fields.targetId, 0LL);
  if ( result )
    return *(BattleBuffData_o **)&result[4].fields.isNoDamage;
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
    sub_1B8880C(this, 0LL);
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
  System_Collections_Generic_List_object__o *klass; // x0
  ServantStatusBattleListViewItem_o *p_effectProcList; // x20
  struct System_Collections_Generic_List_BattleActionEffect_Base__o *effectProcList; // t1
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4A5D3AE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    byte_4A5D3AE = 1;
  }
  effectProcList = this->fields.effectProcList;
  p_effectProcList = (ServantStatusBattleListViewItem_o *)&this->fields.effectProcList;
  klass = (System_Collections_Generic_List_object__o *)effectProcList;
  if ( !effectProcList )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    p_effectProcList->klass = (ServantStatusBattleListViewItem_c *)v9;
    sub_1B88554(p_effectProcList, (int32_t)v9, v10, v11);
    klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
    if ( !p_effectProcList->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v13 = Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__;
  ++klass->fields._version;
  if ( !items )
LABEL_9:
    sub_1B8880C(klass, effectProc);
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)effectProc,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v15[4] = (Il2CppClass *)effectProc;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)effectProc, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData_BuffData__SetCheckHideWhenDeadInfo(
        BattleActionData_BuffData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( (byte_4A5D3AD & 1) == 0 )
  {
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D3AD = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !vals )
  {
    vals = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(vals, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.dataVals = vals;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dataVals, (int32_t)vals, (int32_t)method, v3);
}


void __fastcall BattleActionData_BuffData__SetSaveTpTurn(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  if ( (byte_4A5D3AC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    byte_4A5D3AC = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, value, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  System_Collections_Generic_List_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  struct System_Int32_array **v12; // x8
  struct System_Int32_array *v13; // x1

  if ( (byte_4A5D3A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
    byte_4A5D3A7 = 1;
  }
  this->fields.multiatk = 1;
  v3 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.attackSideEffectActList, (int32_t)v3, v4, v5);
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  if ( !*(_DWORD *)(v10 + 224) )
    j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  v12 = *(struct System_Int32_array ***)(v11 + 184);
  v13 = *v12;
  this->fields._ResetDamageArray_k__BackingField = *v12;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)v13,
    v6,
    v7);
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
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4A5D3A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D3A3 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7
    || (items = v7->fields._items, v13 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v7->fields._version,
                                   !items) )
  {
    sub_1B8880C(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      damage,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    items->m_Items[size + 1] = damage;
  }
  *damageList = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)damageList, (int32_t)v7, v10, v11);
  return damage;
}


int32_t __fastcall BattleActionData_DamageData__GetResetDamageValue(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4A5D3A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    byte_4A5D3A4 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields._ResetDamageArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
}


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

  if ( (byte_4A5D3A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5D3A5 = 1;
  }
  v11 = 0LL;
  ((void (__fastcall *)(BattleActionData_DamageData_o *, System_Collections_Generic_List_int__o **, _QWORD, bool, void *))this->klass->vtable._4_GetRatioDamageList.method)(
    this,
    &v11,
    (unsigned int)damage,
    minimumDamageFlg,
    this->klass[1]._1.image);
  if ( !v11 )
    sub_1B8880C(0LL, v7);
  v8 = System_Collections_Generic_List_int___ToArray(
         v11,
         (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._ResetDamageArray_k__BackingField = v8;
  sub_1B88554(
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
  ActEnemyEffectFlipProc_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D3A6 & 1) == 0 )
  {
    sub_1B885B0(&ActEnemyEffectFlipProc_TypeInfo);
    byte_4A5D3A6 = 1;
  }
  if ( funcEnt )
    funcEnt = (FunctionEntity_o *)FunctionEntity__GetActEnemyEffectFlipDataArray(funcEnt, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)funcEnt, 0LL) )
  {
    v5 = (ActEnemyEffectFlipProc_o *)sub_1B887FC(ActEnemyEffectFlipProc_TypeInfo);
    ActEnemyEffectFlipProc___ctor(v5, (EffectFlipData_array *)funcEnt, 0LL);
    this->fields._EffectFlipProc_k__BackingField = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._EffectFlipProc_k__BackingField, (int32_t)v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DamageData__addAttackSideEffectAction(
        BattleActionData_DamageData_o *this,
        int32_t act,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *attackSideEffectActList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4A5D3A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__);
    byte_4A5D3A2 = 1;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_Int32Enum___Contains(
         attackSideEffectActList,
         act,
         (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
  {
    return;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList
    || (items = attackSideEffectActList->fields._items,
        v7 = Method_System_Collections_Generic_List_BuffList_ACTION__Add__,
        ++attackSideEffectActList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B8880C(attackSideEffectActList, *(_QWORD *)&act);
  }
  size = attackSideEffectActList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      attackSideEffectActList,
      act,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    attackSideEffectActList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = act;
  }
}


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
    sub_1B88814(this, index);
  return atknplist->m_Items[index + 1];
}


int32_t __fastcall BattleActionData_DamageData__getAttackCount(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    sub_1B8880C(this, method);
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

  starlist = this->fields.starlist;
  if ( !starlist )
    return 0;
  max_length = starlist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1B88814(this, index);
  return starlist->m_Items[index + 1] > 0;
}


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
    sub_1B88814(this, index);
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

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    return -1;
  max_length = damagelist->max_length;
  if ( max_length <= index )
    return -1;
  if ( max_length <= (unsigned int)index )
    sub_1B88814(this, index);
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

  defnplist = this->fields.defnplist;
  if ( !defnplist )
    return 0;
  max_length = defnplist->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1B88814(this, index);
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.damageRates, (int32_t)ratio, v5, v6);
}


int32_t __fastcall BattleActionData_DamageValueFuncDamageData__GetRatioDamageList(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_int__o *v11; // x0
  __int64 v12; // x1
  struct System_Int32_array *damageRates; // x21
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  __int64 v16; // x25
  __int64 v17; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v21; // x21
  int v22; // w8
  int32_t v23; // w22
  int32_t Item; // w0
  System_Collections_Generic_List_int__o *v25; // x8
  int32_t v26; // w20
  int32_t v27; // w23
  int32_t v28; // w0

  if ( (byte_4A5D3AB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D3AB = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  *damageList = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)damageList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                    (System_Collections_Generic_IEnumerable_int__o *)this->fields.damageRates,
                                                    0LL);
  damageRates = this->fields.damageRates;
  if ( !damageRates )
    goto LABEL_19;
  v14 = *(_QWORD *)&damageRates->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v16 = (int)v11;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        sub_1B88814(v11, v12);
      v11 = *damageList;
      if ( !*damageList )
        break;
      v17 = damageRates->m_Items[v15 + 1];
      items = v11->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      v12 = v17 * damage / v16;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          v12,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size + 1] = v12;
      }
      LODWORD(v14) = damageRates->max_length;
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_13;
    }
LABEL_19:
    sub_1B8880C(v11, v12);
  }
LABEL_13:
  v21 = *damageList;
  if ( !*damageList )
    goto LABEL_19;
  v22 = v21->fields._size;
  v23 = v22 - 1;
  if ( v22 >= 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             *damageList,
             v23,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
    v25 = *damageList;
    v26 = Item;
    v27 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v25, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = System_Math__Max_62525680(0, damage - v27, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v21,
      v23,
      v28 + v26,
      (const MethodInfo_34E0574 *)Method_System_Collections_Generic_List_int__set_Item__);
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
  struct System_String_array *IsNullOrEmpty; // x0
  struct System_String_array *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Master_object; // x22
  BattleMessageEntity_o *v14; // x2
  const MethodInfo *v15; // x4
  int32_t DefInterval; // w0
  BattleActionData_DisplayMessageData_o *ScriptInt; // x0
  BattleMessageEntity_o *v18; // x2
  const MethodInfo *v19; // x4
  int32_t DefBaseTime; // w0
  BattleActionData_DisplayMessageData_o *v21; // x0
  BattleMessageEntity_o *v22; // x2
  const MethodInfo *v23; // x4
  int32_t DefTimePerChara; // w0
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x22
  System_Func_object__int__o *v26; // x23
  int64_t MessageType_k__BackingField; // x2

  if ( (byte_4A5D3C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_string___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_14449/*"TimePerChara"*/);
    sub_1B885B0(&StringLiteral_3183/*"BaseTime"*/);
    sub_1B885B0(&StringLiteral_9002/*"MessageType"*/);
    sub_1B885B0(&StringLiteral_7684/*"Interval"*/);
    byte_4A5D3C5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !ent )
    goto LABEL_15;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_1B88658(string___TypeInfo, 0LL);
  }
  else
  {
    if ( !parser )
      goto LABEL_15;
    IsNullOrEmpty = ParseBattleMessage__Replace(parser, ent->fields.message, 0LL);
  }
  v10 = IsNullOrEmpty;
  if ( !this )
LABEL_15:
    sub_1B8880C(IsNullOrEmpty, v10);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Messages_k__BackingField,
    (int32_t)IsNullOrEmpty,
    v11,
    v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_object,
                  (ConstantMaster_o *)Master_object,
                  v14,
                  preMsg,
                  v15);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7684/*"Interval"*/,
                                                         DefInterval,
                                                         0LL);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_object,
                  v18,
                  preMsg,
                  v19);
  v21 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_3183/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0LL);
  this->fields.baseTime = (int)v21;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v21,
                      (ConstantMaster_o *)Master_object,
                      v22,
                      preMsg,
                      v23);
  this->fields.timePerChara = BattleMessageEntity__GetScriptInt(
                                ent,
                                (System_String_o *)StringLiteral_14449/*"TimePerChara"*/,
                                DefTimePerChara,
                                0LL);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v26 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    0LL);
  this->fields.messageLen = System_Linq_Enumerable__Sum_object_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v26,
                              (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0LL;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9002/*"MessageType"*/,
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
  if ( (byte_4A5D3C7 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1B885B0(&StringLiteral_2926/*"BATTLE_MSG_BASE_TIME"*/);
    byte_4A5D3C7 = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_1B8880C(this, constMst);
  return ConstantMaster__GetValue_39051884(constMst, (System_String_o *)StringLiteral_2926/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4A5D3C6 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1B885B0(&StringLiteral_2927/*"BATTLE_MSG_INTERVAL"*/);
    byte_4A5D3C6 = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_1B8880C(this, constMst);
  return ConstantMaster__GetValue_39051884(constMst, (System_String_o *)StringLiteral_2927/*"BATTLE_MSG_INTERVAL"*/, 250, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4A5D3C8 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1B885B0(&StringLiteral_2999/*"BATTLE_TIME_PER_CHARA"*/);
    byte_4A5D3C8 = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_1B8880C(this, constMst);
  return ConstantMaster__GetValue_39051884(constMst, (System_String_o *)StringLiteral_2999/*"BATTLE_TIME_PER_CHARA"*/, 15, 0LL);
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

  if ( (byte_4A5D3C9 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5D3C9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__ReplaceNameTag(text, 0, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4, 0LL);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v4 )
      sub_1B8880C(0LL, v5);
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

  if ( (byte_4A5D3C4 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5D3C4 = 1;
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

  if ( (byte_4A5D3C3 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5D3C3 = 1;
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
  sub_1B88554(
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


void __fastcall BattleActionData_DownShiftGaugeData__AddShiftHpData(
        BattleActionData_DownShiftGaugeData_o *this,
        int32_t curGaugeIndex,
        int32_t maxGaugeIconIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_ShiftDownHpData_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A5D3C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_1B885B0(&BattleAction_ShiftDownHpData_TypeInfo);
    byte_4A5D3C2 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftDownHpData_o *)sub_1B887FC(BattleAction_ShiftDownHpData_TypeInfo);
  BattleAction_ShiftDownHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v18 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1B8880C(v13, v14);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1

  if ( (byte_4A5D3C1 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_1B885B0(&StringLiteral_19980/*"hp_iconeffect"*/);
    byte_4A5D3C1 = 1;
  }
  v2 = sub_1B887FC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0LL);
  if ( !v2 )
    sub_1B8880C(v3, v4);
  v7 = StringLiteral_19980/*"hp_iconeffect"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_19980/*"hp_iconeffect"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 24), v7, v5, v6);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
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
    sub_1B8880C(this, svtData);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5D3BF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8731/*"MOTION_SHIFT_GAUGE_DOWN"*/);
    byte_4A5D3BF = 1;
  }
  return (System_String_o *)StringLiteral_8731/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A5D3C0 & 1) == 0 )
  {
    sub_1B885B0(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_4A5D3C0 = 1;
  }
  v3 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_1B887FC(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
  BattleAction_PlayDownShiftGaugeMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, Il2CppMethodPointer))v3->klass->vtable._7_Init.method)(
                                                v3,
                                                this,
                                                v3->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5D3B2 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionEffect_UpdateFieldInfo_TypeInfo);
    byte_4A5D3B2 = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v3 = (Il2CppObject *)sub_1B887FC(BattleActionEffect_UpdateFieldInfo_TypeInfo);
  System_Object___ctor(v3, 0LL);
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

  v6 = (BattleActionData_BuffData_o *)this;
  if ( (byte_4A5D3B3 & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D3B3 = 1;
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
    sub_1B8880C(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0LL);
  if ( !uicamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Camera__WorldToViewportPoint_69265680(
                                     uicamera,
                                     *(UnityEngine_Vector3_o *)&v12,
                                     0LL);
  if ( !actorcamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ViewportToWorldPoint_69265688(
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
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
    sub_1B8880C(this, data);
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
    sub_1B8880C(v5, v6);
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
    sub_1B8880C(this, perf);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, 0LL);
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
  sub_1B88554(
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
    sub_1B8880C(this, 0LL);
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
  sub_1B88554(
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

  if ( (byte_4A5D3A0 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_ACTION___TypeInfo);
    byte_4A5D3A0 = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_1B88658(BuffList_ACTION___TypeInfo, 0LL);
  this->fields.sideEffectActs = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectActs, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetId = targetId;
  this->fields.sideEffectActs = sideEffectActs;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectActs, (int32_t)sideEffectActs, v10, v11);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)data, v7, v8);
  LODWORD(v6->monitor) = shiftNpcId;
}


void __fastcall BattleActionData_SkillShiftServant__SetAddBeforeSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B8880C(this, 0LL);
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
      sub_1B8880C(this, 0LL);
    this->fields.isChange = this->fields.displayType != svtData->fields.displayType;
  }
}


void __fastcall BattleActionData_SkillShiftServant__UpdateAfterShiftData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v4; // x20
  struct BattleBuffData_o *buffData; // x21
  const MethodInfo *v6; // x3
  int v7; // w8
  struct BattleData_o *data; // x8
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_4A5D3B4 & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_1B885B0(&int___TypeInfo);
    byte_4A5D3B4 = 1;
  }
  if ( !targetData )
    goto LABEL_11;
  buffData = targetData->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_1B88658(int___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_11;
  v7 = *(_DWORD *)&this->fields.IsForceBuffEffect;
  if ( !v7 || (this->fields.svtId = 10, v7 == 1) )
    sub_1B88814(this, targetData);
  this->fields.limit = 24;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypeBuff(buffData, buffData->fields.passiveList, (System_Int32_array *)this, v6),
        BattleServantData__setSkillShiftServant(targetData, v4->fields.data, v4->fields.npcId, 0LL),
        (data = v4->fields.data) == 0LL)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0LL )
  {
LABEL_11:
    sub_1B8880C(this, targetData);
  }
  BattleLogic__actClassPassiveSkill((BattleLogic_o *)this, targetData->fields.uniqueId, 0LL);
  BattleActionData_ShiftServant__setCheckSvtData((BattleActionData_ShiftServant_o *)v4, targetData, v9);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.changeBgm, (int32_t)inChangeBgm, v5, v6);
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
    sub_1B8880C(this, perf);
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
    sub_1B8880C(this, method);
  return changeBgm->fields.isAllowSubBgmPlaying;
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
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_ShiftUpHpData_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A5D3BE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_1B885B0(&BattleAction_ShiftUpHpData_TypeInfo);
    byte_4A5D3BE = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftUpHpData_o *)sub_1B887FC(BattleAction_ShiftUpHpData_TypeInfo);
  BattleAction_ShiftUpHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v18 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1B8880C(v13, v14);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1

  if ( (byte_4A5D3BD & 1) == 0 )
  {
    sub_1B885B0(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_1B885B0(&StringLiteral_19979/*"hp_iconcharge"*/);
    byte_4A5D3BD = 1;
  }
  v2 = sub_1B887FC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0LL);
  if ( !v2 )
    sub_1B8880C(v3, v4);
  v7 = StringLiteral_19979/*"hp_iconcharge"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_19979/*"hp_iconcharge"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 24), v7, v5, v6);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


int32_t __fastcall BattleActionData_UpShiftGaugeData__GetShiftValue(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  int32_t shiftDeckIndex; // w8
  int32_t shiftSubCount; // w9

  if ( !svtData )
    sub_1B8880C(this, 0LL);
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  shiftSubCount = svtData->fields.shiftSubCount;
  if ( shiftSubCount <= shiftDeckIndex - baseValue )
    shiftSubCount = shiftDeckIndex - baseValue;
  return shiftSubCount - shiftDeckIndex;
}


bool __fastcall BattleActionData_UpShiftGaugeData__IsInvalid(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1B8880C(this, 0LL);
  return svtData->fields.shiftDeckIndex <= svtData->fields.shiftSubCount;
}


void __fastcall BattleActionData_UpShiftGaugeData__UpdateMaxShift(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *targetSvtData,
        bool isChangeMaxBreakGauge,
        const MethodInfo *method)
{
  int32_t *p_lowLimitShift; // x8
  int shiftSubCount; // w9

  if ( !targetSvtData )
    sub_1B8880C(this, 0LL);
  if ( isChangeMaxBreakGauge )
  {
    p_lowLimitShift = &targetSvtData->fields.lowLimitShift;
    shiftSubCount = targetSvtData->fields.lowLimitShift - 1;
    if ( targetSvtData->fields.shiftSubCount > shiftSubCount )
      shiftSubCount = targetSvtData->fields.shiftSubCount;
  }
  else
  {
    shiftSubCount = targetSvtData->fields.lowLimitShift;
    p_lowLimitShift = &targetSvtData->fields.lowLimitShift;
    if ( shiftSubCount >= targetSvtData->fields.shiftDeckIndex )
      shiftSubCount = targetSvtData->fields.shiftDeckIndex;
  }
  *p_lowLimitShift = shiftSubCount;
}


System_String_o *__fastcall BattleActionData_UpShiftGaugeData__get_Motion(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5D3BB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8732/*"MOTION_SHIFT_GAUGE_UP"*/);
    byte_4A5D3BB = 1;
  }
  return (System_String_o *)StringLiteral_8732/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A5D3BC & 1) == 0 )
  {
    sub_1B885B0(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
    byte_4A5D3BC = 1;
  }
  v3 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1B887FC(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, Il2CppMethodPointer))v3->klass->vtable._7_Init.method)(
                                                v3,
                                                this,
                                                v3->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D3CD & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D3CD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleActionData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleActionData___c_TypeInfo->static_fields->__9 = (struct BattleActionData___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleActionData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  BattleBuffData_BuffData__UpdateInterval(buff, 0LL);
}


BattleActionData_o *__fastcall BattleActionData___c___AddSideEffectAfterAction_b__305_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_1B8880C(this, 0LL);
  return act->fields.afterActionData;
}


bool __fastcall BattleActionData___c___ExecUnappliedProcess_b__123_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


bool __fastcall BattleActionData___c___ExistFuncSideEffectTrigger_b__157_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArrayEx_b__125_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B8880C(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArray_b__124_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


void __fastcall BattleActionData___c___ResetAllCheckDead_b__181_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__126_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.functionIndex;
}


void __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__126_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool __fastcall BattleActionData___c___SetFuncTargetAllDead_b__138_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleServantData__isAliveLogic(x, 0, 0LL);
}


void __fastcall BattleActionData___c___SetPopupOnce_b__127_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  x->fields.isOncePop = 1;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__293_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.targetId;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__293_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__158_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__158_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateIntervalBuff_b__148_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B8880C(this, 0LL);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__285_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5D3CE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_4A5D3CE = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1B8880C(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
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

  if ( (byte_4A5D3CF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_4A5D3CF = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1B8880C(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5D3D0 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5D3D0 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1B8880C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A5D3D1 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5D3D1 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1B8880C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A5D3D2 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5D3D2 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1B8880C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass287_0___ctor(
        BattleActionData___c__DisplayClass287_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__0(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4A5D3D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_int__get_Value__);
    byte_4A5D3D3 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_361A2D8 *)Method_System_Nullable_int__get_Value__) > x;
}


bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4A5D3D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_int__get_Value__);
    byte_4A5D3D4 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_361A2D8 *)Method_System_Nullable_int__get_Value__) == x;
}


bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4A5D3D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_int__get_Value__);
    byte_4A5D3D5 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_361A2D8 *)Method_System_Nullable_int__get_Value__) < x;
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
    sub_1B8880C(this, 0LL);
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
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  BattleActionData___c_c *v5; // x0
  System_Collections_Generic_List_int__o *targetList; // x20
  System_Func_object__int__o *_9__293_1; // x22
  Il2CppObject *v8; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  BattleActionData___c_c *v13; // x0
  System_Collections_Generic_List_int__o *v14; // x19
  System_Func_object__int__o *_9__293_2; // x21
  Il2CppObject *v16; // x22
  struct BattleActionData___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  v2 = this;
  if ( (byte_4A5D3D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    sub_1B885B0(&System_Func_BattleActionData_HealData__int__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_1__);
    sub_1B885B0(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_2__);
    this = (BattleActionData___c__DisplayClass293_0_o *)sub_1B885B0(&BattleActionData___c_TypeInfo);
    byte_4A5D3D6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v5 = BattleActionData___c_TypeInfo;
    targetList = v2->fields.targetList;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v5 = BattleActionData___c_TypeInfo;
    }
    _9__293_1 = (System_Func_object__int__o *)v5->static_fields->__9__293_1;
    if ( !_9__293_1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v5->static_fields->__9;
      _9__293_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__293_1,
        v8,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__293_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__293_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__293_1, (int32_t)_9__293_1, v10, v11);
    }
    this = (BattleActionData___c__DisplayClass293_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__293_1,
                                                          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_23;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_23;
  }
  healdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.healdatalist;
  if ( healdatalist )
  {
    v13 = BattleActionData___c_TypeInfo;
    v14 = v2->fields.targetList;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v13 = BattleActionData___c_TypeInfo;
    }
    _9__293_2 = (System_Func_object__int__o *)v13->static_fields->__9__293_2;
    if ( !_9__293_2 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BattleActionData___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__293_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleActionData_HealData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__293_2,
        v16,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_2__,
        0LL);
      v17 = BattleActionData___c_TypeInfo->static_fields;
      v17->__9__293_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__293_2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->__9__293_2, (int32_t)_9__293_2, v18, v19);
    }
    this = (BattleActionData___c__DisplayClass293_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__293_2,
                                                          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v14 )
    {
      System_Collections_Generic_List_int___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_23:
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, act);
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
    sub_1B8880C(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}