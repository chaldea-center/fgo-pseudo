void __fastcall BattleActionData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleActionData_StaticFields *static_fields; // x8

  if ( (byte_4B46F33 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, v1);
    byte_4B46F33 = 1;
  }
  static_fields = BattleActionData_TypeInfo->static_fields;
  static_fields->addActionOrder = 0;
  *(_OWORD *)&static_fields->TYPE_DEAD = xmmword_BEB420;
  *(_OWORD *)&static_fields->TYPE_RESURRECTION = xmmword_BEBF30;
  *(_OWORD *)&static_fields->TYPE_ORDERBUSTER = xmmword_BEB700;
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_T__o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_int__o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_HashSet_int__o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_List_object__o *v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3

  if ( (byte_4B46F32 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__,
      method);
    sub_1BDB878(
      &System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo,
      v3);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo, v11);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BDB878(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo, v13);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData__TypeInfo, v14);
    sub_1BDB878(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    byte_4B46F32 = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1LL;
  this->fields.imageId = -1;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1LL;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  v17 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.damageSideEffectedSvtIds, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1BDBAC4(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v20,
    (const MethodInfo_3626A34 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.attackSideEffectedSvtIds, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantLogicResultList, (int32_t)v23, v24, v25);
  this->fields.funcResult = 1;
  v26 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v26,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.funcTargetList, (int32_t)v29, v30, v31);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  this->fields._IsUpdateBuffAfterAction_k__BackingField = 1;
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v35,
    (const MethodInfo_32F5C74 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._IntervalBuffDict_k__BackingField, (int32_t)v35, v36, v37);
  v38 = (int)StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillCutInMessage, v38, v39, v40);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v41;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sideEffectList, (int32_t)v41, v42, v43);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData__AddAfterActionData(
        BattleActionData_o *this,
        BattleActionData_o *afterActionData,
        bool isPreActCheckDead,
        const MethodInfo *method)
{
  struct BattleActionData_o *v6; // x8

  this->fields.afterActionData = afterActionData;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.afterActionData,
    (int32_t)afterActionData,
    isPreActCheckDead,
    method);
  v6 = this->fields.afterActionData;
  if ( v6 )
    v6->fields.isPreAfterActCheckDead = isPreActCheckDead;
}


void __fastcall BattleActionData__AddBuffList(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x0
  CGThumbnailListItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B46EE6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v7);
    byte_4B46EE6 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (CGThumbnailListItem_o *)&this->fields.buffdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (CGThumbnailListItem_c *)v10;
    sub_1BDB81C(p_buffdatalist, (int32_t)v10, v11, v12);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
    if ( !p_buffdatalist->klass )
      goto LABEL_11;
  }
  items = buffdatalist->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__;
  ++buffdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1BDBAD4(buffdatalist, data);
  size = buffdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      buffdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    buffdatalist->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData__AddChangeModelData(
        BattleActionData_o *this,
        BattleActionData_ChangeModelActionData_o *changeModelActionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *ChangeModelList_k__BackingField; // x0
  CGThumbnailListItem_o *p_ChangeModelList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B46EFB & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__Add__,
      changeModelActionData);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_ChangeModelActionData__TypeInfo, v7);
    byte_4B46EFB = 1;
  }
  if ( changeModelActionData )
  {
    ChangeModelList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ChangeModelList_k__BackingField;
    if ( !ChangeModelList_k__BackingField )
    {
      p_ChangeModelList_k__BackingField = (CGThumbnailListItem_o *)&this->fields._ChangeModelList_k__BackingField;
      v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_ChangeModelActionData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData___ctor__);
      p_ChangeModelList_k__BackingField->klass = (CGThumbnailListItem_c *)v10;
      sub_1BDB81C(p_ChangeModelList_k__BackingField, (int32_t)v10, v11, v12);
      ChangeModelList_k__BackingField = (System_Collections_Generic_List_object__o *)p_ChangeModelList_k__BackingField->klass;
      if ( !p_ChangeModelList_k__BackingField->klass )
        goto LABEL_11;
    }
    items = ChangeModelList_k__BackingField->fields._items;
    v14 = Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__Add__;
    ++ChangeModelList_k__BackingField->fields._version;
    if ( !items )
LABEL_11:
      sub_1BDBAD4(ChangeModelList_k__BackingField, changeModelActionData);
    size = ChangeModelList_k__BackingField->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ChangeModelList_k__BackingField,
        (Il2CppObject *)changeModelActionData,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      ChangeModelList_k__BackingField->fields._size = size + 1;
      v16[4] = (Il2CppClass *)changeModelActionData;
      sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)changeModelActionData, (int32_t)method, v3);
    }
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *DispMsgList_k__BackingField; // x0
  CGThumbnailListItem_o *p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4B46F00 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_DisplayMessageData_TypeInfo, ent);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo, v11);
    byte_4B46F00 = 1;
  }
  v12 = (BattleActionData_DisplayMessageData_o *)sub_1BDBAC4(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor(v12, ent, parser, preMsg, 0LL);
  DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = (CGThumbnailListItem_o *)&this->fields._DispMsgList_k__BackingField;
    v18 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    p_DispMsgList_k__BackingField->klass = (CGThumbnailListItem_c *)v18;
    sub_1BDB81C(p_DispMsgList_k__BackingField, (int32_t)v18, v19, v20);
    DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)p_DispMsgList_k__BackingField->klass;
    if ( !p_DispMsgList_k__BackingField->klass )
      goto LABEL_10;
  }
  items = DispMsgList_k__BackingField->fields._items;
  v22 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
  ++DispMsgList_k__BackingField->fields._version;
  if ( !items )
LABEL_10:
    sub_1BDBAD4(DispMsgList_k__BackingField, v13);
  size = DispMsgList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DispMsgList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    DispMsgList_k__BackingField->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v12, v14, v15);
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
  const MethodInfo *v15; // x3

  v5 = this;
  if ( (byte_4B46EDB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleBuffData_BuffData__TypeInfo, task);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__,
      v6);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      v7);
    sub_1BDB878(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__159_0__, v8);
    this = (BattleActionData_o *)sub_1BDB878(&BattleActionData___c_TypeInfo, v9);
    byte_4B46EDB = 1;
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
  v11 = *(System_Action_object__o **)(this->fields.userCommandCodeId + 104);
  if ( !v11 )
  {
    if ( !LODWORD(this->fields.servantLogicResultList) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
    }
    v12 = *(Il2CppObject **)this->fields.userCommandCodeId;
    v11 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(v11, v12, Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__159_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__159_0 = (struct System_Action_BattleBuffData_BuffData__o *)v11;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__159_0, (int32_t)v11, v14, v15);
  }
  if ( !v5 )
LABEL_12:
    sub_1BDBAD4(this, task);
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
  __int64 v6; // x2
  int endcameraname; // w8
  BattleActionData_o *v8; // x20
  unsigned int v9; // w24
  BattleActionData_c **v10; // x8
  BattleServantData_o *v11; // x21
  BattleBuffData_BuffData_array *UpdateWaitIntervalBuffArray; // x22
  System_Action_object__o *v13; // x23
  const MethodInfo *v14; // x4

  v4 = (Il2CppObject *)this;
  if ( (byte_4B46ED6 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    this = (BattleActionData_o *)sub_1BDB878(&Method_BattleActionData_UpdateIntervalCurrent__, v5);
    byte_4B46ED6 = 1;
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
        sub_1BDBADC(this, data, v6);
      v10 = &v8->klass + (int)v9;
      v11 = (BattleServantData_o *)v10[4];
      if ( !v11 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v10[4], 0LL);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0LL);
      v13 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(v13, v4, Method_BattleActionData_UpdateIntervalCurrent__, 0LL);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v4,
        v11,
        (System_Action_BattleBuffData_BuffData__o *)v13,
        UpdateWaitIntervalBuffArray,
        v14);
      endcameraname = (int)v8->fields.endcameraname;
      if ( (int)++v9 >= endcameraname )
        return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable[5].method)(
                 v4,
                 v4->klass->vtable[6].methodPtr);
    }
LABEL_12:
    sub_1BDBAD4(this, data);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x0
  CGThumbnailListItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B46EEA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v7);
    byte_4B46EEA = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, 0LL);
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (CGThumbnailListItem_o *)&this->fields.healdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (CGThumbnailListItem_c *)v10;
    sub_1BDB81C(p_healdatalist, (int32_t)v10, v11, v12);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
    if ( !p_healdatalist->klass )
      goto LABEL_11;
  }
  items = healdatalist->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_HealData__Add__;
  ++healdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1BDBAD4(healdatalist, data);
  size = healdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      healdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    healdatalist->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
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

  if ( (byte_4B46ED4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, *(_QWORD *)&funcType);
    sub_1BDB878(&Method_BasicHelper_ForEach_int___, v7);
    sub_1BDB878(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__141_0__, v8);
    byte_4B46ED4 = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0LL);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v10 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v10,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__141_0__,
        0LL);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v10,
        (const MethodInfo_301EDEC *)Method_BasicHelper_ForEach_int___);
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
  BattleActionData_MoveToSubMember_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B46EF0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__, *(_QWORD *)&index);
    sub_1BDB878(&BattleActionData_MoveToSubMember_TypeInfo, v11);
    byte_4B46EF0 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = (System_Collections_Generic_List_object__o *)this->fields.moveToSubMemberList;
  v13 = (BattleActionData_MoveToSubMember_o *)sub_1BDBAC4(BattleActionData_MoveToSubMember_TypeInfo);
  BattleActionData_MoveToSubMember___ctor(v13, index, uniqueId, funcIndex, isSucceeded, 0LL);
  if ( !moveToSubMemberList
    || (items = moveToSubMemberList->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
        ++moveToSubMemberList->fields._version,
        !items) )
  {
    sub_1BDBAD4(v14, v15);
  }
  size = moveToSubMemberList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      moveToSubMemberList,
      (Il2CppObject *)v13,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    moveToSubMemberList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
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
  const MethodInfo *v17; // x3
  BattlePerformance_o **v18; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  BattleActionData___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__object__o *_9__330_1; // x21
  Il2CppObject *v25; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4B46F24 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___, perf);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_BattleActionData___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleActionData___, v6);
    sub_1BDB878(&System_Func_BattleActionData__BattleActionData__TypeInfo, v7);
    sub_1BDB878(&System_Func_BattleActionData__bool__TypeInfo, v8);
    sub_1BDB878(&Method_BattleActionData___c__AddSideEffectAfterAction_b__330_1__, v9);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass330_0__AddSideEffectAfterAction_b__0__, v10);
    sub_1BDB878(&BattleActionData___c__DisplayClass330_0_TypeInfo, v11);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v12);
    byte_4B46F24 = 1;
  }
  v13 = sub_1BDBAC4(BattleActionData___c__DisplayClass330_0_TypeInfo);
  BattleActionData___c__DisplayClass330_0___ctor((BattleActionData___c__DisplayClass330_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = perf;
  v18 = (BattlePerformance_o **)(v13 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)perf, v16, v17);
  sideEffectList = this->fields.sideEffectList;
  v20 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_BattleActionData___c__DisplayClass330_0__AddSideEffectAfterAction_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v22 = BattleActionData___c_TypeInfo;
  v23 = v21;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v22 = BattleActionData___c_TypeInfo;
  }
  _9__330_1 = (System_Func_object__object__o *)v22->static_fields->__9__330_1;
  if ( !_9__330_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = BattleActionData___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__330_1 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_BattleActionData__BattleActionData__TypeInfo);
    System_Func_object__object____ctor(
      _9__330_1,
      v25,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__330_1__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__330_1 = (struct System_Func_BattleActionData__BattleActionData__o *)_9__330_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__330_1, (int32_t)_9__330_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__330_1,
                                                               (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v14 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_object_(
                                 v29,
                                 (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
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
    sub_1BDBAD4(v14, v15);
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
  BattleActionData_TransformServant_o *v12; // x19
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *transformServantlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4B46EF2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__, *(_QWORD *)&index);
    sub_1BDB878(&BattleActionData_TransformServant_TypeInfo, v11);
    byte_4B46EF2 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v12 = (BattleActionData_TransformServant_o *)sub_1BDBAC4(BattleActionData_TransformServant_TypeInfo);
  BattleActionData_TransformServant___ctor(v12, index, uniqueId, funcIndex, overwriteLimitCount, 0LL);
  transformServantlist = (System_Collections_Generic_List_object__o *)this->fields.transformServantlist;
  if ( !transformServantlist
    || (items = transformServantlist->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
        ++transformServantlist->fields._version,
        !items) )
  {
    sub_1BDBAD4(transformServantlist, v13);
  }
  size = transformServantlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      transformServantlist,
      (Il2CppObject *)v12,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    transformServantlist->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v14, v15);
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
  const MethodInfo_36125A8 *v15; // x4
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_object__o *v21; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v22; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v23; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v24; // 0:x1.16

  if ( (byte_4B46ED7 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__,
      svtData);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__,
      v9);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__,
      v10);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_4B46ED7 = 1;
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
            (const MethodInfo_32F6864 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v22.fields.key;
      value = v22.fields.value;
      v21 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v21,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v18 )
        goto LABEL_12;
      v24.fields.key = key;
      v24.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v18,
        v24,
        (Il2CppObject *)v21,
        (const MethodInfo_32F6644 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v22,
                                                                                                    (const MethodInfo_32F65AC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_1BDBAD4(IntervalBuffDict_k__BackingField, v16);
  }
}


void __fastcall BattleActionData__AddUseInFsmFuncParam(
        BattleActionData_o *this,
        UseInFsmFuncParam_o *param,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *useInFsmFuncParamList; // x0
  CGThumbnailListItem_o *p_useInFsmFuncParamList; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B46EF9 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UseInFsmFuncParam__Add__, param);
    sub_1BDB878(&Method_System_Collections_Generic_List_UseInFsmFuncParam___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_UseInFsmFuncParam__TypeInfo, v7);
    byte_4B46EF9 = 1;
  }
  if ( param )
  {
    useInFsmFuncParamList = (System_Collections_Generic_List_object__o *)this->fields.useInFsmFuncParamList;
    if ( !useInFsmFuncParamList )
    {
      p_useInFsmFuncParamList = (CGThumbnailListItem_o *)&this->fields.useInFsmFuncParamList;
      v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UseInFsmFuncParam__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UseInFsmFuncParam___ctor__);
      p_useInFsmFuncParamList->klass = (CGThumbnailListItem_c *)v10;
      sub_1BDB81C(p_useInFsmFuncParamList, (int32_t)v10, v11, v12);
      useInFsmFuncParamList = (System_Collections_Generic_List_object__o *)p_useInFsmFuncParamList->klass;
      if ( !p_useInFsmFuncParamList->klass )
        goto LABEL_11;
    }
    items = useInFsmFuncParamList->fields._items;
    v14 = Method_System_Collections_Generic_List_UseInFsmFuncParam__Add__;
    ++useInFsmFuncParamList->fields._version;
    if ( !items )
LABEL_11:
      sub_1BDBAD4(useInFsmFuncParamList, param);
    size = useInFsmFuncParamList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        useInFsmFuncParamList,
        (Il2CppObject *)param,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      useInFsmFuncParamList->fields._size = size + 1;
      v16[4] = (Il2CppClass *)param;
      sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)param, (int32_t)method, v3);
    }
  }
}


System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *__fastcall BattleActionData__EnumerateAllBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
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
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v18; // x8
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  BattleActionData___c_c *v22; // x0
  System_Func_object__object__o *_9__130_0; // x21
  Il2CppObject *v24; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  BattleActionData___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__object__o *_9__130_1; // x21
  Il2CppObject *v33; // x22
  struct BattleActionData___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_4B46ECE & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_ExcludeNull_BattleActionData_BuffData___, method);
    sub_1BDB878(&Method_BasicHelper_ExcludeNull_List_BattleActionData_BuffData____, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___, v6);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_SelectMany_List_BattleActionData_BuffData___BattleActionData_BuffData___,
      v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_BattleActionData__List_BattleActionData_BuffData____, v8);
    sub_1BDB878(&System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___TypeInfo, v9);
    sub_1BDB878(&System_Func_BattleActionData__List_BattleActionData_BuffData___TypeInfo, v10);
    sub_1BDB878(&Method_BattleActionData___c__EnumerateAllBuffData_b__130_0__, v11);
    sub_1BDB878(&Method_BattleActionData___c__EnumerateAllBuffData_b__130_1__, v12);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v13);
    byte_4B46ECE = 1;
  }
  v14 = Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___;
  v15 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___ + 7);
  if ( !v15 )
  {
    sub_1C2BF64(Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C2BF08(inited);
  v18 = *(System_Collections_Generic_IEnumerable_TSource__o ***)(v17 + 184);
  buffdatalist = this->fields.buffdatalist;
  v20 = *v18;
  if ( buffdatalist )
    v20 = System_Linq_Enumerable__Concat_object_(
            *v18,
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (const MethodInfo_304C4A8 *)Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
  sideEffectList = this->fields.sideEffectList;
  if ( sideEffectList )
  {
    v22 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v22 = BattleActionData___c_TypeInfo;
    }
    _9__130_0 = (System_Func_object__object__o *)v22->static_fields->__9__130_0;
    if ( !_9__130_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleActionData___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__130_0 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_BattleActionData__List_BattleActionData_BuffData___TypeInfo);
      System_Func_object__object____ctor(
        _9__130_0,
        v24,
        Method_BattleActionData___c__EnumerateAllBuffData_b__130_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__130_0 = (struct System_Func_BattleActionData__List_BattleActionData_BuffData___o *)_9__130_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__130_0, (int32_t)_9__130_0, v26, v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
                                                           (System_Func_TSource__TResult__o *)_9__130_0,
                                                           (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_BattleActionData__List_BattleActionData_BuffData____);
    v29 = BasicHelper__ExcludeNull_object_(
            v28,
            (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_List_BattleActionData_BuffData____);
    v30 = BattleActionData___c_TypeInfo;
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v30 = BattleActionData___c_TypeInfo;
    }
    _9__130_1 = (System_Func_object__object__o *)v30->static_fields->__9__130_1;
    if ( !_9__130_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = BattleActionData___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__130_1 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___TypeInfo);
      System_Func_object__object____ctor(
        _9__130_1,
        v33,
        Method_BattleActionData___c__EnumerateAllBuffData_b__130_1__,
        0LL);
      v34 = BattleActionData___c_TypeInfo->static_fields;
      v34->__9__130_1 = (struct System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___o *)_9__130_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v34->__9__130_1, (int32_t)_9__130_1, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 v31,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__130_1,
                                                                 (const MethodInfo_306AA08 *)Method_System_Linq_Enumerable_SelectMany_List_BattleActionData_BuffData___BattleActionData_BuffData___);
    v20 = System_Linq_Enumerable__Concat_object_(
            v20,
            v37,
            (const MethodInfo_304C4A8 *)Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
  }
  return (System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *)BasicHelper__ExcludeNull_object_(
                                                                                  (System_Collections_Generic_IEnumerable_T__o *)v20,
                                                                                  (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_BattleActionData_BuffData___);
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
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v18; // x0
  System_Func_object__bool__o *_9__131_0; // x21
  Il2CppObject *v20; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  System_Action_object__o *v25; // x21

  if ( (byte_4B46ECF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_BuffData__TypeInfo, data);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v6);
    sub_1BDB878(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v7);
    sub_1BDB878(&Method_BattleActionData___c__ExecUnappliedProcess_b__131_0__, v8);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass131_0__ExecUnappliedProcess_b__1__, v9);
    sub_1BDB878(&BattleActionData___c__DisplayClass131_0_TypeInfo, v10);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v11);
    byte_4B46ECF = 1;
  }
  v12 = sub_1BDBAC4(BattleActionData___c__DisplayClass131_0_TypeInfo);
  BattleActionData___c__DisplayClass131_0___ctor((BattleActionData___c__DisplayClass131_0_o *)v12, 0LL);
  if ( !v12 )
    sub_1BDBAD4(v13, v14);
  *(_QWORD *)(v12 + 16) = data;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)data, v15, v16);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v18 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v18 = BattleActionData___c_TypeInfo;
    }
    _9__131_0 = (System_Func_object__bool__o *)v18->static_fields->__9__131_0;
    if ( !_9__131_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleActionData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__131_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__131_0,
        v20,
        Method_BattleActionData___c__ExecUnappliedProcess_b__131_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__131_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__131_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__131_0, (int32_t)_9__131_0, v22, v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__131_0,
                                                           (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v25 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v25,
      (Il2CppObject *)v12,
      Method_BattleActionData___c__DisplayClass131_0__ExecUnappliedProcess_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v24,
      (System_Action_T__o *)v25,
      (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
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
  System_Func_object__bool__o *_9__165_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B46EDC & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_BattleActionData_BaseData___, method);
    sub_1BDB878(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v3);
    sub_1BDB878(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__165_0__, v4);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v5);
    byte_4B46EDC = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, 0LL) )
    return 0;
  v7 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v7 = BattleActionData___c_TypeInfo;
  }
  _9__165_0 = (System_Func_object__bool__o *)v7->static_fields->__9__165_0;
  if ( !_9__165_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActionData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__165_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__165_0,
      v9,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__165_0__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__165_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__165_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__165_0, (int32_t)_9__165_0, v11, v12);
  }
  return BasicHelper__Any_object__50450088(
           (System_Object_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__165_0,
           (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_BattleActionData_BaseData___);
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
    sub_1BDBAD4(this, 0LL);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0LL);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4B46F11 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, *(_QWORD *)&funcIdx);
    byte_4B46F11 = 1;
  }
  return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
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
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  BattleActionData_DamageData_o *v21; // x1
  System_Func_object__bool__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B46EE5 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_BattleActionData_DamageData___, *(_QWORD *)&funcIndex);
    sub_1BDB878(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v9);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass181_0__GetDamageArrayDistinctIndex_b__0__, v10);
    sub_1BDB878(&BattleActionData___c__DisplayClass181_0_TypeInfo, v11);
    byte_4B46EE5 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v13);
  if ( !DamageList )
    goto LABEL_17;
  v16 = DamageList;
  if ( (int)DamageList->max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v18 = sub_1BDBAC4(BattleActionData___c__DisplayClass181_0_TypeInfo);
      BattleActionData___c__DisplayClass181_0___ctor((BattleActionData___c__DisplayClass181_0_o *)v18, 0LL);
      if ( v17 >= v16->max_length )
        sub_1BDBADC(DamageList, v15, v19);
      if ( !v18 )
        break;
      v21 = v16->m_Items[v17];
      *(_QWORD *)(v18 + 16) = v21;
      sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)v21, v19, v20);
      v22 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_DamageData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v18,
        Method_BattleActionData___c__DisplayClass181_0__GetDamageArrayDistinctIndex_b__0__,
        0LL);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_object_(
                                                          (System_Collections_Generic_List_T__o *)v12,
                                                          (System_Func_T__bool__o *)v22,
                                                          (const MethodInfo_301CDFC *)Method_BasicHelper_Any_BattleActionData_DamageData___);
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
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v15;
          sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v15, v23, v24);
        }
      }
      if ( (__int64)++v17 >= (int)v16->max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BDBAD4(DamageList, v15);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                v12,
                                                (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
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
  __int64 v16; // x2
  char *v17; // x9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B46F10 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__,
      *(_QWORD *)&funcIdx);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v5);
    sub_1BDB878(&int___TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__, v8);
    byte_4B46F10 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                  this,
                                                                  *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v11 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v12)) == 0LL) )
  {
    sub_1BDBAD4(damagedatalist, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    damagedatalist,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v14 )
      break;
    if ( !v19.fields._current )
      sub_1BDBAD4(v14, v15);
    if ( !v11 )
      sub_1BDBAD4(v14, v15);
    if ( i >= v11->max_length )
      sub_1BDBADC(v14, v15, v16);
    v17 = (char *)v11 + 4 * (int)i;
    *((_DWORD *)v17 + 8) = HIDWORD(v19.fields._current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4B46F12 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, *(_QWORD *)&funcIdx);
    byte_4B46F12 = 1;
  }
  return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
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
  const MethodInfo *v23; // x3
  BattleActionData___c_c **v24; // x21
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  System_Action_object__o *v27; // x24
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x19
  System_Action_object__o *v30; // x20
  System_Collections_Generic_List_object__o *v31; // x19
  System_Comparison_T__o *_9__132_2; // x20
  Il2CppObject *v33; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4B46ED0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_HealData__TypeInfo, *(_QWORD *)&funcIndex);
    sub_1BDB878(&System_Action_BattleActionData_BuffData__TypeInfo, v5);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v6);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v7);
    sub_1BDB878(&System_Comparison_BattleActionData_BaseData__TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v11);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v12);
    sub_1BDB878(&Method_BattleActionData___c__GetExecOrderArray_b__132_2__, v13);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass132_0__GetExecOrderArray_b__0__, v14);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass132_0__GetExecOrderArray_b__1__, v15);
    sub_1BDB878(&BattleActionData___c__DisplayClass132_0_TypeInfo, v16);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v17);
    byte_4B46ED0 = 1;
  }
  v18 = sub_1BDBAC4(BattleActionData___c__DisplayClass132_0_TypeInfo);
  BattleActionData___c__DisplayClass132_0___ctor((BattleActionData___c__DisplayClass132_0_o *)v18, 0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = v19;
  v24 = (BattleActionData___c_c **)(v18 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)v19, v22, v23);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v25);
  v27 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass132_0__GetExecOrderArray_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    BuffList,
    (System_Action_T__o *)v27,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v28);
  v30 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass132_0__GetExecOrderArray_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    HealList,
    (System_Action_T__o *)v30,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  v20 = BattleActionData___c_TypeInfo;
  v31 = *(System_Collections_Generic_List_object__o **)(v18 + 16);
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v20 = BattleActionData___c_TypeInfo;
  }
  _9__132_2 = (System_Comparison_T__o *)v20->static_fields->__9__132_2;
  if ( !_9__132_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleActionData___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v20->static_fields->__9;
    _9__132_2 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_BattleActionData_BaseData__TypeInfo);
    System_Comparison_object____ctor(_9__132_2, v33, Method_BattleActionData___c__GetExecOrderArray_b__132_2__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__132_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__132_2;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__132_2, (int32_t)_9__132_2, v35, v36);
  }
  if ( !v31
    || (System_Collections_Generic_List_object___Sort_57505928(
          v31,
          _9__132_2,
          (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v20 = *v24) == 0LL) )
  {
LABEL_13:
    sub_1BDBAD4(v20, v21);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)v20,
                                              (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
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
  System_Comparison_T__o *_9__133_0; // x20
  Il2CppObject *v24; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4B46ED1 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_BattleActionData_BaseData__TypeInfo, *(_QWORD *)&funcIndex);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v11);
    sub_1BDB878(&Method_BattleActionData___c__GetExecOrderArrayEx_b__133_0__, v12);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v13);
    byte_4B46ED1 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v15);
  if ( !v14 )
    sub_1BDBAD4(BuffList, v17);
  System_Collections_Generic_List_object___AddRange(
    v14,
    BuffList,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v18);
  System_Collections_Generic_List_object___AddRange(
    v14,
    HealList,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v20);
  System_Collections_Generic_List_object___AddRange(
    v14,
    DamageList,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v22 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v22 = BattleActionData___c_TypeInfo;
    }
    _9__133_0 = (System_Comparison_T__o *)v22->static_fields->__9__133_0;
    if ( !_9__133_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleActionData___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__133_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_BattleActionData_BaseData__TypeInfo);
      System_Comparison_object____ctor(_9__133_0, v24, Method_BattleActionData___c__GetExecOrderArrayEx_b__133_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__133_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__133_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__133_0, (int32_t)_9__133_0, v26, v27);
    }
    System_Collections_Generic_List_object___Sort_57505928(
      v14,
      _9__133_0,
      (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              v14,
                                              (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
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
  long double inited; // q0
  _QWORD *v20; // x19
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  System_Int32_array *v25; // x22
  System_Func_int__bool__o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 targetId; // x0
  System_Func_T__TResult__o *v30; // x21
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x0

  if ( (byte_4B46EC4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_BattleServantData___, bData);
    sub_1BDB878(&Method_BasicHelper_Any_int____77076928, v9);
    sub_1BDB878(&Method_BasicHelper_ExcludeNull_BattleServantData___, v10);
    sub_1BDB878(&Method_BasicHelper_IndexValue_int____77079288, v11);
    sub_1BDB878(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__114_0__, v12);
    sub_1BDB878(&Method_BattleData_getServantData__, v13);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v14);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v15);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v16);
    sub_1BDB878(&System_Func_int__BattleServantData__TypeInfo, v17);
    sub_1BDB878(&int___TypeInfo, v18);
    byte_4B46EC4 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, 0LL) )
  {
    v20 = Method_System_Array_Empty_BattleServantData___;
    v21 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v21 )
    {
      sub_1C2BF64(Method_System_Array_Empty_BattleServantData___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C2BF08(inited);
    return **(BattleServantData_array ***)(v23 + 184);
  }
  else
  {
    if ( isMainOnly )
    {
      v25 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
      v26 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v26,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__114_0__,
        0LL);
      if ( BasicHelper__Any_int__50449276(
             targetIds,
             (System_Func_T__bool__o *)v26,
             (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
      {
        targetId = (unsigned int)this->fields.targetId;
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_3021F18 *)Method_BasicHelper_IndexValue_int____77079288);
      }
      if ( !v25 )
        sub_1BDBAD4(targetId, v27);
      if ( !v25->max_length )
        sub_1BDBADC(targetId, v27, v28);
      targetIds = v25;
      v25->m_Items[1] = targetId;
    }
    v30 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(v30, (Il2CppObject *)bData, Method_BattleData_getServantData__, 0LL);
    v31 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                           (System_Func_TSource__TResult__o *)v30,
                                                           (const MethodInfo_3065ABC *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v32 = BasicHelper__ExcludeNull_object_(
            v31,
            (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                        (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
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
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  System_Action_object__o *v32; // x23
  const MethodInfo *v33; // x2
  BattleActionData_BuffData_array *BuffList; // x0
  BattleActionData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  System_Func_object__bool__o *_9__303_1; // x23
  Il2CppObject *v38; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_T__o *v42; // x22
  System_Action_object__o *v43; // x23
  const MethodInfo *v44; // x2
  BattleActionData_HealData_array *HealList; // x0
  BattleActionData___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_Func_object__bool__o *_9__303_3; // x20
  Il2CppObject *v49; // x22
  struct BattleActionData___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_IEnumerable_T__o *v53; // x19
  System_Action_object__o *v54; // x20

  if ( (byte_4B46F16 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_DamageData__TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&System_Action_BattleActionData_HealData__TypeInfo, v5);
    sub_1BDB878(&System_Action_BattleActionData_BuffData__TypeInfo, v6);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v7);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_DamageData___, v8);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v11);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___, v12);
    sub_1BDB878(&System_Func_BattleActionData_HealData__bool__TypeInfo, v13);
    sub_1BDB878(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v14);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1BDB878(&Method_BattleActionData___c__GetFuncTargetIds_b__303_1__, v17);
    sub_1BDB878(&Method_BattleActionData___c__GetFuncTargetIds_b__303_3__, v18);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass303_0__GetFuncTargetIds_b__0__, v19);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass303_0__GetFuncTargetIds_b__2__, v20);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass303_0__GetFuncTargetIds_b__4__, v21);
    sub_1BDB878(&BattleActionData___c__DisplayClass303_0_TypeInfo, v22);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v23);
    byte_4B46F16 = 1;
  }
  v24 = sub_1BDBAC4(BattleActionData___c__DisplayClass303_0_TypeInfo);
  BattleActionData___c__DisplayClass303_0___ctor((BattleActionData___c__DisplayClass303_0_o *)v24, 0LL);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v24 )
    sub_1BDBAD4(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v30);
  v32 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_DamageData__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v24,
    Method_BattleActionData___c__DisplayClass303_0__GetFuncTargetIds_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    DamageList,
    (System_Action_T__o *)v32,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = BattleActionData__getBuffList(this, index, v33);
  v35 = BattleActionData___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v35 = BattleActionData___c_TypeInfo;
  }
  _9__303_1 = (System_Func_object__bool__o *)v35->static_fields->__9__303_1;
  if ( !_9__303_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleActionData___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__303_1 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__303_1, v38, Method_BattleActionData___c__GetFuncTargetIds_b__303_1__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__303_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__303_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__303_1, (int32_t)_9__303_1, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v36,
                                                         (System_Func_TSource__bool__o *)_9__303_1,
                                                         (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v43 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)v24,
    Method_BattleActionData___c__DisplayClass303_0__GetFuncTargetIds_b__2__,
    0LL);
  BasicHelper__ForEach_object_(
    v42,
    (System_Action_T__o *)v43,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v44);
  v46 = BattleActionData___c_TypeInfo;
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v46 = BattleActionData___c_TypeInfo;
  }
  _9__303_3 = (System_Func_object__bool__o *)v46->static_fields->__9__303_3;
  if ( !_9__303_3 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = BattleActionData___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__303_3 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_HealData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__303_3, v49, Method_BattleActionData___c__GetFuncTargetIds_b__303_3__, 0LL);
    v50 = BattleActionData___c_TypeInfo->static_fields;
    v50->__9__303_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__303_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&v50->__9__303_3, (int32_t)_9__303_3, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v47,
                                                         (System_Func_TSource__bool__o *)_9__303_3,
                                                         (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v54 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v54,
    (Il2CppObject *)v24,
    Method_BattleActionData___c__DisplayClass303_0__GetFuncTargetIds_b__4__,
    0LL);
  BasicHelper__ForEach_object_(
    v53,
    (System_Action_T__o *)v54,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v24 + 16),
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  BattleActionData___c__DisplayClass311_0_o *v14; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ListFunctionIndex; // x21
  System_Func_int__bool__o *v20; // x0
  __int64 *v21; // x8
  System_Func_TSource__bool__o *v23; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B46F1A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&effectTiming);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v8);
    sub_1BDB878(&Method_System_Nullable_int__get_HasValue__, v9);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass311_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__, v10);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass311_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__, v11);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass311_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__, v12);
    sub_1BDB878(&BattleActionData___c__DisplayClass311_0_TypeInfo, v13);
    byte_4B46F1A = 1;
  }
  v14 = (BattleActionData___c__DisplayClass311_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass311_0_TypeInfo);
  BattleActionData___c__DisplayClass311_0___ctor(v14, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0LL);
  if ( !v14 )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BDBAD4)(FuncIndexForSplitFuncSequence, v18);
  v14->fields.curiousFuncIndex = FuncIndexForSplitFuncSequence;
  if ( !FuncIndexForSplitFuncSequence.fields.hasValue )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v18);
  if ( effectTiming == 2 )
  {
    v20 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    v21 = &Method_BattleActionData___c__DisplayClass311_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v20 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    v21 = &Method_BattleActionData___c__DisplayClass311_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v20 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  v21 = &Method_BattleActionData___c__DisplayClass311_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v23 = (System_Func_TSource__bool__o *)v20;
  System_Func_int__bool____ctor(v20, (Il2CppObject *)v14, *v21, 0LL);
  v24 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v23,
          (const MethodInfo_307716C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_Dictionary_int__int__o **v20; // x22
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Action_object__o *v23; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4B46F1D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData__TypeInfo, isAtkFirst);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v9);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData__ForEach__, v11);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass317_0__GetMaxSideEffectCountByTarget_b__0__, v12);
    sub_1BDB878(&BattleActionData___c__DisplayClass317_0_TypeInfo, v13);
    byte_4B46F1D = 1;
  }
  v14 = sub_1BDBAC4(BattleActionData___c__DisplayClass317_0_TypeInfo);
  BattleActionData___c__DisplayClass317_0___ctor((BattleActionData___c__DisplayClass317_0_o *)v14, 0LL);
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = v15;
  v20 = (System_Collections_Generic_Dictionary_int__int__o **)(v14 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)v15, v18, v19);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(
      this,
      (System_Collections_Generic_Dictionary_int__int__o **)(v14 + 16),
      v21);
    sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList;
    v23 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(
      v23,
      (Il2CppObject *)v14,
      Method_BattleActionData___c__DisplayClass317_0__GetMaxSideEffectCountByTarget_b__0__,
      0LL);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_object___ForEach(
      sideEffectList,
      (System_Action_T__o *)v23,
      (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v16 = *v20;
  if ( !*v20 )
LABEL_13:
    sub_1BDBAD4(v16, v17);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v16,
         (const MethodInfo_333251C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v16 = *v20;
    if ( *v20 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v16,
                 (const MethodInfo_333267C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
    goto LABEL_13;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget_44396908(
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
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__int__o **v18; // x21
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  System_Action_object__o *v21; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4B46F1F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData__TypeInfo, *(_QWORD *)&targetType);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v8);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass319_0__GetMaxSideEffectCountByTarget_b__0__, v10);
    sub_1BDB878(&BattleActionData___c__DisplayClass319_0_TypeInfo, v11);
    byte_4B46F1F = 1;
  }
  v12 = sub_1BDBAC4(BattleActionData___c__DisplayClass319_0_TypeInfo);
  BattleActionData___c__DisplayClass319_0___ctor((BattleActionData___c__DisplayClass319_0_o *)v12, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = v13;
  v18 = (System_Collections_Generic_Dictionary_int__int__o **)(v12 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v13, v16, v17);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v19);
  v21 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v12,
    Method_BattleActionData___c__DisplayClass319_0__GetMaxSideEffectCountByTarget_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    SideEffectList,
    (System_Action_T__o *)v21,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData___);
  v14 = *(System_Collections_Generic_Dictionary_int__int__o **)(v12 + 16);
  if ( !v14 )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v14,
         (const MethodInfo_333251C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v14 = *v18;
    if ( *v18 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v14,
                 (const MethodInfo_333267C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
LABEL_9:
    sub_1BDBAD4(v14, v15);
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

  if ( (byte_4B46F1B & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_IndexValue_int___, *(_QWORD *)&effectIndex);
    byte_4B46F1B = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0LL,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__50470556(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_3021E9C *)Method_BasicHelper_IndexValue_int___);
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


int32_t __fastcall BattleActionData__GetTargetOfTreasureDevice(
        BattleActionData_o *this,
        BattleActorControl_o *battleActorControl,
        BattleActorControl_o *mainActorControl,
        const MethodInfo *method)
{
  if ( !battleActorControl || !mainActorControl )
    sub_1BDBAD4(this, battleActorControl);
  if ( battleActorControl->fields.uniqueID == mainActorControl->fields.uniqueID )
    return 1;
  if ( mainActorControl->fields.isEnemy != battleActorControl->fields.isEnemy )
    return 3;
  return 2;
}


int32_t __fastcall BattleActionData__GetTargetSideFunctionRange(
        BattleActionData_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 476LL;
  if ( isEnemy )
    v3 = 472LL;
  return *(_DWORD *)((char *)&this->klass + v3);
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
  CGThumbnailListItem_o *p_moveToSubMemberList; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B46EF1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo, v3);
    byte_4B46EF1 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = (CGThumbnailListItem_o *)&this->fields.moveToSubMemberList;
    v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    p_moveToSubMemberList->klass = (CGThumbnailListItem_c *)v5;
    sub_1BDB81C(p_moveToSubMemberList, (int32_t)v5, v6, v7);
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

  if ( (byte_4B46F23 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, *(_QWORD *)&type);
    byte_4B46F23 = 1;
  }
  v5 = sub_1BDBAC4(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, v6);
  if ( !v5 )
    sub_1BDBAD4(v7, v8);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)&this->fields.actorId;
  BattleActionData__addSideEffectActionData(this, (BattleActionData_o *)v5, type, v9);
  return (BattleActionData_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData_44398648(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_1BDBAD4(0LL, v6);
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
  __int64 v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *v21; // x20
  BattleActionData___c_c *v22; // x8
  System_Func_object__bool__o *_9__129_0; // x21
  Il2CppObject *v24; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  BattleActionData___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_object__int__o *_9__129_1; // x21
  Il2CppObject *v32; // x22
  struct BattleActionData___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_T__o *v36; // x20
  System_Action_object__o *v37; // x21

  if ( (byte_4B46ECD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_BuffData__TypeInfo, data);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_BattleActionData_BuffData__int___, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v7);
    sub_1BDB878(&System_Func_BattleActionData_BuffData__int__TypeInfo, v8);
    sub_1BDB878(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v9);
    sub_1BDB878(&Method_BattleActionData___c__PreActionProcess_b__129_0__, v10);
    sub_1BDB878(&Method_BattleActionData___c__PreActionProcess_b__129_1__, v11);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass129_0__PreActionProcess_b__2__, v12);
    sub_1BDB878(&BattleActionData___c__DisplayClass129_0_TypeInfo, v13);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v14);
    byte_4B46ECD = 1;
  }
  v15 = sub_1BDBAC4(BattleActionData___c__DisplayClass129_0_TypeInfo);
  BattleActionData___c__DisplayClass129_0___ctor((BattleActionData___c__DisplayClass129_0_o *)v15, 0LL);
  if ( !v15 )
    sub_1BDBAD4(v16, v17);
  *(_QWORD *)(v15 + 16) = data;
  sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)data, v18, v19);
  if ( !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v21 = BattleActionData__EnumerateAllBuffData(this, v20);
    v22 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v22 = BattleActionData___c_TypeInfo;
    }
    _9__129_0 = (System_Func_object__bool__o *)v22->static_fields->__9__129_0;
    if ( !_9__129_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleActionData___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__129_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__129_0, v24, Method_BattleActionData___c__PreActionProcess_b__129_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__129_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__129_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__129_0, (int32_t)_9__129_0, v26, v27);
    }
    v28 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v21,
            (System_Func_TSource__bool__o *)_9__129_0,
            (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v29 = BattleActionData___c_TypeInfo;
    v30 = v28;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v29 = BattleActionData___c_TypeInfo;
    }
    _9__129_1 = (System_Func_object__int__o *)v29->static_fields->__9__129_1;
    if ( !_9__129_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = BattleActionData___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__129_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(_9__129_1, v32, Method_BattleActionData___c__PreActionProcess_b__129_1__, 0LL);
      v33 = BattleActionData___c_TypeInfo->static_fields;
      v33->__9__129_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__129_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v33->__9__129_1, (int32_t)_9__129_1, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                           v30,
                                                           (System_Func_TSource__TKey__o *)_9__129_1,
                                                           (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_BattleActionData_BuffData__int___);
    v37 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v37,
      (Il2CppObject *)v15,
      Method_BattleActionData___c__DisplayClass129_0__PreActionProcess_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      v36,
      (System_Action_T__o *)v37,
      (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void __fastcall BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x19
  BattleActionData___c_c *v7; // x0
  System_Action_object__o *_9__189_0; // x20
  Il2CppObject *v9; // x21
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B46EE8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_BuffData__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v3);
    sub_1BDB878(&Method_BattleActionData___c__ResetAllCheckDead_b__189_0__, v4);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v5);
    byte_4B46EE8 = 1;
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
    _9__189_0 = (System_Action_object__o *)v7->static_fields->__9__189_0;
    if ( !_9__189_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleActionData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__189_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(_9__189_0, v9, Method_BattleActionData___c__ResetAllCheckDead_b__189_0__, 0LL);
      static_fields = (CGThumbnailListItem_o *)BattleActionData___c_TypeInfo->static_fields;
      static_fields[1].klass = (CGThumbnailListItem_c *)_9__189_0;
      sub_1BDB81C(static_fields + 1, (int32_t)_9__189_0, v11, v12);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__189_0,
      (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
}


BattleActionData_o *__fastcall BattleActionData__SeekLastActionData(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_o *afterActionData; // x8

  afterActionData = this;
  do
  {
    if ( !afterActionData )
      sub_1BDBAD4(this, method);
    this = afterActionData;
    afterActionData = afterActionData->fields.afterActionData;
  }
  while ( afterActionData );
  return this;
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleActionData_AfterChangeTakeOverField_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleActionData_AfterChangeField_o *ChangeField_k__BackingField; // x0

  v10 = this;
  if ( (byte_4B46F01 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_AfterChangeField_TypeInfo, fieldChange);
    this = (BattleActionData_o *)sub_1BDB878(&BattleActionData_AfterChangeTakeOverField_TypeInfo, v11);
    byte_4B46F01 = 1;
  }
  if ( !baseVals )
    goto LABEL_13;
  this = (BattleActionData_o *)DataVals__isParam(baseVals, 107, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = (BattleActionData_AfterChangeTakeOverField_o *)sub_1BDBAC4(BattleActionData_AfterChangeTakeOverField_TypeInfo);
    BattleActionData_AfterChangeTakeOverField___ctor(v14, fieldChange, fieldEnvData, 0LL);
    goto LABEL_9;
  }
  if ( !fieldChange )
LABEL_13:
    sub_1BDBAD4(this, fieldChange);
  if ( fieldChange->fields.bgId < 1 )
    goto LABEL_10;
  v14 = (BattleActionData_AfterChangeTakeOverField_o *)sub_1BDBAC4(BattleActionData_AfterChangeField_TypeInfo);
  BattleActionData_AfterChangeField___ctor((BattleActionData_AfterChangeField_o *)v14, fieldChange, 0LL);
LABEL_9:
  v10->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&v10->fields._ChangeField_k__BackingField, (int32_t)v14, v15, v16);
LABEL_10:
  ChangeField_k__BackingField = v10->fields._ChangeField_k__BackingField;
  if ( ChangeField_k__BackingField )
  {
    ChangeField_k__BackingField->fields.addBgmArg = addBgmArg;
    sub_1BDB81C((CGThumbnailListItem_o *)&ChangeField_k__BackingField->fields.addBgmArg, (int32_t)addBgmArg, v12, v13);
  }
}


void __fastcall BattleActionData__SetEntryAllAtOnceServantData(
        BattleActionData_o *this,
        BattleActionData_EntryAllAtOnceServantData_o *entryServant,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *entryAllAtOnceServantDataList; // x0
  CGThumbnailListItem_o *p_entryAllAtOnceServantDataList; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B46F31 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__Add__, entryServant);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__TypeInfo, v7);
    byte_4B46F31 = 1;
  }
  entryAllAtOnceServantDataList = (System_Collections_Generic_List_object__o *)this->fields.entryAllAtOnceServantDataList;
  if ( !entryAllAtOnceServantDataList )
  {
    p_entryAllAtOnceServantDataList = (CGThumbnailListItem_o *)&this->fields.entryAllAtOnceServantDataList;
    v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData___ctor__);
    p_entryAllAtOnceServantDataList->klass = (CGThumbnailListItem_c *)v10;
    sub_1BDB81C(p_entryAllAtOnceServantDataList, (int32_t)v10, v11, v12);
    entryAllAtOnceServantDataList = (System_Collections_Generic_List_object__o *)p_entryAllAtOnceServantDataList->klass;
    if ( !p_entryAllAtOnceServantDataList->klass )
      goto LABEL_9;
  }
  items = entryAllAtOnceServantDataList->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__Add__;
  ++entryAllAtOnceServantDataList->fields._version;
  if ( !items )
LABEL_9:
    sub_1BDBAD4(entryAllAtOnceServantDataList, entryServant);
  size = entryAllAtOnceServantDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      entryAllAtOnceServantDataList,
      (Il2CppObject *)entryServant,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    entryAllAtOnceServantDataList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)entryServant;
    sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)entryServant, (int32_t)method, v3);
  }
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

  if ( (byte_4B46EC3 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_int____77076928, targetIds);
    sub_1BDB878(&Method_BasicHelper_IndexValue_int____77079288, v5);
    sub_1BDB878(&Method_BattleActionData__SetFirstAtkMainTargetId_b__113_0__, v6);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v7);
    byte_4B46EC3 = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v8 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__113_0__,
      0LL);
    if ( BasicHelper__Any_int__50449276(
           targetIds,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_3021F18 *)Method_BasicHelper_IndexValue_int____77079288);
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
    sub_1BDBAD4(this, data);
  BattleActionData_DamageData__SetEffectFlipProc(data, vals->fields.funcEnt, 0LL);
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
  BattleActionData___c__DisplayClass134_0_o *v13; // x19
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  BattleActionData___c_c *v16; // x0
  System_Func_object__int__o *_9__134_0; // x21
  Il2CppObject *v18; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x0
  __int64 v23; // x1
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  BattleActionData___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_T__o *v27; // x19
  System_Action_object__o *_9__134_2; // x20
  Il2CppObject *v29; // x21
  struct BattleActionData___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4B46ED2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_BaseData__TypeInfo, method);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___, v5);
    sub_1BDB878(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v6);
    sub_1BDB878(&System_Func_BattleActionData_BaseData__int__TypeInfo, v7);
    sub_1BDB878(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__134_0__, v8);
    sub_1BDB878(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__134_2__, v9);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass134_0__SetFuncSideEffectTrigger_b__1__, v10);
    sub_1BDB878(&BattleActionData___c__DisplayClass134_0_TypeInfo, v11);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v12);
    byte_4B46ED2 = 1;
  }
  v13 = (BattleActionData___c__DisplayClass134_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass134_0_TypeInfo);
  BattleActionData___c__DisplayClass134_0___ctor(v13, 0LL);
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
    _9__134_0 = (System_Func_object__int__o *)v16->static_fields->__9__134_0;
    if ( !_9__134_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleActionData___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__134_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleActionData_BaseData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__134_0,
        v18,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__134_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__134_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__134_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__134_0, (int32_t)_9__134_0, v20, v21);
    }
    v22 = System_Linq_Enumerable__Max_object_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__134_0,
            (const MethodInfo_305E1C0 *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v13 )
      sub_1BDBAD4(v22, v23);
    v13->fields.lastIndex = v22;
    v24 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)v13,
      Method_BattleActionData___c__DisplayClass134_0__SetFuncSideEffectTrigger_b__1__,
      0LL);
    v25 = System_Linq_Enumerable__Where_object_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v26 = BattleActionData___c_TypeInfo;
    v27 = (System_Collections_Generic_IEnumerable_T__o *)v25;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v26 = BattleActionData___c_TypeInfo;
    }
    _9__134_2 = (System_Action_object__o *)v26->static_fields->__9__134_2;
    if ( !_9__134_2 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = BattleActionData___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__134_2 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(
        _9__134_2,
        v29,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__134_2__,
        0LL);
      v30 = BattleActionData___c_TypeInfo->static_fields;
      v30->__9__134_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__134_2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v30->__9__134_2, (int32_t)_9__134_2, v31, v32);
    }
    BasicHelper__ForEach_object_(
      v27,
      (System_Action_T__o *)_9__134_2,
      (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  BattleActionData___c__DisplayClass146_0_o *v16; // x21
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
  System_Func_object__bool__o *_9__146_1; // x21
  Il2CppObject *v28; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4B46ED5 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_BattleServantData____77076736, data);
    sub_1BDB878(&Method_BasicHelper_ExcludeNull_BattleServantData___, v5);
    sub_1BDB878(&Method_BattleData_getServantData__, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_1BDB878(&System_Func_int__BattleServantData__TypeInfo, v10);
    sub_1BDB878(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1BDB878(&Method_BattleActionData___c__SetFuncTargetAllDead_b__146_1__, v12);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass146_0__SetFuncTargetAllDead_b__0__, v13);
    sub_1BDB878(&BattleActionData___c__DisplayClass146_0_TypeInfo, v14);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v15);
    byte_4B46ED5 = 1;
  }
  v16 = (BattleActionData___c__DisplayClass146_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass146_0_TypeInfo);
  BattleActionData___c__DisplayClass146_0___ctor(v16, 0LL);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0LL), !v16) )
    sub_1BDBAD4(isEnemyID, v18);
  v16->fields.isActorEnemy = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v20 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(v20, (Il2CppObject *)data, Method_BattleData_getServantData__, 0LL);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v20,
                                                         (const MethodInfo_3065ABC *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v22 = BasicHelper__ExcludeNull_object_(
          v21,
          (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v23 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_BattleActionData___c__DisplayClass146_0__SetFuncTargetAllDead_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v24,
          (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v25, 0LL) )
  {
    v26 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v26 = BattleActionData___c_TypeInfo;
    }
    _9__146_1 = (System_Func_object__bool__o *)v26->static_fields->__9__146_1;
    if ( !_9__146_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = BattleActionData___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__146_1 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__146_1,
        v28,
        Method_BattleActionData___c__SetFuncTargetAllDead_b__146_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__146_1 = (struct System_Func_BattleServantData__bool__o *)_9__146_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__146_1, (int32_t)_9__146_1, v30, v31);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_object__50450088(
                                                           v25,
                                                           (System_Func_T__bool__o *)_9__146_1,
                                                           (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_BattleServantData____77076736);
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
  struct BattleActionData_GimmickData_o **p_gimmickData; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleActionData_GimmickData_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B46EFF & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_GimmickData_TypeInfo, indexArray);
    byte_4B46EFF = 1;
  }
  v11 = (BattleActionData_GimmickData_o *)sub_1BDBAC4(BattleActionData_GimmickData_TypeInfo);
  BattleActionData_GimmickData___ctor(v11, 0LL);
  this->fields.gimmickData = v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_1BDB81C((CGThumbnailListItem_o *)p_gimmickData, (int32_t)v11, v13, v14);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v18->fields.indexArray = indexArray;
  sub_1BDB81C((CGThumbnailListItem_o *)&v18->fields.indexArray, (int32_t)indexArray, v16, v17);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v18->fields.startVoiceIdArray = startArray,
        sub_1BDB81C((CGThumbnailListItem_o *)&v18->fields.startVoiceIdArray, (int32_t)startArray, v19, v20),
        (v18 = *p_gimmickData) == 0LL)
    || (v18->fields.resultVoiceIdArray = resultArray,
        sub_1BDB81C((CGThumbnailListItem_o *)&v18->fields.resultVoiceIdArray, (int32_t)resultArray, v21, v22),
        (v18 = *p_gimmickData) == 0LL) )
  {
LABEL_8:
    sub_1BDBAD4(v18, v15);
  }
  v18->fields.animationTypes = types;
  sub_1BDB81C((CGThumbnailListItem_o *)&v18->fields.animationTypes, (int32_t)types, v23, v24);
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
  System_Action_object__o *_9__135_0; // x20
  Il2CppObject *v11; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B46ED3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_BaseData__TypeInfo, method);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v4);
    sub_1BDB878(&Method_BattleActionData___c__SetPopupOnce_b__135_0__, v5);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v6);
    byte_4B46ED3 = 1;
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
    _9__135_0 = (System_Action_object__o *)v9->static_fields->__9__135_0;
    if ( !_9__135_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattleActionData___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__135_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(_9__135_0, v11, Method_BattleActionData___c__SetPopupOnce_b__135_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__135_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__135_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__135_0, (int32_t)_9__135_0, v13, v14);
    }
    BasicHelper__ForEach_object_(
      v8,
      (System_Action_T__o *)_9__135_0,
      (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  const MethodInfo *v3; // x3

  this->fields._ShiftGauge_k__BackingField = shiftGauge;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ShiftGauge_k__BackingField,
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_int__o *v20; // x22
  System_Collections_Generic_List_int__o **v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x22
  __int64 v25; // x1
  int32_t current; // w20
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+0h] [xbp-80h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B46F1E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, dicTarget);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass318_0__SetSideEffectCountByTarget_b__0__, v13);
    sub_1BDB878(&BattleActionData___c__DisplayClass318_0_TypeInfo, v14);
    byte_4B46F1E = 1;
  }
  memset(&v30, 0, sizeof(v30));
  value = 0;
  v15 = sub_1BDBAC4(BattleActionData___c__DisplayClass318_0_TypeInfo);
  BattleActionData___c__DisplayClass318_0___ctor((BattleActionData___c__DisplayClass318_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v15 + 24) = v20;
  v21 = (System_Collections_Generic_List_int__o **)(v15 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 24), (int32_t)v20, v22, v23);
  v24 = sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v24,
    (Il2CppObject *)v15,
    Method_BattleActionData___c__DisplayClass318_0__SetSideEffectCountByTarget_b__0__,
    0LL);
  if ( !v24
    || ((*(void (__fastcall **)(_QWORD, _QWORD))(v24 + 24))(*(_QWORD *)(v24 + 64), *(_QWORD *)(v24 + 40)),
        (v16 = *v21) == 0LL) )
  {
LABEL_14:
    sub_1BDBAD4(v16, v17);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v16,
    (const MethodInfo_36B9874 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v30 = v28;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_34661D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_1BDBAD4(0LL, v25);
    current = v30.fields._current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v30.fields._current,
      &value,
      (const MethodInfo_3333F00 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_1BDBAD4(0LL, v27);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_34661D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  BattleActionData_TreasureDvcAfterChangeBgm_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B46F02 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo, changeBgm);
    byte_4B46F02 = 1;
  }
  v5 = (BattleActionData_TreasureDvcAfterChangeBgm_o *)sub_1BDBAC4(BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
  BattleActionData_TreasureDvcAfterChangeBgm___ctor(v5, changeBgm, 0LL);
  this->fields._TdAfterChangeBgm_k__BackingField = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField, (int32_t)v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__SetTypeEnemyCutIn(
        BattleActionData_o *this,
        int32_t effectType,
        const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4B46F0B & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, *(_QWORD *)&effectType);
    byte_4B46F0B = 1;
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
  const MethodInfo *v3; // x3

  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = cond;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._WaitCond_k__BackingField, (int32_t)cond, (int32_t)method, v3);
  return this;
}


bool __fastcall BattleActionData__TryGetChangeModelData(
        BattleActionData_o *this,
        BattleActionData_ChangeModelActionData_o **changeModelActData,
        int32_t funcTargetId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleActionData___c__DisplayClass241_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  bool IsNullOrEmpty; // w0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x1
  struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *ChangeModelList_k__BackingField; // x20
  System_Func_object__bool__o *v18; // x21

  if ( (byte_4B46EFC & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_ChangeModelActionData___,
      changeModelActData);
    sub_1BDB878(&System_Func_BattleActionData_ChangeModelActionData__bool__TypeInfo, v7);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass241_0__TryGetChangeModelData_b__0__, v8);
    sub_1BDB878(&BattleActionData___c__DisplayClass241_0_TypeInfo, v9);
    byte_4B46EFC = 1;
  }
  v10 = (BattleActionData___c__DisplayClass241_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass241_0_TypeInfo);
  BattleActionData___c__DisplayClass241_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BDBAD4(v11, v12);
  v10->fields.funcTargetId = funcTargetId;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields._ChangeModelList_k__BackingField,
                    0LL);
  v16 = 0LL;
  if ( !IsNullOrEmpty )
  {
    ChangeModelList_k__BackingField = this->fields._ChangeModelList_k__BackingField;
    v18 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_ChangeModelActionData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v10,
      Method_BattleActionData___c__DisplayClass241_0__TryGetChangeModelData_b__0__,
      0LL);
    v16 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
            (System_Collections_Generic_IEnumerable_TSource__o *)ChangeModelList_k__BackingField,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_ChangeModelActionData___);
  }
  *changeModelActData = (BattleActionData_ChangeModelActionData_o *)v16;
  sub_1BDB81C((CGThumbnailListItem_o *)changeModelActData, (int32_t)v16, v14, v15);
  return *changeModelActData != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__TryGetFuncSideEffectInterval(
        BattleActionData_o *this,
        float *interval,
        bool existTriggerFunc,
        float totalTime,
        const MethodInfo *method)
{
  int32_t MaxSideEffectCountByTarget_44396908; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_44396908 = BattleActionData__GetMaxSideEffectCountByTarget_44396908(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_44396908 >= 1 )
    *interval = totalTime / (float)(MaxSideEffectCountByTarget_44396908 + existTriggerFunc);
  return MaxSideEffectCountByTarget_44396908 > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__TryGetRevivedServantHealDataArray(
        BattleActionData_o *this,
        int32_t entryIndex,
        BattleActionData_HealData_array **result,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleActionData___c__DisplayClass196_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B46EEC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___, *(_QWORD *)&entryIndex);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___, v7);
    sub_1BDB878(&System_Func_BattleActionData_HealData__bool__TypeInfo, v8);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass196_0__TryGetRevivedServantHealDataArray_b__0__, v9);
    sub_1BDB878(&BattleActionData___c__DisplayClass196_0_TypeInfo, v10);
    byte_4B46EEC = 1;
  }
  v11 = (BattleActionData___c__DisplayClass196_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass196_0_TypeInfo);
  BattleActionData___c__DisplayClass196_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  v11->fields.entryIndex = entryIndex;
  HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(this, -1, v14);
  v16 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleActionData_HealData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass196_0__TryGetRevivedServantHealDataArray_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          HealList,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
  *result = (BattleActionData_HealData_array *)v18;
  sub_1BDB81C((CGThumbnailListItem_o *)result, (int32_t)v18, v19, v20);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0LL);
}


bool __fastcall BattleActionData__TryGetSkillMessageDisplayTime(
        BattleActionData_o *this,
        float *time,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleSkillInfoData_o *skillInfo; // x0
  bool MessageDisplayTime; // w1
  unsigned __int16 *v8; // x0
  unsigned __int16 v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B46F1C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_bool__GetValueOrDefault__, time);
    sub_1BDB878(&Method_System_Nullable_bool___ctor__, v5);
    byte_4B46F1C = 1;
  }
  *time = 0.0;
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetSelfSkillEntity(skillInfo, 0LL);
    if ( skillInfo )
    {
      MessageDisplayTime = SkillEntity__TryGetMessageDisplayTime((SkillEntity_o *)skillInfo, time, 0LL);
      v8 = &v10;
      v10 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v8,
        MessageDisplayTime,
        (const MethodInfo_37F2168 *)Method_System_Nullable_bool___ctor__);
      LOBYTE(skillInfo) = v10 > 0xFFu;
    }
  }
  return (char)skillInfo;
}


bool __fastcall BattleActionData__TryGetUseInFsmFuncParamValue(
        BattleActionData_o *this,
        int32_t *value,
        UseInFsmFuncParam_CondData_o *condData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x23
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  struct System_Collections_Generic_List_UseInFsmFuncParam__o *useInFsmFuncParamList; // x20
  System_Func_object__bool__o *v17; // x21

  if ( (byte_4B46EFA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_UseInFsmFuncParam___, value);
    sub_1BDB878(&System_Func_UseInFsmFuncParam__bool__TypeInfo, v7);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass234_0__TryGetUseInFsmFuncParamValue_b__0__, v8);
    sub_1BDB878(&BattleActionData___c__DisplayClass234_0_TypeInfo, v9);
    byte_4B46EFA = 1;
  }
  v10 = sub_1BDBAC4(BattleActionData___c__DisplayClass234_0_TypeInfo);
  BattleActionData___c__DisplayClass234_0___ctor((BattleActionData___c__DisplayClass234_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = condData;
  v15 = v10 + 16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)condData, v13, v14);
  *value = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.useInFsmFuncParamList, 0LL) )
  {
    useInFsmFuncParamList = this->fields.useInFsmFuncParamList;
    v17 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_UseInFsmFuncParam__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v10,
      Method_BattleActionData___c__DisplayClass234_0__TryGetUseInFsmFuncParamValue_b__0__,
      0LL);
    v11 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
            (System_Collections_Generic_IEnumerable_TSource__o *)useInFsmFuncParamList,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_UseInFsmFuncParam___);
    if ( v11 )
    {
      if ( *(_QWORD *)v15 )
        return UseInFsmFuncParam__TryGetParamValue(
                 (UseInFsmFuncParam_o *)v11,
                 value,
                 *(System_String_o **)(*(_QWORD *)v15 + 24LL),
                 0LL);
LABEL_9:
      sub_1BDBAD4(v11, v12);
    }
  }
  return 0;
}


void __fastcall BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_transformServantlist; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B46EF3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo, v3);
    byte_4B46EF3 = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = (CGThumbnailListItem_o *)&this->fields.transformServantlist;
    v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    p_transformServantlist->klass = (CGThumbnailListItem_c *)v5;
    sub_1BDB81C(p_transformServantlist, (int32_t)v5, v6, v7);
  }
}


void __fastcall BattleActionData__UpdateBuffAfterActionFlag(
        BattleActionData_o *this,
        bool isUpdate,
        const MethodInfo *method)
{
  this->fields._IsUpdateBuffAfterAction_k__BackingField = isUpdate;
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
  const MethodInfo *v23; // x3
  System_Func_object__bool__o **v24; // x20
  System_Action_T__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  System_Func_object__bool__o *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  __int128 v31; // [xsp+0h] [xbp-90h] BYREF
  __int128 v32; // [xsp+10h] [xbp-80h]
  __int128 v33; // [xsp+20h] [xbp-70h]

  if ( (byte_4B46EDA & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, *(_QWORD *)&targetType);
    sub_1BDB878(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v8);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v9);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v10);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v11);
    sub_1BDB878(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v13);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v14);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v15);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass158_0__UpdateDirectIntervalBuffData_b__0__, v16);
    sub_1BDB878(&BattleActionData___c__DisplayClass158_0_TypeInfo, v17);
    byte_4B46EDA = 1;
  }
  v32 = 0u;
  v33 = 0u;
  v31 = 0u;
  v18 = sub_1BDBAC4(BattleActionData___c__DisplayClass158_0_TypeInfo);
  BattleActionData___c__DisplayClass158_0___ctor((BattleActionData___c__DisplayClass158_0_o *)v18, 0LL);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BuffMaster___);
  *(_QWORD *)(v18 + 16) = Master_object;
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)Master_object, v22, v23);
  IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_16:
    sub_1BDBAD4(IntervalBuffDict_k__BackingField, v20);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
    IntervalBuffDict_k__BackingField,
    (const MethodInfo_32F6AD0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  v24 = (System_Func_object__bool__o **)(v18 + 32);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
            (const MethodInfo_3480C54 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v25 = (System_Action_T__o *)*((_QWORD *)&v32 + 1);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33, 0LL) )
    {
      v27 = *v24;
      if ( !*v24 )
      {
        v27 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v18,
          Method_BattleActionData___c__DisplayClass158_0__UpdateDirectIntervalBuffData_b__0__,
          0LL);
        *v24 = v27;
        sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v27, v28, v29);
      }
      v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v26,
                                                             (System_Func_TSource__bool__o *)v27,
                                                             (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_object_(
        v30,
        v25,
        (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
    (const MethodInfo_3480D88 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
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
  System_Action_object__o *_9__166_0; // x21
  Il2CppObject *v12; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *healdatalist; // x19
  BattleActionData___c_c *v17; // x0
  System_Action_object__o *_9__166_1; // x20
  Il2CppObject *v19; // x21
  struct BattleActionData___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B46EDD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionData_HealData__TypeInfo, method);
    sub_1BDB878(&System_Action_BattleActionData_BuffData__TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v5);
    sub_1BDB878(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__166_0__, v6);
    sub_1BDB878(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__166_1__, v7);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v8);
    byte_4B46EDD = 1;
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
    _9__166_0 = (System_Action_object__o *)v10->static_fields->__9__166_0;
    if ( !_9__166_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleActionData___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__166_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__166_0,
        v12,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__166_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__166_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__166_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__166_0, (int32_t)_9__166_0, v14, v15);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__166_0,
      (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
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
    _9__166_1 = (System_Action_object__o *)v17->static_fields->__9__166_1;
    if ( !_9__166_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleActionData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__166_1 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        _9__166_1,
        v19,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__166_1__,
        0LL);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__166_1 = (struct System_Action_BattleActionData_HealData__o *)_9__166_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v20->__9__166_1, (int32_t)_9__166_1, v21, v22);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__166_1,
      (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
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
  System_Action_object__o *_9__156_0; // x20
  Il2CppObject *v10; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B46ED8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleServantData__TypeInfo, method);
    sub_1BDB878(&Method_BasicHelper_ForEach_BattleServantData___, v3);
    sub_1BDB878(&Method_BattleActionData___c__UpdateIntervalBuff_b__156_0__, v4);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v5);
    byte_4B46ED8 = 1;
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
  _9__156_0 = (System_Action_object__o *)v7->static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActionData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__156_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__156_0, v10, Method_BattleActionData___c__UpdateIntervalBuff_b__156_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_BattleServantData__o *)_9__156_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__156_0, (int32_t)_9__156_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_BattleServantData___);
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

  if ( (byte_4B46ED9 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__,
      method);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v3);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v4);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v5);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v9);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v10);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__,
      v11);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v12);
    sub_1BDB878(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v14);
    byte_4B46ED9 = 1;
  }
  *(_OWORD *)action = 0u;
  v26 = 0u;
  v24 = 0u;
  v15 = (System_Collections_Generic_HashSet_T__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v15,
    (const MethodInfo_3591DC4 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
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
      (const MethodInfo_32F6AD0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    v24 = v23[0];
    *(_OWORD *)action = v23[1];
    v26 = v23[2];
    v18 = 0LL;
    while ( 1 )
    {
      v19 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v24,
              (const MethodInfo_3480C54 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v19 )
        break;
      v21 = (Il2CppObject *)action[0];
      if ( (_QWORD)v26 )
        v18 = (System_Collections_Generic_List_object__o *)v26;
      if ( (_QWORD)v26 )
      {
        if ( !v18 )
          sub_1BDBAD4(v19, v20);
        System_Collections_Generic_List_object___ForEach(
          v18,
          action[1],
          (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      }
      if ( v21 )
      {
        if ( !v15 )
          sub_1BDBAD4(v19, v20);
        System_Collections_Generic_HashSet_object___Add(
          v15,
          v21,
          (const MethodInfo_3592FA8 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v24,
      (const MethodInfo_3480D88 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_20:
      sub_1BDBAD4(IntervalBuffDict_k__BackingField, v16);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_32F67F8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v15;
}


void __fastcall BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1BDBAD4(this, 0LL);
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


void __fastcall BattleActionData__UpdateTargetRangeOfTreasureDevice(
        BattleActionData_o *this,
        BattleData_o *battleData,
        BattleActionData_o *battleActionControl,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *functionUnits,
        const MethodInfo *method)
{
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
  BattleActionData___c_c *v18; // x0
  System_Func_object__int__o *_9__307_0; // x23
  Il2CppObject *v20; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x22
  System_Func_int__bool__o *v26; // x23
  int v27; // w24
  System_Func_int__bool__o *v28; // x23
  System_Func_int__bool__o *v29; // x23
  __int64 v30; // x1
  int v31; // w20
  System_Func_int__bool__o *v32; // x23
  BattleData_o *isEnemyID; // x0
  int32_t v34; // w8
  int32_t v35; // w9

  if ( (byte_4B46F17 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_int____77076928, battleData);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionUnitCheck__int___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v10);
    sub_1BDB878(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__TypeInfo, v11);
    sub_1BDB878(&Method_Target_IsEnemyAllTarget__, v12);
    sub_1BDB878(&Method_Target_IsPartyAllTarget__, v13);
    sub_1BDB878(&Method_Target_isEnemy__, v14);
    sub_1BDB878(&Method_Target_isPlayer__, v15);
    sub_1BDB878(&Method_BattleActionData___c__UpdateTargetRangeOfTreasureDevice_b__307_0__, v16);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v17);
    byte_4B46F17 = 1;
  }
  v18 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v18 = BattleActionData___c_TypeInfo;
  }
  _9__307_0 = (System_Func_object__int__o *)v18->static_fields->__9__307_0;
  if ( !_9__307_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = BattleActionData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__307_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__307_0,
      v20,
      Method_BattleActionData___c__UpdateTargetRangeOfTreasureDevice_b__307_0__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__307_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__o *)_9__307_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__307_0, (int32_t)_9__307_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)functionUnits,
                                                               (System_Func_TSource__TResult__o *)_9__307_0,
                                                               (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionUnitCheck__int___);
  v25 = System_Linq_Enumerable__ToArray_int_(
          v24,
          (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  v26 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v26, 0LL, Method_Target_IsEnemyAllTarget__, 0LL);
  if ( BasicHelper__Any_int__50449276(
         v25,
         (System_Func_T__bool__o *)v26,
         (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
  {
    v27 = 1;
  }
  else
  {
    v28 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v28, 0LL, Method_Target_isEnemy__, 0LL);
    if ( BasicHelper__Any_int__50449276(
           v25,
           (System_Func_T__bool__o *)v28,
           (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
    {
      v27 = 2;
    }
    else
    {
      v27 = 0;
    }
  }
  v29 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v29, 0LL, Method_Target_IsPartyAllTarget__, 0LL);
  if ( BasicHelper__Any_int__50449276(
         v25,
         (System_Func_T__bool__o *)v29,
         (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
  {
    v31 = 1;
  }
  else
  {
    v32 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v32, 0LL, Method_Target_isPlayer__, 0LL);
    if ( BasicHelper__Any_int__50449276(
           v25,
           (System_Func_T__bool__o *)v32,
           (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
    {
      v31 = 2;
    }
    else
    {
      v31 = 0;
    }
  }
  isEnemyID = battleData;
  if ( !battleActionControl
    || !battleData
    || (isEnemyID = (BattleData_o *)BattleData__isEnemyID(battleData, battleActionControl->fields.actorId, 0LL), !this) )
  {
    sub_1BDBAD4(isEnemyID, v30);
  }
  if ( ((unsigned __int8)isEnemyID & 1) != 0 )
    v34 = v27;
  else
    v34 = v31;
  if ( ((unsigned __int8)isEnemyID & 1) != 0 )
    v35 = v31;
  else
    v35 = v27;
  this->fields.PlayerTreasureDeviceRange = v34;
  this->fields.EnemyTreasureDeviceRange = v35;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData___AddHpDecreaseFuncTargets_b__141_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x0

  if ( (byte_4B46F34 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_4B46F34 = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_1BDBAD4(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


bool __fastcall BattleActionData___GetFuncSideEffectTargetServants_b__114_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


bool __fastcall BattleActionData___SetFirstAtkMainTargetId_b__113_0(
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

  if ( (byte_4B46F13 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___, addData);
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___, v5);
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_HealData___, v6);
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___, v7);
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___, v8);
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___, v9);
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___, v10);
    sub_1BDB878(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__, v12);
    byte_4B46F13 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                    this,
                                                                    (const MethodInfo *)addData);
    v15 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v14);
    if ( !damagedatalist )
      sub_1BDBAD4(v15, v16);
    System_Collections_Generic_List_object___AddRange(
      damagedatalist,
      v15,
      (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_30239A0 *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
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
        const MethodInfo_3023A48 *method)
{
  long double v4; // q0
  System_Collections_Generic_List_T__o *v8; // x0
  Il2CppClass *_0_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_T__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_1C2BF64(method);
    if ( !addDataList )
      return;
  }
  v8 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1C2BF08(v4);
    v10 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(_0_System_Collections_Generic_List_T);
    method->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
    *dataList = v10;
    sub_1BDB81C((CGThumbnailListItem_o *)dataList, (int32_t)v10, v11, v12);
    v8 = *dataList;
    if ( !*dataList )
      sub_1BDBAD4(0LL, v13);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_T__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange->methodPointer)(
    v8,
    addDataList);
}


void __fastcall BattleActionData__addBattleData_object_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_30239A0 *method)
{
  long double v4; // q0
  System_Collections_Generic_List_T__o *v8; // x0
  Il2CppClass *_0_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_1C2BF64(method);
    if ( !addDataList )
      return;
  }
  v8 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1C2BF08(v4);
    v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(_0_System_Collections_Generic_List_T);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36D5590 *)method->rgctx_data->_2_System_Collections_Generic_List_T___ctor);
    *dataList = (System_Collections_Generic_List_T__o *)v10;
    sub_1BDB81C((CGThumbnailListItem_o *)dataList, (int32_t)v10, v11, v12);
    v8 = *dataList;
    if ( !*dataList )
      sub_1BDBAD4(0LL, v13);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)addDataList,
    (const MethodInfo_36D5FD0 *)method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleActionData_SideEffectData_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w8

  if ( (byte_4B46EE3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__, sideEffectList);
    sub_1BDB878(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__, v10);
    this = (BattleActionData_o *)sub_1BDB878(&BattleActionData_SideEffectData_TypeInfo, v11);
    byte_4B46EE3 = 1;
  }
  if ( !actList )
    goto LABEL_13;
  if ( actList->fields._size < 1 )
    return;
  if ( !damage
    || (targetId = damage->fields.targetId,
        v13 = (BuffList_ACTION_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                         (System_Collections_Generic_List_T__o *)actList,
                                         (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__),
        v14 = (BattleActionData_SideEffectData_o *)sub_1BDBAC4(BattleActionData_SideEffectData_TypeInfo),
        BattleActionData_SideEffectData___ctor(v14, targetId, v13, 0LL),
        !sideEffectList)
    || (items = sideEffectList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__,
        ++sideEffectList->fields._version,
        !items) )
  {
LABEL_13:
    sub_1BDBAD4(this, sideEffectList);
  }
  size = sideEffectList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (Il2CppObject *)v14,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    sideEffectList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v14;
    sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
  }
  v21 = actList->fields._version + 1;
  actList->fields._size = 0;
  actList->fields._version = v21;
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

  if ( (byte_4B46F28 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__, pairAttackAndTarget);
    byte_4B46F28 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds
    || (items = attackSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__,
        ++attackSideEffectedSvtIds->fields._version,
        !items) )
  {
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BDBAD4)(attackSideEffectedSvtIds, pairAttackAndTarget);
  }
  size = attackSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    v9 = pairAttackAndTarget;
    System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
      attackSideEffectedSvtIds,
      v9,
      *(const MethodInfo_3627288 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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

  if ( (byte_4B46F26 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&uniqueSvtId);
    byte_4B46F26 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds
    || (items = damageSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++damageSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_1BDBAD4(damageSideEffectedSvtIds, *(_QWORD *)&uniqueSvtId);
  }
  size = damageSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      damageSideEffectedSvtIds,
      uniqueSvtId,
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  BattleActionData___c__DisplayClass340_0_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *servantLogicResultList; // x21
  System_Predicate_object__o *v14; // x22
  System_Collections_Generic_List_object__o *v15; // x19
  BattleActionData_ServantLogicResultData_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B46F2A & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
      *(_QWORD *)&uniqueSvtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__, v5);
    sub_1BDB878(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo, v6);
    sub_1BDB878(&BattleActionData_ServantLogicResultData_TypeInfo, v7);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass340_0__addReflectLogicResultServantId_b__0__, v8);
    sub_1BDB878(&BattleActionData___c__DisplayClass340_0_TypeInfo, v9);
    byte_4B46F2A = 1;
  }
  v10 = (BattleActionData___c__DisplayClass340_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass340_0_TypeInfo);
  BattleActionData___c__DisplayClass340_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  v10->fields.uniqueSvtId = uniqueSvtId;
  servantLogicResultList = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v14 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BattleActionData___c__DisplayClass340_0__addReflectLogicResultServantId_b__0__,
    0LL);
  if ( !servantLogicResultList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___FindIndex(
         servantLogicResultList,
         (System_Predicate_T__o *)v14,
         (const MethodInfo_36D661C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v15 = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v16 = (BattleActionData_ServantLogicResultData_o *)sub_1BDBAC4(BattleActionData_ServantLogicResultData_TypeInfo);
  BattleActionData_ServantLogicResultData___ctor(v16, 0LL);
  if ( !v16
    || (v16->fields.uniqueId = v10->fields.uniqueSvtId, !v15)
    || (items = v15->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
        ++v15->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BDBAD4(v11, v12);
  }
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v16,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v16;
    sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
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

  if ( (byte_4B46F29 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
      addLogicResultList);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v5);
    byte_4B46F29 = 1;
  }
  if ( addLogicResultList && addLogicResultList->fields._size >= 1 )
  {
    v6 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)addLogicResultList,
               v6,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !Item )
        sub_1BDBAD4(0LL, v8);
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
  if ( (byte_4B46F21 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1BDB878(
                                   &Method_System_Collections_Generic_List_BattleActionData__Add__,
                                   sideEffectActionData);
    byte_4B46F21 = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v6->fields.sideEffectList) == 0LL)
    || (v7 = *(_QWORD *)&this->fields.state,
        v8 = Method_System_Collections_Generic_List_BattleActionData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v7) )
  {
    sub_1BDBAD4(this, sideEffectActionData);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)sideEffectActionData,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = v7 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v10 + 32) = sideEffectActionData;
    sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)sideEffectActionData, actType, method);
  }
}


bool __fastcall BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_4B46EF6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__, method);
    byte_4B46EF6 = 1;
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
  BattleActionData___c__DisplayClass188_0_o *v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  CGThumbnailListItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Predicate_object__o *v19; // x19
  const MethodInfo_36D791C *v20; // x1

  v3 = funcIndex;
  if ( (byte_4B46EE7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__, *(_QWORD *)&funcIndex);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v7);
    sub_1BDB878(&System_Predicate_BattleActionData_BuffData__TypeInfo, v8);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass188_0__getBuffList_b__0__, v9);
    sub_1BDB878(&BattleActionData___c__DisplayClass188_0_TypeInfo, v10);
    byte_4B46EE7 = 1;
  }
  v11 = (BattleActionData___c__DisplayClass188_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass188_0_TypeInfo);
  BattleActionData___c__DisplayClass188_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.funcIndex = v3;
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (CGThumbnailListItem_o *)&this->fields.buffdatalist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (CGThumbnailListItem_c *)v16;
    sub_1BDB81C(p_buffdatalist, (int32_t)v16, v17, v18);
    v3 = v11->fields.funcIndex;
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
  }
  if ( v3 == -1 )
  {
    if ( buffdatalist )
    {
      v20 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v20);
    }
LABEL_13:
    sub_1BDBAD4(All, v13);
  }
  v19 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BattleActionData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass188_0__getBuffList_b__0__,
    0LL);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          buffdatalist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v20 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
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

  if ( (byte_4B46EFE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__, v3);
    byte_4B46EFE = 1;
  }
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return (BattleActionData_ChangeBg_o *)System_Collections_Generic_List_object___get_Item(
                                            changeBgList,
                                            0,
                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
  else
    return 0LL;
}


int32_t __fastcall BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  StageEntity_c *v3; // x0
  int32_t actionIndex; // w21
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_4B46F20 & 1) == 0 )
  {
    sub_1BDB878(&StageEntity_TypeInfo, method);
    byte_4B46F20 = 1;
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

  if ( (byte_4B46EE2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo, v8);
    byte_4B46EE2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v10);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    damagedatalist,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v13 )
      break;
    if ( !v17.fields._current )
      sub_1BDBAD4(v13, v14);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v13,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v9,
      (BattleActionData_DamageData_o *)v17.fields._current,
      (System_Collections_Generic_List_BuffList_ACTION__o *)v17.fields._current[5].klass,
      v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v9 )
LABEL_11:
    sub_1BDBAD4(damagedatalist, v12);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v9,
                                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
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
  BattleActionData___c__DisplayClass176_0_o *v9; // x21
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  const MethodInfo *v11; // x1
  bool v12; // zf
  System_Collections_Generic_List_object__o *v13; // x19
  System_Predicate_object__o *v14; // x20
  const MethodInfo_36D791C *v15; // x1

  if ( (byte_4B46EE0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__, *(_QWORD *)&funcIndex);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v5);
    sub_1BDB878(&System_Predicate_BattleActionData_DamageData__TypeInfo, v6);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass176_0__getDamageList_b__0__, v7);
    sub_1BDB878(&BattleActionData___c__DisplayClass176_0_TypeInfo, v8);
    byte_4B46EE0 = 1;
  }
  v9 = (BattleActionData___c__DisplayClass176_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass176_0_TypeInfo);
  BattleActionData___c__DisplayClass176_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  v9->fields.funcIndex = funcIndex;
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v11);
  v12 = funcIndex == -1;
  v13 = damagedatalist;
  if ( v12 )
  {
    if ( damagedatalist )
    {
      v15 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v15);
    }
LABEL_11:
    sub_1BDBAD4(damagedatalist, v11);
  }
  v14 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BattleActionData_DamageData__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BattleActionData___c__DisplayClass176_0__getDamageList_b__0__,
    0LL);
  if ( !v13 )
    goto LABEL_11;
  damagedatalist = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                  v13,
                                                                  (System_Predicate_T__o *)v14,
                                                                  (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_11;
  v15 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
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

  if ( (byte_4B46EE1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v9);
    byte_4B46EE1 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v11);
  if ( !damagedatalist )
    sub_1BDBAD4(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    damagedatalist,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1BDBAD4(v14, v15);
    if ( !v10 )
      sub_1BDBAD4(v14, v15);
    System_Collections_Generic_HashSet_int___Add(
      v10,
      HIDWORD(v17.fields._current[1].monitor),
      (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v10,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
    sub_1BDBADC(this, *(_QWORD *)&index, method);
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

  if ( (byte_4B46F30 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v9);
    byte_4B46F30 = 1;
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
        (const MethodInfo_36BC0A0 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v10 = 0;
      while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                &v13,
                (const MethodInfo_3466D94 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v10 |= LODWORD(v13.fields._current);
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
        &v13,
        (const MethodInfo_3466D90 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v10;
    }
LABEL_13:
    sub_1BDBAD4(funcTargetPlayerTypeList, *(_QWORD *)&index);
  }
  v10 = 0;
  funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_13;
  if ( funcTargetPlayerTypeList->fields._size > index )
    return System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
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
  BattleActionData___c__DisplayClass195_0_o *v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  CGThumbnailListItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Predicate_object__o *v19; // x19
  const MethodInfo_36D791C *v20; // x1

  v3 = funcIndex;
  if ( (byte_4B46EEB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__, *(_QWORD *)&funcIndex);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v7);
    sub_1BDB878(&System_Predicate_BattleActionData_HealData__TypeInfo, v8);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass195_0__getHealList_b__0__, v9);
    sub_1BDB878(&BattleActionData___c__DisplayClass195_0_TypeInfo, v10);
    byte_4B46EEB = 1;
  }
  v11 = (BattleActionData___c__DisplayClass195_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass195_0_TypeInfo);
  BattleActionData___c__DisplayClass195_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.funcIndex = v3;
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (CGThumbnailListItem_o *)&this->fields.healdatalist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (CGThumbnailListItem_c *)v16;
    sub_1BDB81C(p_healdatalist, (int32_t)v16, v17, v18);
    v3 = v11->fields.funcIndex;
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
  }
  if ( v3 == -1 )
  {
    if ( healdatalist )
    {
      v20 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v20);
    }
LABEL_13:
    sub_1BDBAD4(All, v13);
  }
  v19 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BattleActionData_HealData__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass195_0__getHealList_b__0__,
    0LL);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          healdatalist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v20 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
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

  if ( (byte_4B46F14 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v4);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4B46F14 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v7 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v7,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v7,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
          (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(v12) = pttargetIds->max_length;
        if ( (__int64)++v13 >= (int)v12 )
          goto LABEL_9;
      }
LABEL_15:
      sub_1BDBADC(DamageTargets, v9, v10);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v9, v10);
  if ( !DamageTargets )
LABEL_16:
    sub_1BDBAD4(DamageTargets, v9);
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
        (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v14) = v15->max_length;
      if ( (__int64)++v16 >= (int)v14 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v7,
           (const MethodInfo_333252C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_Converter_object__int__o *_9__309_0; // x22
  Il2CppObject *v22; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  void *v26; // x0
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v28; // x0
  System_Converter_object__int__o *_9__309_1; // x21
  Il2CppObject *v30; // x22
  struct BattleActionData___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Comparison_int__o *v34; // x20
  Il2CppObject *v35; // x21
  struct BattleActionData___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4B46F18 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_int__TypeInfo, method);
    sub_1BDB878(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v3);
    sub_1BDB878(&System_Converter_BattleActionData_HealData__int__TypeInfo, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Sort___77025048, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndex_b__309_0__, v13);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndex_b__309_1__, v14);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndex_b__309_2__, v15);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v16);
    byte_4B46F18 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v20 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v20 = BattleActionData___c_TypeInfo;
    }
    _9__309_0 = (System_Converter_object__int__o *)v20->static_fields->__9__309_0;
    if ( !_9__309_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleActionData___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__309_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__309_0,
        v22,
        Method_BattleActionData___c__getListFunctionIndex_b__309_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__309_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__309_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__309_0, (int32_t)_9__309_0, v24, v25);
    }
    v26 = System_Collections_Generic_List_object___ConvertAll_int_(
            buffdatalist,
            (System_Converter_T__TOutput__o *)_9__309_0,
            (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v17 )
      goto LABEL_29;
    System_Collections_Generic_List_int___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)v26,
      (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
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
  _9__309_1 = (System_Converter_object__int__o *)v28->static_fields->__9__309_1;
  if ( !_9__309_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleActionData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__309_1 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_BattleActionData_HealData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__309_1,
      v30,
      Method_BattleActionData___c__getListFunctionIndex_b__309_1__,
      0LL);
    v31 = BattleActionData___c_TypeInfo->static_fields;
    v31->__9__309_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__309_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v31->__9__309_1, (int32_t)_9__309_1, v32, v33);
  }
  v26 = System_Collections_Generic_List_object___ConvertAll_int_(
          healdatalist,
          (System_Converter_T__TOutput__o *)_9__309_1,
          (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
  if ( !v17 )
LABEL_29:
    sub_1BDBAD4(v26, v18);
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_21:
  v26 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v26 = BattleActionData___c_TypeInfo;
  }
  v34 = *(System_Comparison_int__o **)(*((_QWORD *)v26 + 23) + 184LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)v26 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = BattleActionData___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)v26 + 23);
    v34 = (System_Comparison_int__o *)sub_1BDBAC4(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v34, v35, Method_BattleActionData___c__getListFunctionIndex_b__309_2__, 0LL);
    v36 = BattleActionData___c_TypeInfo->static_fields;
    v36->__9__309_2 = v34;
    sub_1BDB81C((CGThumbnailListItem_o *)&v36->__9__309_2, (int32_t)v34, v37, v38);
  }
  if ( !v17 )
    goto LABEL_29;
  System_Collections_Generic_List_int___Sort_57386948(
    v17,
    (System_Comparison_T__o *)v34,
    (const MethodInfo_36BA7C4 *)Method_System_Collections_Generic_List_int__Sort___77025048);
  v39 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v39,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_Converter_object__int__o *_9__310_0; // x23
  Il2CppObject *v30; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Int32_array *result; // x0
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  BattleActionData___c_c *v37; // x0
  System_Converter_object__int__o *_9__310_1; // x23
  Il2CppObject *v39; // x24
  struct BattleActionData___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  BattleActionData___c_c *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x22
  System_Converter_object__int__o *_9__310_2; // x23
  Il2CppObject *v46; // x24
  struct BattleActionData___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  BattleActionData___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__int__o *_9__310_3; // x22
  Il2CppObject *v55; // x23
  struct BattleActionData___c_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w21
  System_Comparison_int__o *v60; // x22
  Il2CppObject *v61; // x23
  struct BattleActionData___c_StaticFields *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0

  if ( (byte_4B46F19 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_int__TypeInfo, displayFuncNum);
    sub_1BDB878(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v5);
    sub_1BDB878(&System_Converter_BattleActionData_HealData__int__TypeInfo, v6);
    sub_1BDB878(&System_Converter_BattleActionData_DamageData__int__TypeInfo, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Distinct_int___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1BDB878(&System_Func_BattleActionData_DamageData__int__TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__AddRange__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Sort___77025048, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndexEx_b__310_0__, v19);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndexEx_b__310_1__, v20);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndexEx_b__310_2__, v21);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndexEx_b__310_3__, v22);
    sub_1BDB878(&Method_BattleActionData___c__getListFunctionIndexEx_b__310_4__, v23);
    sub_1BDB878(&BattleActionData___c_TypeInfo, v24);
    byte_4B46F19 = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v28 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v28 = BattleActionData___c_TypeInfo;
    }
    _9__310_0 = (System_Converter_object__int__o *)v28->static_fields->__9__310_0;
    if ( !_9__310_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = BattleActionData___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__310_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__310_0,
        v30,
        Method_BattleActionData___c__getListFunctionIndexEx_b__310_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__310_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__310_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__310_0, (int32_t)_9__310_0, v32, v33);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__310_0,
                                     (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v25 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v25,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
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
    _9__310_1 = (System_Converter_object__int__o *)v37->static_fields->__9__310_1;
    if ( !_9__310_1 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = BattleActionData___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__310_1 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__310_1,
        v39,
        Method_BattleActionData___c__getListFunctionIndexEx_b__310_1__,
        0LL);
      v40 = BattleActionData___c_TypeInfo->static_fields;
      v40->__9__310_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__310_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v40->__9__310_1, (int32_t)_9__310_1, v41, v42);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__310_1,
                                     (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v25 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v25,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
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
  _9__310_2 = (System_Converter_object__int__o *)v43->static_fields->__9__310_2;
  if ( !_9__310_2 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = BattleActionData___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__310_2 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__310_2,
      v46,
      Method_BattleActionData___c__getListFunctionIndexEx_b__310_2__,
      0LL);
    v47 = BattleActionData___c_TypeInfo->static_fields;
    v47->__9__310_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__310_2;
    sub_1BDB81C((CGThumbnailListItem_o *)&v47->__9__310_2, (int32_t)_9__310_2, v48, v49);
  }
  if ( !v44
    || (result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                         v44,
                                         (System_Converter_T__TOutput__o *)_9__310_2,
                                         (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___),
        !v25) )
  {
LABEL_47:
    sub_1BDBAD4(result, v35);
  }
  System_Collections_Generic_List_int___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v50);
  v52 = BattleActionData___c_TypeInfo;
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v52 = BattleActionData___c_TypeInfo;
  }
  _9__310_3 = (System_Func_object__int__o *)v52->static_fields->__9__310_3;
  if ( !_9__310_3 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = BattleActionData___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__310_3 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleActionData_DamageData__int__TypeInfo);
    System_Func_object__int____ctor(_9__310_3, v55, Method_BattleActionData___c__getListFunctionIndexEx_b__310_3__, 0LL);
    v56 = BattleActionData___c_TypeInfo->static_fields;
    v56->__9__310_3 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__310_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&v56->__9__310_3, (int32_t)_9__310_3, v57, v58);
  }
  v59 = System_Linq_Enumerable__Sum_object_(
          v53,
          (System_Func_TSource__int__o *)_9__310_3,
          (const MethodInfo_306F328 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_38:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v60 = *(System_Comparison_int__o **)(*(_QWORD *)&result->m_Items[39] + 224LL);
  if ( !v60 )
  {
    if ( !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (System_Int32_array *)BattleActionData___c_TypeInfo;
    }
    v61 = **(Il2CppObject ***)&result->m_Items[39];
    v60 = (System_Comparison_int__o *)sub_1BDBAC4(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v60, v61, Method_BattleActionData___c__getListFunctionIndexEx_b__310_4__, 0LL);
    v62 = BattleActionData___c_TypeInfo->static_fields;
    v62->__9__310_4 = v60;
    sub_1BDB81C((CGThumbnailListItem_o *)&v62->__9__310_4, (int32_t)v60, v63, v64);
  }
  if ( !v25 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort_57386948(
    v25,
    (System_Comparison_T__o *)v60,
    (const MethodInfo_36BA7C4 *)Method_System_Collections_Generic_List_int__Sort___77025048);
  v65 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v25,
          (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v65,
             (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  BattleActionData___c__DisplayClass201_0_o *v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *replacememberlist; // x22
  CGThumbnailListItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Predicate_object__o *v19; // x19
  const MethodInfo_36D791C *v20; // x1

  v3 = funcIndex;
  if ( (byte_4B46EEF & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__,
      *(_QWORD *)&funcIndex);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v7);
    sub_1BDB878(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo, v8);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass201_0__getReplaceMember_b__0__, v9);
    sub_1BDB878(&BattleActionData___c__DisplayClass201_0_TypeInfo, v10);
    byte_4B46EEF = 1;
  }
  v11 = (BattleActionData___c__DisplayClass201_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass201_0_TypeInfo);
  BattleActionData___c__DisplayClass201_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.funcIndex = v3;
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (CGThumbnailListItem_o *)&this->fields.replacememberlist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (CGThumbnailListItem_c *)v16;
    sub_1BDB81C(p_replacememberlist, (int32_t)v16, v17, v18);
    v3 = v11->fields.funcIndex;
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
  }
  if ( v3 == -1 )
  {
    if ( replacememberlist )
    {
      v20 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       v20);
    }
LABEL_13:
    sub_1BDBAD4(All, v13);
  }
  v19 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_BattleActionData___c__DisplayClass201_0__getReplaceMember_b__0__,
    0LL);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          replacememberlist,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  v20 = (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
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

  if ( (byte_4B46EF8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__, v3);
    byte_4B46EF8 = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return (BattleActionData_ShiftServant_o *)System_Collections_Generic_List_object___get_Item(
                                                shiftServantList,
                                                0,
                                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
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
  BattleActionData___c__DisplayClass326_0_o *v9; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4B46F22 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData__FindAll__, *(_QWORD *)&actType);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData__ToArray__, v5);
    sub_1BDB878(&System_Predicate_BattleActionData__TypeInfo, v6);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass326_0__getSideEffectList_b__0__, v7);
    sub_1BDB878(&BattleActionData___c__DisplayClass326_0_TypeInfo, v8);
    byte_4B46F22 = 1;
  }
  v9 = (BattleActionData___c__DisplayClass326_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass326_0_TypeInfo);
  BattleActionData___c__DisplayClass326_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.actType = actType,
        sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList,
        v13 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleActionData___c__DisplayClass326_0__getSideEffectList_b__0__,
          0LL),
        !sideEffectList)
    || (All = System_Collections_Generic_List_object___FindAll(
                sideEffectList,
                (System_Predicate_T__o *)v13,
                (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0LL )
  {
    sub_1BDBAD4(All, v11);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_object___ToArray(
                                     (System_Collections_Generic_List_object__o *)All,
                                     (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
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
  BattleActionData___c__DisplayClass214_0_o *v10; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *summonServantList; // x20
  System_Predicate_object__o *v14; // x19

  if ( (byte_4B46EF5 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__,
      *(_QWORD *)&funcIndex);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__, v5);
    sub_1BDB878(&System_Predicate_BattleActionData_SummonServant__TypeInfo, v6);
    sub_1BDB878(&BattleActionData_SummonServant___TypeInfo, v7);
    sub_1BDB878(&Method_BattleActionData___c__DisplayClass214_0__getSummonServant_b__0__, v8);
    sub_1BDB878(&BattleActionData___c__DisplayClass214_0_TypeInfo, v9);
    byte_4B46EF5 = 1;
  }
  v10 = (BattleActionData___c__DisplayClass214_0_o *)sub_1BDBAC4(BattleActionData___c__DisplayClass214_0_TypeInfo);
  BattleActionData___c__DisplayClass214_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  v10->fields.funcIndex = funcIndex;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_1BDB920(BattleActionData_SummonServant___TypeInfo, 0LL);
  if ( funcIndex != -1 )
  {
    v14 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BattleActionData_SummonServant__TypeInfo);
    System_Predicate_object____ctor(
      v14,
      (Il2CppObject *)v10,
      Method_BattleActionData___c__DisplayClass214_0__getSummonServant_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            summonServantList,
            (System_Predicate_T__o *)v14,
            (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_1BDBAD4(All, v12);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
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

  if ( (byte_4B46F15 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v4);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4B46F15 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
        (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v13) = *((_DWORD *)v14 + 6);
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_9;
    }
LABEL_19:
    sub_1BDBADC(DamageTargets, v11, v12);
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
          (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1BDBAD4(DamageTargets, v11);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v7,
           (const MethodInfo_333252C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v11; // x2
  Il2CppClass *klass; // x11
  unsigned __int64 namespaze; // x9
  unsigned __int64 v14; // x8
  Il2CppType *p_byval_arg; // x11
  int v16; // w12
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B46EE4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v5);
    byte_4B46EE4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_1BDBAD4(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    damagedatalist,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v8 = 0;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v18.fields._current )
      sub_1BDBAD4(v9, v10);
    klass = v18.fields._current[6].klass;
    if ( klass && (int)klass->_1.namespaze >= 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      v14 = 0LL;
      p_byval_arg = &klass->_1.byval_arg;
      do
      {
        if ( v14 >= namespaze )
          sub_1BDBADC(v9, v10, v11);
        v16 = *((_DWORD *)&p_byval_arg->data + v14++);
        v8 += v16;
      }
      while ( (__int64)v14 < (int)namespaze );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v8;
}


BattleActionData_AfterChangeField_o *__fastcall BattleActionData__get_ChangeField(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeField_k__BackingField;
}


System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *__fastcall BattleActionData__get_ChangeModelList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeModelList_k__BackingField;
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


bool __fastcall BattleActionData__get_IsUpdateBuffAfterAction(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsUpdateBuffAfterAction_k__BackingField;
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
  CGThumbnailListItem_o *p_damagedatalist; // x19
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B46EDE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v3);
    byte_4B46EDE = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = (CGThumbnailListItem_o *)&this->fields._damagedatalist;
    v6 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    p_damagedatalist->klass = (CGThumbnailListItem_c *)v6;
    sub_1BDB81C(p_damagedatalist, (int32_t)v6, v7, v8);
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
  const MethodInfo *v9; // x3

  if ( (byte_4B46F2E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___, *(_QWORD *)&length);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___, v5);
    byte_4B46F2E = 1;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Int32Enum_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_30601D8 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v7 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                            v6,
                                                                            (const MethodInfo_3074E4C *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v7, v8, v9);
}


bool __fastcall BattleActionData__isActors(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 0;
}


bool __fastcall BattleActionData__isArtsOrderAttack(BattleActionData_o *this, const MethodInfo *method)
{
  bool flash; // w20
  int32_t type; // w19

  if ( (byte_4B46ECB & 1) == 0 )
  {
    sub_1BDB878(&BattleCommand_TypeInfo, method);
    byte_4B46ECB = 1;
  }
  flash = this->fields.flash;
  type = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(type, 0LL) && flash;
}


bool __fastcall BattleActionData__isBoostSkill(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4B46EC8 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46EC8 = 1;
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
  int32_t type; // w20
  int32_t v4; // w20
  int32_t v5; // w20
  int32_t v7; // w19

  if ( (byte_4B46ECA & 1) == 0 )
  {
    sub_1BDB878(&BattleCommand_TypeInfo, method);
    byte_4B46ECA = 1;
  }
  type = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isARTS(type, 0LL) )
    return 1;
  v4 = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isQUICK(v4, 0LL) )
    return 1;
  v5 = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isBUSTER(v5, 0LL) )
    return 1;
  v7 = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isADDATTACK(v7, 0LL);
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

  if ( (byte_4B46EC5 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46EC5 = 1;
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
  bool flash; // w21
  int32_t type; // w20

  if ( (byte_4B46ECC & 1) == 0 )
  {
    sub_1BDB878(&BattleCommand_TypeInfo, method);
    byte_4B46ECC = 1;
  }
  flash = this->fields.flash;
  type = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(type, 0LL) && flash && this->fields.three;
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

  if ( (byte_4B46F27 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__, pairAttackAndTarget);
    byte_4B46F27 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BDBAD4)(0LL, pairAttackAndTarget);
  v7 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v7,
           (const MethodInfo_3627600 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_4B46F25 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&uniqueSvtId);
    byte_4B46F25 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_1BDBAD4(0LL, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4B46EC6 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46EC6 = 1;
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

  if ( (byte_4B46EC7 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46EC7 = 1;
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

  if ( (byte_4B46F0D & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F0D = 1;
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

  if ( (byte_4B46F0E & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F0E = 1;
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

  if ( (byte_4B46F0C & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F0C = 1;
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

  if ( (byte_4B46F08 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F08 = 1;
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

  if ( (byte_4B46F09 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F09 = 1;
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

  if ( (byte_4B46F0A & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F0A = 1;
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

  if ( (byte_4B46F04 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F04 = 1;
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

  if ( (byte_4B46F2C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v6);
    byte_4B46F2C = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_19:
    sub_1BDBAD4(servantLogicResultList, v7);
  if ( *((int *)servantLogicResultList + 6) >= 1 )
  {
    v9 = 0;
    do
    {
      servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                 v9,
                                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
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
                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
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

  if ( (byte_4B46F2B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v5);
    byte_4B46F2B = 1;
  }
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_13:
    sub_1BDBAD4(servantLogicResultList, data);
  v7 = 0;
  while ( v7 < *((_DWORD *)servantLogicResultList + 6) )
  {
    servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)servantLogicResultList,
                               v7,
                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
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
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
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
  if ( (byte_4B46F2D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, method);
    this = (BattleActionData_o *)sub_1BDB878(
                                   &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
                                   v3);
    byte_4B46F2D = 1;
  }
  servantLogicResultList = v2->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_1BDBAD4(this, method);
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
      sub_1BDBAD4(this, 0LL);
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
        bool isLinkBgIndividuality,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleActionData_ChangeBg_o *v14; // x19
  System_Collections_Generic_List_object__o *changeBgList; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CGThumbnailListItem_o *p_changeBgList; // x20
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4B46EFD & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_ChangeBg_TypeInfo, *(_QWORD *)&inbgNo);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo, v13);
    byte_4B46EFD = 1;
  }
  v14 = (BattleActionData_ChangeBg_o *)sub_1BDBAC4(BattleActionData_ChangeBg_TypeInfo);
  BattleActionData_ChangeBg___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_10;
  v14->fields.bgNo = inbgNo;
  v14->fields.bgTp = inTp;
  v14->fields.priority = priority;
  v14->fields.IsLinkBgIndividuality = isLinkBgIndividuality;
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = (CGThumbnailListItem_o *)&this->fields.changeBgList;
    v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    p_changeBgList->klass = (CGThumbnailListItem_c *)v20;
    sub_1BDB81C(p_changeBgList, (int32_t)v20, v21, v22);
    changeBgList = (System_Collections_Generic_List_object__o *)p_changeBgList->klass;
    if ( !p_changeBgList->klass )
      goto LABEL_10;
  }
  items = changeBgList->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__;
  ++changeBgList->fields._version;
  if ( !items )
LABEL_10:
    sub_1BDBAD4(changeBgList, v16);
  size = changeBgList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      changeBgList,
      (Il2CppObject *)v14,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    changeBgList->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v14;
    sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v14, v17, v18);
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
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 endcameraname_low; // x10
  __int64 v16; // x8

  v10 = this;
  if ( (byte_4B46EDF & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1BDB878(
                                   &Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
                                   data);
    byte_4B46EDF = 1;
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
    sub_1BDBAD4(this, data);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = v13 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v16 + 32) = data;
    sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)data, v11, v12);
  }
}


void __fastcall BattleActionData__setEffect(
        BattleActionData_o *this,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.effectlist = effectList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.effectlist, (int32_t)effectList, (int32_t)method, v3);
}


void __fastcall BattleActionData__setEndCamera(
        BattleActionData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.endcameraname = name;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endcameraname, (int32_t)name, (int32_t)method, v3);
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
  if ( (byte_4B46F2F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v7);
    this = (BattleActionData_o *)sub_1BDB878(
                                   &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__,
                                   v8);
    byte_4B46F2F = 1;
  }
  if ( isTargetEnemy )
    v9 = 2;
  else
    v9 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_1BDBAD4(this, *(_QWORD *)&index);
    if ( funcTargetPlayerTypeList->fields._size > index )
    {
      v11 = System_Collections_Generic_List_Int32Enum___get_Item(
              funcTargetPlayerTypeList,
              index,
              (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__) | v9;
      System_Collections_Generic_List_Int32Enum___set_Item(
        funcTargetPlayerTypeList,
        index,
        v11,
        (const MethodInfo_36BB330 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
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
        BattleLogicFunction_HealFuncApplyArgs_o *healFuncApplyArgs,
        const MethodInfo *method)
{
  BattleActionData_HealData_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  bool isShowForcedEffect; // w8
  BattleActionData_HealData_o *v22; // x9
  BattleActionData_HealData_o *v23; // x8
  bool IsMultiTargetRevival_k__BackingField; // w8

  if ( (byte_4B46EE9 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_HealData_TypeInfo, *(_QWORD *)&targetId);
    byte_4B46EE9 = 1;
  }
  v17 = (BattleActionData_HealData_o *)sub_1BDBAC4(BattleActionData_HealData_TypeInfo);
  BattleActionData_HealData___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  v17->fields.targetId = targetId;
  v17->fields.healPoint = healPoint;
  v17->fields.functionIndex = funcIndex;
  v17->fields.buffId = bufId;
  v17->fields.isCommandAfter = isCommandAfter;
  if ( vals )
    isShowForcedEffect = vals->fields.isShowForcedEffect;
  else
    isShowForcedEffect = 0;
  v17->fields.isShowForcedHeal = isShowForcedEffect;
  if ( healFuncApplyArgs )
    v22 = 0LL;
  else
    v22 = v17;
  if ( healFuncApplyArgs )
    v23 = v17;
  else
    v23 = 0LL;
  if ( !healFuncApplyArgs )
  {
    if ( v22 )
    {
      IsMultiTargetRevival_k__BackingField = 0;
      *(_QWORD *)&v22->fields._RevivalTargetId_k__BackingField = 0xFFFFFFFF00000000LL;
      v22->fields._ExpelledUniqueId_k__BackingField = -1;
      v22->fields._DeadKeepStanding_k__BackingField = 0;
      goto LABEL_17;
    }
LABEL_18:
    sub_1BDBAD4(v18, v19);
  }
  *(_QWORD *)&v23->fields._RevivalTargetId_k__BackingField = *(_QWORD *)&healFuncApplyArgs->fields._RevivalTargetId_k__BackingField;
  v23->fields._ExpelledUniqueId_k__BackingField = healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField;
  v23->fields._DeadKeepStanding_k__BackingField = healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField;
  IsMultiTargetRevival_k__BackingField = healFuncApplyArgs->fields._IsMultiTargetRevival_k__BackingField;
LABEL_17:
  v17->fields._IsMultiTargetRevival_k__BackingField = IsMultiTargetRevival_k__BackingField;
  BattleActionData__setHealData_44380852(this, v17, vals, v20);
  return v17;
}


void __fastcall BattleActionData__setHealData_44380852(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  struct System_String_o *StrParam; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( vals )
  {
    if ( !data )
      sub_1BDBAD4(this, 0LL);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 118, 0LL, 0LL);
    data->fields.popValueText = StrParam;
    sub_1BDB81C((CGThumbnailListItem_o *)&data->fields.popValueText, (int32_t)StrParam, v7, v8);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4B46EC9 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, *(_QWORD *)&pttargetId);
    byte_4B46EC9 = 1;
  }
  v5 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1BDBAD4(0LL, v6);
  if ( !v5->max_length )
    sub_1BDBADC(v5, v5, v7);
  v5->m_Items[1] = pttargetId;
  this->fields.pttargetIds = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.pttargetIds, (int32_t)v5, v7, v8);
}


void __fastcall BattleActionData__setPTTargetId_44368456(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.pttargetIds = pttargetIds;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.pttargetIds, (int32_t)pttargetIds, (int32_t)method, v3);
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

  if ( (byte_4B46EED & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_ReplaceMember_TypeInfo, *(_QWORD *)&index);
    byte_4B46EED = 1;
  }
  v11 = (BattleActionData_ReplaceMember_o *)sub_1BDBAC4(BattleActionData_ReplaceMember_TypeInfo);
  BattleActionData_ReplaceMember___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  v11->fields.outUniqeId = outUniqueId;
  v11->fields.inUniqeId = inUniqueId;
  v11->fields.index = index;
  v11->fields.functionIndex = funcIndex;
  BattleActionData__setReplaceMember_44381680(this, v11, v14);
}


void __fastcall BattleActionData__setReplaceMember_44381680(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *replacememberlist; // x0
  CGThumbnailListItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B46EEE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v7);
    byte_4B46EEE = 1;
  }
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (CGThumbnailListItem_o *)&this->fields.replacememberlist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (CGThumbnailListItem_c *)v10;
    sub_1BDB81C(p_replacememberlist, (int32_t)v10, v11, v12);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
    if ( !p_replacememberlist->klass )
      goto LABEL_9;
  }
  items = replacememberlist->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__;
  ++replacememberlist->fields._version;
  if ( !items )
LABEL_9:
    sub_1BDBAD4(replacememberlist, data);
  size = replacememberlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replacememberlist,
      (Il2CppObject *)data,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    replacememberlist->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *shiftServantList; // x0
  CGThumbnailListItem_o *p_shiftServantList; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4B46EF7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo, v7);
    byte_4B46EF7 = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = (CGThumbnailListItem_o *)&this->fields.shiftServantList;
    v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    p_shiftServantList->klass = (CGThumbnailListItem_c *)v10;
    sub_1BDB81C(p_shiftServantList, (int32_t)v10, v11, v12);
    shiftServantList = (System_Collections_Generic_List_object__o *)p_shiftServantList->klass;
    if ( !p_shiftServantList->klass )
      goto LABEL_9;
  }
  items = shiftServantList->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__;
  ++shiftServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1BDBAD4(shiftServantList, data);
  size = shiftServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      shiftServantList,
      (Il2CppObject *)data,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    shiftServantList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
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
  BattleActionData_SummonServant_o *v16; // x19
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *summonServantList; // x0
  CGThumbnailListItem_o *p_summonServantList; // x20
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4B46EF4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__, *(_QWORD *)&uniqueId);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo, v14);
    sub_1BDB878(&BattleActionData_SummonServant_TypeInfo, v15);
    byte_4B46EF4 = 1;
  }
  v16 = (BattleActionData_SummonServant_o *)sub_1BDBAC4(BattleActionData_SummonServant_TypeInfo);
  BattleActionData_SummonServant___ctor(v16, uniqueId, unloadUniqueId, funcIndex, isEffect, callSvtEffectId, 0LL);
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = (CGThumbnailListItem_o *)&this->fields.summonServantList;
    v22 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    p_summonServantList->klass = (CGThumbnailListItem_c *)v22;
    sub_1BDB81C(p_summonServantList, (int32_t)v22, v23, v24);
    summonServantList = (System_Collections_Generic_List_object__o *)p_summonServantList->klass;
    if ( !p_summonServantList->klass )
      goto LABEL_9;
  }
  items = summonServantList->fields._items;
  v26 = Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__;
  ++summonServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1BDBAD4(summonServantList, v17);
  size = summonServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      summonServantList,
      (Il2CppObject *)v16,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    summonServantList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v16;
    sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v16, v18, v19);
  }
}


void __fastcall BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4B46F05 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F05 = 1;
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

  if ( (byte_4B46F06 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F06 = 1;
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

  if ( (byte_4B46F07 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F07 = 1;
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

  if ( (byte_4B46F03 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F03 = 1;
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
  const MethodInfo *v3; // x3

  this->fields._ChangeField_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ChangeField_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleActionData__set_ChangeModelList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ChangeModelList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ChangeModelList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_DispMsgList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DispMsgList_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._DispMsgList_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._HpDecreaseFuncTargetHash_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_IntervalBuffDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._IntervalBuffDict_k__BackingField,
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


void __fastcall BattleActionData__set_IsUpdateBuffAfterAction(
        BattleActionData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUpdateBuffAfterAction_k__BackingField = value;
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
  const MethodInfo *v3; // x3

  this->fields._ShiftGauge_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ShiftGauge_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleActionData__set_TdAfterChangeBgm(
        BattleActionData_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TdAfterChangeBgm_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData__set_WaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._WaitCond_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._WaitCond_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleActionData__set_damagedatalist(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DamageData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._damagedatalist = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._damagedatalist, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_4B46F0F & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&StringLiteral_18886/*"effect/BitEffect/bit_buster{0:00}"*/, v6);
    sub_1BDB878(&StringLiteral_18885/*"effect/BitEffect/bit_arts{0:00}"*/, v7);
    sub_1BDB878(&StringLiteral_18893/*"effect/BitEffect/bit_flash02"*/, v8);
    sub_1BDB878(&StringLiteral_18895/*"effect/BitEffect/bit_quick{0:00}"*/, v9);
    byte_4B46F0F = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v15 = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v2, v3, v4);
      v12 = &StringLiteral_18885/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v12, v11, 0LL);
    case 3:
      v14 = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v2, v3, v4);
      v12 = &StringLiteral_18895/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v12, v11, 0LL);
    case 2:
      v16 = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v2, v3, v4);
      v12 = &StringLiteral_18886/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v12, v11, 0LL);
    case 4:
      return (System_String_o *)StringLiteral_18893/*"effect/BitEffect/bit_flash02"*/;
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
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v5, v6);
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
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v8 = this;
  if ( (byte_4B46F63 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1BDB878(&Generator_BGFromFieldChangeBGBuff_TypeInfo, perf);
    byte_4B46F63 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v12 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1BDBAC4(Generator_BGFromFieldChangeBGBuff_TypeInfo),
        Generator_BGFromFieldChangeBGBuff___ctor(v12, fieldChange, 0LL),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_AddBackground.method)(
                                                        v11,
                                                        v12,
                                                        2LL,
                                                        v11->klass->vtable._6_AddBGM.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(this, perf);
  }
  v13 = (int)this;
  v14 = System_Int32__ToString((int)this + 28, 0LL);
  *bgName = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)bgName, (int32_t)v14, v15, v16);
  v17 = System_Int32__ToString(v13 + 32, 0LL);
  *bgType = v17;
  sub_1BDB81C((CGThumbnailListItem_o *)bgType, (int32_t)v17, v18, v19);
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
  if ( (byte_4B46F64 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1BDB878(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, perf);
    byte_4B46F64 = 1;
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
    v13 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1BDBAC4(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
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
    sub_1BDBAD4(this, perf);
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
  const MethodInfo *v3; // x3

  this->fields.addBgmArg = arg;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.addBgmArg, (int32_t)arg, (int32_t)method, v3);
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
    sub_1BDBAD4(this, method);
  return fieldChange->fields.isAllowSubBgmPlaying;
}


void __fastcall BattleActionData_AfterChangeTakeOverField___ctor(
        BattleActionData_AfterChangeTakeOverField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v7, v8);
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
    sub_1BDBAD4(v9, v10);
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
    sub_1BDBAD4(this, id);
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
  const MethodInfo *v11; // x3
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  BgmMaster_o *v13; // x22
  struct BattleBuffData_FieldChangeData_o *v14; // x23
  struct BattleBuffData_FieldChangeData_o *v15; // x19

  if ( (byte_4B46F65 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_BgmMaster___, bgmName);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    byte_4B46F65 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BgmMaster___);
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange
    || (fieldChange->fields.bgmName = bgmName,
        v13 = (BgmMaster_o *)Master_object,
        sub_1BDB81C((CGThumbnailListItem_o *)&fieldChange->fields.bgmName, (int32_t)bgmName, v10, v11),
        !v13)
    || (v14 = this->fields.fieldChange,
        Master_object = (Il2CppObject *)BgmMaster__GetBgmIdFromFileName(v13, bgmName, bgmId, 0LL),
        !v14)
    || (v14->fields.bgmId = (int)Master_object, (v15 = this->fields.fieldChange) == 0LL) )
  {
    sub_1BDBAD4(Master_object, v9);
  }
  if ( !v15->fields._HasBgmPriorityInVals_k__BackingField )
    v15->fields.bgmPriority = BgmMaster__GetBgmPriority(v13, v15->fields.bgmId, 0, 0LL);
}


void __fastcall BattleActionData_AttackDamageData___ctor(
        BattleActionData_AttackDamageData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct System_Int32_array **v10; // x8
  struct System_Int32_array *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4B46F40 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, method);
    byte_4B46F40 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1C2BF64(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08(inited);
  v10 = *(struct System_Int32_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.attackRatio = *v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.attackRatio, (int32_t)v11, v2, v3);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, v12);
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *attackRatio; // x8
  unsigned __int64 v20; // x26
  int v21; // w24
  __int64 v22; // x27
  int32_t v23; // w28
  _BOOL4 v24; // w10
  int32_t v25; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10

  v5 = minimumDamageFlg;
  if ( (byte_4B46F3F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, damageList);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4B46F3F = 1;
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
    v13 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
    *damageList = v13;
    sub_1BDB81C((CGThumbnailListItem_o *)damageList, (int32_t)v13, v14, v15);
    v16 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                      (System_Collections_Generic_IEnumerable_int__o *)this->fields.attackRatio,
                                                      0LL);
    attackRatio = this->fields.attackRatio;
    if ( !attackRatio )
      goto LABEL_20;
    v20 = 0LL;
    v21 = 0;
    v22 = (int)v16;
    v23 = damage;
    while ( (__int64)v20 < (int)(*(_QWORD *)&attackRatio->max_length - 1) )
    {
      if ( v20 >= (unsigned int)*(_QWORD *)&attackRatio->max_length )
        sub_1BDBADC(v16, v17, v18);
      v16 = *damageList;
      v24 = (int)(attackRatio->m_Items[v20 + 1] * (__int64)v23 / v22) < 1;
      if ( v24 && v5 )
        v25 = 1;
      else
        v25 = attackRatio->m_Items[v20 + 1] * (__int64)v23 / v22;
      if ( v24 && v5 )
        v23 = (v23 - 1) & ~((v23 - 1) >> 31);
      if ( v16 )
      {
        items = v16->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( items )
        {
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v25,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            attackRatio = this->fields.attackRatio;
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size + 1] = v25;
          }
          v21 += v25;
          damage = (damage - v25) & ~((damage - v25) >> 31);
          ++v20;
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
      || (v29 = v16->fields._items, v30 = Method_System_Collections_Generic_List_int__Add__,
                                    ++v16->fields._version,
                                    !v29) )
    {
LABEL_20:
      sub_1BDBAD4(v16, v17);
    }
    v31 = v16->fields._size;
    if ( (unsigned int)v31 >= v29->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        damage,
        *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = v31 + 1;
      v29->m_Items[v31 + 1] = damage;
    }
    damage += v21;
  }
  return damage;
}


void __fastcall BattleActionData_AttackDamageData__SetAttackRatio(
        BattleActionData_AttackDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  struct System_Int32_array *klass; // x20
  BattleActionData_AttackDamageData_o *v6; // x19
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0

  klass = ratio;
  v6 = this;
  if ( (byte_4B46F3E & 1) != 0 )
  {
    if ( ratio )
      goto LABEL_3;
  }
  else
  {
    this = (BattleActionData_AttackDamageData_o *)sub_1BDB878(&Method_System_Array_Empty_int___, ratio);
    byte_4B46F3E = 1;
    if ( klass )
    {
LABEL_3:
      if ( v6 )
        goto LABEL_4;
LABEL_15:
      sub_1BDBAD4(this, ratio);
    }
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C2BF64(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  this = *(BattleActionData_AttackDamageData_o **)(v7[7] + 16LL);
  if ( (BYTE5(this[1].fields.defnplist) & 1) == 0 )
    this = (BattleActionData_AttackDamageData_o *)sub_1C2BF08(inited);
  klass = (struct System_Int32_array *)this->fields.attackRatio->obj.klass;
  if ( !v6 )
    goto LABEL_15;
LABEL_4:
  v6->fields.attackRatio = klass;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields.attackRatio, (int32_t)klass, (int32_t)method, v3);
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

  if ( (byte_4B46F37 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, method);
    byte_4B46F37 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t curGaugeIndex,
        SimpleHpData_o *prevHp,
        SimpleHpData_o *curHp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_UpHpDataBeforeShift_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B46F51 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex);
    sub_1BDB878(&BattleAction_UpHpDataBeforeShift_TypeInfo, v9);
    byte_4B46F51 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v11 = (BattleAction_UpHpDataBeforeShift_o *)sub_1BDBAC4(BattleAction_UpHpDataBeforeShift_TypeInfo);
  BattleAction_UpHpDataBeforeShift___ctor(v11, curGaugeIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v17 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BDBAD4(v12, v13);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v11,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v11;
    sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
  }
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
  const MethodInfo *v7; // x3
  int32_t v8; // w1

  if ( (byte_4B46F4D & 1) == 0 )
  {
    sub_1BDB878(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_1BDB878(&StringLiteral_20046/*"hp_iconeffect_before"*/, v2);
    byte_4B46F4D = 1;
  }
  v3 = sub_1BDBAC4(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v3, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  v8 = StringLiteral_20046/*"hp_iconeffect_before"*/;
  *(_QWORD *)(v3 + 24) = StringLiteral_20046/*"hp_iconeffect_before"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 24), v8, v6, v7);
  return (BattleServantHpShiftComponent_EffectData_o *)v3;
}


BattleAction_ShiftHpData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_4B46F50 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_IndexValue_ShiftHpData___, method);
    byte_4B46F50 = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_object__50470784(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0LL,
                                         (const MethodInfo_3021F80 *)Method_BasicHelper_IndexValue_ShiftHpData___);
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
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4B46F4E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ShiftHpData___ctor__, svtData);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_1BDB878(
                                                      &System_Collections_Generic_List_ShiftHpData__TypeInfo,
                                                      v5);
    byte_4B46F4E = 1;
  }
  if ( !svtData )
    sub_1BDBAD4(this, svtData);
  v4->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v6 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ShiftHpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v4->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._ShiftHpDataList_k__BackingField, (int32_t)v6, v7, v8);
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
  const MethodInfo *v12; // x3

  if ( (byte_4B46F4F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_ShiftHpData__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__, v3);
    sub_1BDB878(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__, v4);
    sub_1BDB878(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v5);
    byte_4B46F4F = 1;
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
    _9__34_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ShiftHpData__TypeInfo);
    System_Action_object____ctor(
      _9__34_0,
      v9,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      0LL);
    static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v11, v12);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_1BDBAD4(v6, method);
  System_Collections_Generic_List_object___ForEach(
    ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
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
  const MethodInfo *v3; // x3

  this->fields._ShiftHpDataList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ShiftHpDataList_k__BackingField,
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
  const MethodInfo *v4; // x3

  if ( (byte_4B46F52 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v1);
    byte_4B46F52 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields,
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
    sub_1BDBAD4(this, 0LL);
  BattleAction_ShiftHpData__InitHpIndex(x, 0LL);
}


void __fastcall BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B46F48 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_4B46F48 = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.removeBuffList, (int32_t)v4, v5, v6);
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
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *p_effectProcList; // x19
  System_Collections_ICollection_o *effectProcList; // t1
  System_Collections_Generic_List_object__o *klass; // x20
  System_Action_object__o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B46F46 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionEffect_Base__TypeInfo, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__, v5);
    sub_1BDB878(&Method_BattleActionData_BuffData___c__DisplayClass62_0__ExecAfterEffectProc_b__0__, v6);
    sub_1BDB878(&BattleActionData_BuffData___c__DisplayClass62_0_TypeInfo, v7);
    byte_4B46F46 = 1;
  }
  v8 = sub_1BDBAC4(BattleActionData_BuffData___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_7;
  *(_QWORD *)(v8 + 16) = data;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)data, v11, v12);
  effectProcList = (System_Collections_ICollection_o *)this->fields.effectProcList;
  p_effectProcList = (CGThumbnailListItem_o *)&this->fields.effectProcList;
  if ( BasicHelper__IsNullOrEmpty(effectProcList, 0LL) )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
  v16 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_BattleActionData_BuffData___c__DisplayClass62_0__ExecAfterEffectProc_b__0__,
    0LL);
  if ( !klass )
LABEL_7:
    sub_1BDBAD4(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    klass,
    (System_Action_T__o *)v16,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
  p_effectProcList->klass = 0LL;
  sub_1BDB81C(p_effectProcList, 0, v17, v18);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *effectProcList; // x19
  System_Action_object__o *v14; // x20

  if ( (byte_4B46F45 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_BattleActionEffect_Base__TypeInfo, data);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__, v5);
    sub_1BDB878(&Method_BattleActionData_BuffData___c__DisplayClass61_0__ExecPreActionProc_b__0__, v6);
    sub_1BDB878(&BattleActionData_BuffData___c__DisplayClass61_0_TypeInfo, v7);
    byte_4B46F45 = 1;
  }
  v8 = sub_1BDBAC4(BattleActionData_BuffData___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_7;
  *(_QWORD *)(v8 + 16) = data;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)data, v11, v12);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0LL) )
    return;
  effectProcList = (System_Collections_Generic_List_object__o *)this->fields.effectProcList;
  v14 = (System_Action_object__o *)sub_1BDBAC4(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_BattleActionData_BuffData___c__DisplayClass61_0__ExecPreActionProc_b__0__,
    0LL);
  if ( !effectProcList )
LABEL_7:
    sub_1BDBAD4(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    effectProcList,
    (System_Action_T__o *)v14,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
}


System_Int32_array *__fastcall BattleActionData_BuffData__GetDisplayEffectIds(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *klass; // x0
  CGThumbnailListItem_o *p_effectProcList; // x20
  struct System_Collections_Generic_List_BattleActionEffect_Base__o *effectProcList; // t1
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4B46F44 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__, effectProc);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo, v7);
    byte_4B46F44 = 1;
  }
  effectProcList = this->fields.effectProcList;
  p_effectProcList = (CGThumbnailListItem_o *)&this->fields.effectProcList;
  klass = (System_Collections_Generic_List_object__o *)effectProcList;
  if ( !effectProcList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    p_effectProcList->klass = (CGThumbnailListItem_c *)v11;
    sub_1BDB81C(p_effectProcList, (int32_t)v11, v12, v13);
    klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
    if ( !p_effectProcList->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v15 = Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__;
  ++klass->fields._version;
  if ( !items )
LABEL_9:
    sub_1BDBAD4(klass, effectProc);
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)effectProc,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v17[4] = (Il2CppClass *)effectProc;
    sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 4), (int32_t)effectProc, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData_BuffData__SetCheckHideWhenDeadInfo(
        BattleActionData_BuffData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataVals_o *v4; // x20
  __int64 v6; // x1

  v4 = vals;
  if ( (byte_4B46F43 & 1) == 0 )
  {
    sub_1BDB878(&DataVals_TypeInfo, vals);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B46F43 = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !v4 )
  {
    v4 = (DataVals_o *)sub_1BDBAC4(DataVals_TypeInfo);
    DataVals___ctor(v4, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.dataVals = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dataVals, (int32_t)v4, (int32_t)method, v3);
}


void __fastcall BattleActionData_BuffData__SetMultiMessage(
        BattleActionData_BuffData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleMultiMessageDisplay_Argument_o *v5; // x21
  struct BattleMultiMessageDisplay_Argument_o **p_MultiMessageArg_k__BackingField; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B46F47 & 1) == 0 )
  {
    sub_1BDB878(&BattleMultiMessageDisplay_Argument_TypeInfo, dataVal);
    byte_4B46F47 = 1;
  }
  v5 = (BattleMultiMessageDisplay_Argument_o *)sub_1BDBAC4(BattleMultiMessageDisplay_Argument_TypeInfo);
  BattleMultiMessageDisplay_Argument___ctor(v5, dataVal, 0LL);
  this->fields._MultiMessageArg_k__BackingField = v5;
  p_MultiMessageArg_k__BackingField = &this->fields._MultiMessageArg_k__BackingField;
  sub_1BDB81C((CGThumbnailListItem_o *)p_MultiMessageArg_k__BackingField, (int32_t)v5, v7, v8);
  *((_BYTE *)p_MultiMessageArg_k__BackingField - 173) = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_BuffData__SetSaveTpTurn(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  if ( (byte_4B46F42 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_int___ctor__, *(_QWORD *)&value);
    byte_4B46F42 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, value, (const MethodInfo_37F58C8 *)Method_System_Nullable_int___ctor__);
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


BattleMultiMessageDisplay_Argument_o *__fastcall BattleActionData_BuffData__get_MultiMessageArg(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._MultiMessageArg_k__BackingField;
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


void __fastcall BattleActionData_BuffData__set_MultiMessageArg(
        BattleActionData_BuffData_o *this,
        BattleMultiMessageDisplay_Argument_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MultiMessageArg_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._MultiMessageArg_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall BattleActionData_BuffData___c__DisplayClass61_0___ctor(
        BattleActionData_BuffData___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_BuffData___c__DisplayClass61_0___ExecPreActionProc_b__0(
        BattleActionData_BuffData___c__DisplayClass61_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_1BDBAD4(this, 0LL);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, Il2CppMethodPointer))proc->klass->vtable._4_PreActionProc.method)(
    proc,
    this->fields.data,
    proc->klass->vtable._5_AfterEffectProc.methodPtr);
}


void __fastcall BattleActionData_BuffData___c__DisplayClass62_0___ctor(
        BattleActionData_BuffData___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_BuffData___c__DisplayClass62_0___ExecAfterEffectProc_b__0(
        BattleActionData_BuffData___c__DisplayClass62_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_1BDBAD4(this, 0LL);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, void *))proc->klass->vtable._5_AfterEffectProc.method)(
    proc,
    this->fields.data,
    proc->klass[1]._1.image);
}


void __fastcall BattleActionData_ChangeBg___ctor(BattleActionData_ChangeBg_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_ChangeModelActionData___ctor(
        BattleActionData_ChangeModelActionData_o *this,
        int32_t funcTargetId,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  ChangeModelData_o *v7; // x21
  __int64 Value; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B46F5B & 1) == 0 )
  {
    sub_1BDB878(&ChangeModelData_TypeInfo, *(_QWORD *)&funcTargetId);
    byte_4B46F5B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._TargetId_k__BackingField = funcTargetId;
  v7 = (ChangeModelData_o *)sub_1BDBAC4(ChangeModelData_TypeInfo);
  ChangeModelData___ctor(v7, 0LL);
  if ( !dataVal || (Value = DataVals__GetValue(dataVal, 0LL), !v7) )
    sub_1BDBAD4(Value, v9);
  v7->fields.modelId = Value;
  v7->fields.isKeepChangeModelAfterContinue = DataVals__GetParam(dataVal, 214, 0, 0LL);
  this->fields._ChangeData_k__BackingField = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ChangeData_k__BackingField, (int32_t)v7, v10, v11);
}


ChangeModelData_o *__fastcall BattleActionData_ChangeModelActionData__get_ChangeData(
        BattleActionData_ChangeModelActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeData_k__BackingField;
}


int32_t __fastcall BattleActionData_ChangeModelActionData__get_TargetId(
        BattleActionData_ChangeModelActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


void __fastcall BattleActionData_ChangeModelActionData__set_ChangeData(
        BattleActionData_ChangeModelActionData_o *this,
        ChangeModelData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ChangeData_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ChangeData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleActionData_DamageData___ctor(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  long double inited; // q0
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  struct System_Int32_array **v15; // x8
  struct System_Int32_array *v16; // x1

  if ( (byte_4B46F3D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo, v4);
    byte_4B46F3D = 1;
  }
  this->fields.multiatk = 1;
  v5 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.attackSideEffectActList, (int32_t)v5, v6, v7);
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C2BF64(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C2BF08(inited);
  v15 = *(struct System_Int32_array ***)(v14 + 184);
  v16 = *v15;
  this->fields._ResetDamageArray_k__BackingField = *v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ResetDamageArray_k__BackingField, (int32_t)v16, v8, v9);
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
  const MethodInfo *v13; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4B46F39 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, damageList);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4B46F39 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9
    || (items = v9->fields._items, v15 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v9->fields._version,
                                   !items) )
  {
    sub_1BDBAD4(v10, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v9,
      damage,
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    items->m_Items[size + 1] = damage;
  }
  *damageList = v9;
  sub_1BDB81C((CGThumbnailListItem_o *)damageList, (int32_t)v9, v12, v13);
  return damage;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__GetResetDamageValue(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4B46F3A & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_IndexValue_int____77079288, *(_QWORD *)&index);
    byte_4B46F3A = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields._ResetDamageArray_k__BackingField,
           index,
           0,
           (const MethodInfo_3021F18 *)Method_BasicHelper_IndexValue_int____77079288);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_int__o *v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B46F3B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&damage);
    byte_4B46F3B = 1;
  }
  v11 = 0LL;
  ((void (__fastcall *)(BattleActionData_DamageData_o *, System_Collections_Generic_List_int__o **, _QWORD, bool, void *))this->klass->vtable._4_GetRatioDamageList.method)(
    this,
    &v11,
    (unsigned int)damage,
    minimumDamageFlg,
    this->klass[1]._1.image);
  if ( !v11 )
    sub_1BDBAD4(0LL, v7);
  v8 = System_Collections_Generic_List_int___ToArray(
         v11,
         (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._ResetDamageArray_k__BackingField = v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ResetDamageArray_k__BackingField, (int32_t)v8, v9, v10);
}


void __fastcall BattleActionData_DamageData__SetEffectFlipProc(
        BattleActionData_DamageData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  FunctionEntity_o *ActEnemyEffectFlipDataArray; // x20
  ActEnemyEffectFlipProc_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  ActEnemyEffectFlipDataArray = funcEnt;
  if ( (byte_4B46F3C & 1) == 0 )
  {
    sub_1BDB878(&ActEnemyEffectFlipProc_TypeInfo, funcEnt);
    byte_4B46F3C = 1;
  }
  if ( ActEnemyEffectFlipDataArray )
    ActEnemyEffectFlipDataArray = (FunctionEntity_o *)FunctionEntity__GetActEnemyEffectFlipDataArray(
                                                        ActEnemyEffectFlipDataArray,
                                                        0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ActEnemyEffectFlipDataArray, 0LL) )
  {
    v5 = (ActEnemyEffectFlipProc_o *)sub_1BDBAC4(ActEnemyEffectFlipProc_TypeInfo);
    ActEnemyEffectFlipProc___ctor(v5, (EffectFlipData_array *)ActEnemyEffectFlipDataArray, 0LL);
    this->fields._EffectFlipProc_k__BackingField = v5;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._EffectFlipProc_k__BackingField, (int32_t)v5, v6, v7);
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

  if ( (byte_4B46F38 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__, *(_QWORD *)&act);
    sub_1BDB878(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__, v5);
    byte_4B46F38 = 1;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_Int32Enum___Contains(
         attackSideEffectActList,
         act,
         (const MethodInfo_36BB944 *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
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
    sub_1BDBAD4(attackSideEffectActList, *(_QWORD *)&act);
  }
  size = attackSideEffectActList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      attackSideEffectActList,
      act,
      *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
    sub_1BDBADC(this, *(_QWORD *)&index, method);
  return atknplist->m_Items[index + 1];
}


int32_t __fastcall BattleActionData_DamageData__getAttackCount(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    sub_1BDBAD4(this, method);
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
    sub_1BDBADC(this, *(_QWORD *)&index, method);
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
    sub_1BDBADC(this, *(_QWORD *)&index, method);
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
    sub_1BDBADC(this, *(_QWORD *)&index, isCheckCount);
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
    sub_1BDBADC(this, *(_QWORD *)&index, method);
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
  const MethodInfo *v3; // x3

  this->fields._EffectFlipProc_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._EffectFlipProc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData_DamageData__set_NoDamageAffectedBuff(
        BattleActionData_DamageData_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NoDamageAffectedBuff_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._NoDamageAffectedBuff_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionData_DamageData__set_ResetDamageArray(
        BattleActionData_DamageData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ResetDamageArray_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ResetDamageArray_k__BackingField,
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
  const MethodInfo *v6; // x3

  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, (const MethodInfo *)ratio);
  this->fields.damageRates = ratio;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.damageRates, (int32_t)ratio, v5, v6);
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
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_int__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Int32_array *damageRates; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  __int64 v23; // x25
  __int64 v24; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v28; // x21
  int v29; // w8
  int32_t v30; // w22
  int32_t Item; // w0
  System_Collections_Generic_List_int__o *v32; // x8
  int32_t v33; // w20
  int32_t v34; // w23
  int32_t v35; // w0

  if ( (byte_4B46F41 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, damageList);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__set_Item__, v11);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BDB878(&System_Math_TypeInfo, v13);
    byte_4B46F41 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  *damageList = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)damageList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                    (System_Collections_Generic_IEnumerable_int__o *)this->fields.damageRates,
                                                    0LL);
  damageRates = this->fields.damageRates;
  if ( !damageRates )
    goto LABEL_19;
  v21 = *(_QWORD *)&damageRates->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    v23 = (int)v17;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        sub_1BDBADC(v17, v18, v19);
      v17 = *damageList;
      if ( !*damageList )
        break;
      v24 = damageRates->m_Items[v22 + 1];
      items = v17->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      v18 = v24 * damage / v23;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v17,
          v18,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        items->m_Items[size + 1] = v18;
      }
      LODWORD(v21) = damageRates->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_13;
    }
LABEL_19:
    sub_1BDBAD4(v17, v18);
  }
LABEL_13:
  v28 = *damageList;
  if ( !*damageList )
    goto LABEL_19;
  v29 = v28->fields._size;
  v30 = v29 - 1;
  if ( v29 >= 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             *damageList,
             v30,
             (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
    v32 = *damageList;
    v33 = Item;
    v34 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v32, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = System_Math__Max_64100580(0, damage - v34, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v28,
      v30,
      v35 + v33,
      (const MethodInfo_36B8B04 *)Method_System_Collections_Generic_List_int__set_Item__);
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
  const MethodInfo *v21; // x3
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

  if ( (byte_4B46F5E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ConstantMaster___, ent);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_string___, v11);
    sub_1BDB878(&System_Func_string__int__TypeInfo, v12);
    sub_1BDB878(&string___TypeInfo, v13);
    sub_1BDB878(&StringLiteral_14440/*"TimePerChara"*/, v14);
    sub_1BDB878(&StringLiteral_3105/*"BaseTime"*/, v15);
    sub_1BDB878(&StringLiteral_9032/*"MessageType"*/, v16);
    sub_1BDB878(&StringLiteral_7732/*"Interval"*/, v17);
    byte_4B46F5E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !ent )
    goto LABEL_15;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_1BDB920(string___TypeInfo, 0LL);
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
    sub_1BDBAD4(IsNullOrEmpty, v19);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Messages_k__BackingField, (int32_t)IsNullOrEmpty, v20, v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_object,
                  (ConstantMaster_o *)Master_object,
                  v23,
                  preMsg,
                  v24);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7732/*"Interval"*/,
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
                                                   (System_String_o *)StringLiteral_3105/*"BaseTime"*/,
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
                                (System_String_o *)StringLiteral_14440/*"TimePerChara"*/,
                                DefTimePerChara,
                                0LL);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v35 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(
    v35,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    0LL);
  this->fields.messageLen = System_Linq_Enumerable__Sum_object_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v35,
                              (const MethodInfo_306F328 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0LL;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9032/*"MessageType"*/,
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
  if ( (byte_4B46F60 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1BDB878(&StringLiteral_2836/*"BATTLE_MSG_BASE_TIME"*/, constMst);
    byte_4B46F60 = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_1BDBAD4(this, constMst);
  return ConstantMaster__GetValue_40881240(constMst, (System_String_o *)StringLiteral_2836/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4B46F5F & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1BDB878(&StringLiteral_2837/*"BATTLE_MSG_INTERVAL"*/, constMst);
    byte_4B46F5F = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_1BDBAD4(this, constMst);
  return ConstantMaster__GetValue_40881240(constMst, (System_String_o *)StringLiteral_2837/*"BATTLE_MSG_INTERVAL"*/, 250, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4B46F61 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1BDB878(&StringLiteral_2916/*"BATTLE_TIME_PER_CHARA"*/, constMst);
    byte_4B46F61 = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_1BDBAD4(this, constMst);
  return ConstantMaster__GetValue_40881240(constMst, (System_String_o *)StringLiteral_2916/*"BATTLE_TIME_PER_CHARA"*/, 15, 0LL);
}


void __fastcall BattleActionData_DisplayMessageData__ResetIntervalTime(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  this->fields.interval = 0;
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

  if ( (byte_4B46F62 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, text);
    byte_4B46F62 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__ReplaceNameTag(text, 0, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4, 0LL);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v4 )
      sub_1BDBAD4(0LL, v5);
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

  if ( (byte_4B46F5D & 1) == 0 )
  {
    sub_1BDB878(&BattleDataDefine_TypeInfo, method);
    byte_4B46F5D = 1;
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

  if ( (byte_4B46F5C & 1) == 0 )
  {
    sub_1BDB878(&BattleDataDefine_TypeInfo, method);
    byte_4B46F5C = 1;
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
  const MethodInfo *v3; // x3

  this->fields._Messages_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Messages_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B46F5A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex);
    sub_1BDB878(&BattleAction_ShiftDownHpData_TypeInfo, v11);
    byte_4B46F5A = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v13 = (BattleAction_ShiftDownHpData_o *)sub_1BDBAC4(BattleAction_ShiftDownHpData_TypeInfo);
  BattleAction_ShiftDownHpData___ctor(v13, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v19 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BDBAD4(v14, v15);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v13,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
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
  const MethodInfo *v7; // x3
  int32_t v8; // w1

  if ( (byte_4B46F59 & 1) == 0 )
  {
    sub_1BDB878(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_1BDB878(&StringLiteral_20045/*"hp_iconeffect"*/, v2);
    byte_4B46F59 = 1;
  }
  v3 = sub_1BDBAC4(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v3, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  v8 = StringLiteral_20045/*"hp_iconeffect"*/;
  *(_QWORD *)(v3 + 24) = StringLiteral_20045/*"hp_iconeffect"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 24), v8, v6, v7);
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
    sub_1BDBAD4(this, svtData);
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
    sub_1BDBAD4(this, 0LL);
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
  if ( (byte_4B46F57 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_8762/*"MOTION_SHIFT_GAUGE_DOWN"*/, method);
    byte_4B46F57 = 1;
  }
  return (System_String_o *)StringLiteral_8762/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B46F58 & 1) == 0 )
  {
    sub_1BDB878(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, method);
    byte_4B46F58 = 1;
  }
  v3 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_1BDBAC4(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
  BattleAction_PlayDownShiftGaugeMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, Il2CppMethodPointer))v3->klass->vtable._7_Init.method)(
                                                v3,
                                                this,
                                                v3->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData_EnemyCountChangeData___ctor(
        BattleActionData_EnemyCountChangeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_EntryAllAtOnceServantData___ctor(
        BattleActionData_EntryAllAtOnceServantData_o *this,
        int32_t argUniqueId,
        UnityEngine_GameObject_o *argTargetObject,
        const MethodInfo *method)
{
  BattleActionData_EntryAllAtOnceServantData_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.targetObject = argTargetObject;
  v6 = (BattleActionData_EntryAllAtOnceServantData_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.targetObject) = argUniqueId;
  sub_1BDB81C((CGThumbnailListItem_o *)v6, (int32_t)argTargetObject, v7, v8);
}


void __fastcall BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4B46F49 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionEffect_UpdateFieldInfo_TypeInfo, method);
    byte_4B46F49 = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v3 = (Il2CppObject *)sub_1BDBAC4(BattleActionEffect_UpdateFieldInfo_TypeInfo);
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
  __int64 v22; // x1

  v6 = (BattleActionData_BuffData_o *)this;
  if ( (byte_4B46F4A & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, perf);
    byte_4B46F4A = 1;
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
    sub_1BDBAD4(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0LL);
  if ( !uicamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Camera__WorldToViewportPoint_70090016(
                                     uicamera,
                                     *(UnityEngine_Vector3_o *)&v12,
                                     0LL);
  if ( !actorcamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ViewportToWorldPoint_70090024(
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
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4B3E911 = 1;
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
    sub_1BDBAD4(this, data);
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


bool __fastcall BattleActionData_HealData__get_DeadKeepStanding(
        BattleActionData_HealData_o *this,
        const MethodInfo *method)
{
  return this->fields._DeadKeepStanding_k__BackingField;
}


int32_t __fastcall BattleActionData_HealData__get_EntryIndex(
        BattleActionData_HealData_o *this,
        const MethodInfo *method)
{
  return this->fields._EntryIndex_k__BackingField;
}


int32_t __fastcall BattleActionData_HealData__get_ExpelledUniqueId(
        BattleActionData_HealData_o *this,
        const MethodInfo *method)
{
  return this->fields._ExpelledUniqueId_k__BackingField;
}


bool __fastcall BattleActionData_HealData__get_IsMultiTargetRevival(
        BattleActionData_HealData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsMultiTargetRevival_k__BackingField;
}


bool __fastcall BattleActionData_HealData__get_IsRevival(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField > 0;
}


bool __fastcall BattleActionData_HealData__get_IsRevivalIncludeMultiTarget(
        BattleActionData_HealData_o *this,
        const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField > 0 || this->fields._IsMultiTargetRevival_k__BackingField;
}


int32_t __fastcall BattleActionData_HealData__get_RevivalTargetId(
        BattleActionData_HealData_o *this,
        const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField;
}


void __fastcall BattleActionData_HealData__set_DeadKeepStanding(
        BattleActionData_HealData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DeadKeepStanding_k__BackingField = value;
}


void __fastcall BattleActionData_HealData__set_EntryIndex(
        BattleActionData_HealData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EntryIndex_k__BackingField = value;
}


void __fastcall BattleActionData_HealData__set_ExpelledUniqueId(
        BattleActionData_HealData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ExpelledUniqueId_k__BackingField = value;
}


void __fastcall BattleActionData_HealData__set_IsMultiTargetRevival(
        BattleActionData_HealData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMultiTargetRevival_k__BackingField = value;
}


void __fastcall BattleActionData_HealData__set_RevivalTargetId(
        BattleActionData_HealData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RevivalTargetId_k__BackingField = value;
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
    sub_1BDBAD4(v5, v6);
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
    sub_1BDBAD4(this, perf);
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
    sub_1BDBAD4(this, method);
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


void __fastcall BattleActionData_ShiftServant__ResetBeforeWeapon(
        BattleActionData_ShiftServant_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.Weapon = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.Weapon, 0, v2, v3);
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


void __fastcall BattleActionData_ShiftServant__SetBeforeWeapon(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_ShiftServant_WeaponData_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B46F4B & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_ShiftServant_WeaponData_TypeInfo, svtData);
    byte_4B46F4B = 1;
  }
  v5 = (BattleActionData_ShiftServant_WeaponData_o *)sub_1BDBAC4(BattleActionData_ShiftServant_WeaponData_TypeInfo);
  BattleActionData_ShiftServant_WeaponData___ctor(v5, svtData, v6);
  this->fields.Weapon = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.Weapon, (int32_t)v5, v7, v8);
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
  const MethodInfo *v7; // x3

  if ( !svtData )
    sub_1BDBAD4(this, 0LL);
  this->fields.svtId = BattleServantData__getActorSvtId(svtData, 0LL);
  this->fields.limit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  this->fields.cameraId = BattleServantData__getCameraActionId(svtData, 0LL);
  this->fields.uniqueId = svtData->fields.uniqueId;
  this->fields.overwriteSvtVoiceId = svtData->fields.overwriteSvtVoiceId;
  this->fields.isNoVoice = BattleServantData__IsNoVoice(svtData, 0LL);
  this->fields.isHideShadow = svtData->fields.isHideShadow;
  LoadedAssetArgs_k__BackingField = svtData->fields._LoadedAssetArgs_k__BackingField;
  this->fields.loadedAssetArgs = LoadedAssetArgs_k__BackingField;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadedAssetArgs, (int32_t)LoadedAssetArgs_k__BackingField, v6, v7);
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
    sub_1BDBAD4(this, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._AfterSvtCache_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._AfterSvtCache_k__BackingField,
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


void __fastcall BattleActionData_ShiftServant_WeaponData___ctor(
        BattleActionData_ShiftServant_WeaponData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1BDBAD4(v5, v6);
  this->fields._EffectGroupId_k__BackingField = BattleServantData__getWeaponGroup(svtData, 1, 0LL);
  this->fields._GroupId_k__BackingField = BattleServantData__getWeaponGroup(svtData, 0, 0LL);
  this->fields._EffectFolder_k__BackingField = BattleServantData__getEffectFolder(svtData, 0LL);
  this->fields._Scale_k__BackingField = BattleServantData__getWeaponScale(svtData, 0LL);
  this->fields._Color_k__BackingField = BattleServantData__getWeaponColor(svtData, 0LL);
}


int32_t __fastcall BattleActionData_ShiftServant_WeaponData__GetWeaponGroup(
        BattleActionData_ShiftServant_WeaponData_o *this,
        bool isEffect,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 20LL;
  if ( isEffect )
    v3 = 16LL;
  return *(_DWORD *)((char *)&this->klass + v3);
}


UnityEngine_Color_o __fastcall BattleActionData_ShiftServant_WeaponData__get_Color(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._Color_k__BackingField.fields.r;
  g = this->fields._Color_k__BackingField.fields.g;
  b = this->fields._Color_k__BackingField.fields.b;
  a = this->fields._Color_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t __fastcall BattleActionData_ShiftServant_WeaponData__get_EffectFolder(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectFolder_k__BackingField;
}


int32_t __fastcall BattleActionData_ShiftServant_WeaponData__get_EffectGroupId(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectGroupId_k__BackingField;
}


int32_t __fastcall BattleActionData_ShiftServant_WeaponData__get_GroupId(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


int32_t __fastcall BattleActionData_ShiftServant_WeaponData__get_Scale(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._Scale_k__BackingField;
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B46F36 & 1) == 0 )
  {
    sub_1BDB878(&BuffList_ACTION___TypeInfo, *(_QWORD *)&targetId);
    byte_4B46F36 = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_1BDB920(BuffList_ACTION___TypeInfo, 0LL);
  this->fields.sideEffectActs = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sideEffectActs, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetId = targetId;
  this->fields.sideEffectActs = sideEffectActs;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sideEffectActs, (int32_t)sideEffectActs, v10, v11);
}


void __fastcall BattleActionData_SkillShiftServant___ctor(
        BattleActionData_SkillShiftServant_o *this,
        BattleData_o *data,
        int32_t shiftNpcId,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  *(_QWORD *)&this->fields.displayType = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.data = data;
  v6 = (BattleActionData_SkillShiftServant_o *)((char *)v6 + 80);
  v6[-1].fields.cameraId = 0;
  sub_1BDB81C((CGThumbnailListItem_o *)v6, (int32_t)data, v7, v8);
  LODWORD(v6->monitor) = shiftNpcId;
}


void __fastcall BattleActionData_SkillShiftServant__SetAddBeforeSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v3; // x19

  if ( !svtData
    || (v3 = this,
        this->fields.displayType = svtData->fields.displayType,
        (this = (BattleActionData_SkillShiftServant_o *)svtData->fields.deckSvt) == 0LL) )
  {
    sub_1BDBAD4(this, svtData);
  }
  v3->fields.colorType = BattleDeckServantData__GetDisplayColorType((BattleDeckServantData_o *)this, 0LL);
}


void __fastcall BattleActionData_SkillShiftServant__SetAddCheckSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v3; // x19
  int32_t colorType; // w20
  bool v5; // w8

  if ( !this->fields.isChange )
  {
    if ( svtData )
    {
      v3 = this;
      if ( this->fields.displayType != svtData->fields.displayType )
      {
        v5 = 1;
        goto LABEL_7;
      }
      this = (BattleActionData_SkillShiftServant_o *)svtData->fields.deckSvt;
      if ( this )
      {
        colorType = v3->fields.colorType;
        v5 = colorType != BattleDeckServantData__GetDisplayColorType((BattleDeckServantData_o *)this, 0LL);
LABEL_7:
        v3->fields.isChange = v5;
        return;
      }
    }
    sub_1BDBAD4(this, svtData);
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
  if ( (byte_4B46F4C & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_1BDB878(&int___TypeInfo, targetData);
    byte_4B46F4C = 1;
  }
  if ( !targetData )
    goto LABEL_11;
  buffData = targetData->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_1BDB920(int___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_11;
  v7 = *(_DWORD *)&this->fields.IsForceBuffEffect;
  if ( !v7 || (this->fields.svtId = 10, v7 == 1) )
    sub_1BDBADC(this, targetData, this);
  this->fields.limit = 24;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypeBuff(buffData, buffData->fields.passiveList, (System_Int32_array *)this, v6),
        BattleServantData__setSkillShiftServant(targetData, v4->fields.data, v4->fields.npcId, 0LL),
        (data = v4->fields.data) == 0LL)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0LL )
  {
LABEL_11:
    sub_1BDBAD4(this, targetData);
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
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.changeBgm = inChangeBgm;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.changeBgm, (int32_t)inChangeBgm, v5, v6);
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
    sub_1BDBAD4(this, perf);
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
    sub_1BDBAD4(this, method);
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
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B46F56 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex);
    sub_1BDB878(&BattleAction_ShiftUpHpData_TypeInfo, v11);
    byte_4B46F56 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v13 = (BattleAction_ShiftUpHpData_o *)sub_1BDBAC4(BattleAction_ShiftUpHpData_TypeInfo);
  BattleAction_ShiftUpHpData___ctor(v13, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v19 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BDBAD4(v14, v15);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v13,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
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
  const MethodInfo *v7; // x3
  int32_t v8; // w1

  if ( (byte_4B46F55 & 1) == 0 )
  {
    sub_1BDB878(&BattleServantHpShiftComponent_EffectData_TypeInfo, method);
    sub_1BDB878(&StringLiteral_20044/*"hp_iconcharge"*/, v2);
    byte_4B46F55 = 1;
  }
  v3 = sub_1BDBAC4(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v3, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  v8 = StringLiteral_20044/*"hp_iconcharge"*/;
  *(_QWORD *)(v3 + 24) = StringLiteral_20044/*"hp_iconcharge"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 24), v8, v6, v7);
  return (BattleServantHpShiftComponent_EffectData_o *)v3;
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
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
  if ( (byte_4B46F53 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_8763/*"MOTION_SHIFT_GAUGE_UP"*/, method);
    byte_4B46F53 = 1;
  }
  return (System_String_o *)StringLiteral_8763/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B46F54 & 1) == 0 )
  {
    sub_1BDB878(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo, method);
    byte_4B46F54 = 1;
  }
  v3 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1BDBAC4(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v3, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
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
  const MethodInfo *v4; // x3

  if ( (byte_4B46F66 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData___c_TypeInfo, v1);
    byte_4B46F66 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleActionData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActionData___c_TypeInfo->static_fields->__9 = (struct BattleActionData___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BattleActionData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleActionData___c___ctor(BattleActionData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c___AddDisplayTriggerIntervalBuff_b__159_0(
        BattleActionData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1BDBAD4(this, 0LL);
  BattleBuffData_BuffData__UpdateInterval(buff, 0LL);
}


BattleActionData_o *__fastcall BattleActionData___c___AddSideEffectAfterAction_b__330_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_1BDBAD4(this, 0LL);
  return act->fields.afterActionData;
}


System_Collections_Generic_List_BattleActionData_BuffData__o *__fastcall BattleActionData___c___EnumerateAllBuffData_b__130_0(
        BattleActionData___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( x )
    return x->fields.buffdatalist;
  else
    return 0LL;
}


System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *__fastcall BattleActionData___c___EnumerateAllBuffData_b__130_1(
        BattleActionData___c_o *this,
        System_Collections_Generic_List_BattleActionData_BuffData__o *x,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *)x;
}


bool __fastcall BattleActionData___c___ExecUnappliedProcess_b__131_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


bool __fastcall BattleActionData___c___ExistFuncSideEffectTrigger_b__165_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArrayEx_b__133_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BDBAD4(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArray_b__132_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BDBAD4(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__303_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BattleActionData___c___GetFuncTargetIds_b__303_3(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BattleActionData___c___PreActionProcess_b__129_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


int32_t __fastcall BattleActionData___c___PreActionProcess_b__129_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._AddOrder_k__BackingField;
}


void __fastcall BattleActionData___c___ResetAllCheckDead_b__189_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__134_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.functionIndex;
}


void __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__134_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool __fastcall BattleActionData___c___SetFuncTargetAllDead_b__146_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return BattleServantData__isAliveLogic(x, 0, 0LL);
}


void __fastcall BattleActionData___c___SetPopupOnce_b__135_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  x->fields.isOncePop = 1;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__318_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.targetId;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__318_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__166_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__166_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateIntervalBuff_b__156_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1BDBAD4(this, 0LL);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


int32_t __fastcall BattleActionData___c___UpdateTargetRangeOfTreasureDevice_b__307_0(
        BattleActionData___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8

  if ( !funcUnit
    || (dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField) == 0LL
    || (funcEnt = dataVals_k__BackingField->fields.funcEnt) == 0LL )
  {
    sub_1BDBAD4(this, funcUnit);
  }
  return funcEnt->fields.targetType;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__310_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__310_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__310_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__310_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_1BDBAD4(this, 0LL);
  damagelist = x->fields.damagelist;
  if ( damagelist )
    return (damagelist->max_length - 1) & ~((signed int)(damagelist->max_length - 1) >> 31);
  else
    return 0;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__310_4(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__309_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__309_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__309_2(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


void __fastcall BattleActionData___c__DisplayClass129_0___ctor(
        BattleActionData___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass129_0___PreActionProcess_b__2(
        BattleActionData___c__DisplayClass129_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  BattleActionData_BuffData__ExecPreActionProc(x, this->fields.data, method);
}


void __fastcall BattleActionData___c__DisplayClass131_0___ctor(
        BattleActionData___c__DisplayClass131_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass131_0___ExecUnappliedProcess_b__1(
        BattleActionData___c__DisplayClass131_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  BattleActionData_BuffData__ExecAfterEffectProc(x, this->fields.data, method);
}


void __fastcall BattleActionData___c__DisplayClass132_0___ctor(
        BattleActionData___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass132_0___GetExecOrderArray_b__0(
        BattleActionData___c__DisplayClass132_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4B46F67 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x);
    byte_4B46F67 = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1BDBAD4(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData___c__DisplayClass132_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass132_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4B46F68 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x);
    byte_4B46F68 = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1BDBAD4(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


void __fastcall BattleActionData___c__DisplayClass134_0___ctor(
        BattleActionData___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass134_0___SetFuncSideEffectTrigger_b__1(
        BattleActionData___c__DisplayClass134_0_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.functionIndex == this->fields.lastIndex;
}


void __fastcall BattleActionData___c__DisplayClass146_0___ctor(
        BattleActionData___c__DisplayClass146_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass146_0___SetFuncTargetAllDead_b__0(
        BattleActionData___c__DisplayClass146_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.isEnemy != this->fields.isActorEnemy;
}


void __fastcall BattleActionData___c__DisplayClass158_0___ctor(
        BattleActionData___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass158_0___UpdateDirectIntervalBuffData_b__0(
        BattleActionData___c__DisplayClass158_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1BDBAD4(this, 0LL);
  return BattleBuffData_BuffData__EqualBuffType(buff, this->fields.buffMst, this->fields.targetType, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass176_0___ctor(
        BattleActionData___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass176_0___getDamageList_b__0(
        BattleActionData___c__DisplayClass176_0_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass181_0___ctor(
        BattleActionData___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass181_0___GetDamageArrayDistinctIndex_b__0(
        BattleActionData___c__DisplayClass181_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct BattleActionData_DamageData_o *damage; // x8

  if ( !x || (damage = this->fields.damage) == 0LL )
    sub_1BDBAD4(this, x);
  return x->fields.functionIndex == damage->fields.functionIndex;
}


void __fastcall BattleActionData___c__DisplayClass188_0___ctor(
        BattleActionData___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass188_0___getBuffList_b__0(
        BattleActionData___c__DisplayClass188_0_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass195_0___ctor(
        BattleActionData___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass195_0___getHealList_b__0(
        BattleActionData___c__DisplayClass195_0_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass196_0___ctor(
        BattleActionData___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass196_0___TryGetRevivedServantHealDataArray_b__0(
        BattleActionData___c__DisplayClass196_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._RevivalTargetId_k__BackingField >= 1
      && (x->fields._EntryIndex_k__BackingField == this->fields.entryIndex || this->fields.entryIndex < 0);
}


void __fastcall BattleActionData___c__DisplayClass201_0___ctor(
        BattleActionData___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass201_0___getReplaceMember_b__0(
        BattleActionData___c__DisplayClass201_0_o *this,
        BattleActionData_ReplaceMember_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass214_0___ctor(
        BattleActionData___c__DisplayClass214_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass214_0___getSummonServant_b__0(
        BattleActionData___c__DisplayClass214_0_o *this,
        BattleActionData_SummonServant_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void __fastcall BattleActionData___c__DisplayClass234_0___ctor(
        BattleActionData___c__DisplayClass234_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass234_0___TryGetUseInFsmFuncParamValue_b__0(
        BattleActionData___c__DisplayClass234_0_o *this,
        UseInFsmFuncParam_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return UseInFsmFuncParam__IsMatch(x, this->fields.condData, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass241_0___ctor(
        BattleActionData___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass241_0___TryGetChangeModelData_b__0(
        BattleActionData___c__DisplayClass241_0_o *this,
        BattleActionData_ChangeModelActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._TargetId_k__BackingField == this->fields.funcTargetId;
}


void __fastcall BattleActionData___c__DisplayClass303_0___ctor(
        BattleActionData___c__DisplayClass303_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass303_0___GetFuncTargetIds_b__0(
        BattleActionData___c__DisplayClass303_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass303_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B46F69 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass303_0_o *)sub_1BDB878(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_4B46F69 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass303_0_o *)v4->fields.ids) == 0LL )
    sub_1BDBAD4(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass303_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass303_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass303_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B46F6A & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass303_0_o *)sub_1BDB878(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_4B46F6A = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass303_0_o *)v4->fields.ids) == 0LL )
    sub_1BDBAD4(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass303_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass303_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass303_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B46F6B & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass303_0_o *)sub_1BDB878(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x);
    byte_4B46F6B = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass303_0_o *)v4->fields.ids) == 0LL )
    sub_1BDBAD4(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass311_0___ctor(
        BattleActionData___c__DisplayClass311_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass311_0___GetFunctionIndexArrayNearByCuriousFunc_b__0(
        BattleActionData___c__DisplayClass311_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4B46F6C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_4B46F6C = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_37F58E0 *)Method_System_Nullable_int__get_Value__) > x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass311_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass311_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4B46F6D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_4B46F6D = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_37F58E0 *)Method_System_Nullable_int__get_Value__) == x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass311_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass311_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4B46F6E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x);
    byte_4B46F6E = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_37F58E0 *)Method_System_Nullable_int__get_Value__) < x;
}


void __fastcall BattleActionData___c__DisplayClass317_0___ctor(
        BattleActionData___c__DisplayClass317_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass317_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass317_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BDBAD4(this, 0LL);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass318_0___ctor(
        BattleActionData___c__DisplayClass318_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass318_0___SetSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass318_0_o *this,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass318_0_o *v2; // x19
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
  System_Func_object__int__o *_9__318_1; // x22
  Il2CppObject *v15; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  BattleActionData___c_c *v20; // x0
  System_Collections_Generic_List_int__o *v21; // x19
  System_Func_object__int__o *_9__318_2; // x21
  Il2CppObject *v23; // x22
  struct BattleActionData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  v2 = this;
  if ( (byte_4B46F6F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___, v3);
    sub_1BDB878(&System_Func_BattleActionData_HealData__int__TypeInfo, v4);
    sub_1BDB878(&System_Func_BattleActionData_BuffData__int__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1BDB878(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__318_1__, v7);
    sub_1BDB878(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__318_2__, v8);
    this = (BattleActionData___c__DisplayClass318_0_o *)sub_1BDB878(&BattleActionData___c_TypeInfo, v9);
    byte_4B46F6F = 1;
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
    _9__318_1 = (System_Func_object__int__o *)v12->static_fields->__9__318_1;
    if ( !_9__318_1 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleActionData___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__318_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__318_1,
        v15,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__318_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__318_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__318_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__318_1, (int32_t)_9__318_1, v17, v18);
    }
    this = (BattleActionData___c__DisplayClass318_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__318_1,
                                                          (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_23;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
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
    _9__318_2 = (System_Func_object__int__o *)v20->static_fields->__9__318_2;
    if ( !_9__318_2 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleActionData___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__318_2 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleActionData_HealData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__318_2,
        v23,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__318_2__,
        0LL);
      v24 = BattleActionData___c_TypeInfo->static_fields;
      v24->__9__318_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__318_2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v24->__9__318_2, (int32_t)_9__318_2, v25, v26);
    }
    this = (BattleActionData___c__DisplayClass318_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__318_2,
                                                          (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v21 )
    {
      System_Collections_Generic_List_int___AddRange(
        v21,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_23:
    sub_1BDBAD4(this, method);
  }
}


void __fastcall BattleActionData___c__DisplayClass319_0___ctor(
        BattleActionData___c__DisplayClass319_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass319_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass319_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BDBAD4(this, 0LL);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass326_0___ctor(
        BattleActionData___c__DisplayClass326_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass326_0___getSideEffectList_b__0(
        BattleActionData___c__DisplayClass326_0_o *this,
        BattleActionData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BDBAD4(this, 0LL);
  return s->fields.actType == this->fields.actType;
}


void __fastcall BattleActionData___c__DisplayClass330_0___ctor(
        BattleActionData___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass330_0___AddSideEffectAfterAction_b__0(
        BattleActionData___c__DisplayClass330_0_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || !act )
    sub_1BDBAD4(this, act);
  return BattleActionData__ExistsAddableAfterAction(act, perf->fields.data, 0LL);
}


void __fastcall BattleActionData___c__DisplayClass340_0___ctor(
        BattleActionData___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionData___c__DisplayClass340_0___addReflectLogicResultServantId_b__0(
        BattleActionData___c__DisplayClass340_0_o *this,
        BattleActionData_ServantLogicResultData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}