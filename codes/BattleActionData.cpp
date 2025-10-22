void BattleActionData___cctor(const MethodInfo *method)
{
  struct BattleActionData_StaticFields *static_fields; // x8

  if ( (byte_4C593E9 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593E9 = 1;
  }
  static_fields = BattleActionData_TypeInfo->static_fields;
  static_fields->addActionOrder = 0;
  *(_OWORD *)&static_fields->TYPE_DEAD = xmmword_C128F0;
  *(_OWORD *)&static_fields->TYPE_RESURRECTION = xmmword_C13440;
  *(_OWORD *)&static_fields->TYPE_ORDERBUSTER = xmmword_C12BD0;
}


void BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_T__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_HashSet_int__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C593E8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C593E8 = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1;
  this->fields.imageId = -1;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1;
  *(_QWORD *)&this->fields.commandAssistId = -1;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.damageSideEffectedSvtIds, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1C3E7B0(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v6,
    (const MethodInfo_37281A0 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.attackSideEffectedSvtIds, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.servantLogicResultList, (int32_t)v9, v10, v11);
  this->fields.funcResult = 1;
  v12 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_379A414 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.funcTargetList, (int32_t)v15, v16, v17);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  this->fields._IsUpdateBuffAfterAction_k__BackingField = 1;
  this->fields.npUpdatedMaxDamageIndex = -1;
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v21,
    (const MethodInfo_33C6D90 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._IntervalBuffDict_k__BackingField, (int32_t)v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.skillCutInMessage, v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v27;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sideEffectList, (int32_t)v27, v28, v29);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData__AddAfterActionData(
        BattleActionData_o *this,
        BattleActionData_o *afterActionData,
        bool isPreActCheckDead,
        const MethodInfo *method)
{
  struct BattleActionData_o *v6; // x8

  this->fields.afterActionData = afterActionData;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.afterActionData,
    (int32_t)afterActionData,
    isPreActCheckDead,
    method);
  v6 = this->fields.afterActionData;
  if ( v6 )
    v6->fields.isPreAfterActCheckDead = isPreActCheckDead;
}


void BattleActionData__AddBuffList(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *buffdatalist; // x0
  CGThumbnailListItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C59398 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    byte_4C59398 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (CGThumbnailListItem_o *)&this->fields.buffdatalist;
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_buffdatalist, (int32_t)v8, v9, v10);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
    if ( !p_buffdatalist->klass )
      goto LABEL_11;
  }
  items = buffdatalist->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__;
  ++buffdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1C3E7C0(buffdatalist, data);
  size = buffdatalist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      buffdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    buffdatalist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void BattleActionData__AddChangeModelData(
        BattleActionData_o *this,
        BattleActionData_ChangeModelActionData_o *changeModelActionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *ChangeModelList_k__BackingField; // x0
  CGThumbnailListItem_o *p_ChangeModelList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C593AD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_ChangeModelActionData__TypeInfo);
    byte_4C593AD = 1;
  }
  if ( changeModelActionData )
  {
    ChangeModelList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ChangeModelList_k__BackingField;
    if ( !ChangeModelList_k__BackingField )
    {
      p_ChangeModelList_k__BackingField = (CGThumbnailListItem_o *)&this->fields._ChangeModelList_k__BackingField;
      v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_ChangeModelActionData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData___ctor__);
      p_ChangeModelList_k__BackingField->klass = (CGThumbnailListItem_c *)v8;
      sub_1C3E508(p_ChangeModelList_k__BackingField, (int32_t)v8, v9, v10);
      ChangeModelList_k__BackingField = (System_Collections_Generic_List_object__o *)p_ChangeModelList_k__BackingField->klass;
      if ( !p_ChangeModelList_k__BackingField->klass )
        goto LABEL_11;
    }
    items = ChangeModelList_k__BackingField->fields._items;
    v12 = Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__Add__;
    ++ChangeModelList_k__BackingField->fields._version;
    if ( !items )
LABEL_11:
      sub_1C3E7C0(ChangeModelList_k__BackingField, changeModelActionData);
    size = ChangeModelList_k__BackingField->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ChangeModelList_k__BackingField,
        (Il2CppObject *)changeModelActionData,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      ChangeModelList_k__BackingField->fields._size = size + 1;
      v14[4] = (Il2CppClass *)changeModelActionData;
      sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)changeModelActionData, (int32_t)method, v3);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__AddDirectDisplayMessageId(BattleActionData_o *this, int32_t messageId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *directDisplayMessageIdList; // x0
  CGThumbnailListItem_o *p_directDisplayMessageIdList; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4C593B3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C593B3 = 1;
  }
  directDisplayMessageIdList = this->fields.directDisplayMessageIdList;
  if ( !directDisplayMessageIdList )
  {
    p_directDisplayMessageIdList = (CGThumbnailListItem_o *)&this->fields.directDisplayMessageIdList;
    v7 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
    p_directDisplayMessageIdList->klass = (CGThumbnailListItem_c *)v7;
    sub_1C3E508(p_directDisplayMessageIdList, (int32_t)v7, v8, v9);
    directDisplayMessageIdList = (struct System_Collections_Generic_List_int__o *)p_directDisplayMessageIdList->klass;
    if ( !p_directDisplayMessageIdList->klass )
      goto LABEL_9;
  }
  items = directDisplayMessageIdList->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++directDisplayMessageIdList->fields._version;
  if ( !items )
LABEL_9:
    sub_1C3E7C0(directDisplayMessageIdList, *(_QWORD *)&messageId);
  size = directDisplayMessageIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      directDisplayMessageIdList,
      messageId,
      *(const MethodInfo_379843C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    directDisplayMessageIdList->fields._size = size + 1;
    items->m_Items[size] = messageId;
  }
}


BattleActionData_DisplayMessageData_o *BattleActionData__AddDisplayMessage(
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
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *DispMsgList_k__BackingField; // x0
  CGThumbnailListItem_o *p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4C593B2 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_4C593B2 = 1;
  }
  v9 = (BattleActionData_DisplayMessageData_o *)sub_1C3E7B0(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor(v9, ent, parser, preMsg, v10);
  DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = (CGThumbnailListItem_o *)&this->fields._DispMsgList_k__BackingField;
    v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    p_DispMsgList_k__BackingField->klass = (CGThumbnailListItem_c *)v16;
    sub_1C3E508(p_DispMsgList_k__BackingField, (int32_t)v16, v17, v18);
    DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)p_DispMsgList_k__BackingField->klass;
    if ( !p_DispMsgList_k__BackingField->klass )
      goto LABEL_10;
  }
  items = DispMsgList_k__BackingField->fields._items;
  v20 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
  ++DispMsgList_k__BackingField->fields._version;
  if ( !items )
LABEL_10:
    sub_1C3E7C0(DispMsgList_k__BackingField, v11);
  size = DispMsgList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DispMsgList_k__BackingField,
      (Il2CppObject *)v9,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    DispMsgList_k__BackingField->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v9, v12, v13);
  }
  return v9;
}


BattleActionData_o *BattleActionData__AddDisplayTriggerIntervalBuff(
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
  const MethodInfo *v11; // x3

  v5 = this;
  if ( (byte_4C5938C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__);
    sub_1C3E564(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__169_0__);
    this = (BattleActionData_o *)sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C5938C = 1;
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
  v7 = *(System_Action_object__o **)(this->fields.userCommandCodeId + 104);
  if ( !v7 )
  {
    if ( !LODWORD(this->fields.servantLogicResultList) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
    }
    v8 = *(Il2CppObject **)this->fields.userCommandCodeId;
    v7 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(v7, v8, Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__169_0__, 0);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__169_0 = (struct System_Action_BattleBuffData_BuffData__o *)v7;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__169_0, (int32_t)v7, v10, v11);
  }
  if ( !v5 )
LABEL_12:
    sub_1C3E7C0(this, task);
  BattleActionData__AddUpdateIntervalBuffDict(
    v5,
    key,
    (System_Action_BattleBuffData_BuffData__o *)v7,
    task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value,
    v3);
  return v5;
}


bool BattleActionData__AddFieldServantUpdateIntervalBuff(
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
  if ( (byte_4C59387 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleBuffData_BuffData__TypeInfo);
    this = (BattleActionData_o *)sub_1C3E564(&Method_BattleActionData_UpdateIntervalCurrent__);
    byte_4C59387 = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (BattleActionData_o *)BattleData__getFieldServantList(data, 0, 0);
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
        sub_1C3E7C8(this, data);
      v8 = &v6->klass + (int)v7;
      v9 = (BattleServantData_o *)v8[4];
      if ( !v9 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v8[4], 0);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0);
      v11 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(v11, v4, Method_BattleActionData_UpdateIntervalCurrent__, 0);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v4,
        v9,
        (System_Action_BattleBuffData_BuffData__o *)v11,
        UpdateWaitIntervalBuffArray,
        v12);
      endcameraname = (int)v6->fields.endcameraname;
      if ( (int)++v7 >= endcameraname )
        return ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v4->klass->vtable[5].methodPtr)(
                 v4,
                 v4->klass->vtable[5].method);
    }
LABEL_12:
    sub_1C3E7C0(this, data);
  }
  return ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v4->klass->vtable[5].methodPtr)(
           v4,
           v4->klass->vtable[5].method);
}


void BattleActionData__AddHealList(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *healdatalist; // x0
  CGThumbnailListItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C5939C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    byte_4C5939C = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (CGThumbnailListItem_o *)&this->fields.healdatalist;
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_healdatalist, (int32_t)v8, v9, v10);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
    if ( !p_healdatalist->klass )
      goto LABEL_11;
  }
  items = healdatalist->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_HealData__Add__;
  ++healdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1C3E7C0(healdatalist, data);
  size = healdatalist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      healdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    healdatalist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void BattleActionData__AddHpDecreaseFuncTargets(
        BattleActionData_o *this,
        int32_t funcType,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  bool IsRelatedHpDecrease; // w0
  System_Action_int__o *v8; // x21

  if ( (byte_4C59385 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_int___);
    sub_1C3E564(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__151_0__);
    byte_4C59385 = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v8 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v8,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__151_0__,
        0);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v8,
        (const MethodInfo_30E4E00 *)Method_BasicHelper_ForEach_int___);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__AddNewMoveToSubMember(
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
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C593A2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__);
    sub_1C3E564(&BattleActionData_MoveToSubMember_TypeInfo);
    byte_4C593A2 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = (System_Collections_Generic_List_object__o *)this->fields.moveToSubMemberList;
  v12 = sub_1C3E7B0(BattleActionData_MoveToSubMember_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 32) = index;
  *(_DWORD *)(v12 + 36) = uniqueId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_BYTE *)(v12 + 40) = isSucceeded;
  if ( !moveToSubMemberList
    || (items = moveToSubMemberList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
        ++moveToSubMemberList->fields._version,
        !items) )
  {
    sub_1C3E7C0(v13, v14);
  }
  size = moveToSubMemberList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      moveToSubMemberList,
      (Il2CppObject *)v12,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    moveToSubMemberList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), v12, v15, v16);
  }
}


void BattleActionData__AddSideEffectAfterAction(
        BattleActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x22
  BattlePerformance_o *v6; // x0
  BattleActionData_array *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattlePerformance_o **v10; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  BattleActionData___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__object__o *_9__343_1; // x21
  Il2CppObject *v17; // x22
  CGThumbnailListItem_o *p__9__343_1; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4C593D8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleActionData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData___);
    sub_1C3E564(&System_Func_BattleActionData__BattleActionData__TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__AddSideEffectAfterAction_b__343_1__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass343_0__AddSideEffectAfterAction_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass343_0_TypeInfo);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C593D8 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass343_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = perf;
  v10 = (BattlePerformance_o **)(v5 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)perf, v8, v9);
  sideEffectList = this->fields.sideEffectList;
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass343_0__AddSideEffectAfterAction_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v14 = BattleActionData___c_TypeInfo;
  v15 = v13;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v14 = BattleActionData___c_TypeInfo;
  }
  _9__343_1 = (System_Func_object__object__o *)v14->static_fields->__9__343_1;
  if ( !_9__343_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleActionData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__343_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleActionData__BattleActionData__TypeInfo);
    System_Func_object__object____ctor(
      _9__343_1,
      v17,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__343_1__,
      0);
    p__9__343_1 = (CGThumbnailListItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__343_1;
    p__9__343_1->klass = (CGThumbnailListItem_c *)_9__343_1;
    sub_1C3E508(p__9__343_1, (int32_t)_9__343_1, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__343_1,
                                                               (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v6 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_object_(
                                v21,
                                (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v6 )
    goto LABEL_15;
  v7 = (BattleActionData_array *)v6;
  if ( v6->fields.m_CancellationTokenSource )
  {
    v6 = *v10;
    if ( *v10 )
    {
      BattlePerformance__addActionData(v6, v7, 0);
      return;
    }
LABEL_15:
    sub_1C3E7C0(v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__AddTransformServant(
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
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *transformServantlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4C593A4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__);
    sub_1C3E564(&BattleActionData_TransformServant_TypeInfo);
    byte_4C593A4 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v11 = sub_1C3E7B0(BattleActionData_TransformServant_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 32) = index;
  *(_DWORD *)(v11 + 36) = uniqueId;
  *(_DWORD *)(v11 + 16) = funcIndex;
  *(_DWORD *)(v11 + 40) = overwriteLimitCount;
  transformServantlist = (System_Collections_Generic_List_object__o *)this->fields.transformServantlist;
  if ( !transformServantlist
    || (items = transformServantlist->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
        ++transformServantlist->fields._version,
        !items) )
  {
    sub_1C3E7C0(transformServantlist, v12);
  }
  size = transformServantlist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      transformServantlist,
      (Il2CppObject *)v11,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    transformServantlist->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v11;
    sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), v11, v13, v14);
  }
}


void BattleActionData__AddUpdateIntervalBuffDict(
        BattleActionData_o *this,
        BattleServantData_o *svtData,
        System_Action_BattleBuffData_BuffData__o *updateAction,
        BattleBuffData_BuffData_array *intervalArray,
        const MethodInfo *method)
{
  const MethodInfo_36EDF7C *v9; // x4
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_object__o *v15; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v16; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v17; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v18; // 0:x1.16

  if ( (byte_4C59388 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4C59388 = 1;
  }
  v16.fields.key = 0;
  v16.fields.value = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)intervalArray, 0) )
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
            (const MethodInfo_33C7980 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v16.fields.key;
      value = v16.fields.value;
      v15 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v12 )
        goto LABEL_12;
      v18.fields.key = key;
      v18.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v12,
        v18,
        (Il2CppObject *)v15,
        (const MethodInfo_33C7760 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v16,
                                                                                                    (const MethodInfo_33C76C8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(IntervalBuffDict_k__BackingField, v10);
  }
}


void BattleActionData__AddUseInFsmFuncParam(
        BattleActionData_o *this,
        UseInFsmFuncParam_o *param,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *useInFsmFuncParamList; // x0
  CGThumbnailListItem_o *p_useInFsmFuncParamList; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C593AB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UseInFsmFuncParam__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UseInFsmFuncParam___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UseInFsmFuncParam__TypeInfo);
    byte_4C593AB = 1;
  }
  if ( param )
  {
    useInFsmFuncParamList = (System_Collections_Generic_List_object__o *)this->fields.useInFsmFuncParamList;
    if ( !useInFsmFuncParamList )
    {
      p_useInFsmFuncParamList = (CGThumbnailListItem_o *)&this->fields.useInFsmFuncParamList;
      v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UseInFsmFuncParam__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UseInFsmFuncParam___ctor__);
      p_useInFsmFuncParamList->klass = (CGThumbnailListItem_c *)v8;
      sub_1C3E508(p_useInFsmFuncParamList, (int32_t)v8, v9, v10);
      useInFsmFuncParamList = (System_Collections_Generic_List_object__o *)p_useInFsmFuncParamList->klass;
      if ( !p_useInFsmFuncParamList->klass )
        goto LABEL_11;
    }
    items = useInFsmFuncParamList->fields._items;
    v12 = Method_System_Collections_Generic_List_UseInFsmFuncParam__Add__;
    ++useInFsmFuncParamList->fields._version;
    if ( !items )
LABEL_11:
      sub_1C3E7C0(useInFsmFuncParamList, param);
    size = useInFsmFuncParamList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        useInFsmFuncParamList,
        (Il2CppObject *)param,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      useInFsmFuncParamList->fields._size = size + 1;
      v14[4] = (Il2CppClass *)param;
      sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)param, (int32_t)method, v3);
    }
  }
}


void BattleActionData__EnableSubstituteBuffSkillFlag(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x20
  BattleActionData___c_c *v4; // x0
  System_Action_object__o *_9__370_0; // x21
  Il2CppObject *v6; // x22
  CGThumbnailListItem_o *p__9__370_0; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v11; // x0
  System_Action_object__o *_9__370_1; // x21
  Il2CppObject *v13; // x22
  CGThumbnailListItem_o *p__9__370_1; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  System_Collections_Generic_List_object__o *v18; // x19
  BattleActionData___c_c *v19; // x0
  System_Action_object__o *_9__370_2; // x20
  Il2CppObject *v21; // x21
  CGThumbnailListItem_o *p__9__370_2; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C593E6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_1C3E564(&Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__370_0__);
    sub_1C3E564(&Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__370_1__);
    sub_1C3E564(&Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__370_2__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C593E6 = 1;
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
    _9__370_0 = (System_Action_object__o *)v4->static_fields->__9__370_0;
    if ( !_9__370_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = BattleActionData___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__370_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__370_0,
        v6,
        Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__370_0__,
        0);
      p__9__370_0 = (CGThumbnailListItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__370_0;
      p__9__370_0->klass = (CGThumbnailListItem_c *)_9__370_0;
      sub_1C3E508(p__9__370_0, (int32_t)_9__370_0, v8, v9);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__370_0,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
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
    _9__370_1 = (System_Action_object__o *)v11->static_fields->__9__370_1;
    if ( !_9__370_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleActionData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__370_1 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        _9__370_1,
        v13,
        Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__370_1__,
        0);
      p__9__370_1 = (CGThumbnailListItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__370_1;
      p__9__370_1->klass = (CGThumbnailListItem_c *)_9__370_1;
      sub_1C3E508(p__9__370_1, (int32_t)_9__370_1, v15, v16);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__370_1,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
  damagedatalist = BattleActionData__get_damagedatalist(this, method);
  if ( damagedatalist )
  {
    v18 = (System_Collections_Generic_List_object__o *)damagedatalist;
    v19 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v19 = BattleActionData___c_TypeInfo;
    }
    _9__370_2 = (System_Action_object__o *)v19->static_fields->__9__370_2;
    if ( !_9__370_2 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattleActionData___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__370_2 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_DamageData__TypeInfo);
      System_Action_object____ctor(
        _9__370_2,
        v21,
        Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__370_2__,
        0);
      p__9__370_2 = (CGThumbnailListItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__370_2;
      p__9__370_2->klass = (CGThumbnailListItem_c *)_9__370_2;
      sub_1C3E508(p__9__370_2, (int32_t)_9__370_2, v23, v24);
    }
    System_Collections_Generic_List_object___ForEach(
      v18,
      (System_Action_T__o *)_9__370_2,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
  }
}


System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *BattleActionData__EnumerateAllBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v8; // x8
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  BattleActionData___c_c *v12; // x0
  System_Func_object__object__o *_9__140_0; // x21
  Il2CppObject *v14; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  BattleActionData___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__object__o *_9__140_1; // x21
  Il2CppObject *v23; // x22
  struct BattleActionData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_4C5937F & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_BattleActionData_BuffData___);
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_List_BattleActionData_BuffData____);
    sub_1C3E564(&Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_SelectMany_List_BattleActionData_BuffData___BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_BattleActionData__List_BattleActionData_BuffData____);
    sub_1C3E564(&System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData__List_BattleActionData_BuffData___TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__EnumerateAllBuffData_b__140_0__);
    sub_1C3E564(&Method_BattleActionData___c__EnumerateAllBuffData_b__140_1__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C5937F = 1;
  }
  v4 = Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___;
  v5 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___ + 7);
  if ( !v5 )
  {
    sub_1C8ECD4(Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8EC78(inited);
  v8 = *(System_Collections_Generic_IEnumerable_TSource__o ***)(v7 + 184);
  buffdatalist = this->fields.buffdatalist;
  v10 = *v8;
  if ( buffdatalist )
    v10 = System_Linq_Enumerable__Concat_object_(
            *v8,
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (const MethodInfo_3116554 *)Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
  sideEffectList = this->fields.sideEffectList;
  if ( sideEffectList )
  {
    v12 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v12 = BattleActionData___c_TypeInfo;
    }
    _9__140_0 = (System_Func_object__object__o *)v12->static_fields->__9__140_0;
    if ( !_9__140_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleActionData___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__140_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_BattleActionData__List_BattleActionData_BuffData___TypeInfo);
      System_Func_object__object____ctor(
        _9__140_0,
        v14,
        Method_BattleActionData___c__EnumerateAllBuffData_b__140_0__,
        0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__140_0 = (struct System_Func_BattleActionData__List_BattleActionData_BuffData___o *)_9__140_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__140_0, (int32_t)_9__140_0, v16, v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
                                                           (System_Func_TSource__TResult__o *)_9__140_0,
                                                           (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_BattleActionData__List_BattleActionData_BuffData____);
    v19 = BasicHelper__ExcludeNull_object_(
            v18,
            (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_List_BattleActionData_BuffData____);
    v20 = BattleActionData___c_TypeInfo;
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v20 = BattleActionData___c_TypeInfo;
    }
    _9__140_1 = (System_Func_object__object__o *)v20->static_fields->__9__140_1;
    if ( !_9__140_1 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleActionData___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__140_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___TypeInfo);
      System_Func_object__object____ctor(
        _9__140_1,
        v23,
        Method_BattleActionData___c__EnumerateAllBuffData_b__140_1__,
        0);
      v24 = BattleActionData___c_TypeInfo->static_fields;
      v24->__9__140_1 = (struct System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___o *)_9__140_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v24->__9__140_1, (int32_t)_9__140_1, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 v21,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__140_1,
                                                                 (const MethodInfo_3133008 *)Method_System_Linq_Enumerable_SelectMany_List_BattleActionData_BuffData___BattleActionData_BuffData___);
    v10 = System_Linq_Enumerable__Concat_object_(
            v10,
            v27,
            (const MethodInfo_3116554 *)Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
  }
  return (System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *)BasicHelper__ExcludeNull_object_(
                                                                                  (System_Collections_Generic_IEnumerable_T__o *)v10,
                                                                                  (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_BattleActionData_BuffData___);
}


void BattleActionData__ExecAction(BattleActionData_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  ;
}


void BattleActionData__ExecUnappliedProcess(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v11; // x0
  System_Func_object__bool__o *_9__141_0; // x21
  Il2CppObject *v13; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Action_object__o *v18; // x21

  if ( (byte_4C59380 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1C3E564(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__ExecUnappliedProcess_b__141_0__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass141_0__ExecUnappliedProcess_b__1__);
    sub_1C3E564(&BattleActionData___c__DisplayClass141_0_TypeInfo);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59380 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass141_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = data;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v11 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v11 = BattleActionData___c_TypeInfo;
    }
    _9__141_0 = (System_Func_object__bool__o *)v11->static_fields->__9__141_0;
    if ( !_9__141_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleActionData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__141_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__141_0, v13, Method_BattleActionData___c__ExecUnappliedProcess_b__141_0__, 0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__141_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__141_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__141_0, (int32_t)_9__141_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__141_0,
                                                           (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v18 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass141_0__ExecUnappliedProcess_b__1__,
      0);
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)v18,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  BattleActionData___c_c *v4; // x0
  System_Func_object__bool__o *_9__175_0; // x20
  Il2CppObject *v6; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C5938D & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_BattleActionData_BaseData___);
    sub_1C3E564(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__175_0__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C5938D = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, 0) )
    return 0;
  v4 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v4 = BattleActionData___c_TypeInfo;
  }
  _9__175_0 = (System_Func_object__bool__o *)v4->static_fields->__9__175_0;
  if ( !_9__175_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleActionData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__175_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__175_0,
      v6,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__175_0__,
      0);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__175_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__175_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__175_0, (int32_t)_9__175_0, v8, v9);
  }
  return BasicHelper__Any_object__51261116(
           (System_Object_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__175_0,
           (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_BattleActionData_BaseData___);
}


bool BattleActionData__ExistSideEffect(BattleActionData_o *this, int32_t targetType, const MethodInfo *method)
{
  System_Collections_ICollection_o *SideEffectList; // x0

  SideEffectList = (System_Collections_ICollection_o *)BattleActionData__getSideEffectList(this, targetType, method);
  return !BasicHelper__IsNullOrEmpty(SideEffectList, 0);
}


bool BattleActionData__ExistsAddableAfterAction(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
{
  struct BattleActionData_o *afterActionData; // x8
  BattleServantData_o *ServantData; // x0

  afterActionData = this->fields.afterActionData;
  if ( !afterActionData )
    return 0;
  if ( !afterActionData->fields.isPreAfterActCheckDead )
    return 1;
  if ( !data )
    sub_1C3E7C0(this, 0);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0);
}


System_Int32_array *BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4C593C5 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    byte_4C593C5 = 1;
  }
  return (System_Int32_array *)sub_1C3E60C(int___TypeInfo, 0);
}


BattleActionData_DamageData_array *BattleActionData__GetDamageArrayDistinctIndex(
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
  const MethodInfo *v13; // x3
  BattleActionData_DamageData_o *v14; // x1
  System_Func_object__bool__o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C59396 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_BattleActionData_DamageData___);
    sub_1C3E564(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass191_0__GetDamageArrayDistinctIndex_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass191_0_TypeInfo);
    byte_4C59396 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v6);
  if ( !DamageList )
    goto LABEL_17;
  v9 = DamageList;
  if ( SLODWORD(DamageList->max_length) >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = sub_1C3E7B0(BattleActionData___c__DisplayClass191_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      if ( v10 >= LODWORD(v9->max_length) )
        sub_1C3E7C8(DamageList, v8);
      if ( !v11 )
        break;
      v14 = v9->m_Items[v10];
      *(_QWORD *)(v11 + 16) = v14;
      sub_1C3E508((CGThumbnailListItem_o *)(v11 + 16), (int32_t)v14, v12, v13);
      v15 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_DamageData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v15,
        (Il2CppObject *)v11,
        Method_BattleActionData___c__DisplayClass191_0__GetDamageArrayDistinctIndex_b__0__,
        0);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_object_(
                                                          (System_Collections_Generic_List_T__o *)v5,
                                                          (System_Func_T__bool__o *)v15,
                                                          (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_BattleActionData_DamageData___);
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v8,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v8;
          sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v8, v16, v17);
        }
      }
      if ( (__int64)++v10 >= SLODWORD(v9->max_length) )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3E7C0(DamageList, v8);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BattleActionData__GetDamageTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v5; // x1
  __int64 v6; // x19
  const MethodInfo *v7; // x1
  unsigned int i; // w22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C593C4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__);
    byte_4C593C4 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                  this,
                                                                  *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v6 = sub_1C3E60C(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v7)) == 0) )
  {
    sub_1C3E7C0(damagedatalist, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    damagedatalist,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields._current )
      sub_1C3E7C0(v9, v10);
    if ( !v6 )
      sub_1C3E7C0(v9, v10);
    if ( i >= *(_DWORD *)(v6 + 24) )
      sub_1C3E7C8(v9, v10);
    v11 = v6 + 4LL * (int)i;
    *(_DWORD *)(v11 + 32) = *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return (System_Int32_array *)v6;
}


System_Int32_array *BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4C593C6 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    byte_4C593C6 = 1;
  }
  return (System_Int32_array *)sub_1C3E60C(int___TypeInfo, 0);
}


BattleActionData_DisplayMessageData_array *BattleActionData__GetDirectDisplayMessageArray(
        BattleActionData_o *this,
        int32_t num,
        ParseBattleMessage_o *parser,
        const MethodInfo *method)
{
  int32_t v7; // w20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4C593B4 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_int___);
    sub_1C3E564(&Method_DataManager_GetMaster_BattleMessageMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C593B4 = 1;
  }
  v7 = BasicHelper__IndexValue_int__51281584(
         (System_Collections_Generic_List_T__o *)this->fields.directDisplayMessageIdList,
         num - 1,
         -1,
         (const MethodInfo_30E7EB0 *)Method_BasicHelper_IndexValue_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v9);
  return BattleMessageMaster__GetDisplayMessageArray((BattleMessageMaster_o *)Master_object, v7, parser, 0);
}


BattleActionData_BaseData_array *BattleActionData__GetExecOrderArray(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_List_object__o *v6; // x23
  BattleActionData___c_c *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleActionData___c_c **v11; // x21
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  System_Action_object__o *v14; // x24
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x19
  System_Action_object__o *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x19
  System_Comparison_T__o *_9__142_2; // x20
  Il2CppObject *v20; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C59381 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_1C3E564(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__GetExecOrderArray_b__142_2__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass142_0__GetExecOrderArray_b__0__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass142_0__GetExecOrderArray_b__1__);
    sub_1C3E564(&BattleActionData___c__DisplayClass142_0_TypeInfo);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59381 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass142_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = v6;
  v11 = (BattleActionData___c_c **)(v5 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v12);
  v14 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass142_0__GetExecOrderArray_b__0__,
    0);
  BasicHelper__ForEach_object_(
    BuffList,
    (System_Action_T__o *)v14,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v15);
  v17 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass142_0__GetExecOrderArray_b__1__,
    0);
  BasicHelper__ForEach_object_(
    HealList,
    (System_Action_T__o *)v17,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  v7 = BattleActionData___c_TypeInfo;
  v18 = *(System_Collections_Generic_List_object__o **)(v5 + 16);
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v7 = BattleActionData___c_TypeInfo;
  }
  _9__142_2 = (System_Comparison_T__o *)v7->static_fields->__9__142_2;
  if ( !_9__142_2 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActionData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v7->static_fields->__9;
    _9__142_2 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_BattleActionData_BaseData__TypeInfo);
    System_Comparison_object____ctor(_9__142_2, v20, Method_BattleActionData___c__GetExecOrderArray_b__142_2__, 0);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__142_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__142_2;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__142_2, (int32_t)_9__142_2, v22, v23);
  }
  if ( !v18
    || (System_Collections_Generic_List_object___Sort_58421028(
          v18,
          _9__142_2,
          (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v7 = *v11) == 0) )
  {
LABEL_13:
    sub_1C3E7C0(v7, v8);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)v7,
                                              (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleActionData_BaseData_array *BattleActionData__GetExecOrderArrayEx(
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
  System_Comparison_T__o *_9__143_0; // x20
  Il2CppObject *v17; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C59382 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__GetExecOrderArrayEx_b__143_0__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59382 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v8);
  if ( !v7 )
    sub_1C3E7C0(BuffList, v10);
  System_Collections_Generic_List_object___AddRange(
    v7,
    BuffList,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v11);
  System_Collections_Generic_List_object___AddRange(
    v7,
    HealList,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v13);
  System_Collections_Generic_List_object___AddRange(
    v7,
    DamageList,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v15 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v15 = BattleActionData___c_TypeInfo;
    }
    _9__143_0 = (System_Comparison_T__o *)v15->static_fields->__9__143_0;
    if ( !_9__143_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattleActionData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__143_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_BattleActionData_BaseData__TypeInfo);
      System_Comparison_object____ctor(_9__143_0, v17, Method_BattleActionData___c__GetExecOrderArrayEx_b__143_0__, 0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__143_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__143_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v19, v20);
    }
    System_Collections_Generic_List_object___Sort_58421028(
      v7,
      _9__143_0,
      (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleServantData_array *BattleActionData__GetFuncSideEffectTargetServants(
        BattleActionData_o *this,
        BattleData_o *bData,
        bool isMainOnly,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v15; // x22
  System_Func_int__bool__o *v16; // x23
  __int64 v17; // x1
  __int64 targetId; // x0
  System_Func_T__TResult__o *v19; // x21
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0

  if ( (byte_4C59375 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_BattleServantData___);
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C3E564(&Method_BasicHelper_IndexValue_int____78190416);
    sub_1C3E564(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__124_0__);
    sub_1C3E564(&Method_BattleData_getServantData__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    byte_4C59375 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, 0) )
  {
    v10 = Method_System_Array_Empty_BattleServantData___;
    v11 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v11 )
    {
      sub_1C8ECD4(Method_System_Array_Empty_BattleServantData___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8EC78(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C8EC78(inited);
    return **(BattleServantData_array ***)(v13 + 184);
  }
  else
  {
    if ( isMainOnly )
    {
      v15 = sub_1C3E60C(int___TypeInfo, 1);
      v16 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v16,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__124_0__,
        0);
      if ( BasicHelper__Any_int__51260304(
             targetIds,
             (System_Func_T__bool__o *)v16,
             (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928) )
      {
        targetId = (unsigned int)this->fields.targetId;
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_30E7F2C *)Method_BasicHelper_IndexValue_int____78190416);
      }
      if ( !v15 )
        sub_1C3E7C0(targetId, v17);
      if ( !*(_DWORD *)(v15 + 24) )
        sub_1C3E7C8(targetId, v17);
      targetIds = (System_Int32_array *)v15;
      *(_DWORD *)(v15 + 32) = targetId;
    }
    v19 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(v19, (Il2CppObject *)bData, Method_BattleData_getServantData__, 0);
    v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                           (System_Func_TSource__TResult__o *)v19,
                                                           (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v21 = BasicHelper__ExcludeNull_object_(
            v20,
            (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                        (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
}


System_Int32_array *BattleActionData__GetFuncTargetIds(
        BattleActionData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  System_Action_object__o *v13; // x23
  const MethodInfo *v14; // x2
  BattleActionData_BuffData_array *BuffList; // x0
  BattleActionData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x22
  System_Func_object__bool__o *_9__316_1; // x23
  Il2CppObject *v19; // x24
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_T__o *v23; // x22
  System_Action_object__o *v24; // x23
  const MethodInfo *v25; // x2
  BattleActionData_HealData_array *HealList; // x0
  BattleActionData___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  System_Func_object__bool__o *_9__316_3; // x20
  Il2CppObject *v30; // x22
  struct BattleActionData___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_T__o *v34; // x19
  System_Action_object__o *v35; // x20

  if ( (byte_4C593CA & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_DamageData___);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_1C3E564(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__GetFuncTargetIds_b__316_1__);
    sub_1C3E564(&Method_BattleActionData___c__GetFuncTargetIds_b__316_3__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass316_0__GetFuncTargetIds_b__0__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass316_0__GetFuncTargetIds_b__2__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass316_0__GetFuncTargetIds_b__4__);
    sub_1C3E564(&BattleActionData___c__DisplayClass316_0_TypeInfo);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C593CA = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass316_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v5 )
    sub_1C3E7C0(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v11);
  v13 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_DamageData__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass316_0__GetFuncTargetIds_b__0__,
    0);
  BasicHelper__ForEach_object_(
    DamageList,
    (System_Action_T__o *)v13,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = BattleActionData__getBuffList(this, index, v14);
  v16 = BattleActionData___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v16 = BattleActionData___c_TypeInfo;
  }
  _9__316_1 = (System_Func_object__bool__o *)v16->static_fields->__9__316_1;
  if ( !_9__316_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleActionData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__316_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__316_1, v19, Method_BattleActionData___c__GetFuncTargetIds_b__316_1__, 0);
    static_fields = (CGThumbnailListItem_o *)BattleActionData___c_TypeInfo->static_fields;
    static_fields[1].klass = (CGThumbnailListItem_c *)_9__316_1;
    sub_1C3E508(static_fields + 1, (int32_t)_9__316_1, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v17,
                                                         (System_Func_TSource__bool__o *)_9__316_1,
                                                         (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v24 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass316_0__GetFuncTargetIds_b__2__,
    0);
  BasicHelper__ForEach_object_(
    v23,
    (System_Action_T__o *)v24,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v25);
  v27 = BattleActionData___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v27 = BattleActionData___c_TypeInfo;
  }
  _9__316_3 = (System_Func_object__bool__o *)v27->static_fields->__9__316_3;
  if ( !_9__316_3 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BattleActionData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__316_3 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_HealData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__316_3, v30, Method_BattleActionData___c__GetFuncTargetIds_b__316_3__, 0);
    v31 = BattleActionData___c_TypeInfo->static_fields;
    v31->__9__316_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__316_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v31->__9__316_3, (int32_t)_9__316_3, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v28,
                                                         (System_Func_TSource__bool__o *)_9__316_3,
                                                         (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v35 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v35,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass316_0__GetFuncTargetIds_b__4__,
    0);
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)v35,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *BattleActionData__GetFunctionIndexArrayNearByCuriousFunc(
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
  intptr_t *v14; // x8
  System_Func_TSource__bool__o *v16; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C593CE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Nullable_int__get_HasValue__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass324_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass324_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass324_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__);
    sub_1C3E564(&BattleActionData___c__DisplayClass324_0_TypeInfo);
    byte_4C593CE = 1;
  }
  v7 = sub_1C3E7B0(BattleActionData___c__DisplayClass324_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0);
  if ( !v7 )
    sub_1C3E7C0(FuncIndexForSplitFuncSequence, v11);
  *(System_Nullable_int__o *)(v7 + 16) = FuncIndexForSplitFuncSequence;
  if ( !FuncIndexForSplitFuncSequence.fields.hasValue )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v11);
  if ( effectTiming == 2 )
  {
    v13 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    v14 = &Method_BattleActionData___c__DisplayClass324_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v13 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    v14 = &Method_BattleActionData___c__DisplayClass324_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v13 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
  v14 = &Method_BattleActionData___c__DisplayClass324_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v16 = (System_Func_TSource__bool__o *)v13;
  System_Func_int__bool____ctor(v13, (Il2CppObject *)v7, *v14, 0);
  v17 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v16,
          (const MethodInfo_313FD5C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BattleActionData__GetMaxSideEffectCountByTarget(
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__int__o **v13; // x22
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Action_object__o *v16; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4C593D1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData__ForEach__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass330_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass330_0_TypeInfo);
    byte_4C593D1 = 1;
  }
  v7 = sub_1C3E7B0(BattleActionData___c__DisplayClass330_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = v8;
  v13 = (System_Collections_Generic_Dictionary_int__int__o **)(v7 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v8, v11, v12);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(
      this,
      (System_Collections_Generic_Dictionary_int__int__o **)(v7 + 16),
      v14);
    sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList;
    v16 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass330_0__GetMaxSideEffectCountByTarget_b__0__,
      0);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_object___ForEach(
      sideEffectList,
      (System_Action_T__o *)v16,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v9 = *v13;
  if ( !*v13 )
LABEL_13:
    sub_1C3E7C0(v9, v10);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v9,
         (const MethodInfo_3403638 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v9 = *v13;
    if ( *v13 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v9,
                 (const MethodInfo_3403798 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
    }
    goto LABEL_13;
  }
  return 0;
}


int32_t BattleActionData__GetMaxSideEffectCountByTarget_45678320(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_Dictionary_int__int__o *v6; // x23
  System_Collections_Generic_Dictionary_int__int__o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_int__int__o **v11; // x21
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  System_Action_object__o *v14; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4C593D3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass332_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass332_0_TypeInfo);
    byte_4C593D3 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass332_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v6;
  v11 = (System_Collections_Generic_Dictionary_int__int__o **)(v5 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v12);
  v14 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass332_0__GetMaxSideEffectCountByTarget_b__0__,
    0);
  BasicHelper__ForEach_object_(
    SideEffectList,
    (System_Action_T__o *)v14,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData___);
  v7 = *(System_Collections_Generic_Dictionary_int__int__o **)(v5 + 16);
  if ( !v7 )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v7,
         (const MethodInfo_3403638 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v7 = *v11;
    if ( *v11 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v7,
                 (const MethodInfo_3403798 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
    }
LABEL_9:
    sub_1C3E7C0(v7, v8);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData__GetOptionalBattleEffectId(
        BattleActionData_o *this,
        int32_t effectIndex,
        int32_t resultOnGetFailed,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *OptionalBattleEffectIdList; // x0

  if ( (byte_4C593CF & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_int___);
    byte_4C593CF = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__51281584(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_30E7EB0 *)Method_BasicHelper_IndexValue_int___);
}


System_Collections_Generic_List_int__o *BattleActionData__GetOptionalBattleEffectIdList(
        BattleActionData_o *this,
        System_Collections_Generic_List_int__o *resultOnGetFailed,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo && (SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0)) != 0 )
    return SkillLvEntity__GetOptionalBattleEffectIdList(SelfSkillLvEntity, 0);
  else
    return resultOnGetFailed;
}


int32_t BattleActionData__GetTarget(BattleActionData_o *this, int32_t funcIdx, const MethodInfo *method)
{
  return this->fields.targetId;
}


int32_t BattleActionData__GetTargetOfTreasureDevice(
        BattleActionData_o *this,
        BattleActorControl_o *battleActorControl,
        BattleActorControl_o *mainActorControl,
        const MethodInfo *method)
{
  if ( !battleActorControl || !mainActorControl )
    sub_1C3E7C0(this, battleActorControl);
  if ( battleActorControl->fields.uniqueID == mainActorControl->fields.uniqueID )
    return 1;
  if ( mainActorControl->fields.isEnemy != battleActorControl->fields.isEnemy )
    return 3;
  return 2;
}


int32_t BattleActionData__GetTargetSideFunctionRange(BattleActionData_o *this, bool isEnemy, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 508;
  if ( isEnemy )
    v3 = 504;
  return *(_DWORD *)((char *)&this->klass + v3);
}


System_Collections_Generic_List_BattleActionData_TransformServant__o *BattleActionData__GetTransformServantList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  BattleActionData__TryInitTransformServant(this, method);
  return this->fields.transformServantlist;
}


void BattleActionData__InitMoveToSubMemberList(BattleActionData_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_moveToSubMemberList; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C593A3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    byte_4C593A3 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = (CGThumbnailListItem_o *)&this->fields.moveToSubMemberList;
    v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    p_moveToSubMemberList->klass = (CGThumbnailListItem_c *)v4;
    sub_1C3E508(p_moveToSubMemberList, (int32_t)v4, v5, v6);
  }
}


bool BattleActionData__IsBattleScript(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 9;
}


bool BattleActionData__IsExecInActionData(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 8;
}


bool BattleActionData__IsGimmick(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.gimmickData != 0;
}


bool BattleActionData__IsIgnoreWhiteFadeOnSkillMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0

  skillInfo = this->fields.skillInfo;
  return skillInfo
      && (SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0)) != 0
      && SkillLvEntity__IsIgnoreWhiteFade(SelfSkillLvEntity, 0);
}


bool BattleActionData__IsOptionalBattleEffectIdAvaliable(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleActionData__GetOptionalBattleEffectIdList(this, 0, v2) != 0;
}


bool BattleActionData__IsSelectedAddTargetIndex(
        BattleActionData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  return !skillInfo || BattleSkillInfoData__IsSelectedAddTargetIndex(skillInfo, dataVal, 0);
}


bool BattleActionData__IsUpdateShiftHp(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._ShiftGauge_k__BackingField == 0;
}


bool BattleActionData__IsUpdateView(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 7;
}


bool BattleActionData__IsWaitCond(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 6;
}


BattleActionData_o *BattleActionData__MakeSideEffectActionData(
        BattleActionData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4C593D7 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593D7 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, v6);
  if ( !v5 )
    sub_1C3E7C0(v7, v8);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)&this->fields.actorId;
  BattleActionData__addSideEffectActionData(this, (BattleActionData_o *)v5, type, v9);
  return (BattleActionData_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleActionData__MakeSideEffectActionData_45680328(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_1C3E7C0(0, v6);
  result->fields.targetId = overwriteTargetId;
  return result;
}


void BattleActionData__OverwirteFuncIndex(
        BattleActionData_o *this,
        int32_t overwriteFuncIndex,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x21
  System_Action_object__o *v9; // x22
  System_Collections_Generic_List_object__o *healdatalist; // x21
  System_Action_object__o *v11; // x22
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  System_Collections_Generic_List_object__o *v13; // x19
  System_Action_object__o *v14; // x21

  if ( (byte_4C593E7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass371_0__OverwirteFuncIndex_b__0__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass371_0__OverwirteFuncIndex_b__1__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass371_0__OverwirteFuncIndex_b__2__);
    sub_1C3E564(&BattleActionData___c__DisplayClass371_0_TypeInfo);
    byte_4C593E7 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass371_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_DWORD *)(v5 + 16) = overwriteFuncIndex;
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v9 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass371_0__OverwirteFuncIndex_b__0__,
      0);
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)v9,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v11 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_HealData__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass371_0__OverwirteFuncIndex_b__1__,
      0);
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)v11,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
  damagedatalist = BattleActionData__get_damagedatalist(this, v7);
  if ( damagedatalist )
  {
    v13 = (System_Collections_Generic_List_object__o *)damagedatalist;
    v14 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_DamageData__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass371_0__OverwirteFuncIndex_b__2__,
      0);
    System_Collections_Generic_List_object___ForEach(
      v13,
      (System_Action_T__o *)v14,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
  }
}


void BattleActionData__PreActionProcess(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *v11; // x20
  BattleActionData___c_c *v12; // x8
  System_Func_object__bool__o *_9__139_0; // x21
  Il2CppObject *v14; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  BattleActionData___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__int__o *_9__139_1; // x21
  Il2CppObject *v22; // x22
  struct BattleActionData___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_T__o *v26; // x20
  System_Action_object__o *v27; // x21

  if ( (byte_4C5937E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_BattleActionData_BuffData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1C3E564(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__PreActionProcess_b__139_0__);
    sub_1C3E564(&Method_BattleActionData___c__PreActionProcess_b__139_1__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass139_0__PreActionProcess_b__2__);
    sub_1C3E564(&BattleActionData___c__DisplayClass139_0_TypeInfo);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C5937E = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass139_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = data;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  if ( !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v11 = BattleActionData__EnumerateAllBuffData(this, v10);
    v12 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v12 = BattleActionData___c_TypeInfo;
    }
    _9__139_0 = (System_Func_object__bool__o *)v12->static_fields->__9__139_0;
    if ( !_9__139_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleActionData___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__139_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__139_0, v14, Method_BattleActionData___c__PreActionProcess_b__139_0__, 0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__139_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__139_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__139_0, (int32_t)_9__139_0, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v11,
            (System_Func_TSource__bool__o *)_9__139_0,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v19 = BattleActionData___c_TypeInfo;
    v20 = v18;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v19 = BattleActionData___c_TypeInfo;
    }
    _9__139_1 = (System_Func_object__int__o *)v19->static_fields->__9__139_1;
    if ( !_9__139_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattleActionData___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__139_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(_9__139_1, v22, Method_BattleActionData___c__PreActionProcess_b__139_1__, 0);
      v23 = BattleActionData___c_TypeInfo->static_fields;
      v23->__9__139_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__139_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v23->__9__139_1, (int32_t)_9__139_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                           v20,
                                                           (System_Func_TSource__TKey__o *)_9__139_1,
                                                           (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_BattleActionData_BuffData__int___);
    v27 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass139_0__PreActionProcess_b__2__,
      0);
    BasicHelper__ForEach_object_(
      v26,
      (System_Action_T__o *)v27,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x19
  BattleActionData___c_c *v4; // x0
  System_Action_object__o *_9__199_0; // x20
  Il2CppObject *v6; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C5939A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_1C3E564(&Method_BattleActionData___c__ResetAllCheckDead_b__199_0__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C5939A = 1;
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
    _9__199_0 = (System_Action_object__o *)v4->static_fields->__9__199_0;
    if ( !_9__199_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = BattleActionData___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__199_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(_9__199_0, v6, Method_BattleActionData___c__ResetAllCheckDead_b__199_0__, 0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__199_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__199_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__199_0, (int32_t)_9__199_0, v8, v9);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__199_0,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
}


BattleActionData_o *BattleActionData__SeekLastActionData(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_o *afterActionData; // x8

  afterActionData = this;
  do
  {
    if ( !afterActionData )
      sub_1C3E7C0(this, method);
    this = afterActionData;
    afterActionData = afterActionData->fields.afterActionData;
  }
  while ( afterActionData );
  return this;
}


void BattleActionData__SetAfterChangeField(
        BattleActionData_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        DataVals_o *baseVals,
        BattleFieldEnvironmentData_o *fieldEnvData,
        AddBgmArgument_o *addBgmArg,
        const MethodInfo *method)
{
  BattleActionData_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleActionData_AfterChangeField_o *ChangeField_k__BackingField; // x0

  v10 = this;
  if ( (byte_4C593B5 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_AfterChangeField_TypeInfo);
    this = (BattleActionData_o *)sub_1C3E564(&BattleActionData_AfterChangeTakeOverField_TypeInfo);
    byte_4C593B5 = 1;
  }
  if ( !baseVals )
    goto LABEL_13;
  this = (BattleActionData_o *)DataVals__isParam(baseVals, 107, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = sub_1C3E7B0(BattleActionData_AfterChangeTakeOverField_TypeInfo);
    BattleActionData_AfterChangeTakeOverField___ctor(
      (BattleActionData_AfterChangeTakeOverField_o *)v13,
      fieldChange,
      fieldEnvData,
      v14);
    goto LABEL_9;
  }
  if ( !fieldChange )
LABEL_13:
    sub_1C3E7C0(this, fieldChange);
  if ( fieldChange->fields.bgId < 1 )
    goto LABEL_10;
  v13 = sub_1C3E7B0(BattleActionData_AfterChangeField_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_QWORD *)(v13 + 32) = fieldChange;
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 32), (int32_t)fieldChange, v17, v18);
LABEL_9:
  v10->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->fields._ChangeField_k__BackingField, v13, v15, v16);
LABEL_10:
  ChangeField_k__BackingField = v10->fields._ChangeField_k__BackingField;
  if ( ChangeField_k__BackingField )
  {
    ChangeField_k__BackingField->fields.addBgmArg = addBgmArg;
    sub_1C3E508((CGThumbnailListItem_o *)&ChangeField_k__BackingField->fields.addBgmArg, (int32_t)addBgmArg, v11, v12);
  }
}


void BattleActionData__SetEntryAllAtOnceServantData(
        BattleActionData_o *this,
        BattleActionData_EntryAllAtOnceServantData_o *entryServant,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *entryAllAtOnceServantDataList; // x0
  CGThumbnailListItem_o *p_entryAllAtOnceServantDataList; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C593E5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__TypeInfo);
    byte_4C593E5 = 1;
  }
  entryAllAtOnceServantDataList = (System_Collections_Generic_List_object__o *)this->fields.entryAllAtOnceServantDataList;
  if ( !entryAllAtOnceServantDataList )
  {
    p_entryAllAtOnceServantDataList = (CGThumbnailListItem_o *)&this->fields.entryAllAtOnceServantDataList;
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData___ctor__);
    p_entryAllAtOnceServantDataList->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_entryAllAtOnceServantDataList, (int32_t)v8, v9, v10);
    entryAllAtOnceServantDataList = (System_Collections_Generic_List_object__o *)p_entryAllAtOnceServantDataList->klass;
    if ( !p_entryAllAtOnceServantDataList->klass )
      goto LABEL_9;
  }
  items = entryAllAtOnceServantDataList->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__Add__;
  ++entryAllAtOnceServantDataList->fields._version;
  if ( !items )
LABEL_9:
    sub_1C3E7C0(entryAllAtOnceServantDataList, entryServant);
  size = entryAllAtOnceServantDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      entryAllAtOnceServantDataList,
      (Il2CppObject *)entryServant,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    entryAllAtOnceServantDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)entryServant;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)entryServant, (int32_t)method, v3);
  }
}


void BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  System_Func_int__bool__o *v5; // x21
  int32_t targetId; // w0

  if ( (byte_4C59374 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_BasicHelper_IndexValue_int____78190416);
    sub_1C3E564(&Method_BattleActionData__SetFirstAtkMainTargetId_b__123_0__);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    byte_4C59374 = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v5 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__123_0__,
      0);
    if ( BasicHelper__Any_int__51260304(
           targetIds,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_30E7F2C *)Method_BasicHelper_IndexValue_int____78190416);
    }
    this->fields._FirstAtkMainTargetId_k__BackingField = targetId;
  }
}


void BattleActionData__SetFuncDamageData(
        BattleActionData_o *this,
        BattleActionData_DamageData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x5

  if ( !vals || !data )
    sub_1C3E7C0(this, data);
  BattleActionData_DamageData__SetEffectFlipProc(data, vals->fields.funcEnt, (const MethodInfo *)vals);
  BattleActionData__setDamageData(this, data, vals, 0, 0, v7);
}


void BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  BattleActionData___c_c *v6; // x0
  System_Func_object__int__o *_9__144_0; // x21
  Il2CppObject *v8; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BattleActionData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  System_Action_object__o *_9__144_2; // x20
  Il2CppObject *v19; // x21
  struct BattleActionData___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C59383 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    sub_1C3E564(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData_BaseData__int__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__144_0__);
    sub_1C3E564(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__144_2__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass144_0__SetFuncSideEffectTrigger_b__1__);
    sub_1C3E564(&BattleActionData___c__DisplayClass144_0_TypeInfo);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59383 = 1;
  }
  v3 = sub_1C3E7B0(BattleActionData___c__DisplayClass144_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v4);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, 0) )
  {
    v6 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    _9__144_0 = (System_Func_object__int__o *)v6->static_fields->__9__144_0;
    if ( !_9__144_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__144_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleActionData_BaseData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__144_0,
        v8,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__144_0__,
        0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__144_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__144_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__144_0, (int32_t)_9__144_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Max_object_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__144_0,
            (const MethodInfo_3127E7C *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v3 )
      sub_1C3E7C0(v12, v13);
    *(_DWORD *)(v3 + 16) = v12;
    v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v3,
      Method_BattleActionData___c__DisplayClass144_0__SetFuncSideEffectTrigger_b__1__,
      0);
    v15 = System_Linq_Enumerable__Where_object_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v16 = BattleActionData___c_TypeInfo;
    v17 = (System_Collections_Generic_IEnumerable_T__o *)v15;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v16 = BattleActionData___c_TypeInfo;
    }
    _9__144_2 = (System_Action_object__o *)v16->static_fields->__9__144_2;
    if ( !_9__144_2 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleActionData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__144_2 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(_9__144_2, v19, Method_BattleActionData___c__SetFuncSideEffectTrigger_b__144_2__, 0);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__144_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__144_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v20->__9__144_2, (int32_t)_9__144_2, v21, v22);
    }
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)_9__144_2,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void BattleActionData__SetFuncTargetAllDead(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
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
  System_Func_object__bool__o *_9__156_1; // x21
  Il2CppObject *v17; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C59386 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_BattleServantData____78187728);
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C3E564(&Method_BattleData_getServantData__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C3E564(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C3E564(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__SetFuncTargetAllDead_b__156_1__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass156_0__SetFuncTargetAllDead_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass156_0_TypeInfo);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59386 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass156_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0), !v5) )
    sub_1C3E7C0(isEnemyID, v7);
  *(_BYTE *)(v5 + 16) = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v9 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(v9, (Il2CppObject *)data, Method_BattleData_getServantData__, 0);
  v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v9,
                                                         (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v11 = BasicHelper__ExcludeNull_object_(
          v10,
          (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass156_0__SetFuncTargetAllDead_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0) )
  {
    v15 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v15 = BattleActionData___c_TypeInfo;
    }
    _9__156_1 = (System_Func_object__bool__o *)v15->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattleActionData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__156_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__156_1, v17, Method_BattleActionData___c__SetFuncTargetAllDead_b__156_1__, 0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__156_1 = (struct System_Func_BattleServantData__bool__o *)_9__156_1;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__156_1, (int32_t)_9__156_1, v19, v20);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_object__51261116(
                                                           v14,
                                                           (System_Func_T__bool__o *)_9__156_1,
                                                           (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_BattleServantData____78187728);
  }
}


void BattleActionData__SetGimmickData(
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

  if ( (byte_4C593B1 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_GimmickData_TypeInfo);
    byte_4C593B1 = 1;
  }
  v11 = (Il2CppObject *)sub_1C3E7B0(BattleActionData_GimmickData_TypeInfo);
  System_Object___ctor(v11, 0);
  this->fields.gimmickData = (struct BattleActionData_GimmickData_o *)v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_1C3E508((CGThumbnailListItem_o *)p_gimmickData, (int32_t)v11, v13, v14);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v18->fields.indexArray = indexArray;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->fields.indexArray, (int32_t)indexArray, v16, v17);
  v18 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v18->fields.startVoiceIdArray = startArray,
        sub_1C3E508((CGThumbnailListItem_o *)&v18->fields.startVoiceIdArray, (int32_t)startArray, v19, v20),
        (v18 = *p_gimmickData) == 0)
    || (v18->fields.resultVoiceIdArray = resultArray,
        sub_1C3E508((CGThumbnailListItem_o *)&v18->fields.resultVoiceIdArray, (int32_t)resultArray, v21, v22),
        (v18 = *p_gimmickData) == 0) )
  {
LABEL_8:
    sub_1C3E7C0(v18, v15);
  }
  v18->fields.animationTypes = types;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->fields.animationTypes, (int32_t)types, v23, v24);
}


void BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  BattleActionData___c_c *v6; // x0
  System_Action_object__o *_9__145_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C59384 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_1C3E564(&Method_BattleActionData___c__SetPopupOnce_b__145_0__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59384 = 1;
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
    _9__145_0 = (System_Action_object__o *)v6->static_fields->__9__145_0;
    if ( !_9__145_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__145_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(_9__145_0, v8, Method_BattleActionData___c__SetPopupOnce_b__145_0__, 0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__145_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__145_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__145_0, (int32_t)_9__145_0, v10, v11);
    }
    BasicHelper__ForEach_object_(
      v5,
      (System_Action_T__o *)_9__145_0,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void BattleActionData__SetRelatedNotSkillSkip(BattleActionData_o *this, const MethodInfo *method)
{
  do
  {
    this->fields._IsNotSkillSkip_k__BackingField = 1;
    this = this->fields.afterActionData;
  }
  while ( this );
}


void BattleActionData__SetShiftGauge(
        BattleActionData_o *this,
        BattleActionData_BaseShiftGaugeData_o *shiftGauge,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ShiftGauge_k__BackingField = shiftGauge;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ShiftGauge_k__BackingField,
    (int32_t)shiftGauge,
    (int32_t)method,
    v3);
}


void BattleActionData__SetSideEffectCountByTarget(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_int__int__o **dicTarget,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_int__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_int__o *v10; // x22
  System_Collections_Generic_List_int__o **v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x22
  __int64 v15; // x1
  int32_t current; // w20
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+0h] [xbp-80h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C593D2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass331_0__SetSideEffectCountByTarget_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass331_0_TypeInfo);
    byte_4C593D2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  value = 0;
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass331_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v5 + 24) = v10;
  v11 = (System_Collections_Generic_List_int__o **)(v5 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v10, v12, v13);
  v14 = sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v14,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass331_0__SetSideEffectCountByTarget_b__0__,
    0);
  if ( !v14
    || ((*(void (__fastcall **)(_QWORD, _QWORD))(v14 + 24))(*(_QWORD *)(v14 + 64), *(_QWORD *)(v14 + 40)),
        (v6 = *v11) == 0) )
  {
LABEL_14:
    sub_1C3E7C0(v6, v7);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    v6,
    (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v18;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_1C3E7C0(0, v15);
    current = v20.fields._current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v20.fields._current,
      &value,
      (const MethodInfo_340501C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_1C3E7C0(0, v17);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void BattleActionData__SetState(BattleActionData_o *this, int32_t s, const MethodInfo *method)
{
  this->fields.state = s;
}


void BattleActionData__SetTreasureDvcAfterChangeBgm(
        BattleActionData_o *this,
        BattleBuffData_ChangeBgmData_o *changeBgm,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C593B6 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
    byte_4C593B6 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 32) = changeBgm;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)changeBgm, v6, v7);
  this->fields._TdAfterChangeBgm_k__BackingField = (struct BattleActionData_TreasureDvcAfterChangeBgm_o *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField, v5, v8, v9);
}


void BattleActionData__SetTypeEnemyCutIn(BattleActionData_o *this, int32_t effectType, const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4C593BF & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593BF = 1;
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
    v6 = 44;
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
    v6 = 40;
  }
  this->fields.type = *(int32_t *)((char *)&v5->static_fields->TYPE_DEAD + v6);
}


BattleActionData_o *BattleActionData__SetWaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *cond,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = cond;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._WaitCond_k__BackingField, (int32_t)cond, (int32_t)method, v3);
  return this;
}


bool BattleActionData__TryGetChangeModelData(
        BattleActionData_o *this,
        BattleActionData_ChangeModelActionData_o **changeModelActData,
        int32_t funcTargetId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  bool IsNullOrEmpty; // w0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x1
  struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *ChangeModelList_k__BackingField; // x20
  System_Func_object__bool__o *v15; // x21

  if ( (byte_4C593AE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_ChangeModelActionData___);
    sub_1C3E564(&System_Func_BattleActionData_ChangeModelActionData__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass251_0__TryGetChangeModelData_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass251_0_TypeInfo);
    byte_4C593AE = 1;
  }
  v7 = sub_1C3E7B0(BattleActionData___c__DisplayClass251_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_DWORD *)(v7 + 16) = funcTargetId;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields._ChangeModelList_k__BackingField,
                    0);
  v13 = 0;
  if ( !IsNullOrEmpty )
  {
    ChangeModelList_k__BackingField = this->fields._ChangeModelList_k__BackingField;
    v15 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_ChangeModelActionData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass251_0__TryGetChangeModelData_b__0__,
      0);
    v13 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
            (System_Collections_Generic_IEnumerable_TSource__o *)ChangeModelList_k__BackingField,
            (System_Func_TSource__bool__o *)v15,
            (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_ChangeModelActionData___);
  }
  *changeModelActData = (BattleActionData_ChangeModelActionData_o *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)changeModelActData, (int32_t)v13, v11, v12);
  return *changeModelActData != 0;
}


// local variable allocation has failed, the output may be wrong!
bool BattleActionData__TryGetFuncSideEffectInterval(
        BattleActionData_o *this,
        float *interval,
        bool existTriggerFunc,
        float totalTime,
        const MethodInfo *method)
{
  int32_t MaxSideEffectCountByTarget_45678320; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_45678320 = BattleActionData__GetMaxSideEffectCountByTarget_45678320(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_45678320 >= 1 )
    *interval = totalTime / (float)(MaxSideEffectCountByTarget_45678320 + existTriggerFunc);
  return MaxSideEffectCountByTarget_45678320 > 0;
}


bool BattleActionData__TryGetRevivedServantHealDataArray(
        BattleActionData_o *this,
        int32_t entryIndex,
        BattleActionData_HealData_array **result,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C5939E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_1C3E564(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass206_0__TryGetRevivedServantHealDataArray_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass206_0_TypeInfo);
    byte_4C5939E = 1;
  }
  v7 = sub_1C3E7B0(BattleActionData___c__DisplayClass206_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_DWORD *)(v7 + 16) = entryIndex;
  HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(this, -1, v10);
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_HealData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattleActionData___c__DisplayClass206_0__TryGetRevivedServantHealDataArray_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          HealList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
  *result = (BattleActionData_HealData_array *)v14;
  sub_1C3E508((CGThumbnailListItem_o *)result, (int32_t)v14, v15, v16);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0);
}


bool BattleActionData__TryGetSkillMessageDisplayTime(BattleActionData_o *this, float *time, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0
  bool MessageDisplayTime; // w1
  unsigned __int16 *v7; // x0
  unsigned __int16 v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C593D0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_bool___ctor__);
    byte_4C593D0 = 1;
  }
  *time = 0.0;
  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
  {
    skillInfo = (BattleSkillInfoData_o *)BattleSkillInfoData__GetSelfSkillEntity(skillInfo, 0);
    if ( skillInfo )
    {
      MessageDisplayTime = SkillEntity__TryGetMessageDisplayTime((SkillEntity_o *)skillInfo, time, 0);
      v7 = &v9;
      v9 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v7,
        MessageDisplayTime,
        (const MethodInfo_38D7480 *)Method_System_Nullable_bool___ctor__);
      LOBYTE(skillInfo) = v9 > 0xFFu;
    }
  }
  return (char)skillInfo;
}


bool BattleActionData__TryGetUseInFsmFuncParamValue(
        BattleActionData_o *this,
        int32_t *value,
        UseInFsmFuncParam_CondData_o *condData,
        const MethodInfo *method)
{
  __int64 v7; // x23
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x22
  struct System_Collections_Generic_List_UseInFsmFuncParam__o *useInFsmFuncParamList; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4C593AC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_UseInFsmFuncParam___);
    sub_1C3E564(&System_Func_UseInFsmFuncParam__bool__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass244_0__TryGetUseInFsmFuncParamValue_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass244_0_TypeInfo);
    byte_4C593AC = 1;
  }
  v7 = sub_1C3E7B0(BattleActionData___c__DisplayClass244_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = condData;
  v12 = v7 + 16;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)condData, v10, v11);
  *value = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.useInFsmFuncParamList, 0) )
  {
    useInFsmFuncParamList = this->fields.useInFsmFuncParamList;
    v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UseInFsmFuncParam__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass244_0__TryGetUseInFsmFuncParamValue_b__0__,
      0);
    v8 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
           (System_Collections_Generic_IEnumerable_TSource__o *)useInFsmFuncParamList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_UseInFsmFuncParam___);
    if ( v8 )
    {
      if ( *(_QWORD *)v12 )
        return UseInFsmFuncParam__TryGetParamValue(
                 (UseInFsmFuncParam_o *)v8,
                 value,
                 *(System_String_o **)(*(_QWORD *)v12 + 24LL),
                 0);
LABEL_9:
      sub_1C3E7C0(v8, v9);
    }
  }
  return 0;
}


void BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_transformServantlist; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C593A5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    byte_4C593A5 = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = (CGThumbnailListItem_o *)&this->fields.transformServantlist;
    v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    p_transformServantlist->klass = (CGThumbnailListItem_c *)v4;
    sub_1C3E508(p_transformServantlist, (int32_t)v4, v5, v6);
  }
}


void BattleActionData__UpdateBuffAfterActionFlag(BattleActionData_o *this, bool isUpdate, const MethodInfo *method)
{
  this->fields._IsUpdateBuffAfterAction_k__BackingField = isUpdate;
}


void BattleActionData__UpdateDirectIntervalBuffData(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Func_object__bool__o **v11; // x20
  System_Action_T__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Func_object__bool__o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  __int128 v18; // [xsp+0h] [xbp-90h] BYREF
  __int128 v19; // [xsp+10h] [xbp-80h]
  __int128 v20; // [xsp+20h] [xbp-70h]

  if ( (byte_4C5938B & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C3E564(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_1C3E564(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass168_0__UpdateDirectIntervalBuffData_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass168_0_TypeInfo);
    byte_4C5938B = 1;
  }
  v19 = 0u;
  v20 = 0u;
  v18 = 0u;
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass168_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_DWORD *)(v5 + 24) = targetType;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField, 0) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BuffMaster___);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v9, v10);
  IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_16:
    sub_1C3E7C0(IntervalBuffDict_k__BackingField, v7);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
    IntervalBuffDict_k__BackingField,
    (const MethodInfo_33C7BEC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  v11 = (System_Func_object__bool__o **)(v5 + 32);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
            (const MethodInfo_3557628 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v12 = (System_Action_T__o *)*((_QWORD *)&v19 + 1);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v20, 0) )
    {
      v14 = *v11;
      if ( !*v11 )
      {
        v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass168_0__UpdateDirectIntervalBuffData_b__0__,
          0);
        *v11 = v14;
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v14, v15, v16);
      }
      v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v13,
                                                             (System_Func_TSource__bool__o *)v14,
                                                             (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_object_(
        v17,
        v12,
        (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
    (const MethodInfo_355775C *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x20
  BattleActionData___c_c *v4; // x0
  System_Action_object__o *_9__176_0; // x21
  Il2CppObject *v6; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *healdatalist; // x19
  BattleActionData___c_c *v11; // x0
  System_Action_object__o *_9__176_1; // x20
  Il2CppObject *v13; // x21
  struct BattleActionData___c_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C5938E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_1C3E564(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_1C3E564(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__176_0__);
    sub_1C3E564(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__176_1__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C5938E = 1;
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
    _9__176_0 = (System_Action_object__o *)v4->static_fields->__9__176_0;
    if ( !_9__176_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = BattleActionData___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__176_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__176_0,
        v6,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__176_0__,
        0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__176_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__176_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__176_0, (int32_t)_9__176_0, v8, v9);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__176_0,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
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
    _9__176_1 = (System_Action_object__o *)v11->static_fields->__9__176_1;
    if ( !_9__176_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleActionData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__176_1 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        _9__176_1,
        v13,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__176_1__,
        0);
      v14 = BattleActionData___c_TypeInfo->static_fields;
      v14->__9__176_1 = (struct System_Action_BattleActionData_HealData__o *)_9__176_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v14->__9__176_1, (int32_t)_9__176_1, v15, v16);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__176_1,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  BattleActionData___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  System_Action_object__o *_9__166_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C59389 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleServantData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_1C3E564(&Method_BattleActionData___c__UpdateIntervalBuff_b__166_0__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59389 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleActionData_o *, const MethodInfo *))this->klass->vtable._7_UpdateIntervalBuffData.methodPtr)(
         this,
         this->klass->vtable._7_UpdateIntervalBuffData.method);
  v4 = BattleActionData___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_T__o *)v3;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v4 = BattleActionData___c_TypeInfo;
  }
  _9__166_0 = (System_Action_object__o *)v4->static_fields->__9__166_0;
  if ( !_9__166_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleActionData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__166_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__166_0, v7, Method_BattleActionData___c__UpdateIntervalBuff_b__166_0__, 0);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__166_0 = (struct System_Action_BattleServantData__o *)_9__166_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__166_0, (int32_t)_9__166_0, v9, v10);
  }
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)_9__166_0,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x22
  _OWORD v10[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v11; // [xsp+30h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+40h] [xbp-60h]
  __int128 v13; // [xsp+50h] [xbp-50h]

  if ( (byte_4C5938A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    byte_4C5938A = 1;
  }
  *(_OWORD *)action = 0u;
  v13 = 0u;
  v11 = 0u;
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          0) )
  {
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v10,
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_33C7BEC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    v11 = v10[0];
    *(_OWORD *)action = v10[1];
    v13 = v10[2];
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
             (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v11,
             (const MethodInfo_3557628 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v6 )
        break;
      v8 = (Il2CppObject *)action[0];
      if ( (_QWORD)v13 )
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v13,
          action[1],
          (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      if ( v8 )
      {
        if ( !v3 )
          sub_1C3E7C0(v6, v7);
        System_Collections_Generic_HashSet_object___Add(
          v3,
          v8,
          (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v11,
      (const MethodInfo_355775C *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_16:
      sub_1C3E7C0(IntervalBuffDict_k__BackingField, v4);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_33C7914 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v3;
}


void BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_1C3E7C0(this, 0);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
  {
    if ( intervalData->fields.updateTiming == 1 )
      BattleBuffData_IntervalData__Update(intervalData, buff, method);
  }
}


void BattleActionData__UpdateNotSkillSkip(BattleActionData_o *this, const MethodInfo *method)
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


void BattleActionData__UpdateTargetRangeOfTreasureDevice(
        BattleActionData_o *this,
        BattleData_o *battleData,
        BattleActionData_o *battleActionControl,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *functionUnits,
        const MethodInfo *method)
{
  BattleActionData___c_c *v8; // x0
  System_Func_object__int__o *_9__320_0; // x23
  Il2CppObject *v10; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x22
  System_Func_int__bool__o *v16; // x23
  int v17; // w24
  System_Func_int__bool__o *v18; // x23
  System_Func_int__bool__o *v19; // x23
  __int64 v20; // x1
  int v21; // w20
  System_Func_int__bool__o *v22; // x23
  BattleData_o *isEnemyID; // x0
  int32_t v24; // w8
  int32_t v25; // w9

  if ( (byte_4C593CB & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionUnitCheck__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__TypeInfo);
    sub_1C3E564(&Method_Target_IsEnemyAllTarget__);
    sub_1C3E564(&Method_Target_IsPartyAllTarget__);
    sub_1C3E564(&Method_Target_isEnemy__);
    sub_1C3E564(&Method_Target_isPlayer__);
    sub_1C3E564(&Method_BattleActionData___c__UpdateTargetRangeOfTreasureDevice_b__320_0__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C593CB = 1;
  }
  v8 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v8 = BattleActionData___c_TypeInfo;
  }
  _9__320_0 = (System_Func_object__int__o *)v8->static_fields->__9__320_0;
  if ( !_9__320_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleActionData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__320_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__320_0,
      v10,
      Method_BattleActionData___c__UpdateTargetRangeOfTreasureDevice_b__320_0__,
      0);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__320_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__o *)_9__320_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__320_0, (int32_t)_9__320_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)functionUnits,
                                                               (System_Func_TSource__TResult__o *)_9__320_0,
                                                               (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionUnitCheck__int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  v16 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v16, 0, Method_Target_IsEnemyAllTarget__, 0);
  if ( BasicHelper__Any_int__51260304(
         v15,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928) )
  {
    v17 = 1;
  }
  else
  {
    v18 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v18, 0, Method_Target_isEnemy__, 0);
    if ( BasicHelper__Any_int__51260304(
           v15,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928) )
    {
      v17 = 2;
    }
    else
    {
      v17 = 0;
    }
  }
  v19 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v19, 0, Method_Target_IsPartyAllTarget__, 0);
  if ( BasicHelper__Any_int__51260304(
         v15,
         (System_Func_T__bool__o *)v19,
         (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928) )
  {
    v21 = 1;
  }
  else
  {
    v22 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v22, 0, Method_Target_isPlayer__, 0);
    if ( BasicHelper__Any_int__51260304(
           v15,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928) )
    {
      v21 = 2;
    }
    else
    {
      v21 = 0;
    }
  }
  isEnemyID = battleData;
  if ( !battleActionControl
    || !battleData
    || (isEnemyID = (BattleData_o *)BattleData__isEnemyID(battleData, battleActionControl->fields.actorId, 0), !this) )
  {
    sub_1C3E7C0(isEnemyID, v20);
  }
  if ( ((unsigned __int8)isEnemyID & 1) != 0 )
    v24 = v17;
  else
    v24 = v21;
  if ( ((unsigned __int8)isEnemyID & 1) != 0 )
    v25 = v21;
  else
    v25 = v17;
  this->fields.PlayerTreasureDeviceRange = v24;
  this->fields.EnemyTreasureDeviceRange = v25;
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData___AddHpDecreaseFuncTargets_b__151_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x0

  if ( (byte_4C593EA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C593EA = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_1C3E7C0(0, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


bool BattleActionData___GetFuncSideEffectTargetServants_b__124_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


bool BattleActionData___SetFirstAtkMainTargetId_b__123_0(BattleActionData_o *this, int32_t x, const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void BattleActionData__addAction(BattleActionData_o *this, BattleActionData_o *addData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *damagedatalist; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4C593C7 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    sub_1C3E564(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    byte_4C593C7 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                    this,
                                                                    (const MethodInfo *)addData);
    v7 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v6);
    if ( !damagedatalist )
      sub_1C3E7C0(v7, v8);
    System_Collections_Generic_List_object___AddRange(
      damagedatalist,
      v7,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_30E99B4 *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
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


void BattleActionData__addBattleData___Il2CppFullySharedGenericType_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_30E9A5C *method)
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
    sub_1C8ECD4(method);
    if ( !addDataList )
      return;
  }
  v8 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (*(&_0_System_Collections_Generic_List_T->_2.bitflags2 + 2) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1C8EC78(v4);
    v10 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(_0_System_Collections_Generic_List_T);
    method->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
    *dataList = v10;
    sub_1C3E508((CGThumbnailListItem_o *)dataList, (int32_t)v10, v11, v12);
    v8 = *dataList;
    if ( !*dataList )
      sub_1C3E7C0(0, v13);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_T__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange->methodPointer)(
    v8,
    addDataList);
}


void BattleActionData__addBattleData_object_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_30E99B4 *method)
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
    sub_1C8ECD4(method);
    if ( !addDataList )
      return;
  }
  v8 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (*(&_0_System_Collections_Generic_List_T->_2.bitflags2 + 2) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1C8EC78(v4);
    v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(_0_System_Collections_Generic_List_T);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_37B4C2C *)method->rgctx_data->_2_System_Collections_Generic_List_T___ctor);
    *dataList = (System_Collections_Generic_List_T__o *)v10;
    sub_1C3E508((CGThumbnailListItem_o *)dataList, (int32_t)v10, v11, v12);
    v8 = *dataList;
    if ( !*dataList )
      sub_1C3E7C0(0, v13);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)addDataList,
    (const MethodInfo_37B566C *)method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange);
}


void BattleActionData__addCriticalStar(BattleActionData_o *this, int32_t num, const MethodInfo *method)
{
  this->fields.addCriticalStars += num;
}


void BattleActionData__addDamageSideEffect(
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
  const MethodInfo *v13; // x3
  struct BattleActionData_SideEffectData_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  int32_t v18; // w8

  if ( (byte_4C59394 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__);
    this = (BattleActionData_o *)sub_1C3E564(&BattleActionData_SideEffectData_TypeInfo);
    byte_4C59394 = 1;
  }
  if ( !actList )
    goto LABEL_13;
  if ( actList->fields._size < 1 )
    return;
  if ( !damage
    || (targetId = damage->fields.targetId,
        v9 = (BuffList_ACTION_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)actList,
                                        (const MethodInfo_379C720 *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__),
        v10 = (BattleActionData_SideEffectData_o *)sub_1C3E7B0(BattleActionData_SideEffectData_TypeInfo),
        BattleActionData_SideEffectData___ctor(v10, targetId, v9, v11),
        !sideEffectList)
    || (items = sideEffectList->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__,
        ++sideEffectList->fields._version,
        !items) )
  {
LABEL_13:
    sub_1C3E7C0(this, sideEffectList);
  }
  size = sideEffectList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (Il2CppObject *)v10,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    sideEffectList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v10;
    sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
  }
  v18 = actList->fields._version + 1;
  actList->fields._size = 0;
  actList->fields._version = v18;
}


void BattleActionData__addReflectAttackSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  struct System_Collections_Generic_KeyValuePair_int__int__array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  System_Collections_Generic_KeyValuePair_int__int__o v9; // x1

  if ( (byte_4C593DC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
    byte_4C593DC = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds
    || (items = attackSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__,
        ++attackSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_1C3E7C0(attackSideEffectedSvtIds, pairAttackAndTarget);
  }
  size = attackSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    v9 = pairAttackAndTarget;
    System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
      attackSideEffectedSvtIds,
      v9,
      *(const MethodInfo_37289F4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    attackSideEffectedSvtIds->fields._size = size + 1;
    items->m_Items[size] = pairAttackAndTarget;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__addReflectDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4C593DA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C593DA = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds
    || (items = damageSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++damageSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_1C3E7C0(damageSideEffectedSvtIds, *(_QWORD *)&uniqueSvtId);
  }
  size = damageSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      damageSideEffectedSvtIds,
      uniqueSvtId,
      *(const MethodInfo_379843C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    damageSideEffectedSvtIds->fields._size = size + 1;
    items->m_Items[size] = uniqueSvtId;
  }
}


void BattleActionData__addReflectLogicResultServantId(
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
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C593DE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__);
    sub_1C3E564(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_1C3E564(&BattleActionData_ServantLogicResultData_TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass353_0__addReflectLogicResultServantId_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass353_0_TypeInfo);
    byte_4C593DE = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass353_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = uniqueSvtId;
  servantLogicResultList = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass353_0__addReflectLogicResultServantId_b__0__,
    0);
  if ( !servantLogicResultList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_object___FindIndex(
         servantLogicResultList,
         (System_Predicate_T__o *)v9,
         (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v10 = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v11 = sub_1C3E7B0(BattleActionData_ServantLogicResultData_TypeInfo);
  *(_DWORD *)(v11 + 20) = -1;
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = *(_DWORD *)(v5 + 16);
  if ( !v10
    || (items = v10->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C3E7C0(v6, v7);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v11,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v11;
    sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), v11, v12, v13);
  }
}


void BattleActionData__addReflectLogicResultServantIds(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *addLogicResultList,
        const MethodInfo *method)
{
  int32_t v5; // w21
  Il2CppObject *Item; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C593DD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_4C593DD = 1;
  }
  if ( addLogicResultList && addLogicResultList->fields._size >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)addLogicResultList,
               v5,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !Item )
        sub_1C3E7C0(0, v7);
      BattleActionData__addReflectLogicResultServantId(this, (int32_t)Item[1].klass, v8);
      ++v5;
    }
    while ( v5 < addLogicResultList->fields._size );
  }
}


void BattleActionData__addSideEffectActionData(
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
  if ( (byte_4C593D5 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData__Add__);
    byte_4C593D5 = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v6->fields.sideEffectList) == 0)
    || (v7 = *(_QWORD *)&this->fields.state,
        v8 = Method_System_Collections_Generic_List_BattleActionData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v7) )
  {
    sub_1C3E7C0(this, sideEffectActionData);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)sideEffectActionData,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = v7 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v10 + 32) = sideEffectActionData;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 32), (int32_t)sideEffectActionData, actType, method);
  }
}


bool BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_4C593A8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__);
    byte_4C593A8 = 1;
  }
  summonServantList = this->fields.summonServantList;
  return summonServantList && summonServantList->fields._size > 0;
}


BattleActionData_BuffData_array *BattleActionData__getBuffList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  CGThumbnailListItem_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Predicate_object__o *v13; // x19
  const MethodInfo_37B6FB8 *v14; // x1

  if ( (byte_4C59399 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&System_Predicate_BattleActionData_BuffData__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass198_0__getBuffList_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass198_0_TypeInfo);
    byte_4C59399 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass198_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = funcIndex;
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (CGThumbnailListItem_o *)&this->fields.buffdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (CGThumbnailListItem_c *)v10;
    sub_1C3E508(p_buffdatalist, (int32_t)v10, v11, v12);
    funcIndex = *(_DWORD *)(v5 + 16);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
  }
  if ( funcIndex == -1 )
  {
    if ( buffdatalist )
    {
      v14 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v14);
    }
LABEL_13:
    sub_1C3E7C0(All, v7);
  }
  v13 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleActionData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass198_0__getBuffList_b__0__,
    0);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          buffdatalist,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v14 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v14);
}


BattleActionData_ChangeBg_o *BattleActionData__getChangeBg(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *changeBgList; // x0

  if ( (byte_4C593B0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
    byte_4C593B0 = 1;
  }
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return (BattleActionData_ChangeBg_o *)System_Collections_Generic_List_object___get_Item(
                                            changeBgList,
                                            0,
                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
  else
    return 0;
}


int32_t BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  StageEntity_c *v3; // x0
  int32_t actionIndex; // w21
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_4C593D4 & 1) == 0 )
  {
    sub_1C3E564(&StageEntity_TypeInfo);
    byte_4C593D4 = 1;
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


BattleActionData_SideEffectData_array *BattleActionData__getDamageAttackSideEffectList(
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

  if ( (byte_4C59393 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
    byte_4C59393 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    damagedatalist,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v11.fields._current )
      sub_1C3E7C0(v7, v8);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v7,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v3,
      (BattleActionData_DamageData_o *)v11.fields._current,
      *(System_Collections_Generic_List_BuffList_ACTION__o **)((char *)&v11.fields._current->klass
                                                             + (unsigned __int64)off_50),
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v3 )
LABEL_11:
    sub_1C3E7C0(damagedatalist, v6);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v3,
                                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
}


BattleActionData_DamageData_array *BattleActionData__getDamageList(
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
  const MethodInfo_37B6FB8 *v11; // x1

  if ( (byte_4C59391 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_1C3E564(&System_Predicate_BattleActionData_DamageData__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass186_0__getDamageList_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass186_0_TypeInfo);
    byte_4C59391 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass186_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
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
      v11 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v11);
    }
LABEL_11:
    sub_1C3E7C0(damagedatalist, v7);
  }
  v10 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleActionData_DamageData__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass186_0__getDamageList_b__0__,
    0);
  if ( !v9 )
    goto LABEL_11;
  damagedatalist = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                  v9,
                                                                  (System_Predicate_T__o *)v10,
                                                                  (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_11;
  v11 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v11);
}


System_Int32_array *BattleActionData__getDamageTargetIdList(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C59392 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_4C59392 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    sub_1C3E7C0(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    damagedatalist,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1C3E7C0(v7, v8);
    if ( !v3 )
      sub_1C3E7C0(v7, v8);
    System_Collections_Generic_HashSet_int___Add(
      v3,
      *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&qword_20),
      (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData__getEffect(BattleActionData_o *this, int32_t index, const MethodInfo *method)
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  return effectlist->m_Items[index];
}


System_String_o *BattleActionData__getEndCamera(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.endcameraname;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData__getFuncTargetPlayerType(BattleActionData_o *this, int32_t index, const MethodInfo *method)
{
  int32_t v5; // w21
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x0
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C593E4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    byte_4C593E4 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( index < 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
    if ( funcTargetPlayerTypeList )
    {
      System_Collections_Generic_List_Int32Enum___GetEnumerator(
        &v8,
        funcTargetPlayerTypeList,
        (const MethodInfo_379B73C *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v5 = 0;
      while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                &v8,
                (const MethodInfo_353C9F0 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v5 |= LODWORD(v8.fields._current);
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
        &v8,
        (const MethodInfo_353C9EC *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v5;
    }
LABEL_13:
    sub_1C3E7C0(funcTargetPlayerTypeList, *(_QWORD *)&index);
  }
  v5 = 0;
  funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_13;
  if ( funcTargetPlayerTypeList->fields._size > index )
    return System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_379A978 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
  return v5;
}


BattleActionData_HealData_array *BattleActionData__getHealList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  CGThumbnailListItem_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Predicate_object__o *v13; // x19
  const MethodInfo_37B6FB8 *v14; // x1

  if ( (byte_4C5939D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    sub_1C3E564(&System_Predicate_BattleActionData_HealData__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass205_0__getHealList_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass205_0_TypeInfo);
    byte_4C5939D = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass205_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = funcIndex;
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (CGThumbnailListItem_o *)&this->fields.healdatalist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (CGThumbnailListItem_c *)v10;
    sub_1C3E508(p_healdatalist, (int32_t)v10, v11, v12);
    funcIndex = *(_DWORD *)(v5 + 16);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
  }
  if ( funcIndex == -1 )
  {
    if ( healdatalist )
    {
      v14 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v14);
    }
LABEL_13:
    sub_1C3E7C0(All, v7);
  }
  v13 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleActionData_HealData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass205_0__getHealList_b__0__,
    0);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          healdatalist,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v14 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v14);
}


System_Int32_array *BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_Int32_array *DamageTargets; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Int32_array *pttargetIds; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x23
  il2cpp_array_size_t v10; // x8
  System_Int32_array *v11; // x20
  unsigned __int64 v12; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_4C593C8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C593C8 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v3 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    max_length = pttargetIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      while ( v9 < (unsigned int)max_length )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v3,
          pttargetIds->m_Items[v9],
          pttargetIds->m_Items[v9],
          (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(max_length) = pttargetIds->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          goto LABEL_9;
      }
LABEL_15:
      sub_1C3E7C8(DamageTargets, v5);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v5, v6);
  if ( !DamageTargets )
LABEL_16:
    sub_1C3E7C0(DamageTargets, v5);
  v10 = DamageTargets->max_length;
  v11 = DamageTargets;
  if ( (int)v10 >= 1 )
  {
    v12 = 0;
    while ( v12 < (unsigned int)v10 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v3,
        v11->m_Items[v12],
        v11->m_Items[v12],
        (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v10) = v11->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_3403648 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *BattleActionData__getListFunctionIndex(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x21
  BattleActionData___c_c *v6; // x0
  System_Converter_object__int__o *_9__322_0; // x22
  Il2CppObject *v8; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  void *v12; // x0
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v14; // x0
  System_Converter_object__int__o *_9__322_1; // x21
  Il2CppObject *v16; // x22
  struct BattleActionData___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Comparison_int__o *v20; // x20
  Il2CppObject *v21; // x21
  struct BattleActionData___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4C593CC & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_int__TypeInfo);
    sub_1C3E564(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_1C3E564(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Sort___78136088);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndex_b__322_0__);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndex_b__322_1__);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndex_b__322_2__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C593CC = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v6 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v6 = BattleActionData___c_TypeInfo;
    }
    _9__322_0 = (System_Converter_object__int__o *)v6->static_fields->__9__322_0;
    if ( !_9__322_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__322_0 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__322_0,
        v8,
        Method_BattleActionData___c__getListFunctionIndex_b__322_0__,
        0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__322_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__322_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__322_0, (int32_t)_9__322_0, v10, v11);
    }
    v12 = System_Collections_Generic_List_object___ConvertAll_int_(
            buffdatalist,
            (System_Converter_T__TOutput__o *)_9__322_0,
            (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v3 )
      goto LABEL_29;
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
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
  _9__322_1 = (System_Converter_object__int__o *)v14->static_fields->__9__322_1;
  if ( !_9__322_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleActionData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__322_1 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_BattleActionData_HealData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__322_1,
      v16,
      Method_BattleActionData___c__getListFunctionIndex_b__322_1__,
      0);
    v17 = BattleActionData___c_TypeInfo->static_fields;
    v17->__9__322_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__322_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v17->__9__322_1, (int32_t)_9__322_1, v18, v19);
  }
  v12 = System_Collections_Generic_List_object___ConvertAll_int_(
          healdatalist,
          (System_Converter_T__TOutput__o *)_9__322_1,
          (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
  if ( !v3 )
LABEL_29:
    sub_1C3E7C0(v12, v4);
  System_Collections_Generic_List_int___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_21:
  v12 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v12 = BattleActionData___c_TypeInfo;
  }
  v20 = *(System_Comparison_int__o **)(*((_QWORD *)v12 + 23) + 184LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)v12 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleActionData___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)v12 + 23);
    v20 = (System_Comparison_int__o *)sub_1C3E7B0(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v20, v21, Method_BattleActionData___c__getListFunctionIndex_b__322_2__, 0);
    v22 = BattleActionData___c_TypeInfo->static_fields;
    v22->__9__322_2 = v20;
    sub_1C3E508((CGThumbnailListItem_o *)&v22->__9__322_2, (int32_t)v20, v23, v24);
  }
  if ( !v3 )
    goto LABEL_29;
  System_Collections_Generic_List_int___Sort_58302048(
    v3,
    (System_Comparison_T__o *)v20,
    (const MethodInfo_3799E60 *)Method_System_Collections_Generic_List_int__Sort___78136088);
  v25 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_311CD38 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *BattleActionData__getListFunctionIndexEx(
        BattleActionData_o *this,
        int32_t *displayFuncNum,
        System_Collections_Generic_HashSet_int__o **displayDamageFuncHashSet,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_HashSet_int__o *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x23
  BattleActionData___c_c *v13; // x0
  System_Converter_object__int__o *_9__323_0; // x24
  Il2CppObject *v15; // x25
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Int32_array *result; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x23
  BattleActionData___c_c *v22; // x0
  System_Converter_object__int__o *_9__323_1; // x24
  Il2CppObject *v24; // x25
  struct BattleActionData___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  BattleActionData___c_c *v28; // x8
  System_Collections_Generic_List_object__o *v29; // x23
  System_Converter_object__int__o *_9__323_2; // x24
  Il2CppObject *v31; // x25
  struct BattleActionData___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  BattleActionData___c_c *v36; // x8
  System_Collections_Generic_List_object__o *v37; // x23
  System_Converter_object__int__o *_9__323_3; // x24
  Il2CppObject *v39; // x25
  struct BattleActionData___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_List_TOutput__o *v43; // x0
  System_Collections_Generic_HashSet_int__o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  BattleActionData___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x21
  System_Func_object__int__o *_9__323_4; // x22
  Il2CppObject *v52; // x23
  struct BattleActionData___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w21
  System_Comparison_int__o *v57; // x22
  Il2CppObject *v58; // x23
  struct BattleActionData___c_StaticFields *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0

  if ( (byte_4C593CD & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_int__TypeInfo);
    sub_1C3E564(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_1C3E564(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_1C3E564(&System_Converter_BattleActionData_DamageData__int__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C3E564(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Sort___78136088);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndexEx_b__323_0__);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndexEx_b__323_1__);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndexEx_b__323_2__);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndexEx_b__323_3__);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndexEx_b__323_4__);
    sub_1C3E564(&Method_BattleActionData___c__getListFunctionIndexEx_b__323_5__);
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C593CD = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *displayDamageFuncHashSet = v8;
  sub_1C3E508((CGThumbnailListItem_o *)displayDamageFuncHashSet, (int32_t)v8, v9, v10);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v13 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v13 = BattleActionData___c_TypeInfo;
    }
    _9__323_0 = (System_Converter_object__int__o *)v13->static_fields->__9__323_0;
    if ( !_9__323_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BattleActionData___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__323_0 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__323_0,
        v15,
        Method_BattleActionData___c__getListFunctionIndexEx_b__323_0__,
        0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__323_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__323_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__323_0, (int32_t)_9__323_0, v17, v18);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__323_0,
                                     (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v7 )
      goto LABEL_54;
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v22 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
      v22 = BattleActionData___c_TypeInfo;
    }
    _9__323_1 = (System_Converter_object__int__o *)v22->static_fields->__9__323_1;
    if ( !_9__323_1 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleActionData___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__323_1 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__323_1,
        v24,
        Method_BattleActionData___c__getListFunctionIndexEx_b__323_1__,
        0);
      v25 = BattleActionData___c_TypeInfo->static_fields;
      v25->__9__323_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__323_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v25->__9__323_1, (int32_t)_9__323_1, v26, v27);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__323_1,
                                     (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v7 )
      goto LABEL_54;
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v11) )
  {
    v56 = 0;
    goto LABEL_45;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v20);
  v28 = BattleActionData___c_TypeInfo;
  v29 = (System_Collections_Generic_List_object__o *)result;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v28 = BattleActionData___c_TypeInfo;
  }
  _9__323_2 = (System_Converter_object__int__o *)v28->static_fields->__9__323_2;
  if ( !_9__323_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleActionData___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__323_2 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__323_2,
      v31,
      Method_BattleActionData___c__getListFunctionIndexEx_b__323_2__,
      0);
    v32 = BattleActionData___c_TypeInfo->static_fields;
    v32->__9__323_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__323_2;
    sub_1C3E508((CGThumbnailListItem_o *)&v32->__9__323_2, (int32_t)_9__323_2, v33, v34);
  }
  if ( !v29 )
    goto LABEL_54;
  result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                   v29,
                                   (System_Converter_T__TOutput__o *)_9__323_2,
                                   (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
  if ( !v7 )
    goto LABEL_54;
  System_Collections_Generic_List_int___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v35);
  v36 = BattleActionData___c_TypeInfo;
  v37 = (System_Collections_Generic_List_object__o *)result;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v36 = BattleActionData___c_TypeInfo;
  }
  _9__323_3 = (System_Converter_object__int__o *)v36->static_fields->__9__323_3;
  if ( !_9__323_3 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = BattleActionData___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__323_3 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__323_3,
      v39,
      Method_BattleActionData___c__getListFunctionIndexEx_b__323_3__,
      0);
    v40 = BattleActionData___c_TypeInfo->static_fields;
    v40->__9__323_3 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__323_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v40->__9__323_3, (int32_t)_9__323_3, v41, v42);
  }
  if ( !v37 )
LABEL_54:
    sub_1C3E7C0(result, v20);
  v43 = System_Collections_Generic_List_object___ConvertAll_int_(
          v37,
          (System_Converter_T__TOutput__o *)_9__323_3,
          (const MethodInfo_3020F8C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
  v44 = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                                                       (const MethodInfo_313DA14 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  *displayDamageFuncHashSet = v44;
  sub_1C3E508((CGThumbnailListItem_o *)displayDamageFuncHashSet, (int32_t)v44, v45, v46);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v47);
  v49 = BattleActionData___c_TypeInfo;
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    v49 = BattleActionData___c_TypeInfo;
  }
  _9__323_4 = (System_Func_object__int__o *)v49->static_fields->__9__323_4;
  if ( !_9__323_4 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = BattleActionData___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__323_4 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleActionData_DamageData__int__TypeInfo);
    System_Func_object__int____ctor(_9__323_4, v52, Method_BattleActionData___c__getListFunctionIndexEx_b__323_4__, 0);
    v53 = BattleActionData___c_TypeInfo->static_fields;
    v53->__9__323_4 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__323_4;
    sub_1C3E508((CGThumbnailListItem_o *)&v53->__9__323_4, (int32_t)_9__323_4, v54, v55);
  }
  v56 = System_Linq_Enumerable__Sum_object_(
          v50,
          (System_Func_TSource__int__o *)_9__323_4,
          (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_45:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v57 = *(System_Comparison_int__o **)(*(_QWORD *)&result->m_Items[38] + 232LL);
  if ( !v57 )
  {
    if ( !result->m_Items[48] )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (System_Int32_array *)BattleActionData___c_TypeInfo;
    }
    v58 = **(Il2CppObject ***)&result->m_Items[38];
    v57 = (System_Comparison_int__o *)sub_1C3E7B0(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v57, v58, Method_BattleActionData___c__getListFunctionIndexEx_b__323_5__, 0);
    v59 = BattleActionData___c_TypeInfo->static_fields;
    v59->__9__323_5 = v57;
    sub_1C3E508((CGThumbnailListItem_o *)&v59->__9__323_5, (int32_t)v57, v60, v61);
  }
  if ( !v7 )
    goto LABEL_54;
  System_Collections_Generic_List_int___Sort_58302048(
    v7,
    (System_Comparison_T__o *)v57,
    (const MethodInfo_3799E60 *)Method_System_Collections_Generic_List_int__Sort___78136088);
  v62 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (const MethodInfo_311CD38 *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v62,
             (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_54;
  *displayFuncNum = v56 + LODWORD(result->max_length);
  return result;
}


int32_t BattleActionData__getPTSubTargetId(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *pttargetIds; // x8

  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds && SLODWORD(pttargetIds->max_length) >= 2 )
    return pttargetIds->m_Items[1];
  else
    return 0;
}


int32_t BattleActionData__getPTTargetId(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *pttargetIds; // x8

  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds && SLODWORD(pttargetIds->max_length) >= 1 )
    return pttargetIds->m_Items[0];
  else
    return 0;
}


BattleActionData_ReplaceMember_array *BattleActionData__getReplaceMember(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *replacememberlist; // x22
  CGThumbnailListItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Predicate_object__o *v13; // x19
  const MethodInfo_37B6FB8 *v14; // x1

  if ( (byte_4C593A1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    sub_1C3E564(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass211_0__getReplaceMember_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass211_0_TypeInfo);
    byte_4C593A1 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass211_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = funcIndex;
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (CGThumbnailListItem_o *)&this->fields.replacememberlist;
    v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (CGThumbnailListItem_c *)v10;
    sub_1C3E508(p_replacememberlist, (int32_t)v10, v11, v12);
    funcIndex = *(_DWORD *)(v5 + 16);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
  }
  if ( funcIndex == -1 )
  {
    if ( replacememberlist )
    {
      v14 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       v14);
    }
LABEL_13:
    sub_1C3E7C0(All, v7);
  }
  v13 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass211_0__getReplaceMember_b__0__,
    0);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          replacememberlist,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  v14 = (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   v14);
}


BattleActionData_ShiftServant_o *BattleActionData__getShiftServant(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *shiftServantList; // x0

  if ( (byte_4C593AA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
    byte_4C593AA = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return (BattleActionData_ShiftServant_o *)System_Collections_Generic_List_object___get_Item(
                                                shiftServantList,
                                                0,
                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
  else
    return 0;
}


BattleActionData_array *BattleActionData__getSideEffectList(
        BattleActionData_o *this,
        int32_t actType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C593D6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData__ToArray__);
    sub_1C3E564(&System_Predicate_BattleActionData__TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass339_0__getSideEffectList_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass339_0_TypeInfo);
    byte_4C593D6 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass339_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = actType,
        sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass339_0__getSideEffectList_b__0__,
          0),
        !sideEffectList)
    || (All = System_Collections_Generic_List_object___FindAll(
                sideEffectList,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0 )
  {
    sub_1C3E7C0(All, v7);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_object___ToArray(
                                     (System_Collections_Generic_List_object__o *)All,
                                     (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
}


bool BattleActionData__getSkillCutInCamField(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LOBYTE(skillInfo) = BattleSkillInfoData__getSkillCutInCamField(skillInfo, 0);
  return (char)skillInfo;
}


bool BattleActionData__getSkillCutInCamPlayerAll(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LOBYTE(skillInfo) = BattleSkillInfoData__getSkillCutInCamPlayerAll(skillInfo, 0);
  return (char)skillInfo;
}


int32_t BattleActionData__getSkillCutInId(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LODWORD(skillInfo) = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
                           skillInfo,
                           skillInfo->klass->vtable._9_getCutInId.method);
  return (int)skillInfo;
}


int32_t BattleActionData__getSkillCutInMessageMode(BattleActionData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LODWORD(skillInfo) = BattleSkillInfoData__getSkillCutInMessageMode(skillInfo, 0);
  return (int)skillInfo;
}


System_String_array *BattleActionData__getSkillCutInPrefabInfo(BattleActionData_o *this, const MethodInfo *method)
{
  System_String_array *result; // x0

  result = (System_String_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInPrefabInfo((BattleSkillInfoData_o *)result, 0);
  return result;
}


UnityEngine_Vector3_array *BattleActionData__getSkillCutInPrefabOffsets(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_array *result; // x0

  result = (UnityEngine_Vector3_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInPrefabOffsets((BattleSkillInfoData_o *)result, 0);
  return result;
}


UnityEngine_Vector3_array *BattleActionData__getSkillCutInPrefabSizes(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_array *result; // x0

  result = (UnityEngine_Vector3_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInPrefabSizes((BattleSkillInfoData_o *)result, 0);
  return result;
}


System_String_array *BattleActionData__getSkillCutInVoices(BattleActionData_o *this, const MethodInfo *method)
{
  System_String_array *result; // x0

  result = (System_String_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__getSkillCutInVoices((BattleSkillInfoData_o *)result, 0);
  return result;
}


BattleActionData_SummonServant_array *BattleActionData__getSummonServant(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *summonServantList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_4C593A7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
    sub_1C3E564(&System_Predicate_BattleActionData_SummonServant__TypeInfo);
    sub_1C3E564(&BattleActionData_SummonServant___TypeInfo);
    sub_1C3E564(&Method_BattleActionData___c__DisplayClass224_0__getSummonServant_b__0__);
    sub_1C3E564(&BattleActionData___c__DisplayClass224_0_TypeInfo);
    byte_4C593A7 = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData___c__DisplayClass224_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = funcIndex;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_1C3E60C(BattleActionData_SummonServant___TypeInfo, 0);
  if ( funcIndex != -1 )
  {
    v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleActionData_SummonServant__TypeInfo);
    System_Predicate_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass224_0__getSummonServant_b__0__,
      0);
    All = System_Collections_Generic_List_object___FindAll(
            summonServantList,
            (System_Predicate_T__o *)v9,
            (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_1C3E7C0(All, v7);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
}


System_Int32_array *BattleActionData__getTargetIds(BattleActionData_o *this, const MethodInfo *method)
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

  if ( (byte_4C593C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C593C9 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  DamageTargets = BattleActionData__GetDamageTargets(this, v4, v5);
  if ( !DamageTargets )
    goto LABEL_20;
  v9 = DamageTargets[3];
  v10 = DamageTargets;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
    while ( v11 < (unsigned int)v9 )
    {
      if ( !v3 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v3,
        *((_DWORD *)v10 + v11 + 8),
        *((_DWORD *)v10 + v11 + 8),
        (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v9) = *((_DWORD *)v10 + 6);
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_9;
    }
LABEL_19:
    sub_1C3E7C8(DamageTargets, v7);
  }
LABEL_9:
  DamageTargets = BattleActionData__getBuffList(this, -1, v8);
  if ( !DamageTargets )
    goto LABEL_20;
  v12 = DamageTargets[3];
  v13 = DamageTargets;
  if ( (int)v12 >= 1 )
  {
    v14 = 0;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = v13[v14 + 4];
      if ( v15 )
      {
        if ( !v3 )
          goto LABEL_20;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v3,
          *(_DWORD *)(v15 + 44),
          *(_DWORD *)(v15 + 44),
          (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1C3E7C0(DamageTargets, v7);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_3403648 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4C59395 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_4C59395 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    damagedatalist,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v5 = 0;
  v15 = v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v6 )
      break;
    if ( !v15.fields._current )
      sub_1C3E7C0(v6, v7);
    if ( LODWORD(v15.fields._current[2].monitor) != 6 )
    {
      klass = v15.fields._current[6].klass;
      if ( klass )
      {
        if ( (int)klass->_1.namespaze >= 1 )
        {
          namespaze = (unsigned int)klass->_1.namespaze;
          v10 = 0;
          p_byval_arg = &klass->_1.byval_arg;
          do
          {
            if ( v10 >= namespaze )
              sub_1C3E7C8(v6, v7);
            v12 = *((_DWORD *)&p_byval_arg->data + v10++);
            v5 += v12;
          }
          while ( (__int64)v10 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v5;
}


BattleActionData_AfterChangeField_o *BattleActionData__get_ChangeField(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeField_k__BackingField;
}


System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *BattleActionData__get_ChangeModelList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeModelList_k__BackingField;
}


System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *BattleActionData__get_DispMsgList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispMsgList_k__BackingField;
}


bool BattleActionData__get_ExistUpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
            0);
}


int32_t BattleActionData__get_FirstAtkMainTargetId(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._FirstAtkMainTargetId_k__BackingField;
}


System_Collections_Generic_HashSet_int__o *BattleActionData__get_HpDecreaseFuncTargetHash(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._HpDecreaseFuncTargetHash_k__BackingField;
}


System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *BattleActionData__get_IntervalBuffDict(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._IntervalBuffDict_k__BackingField;
}


bool BattleActionData__get_IsFuncTargetAllDead(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsFuncTargetAllDead_k__BackingField;
}


bool BattleActionData__get_IsNotSkillSkip(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsNotSkillSkip_k__BackingField;
}


bool BattleActionData__get_IsUpdateBuffAfterAction(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsUpdateBuffAfterAction_k__BackingField;
}


int32_t BattleActionData__get_MessageType(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._MessageType_k__BackingField;
}


bool BattleActionData__get_NoOperation(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.noOperation;
}


int32_t BattleActionData__get_NotShiftUpdateFlag(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleActionData_BaseShiftGaugeData_o *ShiftGauge_k__BackingField; // x8

  ShiftGauge_k__BackingField = this->fields._ShiftGauge_k__BackingField;
  if ( ShiftGauge_k__BackingField )
    return ShiftGauge_k__BackingField->fields._NotShiftUpdateState_k__BackingField;
  else
    return 0;
}


BattleActionData_BuffData_o *BattleActionData__get_ParentActBuff(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._ParentActBuff_k__BackingField;
}


BattleActionData_BaseShiftGaugeData_o *BattleActionData__get_ShiftGauge(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ShiftGauge_k__BackingField;
}


BattleActionData_TreasureDvcAfterChangeBgm_o *BattleActionData__get_TdAfterChangeBgm(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._TdAfterChangeBgm_k__BackingField;
}


BattleActionWaitCond_Base_o *BattleActionData__get_WaitCond(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._WaitCond_k__BackingField;
}


System_Collections_Generic_List_BattleActionData_DamageData__o *BattleActionData__get_damagedatalist(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleActionData_DamageData__o *result; // x0
  CGThumbnailListItem_o *p_damagedatalist; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5938F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    byte_4C5938F = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = (CGThumbnailListItem_o *)&this->fields._damagedatalist;
    v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    p_damagedatalist->klass = (CGThumbnailListItem_c *)v5;
    sub_1C3E508(p_damagedatalist, (int32_t)v5, v6, v7);
    return (System_Collections_Generic_List_BattleActionData_DamageData__o *)p_damagedatalist->klass;
  }
  return result;
}


void BattleActionData__initFuncTargetPlayerType(BattleActionData_o *this, int32_t length, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C593E2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
    byte_4C593E2 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Int32Enum_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_3129E78 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v6 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                            v5,
                                                                            (const MethodInfo_313DC94 *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.funcTargetPlayerTypeList, (int32_t)v6, v7, v8);
}


bool BattleActionData__isActors(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 0;
}


bool BattleActionData__isArtsOrderAttack(BattleActionData_o *this, const MethodInfo *method)
{
  bool flash; // w20
  int32_t type; // w19

  if ( (byte_4C5937C & 1) == 0 )
  {
    sub_1C3E564(&BattleCommand_TypeInfo);
    byte_4C5937C = 1;
  }
  flash = this->fields.flash;
  type = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(type, 0) && flash;
}


bool BattleActionData__isBoostSkill(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4C59379 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C59379 = 1;
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


bool BattleActionData__isCommandAttack(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w20
  int32_t v4; // w20
  int32_t v5; // w20
  int32_t v7; // w19

  if ( (byte_4C5937B & 1) == 0 )
  {
    sub_1C3E564(&BattleCommand_TypeInfo);
    byte_4C5937B = 1;
  }
  type = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isARTS(type, 0) )
    return 1;
  v4 = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isQUICK(v4, 0) )
    return 1;
  v5 = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isBUSTER(v5, 0) )
    return 1;
  v7 = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isADDATTACK(v7, 0);
}


bool BattleActionData__isCommonEnemyAttack(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w8

  type = this->fields.type;
  return type == 10 || type == 11;
}


bool BattleActionData__isDeadMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4C59376 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C59376 = 1;
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


bool BattleActionData__isEndCamera(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.endcameraname != 0;
}


bool BattleActionData__isEnemyMaster(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 4;
}


bool BattleActionData__isField(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


bool BattleActionData__isGrandArtsOrderAttack(BattleActionData_o *this, const MethodInfo *method)
{
  bool flash; // w21
  int32_t type; // w20

  if ( (byte_4C5937D & 1) == 0 )
  {
    sub_1C3E564(&BattleCommand_TypeInfo);
    byte_4C5937D = 1;
  }
  flash = this->fields.flash;
  type = this->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(type, 0) && flash && this->fields.three;
}


bool BattleActionData__isLoadImmediateEntryServant(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 5;
}


bool BattleActionData__isMotion(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 3;
}


bool BattleActionData__isReflectedAttackSideEffect(
        BattleActionData_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_KeyValuePair_int__int___o *attackSideEffectedSvtIds; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v6; // x1

  if ( (byte_4C593DB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
    byte_4C593DB = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    sub_1C3E7C0(0, pairAttackAndTarget);
  v6 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v6,
           (const MethodInfo_3728D6C *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_4C593D9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C593D9 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_1C3E7C0(0, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4C59377 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C59377 = 1;
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


bool BattleActionData__isSkill(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4C59378 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C59378 = 1;
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


bool BattleActionData__isSkillCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  return skillInfo
      && ((int (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
           skillInfo,
           skillInfo->klass->vtable._9_getCutInId.method) >= 1
      && (this->fields.state & 0xFFFFFFFD) == 0;
}


bool BattleActionData__isSystem(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 1;
}


bool BattleActionData__isTypeEnemyCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593C1 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593C1 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_CUTIN == this->fields.type;
}


bool BattleActionData__isTypeEnemySpellCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593C2 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593C2 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_SPELL_CUTIN == this->fields.type;
}


bool BattleActionData__isTypeMasterCommandSpell(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_4C593C0 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593C0 = 1;
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


bool BattleActionData__isTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593BC & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593BC = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERARTS == this->fields.type;
}


bool BattleActionData__isTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593BD & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593BD = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERBUSTER == this->fields.type;
}


bool BattleActionData__isTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593BE & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593BE = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERQUICK == this->fields.type;
}


bool BattleActionData__isTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593B8 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593B8 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_TW == this->fields.type;
}


void BattleActionData__reflectServantLogicResult(
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

  if ( (byte_4C593E0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_4C593E0 = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_19:
    sub_1C3E7C0(servantLogicResultList, v5);
  if ( *((int *)servantLogicResultList + 6) >= 1 )
  {
    v7 = 0;
    do
    {
      servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                 v7,
                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !servantLogicResultList || !data )
        goto LABEL_19;
      ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0);
      if ( ServantData )
      {
        v9 = ServantData;
        servantLogicResultList = this->fields.servantLogicResultList;
        if ( !servantLogicResultList )
          goto LABEL_19;
        servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                   v7,
                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
        if ( !servantLogicResultList )
          goto LABEL_19;
        v10 = *((_DWORD *)servantLogicResultList + 5);
        if ( v10 != -1 && BattleServantData__getNowHp(v9, 0) != v10 )
        {
          BattleServantData__setHp(v9, v10, 0, 0, 0);
          BattleServantData__updateHp(v9, 0, 0);
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
      System_Array__Clear(*((System_Array_o **)servantLogicResultList + 2), 0, v11, 0);
  }
}


void BattleActionData__saveServantLogicResult(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
{
  void *servantLogicResultList; // x0
  int32_t v6; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v8; // x22
  Il2CppObject *Item; // x23

  if ( (byte_4C593DF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_4C593DF = 1;
  }
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_13:
    sub_1C3E7C0(servantLogicResultList, data);
  v6 = 0;
  while ( v6 < *((_DWORD *)servantLogicResultList + 6) )
  {
    servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)servantLogicResultList,
                               v6,
                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    if ( !servantLogicResultList || !data )
      goto LABEL_13;
    ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0);
    if ( ServantData )
    {
      v8 = ServantData;
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_13;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)servantLogicResultList,
               v6,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      servantLogicResultList = (void *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v8->klass->vtable._13_get_resultHp.methodPtr)(
                                         v8,
                                         v8->klass->vtable._13_get_resultHp.method);
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


void BattleActionData__servantLogicResultClear(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_o *v2; // x19
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v6; // w9

  v2 = this;
  if ( (byte_4C593E1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    this = (BattleActionData_o *)sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    byte_4C593E1 = 1;
  }
  servantLogicResultList = v2->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_1C3E7C0(this, method);
  size = servantLogicResultList->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)servantLogicResultList->fields._items;
    v6 = servantLogicResultList->fields._version + 1;
    servantLogicResultList->fields._size = 0;
    servantLogicResultList->fields._version = v6;
    System_Array__Clear(items, 0, size, 0);
  }
}


void BattleActionData__setBuffData(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        DataVals_o *vals,
        BattleActionData_BuffData_o *parentBuffData,
        const MethodInfo *method)
{
  BattleActionData_o *v8; // x21
  BattleActionData_BuffData_o *ParentActBuff_k__BackingField; // x8
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 endcameraname_low; // x10
  __int64 v13; // x8

  v8 = this;
  if ( (byte_4C59397 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
    byte_4C59397 = 1;
  }
  if ( vals )
  {
    if ( !data )
      goto LABEL_16;
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    if ( DataVals__isParam(vals, 34, 0) )
      data->fields.statusEffectId = DataVals__GetParam(vals, 34, 0, 0);
  }
  ParentActBuff_k__BackingField = v8->fields._ParentActBuff_k__BackingField;
  if ( !ParentActBuff_k__BackingField )
    ParentActBuff_k__BackingField = parentBuffData;
  if ( !ParentActBuff_k__BackingField )
  {
    BattleActionData__AddBuffList(v8, data, (const MethodInfo *)vals);
    return;
  }
  this = (BattleActionData_o *)ParentActBuff_k__BackingField->fields.AddBuffDataList;
  if ( !this
    || (v10 = *(_QWORD *)&this->fields.state,
        v11 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v10) )
  {
LABEL_16:
    sub_1C3E7C0(this, data);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = v10 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v13 + 32) = data;
    sub_1C3E508((CGThumbnailListItem_o *)(v13 + 32), (int32_t)data, (int32_t)vals, (const MethodInfo *)parentBuffData);
  }
}


void BattleActionData__setChangeBg(
        BattleActionData_o *this,
        int32_t inbgNo,
        int32_t inTp,
        int32_t priority,
        bool isLinkBgIndividuality,
        const MethodInfo *method)
{
  __int64 v11; // x19
  System_Collections_Generic_List_object__o *changeBgList; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CGThumbnailListItem_o *p_changeBgList; // x20
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_4C593AF & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_ChangeBg_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    byte_4C593AF = 1;
  }
  v11 = sub_1C3E7B0(BattleActionData_ChangeBg_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_10;
  *(_DWORD *)(v11 + 32) = inbgNo;
  *(_DWORD *)(v11 + 36) = inTp;
  *(_DWORD *)(v11 + 40) = priority;
  *(_BYTE *)(v11 + 44) = isLinkBgIndividuality;
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = (CGThumbnailListItem_o *)&this->fields.changeBgList;
    v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    p_changeBgList->klass = (CGThumbnailListItem_c *)v17;
    sub_1C3E508(p_changeBgList, (int32_t)v17, v18, v19);
    changeBgList = (System_Collections_Generic_List_object__o *)p_changeBgList->klass;
    if ( !p_changeBgList->klass )
      goto LABEL_10;
  }
  items = changeBgList->fields._items;
  v21 = Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__;
  ++changeBgList->fields._version;
  if ( !items )
LABEL_10:
    sub_1C3E7C0(changeBgList, v13);
  size = changeBgList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      changeBgList,
      (Il2CppObject *)v11,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    changeBgList->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v11;
    sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), v11, v14, v15);
  }
}


void BattleActionData__setCommand(BattleActionData_o *this, BattleCommandData_o *command, const MethodInfo *method)
{
  if ( command )
  {
    this->fields.flash = command->fields.flash;
    this->fields.three = BattleCommandData__isThree(command, 0);
    this->fields.pair = BattleCommandData__isPair(command, 0);
    this->fields.chainCount = command->fields.chainCount;
    this->fields.commandattack = command->fields.actionIndex;
    this->fields.treasureDvcId = command->fields.treasureDvc;
    this->fields.commandType = BattleCommandData__get_type(command, 0);
  }
}


void BattleActionData__setDamageData(
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
  if ( (byte_4C59390 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    byte_4C59390 = 1;
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
    if ( Target__isAllTargets(vals->fields.targetType, 0) )
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
    sub_1C3E7C0(this, data);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = v13 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v16 + 32) = data;
    sub_1C3E508((CGThumbnailListItem_o *)(v16 + 32), (int32_t)data, v11, v12);
  }
}


void BattleActionData__setEffect(BattleActionData_o *this, System_Int32_array *effectList, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.effectlist = effectList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectlist, (int32_t)effectList, (int32_t)method, v3);
}


void BattleActionData__setEndCamera(BattleActionData_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.endcameraname = name;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endcameraname, (int32_t)name, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__setFuncTargetPlayerType(
        BattleActionData_o *this,
        int32_t index,
        bool isTargetEnemy,
        const MethodInfo *method)
{
  BattleActionData_o *v6; // x20
  int v7; // w21
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x20
  int32_t v9; // w2

  v6 = this;
  if ( (byte_4C593E3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    this = (BattleActionData_o *)sub_1C3E564(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
    byte_4C593E3 = 1;
  }
  if ( isTargetEnemy )
    v7 = 2;
  else
    v7 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_1C3E7C0(this, *(_QWORD *)&index);
    if ( funcTargetPlayerTypeList->fields._size > index )
    {
      v9 = System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_379A978 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__)
         | v7;
      System_Collections_Generic_List_Int32Enum___set_Item(
        funcTargetPlayerTypeList,
        index,
        v9,
        (const MethodInfo_379A9CC *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
    }
  }
}


BattleActionData_HealData_o *BattleActionData__setHealData(
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
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  bool isShowForcedEffect; // w8
  __int64 v22; // x9
  __int64 v23; // x8
  bool IsMultiTargetRevival_k__BackingField; // w8

  if ( (byte_4C5939B & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_HealData_TypeInfo);
    byte_4C5939B = 1;
  }
  v17 = sub_1C3E7B0(BattleActionData_HealData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_18;
  *(_DWORD *)(v17 + 32) = targetId;
  *(_DWORD *)(v17 + 36) = healPoint;
  *(_DWORD *)(v17 + 16) = funcIndex;
  *(_DWORD *)(v17 + 40) = bufId;
  *(_BYTE *)(v17 + 45) = isCommandAfter;
  if ( vals )
    isShowForcedEffect = vals->fields.isShowForcedEffect;
  else
    isShowForcedEffect = 0;
  *(_BYTE *)(v17 + 46) = isShowForcedEffect;
  if ( healFuncApplyArgs )
    v22 = 0;
  else
    v22 = v17;
  if ( healFuncApplyArgs )
    v23 = v17;
  else
    v23 = 0;
  if ( !healFuncApplyArgs )
  {
    if ( v22 )
    {
      IsMultiTargetRevival_k__BackingField = 0;
      *(_QWORD *)(v22 + 72) = 0xFFFFFFFF00000000LL;
      *(_DWORD *)(v22 + 80) = -1;
      *(_BYTE *)(v22 + 84) = 0;
      goto LABEL_17;
    }
LABEL_18:
    sub_1C3E7C0(v18, v19);
  }
  *(_QWORD *)(v23 + 72) = *(_QWORD *)&healFuncApplyArgs->fields._RevivalTargetId_k__BackingField;
  *(_DWORD *)(v23 + 80) = healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField;
  *(_BYTE *)(v23 + 84) = healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField;
  IsMultiTargetRevival_k__BackingField = healFuncApplyArgs->fields._IsMultiTargetRevival_k__BackingField;
LABEL_17:
  *(_BYTE *)(v17 + 85) = IsMultiTargetRevival_k__BackingField;
  BattleActionData__setHealData_45660344(this, (BattleActionData_HealData_o *)v17, vals, v20);
  return (BattleActionData_HealData_o *)v17;
}


void BattleActionData__setHealData_45660344(
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
      sub_1C3E7C0(this, 0);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 118, 0, 0);
    data->fields.popValueText = StrParam;
    sub_1C3E508((CGThumbnailListItem_o *)&data->fields.popValueText, (int32_t)StrParam, v7, v8);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


void BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C5937A & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    byte_4C5937A = 1;
  }
  v5 = sub_1C3E60C(int___TypeInfo, 1);
  if ( !v5 )
    sub_1C3E7C0(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C3E7C8(v5, v5);
  *(_DWORD *)(v5 + 32) = pttargetId;
  this->fields.pttargetIds = (struct System_Int32_array *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.pttargetIds, v5, v7, v8);
}


void BattleActionData__setPTTargetId_45645936(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.pttargetIds = pttargetIds;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.pttargetIds, (int32_t)pttargetIds, (int32_t)method, v3);
}


void BattleActionData__setReplaceMember(
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

  if ( (byte_4C5939F & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_ReplaceMember_TypeInfo);
    byte_4C5939F = 1;
  }
  v11 = sub_1C3E7B0(BattleActionData_ReplaceMember_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C3E7C0(v12, v13);
  *(_DWORD *)(v11 + 36) = outUniqueId;
  *(_DWORD *)(v11 + 40) = inUniqueId;
  *(_DWORD *)(v11 + 32) = index;
  *(_DWORD *)(v11 + 16) = funcIndex;
  BattleActionData__setReplaceMember_45661192(this, (BattleActionData_ReplaceMember_o *)v11, v14);
}


void BattleActionData__setReplaceMember_45661192(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *replacememberlist; // x0
  CGThumbnailListItem_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C593A0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    byte_4C593A0 = 1;
  }
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (CGThumbnailListItem_o *)&this->fields.replacememberlist;
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_replacememberlist, (int32_t)v8, v9, v10);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
    if ( !p_replacememberlist->klass )
      goto LABEL_9;
  }
  items = replacememberlist->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__;
  ++replacememberlist->fields._version;
  if ( !items )
LABEL_9:
    sub_1C3E7C0(replacememberlist, data);
  size = replacememberlist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replacememberlist,
      (Il2CppObject *)data,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    replacememberlist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *shiftServantList; // x0
  CGThumbnailListItem_o *p_shiftServantList; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C593A9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    byte_4C593A9 = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = (CGThumbnailListItem_o *)&this->fields.shiftServantList;
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    p_shiftServantList->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_shiftServantList, (int32_t)v8, v9, v10);
    shiftServantList = (System_Collections_Generic_List_object__o *)p_shiftServantList->klass;
    if ( !p_shiftServantList->klass )
      goto LABEL_9;
  }
  items = shiftServantList->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__;
  ++shiftServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1C3E7C0(shiftServantList, data);
  size = shiftServantList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      shiftServantList,
      (Il2CppObject *)data,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    shiftServantList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void BattleActionData__setStateActors(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void BattleActionData__setStateField(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void BattleActionData__setStateMotion(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
}


void BattleActionData__setStateSystem(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void BattleActionData__setSummonServant(
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
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *summonServantList; // x0
  CGThumbnailListItem_o *p_summonServantList; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4C593A6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    sub_1C3E564(&BattleActionData_SummonServant_TypeInfo);
    byte_4C593A6 = 1;
  }
  v13 = sub_1C3E7B0(BattleActionData_SummonServant_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = funcIndex;
  *(_DWORD *)(v13 + 32) = uniqueId;
  *(_DWORD *)(v13 + 36) = unloadUniqueId;
  *(_BYTE *)(v13 + 40) = isEffect;
  *(_DWORD *)(v13 + 44) = callSvtEffectId;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = (CGThumbnailListItem_o *)&this->fields.summonServantList;
    v19 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    p_summonServantList->klass = (CGThumbnailListItem_c *)v19;
    sub_1C3E508(p_summonServantList, (int32_t)v19, v20, v21);
    summonServantList = (System_Collections_Generic_List_object__o *)p_summonServantList->klass;
    if ( !p_summonServantList->klass )
      goto LABEL_9;
  }
  items = summonServantList->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__;
  ++summonServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1C3E7C0(summonServantList, v14);
  size = summonServantList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      summonServantList,
      (Il2CppObject *)v13,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    summonServantList->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1C3E508((CGThumbnailListItem_o *)(v25 + 4), v13, v15, v16);
  }
}


void BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593B9 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593B9 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERARTS;
}


void BattleActionData__setTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593BA & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593BA = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERBUSTER;
}


void BattleActionData__setTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593BB & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593BB = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERQUICK;
}


void BattleActionData__setTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_4C593B7 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593B7 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_TW;
}


void BattleActionData__set_ChangeField(
        BattleActionData_o *this,
        BattleActionData_AfterChangeField_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ChangeField_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ChangeField_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActionData__set_ChangeModelList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ChangeModelList_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ChangeModelList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData__set_DispMsgList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DispMsgList_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._DispMsgList_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActionData__set_FirstAtkMainTargetId(BattleActionData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._FirstAtkMainTargetId_k__BackingField = value;
}


void BattleActionData__set_HpDecreaseFuncTargetHash(
        BattleActionData_o *this,
        System_Collections_Generic_HashSet_int__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._HpDecreaseFuncTargetHash_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData__set_IntervalBuffDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData__set_IsFuncTargetAllDead(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsFuncTargetAllDead_k__BackingField = value;
}


void BattleActionData__set_IsNotSkillSkip(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNotSkillSkip_k__BackingField = value;
}


void BattleActionData__set_IsUpdateBuffAfterAction(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsUpdateBuffAfterAction_k__BackingField = value;
}


void BattleActionData__set_MessageType(BattleActionData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MessageType_k__BackingField = value;
}


void BattleActionData__set_NoOperation(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields.noOperation = value;
}


void BattleActionData__set_ParentActBuff(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ParentActBuff_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ParentActBuff_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData__set_ShiftGauge(
        BattleActionData_o *this,
        BattleActionData_BaseShiftGaugeData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ShiftGauge_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ShiftGauge_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActionData__set_TdAfterChangeBgm(
        BattleActionData_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TdAfterChangeBgm_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData__set_WaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._WaitCond_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._WaitCond_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActionData__set_damagedatalist(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DamageData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._damagedatalist = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._damagedatalist, (int32_t)value, (int32_t)method, v3);
}


System_String_o *BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int32_t type; // w8
  Il2CppObject *v10; // x0
  __int64 *v11; // x8
  int v13; // [xsp+Ch] [xbp-24h] BYREF
  int v14; // [xsp+18h] [xbp-18h] BYREF
  int v15; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4C593C3 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_18897/*"effect/BitEffect/bit_buster{0:00}"*/);
    sub_1C3E564(&StringLiteral_18896/*"effect/BitEffect/bit_arts{0:00}"*/);
    sub_1C3E564(&StringLiteral_18904/*"effect/BitEffect/bit_flash02"*/);
    sub_1C3E564(&StringLiteral_18906/*"effect/BitEffect/bit_quick{0:00}"*/);
    byte_4C593C3 = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v14 = 1;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v2, v3, v4, v5, v6, v7);
      v11 = &StringLiteral_18896/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v11, v10, 0);
    case 3:
      v13 = 1;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v2, v3, v4, v5, v6, v7);
      v11 = &StringLiteral_18906/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v11, v10, 0);
    case 2:
      v15 = 1;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v2, v3, v4, v5, v6, v7);
      v11 = &StringLiteral_18897/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v11, v10, 0);
    case 4:
      return (System_String_o *)StringLiteral_18904/*"effect/BitEffect/bit_flash02"*/;
    default:
      return 0;
  }
}


void BattleActionData_AfterChangeField___ctor(
        BattleActionData_AfterChangeField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.fieldChange = fieldChange;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v5, v6);
}


void BattleActionData_AfterChangeField__GetPriorityBG(
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
  if ( (byte_4C59419 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1C3E564(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    byte_4C59419 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v12 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1C3E7B0(Generator_BGFromFieldChangeBGBuff_TypeInfo),
        Generator_BGFromFieldChangeBGBuff___ctor(v12, fieldChange, 0),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, const MethodInfo *))v11->klass->vtable._5_AddBackground.methodPtr)(
                                                        v11,
                                                        v12,
                                                        2,
                                                        v11->klass->vtable._5_AddBackground.method)) == 0 )
  {
    sub_1C3E7C0(this, perf);
  }
  v13 = (int)this;
  v14 = System_Int32__ToString((int)this + 28, 0);
  *bgName = v14;
  sub_1C3E508((CGThumbnailListItem_o *)bgName, (int32_t)v14, v15, v16);
  v17 = System_Int32__ToString(v13 + 32, 0);
  *bgType = v17;
  sub_1C3E508((CGThumbnailListItem_o *)bgType, (int32_t)v17, v18, v19);
}


System_String_o *BattleActionData_AfterChangeField__GetPriorityBgmName(
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
  if ( (byte_4C5941A & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1C3E564(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_4C5941A = 1;
  }
  if ( !perf )
    goto LABEL_13;
  this = (BattleActionData_AfterChangeField_o *)BattlePerformance__get_FieldEnvData(perf, 0);
  if ( !this )
    goto LABEL_13;
  fieldChange = v6->fields.fieldChange;
  if ( !fieldChange )
    goto LABEL_13;
  p_image = &this[1].klass->_1.image;
  this = (BattleActionData_AfterChangeField_o *)System_String__IsNullOrEmpty(fieldChange->fields.bgmName, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0);
    data = perf->fields.data;
    v11 = v6->fields.fieldChange;
    v12 = FieldEnvData;
    v13 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1C3E7B0(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v13, data, v11, 0);
    if ( !v12 )
      goto LABEL_13;
    this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, struct AddBgmArgument_o *, const MethodInfo *))v12->klass->vtable._6_AddBGM.methodPtr)(
                                                    v12,
                                                    v13,
                                                    2,
                                                    v6->fields.addBgmArg,
                                                    v12->klass->vtable._6_AddBGM.method);
    p_image = &this->klass;
  }
  if ( !p_image )
LABEL_13:
    sub_1C3E7C0(this, perf);
  v14 = p_image[6];
  if ( v14 )
    return *(System_String_o **)(v14 + 24);
  return defBgmName;
}


void BattleActionData_AfterChangeField__SetAddBgmArg(
        BattleActionData_AfterChangeField_o *this,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.addBgmArg = arg;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.addBgmArg, (int32_t)arg, (int32_t)method, v3);
}


void BattleActionData_AfterChangeField__SetTakeOverBG(
        BattleActionData_AfterChangeField_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  ;
}


void BattleActionData_AfterChangeField__SetTakeOverBgmName(
        BattleActionData_AfterChangeField_o *this,
        System_String_o *bgmName,
        int32_t bgmId,
        const MethodInfo *method)
{
  ;
}


bool BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
        BattleActionData_AfterChangeField_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8

  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    sub_1C3E7C0(this, method);
  return fieldChange->fields.isAllowSubBgmPlaying;
}


void BattleActionData_AfterChangeTakeOverField___ctor(
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.fieldChange = fieldChange;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fieldChange, (int32_t)fieldChange, v7, v8);
  if ( !fieldEnvData
    || (CurBackGround_k__BackingField = fieldEnvData->fields._CurBackGround_k__BackingField) == 0
    || (v9 = ((__int64 (__fastcall *)(BattleActionData_AfterChangeTakeOverField_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._4_SetTakeOverBG.methodPtr)(
               this,
               *((unsigned int *)&CurBackGround_k__BackingField->fields.isActive + 1),
               (unsigned int)CurBackGround_k__BackingField->fields.id,
               this->klass->vtable._4_SetTakeOverBG.method),
        (CurBGM_k__BackingField = fieldEnvData->fields._CurBGM_k__BackingField) == 0)
    || (BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField) == 0 )
  {
    sub_1C3E7C0(v9, v10);
  }
  ((void (__fastcall *)(BattleActionData_AfterChangeTakeOverField_o *, struct System_String_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_SetTakeOverBgmName.methodPtr)(
    this,
    BgmData_k__BackingField->fields._BgmName_k__BackingField,
    (unsigned int)BgmData_k__BackingField->fields._BgmId_k__BackingField,
    this->klass->vtable._5_SetTakeOverBgmName.method);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData_AfterChangeTakeOverField__SetTakeOverBG(
        BattleActionData_AfterChangeTakeOverField_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8

  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    sub_1C3E7C0(this, *(_QWORD *)&id);
  fieldChange->fields.bgId = id;
  fieldChange->fields.bgType = type;
}


void BattleActionData_AfterChangeTakeOverField__SetTakeOverBgmName(
        BattleActionData_AfterChangeTakeOverField_o *this,
        System_String_o *bgmName,
        int32_t bgmId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  BgmMaster_o *v12; // x22
  struct BattleBuffData_FieldChangeData_o *v13; // x23
  struct BattleBuffData_FieldChangeData_o *v14; // x19

  if ( (byte_4C5941B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C5941B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BgmMaster___);
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange
    || (fieldChange->fields.bgmName = bgmName,
        v12 = (BgmMaster_o *)Master_object,
        sub_1C3E508((CGThumbnailListItem_o *)&fieldChange->fields.bgmName, (int32_t)bgmName, v9, v10),
        !v12)
    || (v13 = this->fields.fieldChange,
        Master_object = (Il2CppObject *)BgmMaster__GetBgmIdFromFileName(v12, bgmName, bgmId, 0),
        !v13)
    || (v13->fields.bgmId = (int)Master_object, (v14 = this->fields.fieldChange) == 0) )
  {
    sub_1C3E7C0(Master_object, v8);
  }
  if ( !v14->fields._HasBgmPriorityInVals_k__BackingField )
    v14->fields.bgmPriority = BgmMaster__GetBgmPriority(v12, v14->fields.bgmId, 0, 0);
}


void BattleActionData_AttackDamageData___ctor(BattleActionData_AttackDamageData_o *this, const MethodInfo *method)
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

  if ( (byte_4C593F6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_int___);
    byte_4C593F6 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8EC78(inited);
  v10 = *(struct System_Int32_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.attackRatio = *v10;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.attackRatio, (int32_t)v11, v2, v3);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, v12);
}


int32_t BattleActionData_AttackDamageData__GetRatioDamageList(
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
  const MethodInfo *v13; // x3
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
  if ( (byte_4C593F5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C593F5 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.attackRatio, 0);
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
    v11 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
    *damageList = v11;
    sub_1C3E508((CGThumbnailListItem_o *)damageList, (int32_t)v11, v12, v13);
    v14 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                      (System_Collections_Generic_IEnumerable_int__o *)this->fields.attackRatio,
                                                      0);
    attackRatio = this->fields.attackRatio;
    if ( !attackRatio )
      goto LABEL_20;
    v17 = 0;
    v18 = 0;
    v19 = (int)v14;
    v20 = damage;
    while ( (__int64)v17 < (int)(attackRatio->max_length - 1) )
    {
      if ( v17 >= (unsigned int)attackRatio->max_length )
        sub_1C3E7C8(v14, v15);
      v14 = *damageList;
      v21 = (int)(attackRatio->m_Items[v17] * (__int64)v20 / v19) < 1;
      if ( v21 && v5 )
        v22 = 1;
      else
        v22 = attackRatio->m_Items[v17] * (__int64)v20 / v19;
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              v22,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            attackRatio = this->fields.attackRatio;
          }
          else
          {
            v14->fields._size = size + 1;
            items->m_Items[size] = v22;
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
      sub_1C3E7C0(v14, v15);
    }
    v28 = v14->fields._size;
    if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        damage,
        *(const MethodInfo_379843C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = v28 + 1;
      v26->m_Items[v28] = damage;
    }
    damage += v18;
  }
  return damage;
}


void BattleActionData_AttackDamageData__SetAttackRatio(
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
  if ( (byte_4C593F4 & 1) != 0 )
  {
    if ( ratio )
      goto LABEL_3;
  }
  else
  {
    this = (BattleActionData_AttackDamageData_o *)sub_1C3E564(&Method_System_Array_Empty_int___);
    byte_4C593F4 = 1;
    if ( klass )
    {
LABEL_3:
      if ( v6 )
        goto LABEL_4;
LABEL_15:
      sub_1C3E7C0(this, ratio);
    }
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  this = *(BattleActionData_AttackDamageData_o **)(v7[7] + 16LL);
  if ( (BYTE5(this[1].fields.atknplist) & 1) == 0 )
    this = (BattleActionData_AttackDamageData_o *)sub_1C8EC78(inited);
  klass = (struct System_Int32_array *)this->fields._EffectFlipProc_k__BackingField->klass;
  if ( !v6 )
    goto LABEL_15;
LABEL_4:
  v6->fields.attackRatio = klass;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.attackRatio, (int32_t)klass, (int32_t)method, v3);
}


void BattleActionData_BaseData___ctor(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData_BaseData__CheckEntryBuffEffect(
        BattleActionData_BaseData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return this->fields.IsForceBuffEffect
      || svtData
      && (svtData->fields.isEntry
       || (((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, const MethodInfo *))svtData->klass->vtable._15_get_IsAiNpc.methodPtr)(
             svtData,
             svtData->klass->vtable._15_get_IsAiNpc.method,
             method)
         & 1) != 0);
}


void BattleActionData_BaseData__InitAddOrder(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  struct BattleActionData_StaticFields *static_fields; // x8
  int32_t addActionOrder; // w9

  if ( (byte_4C593EC & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C593EC = 1;
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


int32_t BattleActionData_BaseData__get_AddOrder(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  return this->fields._AddOrder_k__BackingField;
}


bool BattleActionData_BaseData__get_IsSubstituteBuffSkill(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  return this->fields._IsSubstituteBuffSkill_k__BackingField;
}


void BattleActionData_BaseData__set_AddOrder(
        BattleActionData_BaseData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AddOrder_k__BackingField = value;
}


void BattleActionData_BaseData__set_IsSubstituteBuffSkill(
        BattleActionData_BaseData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSubstituteBuffSkill_k__BackingField = value;
}


void BattleActionData_BaseShiftGaugeData___ctor(BattleActionData_BaseShiftGaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(
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
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C59407 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_1C3E564(&BattleAction_UpHpDataBeforeShift_TypeInfo);
    byte_4C59407 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v10 = (BattleAction_UpHpDataBeforeShift_o *)sub_1C3E7B0(BattleAction_UpHpDataBeforeShift_TypeInfo);
  BattleAction_UpHpDataBeforeShift___ctor(v10, curGaugeIndex, prevHp, curHp, 0);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v16 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1C3E7C0(v11, v12);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v10,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v10;
    sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v13, v14);
  }
}


BattleServantHpShiftComponent_EffectData_o *BattleActionData_BaseShiftGaugeData__GetBeforeEffectData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1

  if ( (byte_4C59403 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_1C3E564(&StringLiteral_20049/*"hp_iconeffect_before"*/);
    byte_4C59403 = 1;
  }
  v2 = sub_1C3E7B0(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0);
  if ( !v2 )
    sub_1C3E7C0(v3, v4);
  v7 = StringLiteral_20049/*"hp_iconeffect_before"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_20049/*"hp_iconeffect_before"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v2 + 24), v7, v5, v6);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


BattleAction_ShiftHpData_o *BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_4C59406 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_ShiftHpData___);
    byte_4C59406 = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_object__51281812(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0,
                                         (const MethodInfo_30E7F94 *)Method_BasicHelper_IndexValue_ShiftHpData___);
}


void BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v4 = this;
  if ( (byte_4C59404 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ShiftHpData___ctor__);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_1C3E564(&System_Collections_Generic_List_ShiftHpData__TypeInfo);
    byte_4C59404 = 1;
  }
  if ( !svtData )
    sub_1C3E7C0(this, svtData);
  v4->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ShiftHpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v4->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._ShiftHpDataList_k__BackingField, (int32_t)v5, v6, v7);
}


void BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData___c_c *v3; // x0
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  System_Action_object__o *_9__34_0; // x20
  Il2CppObject *v6; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C59405 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ShiftHpData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
    sub_1C3E564(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__);
    sub_1C3E564(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_4C59405 = 1;
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
    _9__34_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ShiftHpData__TypeInfo);
    System_Action_object____ctor(
      _9__34_0,
      v6,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      0);
    static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v8, v9);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_1C3E7C0(v3, method);
  System_Collections_Generic_List_object___ForEach(
    ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
}


bool BattleActionData_BaseShiftGaugeData__IsPlaying(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields._PlayedState_k__BackingField & state) < 0) ^ v3
         | ((this->fields._PlayedState_k__BackingField & state) == 0));
}


void BattleActionData_BaseShiftGaugeData__OffState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  this->fields._PlayedState_k__BackingField &= ~state;
}


void BattleActionData_BaseShiftGaugeData__OnNotUpdateState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  this->fields._NotShiftUpdateState_k__BackingField |= state;
}


void BattleActionData_BaseShiftGaugeData__OnState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  this->fields._PlayedState_k__BackingField |= state;
}


int32_t BattleActionData_BaseShiftGaugeData__get_NotShiftUpdateState(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._NotShiftUpdateState_k__BackingField;
}


int32_t BattleActionData_BaseShiftGaugeData__get_PlayedState(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._PlayedState_k__BackingField;
}


System_Collections_Generic_List_ShiftHpData__o *BattleActionData_BaseShiftGaugeData__get_ShiftHpDataList(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._ShiftHpDataList_k__BackingField;
}


int32_t BattleActionData_BaseShiftGaugeData__get_TargetId(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


void BattleActionData_BaseShiftGaugeData__set_NotShiftUpdateState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NotShiftUpdateState_k__BackingField = value;
}


void BattleActionData_BaseShiftGaugeData__set_PlayedState(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PlayedState_k__BackingField = value;
}


void BattleActionData_BaseShiftGaugeData__set_ShiftHpDataList(
        BattleActionData_BaseShiftGaugeData_o *this,
        System_Collections_Generic_List_ShiftHpData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ShiftHpDataList_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ShiftHpDataList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData_BaseShiftGaugeData__set_TargetId(
        BattleActionData_BaseShiftGaugeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void BattleActionData_BaseShiftGaugeData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C59408 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_4C59408 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void BattleActionData_BaseShiftGaugeData___c___ctor(
        BattleActionData_BaseShiftGaugeData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_BaseShiftGaugeData___c___InitShiftHpPos_b__34_0(
        BattleActionData_BaseShiftGaugeData___c_o *this,
        BattleAction_ShiftHpData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  BattleAction_ShiftHpData__InitHpIndex(x, 0);
}


void BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C593FE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    byte_4C593FE = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.removeBuffList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
  this->fields.AddBuffDataList = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.AddBuffDataList, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData_BuffData__DisplayBuff(
        BattleActionData_BuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  return 0;
}


void BattleActionData_BuffData__ExecAfterEffectProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_effectProcList; // x19
  System_Collections_ICollection_o *effectProcList; // t1
  System_Collections_Generic_List_object__o *klass; // x20
  System_Action_object__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C593FC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionEffect_Base__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
    sub_1C3E564(&Method_BattleActionData_BuffData___c__DisplayClass67_0__ExecAfterEffectProc_b__0__);
    sub_1C3E564(&BattleActionData_BuffData___c__DisplayClass67_0_TypeInfo);
    byte_4C593FC = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData_BuffData___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = data;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  effectProcList = (System_Collections_ICollection_o *)this->fields.effectProcList;
  p_effectProcList = (CGThumbnailListItem_o *)&this->fields.effectProcList;
  if ( BasicHelper__IsNullOrEmpty(effectProcList, 0) )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
  v13 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionData_BuffData___c__DisplayClass67_0__ExecAfterEffectProc_b__0__,
    0);
  if ( !klass )
LABEL_7:
    sub_1C3E7C0(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    klass,
    (System_Action_T__o *)v13,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
  p_effectProcList->klass = 0;
  sub_1C3E508(p_effectProcList, 0, v14, v15);
}


void BattleActionData_BuffData__ExecPreActionProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *effectProcList; // x19
  System_Action_object__o *v11; // x20

  if ( (byte_4C593FB & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionEffect_Base__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
    sub_1C3E564(&Method_BattleActionData_BuffData___c__DisplayClass66_0__ExecPreActionProc_b__0__);
    sub_1C3E564(&BattleActionData_BuffData___c__DisplayClass66_0_TypeInfo);
    byte_4C593FB = 1;
  }
  v5 = sub_1C3E7B0(BattleActionData_BuffData___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = data;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0) )
    return;
  effectProcList = (System_Collections_Generic_List_object__o *)this->fields.effectProcList;
  v11 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActionData_BuffData___c__DisplayClass66_0__ExecPreActionProc_b__0__,
    0);
  if ( !effectProcList )
LABEL_7:
    sub_1C3E7C0(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    effectProcList,
    (System_Action_T__o *)v11,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
}


System_Int32_array *BattleActionData_BuffData__GetDisplayEffectIds(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    sub_1C3E7C0(this, 0);
  if ( !arg->fields.overwriteEffectIds )
    return this->fields.effectList;
  if ( this->fields.isMiss )
    return 0;
  if ( this->fields.IsNoEffect )
    return 0;
  return arg->fields.overwriteEffectIds;
}


BattleBuffData_o *BattleActionData_BuffData__GetTargetBattleBuffData(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *result; // x0

  if ( !data )
    sub_1C3E7C0(this, 0);
  result = (BattleBuffData_o *)BattleData__getServantData(data, this->fields.targetId, 0);
  if ( result )
    return (BattleBuffData_o *)result[4].fields._tmpBuffMst;
  return result;
}


bool BattleActionData_BuffData__IsEnableSideEffect(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( this->fields.statusEffectId == -1 )
    return 0;
  if ( !arg )
    sub_1C3E7C0(this, 0);
  return !arg->fields.isTreasureDevice;
}


bool BattleActionData_BuffData__IsPopLabel(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.popLabel, 0) || this->fields._PopTextEffectId_k__BackingField > 0;
}


bool BattleActionData_BuffData__IsUpdateBuffType(
        BattleActionData_BuffData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.updateType & type) < 0) ^ v3 | ((this->fields.updateType & type) == 0));
}


void BattleActionData_BuffData__OnUpdateBuffType(
        BattleActionData_BuffData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  this->fields.updateType |= type;
}


void BattleActionData_BuffData__ResetCheckHideWhenDead(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  this->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


void BattleActionData_BuffData__SetActionEffectProc(
        BattleActionData_BuffData_o *this,
        BattleActionEffect_Base_o *effectProc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *klass; // x0
  CGThumbnailListItem_o *p_effectProcList; // x20
  struct System_Collections_Generic_List_BattleActionEffect_Base__o *effectProcList; // t1
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4C593FA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    byte_4C593FA = 1;
  }
  effectProcList = this->fields.effectProcList;
  p_effectProcList = (CGThumbnailListItem_o *)&this->fields.effectProcList;
  klass = (System_Collections_Generic_List_object__o *)effectProcList;
  if ( !effectProcList )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    p_effectProcList->klass = (CGThumbnailListItem_c *)v9;
    sub_1C3E508(p_effectProcList, (int32_t)v9, v10, v11);
    klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
    if ( !p_effectProcList->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v13 = Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__;
  ++klass->fields._version;
  if ( !items )
LABEL_9:
    sub_1C3E7C0(klass, effectProc);
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)effectProc,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v15[4] = (Il2CppClass *)effectProc;
    sub_1C3E508((CGThumbnailListItem_o *)(v15 + 4), (int32_t)effectProc, (int32_t)method, v3);
  }
}


void BattleActionData_BuffData__SetCheckHideWhenDeadInfo(
        BattleActionData_BuffData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C593F9 & 1) == 0 )
  {
    sub_1C3E564(&DataVals_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C593F9 = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !vals )
  {
    vals = (DataVals_o *)sub_1C3E7B0(DataVals_TypeInfo);
    DataVals___ctor(vals, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields.dataVals = vals;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dataVals, (int32_t)vals, (int32_t)method, v3);
}


void BattleActionData_BuffData__SetFuncEntityData(
        BattleActionData_BuffData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o *popupText; // x1
  BattleActionData_BuffData_o *v6; // x19
  System_Int32_array *EffectList; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( funcEnt )
  {
    popupText = funcEnt->fields.popupText;
    v6 = this;
    this->fields.popLabel = popupText;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.popLabel, (int32_t)popupText, (int32_t)method, v3);
    *(_QWORD *)&v6->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
    EffectList = FunctionEntity__getEffectList(funcEnt, 0);
    v6->fields.effectList = EffectList;
    v6 = (BattleActionData_BuffData_o *)((char *)v6 + 72);
    sub_1C3E508((CGThumbnailListItem_o *)v6, (int32_t)EffectList, v8, v9);
    LODWORD(v6->monitor) = FunctionEntity__GetPopupTextEffectId(funcEnt, 0);
  }
}


void BattleActionData_BuffData__SetMultiMessage(
        BattleActionData_BuffData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleMultiMessageDisplay_Argument_o *v5; // x21
  struct BattleMultiMessageDisplay_Argument_o **p_MultiMessageArg_k__BackingField; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C593FD & 1) == 0 )
  {
    sub_1C3E564(&BattleMultiMessageDisplay_Argument_TypeInfo);
    byte_4C593FD = 1;
  }
  v5 = (BattleMultiMessageDisplay_Argument_o *)sub_1C3E7B0(BattleMultiMessageDisplay_Argument_TypeInfo);
  BattleMultiMessageDisplay_Argument___ctor(v5, dataVal, 0);
  this->fields._MultiMessageArg_k__BackingField = v5;
  p_MultiMessageArg_k__BackingField = &this->fields._MultiMessageArg_k__BackingField;
  sub_1C3E508((CGThumbnailListItem_o *)p_MultiMessageArg_k__BackingField, (int32_t)v5, v7, v8);
  *((_BYTE *)p_MultiMessageArg_k__BackingField - 181) = 1;
}


void BattleActionData_BuffData__SetSaveTpTurn(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  System_Nullable_int__o v5; // x0
  struct System_Nullable_int__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C593F8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    byte_4C593F8 = 1;
  }
  v5 = (System_Nullable_int__o)&v6;
  v6 = 0;
  System_Nullable_int____ctor(v5, value, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
  this->fields._SaveTpTurnValue_k__BackingField = v6;
}


bool BattleActionData_BuffData__get_ExistEffectProc(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0);
}


bool BattleActionData_BuffData__get_IsCheckHideWhenDead(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._IsCheckHideWhenDead_k__BackingField;
}


bool BattleActionData_BuffData__get_IsSetUpdateBuffType(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.updateType > 0;
}


BattleMultiMessageDisplay_Argument_o *BattleActionData_BuffData__get_MultiMessageArg(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._MultiMessageArg_k__BackingField;
}


int32_t BattleActionData_BuffData__get_PopTextEffectId(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._PopTextEffectId_k__BackingField;
}


System_Nullable_int__o BattleActionData_BuffData__get_SaveTpTurnValue(
        BattleActionData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._SaveTpTurnValue_k__BackingField;
}


int32_t BattleActionData_BuffData__get_saveNpValue(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._saveNpValue_k__BackingField;
}


void BattleActionData_BuffData__setSaveNp(BattleActionData_BuffData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._saveNpValue_k__BackingField = value;
}


void BattleActionData_BuffData__set_IsCheckHideWhenDead(
        BattleActionData_BuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCheckHideWhenDead_k__BackingField = value;
}


void BattleActionData_BuffData__set_MultiMessageArg(
        BattleActionData_BuffData_o *this,
        BattleMultiMessageDisplay_Argument_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MultiMessageArg_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._MultiMessageArg_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData_BuffData__set_PopTextEffectId(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PopTextEffectId_k__BackingField = value;
}


void BattleActionData_BuffData__set_SaveTpTurnValue(
        BattleActionData_BuffData_o *this,
        System_Nullable_int__o value,
        const MethodInfo *method)
{
  this->fields._SaveTpTurnValue_k__BackingField = value;
}


void BattleActionData_BuffData__set_saveNpValue(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._saveNpValue_k__BackingField = value;
}


void BattleActionData_BuffData___c__DisplayClass66_0___ctor(
        BattleActionData_BuffData___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_BuffData___c__DisplayClass66_0___ExecPreActionProc_b__0(
        BattleActionData_BuffData___c__DisplayClass66_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, const MethodInfo *))proc->klass->vtable._4_PreActionProc.methodPtr)(
    proc,
    this->fields.data,
    proc->klass->vtable._4_PreActionProc.method);
}


void BattleActionData_BuffData___c__DisplayClass67_0___ctor(
        BattleActionData_BuffData___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_BuffData___c__DisplayClass67_0___ExecAfterEffectProc_b__0(
        BattleActionData_BuffData___c__DisplayClass67_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, const MethodInfo *))proc->klass->vtable._5_AfterEffectProc.methodPtr)(
    proc,
    this->fields.data,
    proc->klass->vtable._5_AfterEffectProc.method);
}


void BattleActionData_ChangeBg___ctor(BattleActionData_ChangeBg_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_ChangeModelActionData___ctor(
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

  if ( (byte_4C59411 & 1) == 0 )
  {
    sub_1C3E564(&ChangeModelData_TypeInfo);
    byte_4C59411 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._TargetId_k__BackingField = funcTargetId;
  v7 = (ChangeModelData_o *)sub_1C3E7B0(ChangeModelData_TypeInfo);
  ChangeModelData___ctor(v7, 0);
  if ( !dataVal || (Value = DataVals__GetValue(dataVal, 0), !v7) )
    sub_1C3E7C0(Value, v9);
  v7->fields.modelId = Value;
  v7->fields.isKeepChangeModelAfterContinue = DataVals__GetParam(dataVal, 214, 0, 0);
  this->fields._ChangeData_k__BackingField = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ChangeData_k__BackingField, (int32_t)v7, v10, v11);
}


ChangeModelData_o *BattleActionData_ChangeModelActionData__get_ChangeData(
        BattleActionData_ChangeModelActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ChangeData_k__BackingField;
}


int32_t BattleActionData_ChangeModelActionData__get_TargetId(
        BattleActionData_ChangeModelActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


void BattleActionData_ChangeModelActionData__set_ChangeData(
        BattleActionData_ChangeModelActionData_o *this,
        ChangeModelData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ChangeData_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ChangeData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActionData_DamageData___ctor(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  long double inited; // q0
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  struct System_Int32_array **v13; // x8
  struct System_Int32_array *v14; // x1

  if ( (byte_4C593F3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
    byte_4C593F3 = 1;
  }
  this->fields.multiatk = 1;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_379A414 *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.attackSideEffectActList, (int32_t)v3, v4, v5);
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8EC78(inited);
  v13 = *(struct System_Int32_array ***)(v12 + 184);
  v14 = *v13;
  this->fields._ResetDamageArray_k__BackingField = *v13;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ResetDamageArray_k__BackingField, (int32_t)v14, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleActionData_DamageData__GetAttackCountExceptFirst(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( damagelist )
    return (LODWORD(damagelist->max_length) - 1) & ~((LODWORD(damagelist->max_length) - 1) >> 31);
  else
    return 0;
}


int32_t BattleActionData_DamageData__GetEffectId(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Int32_array *damageValueEffectIds; // x0

  if ( (byte_4C593F2 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_int____78190416);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_int___);
    byte_4C593F2 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.damageValueEffectIds, 0) )
    return -1;
  damageValueEffectIds = this->fields.damageValueEffectIds;
  if ( !damageValueEffectIds )
    sub_1C3E7C0(0, v5);
  if ( LODWORD(damageValueEffectIds->max_length) == 1 )
    return System_Linq_Enumerable__First_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)damageValueEffectIds,
             (const MethodInfo_311FFD4 *)Method_System_Linq_Enumerable_First_int___);
  else
    return BasicHelper__IndexValue_int_(
             damageValueEffectIds,
             index,
             -1,
             (const MethodInfo_30E7F2C *)Method_BasicHelper_IndexValue_int____78190416);
}


int32_t BattleActionData_DamageData__GetRatioDamageList(
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
  const MethodInfo *v11; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C593EE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C593EE = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7
    || (items = v7->fields._items, v13 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v7->fields._version,
                                   !items) )
  {
    sub_1C3E7C0(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      damage,
      *(const MethodInfo_379843C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    items->m_Items[size] = damage;
  }
  *damageList = v7;
  sub_1C3E508((CGThumbnailListItem_o *)damageList, (int32_t)v7, v10, v11);
  return damage;
}


int32_t BattleActionData_DamageData__GetResetDamageValue(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4C593EF & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_int____78190416);
    byte_4C593EF = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields._ResetDamageArray_k__BackingField,
           index,
           0,
           (const MethodInfo_30E7F2C *)Method_BasicHelper_IndexValue_int____78190416);
}


void BattleActionData_DamageData__SaveResetDamageArray(
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

  if ( (byte_4C593F0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C593F0 = 1;
  }
  v11 = 0;
  ((void (__fastcall *)(BattleActionData_DamageData_o *, System_Collections_Generic_List_int__o **, _QWORD, bool, const MethodInfo *))this->klass->vtable._4_GetRatioDamageList.methodPtr)(
    this,
    &v11,
    (unsigned int)damage,
    minimumDamageFlg,
    this->klass->vtable._4_GetRatioDamageList.method);
  if ( !v11 )
    sub_1C3E7C0(0, v7);
  v8 = System_Collections_Generic_List_int___ToArray(
         v11,
         (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._ResetDamageArray_k__BackingField = v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ResetDamageArray_k__BackingField, (int32_t)v8, v9, v10);
}


void BattleActionData_DamageData__SetEffectFlipProc(
        BattleActionData_DamageData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  ActEnemyEffectFlipProc_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C593F1 & 1) == 0 )
  {
    sub_1C3E564(&ActEnemyEffectFlipProc_TypeInfo);
    byte_4C593F1 = 1;
  }
  if ( funcEnt )
    funcEnt = (FunctionEntity_o *)FunctionEntity__GetActEnemyEffectFlipDataArray(funcEnt, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)funcEnt, 0) )
  {
    v5 = (ActEnemyEffectFlipProc_o *)sub_1C3E7B0(ActEnemyEffectFlipProc_TypeInfo);
    ActEnemyEffectFlipProc___ctor(v5, (EffectFlipData_array *)funcEnt, 0);
    this->fields._EffectFlipProc_k__BackingField = v5;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._EffectFlipProc_k__BackingField, (int32_t)v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData_DamageData__addAttackSideEffectAction(
        BattleActionData_DamageData_o *this,
        int32_t act,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *attackSideEffectActList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4C593ED & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__);
    byte_4C593ED = 1;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_Int32Enum___Contains(
         attackSideEffectActList,
         act,
         (const MethodInfo_379AFE0 *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
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
    sub_1C3E7C0(attackSideEffectActList, *(_QWORD *)&act);
  }
  size = attackSideEffectActList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      attackSideEffectActList,
      act,
      *(const MethodInfo_379AC68 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    attackSideEffectActList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = act;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData_DamageData__getAtkNp(
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  return atknplist->m_Items[index];
}


int32_t BattleActionData_DamageData__getAttackCount(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    sub_1C3E7C0(this, method);
  return damagelist->max_length;
}


System_Collections_Generic_List_BuffList_ACTION__o *BattleActionData_DamageData__getAttackSideEffectActionList(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.attackSideEffectActList;
}


bool BattleActionData_DamageData__getAvoidance(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.hitStates == 2;
}


bool BattleActionData_DamageData__getCritical(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.critical;
}


// local variable allocation has failed, the output may be wrong!
bool BattleActionData_DamageData__getCriticalPoint(
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  return starlist->m_Items[index] > 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData_DamageData__getCriticalPointCount(
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  return starlist->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData_DamageData__getDamage(
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  return damagelist->m_Items[index];
}


System_Int32_array *BattleActionData_DamageData__getDamageList(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.damagelist;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData_DamageData__getDefNp(
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
    sub_1C3E7C8(this, *(_QWORD *)&index);
  return defnplist->m_Items[index];
}


bool BattleActionData_DamageData__getInvincible(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.hitStates == 1;
}


bool BattleActionData_DamageData__getRegist(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.regist;
}


bool BattleActionData_DamageData__getWeak(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  return this->fields.weak;
}


ActEnemyEffectFlipProc_o *BattleActionData_DamageData__get_EffectFlipProc(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectFlipProc_k__BackingField;
}


bool BattleActionData_DamageData__get_IsDisplayResetDamage(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._ResetDamageArray_k__BackingField,
            0);
}


bool BattleActionData_DamageData__get_IsReactiveDamageGainHp(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.hitStates == 6;
}


BattleBuffData_BuffData_o *BattleActionData_DamageData__get_NoDamageAffectedBuff(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields._NoDamageAffectedBuff_k__BackingField;
}


int32_t BattleActionData_DamageData__get_ReactiveDamageGainHpBuffExecuteEffectId(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields._ReactiveDamageGainHpBuffExecuteEffectId_k__BackingField;
}


System_Int32_array *BattleActionData_DamageData__get_ResetDamageArray(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields._ResetDamageArray_k__BackingField;
}


void BattleActionData_DamageData__set_EffectFlipProc(
        BattleActionData_DamageData_o *this,
        ActEnemyEffectFlipProc_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EffectFlipProc_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._EffectFlipProc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData_DamageData__set_NoDamageAffectedBuff(
        BattleActionData_DamageData_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NoDamageAffectedBuff_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._NoDamageAffectedBuff_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData_DamageData__set_ReactiveDamageGainHpBuffExecuteEffectId(
        BattleActionData_DamageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ReactiveDamageGainHpBuffExecuteEffectId_k__BackingField = value;
}


void BattleActionData_DamageData__set_ResetDamageArray(
        BattleActionData_DamageData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ResetDamageArray_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData_DamageValueFuncDamageData___ctor(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, (const MethodInfo *)ratio);
  this->fields.damageRates = ratio;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.damageRates, (int32_t)ratio, v5, v6);
}


int32_t BattleActionData_DamageValueFuncDamageData__GetRatioDamageList(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_int__o *v11; // x0
  __int64 v12; // x1
  struct System_Int32_array *damageRates; // x21
  il2cpp_array_size_t max_length; // x8
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

  if ( (byte_4C593F7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C593F7 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  *damageList = v8;
  sub_1C3E508((CGThumbnailListItem_o *)damageList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                    (System_Collections_Generic_IEnumerable_int__o *)this->fields.damageRates,
                                                    0);
  damageRates = this->fields.damageRates;
  if ( !damageRates )
    goto LABEL_19;
  max_length = damageRates->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    v16 = (int)v11;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C3E7C8(v11, v12);
      v11 = *damageList;
      if ( !*damageList )
        break;
      v17 = damageRates->m_Items[v15];
      items = v11->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      v12 = v17 * damage / v16;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          v12,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size] = v12;
      }
      LODWORD(max_length) = damageRates->max_length;
      if ( (__int64)++v15 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_1C3E7C0(v11, v12);
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
             (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
    v25 = *damageList;
    v26 = Item;
    v27 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v25, 0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = System_Math__Max_65159900(0, damage - v27, 0);
    System_Collections_Generic_List_int___set_Item(
      v21,
      v23,
      v28 + v26,
      (const MethodInfo_37981A0 *)Method_System_Collections_Generic_List_int__set_Item__);
  }
  return damage;
}


void BattleActionData_DisplayMessageData___ctor(
        BattleActionData_DisplayMessageData_o *this,
        BattleMessageEntity_o *ent,
        ParseBattleMessage_o *parser,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  struct System_String_array *IsNullOrEmpty; // x0
  struct System_String_array *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
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

  if ( (byte_4C59414 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_string___);
    sub_1C3E564(&System_Func_string__int__TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_14482/*"TimePerChara"*/);
    sub_1C3E564(&StringLiteral_3060/*"BaseTime"*/);
    sub_1C3E564(&StringLiteral_9038/*"MessageType"*/);
    sub_1C3E564(&StringLiteral_7741/*"Interval"*/);
    byte_4C59414 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !ent )
    goto LABEL_15;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_1C3E60C(string___TypeInfo, 0);
  }
  else
  {
    if ( !parser )
      goto LABEL_15;
    IsNullOrEmpty = ParseBattleMessage__Replace(parser, ent->fields.message, 0);
  }
  v10 = IsNullOrEmpty;
  if ( !this )
LABEL_15:
    sub_1C3E7C0(IsNullOrEmpty, v10);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Messages_k__BackingField, (int32_t)IsNullOrEmpty, v11, v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_object,
                  (ConstantMaster_o *)Master_object,
                  v14,
                  preMsg,
                  v15);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7741/*"Interval"*/,
                                                         DefInterval,
                                                         0);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_object,
                  v18,
                  preMsg,
                  v19);
  v21 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_3060/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0);
  this->fields.baseTime = (int)v21;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v21,
                      (ConstantMaster_o *)Master_object,
                      v22,
                      preMsg,
                      v23);
  this->fields.timePerChara = BattleMessageEntity__GetScriptInt(
                                ent,
                                (System_String_o *)StringLiteral_14482/*"TimePerChara"*/,
                                DefTimePerChara,
                                0);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v26 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    0);
  this->fields.messageLen = System_Linq_Enumerable__Sum_object_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v26,
                              (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9038/*"MessageType"*/,
                                                MessageType_k__BackingField,
                                                0);
}


int32_t BattleActionData_DisplayMessageData__GetDefBaseTime(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4C59416 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1C3E564(&StringLiteral_2809/*"BATTLE_MSG_BASE_TIME"*/);
    byte_4C59416 = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_1C3E7C0(this, constMst);
  return ConstantMaster__GetValue_41951728(constMst, (System_String_o *)StringLiteral_2809/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0);
}


int32_t BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4C59415 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1C3E564(&StringLiteral_2810/*"BATTLE_MSG_INTERVAL"*/);
    byte_4C59415 = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_1C3E7C0(this, constMst);
  return ConstantMaster__GetValue_41951728(constMst, (System_String_o *)StringLiteral_2810/*"BATTLE_MSG_INTERVAL"*/, 250, 0);
}


int32_t BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4C59417 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1C3E564(&StringLiteral_2890/*"BATTLE_TIME_PER_CHARA"*/);
    byte_4C59417 = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_1C3E7C0(this, constMst);
  return ConstantMaster__GetValue_41951728(constMst, (System_String_o *)StringLiteral_2890/*"BATTLE_TIME_PER_CHARA"*/, 15, 0);
}


void BattleActionData_DisplayMessageData__ResetIntervalTime(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  this->fields.interval = 0;
}


int32_t BattleActionData_DisplayMessageData__StrlenByDisp(
        BattleActionData_DisplayMessageData_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v5; // x1
  bool IsNullOrEmpty; // w8
  int32_t result; // w0

  if ( (byte_4C59418 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C59418 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__ReplaceNameTag(text, 0, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v4 )
      sub_1C3E7C0(0, v5);
    return v4->fields._stringLength;
  }
  return result;
}


float BattleActionData_DisplayMessageData__get_DispTime(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  int32_t baseTime; // w22
  int32_t timePerChara; // w19
  int32_t v6; // w21
  int32_t *p_timePerChara; // t2

  if ( (byte_4C59413 & 1) == 0 )
  {
    sub_1C3E564(&BattleDataDefine_TypeInfo);
    byte_4C59413 = 1;
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


float BattleActionData_DisplayMessageData__get_Interval(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  int32_t interval; // w19

  if ( (byte_4C59412 & 1) == 0 )
  {
    sub_1C3E564(&BattleDataDefine_TypeInfo);
    byte_4C59412 = 1;
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


int32_t BattleActionData_DisplayMessageData__get_MessageType(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageType_k__BackingField;
}


System_String_array *BattleActionData_DisplayMessageData__get_Messages(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Messages_k__BackingField;
}


void BattleActionData_DisplayMessageData__set_MessageType(
        BattleActionData_DisplayMessageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MessageType_k__BackingField = value;
}


void BattleActionData_DisplayMessageData__set_Messages(
        BattleActionData_DisplayMessageData_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Messages_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._Messages_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActionData_DownShiftGaugeData___ctor(BattleActionData_DownShiftGaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_DownShiftGaugeData__AddShiftHpData(
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
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C59410 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_1C3E564(&BattleAction_ShiftDownHpData_TypeInfo);
    byte_4C59410 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftDownHpData_o *)sub_1C3E7B0(BattleAction_ShiftDownHpData_TypeInfo);
  BattleAction_ShiftDownHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v18 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1C3E7C0(v13, v14);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
  }
}


BattleServantHpShiftComponent_EffectData_o *BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1

  if ( (byte_4C5940F & 1) == 0 )
  {
    sub_1C3E564(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_1C3E564(&StringLiteral_20048/*"hp_iconeffect"*/);
    byte_4C5940F = 1;
  }
  v2 = sub_1C3E7B0(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0);
  if ( !v2 )
    sub_1C3E7C0(v3, v4);
  v7 = StringLiteral_20048/*"hp_iconeffect"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_20048/*"hp_iconeffect"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v2 + 24), v7, v5, v6);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


int32_t BattleActionData_DownShiftGaugeData__GetShiftValue(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8
  int32_t shiftDeckIndex; // w9
  int max_length; // w8

  if ( !svtData || (shiftDeckList = svtData->fields.shiftDeckList) == 0 )
    sub_1C3E7C0(this, svtData);
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  max_length = shiftDeckList->max_length;
  if ( shiftDeckIndex + baseValue <= max_length )
    max_length = shiftDeckIndex + baseValue;
  return max_length - shiftDeckIndex;
}


bool BattleActionData_DownShiftGaugeData__IsInvalid(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C3E7C0(this, 0);
  return !BattleServantData__isShiftableServant(svtData, 0);
}


void BattleActionData_DownShiftGaugeData__UpdateMaxShift(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *targetSvtData,
        bool isChangeMaxBreakGauge,
        const MethodInfo *method)
{
  ;
}


System_String_o *BattleActionData_DownShiftGaugeData__get_Motion(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C5940D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8771/*"MOTION_SHIFT_GAUGE_DOWN"*/);
    byte_4C5940D = 1;
  }
  return (System_String_o *)StringLiteral_8771/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C5940E & 1) == 0 )
  {
    sub_1C3E564(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_4C5940E = 1;
  }
  v3 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_1C3E7B0(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
  BattleAction_PlayDownShiftGaugeMain___ctor(v3, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, const MethodInfo *))v3->klass->vtable._7_Init.methodPtr)(
                                                v3,
                                                this,
                                                v3->klass->vtable._7_Init.method);
}


void BattleActionData_EnemyCountChangeData___ctor(
        BattleActionData_EnemyCountChangeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_EntryAllAtOnceServantData___ctor(
        BattleActionData_EntryAllAtOnceServantData_o *this,
        int32_t argUniqueId,
        UnityEngine_GameObject_o *argTargetObject,
        const MethodInfo *method)
{
  BattleActionData_EntryAllAtOnceServantData_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.targetObject = argTargetObject;
  v6 = (BattleActionData_EntryAllAtOnceServantData_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.targetObject) = argUniqueId;
  sub_1C3E508((CGThumbnailListItem_o *)v6, (int32_t)argTargetObject, v7, v8);
}


void BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C593FF & 1) == 0 )
  {
    sub_1C3E564(&BattleActionEffect_UpdateFieldInfo_TypeInfo);
    byte_4C593FF = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v3 = (Il2CppObject *)sub_1C3E7B0(BattleActionEffect_UpdateFieldInfo_TypeInfo);
  System_Object___ctor(v3, 0);
  BattleActionData_BuffData__SetActionEffectProc(
    (BattleActionData_BuffData_o *)this,
    (BattleActionEffect_Base_o *)v3,
    v4);
}


bool BattleActionData_FieldBuffData__DisplayBuff(
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v6 = (BattleActionData_BuffData_o *)this;
  if ( (byte_4C59400 & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59400 = 1;
  }
  if ( !perf )
    goto LABEL_22;
  this = (BattleActionData_FieldBuffData_o *)BattlePerformance__GetFieldPopupPos(perf, 0);
  if ( !arg )
    goto LABEL_22;
  v7 = (UnityEngine_Object_o *)this;
  FieldEffectPos = (UnityEngine_Object_o *)BattlePerformance__GetFieldEffectPos(perf, arg->fields.isTreasureDevice, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActionData_FieldBuffData_o *)UnityEngine_Object__op_Equality(FieldEffectPos, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !arg->fields.isTreasureDevice )
  {
    if ( FieldEffectPos )
      goto LABEL_19;
LABEL_22:
    sub_1C3E7C0(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0);
  if ( !uicamera )
    goto LABEL_22;
  v14 = UnityEngine_Camera__WorldToViewportPoint_71147840(uicamera, position, 0);
  if ( !actorcamera )
    goto LABEL_22;
  v15 = UnityEngine_Camera__ViewportToWorldPoint_71147848(actorcamera, v14, 0);
  if ( !FieldEffectPos )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)FieldEffectPos, v15, 0);
LABEL_19:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldEffectPos, 0);
  BattlePerformance__DisplayFieldBuffEffect(perf, gameObject, v6, arg, 0);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  BattlePerformance__DisplayFieldBuffPopup(
    perf,
    (UnityEngine_Transform_o *)v7,
    v6,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  return 1;
}


BattleBuffData_o *BattleActionData_FieldBuffData__GetTargetBattleBuffData(
        BattleActionData_FieldBuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionData_FieldBuffData_o *)data->fields._FieldEnvData_k__BackingField) == 0 )
    sub_1C3E7C0(this, data);
  return BattleFieldEnvironmentData__get_BuffData((BattleFieldEnvironmentData_o *)this, 0);
}


void BattleActionData_GimmickData___ctor(BattleActionData_GimmickData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_HealData___ctor(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData_HealData__CheckExecHeal(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields.healPoint > 0 || this->fields.isShowForcedHeal;
}


bool BattleActionData_HealData__get_DeadKeepStanding(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields._DeadKeepStanding_k__BackingField;
}


int32_t BattleActionData_HealData__get_EntryIndex(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields._EntryIndex_k__BackingField;
}


int32_t BattleActionData_HealData__get_ExpelledUniqueId(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields._ExpelledUniqueId_k__BackingField;
}


bool BattleActionData_HealData__get_IsMultiTargetRevival(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields._IsMultiTargetRevival_k__BackingField;
}


bool BattleActionData_HealData__get_IsRevival(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField > 0;
}


bool BattleActionData_HealData__get_IsRevivalIncludeMultiTarget(
        BattleActionData_HealData_o *this,
        const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField > 0 || this->fields._IsMultiTargetRevival_k__BackingField;
}


int32_t BattleActionData_HealData__get_RevivalTargetId(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  return this->fields._RevivalTargetId_k__BackingField;
}


void BattleActionData_HealData__set_DeadKeepStanding(
        BattleActionData_HealData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DeadKeepStanding_k__BackingField = value;
}


void BattleActionData_HealData__set_EntryIndex(
        BattleActionData_HealData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EntryIndex_k__BackingField = value;
}


void BattleActionData_HealData__set_ExpelledUniqueId(
        BattleActionData_HealData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ExpelledUniqueId_k__BackingField = value;
}


void BattleActionData_HealData__set_IsMultiTargetRevival(
        BattleActionData_HealData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsMultiTargetRevival_k__BackingField = value;
}


void BattleActionData_HealData__set_RevivalTargetId(
        BattleActionData_HealData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RevivalTargetId_k__BackingField = value;
}


void BattleActionData_MasterBuffData___ctor(
        BattleActionData_MasterBuffData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, (const MethodInfo *)funcEnt);
  this->fields.IsForceBuffEffect = 1;
  if ( !funcEnt )
    sub_1C3E7C0(v5, v6);
  this->fields.popLabelCondensedScaleSize = FunctionEntity__GetPopupTextCondensedScaleSize(funcEnt, 0);
  this->fields.popLabelCondensedScaleValue = FunctionEntity__GetPopupTextCondensedScaleValue(funcEnt, 0);
}


bool BattleActionData_MasterBuffData__DisplayBuff(
        BattleActionData_MasterBuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  struct BattlePerformanceStatus_o *statusPerf; // x9
  BattleActionData_MasterBuffData_o *v5; // x8

  if ( !perf
    || (statusPerf = perf->fields.statusPerf) == 0
    || (v5 = this, (this = (BattleActionData_MasterBuffData_o *)statusPerf->fields.masterPerf) == 0) )
  {
    sub_1C3E7C0(this, perf);
  }
  BattlePerformanceMaster__startMasterBuffEffect((BattlePerformanceMaster_o *)this, v5, 0);
  return 1;
}


bool BattleActionData_MasterBuffData__IsEffectEnable(BattleActionData_MasterBuffData_o *this, const MethodInfo *method)
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
    sub_1C3E7C0(this, method);
  return LODWORD(effectList->max_length) != 0;
}


bool BattleActionData_MasterBuffData__get_IsEnd(BattleActionData_MasterBuffData_o *this, const MethodInfo *method)
{
  return this->fields._IsEnd_k__BackingField;
}


bool BattleActionData_MasterBuffData__get_IsStart(BattleActionData_MasterBuffData_o *this, const MethodInfo *method)
{
  return this->fields._IsStart_k__BackingField;
}


void BattleActionData_MasterBuffData__set_IsEnd(
        BattleActionData_MasterBuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnd_k__BackingField = value;
}


void BattleActionData_MasterBuffData__set_IsStart(
        BattleActionData_MasterBuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsStart_k__BackingField = value;
}


void BattleActionData_MoveToSubMember___ctor(
        BattleActionData_MoveToSubMember_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        bool isSucceeded,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._index_k__BackingField = index;
  this->fields._uniqueId_k__BackingField = uniqueId;
  this->fields.functionIndex = funcIndex;
  this->fields._isSucceeded_k__BackingField = isSucceeded;
}


int32_t BattleActionData_MoveToSubMember__get_index(BattleActionData_MoveToSubMember_o *this, const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


bool BattleActionData_MoveToSubMember__get_isSucceeded(
        BattleActionData_MoveToSubMember_o *this,
        const MethodInfo *method)
{
  return this->fields._isSucceeded_k__BackingField;
}


int32_t BattleActionData_MoveToSubMember__get_uniqueId(
        BattleActionData_MoveToSubMember_o *this,
        const MethodInfo *method)
{
  return this->fields._uniqueId_k__BackingField;
}


void BattleActionData_MoveToSubMember__set_index(
        BattleActionData_MoveToSubMember_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._index_k__BackingField = value;
}


void BattleActionData_MoveToSubMember__set_isSucceeded(
        BattleActionData_MoveToSubMember_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isSucceeded_k__BackingField = value;
}


void BattleActionData_MoveToSubMember__set_uniqueId(
        BattleActionData_MoveToSubMember_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._uniqueId_k__BackingField = value;
}


void BattleActionData_ReplaceMember___ctor(BattleActionData_ReplaceMember_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_ServantLogicResultData___ctor(
        BattleActionData_ServantLogicResultData_o *this,
        const MethodInfo *method)
{
  this->fields.hp = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_ShiftServant___ctor(
        BattleActionData_ShiftServant_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.functionIndex = funcIndex;
}


void BattleActionData_ShiftServant__ResetBeforeWeapon(BattleActionData_ShiftServant_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.Weapon = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.Weapon, 0, v2, v3);
}


void BattleActionData_ShiftServant__SetAddBeforeSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void BattleActionData_ShiftServant__SetAddCheckSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void BattleActionData_ShiftServant__SetBeforeWeapon(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_ShiftServant_WeaponData_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C59401 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_ShiftServant_WeaponData_TypeInfo);
    byte_4C59401 = 1;
  }
  v5 = (BattleActionData_ShiftServant_WeaponData_o *)sub_1C3E7B0(BattleActionData_ShiftServant_WeaponData_TypeInfo);
  BattleActionData_ShiftServant_WeaponData___ctor(v5, svtData, v6);
  this->fields.Weapon = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.Weapon, (int32_t)v5, v7, v8);
}


void BattleActionData_ShiftServant__UpdateAfterShiftData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  ;
}


BattleServantSnapShot_o *BattleActionData_ShiftServant__get_AfterSvtCache(
        BattleActionData_ShiftServant_o *this,
        const MethodInfo *method)
{
  return this->fields._AfterSvtCache_k__BackingField;
}


bool BattleActionData_ShiftServant__get_IsUiUpdated(BattleActionData_ShiftServant_o *this, const MethodInfo *method)
{
  return this->fields._IsUiUpdated_k__BackingField;
}


void BattleActionData_ShiftServant__setBeforeSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( !svtData )
    sub_1C3E7C0(this, 0);
  this->fields.svtId = BattleServantData__getActorSvtId(svtData, 0);
  this->fields.limit = BattleServantData__getDispLimitCount(svtData, 1, 0);
  this->fields.cameraId = BattleServantData__getCameraActionId(svtData, 0);
  this->fields.uniqueId = svtData->fields.uniqueId;
  this->fields.overwriteSvtVoiceId = svtData->fields.overwriteSvtVoiceId;
  this->fields.isNoVoice = BattleServantData__IsNoVoice(svtData, 0);
  this->fields.isHideShadow = svtData->fields.isHideShadow;
  LoadedAssetArgs_k__BackingField = svtData->fields._LoadedAssetArgs_k__BackingField;
  this->fields.loadedAssetArgs = LoadedAssetArgs_k__BackingField;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadedAssetArgs, (int32_t)LoadedAssetArgs_k__BackingField, v6, v7);
  ((void (__fastcall *)(BattleActionData_ShiftServant_o *, BattleServantData_o *, const MethodInfo *))this->klass->vtable._4_SetAddBeforeSvtData.methodPtr)(
    this,
    svtData,
    this->klass->vtable._4_SetAddBeforeSvtData.method);
}


void BattleActionData_ShiftServant__setCheckSvtData(
        BattleActionData_ShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t svtId; // w21
  int32_t limit; // w21
  char v7; // w8
  BattleActionData_ShiftServant_c *klass; // x9

  if ( !svtData )
    sub_1C3E7C0(this, 0);
  svtId = this->fields.svtId;
  if ( svtId == BattleServantData__getActorSvtId(svtData, 0) )
  {
    limit = this->fields.limit;
    v7 = limit != BattleServantData__getDispLimitCount(svtData, 1, 0);
  }
  else
  {
    v7 = 1;
  }
  klass = this->klass;
  this->fields.isChange = v7;
  ((void (__fastcall *)(BattleActionData_ShiftServant_o *, BattleServantData_o *, const MethodInfo *))klass->vtable._5_SetAddCheckSvtData.methodPtr)(
    this,
    svtData,
    klass->vtable._5_SetAddCheckSvtData.method);
}


void BattleActionData_ShiftServant__set_AfterSvtCache(
        BattleActionData_ShiftServant_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AfterSvtCache_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._AfterSvtCache_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActionData_ShiftServant__set_IsUiUpdated(
        BattleActionData_ShiftServant_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUiUpdated_k__BackingField = value;
}


void BattleActionData_ShiftServant_WeaponData___ctor(
        BattleActionData_ShiftServant_WeaponData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    sub_1C3E7C0(v5, v6);
  this->fields._EffectGroupId_k__BackingField = BattleServantData__getWeaponGroup(svtData, 1, 0);
  this->fields._GroupId_k__BackingField = BattleServantData__getWeaponGroup(svtData, 0, 0);
  this->fields._EffectFolder_k__BackingField = BattleServantData__getEffectFolder(svtData, 0);
  this->fields._Scale_k__BackingField = BattleServantData__getWeaponScale(svtData, 0);
  this->fields._Color_k__BackingField = BattleServantData__getWeaponColor(svtData, 0);
}


int32_t BattleActionData_ShiftServant_WeaponData__GetWeaponGroup(
        BattleActionData_ShiftServant_WeaponData_o *this,
        bool isEffect,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 20;
  if ( isEffect )
    v3 = 16;
  return *(_DWORD *)((char *)&this->klass + v3);
}


UnityEngine_Color_o BattleActionData_ShiftServant_WeaponData__get_Color(
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


int32_t BattleActionData_ShiftServant_WeaponData__get_EffectFolder(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectFolder_k__BackingField;
}


int32_t BattleActionData_ShiftServant_WeaponData__get_EffectGroupId(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectGroupId_k__BackingField;
}


int32_t BattleActionData_ShiftServant_WeaponData__get_GroupId(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


int32_t BattleActionData_ShiftServant_WeaponData__get_Scale(
        BattleActionData_ShiftServant_WeaponData_o *this,
        const MethodInfo *method)
{
  return this->fields._Scale_k__BackingField;
}


void BattleActionData_SideEffectData___ctor(
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

  if ( (byte_4C593EB & 1) == 0 )
  {
    sub_1C3E564(&BuffList_ACTION___TypeInfo);
    byte_4C593EB = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_1C3E60C(BuffList_ACTION___TypeInfo, 0);
  this->fields.sideEffectActs = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sideEffectActs, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetId = targetId;
  this->fields.sideEffectActs = sideEffectActs;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sideEffectActs, (int32_t)sideEffectActs, v10, v11);
}


void BattleActionData_SkillShiftServant___ctor(
        BattleActionData_SkillShiftServant_o *this,
        BattleData_o *data,
        int32_t shiftNpcId,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  *(_QWORD *)&this->fields.displayType = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.data = data;
  v6 = (BattleActionData_SkillShiftServant_o *)((char *)v6 + 80);
  v6[-1].fields.limit = 0;
  sub_1C3E508((CGThumbnailListItem_o *)v6, (int32_t)data, v7, v8);
  LODWORD(v6->monitor) = shiftNpcId;
}


void BattleActionData_SkillShiftServant__SetAddBeforeSvtData(
        BattleActionData_SkillShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v3; // x19

  if ( !svtData
    || (v3 = this,
        this->fields.displayType = svtData->fields.displayType,
        (this = (BattleActionData_SkillShiftServant_o *)svtData->fields.deckSvt) == 0) )
  {
    sub_1C3E7C0(this, svtData);
  }
  v3->fields.colorType = BattleDeckServantData__GetDisplayColorType((BattleDeckServantData_o *)this, 0);
}


void BattleActionData_SkillShiftServant__SetAddCheckSvtData(
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
        v5 = colorType != BattleDeckServantData__GetDisplayColorType((BattleDeckServantData_o *)this, 0);
LABEL_7:
        v3->fields.isChange = v5;
        return;
      }
    }
    sub_1C3E7C0(this, svtData);
  }
}


void BattleActionData_SkillShiftServant__UpdateAfterShiftData(
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
  if ( (byte_4C59402 & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_1C3E564(&int___TypeInfo);
    byte_4C59402 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  buffData = v3->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_1C3E60C(int___TypeInfo, 2);
  if ( !this )
    goto LABEL_11;
  v6 = *(_DWORD *)&this->fields.IsForceBuffEffect;
  targetData = (BattleServantData_o *)this;
  if ( !v6 || (this->fields.uniqueId = 10, v6 == 1) )
    sub_1C3E7C8(this, this);
  this->fields.svtId = 24;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypePassiveBuff(buffData, (System_Int32_array *)this, 0),
        BattleServantData__setSkillShiftServant(v3, v4->fields.data, v4->fields.npcId, 0),
        (data = v4->fields.data) == 0)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0 )
  {
LABEL_11:
    sub_1C3E7C0(this, targetData);
  }
  BattleLogic__actClassPassiveSkill((BattleLogic_o *)this, v3->fields.uniqueId, 0);
  BattleActionData_ShiftServant__setCheckSvtData((BattleActionData_ShiftServant_o *)v4, v3, v8);
}


void BattleActionData_SummonServant___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.functionIndex = inFuncIndex;
  this->fields.uniqueId = inUniqueId;
  this->fields.unloadUniqueId = inUnloadUniqueId;
  this->fields.isEffectSummon = v12;
  this->fields.callSvtEffectId = callSvtEffectId;
}


void BattleActionData_TransformServant___ctor(
        BattleActionData_TransformServant_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Index_k__BackingField = index;
  this->fields._UniqueId_k__BackingField = uniqueId;
  this->fields.functionIndex = funcIndex;
  this->fields._OverwriteLimitCount_k__BackingField = overwriteLimitCount;
}


int32_t BattleActionData_TransformServant__get_Index(
        BattleActionData_TransformServant_o *this,
        const MethodInfo *method)
{
  return this->fields._Index_k__BackingField;
}


int32_t BattleActionData_TransformServant__get_OverwriteLimitCount(
        BattleActionData_TransformServant_o *this,
        const MethodInfo *method)
{
  return this->fields._OverwriteLimitCount_k__BackingField;
}


int32_t BattleActionData_TransformServant__get_UniqueId(
        BattleActionData_TransformServant_o *this,
        const MethodInfo *method)
{
  return this->fields._UniqueId_k__BackingField;
}


void BattleActionData_TransformServant__set_Index(
        BattleActionData_TransformServant_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Index_k__BackingField = value;
}


void BattleActionData_TransformServant__set_OverwriteLimitCount(
        BattleActionData_TransformServant_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OverwriteLimitCount_k__BackingField = value;
}


void BattleActionData_TransformServant__set_UniqueId(
        BattleActionData_TransformServant_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UniqueId_k__BackingField = value;
}


void BattleActionData_TreasureDvcAfterChangeBgm___ctor(
        BattleActionData_TreasureDvcAfterChangeBgm_o *this,
        BattleBuffData_ChangeBgmData_o *inChangeBgm,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.changeBgm = inChangeBgm;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.changeBgm, (int32_t)inChangeBgm, v5, v6);
}


System_String_o *BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
        BattleActionData_TreasureDvcAfterChangeBgm_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  BattleActionData_TreasureDvcAfterChangeBgm_o *v5; // x20
  const MethodInfo *v7; // x2
  BattleBuffData_ChangeBgmData_o *changeBgm; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *v9; // x20
  System_String_o *monitor; // x8

  if ( !perf
    || (v5 = this,
        this = (BattleActionData_TreasureDvcAfterChangeBgm_o *)BattlePerformance__get_FieldEnvData(perf, 0),
        (changeBgm = v5->fields.changeBgm) == 0)
    || (v9 = this,
        this = (BattleActionData_TreasureDvcAfterChangeBgm_o *)BattleBuffData_ChangeBgmData__MakeBgmGenerator(
                                                                 changeBgm,
                                                                 perf->fields.data,
                                                                 v7),
        !v9)
    || (this = (BattleActionData_TreasureDvcAfterChangeBgm_o *)((__int64 (__fastcall *)(BattleActionData_TreasureDvcAfterChangeBgm_o *, BattleActionData_TreasureDvcAfterChangeBgm_o *, __int64, _QWORD, _QWORD))v9->klass[1]._1.byval_arg.data)(
                                                                 v9,
                                                                 this,
                                                                 2,
                                                                 0,
                                                                 *(_QWORD *)&v9->klass[1]._1.byval_arg.bits)) == 0 )
  {
    sub_1C3E7C0(this, perf);
  }
  monitor = (System_String_o *)this[1].monitor;
  if ( monitor )
    monitor = (System_String_o *)monitor[1].klass;
  if ( monitor )
    return monitor;
  else
    return defBgmName;
}


bool BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(
        BattleActionData_TreasureDvcAfterChangeBgm_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgm; // x8

  changeBgm = this->fields.changeBgm;
  if ( !changeBgm )
    sub_1C3E7C0(this, method);
  return changeBgm->fields.isAllowSubBgmPlaying;
}


void BattleActionData_UpShiftGaugeData___ctor(BattleActionData_UpShiftGaugeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_UpShiftGaugeData__AddShiftHpData(
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
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C5940C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_1C3E564(&BattleAction_ShiftUpHpData_TypeInfo);
    byte_4C5940C = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftUpHpData_o *)sub_1C3E7B0(BattleAction_ShiftUpHpData_TypeInfo);
  BattleAction_ShiftUpHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v18 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1C3E7C0(v13, v14);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
  }
}


BattleServantHpShiftComponent_EffectData_o *BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1

  if ( (byte_4C5940B & 1) == 0 )
  {
    sub_1C3E564(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_1C3E564(&StringLiteral_20047/*"hp_iconcharge"*/);
    byte_4C5940B = 1;
  }
  v2 = sub_1C3E7B0(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0);
  if ( !v2 )
    sub_1C3E7C0(v3, v4);
  v7 = StringLiteral_20047/*"hp_iconcharge"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_20047/*"hp_iconcharge"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v2 + 24), v7, v5, v6);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


int32_t BattleActionData_UpShiftGaugeData__GetShiftValue(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        int32_t baseValue,
        const MethodInfo *method)
{
  int32_t shiftDeckIndex; // w8
  int32_t shiftSubCount; // w9

  if ( !svtData )
    sub_1C3E7C0(this, 0);
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  shiftSubCount = svtData->fields.shiftSubCount;
  if ( shiftSubCount <= shiftDeckIndex - baseValue )
    shiftSubCount = shiftDeckIndex - baseValue;
  return shiftSubCount - shiftDeckIndex;
}


bool BattleActionData_UpShiftGaugeData__IsInvalid(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C3E7C0(this, 0);
  return svtData->fields.shiftDeckIndex <= svtData->fields.shiftSubCount;
}


void BattleActionData_UpShiftGaugeData__UpdateMaxShift(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *targetSvtData,
        bool isChangeMaxBreakGauge,
        const MethodInfo *method)
{
  int32_t *p_lowLimitShift; // x8
  int shiftSubCount; // w9

  if ( !targetSvtData )
    sub_1C3E7C0(this, 0);
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


System_String_o *BattleActionData_UpShiftGaugeData__get_Motion(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C59409 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8772/*"MOTION_SHIFT_GAUGE_UP"*/);
    byte_4C59409 = 1;
  }
  return (System_String_o *)StringLiteral_8772/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C5940A & 1) == 0 )
  {
    sub_1C3E564(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
    byte_4C5940A = 1;
  }
  v3 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1C3E7B0(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v3, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, const MethodInfo *))v3->klass->vtable._7_Init.methodPtr)(
                                                v3,
                                                this,
                                                v3->klass->vtable._7_Init.method);
}


void BattleActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5941C & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C5941C = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleActionData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionData___c_TypeInfo->static_fields->__9 = (struct BattleActionData___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BattleActionData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleActionData___c___ctor(BattleActionData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c___AddDisplayTriggerIntervalBuff_b__169_0(
        BattleActionData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_1C3E7C0(this, 0);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__Update(intervalData, buff, method);
}


BattleActionData_o *BattleActionData___c___AddSideEffectAfterAction_b__343_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_1C3E7C0(this, 0);
  return act->fields.afterActionData;
}


void BattleActionData___c___EnableSubstituteBuffSkillFlag_b__370_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields._IsSubstituteBuffSkill_k__BackingField = 1;
}


void BattleActionData___c___EnableSubstituteBuffSkillFlag_b__370_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields._IsSubstituteBuffSkill_k__BackingField = 1;
}


void BattleActionData___c___EnableSubstituteBuffSkillFlag_b__370_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields._IsSubstituteBuffSkill_k__BackingField = 1;
}


System_Collections_Generic_List_BattleActionData_BuffData__o *BattleActionData___c___EnumerateAllBuffData_b__140_0(
        BattleActionData___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( x )
    return x->fields.buffdatalist;
  else
    return 0;
}


System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *BattleActionData___c___EnumerateAllBuffData_b__140_1(
        BattleActionData___c_o *this,
        System_Collections_Generic_List_BattleActionData_BuffData__o *x,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *)x;
}


bool BattleActionData___c___ExecUnappliedProcess_b__141_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0);
}


bool BattleActionData___c___ExistFuncSideEffectTrigger_b__175_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t BattleActionData___c___GetExecOrderArrayEx_b__143_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C3E7C0(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t BattleActionData___c___GetExecOrderArray_b__142_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C3E7C0(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


bool BattleActionData___c___GetFuncTargetIds_b__316_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  return x != 0;
}


bool BattleActionData___c___GetFuncTargetIds_b__316_3(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  return x != 0;
}


bool BattleActionData___c___PreActionProcess_b__139_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0);
}


int32_t BattleActionData___c___PreActionProcess_b__139_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._AddOrder_k__BackingField;
}


void BattleActionData___c___ResetAllCheckDead_b__199_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t BattleActionData___c___SetFuncSideEffectTrigger_b__144_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.functionIndex;
}


void BattleActionData___c___SetFuncSideEffectTrigger_b__144_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool BattleActionData___c___SetFuncTargetAllDead_b__156_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return BattleServantData__isAliveLogic(x, 0, 0);
}


void BattleActionData___c___SetPopupOnce_b__145_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.isOncePop = 1;
}


int32_t BattleActionData___c___SetSideEffectCountByTarget_b__331_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.targetId;
}


int32_t BattleActionData___c___SetSideEffectCountByTarget_b__331_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.targetId;
}


void BattleActionData___c___UpdateForceBuffEffectAllTrue_b__176_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.IsForceBuffEffect = 1;
}


void BattleActionData___c___UpdateForceBuffEffectAllTrue_b__176_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.IsForceBuffEffect = 1;
}


void BattleActionData___c___UpdateIntervalBuff_b__166_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C3E7C0(this, 0);
  BattleServantData__updateBuff(svt, 1, 1, 0);
}


int32_t BattleActionData___c___UpdateTargetRangeOfTreasureDevice_b__320_0(
        BattleActionData___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8

  if ( !funcUnit
    || (dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField) == 0
    || (funcEnt = dataVals_k__BackingField->fields.funcEnt) == 0 )
  {
    sub_1C3E7C0(this, funcUnit);
  }
  return funcEnt->fields.targetType;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__323_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__323_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__323_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__323_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__323_4(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_1C3E7C0(this, 0);
  damagelist = x->fields.damagelist;
  if ( damagelist )
    return (LODWORD(damagelist->max_length) - 1) & ~((LODWORD(damagelist->max_length) - 1) >> 31);
  else
    return 0;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__323_5(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


int32_t BattleActionData___c___getListFunctionIndex_b__322_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndex_b__322_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndex_b__322_2(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


void BattleActionData___c__DisplayClass139_0___ctor(
        BattleActionData___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass139_0___PreActionProcess_b__2(
        BattleActionData___c__DisplayClass139_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  BattleActionData_BuffData__ExecPreActionProc(x, this->fields.data, method);
}


void BattleActionData___c__DisplayClass141_0___ctor(
        BattleActionData___c__DisplayClass141_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass141_0___ExecUnappliedProcess_b__1(
        BattleActionData___c__DisplayClass141_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  BattleActionData_BuffData__ExecAfterEffectProc(x, this->fields.data, method);
}


void BattleActionData___c__DisplayClass142_0___ctor(
        BattleActionData___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass142_0___GetExecOrderArray_b__0(
        BattleActionData___c__DisplayClass142_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C5941D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_4C5941D = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1C3E7C0(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


void BattleActionData___c__DisplayClass142_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass142_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C5941E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_4C5941E = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1C3E7C0(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)x;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 4), (int32_t)x, (int32_t)method, v3);
  }
}


void BattleActionData___c__DisplayClass144_0___ctor(
        BattleActionData___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass144_0___SetFuncSideEffectTrigger_b__1(
        BattleActionData___c__DisplayClass144_0_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.functionIndex == this->fields.lastIndex;
}


void BattleActionData___c__DisplayClass156_0___ctor(
        BattleActionData___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass156_0___SetFuncTargetAllDead_b__0(
        BattleActionData___c__DisplayClass156_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.isEnemy != this->fields.isActorEnemy;
}


void BattleActionData___c__DisplayClass168_0___ctor(
        BattleActionData___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass168_0___UpdateDirectIntervalBuffData_b__0(
        BattleActionData___c__DisplayClass168_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !buff )
    sub_1C3E7C0(this, 0);
  return BattleBuffData_BuffData__EqualBuffType(buff, this->fields.buffMst, this->fields.targetType, v3);
}


void BattleActionData___c__DisplayClass186_0___ctor(
        BattleActionData___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass186_0___getDamageList_b__0(
        BattleActionData___c__DisplayClass186_0_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass191_0___ctor(
        BattleActionData___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass191_0___GetDamageArrayDistinctIndex_b__0(
        BattleActionData___c__DisplayClass191_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct BattleActionData_DamageData_o *damage; // x8

  if ( !x || (damage = this->fields.damage) == 0 )
    sub_1C3E7C0(this, x);
  return x->fields.functionIndex == damage->fields.functionIndex;
}


void BattleActionData___c__DisplayClass198_0___ctor(
        BattleActionData___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass198_0___getBuffList_b__0(
        BattleActionData___c__DisplayClass198_0_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass205_0___ctor(
        BattleActionData___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass205_0___getHealList_b__0(
        BattleActionData___c__DisplayClass205_0_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass206_0___ctor(
        BattleActionData___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass206_0___TryGetRevivedServantHealDataArray_b__0(
        BattleActionData___c__DisplayClass206_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._RevivalTargetId_k__BackingField >= 1
      && (x->fields._EntryIndex_k__BackingField == this->fields.entryIndex || this->fields.entryIndex < 0);
}


void BattleActionData___c__DisplayClass211_0___ctor(
        BattleActionData___c__DisplayClass211_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass211_0___getReplaceMember_b__0(
        BattleActionData___c__DisplayClass211_0_o *this,
        BattleActionData_ReplaceMember_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass224_0___ctor(
        BattleActionData___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass224_0___getSummonServant_b__0(
        BattleActionData___c__DisplayClass224_0_o *this,
        BattleActionData_SummonServant_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass244_0___ctor(
        BattleActionData___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass244_0___TryGetUseInFsmFuncParamValue_b__0(
        BattleActionData___c__DisplayClass244_0_o *this,
        UseInFsmFuncParam_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return UseInFsmFuncParam__IsMatch(x, this->fields.condData, 0);
}


void BattleActionData___c__DisplayClass251_0___ctor(
        BattleActionData___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass251_0___TryGetChangeModelData_b__0(
        BattleActionData___c__DisplayClass251_0_o *this,
        BattleActionData_ChangeModelActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._TargetId_k__BackingField == this->fields.funcTargetId;
}


void BattleActionData___c__DisplayClass316_0___ctor(
        BattleActionData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass316_0___GetFuncTargetIds_b__0(
        BattleActionData___c__DisplayClass316_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass316_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C5941F & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass316_0_o *)sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C5941F = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass316_0_o *)v4->fields.ids) == 0 )
    sub_1C3E7C0(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void BattleActionData___c__DisplayClass316_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass316_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass316_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C59420 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass316_0_o *)sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C59420 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass316_0_o *)v4->fields.ids) == 0 )
    sub_1C3E7C0(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void BattleActionData___c__DisplayClass316_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass316_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass316_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C59421 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass316_0_o *)sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C59421 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass316_0_o *)v4->fields.ids) == 0 )
    sub_1C3E7C0(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void BattleActionData___c__DisplayClass324_0___ctor(
        BattleActionData___c__DisplayClass324_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass324_0___GetFunctionIndexArrayNearByCuriousFunc_b__0(
        BattleActionData___c__DisplayClass324_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // x0

  if ( (byte_4C59422 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_int__get_Value__);
    byte_4C59422 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_38DABF8 *)Method_System_Nullable_int__get_Value__) > x;
}


bool BattleActionData___c__DisplayClass324_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass324_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // x0

  if ( (byte_4C59423 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_int__get_Value__);
    byte_4C59423 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_38DABF8 *)Method_System_Nullable_int__get_Value__) == x;
}


bool BattleActionData___c__DisplayClass324_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass324_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // x0

  if ( (byte_4C59424 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_int__get_Value__);
    byte_4C59424 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_38DABF8 *)Method_System_Nullable_int__get_Value__) < x;
}


void BattleActionData___c__DisplayClass330_0___ctor(
        BattleActionData___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass330_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass330_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C3E7C0(this, 0);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, method);
}


void BattleActionData___c__DisplayClass331_0___ctor(
        BattleActionData___c__DisplayClass331_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass331_0___SetSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass331_0_o *this,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass331_0_o *v2; // x19
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  BattleActionData___c_c *v5; // x0
  System_Collections_Generic_List_int__o *targetList; // x20
  System_Func_object__int__o *_9__331_1; // x22
  Il2CppObject *v8; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  BattleActionData___c_c *v13; // x0
  System_Collections_Generic_List_int__o *v14; // x19
  System_Func_object__int__o *_9__331_2; // x21
  Il2CppObject *v16; // x22
  struct BattleActionData___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v2 = this;
  if ( (byte_4C59425 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    sub_1C3E564(&System_Func_BattleActionData_HealData__int__TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__331_1__);
    sub_1C3E564(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__331_2__);
    this = (BattleActionData___c__DisplayClass331_0_o *)sub_1C3E564(&BattleActionData___c_TypeInfo);
    byte_4C59425 = 1;
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
    _9__331_1 = (System_Func_object__int__o *)v5->static_fields->__9__331_1;
    if ( !_9__331_1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = BattleActionData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v5->static_fields->__9;
      _9__331_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__331_1,
        v8,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__331_1__,
        0);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__331_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__331_1;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__331_1, (int32_t)_9__331_1, v10, v11);
    }
    this = (BattleActionData___c__DisplayClass331_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__331_1,
                                                          (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_23;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
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
    _9__331_2 = (System_Func_object__int__o *)v13->static_fields->__9__331_2;
    if ( !_9__331_2 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BattleActionData___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__331_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_BattleActionData_HealData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__331_2,
        v16,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__331_2__,
        0);
      v17 = BattleActionData___c_TypeInfo->static_fields;
      v17->__9__331_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__331_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v17->__9__331_2, (int32_t)_9__331_2, v18, v19);
    }
    this = (BattleActionData___c__DisplayClass331_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__331_2,
                                                          (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v14 )
    {
      System_Collections_Generic_List_int___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_23:
    sub_1C3E7C0(this, method);
  }
}


void BattleActionData___c__DisplayClass332_0___ctor(
        BattleActionData___c__DisplayClass332_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass332_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass332_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C3E7C0(this, 0);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, method);
}


void BattleActionData___c__DisplayClass339_0___ctor(
        BattleActionData___c__DisplayClass339_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass339_0___getSideEffectList_b__0(
        BattleActionData___c__DisplayClass339_0_o *this,
        BattleActionData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1C3E7C0(this, 0);
  return s->fields.actType == this->fields.actType;
}


void BattleActionData___c__DisplayClass343_0___ctor(
        BattleActionData___c__DisplayClass343_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass343_0___AddSideEffectAfterAction_b__0(
        BattleActionData___c__DisplayClass343_0_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || !act )
    sub_1C3E7C0(this, act);
  return BattleActionData__ExistsAddableAfterAction(act, perf->fields.data, method);
}


void BattleActionData___c__DisplayClass353_0___ctor(
        BattleActionData___c__DisplayClass353_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass353_0___addReflectLogicResultServantId_b__0(
        BattleActionData___c__DisplayClass353_0_o *this,
        BattleActionData_ServantLogicResultData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}


void BattleActionData___c__DisplayClass371_0___ctor(
        BattleActionData___c__DisplayClass371_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass371_0___OverwirteFuncIndex_b__0(
        BattleActionData___c__DisplayClass371_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.functionIndex = this->fields.overwriteFuncIndex;
}


void BattleActionData___c__DisplayClass371_0___OverwirteFuncIndex_b__1(
        BattleActionData___c__DisplayClass371_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.functionIndex = this->fields.overwriteFuncIndex;
}


void BattleActionData___c__DisplayClass371_0___OverwirteFuncIndex_b__2(
        BattleActionData___c__DisplayClass371_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  x->fields.functionIndex = this->fields.overwriteFuncIndex;
}