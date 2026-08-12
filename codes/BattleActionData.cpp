void BattleActionData___cctor(const MethodInfo *method)
{
  struct BattleActionData_StaticFields *static_fields; // x8

  if ( (byte_5972EE2 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EE2 = 1;
  }
  static_fields = BattleActionData_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TYPE_DEAD = xmmword_E9D970;
  *(_OWORD *)&static_fields->TYPE_RESURRECTION = xmmword_E9BFC0;
  *(_OWORD *)&static_fields->TYPE_ORDERBUSTER = xmmword_E9C140;
  static_fields->addActionOrder = 0;
}


void BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__c *v3; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_Target_PlayerTypeFlag__c *v25; // x0
  System_Collections_Generic_List_T__o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_int__c *v33; // x0
  System_Collections_Generic_List_int__o *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_List_object__o *v41; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_HashSet_int__o *v48; // x20
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v55; // x20
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  int32_t v62; // w1
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_Collections_Generic_List_object__o *v69; // x20
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_Collections_Generic_List_object__o *v76; // x20
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7

  if ( (byte_5972EE1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_TurnAnimEffectData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972EE1 = 1;
  }
  v3 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.systemTime = -1.0;
  this->fields.imageId = -1;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.motionId = -1;
  *(_QWORD *)&this->fields.commandattack = -1;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1;
  *(_QWORD *)&this->fields.commandAssistId = -1;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.damageSideEffectedSvtIds,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_2213CCC(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v11,
    (const MethodInfo_43B9728 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.attackSideEffectedSvtIds,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantLogicResultList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo;
  this->fields.funcResult = 1;
  v26 = (System_Collections_Generic_List_T__o *)sub_2213CCC(v25);
  System_Collections_Generic_List_Int32Enum____ctor(
    v26,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcTargetPlayerTypeList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.playerAttackPreselectTargetUniqueId = -1;
  v34 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v33);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v34;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcTargetList,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  this->fields._IsUpdateBuffAfterAction_k__BackingField = 1;
  this->fields.npUpdatedMaxDamageIndex = -1;
  v41 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_TurnAnimEffectData___ctor__);
  this->fields._TurnAnimEffectDataList_k__BackingField = (struct System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__o *)v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TurnAnimEffectDataList_k__BackingField,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.sideEffectTriggerFuncIndex = -1;
  v48 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v48,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v48;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int32_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v55,
    (const MethodInfo_3F25574 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v55;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = (int)StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillCutInMessage, v62, v63, v64, v65, v66, v67, v68);
  v69 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v69;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sideEffectList,
    (int32_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData___ctor__);
  this->fields.deferredBattleValueApplyList = (struct System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__o *)v76;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deferredBattleValueApplyList,
    (int32_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__AddAfterActionData(
        BattleActionData_o *this,
        BattleActionData_o *afterActionData,
        bool isPreActCheckDead,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleActionData_o *v10; // x8

  this->fields.afterActionData = afterActionData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.afterActionData,
    (int32_t)afterActionData,
    (System_String_o *)isPreActCheckDead,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v10 = this->fields.afterActionData;
  if ( v10 )
    v10->fields.isPreAfterActCheckDead = isPreActCheckDead;
}


void BattleActionData__AddBuffList(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v9; // x20
  System_Collections_Generic_List_object__o *buffdatalist; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  Il2CppClass **v21; // x0

  v9 = this;
  if ( (byte_5972E89 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    this = (BattleActionData_o *)sub_2213A60(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    byte_5972E89 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  buffdatalist = (System_Collections_Generic_List_object__o *)v9->fields.buffdatalist;
  if ( !buffdatalist )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    v9->fields.buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.buffdatalist,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    buffdatalist = (System_Collections_Generic_List_object__o *)v9->fields.buffdatalist;
    if ( !buffdatalist )
      goto LABEL_11;
  }
  items = buffdatalist->fields._items;
  v19 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__;
  ++buffdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_2213CDC(this, data);
  size = buffdatalist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      buffdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    buffdatalist->fields._size = size + 1;
    v21[4] = (Il2CppClass *)data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 4),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void BattleActionData__AddChangeModelData(
        BattleActionData_o *this,
        BattleActionData_ChangeModelActionData_o *changeModelActionData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v9; // x20
  System_Collections_Generic_List_object__o *ChangeModelList_k__BackingField; // x8
  MissionNaviTransitionBoardItem_o *p_ChangeModelList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0

  v9 = this;
  if ( (byte_5972E9E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData___ctor__);
    this = (BattleActionData_o *)sub_2213A60(&System_Collections_Generic_List_BattleActionData_ChangeModelActionData__TypeInfo);
    byte_5972E9E = 1;
  }
  if ( changeModelActionData )
  {
    ChangeModelList_k__BackingField = (System_Collections_Generic_List_object__o *)v9->fields._ChangeModelList_k__BackingField;
    if ( !ChangeModelList_k__BackingField )
    {
      p_ChangeModelList_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v9->fields._ChangeModelList_k__BackingField;
      v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_ChangeModelActionData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v12,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData___ctor__);
      p_ChangeModelList_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v12;
      sub_2213A04(p_ChangeModelList_k__BackingField, (int32_t)v12, v13, v14, v15, v16, v17, v18);
      ChangeModelList_k__BackingField = (System_Collections_Generic_List_object__o *)p_ChangeModelList_k__BackingField->klass;
      if ( !p_ChangeModelList_k__BackingField->klass )
        goto LABEL_11;
    }
    items = ChangeModelList_k__BackingField->fields._items;
    v20 = Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__Add__;
    ++ChangeModelList_k__BackingField->fields._version;
    if ( !items )
LABEL_11:
      sub_2213CDC(this, changeModelActionData);
    size = ChangeModelList_k__BackingField->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ChangeModelList_k__BackingField,
        (Il2CppObject *)changeModelActionData,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      ChangeModelList_k__BackingField->fields._size = size + 1;
      v22[4] = (Il2CppClass *)changeModelActionData;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v22 + 4),
        (int32_t)changeModelActionData,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
    }
  }
}


void BattleActionData__AddDeferredBattleValueApply(
        BattleActionData_o *this,
        int32_t key,
        int32_t actorId,
        bool isAdd,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *deferredBattleValueApplyList; // x19
  BattleActionData_DeferredBattleValueApplyData_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_5972EDF & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_DeferredBattleValueApplyData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__Add__);
    byte_5972EDF = 1;
  }
  deferredBattleValueApplyList = (System_Collections_Generic_List_object__o *)this->fields.deferredBattleValueApplyList;
  v10 = (BattleActionData_DeferredBattleValueApplyData_o *)sub_2213CCC(BattleActionData_DeferredBattleValueApplyData_TypeInfo);
  BattleActionData_DeferredBattleValueApplyData___ctor(v10, 0);
  if ( !v10
    || (v10->fields.battleValKey = key,
        v10->fields.actorId = actorId,
        v10->fields.isAddFunc = isAdd,
        !deferredBattleValueApplyList)
    || (items = deferredBattleValueApplyList->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__Add__,
        ++deferredBattleValueApplyList->fields._version,
        !items) )
  {
    sub_2213CDC(v11, v12);
  }
  size = deferredBattleValueApplyList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      deferredBattleValueApplyList,
      (Il2CppObject *)v10,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    deferredBattleValueApplyList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v10, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__AddDirectDisplayMessageId(BattleActionData_o *this, int32_t messageId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *directDisplayMessageIdList; // x0
  MissionNaviTransitionBoardItem_o *p_directDisplayMessageIdList; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_5972EA4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5972EA4 = 1;
  }
  directDisplayMessageIdList = this->fields.directDisplayMessageIdList;
  if ( !directDisplayMessageIdList )
  {
    p_directDisplayMessageIdList = (MissionNaviTransitionBoardItem_o *)&this->fields.directDisplayMessageIdList;
    v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    p_directDisplayMessageIdList->klass = (MissionNaviTransitionBoardItem_c *)v7;
    sub_2213A04(p_directDisplayMessageIdList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    directDisplayMessageIdList = (struct System_Collections_Generic_List_int__o *)p_directDisplayMessageIdList->klass;
    if ( !p_directDisplayMessageIdList->klass )
      goto LABEL_9;
  }
  items = directDisplayMessageIdList->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++directDisplayMessageIdList->fields._version;
  if ( !items )
LABEL_9:
    sub_2213CDC(directDisplayMessageIdList, *(_QWORD *)&messageId);
  size = directDisplayMessageIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      directDisplayMessageIdList,
      messageId,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *DispMsgList_k__BackingField; // x0
  MissionNaviTransitionBoardItem_o *p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8

  if ( (byte_5972EA3 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_5972EA3 = 1;
  }
  v9 = (BattleActionData_DisplayMessageData_o *)sub_2213CCC(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor(v9, ent, parser, preMsg, 0);
  DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = (MissionNaviTransitionBoardItem_o *)&this->fields._DispMsgList_k__BackingField;
    v19 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    p_DispMsgList_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v19;
    sub_2213A04(p_DispMsgList_k__BackingField, (int32_t)v19, v20, v21, v22, v23, v24, v25);
    DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)p_DispMsgList_k__BackingField->klass;
    if ( !p_DispMsgList_k__BackingField->klass )
      goto LABEL_10;
  }
  items = DispMsgList_k__BackingField->fields._items;
  v27 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
  ++DispMsgList_k__BackingField->fields._version;
  if ( !items )
LABEL_10:
    sub_2213CDC(DispMsgList_k__BackingField, v10);
  size = DispMsgList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DispMsgList_k__BackingField,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    DispMsgList_k__BackingField->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v9, v11, v12, v13, v14, v15, v16);
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
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__203_0; // x22
  Il2CppObject *v9; // x23
  struct BattleActionData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v5 = this;
  if ( (byte_5972E7D & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__);
    sub_2213A60(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__203_0__);
    this = (BattleActionData_o *)sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E7D = 1;
  }
  if ( !task )
    goto LABEL_12;
  key = task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key;
  this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, task);
    this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  }
  static_fields = *(struct BattleActionData___c_StaticFields **)&this->fields.npPer;
  _9__203_0 = (System_Action_object__o *)static_fields->__9__203_0;
  if ( !_9__203_0 )
  {
    if ( !HIDWORD(this->fields.attackSideEffectedSvtIds) )
    {
      j_il2cpp_runtime_class_init_0(this, task);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__203_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      _9__203_0,
      v9,
      Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__203_0__,
      0);
    v10 = BattleActionData___c_TypeInfo->static_fields;
    v10->__9__203_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__203_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__203_0, (int32_t)_9__203_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !v5 )
LABEL_12:
    sub_2213CDC(this, task);
  BattleActionData__AddUpdateIntervalBuffDict(
    v5,
    key,
    (System_Action_BattleBuffData_BuffData__o *)_9__203_0,
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
  __int64 v7; // x24
  BattleServantData_o *v8; // x21
  BattleBuffData_BuffData_array *UpdateWaitIntervalBuffArray; // x22
  System_Action_object__o *v10; // x23
  const MethodInfo *v11; // x4

  v4 = (Il2CppObject *)this;
  if ( (byte_5972E78 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleBuffData_BuffData__TypeInfo);
    this = (BattleActionData_o *)sub_2213A60(&Method_BattleActionData_UpdateIntervalCurrent__);
    byte_5972E78 = 1;
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
      if ( (unsigned int)v7 >= endcameraname )
        sub_2213CE4(this);
      v8 = (BattleServantData_o *)*((_QWORD *)&v6->fields.actorId + v7);
      if ( !v8 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData(
                                     *((BattleServantData_o **)&v6->fields.actorId + v7),
                                     0);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0);
      v10 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(v10, v4, Method_BattleActionData_UpdateIntervalCurrent__, 0);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v4,
        v8,
        (System_Action_BattleBuffData_BuffData__o *)v10,
        UpdateWaitIntervalBuffArray,
        v11);
      endcameraname = (int)v6->fields.endcameraname;
      if ( (int)++v7 >= endcameraname )
        return ((bool (__fastcall *)(Il2CppObject *, const MethodInfo *))v4->klass->vtable[5].methodPtr)(
                 v4,
                 v4->klass->vtable[5].method);
    }
LABEL_12:
    sub_2213CDC(this, data);
  }
  return ((bool (__fastcall *)(Il2CppObject *, const MethodInfo *))v4->klass->vtable[5].methodPtr)(
           v4,
           v4->klass->vtable[5].method);
}


void BattleActionData__AddHealList(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v9; // x20
  System_Collections_Generic_List_object__o *healdatalist; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  Il2CppClass **v21; // x0

  v9 = this;
  if ( (byte_5972E8D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    this = (BattleActionData_o *)sub_2213A60(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    byte_5972E8D = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  healdatalist = (System_Collections_Generic_List_object__o *)v9->fields.healdatalist;
  if ( !healdatalist )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    v9->fields.healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.healdatalist,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    healdatalist = (System_Collections_Generic_List_object__o *)v9->fields.healdatalist;
    if ( !healdatalist )
      goto LABEL_11;
  }
  items = healdatalist->fields._items;
  v19 = Method_System_Collections_Generic_List_BattleActionData_HealData__Add__;
  ++healdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_2213CDC(this, data);
  size = healdatalist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      healdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    healdatalist->fields._size = size + 1;
    v21[4] = (Il2CppClass *)data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 4),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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

  if ( (byte_5972E76 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_int___);
    sub_2213A60(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__185_0__);
    byte_5972E76 = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v8 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v8,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__185_0__,
        0);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v8,
        (const MethodInfo_3811CEC *)Method_BasicHelper_ForEach_int___);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_5972E93 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__);
    sub_2213A60(&BattleActionData_MoveToSubMember_TypeInfo);
    byte_5972E93 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = (System_Collections_Generic_List_object__o *)this->fields.moveToSubMemberList;
  v12 = sub_2213CCC(BattleActionData_MoveToSubMember_TypeInfo);
  *(_DWORD *)(v12 + 32) = -1;
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 48) = index;
  *(_DWORD *)(v12 + 52) = uniqueId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_BYTE *)(v12 + 56) = isSucceeded;
  if ( !moveToSubMemberList
    || (items = moveToSubMemberList->fields._items,
        v22 = Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
        ++moveToSubMemberList->fields._version,
        !items) )
  {
    sub_2213CDC(v13, v14);
  }
  size = moveToSubMemberList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      moveToSubMemberList,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    moveToSubMemberList->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), v12, v15, v16, v17, v18, v19, v20);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BattlePerformance_o **v14; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  BattleActionData___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__379_1; // x21
  Il2CppObject *v23; // x22
  MissionNaviTransitionBoardItem_o *p__9__379_1; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_5972ECA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleActionData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData___);
    sub_2213A60(&System_Func_BattleActionData__BattleActionData__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__AddSideEffectAfterAction_b__379_1__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass379_0__AddSideEffectAfterAction_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass379_0_TypeInfo);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972ECA = 1;
  }
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass379_0_TypeInfo);
  BattleActionData___c__DisplayClass379_0___ctor((BattleActionData___c__DisplayClass379_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = perf;
  v14 = (BattlePerformance_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)perf, v8, v9, v10, v11, v12, v13);
  sideEffectList = this->fields.sideEffectList;
  v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass379_0__AddSideEffectAfterAction_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v19 = BattleActionData___c_TypeInfo;
  v20 = v17;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v18);
    v19 = BattleActionData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__379_1 = (System_Func_object__object__o *)static_fields->__9__379_1;
  if ( !_9__379_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v18);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__379_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleActionData__BattleActionData__TypeInfo);
    System_Func_object__object____ctor(
      _9__379_1,
      v23,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__379_1__,
      0);
    p__9__379_1 = (MissionNaviTransitionBoardItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__379_1;
    p__9__379_1->klass = (MissionNaviTransitionBoardItem_c *)_9__379_1;
    sub_2213A04(p__9__379_1, (int32_t)_9__379_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__379_1,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v6 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_object_(
                                v31,
                                (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v6 )
    goto LABEL_15;
  v7 = (BattleActionData_array *)v6;
  if ( v6->fields.m_CancellationTokenSource )
  {
    v6 = *v14;
    if ( *v14 )
    {
      BattlePerformance__addActionData(v6, v7, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(v6, v7);
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
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *transformServantlist; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0

  if ( (byte_5972E95 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__);
    sub_2213A60(&BattleActionData_TransformServant_TypeInfo);
    byte_5972E95 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v11 = sub_2213CCC(BattleActionData_TransformServant_TypeInfo);
  *(_DWORD *)(v11 + 32) = -1;
  System_Object___ctor((Il2CppObject *)v11, 0);
  transformServantlist = (System_Collections_Generic_List_object__o *)this->fields.transformServantlist;
  *(_DWORD *)(v11 + 48) = index;
  *(_DWORD *)(v11 + 52) = uniqueId;
  *(_DWORD *)(v11 + 16) = funcIndex;
  *(_DWORD *)(v11 + 56) = overwriteLimitCount;
  if ( !transformServantlist
    || (items = transformServantlist->fields._items,
        v22 = Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
        ++transformServantlist->fields._version,
        !items) )
  {
    sub_2213CDC(v12, v13);
  }
  size = transformServantlist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      transformServantlist,
      (Il2CppObject *)v11,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    transformServantlist->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), v11, v14, v15, v16, v17, v18, v19);
  }
}


BattleActionData_TurnAnimEffectData_o *BattleActionData__AddTurnAnimEffectData(
        BattleActionData_o *this,
        int32_t executePriority,
        int32_t targetId,
        int32_t effectId,
        int32_t turnCount,
        int32_t showBuffGroupId,
        const MethodInfo *method)
{
  __int64 v13; // x19
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *TurnAnimEffectDataList_k__BackingField; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_5972E64 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__Add__);
    sub_2213A60(&BattleActionData_TurnAnimEffectData_TypeInfo);
    byte_5972E64 = 1;
  }
  if ( effectId < 1 )
    return 0;
  v13 = sub_2213CCC(BattleActionData_TurnAnimEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  TurnAnimEffectDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._TurnAnimEffectDataList_k__BackingField;
  *(_DWORD *)(v13 + 16) = executePriority;
  *(_DWORD *)(v13 + 20) = targetId;
  *(_DWORD *)(v13 + 24) = effectId;
  *(_DWORD *)(v13 + 28) = turnCount;
  *(_DWORD *)(v13 + 32) = showBuffGroupId;
  if ( !TurnAnimEffectDataList_k__BackingField
    || (items = TurnAnimEffectDataList_k__BackingField->fields._items,
        v23 = Method_System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__Add__,
        ++TurnAnimEffectDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_2213CDC(TurnAnimEffectDataList_k__BackingField, v14);
  }
  size = TurnAnimEffectDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      TurnAnimEffectDataList_k__BackingField,
      (Il2CppObject *)v13,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    TurnAnimEffectDataList_k__BackingField->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), v13, v15, v16, v17, v18, v19, v20);
  }
  return (BattleActionData_TurnAnimEffectData_o *)v13;
}


void BattleActionData__AddUpdateIntervalBuffDict(
        BattleActionData_o *this,
        BattleServantData_o *svtData,
        System_Action_BattleBuffData_BuffData__o *updateAction,
        BattleBuffData_BuffData_array *intervalArray,
        const MethodInfo *method)
{
  const MethodInfo_43A0D68 *v9; // x4
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x21
  System_Collections_Generic_List_object__o *v15; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v16; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v17; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v18; // 0:x1.16

  if ( (byte_5972E79 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_5972E79 = 1;
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
            (const MethodInfo_3F2613C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      key = v16.fields.key;
      value = v16.fields.value;
      v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v14 )
        goto LABEL_12;
      v18.fields.key = key;
      v18.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v14,
        v18,
        (Il2CppObject *)v15,
        (const MethodInfo_3F25F1C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v16,
                                                                                                    (const MethodInfo_3F25E84 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(IntervalBuffDict_k__BackingField, v10);
  }
}


void BattleActionData__AddUseInFsmFuncParam(
        BattleActionData_o *this,
        UseInFsmFuncParam_o *param,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *useInFsmFuncParamList; // x0
  System_Collections_Generic_List_object__o *v11; // x25
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  do
  {
    if ( (byte_5972E9C & 1) == 0 )
    {
      sub_2213A60(&Method_System_Collections_Generic_List_UseInFsmFuncParam__Add__);
      sub_2213A60(&Method_System_Collections_Generic_List_UseInFsmFuncParam___ctor__);
      sub_2213A60(&System_Collections_Generic_List_UseInFsmFuncParam__TypeInfo);
      byte_5972E9C = 1;
    }
    if ( !param )
      break;
    useInFsmFuncParamList = (System_Collections_Generic_List_object__o *)this->fields.useInFsmFuncParamList;
    if ( !useInFsmFuncParamList )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UseInFsmFuncParam__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UseInFsmFuncParam___ctor__);
      this->fields.useInFsmFuncParamList = (struct System_Collections_Generic_List_UseInFsmFuncParam__o *)v11;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.useInFsmFuncParamList,
        (int32_t)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      useInFsmFuncParamList = (System_Collections_Generic_List_object__o *)this->fields.useInFsmFuncParamList;
      if ( !useInFsmFuncParamList )
        goto LABEL_12;
    }
    items = useInFsmFuncParamList->fields._items;
    v19 = Method_System_Collections_Generic_List_UseInFsmFuncParam__Add__;
    ++useInFsmFuncParamList->fields._version;
    if ( !items )
LABEL_12:
      sub_2213CDC(useInFsmFuncParamList, param);
    size = useInFsmFuncParamList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        useInFsmFuncParamList,
        (Il2CppObject *)param,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      useInFsmFuncParamList->fields._size = size + 1;
      v21[4] = (Il2CppClass *)param;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v21 + 4),
        (int32_t)param,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
    }
    this = this->fields.afterActionData;
  }
  while ( this );
}


void BattleActionData__EnableSubstituteBuffSkillFlag(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x20
  BattleActionData___c_c *v4; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__406_0; // x21
  Il2CppObject *v7; // x22
  MissionNaviTransitionBoardItem_o *p__9__406_0; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v16; // x0
  struct BattleActionData___c_StaticFields *v17; // x8
  System_Action_object__o *_9__406_1; // x21
  Il2CppObject *v19; // x22
  MissionNaviTransitionBoardItem_o *p__9__406_1; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_object__o *v29; // x19
  BattleActionData___c_c *v30; // x0
  struct BattleActionData___c_StaticFields *v31; // x8
  System_Action_object__o *_9__406_2; // x20
  Il2CppObject *v33; // x21
  MissionNaviTransitionBoardItem_o *p__9__406_2; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_5972ED8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_2213A60(&Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__406_0__);
    sub_2213A60(&Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__406_1__);
    sub_2213A60(&Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__406_2__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972ED8 = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v4 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v4 = BattleActionData___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__406_0 = (System_Action_object__o *)static_fields->__9__406_0;
    if ( !_9__406_0 )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, method);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__406_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__406_0,
        v7,
        Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__406_0__,
        0);
      p__9__406_0 = (MissionNaviTransitionBoardItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__406_0;
      p__9__406_0->klass = (MissionNaviTransitionBoardItem_c *)_9__406_0;
      sub_2213A04(p__9__406_0, (int32_t)_9__406_0, v9, v10, v11, v12, v13, v14);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__406_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v16 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v16 = BattleActionData___c_TypeInfo;
    }
    v17 = v16->static_fields;
    _9__406_1 = (System_Action_object__o *)v17->__9__406_1;
    if ( !_9__406_1 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, method);
        v17 = BattleActionData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)v17->__9;
      _9__406_1 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        _9__406_1,
        v19,
        Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__406_1__,
        0);
      p__9__406_1 = (MissionNaviTransitionBoardItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__406_1;
      p__9__406_1->klass = (MissionNaviTransitionBoardItem_c *)_9__406_1;
      sub_2213A04(p__9__406_1, (int32_t)_9__406_1, v21, v22, v23, v24, v25, v26);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__406_1,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
  damagedatalist = BattleActionData__get_damagedatalist(this, method);
  if ( damagedatalist )
  {
    v29 = (System_Collections_Generic_List_object__o *)damagedatalist;
    v30 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v28);
      v30 = BattleActionData___c_TypeInfo;
    }
    v31 = v30->static_fields;
    _9__406_2 = (System_Action_object__o *)v31->__9__406_2;
    if ( !_9__406_2 )
    {
      if ( !*(&v30->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v30, v28);
        v31 = BattleActionData___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)v31->__9;
      _9__406_2 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_DamageData__TypeInfo);
      System_Action_object____ctor(
        _9__406_2,
        v33,
        Method_BattleActionData___c__EnableSubstituteBuffSkillFlag_b__406_2__,
        0);
      p__9__406_2 = (MissionNaviTransitionBoardItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__406_2;
      p__9__406_2->klass = (MissionNaviTransitionBoardItem_c *)_9__406_2;
      sub_2213A04(p__9__406_2, (int32_t)_9__406_2, v35, v36, v37, v38, v39, v40);
    }
    System_Collections_Generic_List_object___ForEach(
      v29,
      (System_Action_T__o *)_9__406_2,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
  }
}


System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *BattleActionData__EnumerateAllBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v8; // x8
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  BattleActionData___c_c *v12; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__174_0; // x21
  Il2CppObject *v15; // x22
  struct BattleActionData___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  __int64 v25; // x1
  BattleActionData___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  struct BattleActionData___c_StaticFields *v28; // x9
  System_Func_object__object__o *_9__174_1; // x21
  Il2CppObject *v30; // x22
  struct BattleActionData___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_5972E70 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_BattleActionData_BuffData___);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_List_BattleActionData_BuffData____);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_List_BattleActionData_BuffData___BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleActionData__List_BattleActionData_BuffData____);
    sub_2213A60(&System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___TypeInfo);
    sub_2213A60(&System_Func_BattleActionData__List_BattleActionData_BuffData___TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__EnumerateAllBuffData_b__174_0__);
    sub_2213A60(&Method_BattleActionData___c__EnumerateAllBuffData_b__174_1__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E70 = 1;
  }
  v4 = Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___;
  v5 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___ + 7);
  if ( !v5 )
  {
    sub_224B964(Method_System_Linq_Enumerable_Empty_BattleActionData_BuffData___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v2);
  if ( !*(_DWORD *)(v6 + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v6, method);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v2);
  v8 = *(System_Collections_Generic_IEnumerable_TSource__o ***)(v7 + 184);
  buffdatalist = this->fields.buffdatalist;
  v10 = *v8;
  if ( buffdatalist )
    v10 = System_Linq_Enumerable__Concat_object_(
            *v8,
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (const MethodInfo_387607C *)Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
  sideEffectList = this->fields.sideEffectList;
  if ( sideEffectList )
  {
    v12 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, buffdatalist);
      v12 = BattleActionData___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__174_0 = (System_Func_object__object__o *)static_fields->__9__174_0;
    if ( !_9__174_0 )
    {
      if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, buffdatalist);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__174_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleActionData__List_BattleActionData_BuffData___TypeInfo);
      System_Func_object__object____ctor(
        _9__174_0,
        v15,
        Method_BattleActionData___c__EnumerateAllBuffData_b__174_0__,
        0);
      v16 = BattleActionData___c_TypeInfo->static_fields;
      v16->__9__174_0 = (struct System_Func_BattleActionData__List_BattleActionData_BuffData___o *)_9__174_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v16->__9__174_0,
        (int32_t)_9__174_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
                                                           (System_Func_TSource__TResult__o *)_9__174_0,
                                                           (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleActionData__List_BattleActionData_BuffData____);
    v24 = BasicHelper__ExcludeNull_object_(
            v23,
            (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_List_BattleActionData_BuffData____);
    v26 = BattleActionData___c_TypeInfo;
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v25);
      v26 = BattleActionData___c_TypeInfo;
    }
    v28 = v26->static_fields;
    _9__174_1 = (System_Func_object__object__o *)v28->__9__174_1;
    if ( !_9__174_1 )
    {
      if ( !*(&v26->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v26, v25);
        v28 = BattleActionData___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)v28->__9;
      _9__174_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___TypeInfo);
      System_Func_object__object____ctor(
        _9__174_1,
        v30,
        Method_BattleActionData___c__EnumerateAllBuffData_b__174_1__,
        0);
      v31 = BattleActionData___c_TypeInfo->static_fields;
      v31->__9__174_1 = (struct System_Func_List_BattleActionData_BuffData___IEnumerable_BattleActionData_BuffData___o *)_9__174_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v31->__9__174_1,
        (int32_t)_9__174_1,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                 v27,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__174_1,
                                                                 (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_List_BattleActionData_BuffData___BattleActionData_BuffData___);
    v10 = System_Linq_Enumerable__Concat_object_(
            v10,
            v38,
            (const MethodInfo_387607C *)Method_System_Linq_Enumerable_Concat_BattleActionData_BuffData___);
  }
  return (System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *)BasicHelper__ExcludeNull_object_(
                                                                                  (System_Collections_Generic_IEnumerable_T__o *)v10,
                                                                                  (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_BattleActionData_BuffData___);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v16; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__175_0; // x21
  Il2CppObject *v19; // x22
  struct BattleActionData___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_T__o *v27; // x20
  System_Action_object__o *v28; // x21

  if ( (byte_5972E71 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_2213A60(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__ExecUnappliedProcess_b__175_0__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass175_0__ExecUnappliedProcess_b__1__);
    sub_2213A60(&BattleActionData___c__DisplayClass175_0_TypeInfo);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E71 = 1;
  }
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass175_0_TypeInfo);
  BattleActionData___c__DisplayClass175_0___ctor((BattleActionData___c__DisplayClass175_0_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)data, v8, v9, v10, v11, v12, v13);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v16 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v14);
      v16 = BattleActionData___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__175_0 = (System_Func_object__bool__o *)static_fields->__9__175_0;
    if ( !_9__175_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v14);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__175_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__175_0, v19, Method_BattleActionData___c__ExecUnappliedProcess_b__175_0__, 0);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__175_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__175_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v20->__9__175_0,
        (int32_t)_9__175_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__175_0,
                                                           (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v28 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass175_0__ExecUnappliedProcess_b__1__,
      0);
    BasicHelper__ForEach_object_(
      v27,
      (System_Action_T__o *)v28,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleActionData___c_c *v5; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__209_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActionData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5972E7E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleActionData_BaseData___);
    sub_2213A60(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__209_0__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E7E = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, 0) )
    return 0;
  v5 = BattleActionData___c_TypeInfo;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v3);
    v5 = BattleActionData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__209_0 = (System_Func_object__bool__o *)static_fields->__9__209_0;
  if ( !_9__209_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__209_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__209_0,
      v8,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__209_0__,
      0);
    v9 = BattleActionData___c_TypeInfo->static_fields;
    v9->__9__209_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__209_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__209_0, (int32_t)_9__209_0, v10, v11, v12, v13, v14, v15);
  }
  return BasicHelper__Any_object__58785420(
           (System_Object_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__209_0,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleActionData_BaseData___);
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
    sub_2213CDC(this, 0);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0);
}


void BattleActionData__FlushDeferredBattleValueApply(
        BattleActionData_o *this,
        System_Action_int__int__bool__o *applyAction,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *deferredBattleValueApplyList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972EE0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DeferredBattleValueApplyData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DeferredBattleValueApplyData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DeferredBattleValueApplyData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__get_Count__);
    byte_5972EE0 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( applyAction )
  {
    deferredBattleValueApplyList = (System_Collections_Generic_List_object__o *)this->fields.deferredBattleValueApplyList;
    if ( !deferredBattleValueApplyList )
      goto LABEL_15;
    if ( deferredBattleValueApplyList->fields._size < 1 )
      return;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      deferredBattleValueApplyList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DeferredBattleValueApplyData__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current )
        sub_2213CDC(v6, v7);
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))applyAction->fields.invoke_impl)(
        applyAction->fields.method_code,
        *(unsigned int *)((char *)&v11.fields._current->klass + (unsigned __int64)&word_10),
        *(unsigned int *)((char *)&v11.fields._current->klass + (unsigned __int64)&word_10 + 4),
        *((unsigned __int8 *)&v11.fields._current->klass + (unsigned __int64)off_18),
        applyAction->fields.method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DeferredBattleValueApplyData__Dispose__);
    v8 = this->fields.deferredBattleValueApplyList;
    if ( !v8 )
LABEL_15:
      sub_2213CDC(deferredBattleValueApplyList, applyAction);
    size = v8->fields._size;
    v10 = v8->fields._version + 1;
    v8->fields._size = 0;
    v8->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
  }
}


System_Int32_array *BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_5972EB6 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5972EB6 = 1;
  }
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BattleActionData_DamageData_o *v18; // x1
  System_Func_object__bool__o *v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_5972E87 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleActionData_DamageData___);
    sub_2213A60(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass225_0__GetDamageArrayDistinctIndex_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass225_0_TypeInfo);
    byte_5972E87 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v6);
  if ( !DamageList )
    goto LABEL_17;
  v9 = DamageList;
  if ( SLODWORD(DamageList->max_length) >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = sub_2213CCC(BattleActionData___c__DisplayClass225_0_TypeInfo);
      BattleActionData___c__DisplayClass225_0___ctor((BattleActionData___c__DisplayClass225_0_o *)v11, 0);
      if ( v10 >= LODWORD(v9->max_length) )
        sub_2213CE4(DamageList);
      if ( !v11 )
        break;
      v18 = v9->m_Items[v10];
      *(_QWORD *)(v11 + 16) = v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v11,
        Method_BattleActionData___c__DisplayClass225_0__GetDamageArrayDistinctIndex_b__0__,
        0);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_object_(
                                                          (System_Collections_Generic_List_T__o *)v5,
                                                          (System_Func_T__bool__o *)v19,
                                                          (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleActionData_DamageData___);
      if ( ((unsigned __int8)DamageList & 1) == 0 )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v8 = *(Il2CppObject **)(v11 + 16);
        v27 = Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v8,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v8, v20, v21, v22, v23, v24, v25);
        }
      }
      if ( (__int64)++v10 >= SLODWORD(v9->max_length) )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(DamageList, v8);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
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
  unsigned int v8; // w22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x9
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972EB5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__);
    byte_5972EB5 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                  this,
                                                                  *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v6 = sub_2213B20(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v7)) == 0) )
  {
    sub_2213CDC(damagedatalist, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    damagedatalist,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v8 = 0;
  v13 = 0;
  v14 = &v15;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v15.fields._current )
      sub_2213CDC(v9, v10);
    if ( !v6 )
      sub_2213CDC(v9, v10);
    if ( v8 >= *(_DWORD *)(v6 + 24) )
      sub_2213CE4(v9);
    v11 = v6 + 4LL * (int)v8++;
    *(_DWORD *)(v11 + 32) = *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return (System_Int32_array *)v6;
}


System_Int32_array *BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_5972EB7 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5972EB7 = 1;
  }
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
}


BattleActionData_DisplayMessageData_array *BattleActionData__GetDirectDisplayMessageArray(
        BattleActionData_o *this,
        int32_t num,
        ParseBattleMessage_o *parser,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w21
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_5972EA5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int___);
    sub_2213A60(&Method_DataManager_GetMaster_BattleMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5972EA5 = 1;
  }
  v8 = BasicHelper__IndexValue_int__58805096(
         (System_Collections_Generic_List_T__o *)this->fields.directDisplayMessageIdList,
         num - 1,
         -1,
         (const MethodInfo_3814B68 *)Method_BasicHelper_IndexValue_int___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v10);
  return BattleMessageMaster__GetDisplayMessageArray(
           (BattleMessageMaster_o *)Master_object,
           v8,
           parser,
           this->fields.actorId,
           0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  BattleActionData___c_c **v15; // x20
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  System_Action_object__o *v18; // x24
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x19
  System_Action_object__o *v21; // x21
  System_Collections_Generic_List_object__o *v22; // x19
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__176_2; // x21
  Il2CppObject *v25; // x22
  struct BattleActionData___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5972E72 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_2213A60(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__GetExecOrderArray_b__176_2__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass176_0__GetExecOrderArray_b__0__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass176_0__GetExecOrderArray_b__1__);
    sub_2213A60(&BattleActionData___c__DisplayClass176_0_TypeInfo);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E72 = 1;
  }
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass176_0_TypeInfo);
  BattleActionData___c__DisplayClass176_0___ctor((BattleActionData___c__DisplayClass176_0_o *)v5, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = v6;
  v15 = (BattleActionData___c_c **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v16);
  v18 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass176_0__GetExecOrderArray_b__0__,
    0);
  BasicHelper__ForEach_object_(
    BuffList,
    (System_Action_T__o *)v18,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v19);
  v21 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass176_0__GetExecOrderArray_b__1__,
    0);
  BasicHelper__ForEach_object_(
    HealList,
    (System_Action_T__o *)v21,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  v7 = BattleActionData___c_TypeInfo;
  v22 = *(System_Collections_Generic_List_object__o **)(v5 + 16);
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v8);
    v7 = BattleActionData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__176_2 = (System_Comparison_T__o *)static_fields->__9__176_2;
  if ( !_9__176_2 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v8);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__176_2 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BattleActionData_BaseData__TypeInfo);
    System_Comparison_object____ctor(_9__176_2, v25, Method_BattleActionData___c__GetExecOrderArray_b__176_2__, 0);
    v26 = BattleActionData___c_TypeInfo->static_fields;
    v26->__9__176_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__176_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__176_2, (int32_t)_9__176_2, v27, v28, v29, v30, v31, v32);
  }
  if ( !v22
    || (System_Collections_Generic_List_object___Sort_71849708(
          v22,
          _9__176_2,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v7 = *v15) == 0) )
  {
LABEL_13:
    sub_2213CDC(v7, v8);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)v7,
                                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
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
  __int64 v15; // x1
  BattleActionData___c_c *v16; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__177_0; // x20
  Il2CppObject *v19; // x21
  struct BattleActionData___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5972E73 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_BattleActionData_BaseData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__GetExecOrderArrayEx_b__177_0__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E73 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v8);
  if ( !v7 )
    sub_2213CDC(BuffList, v10);
  System_Collections_Generic_List_object___AddRange(
    v7,
    BuffList,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v11);
  System_Collections_Generic_List_object___AddRange(
    v7,
    HealList,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v13);
  System_Collections_Generic_List_object___AddRange(
    v7,
    DamageList,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v16 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v15);
      v16 = BattleActionData___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__177_0 = (System_Comparison_T__o *)static_fields->__9__177_0;
    if ( !_9__177_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v15);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__177_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BattleActionData_BaseData__TypeInfo);
      System_Comparison_object____ctor(_9__177_0, v19, Method_BattleActionData___c__GetExecOrderArrayEx_b__177_0__, 0);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__177_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__177_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v20->__9__177_0,
        (int32_t)_9__177_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    System_Collections_Generic_List_object___Sort_71849708(
      v7,
      _9__177_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


BattleServantData_array *BattleActionData__GetFuncSideEffectTargetServants(
        BattleActionData_o *this,
        BattleData_o *bData,
        bool isMainOnly,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  long double v10; // q0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  System_Int32_array *v16; // x22
  System_Func_int__bool__o *v17; // x23
  __int64 v18; // x1
  __int64 targetId; // x0
  System_Func_T__TResult__o *v20; // x20
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x0

  if ( (byte_5972E66 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleServantData___);
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    sub_2213A60(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__158_0__);
    sub_2213A60(&Method_BattleData_getServantData__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_int__BattleServantData__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_5972E66 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, 0) )
  {
    v11 = Method_System_Array_Empty_BattleServantData___;
    v12 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v12 )
    {
      sub_224B964(Method_System_Array_Empty_BattleServantData___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_224B908(v10);
    if ( !*(_DWORD *)(v13 + 228) )
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v13, v9);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v10);
    return **(BattleServantData_array ***)(v14 + 184);
  }
  else
  {
    if ( isMainOnly )
    {
      v16 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 1);
      v17 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__158_0__,
        0);
      if ( BasicHelper__Any_int__58784608(
             targetIds,
             (System_Func_T__bool__o *)v17,
             (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
      {
        targetId = (unsigned int)this->fields.targetId;
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
      }
      if ( !v16 )
        sub_2213CDC(targetId, v18);
      if ( !LODWORD(v16->max_length) )
        sub_2213CE4(targetId);
      v16->m_Items[0] = targetId;
    }
    else
    {
      v16 = targetIds;
    }
    v20 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(v20, (Il2CppObject *)bData, Method_BattleData_getServantData__, 0);
    v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                           (System_Func_TSource__TResult__o *)v20,
                                                           (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v22 = BasicHelper__ExcludeNull_object_(
            v21,
            (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
}


System_Int32_array *BattleActionData__GetFuncTargetIds(
        BattleActionData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_HashSet_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  System_Action_object__o *v17; // x23
  const MethodInfo *v18; // x2
  BattleActionData_BuffData_array *BuffList; // x0
  __int64 v20; // x1
  BattleActionData___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__351_1; // x23
  Il2CppObject *v25; // x24
  struct BattleActionData___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_T__o *v33; // x22
  System_Action_object__o *v34; // x23
  const MethodInfo *v35; // x2
  BattleActionData_HealData_array *HealList; // x0
  __int64 v37; // x1
  BattleActionData___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  struct BattleActionData___c_StaticFields *v40; // x9
  System_Func_object__bool__o *_9__351_3; // x21
  Il2CppObject *v42; // x22
  struct BattleActionData___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_T__o *v50; // x19
  System_Action_object__o *v51; // x21

  if ( (byte_5972EBB & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_DamageData___);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_HealData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_2213A60(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__GetFuncTargetIds_b__351_1__);
    sub_2213A60(&Method_BattleActionData___c__GetFuncTargetIds_b__351_3__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass351_0__GetFuncTargetIds_b__0__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass351_0__GetFuncTargetIds_b__2__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass351_0__GetFuncTargetIds_b__4__);
    sub_2213A60(&BattleActionData___c__DisplayClass351_0_TypeInfo);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972EBB = 1;
  }
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass351_0_TypeInfo);
  BattleActionData___c__DisplayClass351_0___ctor((BattleActionData___c__DisplayClass351_0_o *)v5, 0);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v5 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v15);
  v17 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_DamageData__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass351_0__GetFuncTargetIds_b__0__,
    0);
  BasicHelper__ForEach_object_(
    DamageList,
    (System_Action_T__o *)v17,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = BattleActionData__getBuffList(this, index, v18);
  v21 = BattleActionData___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v20);
    v21 = BattleActionData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__351_1 = (System_Func_object__bool__o *)static_fields->__9__351_1;
  if ( !_9__351_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__351_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__351_1, v25, Method_BattleActionData___c__GetFuncTargetIds_b__351_1__, 0);
    v26 = BattleActionData___c_TypeInfo->static_fields;
    v26->__9__351_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__351_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__351_1, (int32_t)_9__351_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v22,
                                                         (System_Func_TSource__bool__o *)_9__351_1,
                                                         (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v34 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass351_0__GetFuncTargetIds_b__2__,
    0);
  BasicHelper__ForEach_object_(
    v33,
    (System_Action_T__o *)v34,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v35);
  v38 = BattleActionData___c_TypeInfo;
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v37);
    v38 = BattleActionData___c_TypeInfo;
  }
  v40 = v38->static_fields;
  _9__351_3 = (System_Func_object__bool__o *)v40->__9__351_3;
  if ( !_9__351_3 )
  {
    if ( !*(&v38->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v38, v37);
      v40 = BattleActionData___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v40->__9;
    _9__351_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_HealData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__351_3, v42, Method_BattleActionData___c__GetFuncTargetIds_b__351_3__, 0);
    v43 = BattleActionData___c_TypeInfo->static_fields;
    v43->__9__351_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__351_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__351_3, (int32_t)_9__351_3, v44, v45, v46, v47, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v39,
                                                         (System_Func_TSource__bool__o *)_9__351_3,
                                                         (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v51 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_HealData__TypeInfo);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass351_0__GetFuncTargetIds_b__4__,
    0);
  BasicHelper__ForEach_object_(
    v50,
    (System_Action_T__o *)v51,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 16),
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *BattleActionData__GetFunctionIndexArrayNearByCuriousFunc(
        BattleActionData_o *this,
        int32_t effectTiming,
        System_Int32_array *resultOnGetFailed,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass359_0_o *v7; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v11; // x1
  System_Int32_array *ListFunctionIndex; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  intptr_t *v14; // x19
  System_Func_int__bool__o *v15; // x0
  intptr_t v16; // x2
  System_Func_TSource__bool__o *v17; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_5972EBF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass359_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass359_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass359_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__);
    sub_2213A60(&BattleActionData___c__DisplayClass359_0_TypeInfo);
    byte_5972EBF = 1;
  }
  v7 = (BattleActionData___c__DisplayClass359_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass359_0_TypeInfo);
  BattleActionData___c__DisplayClass359_0___ctor(v7, 0);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0);
  if ( !v7 )
    sub_2213CDC(FuncIndexForSplitFuncSequence, v11);
  v7->fields.curiousFuncIndex = FuncIndexForSplitFuncSequence;
  if ( !FuncIndexForSplitFuncSequence.fields.hasValue )
    return resultOnGetFailed;
  ListFunctionIndex = BattleActionData__getListFunctionIndex(this, v11);
  if ( (unsigned int)effectTiming > 2 )
    return resultOnGetFailed;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ListFunctionIndex;
  v14 = (intptr_t *)*(&off_52CA938 + (unsigned int)effectTiming);
  v15 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  v16 = *v14;
  v17 = (System_Func_TSource__bool__o *)v15;
  System_Func_int__bool____ctor(v15, (Il2CppObject *)v7, v16, 0);
  v18 = System_Linq_Enumerable__Where_int_(
          v13,
          v17,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_int__int__o **v17; // x22
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Action_object__o *v20; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_5972EC2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__ForEach__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass365_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass365_0_TypeInfo);
    byte_5972EC2 = 1;
  }
  v7 = sub_2213CCC(BattleActionData___c__DisplayClass365_0_TypeInfo);
  BattleActionData___c__DisplayClass365_0___ctor((BattleActionData___c__DisplayClass365_0_o *)v7, 0);
  v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v8,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = v8;
  v17 = (System_Collections_Generic_Dictionary_int__int__o **)(v7 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v8, v11, v12, v13, v14, v15, v16);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(
      this,
      (System_Collections_Generic_Dictionary_int__int__o **)(v7 + 16),
      v18);
    sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList;
    v20 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(
      v20,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass365_0__GetMaxSideEffectCountByTarget_b__0__,
      0);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_object___ForEach(
      sideEffectList,
      (System_Action_T__o *)v20,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v9 = *v17;
  if ( !*v17 )
LABEL_13:
    sub_2213CDC(v9, v10);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v9,
         (const MethodInfo_3F928BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v9 = *v17;
    if ( *v17 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v9,
                 (const MethodInfo_3F92A28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
    }
    goto LABEL_13;
  }
  return 0;
}


int32_t BattleActionData__GetMaxSideEffectCountByTarget_52578432(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Collections_Generic_Dictionary_int__int__o *v6; // x23
  System_Collections_Generic_Dictionary_int__int__o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_Dictionary_int__int__o **v15; // x21
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  System_Action_object__o *v18; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_5972EC4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass367_0__GetMaxSideEffectCountByTarget_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass367_0_TypeInfo);
    byte_5972EC4 = 1;
  }
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass367_0_TypeInfo);
  BattleActionData___c__DisplayClass367_0___ctor((BattleActionData___c__DisplayClass367_0_o *)v5, 0);
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v6;
  v15 = (System_Collections_Generic_Dictionary_int__int__o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v16);
  v18 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass367_0__GetMaxSideEffectCountByTarget_b__0__,
    0);
  BasicHelper__ForEach_object_(
    SideEffectList,
    (System_Action_T__o *)v18,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData___);
  v7 = *(System_Collections_Generic_Dictionary_int__int__o **)(v5 + 16);
  if ( !v7 )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v7,
         (const MethodInfo_3F928BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v7 = *v15;
    if ( *v15 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v7,
                 (const MethodInfo_3F92A28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0);
    }
LABEL_9:
    sub_2213CDC(v7, v8);
  }
  return 0;
}


float BattleActionData__GetNpBuffDuration(BattleActionData_o *this, int32_t funcIndex, const MethodInfo *method)
{
  System_Collections_ICollection_o *NpBuffShowDurationDict_k__BackingField; // x0
  bool IsNullOrEmpty; // w0
  __int64 v7; // x1
  float result; // s0
  System_Collections_Generic_Dictionary_int__float__o *v9; // x0
  bool v10; // w0
  float value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5972EDC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
    byte_5972EDC = 1;
  }
  NpBuffShowDurationDict_k__BackingField = (System_Collections_ICollection_o *)this->fields._NpBuffShowDurationDict_k__BackingField;
  value = 0.0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(NpBuffShowDurationDict_k__BackingField, 0);
  result = -1.0;
  if ( !IsNullOrEmpty )
  {
    v9 = this->fields._NpBuffShowDurationDict_k__BackingField;
    if ( !v9 )
      sub_2213CDC(0, v7);
    v10 = System_Collections_Generic_Dictionary_int__float___TryGetValue(
            v9,
            funcIndex,
            &value,
            (const MethodInfo_3FA44F8 *)Method_System_Collections_Generic_Dictionary_int__float__TryGetValue__);
    result = -1.0;
    if ( v10 )
      return value;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActionData__GetOptionalBattleEffectId(
        BattleActionData_o *this,
        int32_t effectIndex,
        int32_t resultOnGetFailed,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *OptionalBattleEffectIdList; // x0

  if ( (byte_5972EC0 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int___);
    byte_5972EC0 = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__58805096(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_3814B68 *)Method_BasicHelper_IndexValue_int___);
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
    sub_2213CDC(this, battleActorControl);
  if ( battleActorControl->fields.uniqueID == mainActorControl->fields.uniqueID )
    return 1;
  if ( mainActorControl->fields.isEnemy != battleActorControl->fields.isEnemy )
    return 3;
  return 2;
}


int32_t BattleActionData__GetTargetSideFunctionRange(BattleActionData_o *this, bool isEnemy, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 580;
  if ( isEnemy )
    v3 = 576;
  return *(_DWORD *)((char *)&this->klass + v3);
}


System_Collections_Generic_List_BattleActionData_TransformServant__o *BattleActionData__GetTransformServantList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  BattleActionData__TryInitTransformServant(this, method);
  return this->fields.transformServantlist;
}


BattleActionData_array *BattleActionData__GetTriggerFuncIndexMatchSideEffectArray(
        BattleActionData_o *this,
        int32_t actionType,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass375_0_o *v7; // x22
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *sideEffectList; // x21
  System_Predicate_object__o *v11; // x19

  if ( (byte_5972EC8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__ToArray__);
    sub_2213A60(&System_Predicate_BattleActionData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass375_0__GetTriggerFuncIndexMatchSideEffectArray_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass375_0_TypeInfo);
    byte_5972EC8 = 1;
  }
  v7 = (BattleActionData___c__DisplayClass375_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass375_0_TypeInfo);
  BattleActionData___c__DisplayClass375_0___ctor(v7, 0);
  if ( !v7
    || (sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList,
        v7->fields.actionType = actionType,
        v7->fields.funcIndex = funcIndex,
        v11 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_BattleActionData___c__DisplayClass375_0__GetTriggerFuncIndexMatchSideEffectArray_b__0__,
          0),
        !sideEffectList)
    || (All = System_Collections_Generic_List_object___FindAll(
                sideEffectList,
                (System_Predicate_T__o *)v11,
                (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0 )
  {
    sub_2213CDC(All, v9);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_object___ToArray(
                                     (System_Collections_Generic_List_object__o *)All,
                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
}


void BattleActionData__InitMoveToSubMemberList(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972E94 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    byte_5972E94 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v3,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    this->fields.moveToSubMemberList = (struct System_Collections_Generic_List_BattleActionData_MoveToSubMember__o *)v3;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.moveToSubMemberList,
      (int32_t)v3,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
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


bool BattleActionData__IsMatchSideEffectTriggerFuncIndex(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  int32_t sideEffectTriggerFuncIndex; // w8

  sideEffectTriggerFuncIndex = this->fields.sideEffectTriggerFuncIndex;
  return funcIndex == -1 || sideEffectTriggerFuncIndex == -1 || sideEffectTriggerFuncIndex == funcIndex;
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


bool BattleActionData__IsSkipCameraResetEvent(
        BattleActionData_o *this,
        System_String_o *stateName,
        const MethodInfo *method)
{
  if ( (byte_5972EDD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_string___);
    byte_5972EDD = 1;
  }
  if ( !this->fields.IsSkipCameraReset )
    return 0;
  if ( System_String__IsNullOrEmpty(stateName, 0)
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.SkipCameraResetStateNames, 0) )
  {
    return 1;
  }
  return System_Linq_Enumerable__Contains_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.SkipCameraResetStateNames,
           (Il2CppObject *)stateName,
           (const MethodInfo_3876940 *)Method_System_Linq_Enumerable_Contains_string___);
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

  if ( (byte_5972EC9 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EC9 = 1;
  }
  v5 = sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, v6);
  if ( !v5 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)&this->fields.actorId;
  BattleActionData__addSideEffectActionData(this, (BattleActionData_o *)v5, type, v9);
  return (BattleActionData_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *BattleActionData__MakeSideEffectActionData_52580588(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_2213CDC(0, v6);
  result->fields.targetId = overwriteTargetId;
  return result;
}


void BattleActionData__OverwirteFuncIndex(
        BattleActionData_o *this,
        int32_t overwriteFuncIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass407_0_o *v5; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  System_Action_object__o *v9; // x21
  System_Collections_Generic_List_object__o *healdatalist; // x21
  System_Action_object__o *v11; // x22
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  System_Collections_Generic_List_object__o *v13; // x19
  System_Action_object__o *v14; // x21

  if ( (byte_5972ED9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass407_0__OverwirteFuncIndex_b__0__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass407_0__OverwirteFuncIndex_b__1__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass407_0__OverwirteFuncIndex_b__2__);
    sub_2213A60(&BattleActionData___c__DisplayClass407_0_TypeInfo);
    byte_5972ED9 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass407_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass407_0_TypeInfo);
  BattleActionData___c__DisplayClass407_0___ctor(v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  v5->fields.overwriteFuncIndex = overwriteFuncIndex;
  if ( buffdatalist )
  {
    v9 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass407_0__OverwirteFuncIndex_b__0__,
      0);
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)v9,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v11 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_HealData__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass407_0__OverwirteFuncIndex_b__1__,
      0);
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)v11,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
  damagedatalist = BattleActionData__get_damagedatalist(this, v7);
  if ( damagedatalist )
  {
    v13 = (System_Collections_Generic_List_object__o *)damagedatalist;
    v14 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_DamageData__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass407_0__OverwirteFuncIndex_b__2__,
      0);
    System_Collections_Generic_List_object___ForEach(
      v13,
      (System_Action_T__o *)v14,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
  }
}


void BattleActionData__PreActionProcess(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *v16; // x20
  BattleActionData___c_c *v17; // x8
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__173_0; // x21
  Il2CppObject *v20; // x22
  struct BattleActionData___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  BattleActionData___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  struct BattleActionData___c_StaticFields *v32; // x9
  System_Func_object__int__o *_9__173_1; // x21
  Il2CppObject *v34; // x22
  struct BattleActionData___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_IEnumerable_T__o *v42; // x20
  System_Action_object__o *v43; // x21

  if ( (byte_5972E6F & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BattleActionData_BuffData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_2213A60(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__PreActionProcess_b__173_0__);
    sub_2213A60(&Method_BattleActionData___c__PreActionProcess_b__173_1__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass173_0__PreActionProcess_b__2__);
    sub_2213A60(&BattleActionData___c__DisplayClass173_0_TypeInfo);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E6F = 1;
  }
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass173_0_TypeInfo);
  BattleActionData___c__DisplayClass173_0___ctor((BattleActionData___c__DisplayClass173_0_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)data, v8, v9, v10, v11, v12, v13);
  if ( !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v16 = BattleActionData__EnumerateAllBuffData(this, v14);
    v17 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v15);
      v17 = BattleActionData___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__173_0 = (System_Func_object__bool__o *)static_fields->__9__173_0;
    if ( !_9__173_0 )
    {
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, v15);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__173_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__173_0, v20, Method_BattleActionData___c__PreActionProcess_b__173_0__, 0);
      v21 = BattleActionData___c_TypeInfo->static_fields;
      v21->__9__173_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__173_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v21->__9__173_0,
        (int32_t)_9__173_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v16,
            (System_Func_TSource__bool__o *)_9__173_0,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v30 = BattleActionData___c_TypeInfo;
    v31 = v28;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v29);
      v30 = BattleActionData___c_TypeInfo;
    }
    v32 = v30->static_fields;
    _9__173_1 = (System_Func_object__int__o *)v32->__9__173_1;
    if ( !_9__173_1 )
    {
      if ( !*(&v30->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v30, v29);
        v32 = BattleActionData___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)v32->__9;
      _9__173_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(_9__173_1, v34, Method_BattleActionData___c__PreActionProcess_b__173_1__, 0);
      v35 = BattleActionData___c_TypeInfo->static_fields;
      v35->__9__173_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__173_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v35->__9__173_1,
        (int32_t)_9__173_1,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                           v31,
                                                           (System_Func_TSource__TKey__o *)_9__173_1,
                                                           (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleActionData_BuffData__int___);
    v43 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v43,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass173_0__PreActionProcess_b__2__,
      0);
    BasicHelper__ForEach_object_(
      v42,
      (System_Action_T__o *)v43,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x19
  BattleActionData___c_c *v4; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__234_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5972E8B & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_2213A60(&Method_BattleActionData___c__ResetAllCheckDead_b__234_0__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E8B = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v4 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v4 = BattleActionData___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__234_0 = (System_Action_object__o *)static_fields->__9__234_0;
    if ( !_9__234_0 )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, method);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__234_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(_9__234_0, v7, Method_BattleActionData___c__ResetAllCheckDead_b__234_0__, 0);
      v8 = BattleActionData___c_TypeInfo->static_fields;
      v8->__9__234_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__234_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__234_0, (int32_t)_9__234_0, v9, v10, v11, v12, v13, v14);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__234_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
}


BattleActionData_o *BattleActionData__SeekLastActionData(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_o *afterActionData; // x8

  afterActionData = this;
  do
  {
    if ( !afterActionData )
      sub_2213CDC(this, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BattleActionData_AfterChangeTakeOverField_o *v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  MissionNaviTransitionBoardItem_o *p_ChangeField_k__BackingField; // x0
  int32_t v25; // w1
  BattleActionData_AfterChangeField_o *v26; // x22
  struct BattleActionData_AfterChangeField_o *ChangeField_k__BackingField; // x0

  v10 = this;
  if ( (byte_5972EA6 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_AfterChangeField_TypeInfo);
    this = (BattleActionData_o *)sub_2213A60(&BattleActionData_AfterChangeTakeOverField_TypeInfo);
    byte_5972EA6 = 1;
  }
  if ( !baseVals )
    goto LABEL_13;
  this = (BattleActionData_o *)DataVals__isParam(baseVals, 110, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = (BattleActionData_AfterChangeTakeOverField_o *)sub_2213CCC(BattleActionData_AfterChangeTakeOverField_TypeInfo);
    BattleActionData_AfterChangeTakeOverField___ctor(v17, fieldChange, fieldEnvData, 0);
    v10->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v17;
    p_ChangeField_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v10->fields._ChangeField_k__BackingField;
    v25 = (int)v17;
    goto LABEL_9;
  }
  if ( !fieldChange )
LABEL_13:
    sub_2213CDC(this, fieldChange);
  if ( fieldChange->fields.bgId < 1 )
    goto LABEL_10;
  v26 = (BattleActionData_AfterChangeField_o *)sub_2213CCC(BattleActionData_AfterChangeField_TypeInfo);
  BattleActionData_AfterChangeField___ctor(v26, fieldChange, 0);
  p_ChangeField_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v10->fields._ChangeField_k__BackingField;
  v25 = (int)v26;
  v10->fields._ChangeField_k__BackingField = v26;
LABEL_9:
  sub_2213A04(p_ChangeField_k__BackingField, v25, v18, v19, v20, v21, v22, v23);
LABEL_10:
  ChangeField_k__BackingField = v10->fields._ChangeField_k__BackingField;
  if ( ChangeField_k__BackingField )
  {
    ChangeField_k__BackingField->fields.addBgmArg = addBgmArg;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&ChangeField_k__BackingField->fields.addBgmArg,
      (int32_t)addBgmArg,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


void BattleActionData__SetEntryAllAtOnceServantData(
        BattleActionData_o *this,
        BattleActionData_EntryAllAtOnceServantData_o *entryServant,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v9; // x20
  System_Collections_Generic_List_object__o *entryAllAtOnceServantDataList; // x8
  MissionNaviTransitionBoardItem_o *p_entryAllAtOnceServantDataList; // x20
  System_Collections_Generic_List_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0

  v9 = this;
  if ( (byte_5972ED7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData___ctor__);
    this = (BattleActionData_o *)sub_2213A60(&System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__TypeInfo);
    byte_5972ED7 = 1;
  }
  entryAllAtOnceServantDataList = (System_Collections_Generic_List_object__o *)v9->fields.entryAllAtOnceServantDataList;
  if ( !entryAllAtOnceServantDataList )
  {
    p_entryAllAtOnceServantDataList = (MissionNaviTransitionBoardItem_o *)&v9->fields.entryAllAtOnceServantDataList;
    v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData___ctor__);
    p_entryAllAtOnceServantDataList->klass = (MissionNaviTransitionBoardItem_c *)v12;
    sub_2213A04(p_entryAllAtOnceServantDataList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
    entryAllAtOnceServantDataList = (System_Collections_Generic_List_object__o *)p_entryAllAtOnceServantDataList->klass;
    if ( !p_entryAllAtOnceServantDataList->klass )
      goto LABEL_9;
  }
  items = entryAllAtOnceServantDataList->fields._items;
  v20 = Method_System_Collections_Generic_List_BattleActionData_EntryAllAtOnceServantData__Add__;
  ++entryAllAtOnceServantDataList->fields._version;
  if ( !items )
LABEL_9:
    sub_2213CDC(this, entryServant);
  size = entryAllAtOnceServantDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      entryAllAtOnceServantDataList,
      (Il2CppObject *)entryServant,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    entryAllAtOnceServantDataList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)entryServant;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v22 + 4),
      (int32_t)entryServant,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void BattleActionData__SetExistTargetLock(BattleActionData_o *this, BattleLogicTask_o *task, const MethodInfo *method)
{
  if ( !task )
    sub_2213CDC(this, 0);
  this->fields._ExistTargetLock_k__BackingField = task->fields._ExistTargetLock_k__BackingField;
}


void BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  System_Func_int__bool__o *v5; // x21
  int32_t targetId; // w0

  if ( (byte_5972E65 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    sub_2213A60(&Method_BattleActionData__SetFirstAtkMainTargetId_b__157_0__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    byte_5972E65 = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v5 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__157_0__,
      0);
    if ( BasicHelper__Any_int__58784608(
           targetIds,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
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
    sub_2213CDC(this, data);
  BattleActionData_DamageData__SetEffectFlipProc(data, vals->fields.funcEnt, (const MethodInfo *)vals);
  BattleActionData__setDamageData(this, data, vals, 0, 0, v7);
}


void BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData___c__DisplayClass178_0_o *v3; // x19
  const MethodInfo *v4; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  __int64 v6; // x1
  BattleActionData___c_c *v7; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__178_0; // x21
  Il2CppObject *v10; // x22
  struct BattleActionData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  BattleActionData___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x19
  struct BattleActionData___c_StaticFields *v25; // x9
  System_Action_object__o *_9__178_2; // x20
  Il2CppObject *v27; // x21
  struct BattleActionData___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_5972E74 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    sub_2213A60(&System_Func_BattleActionData_BaseData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData_BaseData__int__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__178_0__);
    sub_2213A60(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__178_2__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass178_0__SetFuncSideEffectTrigger_b__1__);
    sub_2213A60(&BattleActionData___c__DisplayClass178_0_TypeInfo);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E74 = 1;
  }
  v3 = (BattleActionData___c__DisplayClass178_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass178_0_TypeInfo);
  BattleActionData___c__DisplayClass178_0___ctor(v3, 0);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v4);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, 0) )
  {
    v7 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v6);
      v7 = BattleActionData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__178_0 = (System_Func_object__int__o *)static_fields->__9__178_0;
    if ( !_9__178_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v6);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__178_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleActionData_BaseData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__178_0,
        v10,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__178_0__,
        0);
      v11 = BattleActionData___c_TypeInfo->static_fields;
      v11->__9__178_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__178_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v11->__9__178_0,
        (int32_t)_9__178_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = System_Linq_Enumerable__Max_object_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__178_0,
            (const MethodInfo_38875C8 *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v3 )
      sub_2213CDC(v18, v19);
    v3->fields.lastIndex = v18;
    v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_BaseData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v3,
      Method_BattleActionData___c__DisplayClass178_0__SetFuncSideEffectTrigger_b__1__,
      0);
    v21 = System_Linq_Enumerable__Where_object_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v23 = BattleActionData___c_TypeInfo;
    v24 = (System_Collections_Generic_IEnumerable_T__o *)v21;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v22);
      v23 = BattleActionData___c_TypeInfo;
    }
    v25 = v23->static_fields;
    _9__178_2 = (System_Action_object__o *)v25->__9__178_2;
    if ( !_9__178_2 )
    {
      if ( !*(&v23->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v23, v22);
        v25 = BattleActionData___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)v25->__9;
      _9__178_2 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(_9__178_2, v27, Method_BattleActionData___c__SetFuncSideEffectTrigger_b__178_2__, 0);
      v28 = BattleActionData___c_TypeInfo->static_fields;
      v28->__9__178_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__178_2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v28->__9__178_2,
        (int32_t)_9__178_2,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    BasicHelper__ForEach_object_(
      v24,
      (System_Action_T__o *)_9__178_2,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void BattleActionData__SetFuncTargetAllDead(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
{
  BattleActionData___c__DisplayClass190_0_o *v5; // x21
  _BOOL8 isEnemyID; // x0
  __int64 v7; // x1
  bool v8; // w9
  System_Func_int__BattleServantData__c *v9; // x0
  struct System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x22
  System_Func_T__TResult__o *v11; // x23
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  System_Func_object__bool__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x20
  __int64 v17; // x1
  BattleActionData___c_c *v18; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__190_1; // x21
  Il2CppObject *v21; // x22
  struct BattleActionData___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5972E77 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleServantData____91711016);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_2213A60(&Method_BattleData_getServantData__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_int__BattleServantData__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__SetFuncTargetAllDead_b__190_1__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass190_0__SetFuncTargetAllDead_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass190_0_TypeInfo);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E77 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass190_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass190_0_TypeInfo);
  BattleActionData___c__DisplayClass190_0___ctor(v5, 0);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0), !v5) )
    sub_2213CDC(isEnemyID, v7);
  v8 = isEnemyID;
  v9 = System_Func_int__BattleServantData__TypeInfo;
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v5->fields.isActorEnemy = v8;
  v11 = (System_Func_T__TResult__o *)sub_2213CCC(v9);
  System_Func_int__object____ctor(v11, (Il2CppObject *)data, Method_BattleData_getServantData__, 0);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v11,
                                                         (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v13 = BasicHelper__ExcludeNull_object_(
          v12,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass190_0__SetFuncTargetAllDead_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16, 0) )
  {
    v18 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v17);
      v18 = BattleActionData___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__190_1 = (System_Func_object__bool__o *)static_fields->__9__190_1;
    if ( !_9__190_1 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v17);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__190_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__190_1, v21, Method_BattleActionData___c__SetFuncTargetAllDead_b__190_1__, 0);
      v22 = BattleActionData___c_TypeInfo->static_fields;
      v22->__9__190_1 = (struct System_Func_BattleServantData__bool__o *)_9__190_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v22->__9__190_1,
        (int32_t)_9__190_1,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_object__58785420(
                                                           v16,
                                                           (System_Func_T__bool__o *)_9__190_1,
                                                           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleServantData____91711016);
  }
}


void BattleActionData__SetGimmickData(
        BattleActionData_o *this,
        System_Int32_array *indexArray,
        System_String_array *startArray,
        System_Object_array *resultArray,
        System_Int32_array *types,
        System_String_o *objName,
        int32_t svtId,
        System_Int32_array *reelIcons,
        bool isFixedReelOrder,
        const MethodInfo *method)
{
  __int64 v18; // x24
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7

  if ( (byte_5972EA2 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_GimmickData_TypeInfo);
    byte_5972EA2 = 1;
  }
  v18 = sub_2213CCC(BattleActionData_GimmickData_TypeInfo);
  BattleActionData_GimmickData___ctor((BattleActionData_GimmickData_o *)v18, 0);
  if ( !v18 )
    sub_2213CDC(v19, v20);
  *(_QWORD *)(v18 + 48) = indexArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 48), (int32_t)indexArray, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 56) = startArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 56), (int32_t)startArray, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v18 + 64) = resultArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 64), (int32_t)resultArray, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v18 + 72) = types;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 72), (int32_t)types, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v18 + 80) = objName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 80), (int32_t)objName, v45, v46, v47, v48, v49, v50);
  *(_DWORD *)(v18 + 88) = svtId;
  *(_QWORD *)(v18 + 96) = reelIcons;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 96), (int32_t)reelIcons, v51, v52, v53, v54, v55, v56);
  this->fields.gimmickData = (struct BattleActionData_GimmickData_o *)v18;
  *(_BYTE *)(v18 + 104) = isFixedReelOrder;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.gimmickData, v18, v57, v58, v59, v60, v61, v62);
}


void BattleActionData__SetNpBuffShowDurationDict(
        BattleActionData_o *this,
        UnityEngine_GameObject_o *seqObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v3; // x20
  BattleActionData_o *v4; // x19
  System_Object_array *ComponentsInChildren_object__59472212; // x0
  __int64 v6; // x1
  BattleActionData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__410_0; // x21
  Il2CppObject *v11; // x22
  MissionNaviTransitionBoardItem_o *p__9__410_0; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  BattleActionData___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  struct BattleActionData___c_StaticFields *v23; // x9
  System_Func_T__TResult__o *_9__410_1; // x21
  Il2CppObject *v25; // x22
  MissionNaviTransitionBoardItem_o *p__9__410_1; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Object_array *v34; // x20
  System_Collections_Generic_Dictionary_int__float__o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int max_length; // w8
  int v43; // w22
  Il2CppObject *v44; // x9
  Il2CppObject *v45; // x8

  v3 = seqObject;
  v4 = this;
  if ( (byte_5972EDB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_USFGOActorBattleActionEvent__float___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_USFGOActorBattleActionEvent___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_USFGOActorBattleActionEvent___);
    sub_2213A60(&System_Func_USFGOActorBattleActionEvent__bool__TypeInfo);
    sub_2213A60(&System_Func_USFGOActorBattleActionEvent__float__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_2213A60(&Method_BattleActionData___c__SetNpBuffShowDurationDict_b__410_0__);
    sub_2213A60(&Method_BattleActionData___c__SetNpBuffShowDurationDict_b__410_1__);
    this = (BattleActionData_o *)sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972EDB = 1;
  }
  if ( !v3 )
    goto LABEL_30;
  ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                            v3,
                                            (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v7 = BattleActionData___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object__59472212;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v6);
    v7 = BattleActionData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__410_0 = (System_Func_object__bool__o *)static_fields->__9__410_0;
  if ( !_9__410_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__410_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_USFGOActorBattleActionEvent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__410_0,
      v11,
      Method_BattleActionData___c__SetNpBuffShowDurationDict_b__410_0__,
      0);
    p__9__410_0 = (MissionNaviTransitionBoardItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__410_0;
    p__9__410_0->klass = (MissionNaviTransitionBoardItem_c *)_9__410_0;
    sub_2213A04(p__9__410_0, (int32_t)_9__410_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__410_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_USFGOActorBattleActionEvent___);
  v21 = BattleActionData___c_TypeInfo;
  v22 = v19;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v20);
    v21 = BattleActionData___c_TypeInfo;
  }
  v23 = v21->static_fields;
  _9__410_1 = (System_Func_T__TResult__o *)v23->__9__410_1;
  if ( !_9__410_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      v23 = BattleActionData___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__410_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_USFGOActorBattleActionEvent__float__TypeInfo);
    System_Func_object__float____ctor(
      _9__410_1,
      v25,
      Method_BattleActionData___c__SetNpBuffShowDurationDict_b__410_1__,
      0);
    p__9__410_1 = (MissionNaviTransitionBoardItem_o *)&BattleActionData___c_TypeInfo->static_fields->__9__410_1;
    p__9__410_1->klass = (MissionNaviTransitionBoardItem_c *)_9__410_1;
    sub_2213A04(p__9__410_1, (int32_t)_9__410_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__float_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)_9__410_1,
                                                               (const MethodInfo_3888CF0 *)Method_System_Linq_Enumerable_OrderBy_USFGOActorBattleActionEvent__float___);
  v34 = System_Linq_Enumerable__ToArray_object_(
          v33,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_USFGOActorBattleActionEvent___);
  v35 = (System_Collections_Generic_Dictionary_int__float__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__float__TypeInfo);
  System_Collections_Generic_Dictionary_int__float____ctor(
    v35,
    (const MethodInfo_3FA21D4 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
  v4->fields._NpBuffShowDurationDict_k__BackingField = v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._NpBuffShowDurationDict_k__BackingField,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !v34 )
LABEL_30:
    sub_2213CDC(this, seqObject);
  max_length = v34->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    do
    {
      if ( v43 >= (unsigned int)max_length )
LABEL_31:
        sub_2213CE4(this);
      v44 = v34->m_Items[v43];
      if ( !v44 )
        goto LABEL_30;
      seqObject = (UnityEngine_GameObject_o *)LODWORD(v44[6].monitor);
      if ( v43 == max_length - 1 )
      {
        this = (BattleActionData_o *)v4->fields._NpBuffShowDurationDict_k__BackingField;
        if ( !this )
          goto LABEL_30;
        System_Collections_Generic_Dictionary_int__float___set_Item(
          (System_Collections_Generic_Dictionary_int__float__o *)this,
          (int32_t)seqObject,
          -1.0,
          (const MethodInfo_3FA2B6C *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
        ++v43;
      }
      else
      {
        if ( ++v43 >= (unsigned int)max_length )
          goto LABEL_31;
        v45 = v34->m_Items[v43];
        if ( !v45 )
          goto LABEL_30;
        this = (BattleActionData_o *)v4->fields._NpBuffShowDurationDict_k__BackingField;
        if ( !this )
          goto LABEL_30;
        System_Collections_Generic_Dictionary_int__float___set_Item(
          (System_Collections_Generic_Dictionary_int__float__o *)this,
          (int32_t)seqObject,
          *((float *)&v45[2].klass + 1) - *((float *)&v44[2].klass + 1),
          (const MethodInfo_3FA2B6C *)Method_System_Collections_Generic_Dictionary_int__float__set_Item__);
      }
      max_length = v34->max_length;
    }
    while ( v43 < max_length );
  }
}


void BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x19
  BattleActionData___c_c *v7; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__179_0; // x20
  Il2CppObject *v10; // x21
  struct BattleActionData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5972E75 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_BaseData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleActionData_BaseData___);
    sub_2213A60(&Method_BattleActionData___c__SetPopupOnce_b__179_0__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E75 = 1;
  }
  ExecOrderArray = BattleActionData__GetExecOrderArrayEx(this, -1, 0, v2);
  if ( ExecOrderArray )
  {
    v6 = (System_Collections_Generic_IEnumerable_T__o *)ExecOrderArray;
    v7 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v5);
      v7 = BattleActionData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__179_0 = (System_Action_object__o *)static_fields->__9__179_0;
    if ( !_9__179_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v5);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__179_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BaseData__TypeInfo);
      System_Action_object____ctor(_9__179_0, v10, Method_BattleActionData___c__SetPopupOnce_b__179_0__, 0);
      v11 = BattleActionData___c_TypeInfo->static_fields;
      v11->__9__179_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__179_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v11->__9__179_0,
        (int32_t)_9__179_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    BasicHelper__ForEach_object_(
      v6,
      (System_Action_T__o *)_9__179_0,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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


void BattleActionData__SetRestoreGlobalTargetAfterAction(BattleActionData_o *this, const MethodInfo *method)
{
  this->fields._IsResotreGlobalTargetAfterAction_k__BackingField = 1;
}


void BattleActionData__SetShiftGauge(
        BattleActionData_o *this,
        BattleActionData_BaseShiftGaugeData_o *shiftGauge,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ShiftGauge_k__BackingField = shiftGauge;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ShiftGauge_k__BackingField,
    (int32_t)shiftGauge,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__SetShowBuffGroupId(
        BattleActionData_o *this,
        int32_t groupId,
        int32_t buffStartIndex,
        int32_t healStartIndex,
        int32_t damageStartIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *buffdatalist; // x24

  if ( (byte_5972EDA & 1) == 0 )
  {
    sub_2213A60(&Method_BattleActionData_SetShowBuffGroupIdToRange_BattleActionData_BuffData___);
    sub_2213A60(&Method_BattleActionData_SetShowBuffGroupIdToRange_BattleActionData_DamageData___);
    sub_2213A60(&Method_BattleActionData_SetShowBuffGroupIdToRange_BattleActionData_HealData___);
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EDA = 1;
  }
  if ( (groupId & 0x80000000) == 0 )
  {
    buffdatalist = (System_Collections_Generic_List_T__o *)this->fields.buffdatalist;
    if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, *(_QWORD *)&groupId);
    BattleActionData__SetShowBuffGroupIdToRange_object_(
      buffdatalist,
      buffStartIndex,
      groupId,
      (const MethodInfo_381684C *)Method_BattleActionData_SetShowBuffGroupIdToRange_BattleActionData_BuffData___);
    BattleActionData__SetShowBuffGroupIdToRange_object_(
      (System_Collections_Generic_List_T__o *)this->fields.healdatalist,
      healStartIndex,
      groupId,
      (const MethodInfo_381684C *)Method_BattleActionData_SetShowBuffGroupIdToRange_BattleActionData_HealData___);
    BattleActionData__SetShowBuffGroupIdToRange_object_(
      (System_Collections_Generic_List_T__o *)this->fields._damagedatalist,
      damageStartIndex,
      groupId,
      (const MethodInfo_381684C *)Method_BattleActionData_SetShowBuffGroupIdToRange_BattleActionData_DamageData___);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__SetShowBuffGroupIdToRange_object_(
        System_Collections_Generic_List_T__o *dataList,
        int32_t startIndex,
        int32_t groupId,
        const MethodInfo_381684C *method)
{
  int32_t v8; // w0
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  int32_t size; // w8

  if ( method->rgctx_data || (sub_2213A60(&System_Math_TypeInfo), method->rgctx_data) )
  {
    if ( !dataList )
      return;
  }
  else
  {
    sub_224B964(method);
    if ( !dataList )
      return;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&startIndex);
  v8 = System_Math__Max_77153260(startIndex, 0, 0);
  if ( v8 < dataList->fields._size )
  {
    v9 = v8;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)dataList,
               v9,
               (const MethodInfo_4483994 *)method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item);
      if ( !Item )
        sub_2213CDC(0, v11);
      size = dataList->fields._size;
      ++v9;
      LODWORD(Item[2].klass) = groupId;
    }
    while ( v9 < size );
  }
}


void BattleActionData__SetSideEffectCountByTarget(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_int__int__o **dicTarget,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_int__o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_int__o *v14; // x22
  System_Collections_Generic_List_int__o **v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x22
  __int64 v23; // x1
  int32_t current; // w20
  __int64 v25; // x1
  __int64 v26; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_int__o *v27; // [xsp+8h] [xbp-68h]
  int32_t value; // [xsp+14h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5972EC3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass366_0__SetSideEffectCountByTarget_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass366_0_TypeInfo);
    byte_5972EC3 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  value = 0;
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass366_0_TypeInfo);
  BattleActionData___c__DisplayClass366_0___ctor((BattleActionData___c__DisplayClass366_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v5 + 24) = v14;
  v15 = (System_Collections_Generic_List_int__o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v22,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass366_0__SetSideEffectCountByTarget_b__0__,
    0);
  if ( !v22
    || ((*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 24))(*(_QWORD *)(v22 + 64), *(_QWORD *)(v22 + 40)),
        (v6 = *v15) == 0) )
  {
LABEL_14:
    sub_2213CDC(v6, v7);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    v6,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = 0;
  v27 = &v29;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v29,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_2213CDC(0, v23);
    current = v29.fields._current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v29.fields._current,
      &value,
      (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_2213CDC(0, v25);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v29,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void BattleActionData__SetSideEffectTriggerFuncIndex(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  this->fields.sideEffectTriggerFuncIndex = funcIndex;
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
  BattleActionData_TreasureDvcAfterChangeBgm_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5972EA7 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
    byte_5972EA7 = 1;
  }
  v5 = (BattleActionData_TreasureDvcAfterChangeBgm_o *)sub_2213CCC(BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo);
  BattleActionData_TreasureDvcAfterChangeBgm___ctor(v5, changeBgm, 0);
  this->fields._TdAfterChangeBgm_k__BackingField = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void BattleActionData__SetTurnAnimEffectData(
        BattleActionData_o *this,
        BattleActionData_TurnAnimEffectData_o *turnAnimEffectData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x21
  System_Action_object__o *v16; // x22
  System_Collections_Generic_List_object__o *healdatalist; // x21
  System_Action_object__o *v18; // x22
  System_Collections_Generic_List_BattleActionData_DamageData__o *damagedatalist; // x0
  System_Collections_Generic_List_object__o *v20; // x19
  System_Action_object__o *v21; // x21

  if ( (byte_5972E63 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_DamageData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass142_0__SetTurnAnimEffectData_b__0__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass142_0__SetTurnAnimEffectData_b__1__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass142_0__SetTurnAnimEffectData_b__2__);
    sub_2213A60(&BattleActionData___c__DisplayClass142_0_TypeInfo);
    byte_5972E63 = 1;
  }
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass142_0_TypeInfo);
  BattleActionData___c__DisplayClass142_0___ctor((BattleActionData___c__DisplayClass142_0_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = turnAnimEffectData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)turnAnimEffectData, v8, v9, v10, v11, v12, v13);
  if ( *(_QWORD *)(v5 + 16) )
  {
    buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
    if ( buffdatalist )
    {
      v16 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        v16,
        (Il2CppObject *)v5,
        Method_BattleActionData___c__DisplayClass142_0__SetTurnAnimEffectData_b__0__,
        0);
      System_Collections_Generic_List_object___ForEach(
        buffdatalist,
        (System_Action_T__o *)v16,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    }
    healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
    if ( healdatalist )
    {
      v18 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        v18,
        (Il2CppObject *)v5,
        Method_BattleActionData___c__DisplayClass142_0__SetTurnAnimEffectData_b__1__,
        0);
      System_Collections_Generic_List_object___ForEach(
        healdatalist,
        (System_Action_T__o *)v18,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    }
    damagedatalist = BattleActionData__get_damagedatalist(this, v14);
    if ( damagedatalist )
    {
      v20 = (System_Collections_Generic_List_object__o *)damagedatalist;
      v21 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_DamageData__TypeInfo);
      System_Action_object____ctor(
        v21,
        (Il2CppObject *)v5,
        Method_BattleActionData___c__DisplayClass142_0__SetTurnAnimEffectData_b__2__,
        0);
      System_Collections_Generic_List_object___ForEach(
        v20,
        (System_Action_T__o *)v21,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ForEach__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__SetTypeEnemyCutIn(BattleActionData_o *this, int32_t effectType, const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  int32_t *p_TYPE_ENEMY_SPELL_CUTIN; // x8
  BattleActionData_c *v7; // x0

  if ( (byte_5972EB0 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EB0 = 1;
  }
  this->fields.state = 4;
  if ( effectType == 2 )
  {
    v7 = BattleActionData_TypeInfo;
    if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, *(_QWORD *)&effectType);
      v7 = BattleActionData_TypeInfo;
    }
    p_TYPE_ENEMY_SPELL_CUTIN = &v7->static_fields->TYPE_ENEMY_SPELL_CUTIN;
  }
  else
  {
    if ( effectType != 1 )
      return;
    v5 = BattleActionData_TypeInfo;
    if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, *(_QWORD *)&effectType);
      v5 = BattleActionData_TypeInfo;
    }
    p_TYPE_ENEMY_SPELL_CUTIN = &v5->static_fields->TYPE_ENEMY_CUTIN;
  }
  this->fields.type = *p_TYPE_ENEMY_SPELL_CUTIN;
}


BattleActionData_o *BattleActionData__SetWaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *cond,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._WaitCond_k__BackingField = cond;
  this->fields.state = 6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WaitCond_k__BackingField,
    (int32_t)cond,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return this;
}


bool BattleActionData__TryGetChangeModelData(
        BattleActionData_o *this,
        BattleActionData_ChangeModelActionData_o **changeModelActData,
        int32_t funcTargetId,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass286_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_ICollection_o *ChangeModelList_k__BackingField; // x0
  bool IsNullOrEmpty; // w0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *v19; // x20
  System_Func_object__bool__o *v20; // x21

  if ( (byte_5972E9F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_ChangeModelActionData___);
    sub_2213A60(&System_Func_BattleActionData_ChangeModelActionData__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass286_0__TryGetChangeModelData_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass286_0_TypeInfo);
    byte_5972E9F = 1;
  }
  v7 = (BattleActionData___c__DisplayClass286_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass286_0_TypeInfo);
  BattleActionData___c__DisplayClass286_0___ctor(v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  ChangeModelList_k__BackingField = (System_Collections_ICollection_o *)this->fields._ChangeModelList_k__BackingField;
  v7->fields.funcTargetId = funcTargetId;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ChangeModelList_k__BackingField, 0);
  v18 = 0;
  if ( !IsNullOrEmpty )
  {
    v19 = this->fields._ChangeModelList_k__BackingField;
    v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_ChangeModelActionData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass286_0__TryGetChangeModelData_b__0__,
      0);
    v18 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            (System_Collections_Generic_IEnumerable_TSource__o *)v19,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_ChangeModelActionData___);
  }
  *changeModelActData = (BattleActionData_ChangeModelActionData_o *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)changeModelActData, (int32_t)v18, v12, v13, v14, v15, v16, v17);
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
  int32_t MaxSideEffectCountByTarget_52578432; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_52578432 = BattleActionData__GetMaxSideEffectCountByTarget_52578432(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_52578432 >= 1 )
    *interval = totalTime / (float)(MaxSideEffectCountByTarget_52578432 + existTriggerFunc);
  return MaxSideEffectCountByTarget_52578432 > 0;
}


bool BattleActionData__TryGetRevivedServantHealDataArray(
        BattleActionData_o *this,
        int32_t entryIndex,
        BattleActionData_HealData_array **result,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass241_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5972E8F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_2213A60(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass241_0__TryGetRevivedServantHealDataArray_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass241_0_TypeInfo);
    byte_5972E8F = 1;
  }
  v7 = (BattleActionData___c__DisplayClass241_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass241_0_TypeInfo);
  BattleActionData___c__DisplayClass241_0___ctor(v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  v7->fields.entryIndex = entryIndex;
  HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(this, -1, v10);
  v12 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_HealData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattleActionData___c__DisplayClass241_0__TryGetRevivedServantHealDataArray_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          HealList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
  *result = (BattleActionData_HealData_array *)v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)result, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0);
}


bool BattleActionData__TryGetSkillMessageDisplayTime(BattleActionData_o *this, float *time, const MethodInfo *method)
{
  BattleSkillInfoData_o *skillInfo; // x0
  bool MessageDisplayTime; // w8
  unsigned __int16 *v7; // x0
  unsigned __int16 v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5972EC1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_bool___ctor__);
    byte_5972EC1 = 1;
  }
  skillInfo = this->fields.skillInfo;
  *time = 0.0;
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
        (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x21
  System_Collections_ICollection_o *useInFsmFuncParamList; // x0
  struct System_Collections_Generic_List_UseInFsmFuncParam__o *v18; // x20
  System_Func_object__bool__o *v19; // x22

  if ( (byte_5972E9D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UseInFsmFuncParam___);
    sub_2213A60(&System_Func_UseInFsmFuncParam__bool__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass279_0__TryGetUseInFsmFuncParamValue_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass279_0_TypeInfo);
    byte_5972E9D = 1;
  }
  v7 = sub_2213CCC(BattleActionData___c__DisplayClass279_0_TypeInfo);
  BattleActionData___c__DisplayClass279_0___ctor((BattleActionData___c__DisplayClass279_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = condData;
  v16 = v7 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)condData, v10, v11, v12, v13, v14, v15);
  useInFsmFuncParamList = (System_Collections_ICollection_o *)this->fields.useInFsmFuncParamList;
  *value = 0;
  if ( !BasicHelper__IsNullOrEmpty(useInFsmFuncParamList, 0) )
  {
    v18 = this->fields.useInFsmFuncParamList;
    v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UseInFsmFuncParam__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v7,
      Method_BattleActionData___c__DisplayClass279_0__TryGetUseInFsmFuncParamValue_b__0__,
      0);
    v8 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_UseInFsmFuncParam___);
    if ( v8 )
    {
      if ( *(_QWORD *)v16 )
        return UseInFsmFuncParam__TryGetParamValue(
                 (UseInFsmFuncParam_o *)v8,
                 value,
                 *(System_String_o **)(*(_QWORD *)v16 + 24LL),
                 0);
LABEL_9:
      sub_2213CDC(v8, v9);
    }
  }
  return 0;
}


void BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972E96 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    byte_5972E96 = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v3,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    this->fields.transformServantlist = (struct System_Collections_Generic_List_BattleActionData_TransformServant__o *)v3;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.transformServantlist,
      (int32_t)v3,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x0
  __int64 v7; // x1
  System_Collections_ICollection_o *IntervalBuffDict_k__BackingField; // x0
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Action_T__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__bool__o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  __int128 v27; // [xsp+10h] [xbp-80h] BYREF
  __int128 v28; // [xsp+20h] [xbp-70h]
  __int128 v29; // [xsp+30h] [xbp-60h]

  if ( (byte_5972E7C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_2213A60(&Method_DataManager_GetMaster_BuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass202_0__UpdateDirectIntervalBuffData_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass202_0_TypeInfo);
    byte_5972E7C = 1;
  }
  v28 = 0u;
  v29 = 0u;
  v27 = 0u;
  v5 = sub_2213CCC(BattleActionData___c__DisplayClass202_0_TypeInfo);
  BattleActionData___c__DisplayClass202_0___ctor((BattleActionData___c__DisplayClass202_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  IntervalBuffDict_k__BackingField = (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField;
  *(_DWORD *)(v5 + 24) = targetType;
  if ( BasicHelper__IsNullOrEmpty(IntervalBuffDict_k__BackingField, 0) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffMaster___);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Master_object, v11, v12, v13, v14, v15, v16);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
  if ( !v6 )
LABEL_16:
    sub_2213CDC(v6, v7);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v27,
    v6,
    (const MethodInfo_3F26394 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v27,
            (const MethodInfo_41492A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v17 = (System_Action_T__o *)*((_QWORD *)&v28 + 1);
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v29, 0) )
    {
      v19 = *(System_Func_object__bool__o **)(v5 + 32);
      if ( !v19 )
      {
        v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass202_0__UpdateDirectIntervalBuffData_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v19, v20, v21, v22, v23, v24, v25);
      }
      v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v18,
                                                             (System_Func_TSource__bool__o *)v19,
                                                             (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_object_(
        v26,
        v17,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v27,
    (const MethodInfo_41493E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *buffdatalist; // x20
  BattleActionData___c_c *v4; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__210_0; // x21
  Il2CppObject *v7; // x22
  struct BattleActionData___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *healdatalist; // x19
  BattleActionData___c_c *v16; // x0
  struct BattleActionData___c_StaticFields *v17; // x8
  System_Action_object__o *_9__210_1; // x20
  Il2CppObject *v19; // x21
  struct BattleActionData___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5972E7F & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&System_Action_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
    sub_2213A60(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__210_0__);
    sub_2213A60(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__210_1__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E7F = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v4 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v4 = BattleActionData___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__210_0 = (System_Action_object__o *)static_fields->__9__210_0;
    if ( !_9__210_0 )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, method);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__210_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__210_0,
        v7,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__210_0__,
        0);
      v8 = BattleActionData___c_TypeInfo->static_fields;
      v8->__9__210_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__210_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__210_0, (int32_t)_9__210_0, v9, v10, v11, v12, v13, v14);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__210_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v16 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v16 = BattleActionData___c_TypeInfo;
    }
    v17 = v16->static_fields;
    _9__210_1 = (System_Action_object__o *)v17->__9__210_1;
    if ( !_9__210_1 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, method);
        v17 = BattleActionData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)v17->__9;
      _9__210_1 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_HealData__TypeInfo);
      System_Action_object____ctor(
        _9__210_1,
        v19,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__210_1__,
        0);
      v20 = BattleActionData___c_TypeInfo->static_fields;
      v20->__9__210_1 = (struct System_Action_BattleActionData_HealData__o *)_9__210_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v20->__9__210_1,
        (int32_t)_9__210_1,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__210_1,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  BattleActionData___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_T__o *v6; // x19
  struct BattleActionData___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__200_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActionData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5972E7A & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleServantData___);
    sub_2213A60(&Method_BattleActionData___c__UpdateIntervalBuff_b__200_0__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972E7A = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleActionData_o *, const MethodInfo *))this->klass->vtable._7_UpdateIntervalBuffData.methodPtr)(
         this,
         this->klass->vtable._7_UpdateIntervalBuffData.method);
  v5 = BattleActionData___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)v3;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v4);
    v5 = BattleActionData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__200_0 = (System_Action_object__o *)static_fields->__9__200_0;
  if ( !_9__200_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__200_0 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(_9__200_0, v9, Method_BattleActionData___c__UpdateIntervalBuff_b__200_0__, 0);
    v10 = BattleActionData___c_TypeInfo->static_fields;
    v10->__9__200_0 = (struct System_Action_BattleServantData__o *)_9__200_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__200_0, (int32_t)_9__200_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_object_(
    v6,
    (System_Action_T__o *)_9__200_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  Il2CppObject *v8; // x21
  __int64 v10; // [xsp+0h] [xbp-80h]
  __int128 *v11; // [xsp+8h] [xbp-78h]
  __int128 v12; // [xsp+10h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+20h] [xbp-60h]
  __int128 v14; // [xsp+30h] [xbp-50h]

  if ( (byte_5972E7B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
    byte_5972E7B = 1;
  }
  *(_OWORD *)action = 0u;
  v14 = 0u;
  v12 = 0u;
  v3 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          0) )
  {
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v12,
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_3F26394 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    v10 = 0;
    v11 = &v12;
    while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v12,
              (const MethodInfo_41492A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
    {
      v7 = v14;
      v8 = (Il2CppObject *)action[0];
      if ( (_QWORD)v14 )
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v14,
          action[1],
          (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      if ( v8 )
      {
        if ( !v3 )
          sub_2213CDC(v7, v6);
        System_Collections_Generic_HashSet_object___Add(
          v3,
          v8,
          (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v12,
      (const MethodInfo_41493E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_16:
      sub_2213CDC(IntervalBuffDict_k__BackingField, v4);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_3F260D0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v3;
}


void BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  BattleBuffData_BuffData__UpdateIntervalCurrent(buff, 0);
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
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__355_0; // x23
  Il2CppObject *v11; // x24
  struct BattleActionData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *v20; // x22
  System_Func_int__bool__o *v21; // x23
  int v22; // w24
  System_Func_int__bool__o *v23; // x23
  System_Func_int__bool__o *v24; // x23
  __int64 v25; // x1
  int v26; // w20
  System_Func_int__bool__o *v27; // x23
  BattleData_o *isEnemyID; // x0
  int32_t v29; // w8
  int32_t v30; // w9

  if ( (byte_5972EBC & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionUnitCheck__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__TypeInfo);
    sub_2213A60(&Method_Target_IsEnemyAllTarget__);
    sub_2213A60(&Method_Target_IsPartyAllTarget__);
    sub_2213A60(&Method_Target_isEnemy__);
    sub_2213A60(&Method_Target_isPlayer__);
    sub_2213A60(&Method_BattleActionData___c__UpdateTargetRangeOfTreasureDevice_b__355_0__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972EBC = 1;
  }
  v8 = BattleActionData___c_TypeInfo;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, battleData);
    v8 = BattleActionData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__355_0 = (System_Func_object__int__o *)static_fields->__9__355_0;
  if ( !_9__355_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, battleData);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__355_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__355_0,
      v11,
      Method_BattleActionData___c__UpdateTargetRangeOfTreasureDevice_b__355_0__,
      0);
    v12 = BattleActionData___c_TypeInfo->static_fields;
    v12->__9__355_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__int__o *)_9__355_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__355_0, (int32_t)_9__355_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)functionUnits,
                                                               (System_Func_TSource__TResult__o *)_9__355_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionUnitCheck__int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  v21 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v21, 0, Method_Target_IsEnemyAllTarget__, 0);
  if ( BasicHelper__Any_int__58784608(
         v20,
         (System_Func_T__bool__o *)v21,
         (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
  {
    v22 = 1;
  }
  else
  {
    v23 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v23, 0, Method_Target_isEnemy__, 0);
    if ( BasicHelper__Any_int__58784608(
           v20,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
    {
      v22 = 2;
    }
    else
    {
      v22 = 0;
    }
  }
  v24 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v24, 0, Method_Target_IsPartyAllTarget__, 0);
  if ( BasicHelper__Any_int__58784608(
         v20,
         (System_Func_T__bool__o *)v24,
         (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
  {
    v26 = 1;
  }
  else
  {
    v27 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v27, 0, Method_Target_isPlayer__, 0);
    if ( BasicHelper__Any_int__58784608(
           v20,
           (System_Func_T__bool__o *)v27,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
    {
      v26 = 2;
    }
    else
    {
      v26 = 0;
    }
  }
  isEnemyID = battleData;
  if ( !battleActionControl
    || !battleData
    || (isEnemyID = (BattleData_o *)BattleData__isEnemyID(battleData, battleActionControl->fields.actorId, 0), !this) )
  {
    sub_2213CDC(isEnemyID, v25);
  }
  if ( ((unsigned __int8)isEnemyID & 1) != 0 )
    v29 = v22;
  else
    v29 = v26;
  if ( ((unsigned __int8)isEnemyID & 1) != 0 )
    v30 = v26;
  else
    v30 = v22;
  this->fields.PlayerTreasureDeviceRange = v29;
  this->fields.EnemyTreasureDeviceRange = v30;
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData___AddHpDecreaseFuncTargets_b__185_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x0

  if ( (byte_5972EE3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_5972EE3 = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_2213CDC(0, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


bool BattleActionData___GetFuncSideEffectTargetServants_b__158_0(
        BattleActionData_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


bool BattleActionData___SetFirstAtkMainTargetId_b__157_0(BattleActionData_o *this, int32_t x, const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void BattleActionData__addAction(BattleActionData_o *this, BattleActionData_o *addData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *damagedatalist; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *TurnAnimEffectDataList_k__BackingField; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x1
  const MethodInfo *v10; // x2

  if ( (byte_5972EB8 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    sub_2213A60(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    byte_5972EB8 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                    this,
                                                                    (const MethodInfo *)addData);
    TurnAnimEffectDataList_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(
                                                                                              addData,
                                                                                              v6);
    if ( !damagedatalist
      || (System_Collections_Generic_List_object___AddRange(
            damagedatalist,
            TurnAnimEffectDataList_k__BackingField,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__),
          (TurnAnimEffectDataList_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._TurnAnimEffectDataList_k__BackingField) == 0) )
    {
      sub_2213CDC(TurnAnimEffectDataList_k__BackingField, v8);
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)TurnAnimEffectDataList_k__BackingField,
      (System_Collections_Generic_IEnumerable_T__o *)addData->fields._TurnAnimEffectDataList_k__BackingField,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__AddRange__);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_3816910 *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    servantLogicResultList = addData->fields.servantLogicResultList;
    this->fields.redrawCommandCard |= addData->fields.redrawCommandCard;
    BattleActionData__addReflectLogicResultServantIds(this, servantLogicResultList, v10);
    *(_WORD *)&this->fields.funcResult = *(_WORD *)&addData->fields.funcResult;
    if ( addData->fields.isAllAttack )
      this->fields.isAllAttack = addData->fields.isAllAttack;
  }
  else
  {
    *(_WORD *)&this->fields.funcResult = 256;
  }
}


void BattleActionData__addBattleData___Il2CppFullySharedGenericType_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_38169BC *method)
{
  long double v4; // q0
  const MethodInfo_38169BC_RGCTXs *rgctx_data; // x8
  __int64 _0_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_T__o *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_224B964(method);
    if ( !addDataList )
      return;
  }
  rgctx_data = method->rgctx_data;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = (__int64)rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (*((_WORD *)&rgctx_data->_0_System_Collections_Generic_List_T_->_2.bitflags2 + 1) & 1) == 0 )
      _0_System_Collections_Generic_List_T = sub_224B908(v4);
    v10 = (System_Collections_Generic_List_T__o *)sub_2213CCC(_0_System_Collections_Generic_List_T);
    method->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
    *dataList = v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)dataList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    if ( !*dataList )
      sub_2213CDC(0, v17);
    rgctx_data = method->rgctx_data;
  }
  rgctx_data->_3_System_Collections_Generic_List_T__AddRange->methodPointer();
}


void BattleActionData__addBattleData_object_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_3816910 *method)
{
  long double v4; // q0
  System_Collections_Generic_List_T__o *v8; // x0
  const MethodInfo_4483E74 **rgctx_data; // x8
  __int64 v10; // x0
  System_Collections_Generic_List_object__o *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_224B964(method);
    if ( !addDataList )
      return;
  }
  v8 = *dataList;
  rgctx_data = (const MethodInfo_4483E74 **)method->rgctx_data;
  if ( !*dataList )
  {
    v10 = (__int64)*rgctx_data;
    if ( (*(_WORD *)((_BYTE *)&(*rgctx_data)[3].return_type + 5) & 1) == 0 )
      v10 = sub_224B908(v4);
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v10);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)method->rgctx_data->_2_System_Collections_Generic_List_T___ctor);
    *dataList = (System_Collections_Generic_List_T__o *)v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)dataList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    v8 = *dataList;
    if ( !*dataList )
      sub_2213CDC(0, v18);
    rgctx_data = (const MethodInfo_4483E74 **)method->rgctx_data;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)addDataList,
    rgctx_data[3]);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct BattleActionData_SideEffectData_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w8

  if ( (byte_5972E85 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__);
    this = (BattleActionData_o *)sub_2213A60(&BattleActionData_SideEffectData_TypeInfo);
    byte_5972E85 = 1;
  }
  if ( !actList )
    goto LABEL_13;
  if ( actList->fields._size < 1 )
    return;
  if ( !damage
    || (targetId = damage->fields.targetId,
        v9 = (BuffList_ACTION_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)actList,
                                        (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__),
        v10 = (BattleActionData_SideEffectData_o *)sub_2213CCC(BattleActionData_SideEffectData_TypeInfo),
        BattleActionData_SideEffectData___ctor(v10, targetId, v9, v11),
        !sideEffectList)
    || (items = sideEffectList->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__,
        ++sideEffectList->fields._version,
        !items) )
  {
LABEL_13:
    sub_2213CDC(this, sideEffectList);
  }
  size = sideEffectList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (Il2CppObject *)v10,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    sideEffectList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
  }
  v22 = actList->fields._version + 1;
  actList->fields._size = 0;
  actList->fields._version = v22;
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

  if ( (byte_5972ECE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
    byte_5972ECE = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds
    || (items = attackSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__,
        ++attackSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_2213CDC(attackSideEffectedSvtIds, pairAttackAndTarget);
  }
  size = attackSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
      attackSideEffectedSvtIds,
      pairAttackAndTarget,
      *(const MethodInfo_43B9FB4 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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

  if ( (byte_5972ECC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    byte_5972ECC = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds
    || (items = damageSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++damageSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_2213CDC(damageSideEffectedSvtIds, *(_QWORD *)&uniqueSvtId);
  }
  size = damageSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      damageSideEffectedSvtIds,
      uniqueSvtId,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  BattleActionData___c__DisplayClass389_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *servantLogicResultList; // x22
  System_Predicate_object__o *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5972ED0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__);
    sub_2213A60(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
    sub_2213A60(&BattleActionData_ServantLogicResultData_TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass389_0__addReflectLogicResultServantId_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass389_0_TypeInfo);
    byte_5972ED0 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass389_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass389_0_TypeInfo);
  BattleActionData___c__DisplayClass389_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_11;
  servantLogicResultList = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v5->fields.uniqueSvtId = uniqueSvtId;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass389_0__addReflectLogicResultServantId_b__0__,
    0);
  if ( !servantLogicResultList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_object___FindIndex(
         servantLogicResultList,
         (System_Predicate_T__o *)v9,
         (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v10 = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v11 = sub_2213CCC(BattleActionData_ServantLogicResultData_TypeInfo);
  *(_DWORD *)(v11 + 20) = -1;
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = v5->fields.uniqueSvtId;
  if ( !v10
    || (items = v10->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_11:
    sub_2213CDC(v6, v7);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v11,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_5972ECF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_5972ECF = 1;
  }
  if ( addLogicResultList && addLogicResultList->fields._size >= 1 )
  {
    v5 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)addLogicResultList,
               v5,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !Item )
        sub_2213CDC(0, v7);
      BattleActionData__addReflectLogicResultServantId(this, (int32_t)Item[1].klass, v8);
      ++v5;
    }
    while ( v5 < addLogicResultList->fields._size );
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData__addSideEffectActionData(
        BattleActionData_o *this,
        BattleActionData_o *sideEffectActionData,
        int32_t actType,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v10; // x21
  System_Collections_Generic_List_object__o *sideEffectList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11
  Il2CppClass **v15; // x0

  v10 = this;
  if ( (byte_5972EC6 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__Add__);
    byte_5972EC6 = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectList = (System_Collections_Generic_List_object__o *)v10->fields.sideEffectList,
        sideEffectActionData->fields.actType = actType,
        !sideEffectList)
    || (items = sideEffectList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleActionData__Add__,
        ++sideEffectList->fields._version,
        !items) )
  {
    sub_2213CDC(this, sideEffectActionData);
  }
  size = sideEffectList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      sideEffectList,
      (Il2CppObject *)sideEffectActionData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    sideEffectList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)sideEffectActionData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v15 + 4),
      (int32_t)sideEffectActionData,
      *(System_String_o **)&actType,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
}


bool BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_5972E99 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__);
    byte_5972E99 = 1;
  }
  summonServantList = this->fields.summonServantList;
  return summonServantList && summonServantList->fields._size > 0;
}


BattleActionData_BuffData_array *BattleActionData__getBuffList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass233_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x8
  System_Collections_Generic_List_object__o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_5972E8A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&System_Predicate_BattleActionData_BuffData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass233_0__getBuffList_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass233_0_TypeInfo);
    byte_5972E8A = 1;
  }
  v5 = (BattleActionData___c__DisplayClass233_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass233_0_TypeInfo);
  BattleActionData___c__DisplayClass233_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_11;
  buffdatalist = this->fields.buffdatalist;
  v5->fields.funcIndex = funcIndex;
  if ( !buffdatalist )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    this->fields.buffdatalist = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v9;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.buffdatalist,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    funcIndex = v5->fields.funcIndex;
  }
  v16 = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( funcIndex == -1 )
  {
    if ( v16 )
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                  v16,
                                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
LABEL_11:
    sub_2213CDC(All, v7);
  }
  v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass233_0__getBuffList_b__0__,
    0);
  if ( !v16 )
    goto LABEL_11;
  All = System_Collections_Generic_List_object___FindAll(
          v16,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  v16 = (System_Collections_Generic_List_object__o *)All;
  if ( !All )
    goto LABEL_11;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                              v16,
                                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__);
}


BattleActionData_ChangeBg_o *BattleActionData__getChangeBg(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *changeBgList; // x0

  if ( (byte_5972EA1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
    byte_5972EA1 = 1;
  }
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return (BattleActionData_ChangeBg_o *)System_Collections_Generic_List_object___get_Item(
                                            changeBgList,
                                            0,
                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
  else
    return 0;
}


int32_t BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  StageEntity_c *v3; // x0
  int32_t actionIndex; // w21
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_5972EC5 & 1) == 0 )
  {
    sub_2213A60(&StageEntity_TypeInfo);
    byte_5972EC5 = 1;
  }
  v3 = StageEntity_TypeInfo;
  actionIndex = this->fields.actionIndex;
  if ( !*(&StageEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, method);
    v3 = StageEntity_TypeInfo;
  }
  DEFAULT_ENEMY_ACTION_COUNT = v3->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  if ( actionIndex < DEFAULT_ENEMY_ACTION_COUNT )
    return this->fields.actionIndex + 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972E84 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
    byte_5972E84 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    damagedatalist,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v11.fields._current )
      sub_2213CDC(v7, v8);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v7,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v3,
      (BattleActionData_DamageData_o *)v11.fields._current,
      *(System_Collections_Generic_List_BuffList_ACTION__o **)((char *)&v11.fields._current->klass
                                                             + (unsigned __int64)&qword_60),
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v3 )
LABEL_11:
    sub_2213CDC(damagedatalist, v6);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v3,
                                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
}


BattleActionData_DamageData_array *BattleActionData__getDamageList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass220_0_o *v5; // x21
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  const MethodInfo *v7; // x1
  bool v8; // zf
  System_Collections_Generic_List_object__o *v9; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_5972E82 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
    sub_2213A60(&System_Predicate_BattleActionData_DamageData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass220_0__getDamageList_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass220_0_TypeInfo);
    byte_5972E82 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass220_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass220_0_TypeInfo);
  BattleActionData___c__DisplayClass220_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.funcIndex = funcIndex;
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v7);
  v8 = funcIndex == -1;
  v9 = damagedatalist;
  if ( v8 )
  {
    if ( damagedatalist )
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v9,
                                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
LABEL_9:
    sub_2213CDC(damagedatalist, v7);
  }
  v10 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData_DamageData__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass220_0__getDamageList_b__0__,
    0);
  if ( !v9 )
    goto LABEL_9;
  damagedatalist = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                  v9,
                                                                  (System_Predicate_T__o *)v10,
                                                                  (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  v9 = damagedatalist;
  if ( !damagedatalist )
    goto LABEL_9;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                v9,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


System_Int32_array *BattleActionData__getDamageTargetIdList(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v10; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5972E83 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_5972E83 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v4);
  if ( !damagedatalist )
    sub_2213CDC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    damagedatalist,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v10 = 0;
  v11 = &v12;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v7 )
      break;
    if ( !v12.fields._current )
      sub_2213CDC(v7, v8);
    if ( !v3 )
      sub_2213CDC(v7, v8);
    System_Collections_Generic_HashSet_int___Add(
      v3,
      *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&dword_30),
      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


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
    sub_2213CE4(this);
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
  __int64 v8; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o *v9; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972ED6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    byte_5972ED6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( index < 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
    if ( funcTargetPlayerTypeList )
    {
      System_Collections_Generic_List_Int32Enum___GetEnumerator(
        &v10,
        funcTargetPlayerTypeList,
        (const MethodInfo_446A538 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v5 = 0;
      v8 = 0;
      v9 = &v10;
      while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                &v10,
                (const MethodInfo_40F6F90 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v5 |= LODWORD(v10.fields._current);
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
        &v10,
        (const MethodInfo_40F6F8C *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v5;
    }
LABEL_13:
    sub_2213CDC(funcTargetPlayerTypeList, *(_QWORD *)&index);
  }
  v5 = 0;
  funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_13;
  if ( funcTargetPlayerTypeList->fields._size > index )
    return System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
  return v5;
}


BattleActionData_HealData_array *BattleActionData__getHealList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass240_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_HealData__o *healdatalist; // x8
  System_Collections_Generic_List_object__o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_5972E8E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&System_Predicate_BattleActionData_HealData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass240_0__getHealList_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass240_0_TypeInfo);
    byte_5972E8E = 1;
  }
  v5 = (BattleActionData___c__DisplayClass240_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass240_0_TypeInfo);
  BattleActionData___c__DisplayClass240_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_11;
  healdatalist = this->fields.healdatalist;
  v5->fields.funcIndex = funcIndex;
  if ( !healdatalist )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_HealData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    this->fields.healdatalist = (struct System_Collections_Generic_List_BattleActionData_HealData__o *)v9;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.healdatalist,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    funcIndex = v5->fields.funcIndex;
  }
  v16 = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( funcIndex == -1 )
  {
    if ( v16 )
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                                  v16,
                                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
LABEL_11:
    sub_2213CDC(All, v7);
  }
  v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData_HealData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass240_0__getHealList_b__0__,
    0);
  if ( !v16 )
    goto LABEL_11;
  All = System_Collections_Generic_List_object___FindAll(
          v16,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  v16 = (System_Collections_Generic_List_object__o *)All;
  if ( !All )
    goto LABEL_11;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                              v16,
                                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__);
}


System_Int32_array *BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_Int32_array *DamageTargets; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  struct System_Int32_array *pttargetIds; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x23
  il2cpp_array_size_t v11; // x8
  System_Int32_array *v12; // x20
  unsigned __int64 v13; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_5972EB9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_5972EB9 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v3 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v3,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    max_length = pttargetIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      while ( v10 < (unsigned int)max_length )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v3,
          pttargetIds->m_Items[v10],
          pttargetIds->m_Items[v10],
          (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(max_length) = pttargetIds->max_length;
        if ( (__int64)++v10 >= (int)max_length )
          goto LABEL_9;
      }
LABEL_15:
      sub_2213CE4(DamageTargets);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v6, v7);
  if ( !DamageTargets )
LABEL_16:
    sub_2213CDC(DamageTargets, v5);
  v11 = DamageTargets->max_length;
  v12 = DamageTargets;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)v11 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v3,
        v12->m_Items[v13],
        v12->m_Items[v13],
        (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v11) = v12->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_3F928CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *BattleActionData__getListFunctionIndex(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x21
  BattleActionData___c_c *v6; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__357_0; // x22
  Il2CppObject *v9; // x23
  MissionNaviTransitionBoardItem_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  void *v17; // x0
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v19; // x0
  struct BattleActionData___c_StaticFields *v20; // x8
  System_Converter_object__int__o *_9__357_1; // x21
  Il2CppObject *v22; // x22
  struct BattleActionData___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct BattleActionData___c_StaticFields *v30; // x8
  System_Comparison_int__o *_9__357_2; // x20
  Il2CppObject *v32; // x21
  struct BattleActionData___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_5972EBD & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_int__TypeInfo);
    sub_2213A60(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_2213A60(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort___91653640);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndex_b__357_0__);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndex_b__357_1__);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndex_b__357_2__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972EBD = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v6 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v4);
      v6 = BattleActionData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__357_0 = (System_Converter_object__int__o *)static_fields->__9__357_0;
    if ( !_9__357_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v4);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__357_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__357_0,
        v9,
        Method_BattleActionData___c__getListFunctionIndex_b__357_0__,
        0);
      v10 = (MissionNaviTransitionBoardItem_o *)BattleActionData___c_TypeInfo->static_fields;
      v10[1].klass = (MissionNaviTransitionBoardItem_c *)_9__357_0;
      sub_2213A04(v10 + 1, (int32_t)_9__357_0, v11, v12, v13, v14, v15, v16);
    }
    v17 = System_Collections_Generic_List_object___ConvertAll_int_(
            buffdatalist,
            (System_Converter_T__TOutput__o *)_9__357_0,
            (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v3 )
      goto LABEL_29;
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v17,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
    goto LABEL_21;
  v19 = BattleActionData___c_TypeInfo;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v4);
    v19 = BattleActionData___c_TypeInfo;
  }
  v20 = v19->static_fields;
  _9__357_1 = (System_Converter_object__int__o *)v20->__9__357_1;
  if ( !_9__357_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v4);
      v20 = BattleActionData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__357_1 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_BattleActionData_HealData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__357_1,
      v22,
      Method_BattleActionData___c__getListFunctionIndex_b__357_1__,
      0);
    v23 = BattleActionData___c_TypeInfo->static_fields;
    v23->__9__357_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__357_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__357_1, (int32_t)_9__357_1, v24, v25, v26, v27, v28, v29);
  }
  v17 = System_Collections_Generic_List_object___ConvertAll_int_(
          healdatalist,
          (System_Converter_T__TOutput__o *)_9__357_1,
          (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
  if ( !v3 )
LABEL_29:
    sub_2213CDC(v17, v4);
  System_Collections_Generic_List_int___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v17,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_21:
  v17 = BattleActionData___c_TypeInfo;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v4);
    v17 = BattleActionData___c_TypeInfo;
  }
  v30 = (struct BattleActionData___c_StaticFields *)*((_QWORD *)v17 + 23);
  _9__357_2 = v30->__9__357_2;
  if ( !_9__357_2 )
  {
    if ( !*((_DWORD *)v17 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v17, v4);
      v30 = BattleActionData___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__357_2 = (System_Comparison_int__o *)sub_2213CCC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(_9__357_2, v32, Method_BattleActionData___c__getListFunctionIndex_b__357_2__, 0);
    v33 = BattleActionData___c_TypeInfo->static_fields;
    v33->__9__357_2 = _9__357_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__357_2, (int32_t)_9__357_2, v34, v35, v36, v37, v38, v39);
  }
  if ( !v3 )
    goto LABEL_29;
  System_Collections_Generic_List_int___Sort_71732312(
    v3,
    (System_Comparison_T__o *)_9__357_2,
    (const MethodInfo_4468C58 *)Method_System_Collections_Generic_List_int__Sort___91653640);
  v40 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v40,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *BattleActionData__getListFunctionIndexEx(
        BattleActionData_o *this,
        int32_t *displayFuncNum,
        System_Collections_Generic_HashSet_int__o **displayDamageFuncHashSet,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_HashSet_int__o *v8; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *buffdatalist; // x23
  BattleActionData___c_c *v17; // x0
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__358_0; // x24
  Il2CppObject *v20; // x25
  struct BattleActionData___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Int32_array *result; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x23
  BattleActionData___c_c *v31; // x0
  struct BattleActionData___c_StaticFields *v32; // x8
  System_Converter_object__int__o *_9__358_1; // x24
  Il2CppObject *v34; // x25
  struct BattleActionData___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  BattleActionData___c_c *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x23
  struct BattleActionData___c_StaticFields *v44; // x9
  System_Converter_object__int__o *_9__358_2; // x24
  Il2CppObject *v46; // x25
  struct BattleActionData___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  const MethodInfo *v54; // x1
  BattleActionData___c_c *v55; // x8
  System_Collections_Generic_List_object__o *v56; // x23
  struct BattleActionData___c_StaticFields *v57; // x9
  System_Converter_object__int__o *_9__358_3; // x24
  Il2CppObject *v59; // x25
  struct BattleActionData___c_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_Collections_Generic_List_TOutput__o *v67; // x0
  System_Collections_Generic_HashSet_int__o *v68; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  const MethodInfo *v75; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  __int64 v77; // x1
  BattleActionData___c_c *v78; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x21
  struct BattleActionData___c_StaticFields *v80; // x9
  System_Func_object__int__o *_9__358_4; // x22
  Il2CppObject *v82; // x23
  struct BattleActionData___c_StaticFields *v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int32_t v90; // w21
  struct BattleActionData___c_StaticFields *v91; // x8
  System_Comparison_int__o *_9__358_5; // x22
  Il2CppObject *v93; // x23
  struct BattleActionData___c_StaticFields *v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x0

  if ( (byte_5972EBE & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_int__TypeInfo);
    sub_2213A60(&System_Converter_BattleActionData_BuffData__int__TypeInfo);
    sub_2213A60(&System_Converter_BattleActionData_HealData__int__TypeInfo);
    sub_2213A60(&System_Converter_BattleActionData_DamageData__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_2213A60(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort___91653640);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndexEx_b__358_0__);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndexEx_b__358_1__);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndexEx_b__358_2__);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndexEx_b__358_3__);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndexEx_b__358_4__);
    sub_2213A60(&Method_BattleActionData___c__getListFunctionIndexEx_b__358_5__);
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_5972EBE = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *displayDamageFuncHashSet = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)displayDamageFuncHashSet, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v17 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v15);
      v17 = BattleActionData___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__358_0 = (System_Converter_object__int__o *)static_fields->__9__358_0;
    if ( !_9__358_0 )
    {
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, v15);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__358_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_BattleActionData_BuffData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__358_0,
        v20,
        Method_BattleActionData___c__getListFunctionIndexEx_b__358_0__,
        0);
      v21 = BattleActionData___c_TypeInfo->static_fields;
      v21->__9__358_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__358_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v21->__9__358_0,
        (int32_t)_9__358_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__358_0,
                                     (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v7 )
      goto LABEL_54;
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v31 = BattleActionData___c_TypeInfo;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v15);
      v31 = BattleActionData___c_TypeInfo;
    }
    v32 = v31->static_fields;
    _9__358_1 = (System_Converter_object__int__o *)v32->__9__358_1;
    if ( !_9__358_1 )
    {
      if ( !*(&v31->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v31, v15);
        v32 = BattleActionData___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)v32->__9;
      _9__358_1 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_BattleActionData_HealData__int__TypeInfo);
      System_Converter_object__int____ctor(
        _9__358_1,
        v34,
        Method_BattleActionData___c__getListFunctionIndexEx_b__358_1__,
        0);
      v35 = BattleActionData___c_TypeInfo->static_fields;
      v35->__9__358_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__358_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v35->__9__358_1,
        (int32_t)_9__358_1,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__358_1,
                                     (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v7 )
      goto LABEL_54;
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v15) )
  {
    v90 = 0;
    goto LABEL_45;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v29);
  v42 = BattleActionData___c_TypeInfo;
  v43 = (System_Collections_Generic_List_object__o *)result;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v29);
    v42 = BattleActionData___c_TypeInfo;
  }
  v44 = v42->static_fields;
  _9__358_2 = (System_Converter_object__int__o *)v44->__9__358_2;
  if ( !_9__358_2 )
  {
    if ( !*(&v42->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v42, v29);
      v44 = BattleActionData___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__358_2 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__358_2,
      v46,
      Method_BattleActionData___c__getListFunctionIndexEx_b__358_2__,
      0);
    v47 = BattleActionData___c_TypeInfo->static_fields;
    v47->__9__358_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__358_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->__9__358_2, (int32_t)_9__358_2, v48, v49, v50, v51, v52, v53);
  }
  if ( !v43 )
    goto LABEL_54;
  result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                   v43,
                                   (System_Converter_T__TOutput__o *)_9__358_2,
                                   (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
  if ( !v7 )
    goto LABEL_54;
  System_Collections_Generic_List_int___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v54);
  v55 = BattleActionData___c_TypeInfo;
  v56 = (System_Collections_Generic_List_object__o *)result;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v29);
    v55 = BattleActionData___c_TypeInfo;
  }
  v57 = v55->static_fields;
  _9__358_3 = (System_Converter_object__int__o *)v57->__9__358_3;
  if ( !_9__358_3 )
  {
    if ( !*(&v55->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v55, v29);
      v57 = BattleActionData___c_TypeInfo->static_fields;
    }
    v59 = (Il2CppObject *)v57->__9;
    _9__358_3 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_BattleActionData_DamageData__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__358_3,
      v59,
      Method_BattleActionData___c__getListFunctionIndexEx_b__358_3__,
      0);
    v60 = BattleActionData___c_TypeInfo->static_fields;
    v60->__9__358_3 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__358_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v60->__9__358_3, (int32_t)_9__358_3, v61, v62, v63, v64, v65, v66);
  }
  if ( !v56 )
LABEL_54:
    sub_2213CDC(result, v29);
  v67 = System_Collections_Generic_List_object___ConvertAll_int_(
          v56,
          (System_Converter_T__TOutput__o *)_9__358_3,
          (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___);
  v68 = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v67,
                                                       (const MethodInfo_38A08E0 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  *displayDamageFuncHashSet = v68;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)displayDamageFuncHashSet, (int32_t)v68, v69, v70, v71, v72, v73, v74);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v75);
  v78 = BattleActionData___c_TypeInfo;
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v77);
    v78 = BattleActionData___c_TypeInfo;
  }
  v80 = v78->static_fields;
  _9__358_4 = (System_Func_object__int__o *)v80->__9__358_4;
  if ( !_9__358_4 )
  {
    if ( !*(&v78->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v78, v77);
      v80 = BattleActionData___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)v80->__9;
    _9__358_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleActionData_DamageData__int__TypeInfo);
    System_Func_object__int____ctor(_9__358_4, v82, Method_BattleActionData___c__getListFunctionIndexEx_b__358_4__, 0);
    v83 = BattleActionData___c_TypeInfo->static_fields;
    v83->__9__358_4 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__358_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v83->__9__358_4, (int32_t)_9__358_4, v84, v85, v86, v87, v88, v89);
  }
  v90 = System_Linq_Enumerable__Sum_object_(
          v79,
          (System_Func_TSource__int__o *)_9__358_4,
          (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_45:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v29);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v91 = *(struct BattleActionData___c_StaticFields **)&result->m_Items[38];
  _9__358_5 = v91->__9__358_5;
  if ( !_9__358_5 )
  {
    if ( !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result, v29);
      v91 = BattleActionData___c_TypeInfo->static_fields;
    }
    v93 = (Il2CppObject *)v91->__9;
    _9__358_5 = (System_Comparison_int__o *)sub_2213CCC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(_9__358_5, v93, Method_BattleActionData___c__getListFunctionIndexEx_b__358_5__, 0);
    v94 = BattleActionData___c_TypeInfo->static_fields;
    v94->__9__358_5 = _9__358_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v94->__9__358_5, (int32_t)_9__358_5, v95, v96, v97, v98, v99, v100);
  }
  if ( !v7 )
    goto LABEL_54;
  System_Collections_Generic_List_int___Sort_71732312(
    v7,
    (System_Comparison_T__o *)_9__358_5,
    (const MethodInfo_4468C58 *)Method_System_Collections_Generic_List_int__Sort___91653640);
  v101 = System_Linq_Enumerable__Distinct_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v101,
             (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_54;
  *displayFuncNum = v90 + LODWORD(result->max_length);
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
  BattleActionData___c__DisplayClass246_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *replacememberlist; // x8
  System_Collections_Generic_List_object__o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_5972E92 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    sub_2213A60(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass246_0__getReplaceMember_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass246_0_TypeInfo);
    byte_5972E92 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass246_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass246_0_TypeInfo);
  BattleActionData___c__DisplayClass246_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_11;
  replacememberlist = this->fields.replacememberlist;
  v5->fields.funcIndex = funcIndex;
  if ( !replacememberlist )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    this->fields.replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)v9;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.replacememberlist,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    funcIndex = v5->fields.funcIndex;
  }
  v16 = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( funcIndex == -1 )
  {
    if ( v16 )
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                       v16,
                                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
LABEL_11:
    sub_2213CDC(All, v7);
  }
  v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData_ReplaceMember__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionData___c__DisplayClass246_0__getReplaceMember_b__0__,
    0);
  if ( !v16 )
    goto LABEL_11;
  All = System_Collections_Generic_List_object___FindAll(
          v16,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  v16 = (System_Collections_Generic_List_object__o *)All;
  if ( !All )
    goto LABEL_11;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                   v16,
                                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__);
}


BattleActionData_ShiftServant_o *BattleActionData__getShiftServant(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *shiftServantList; // x0

  if ( (byte_5972E9B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
    byte_5972E9B = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return (BattleActionData_ShiftServant_o *)System_Collections_Generic_List_object___get_Item(
                                                shiftServantList,
                                                0,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
  else
    return 0;
}


BattleActionData_array *BattleActionData__getSideEffectList(
        BattleActionData_o *this,
        int32_t actType,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass374_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *sideEffectList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5972EC7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__ToArray__);
    sub_2213A60(&System_Predicate_BattleActionData__TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass374_0__getSideEffectList_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass374_0_TypeInfo);
    byte_5972EC7 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass374_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass374_0_TypeInfo);
  BattleActionData___c__DisplayClass374_0___ctor(v5, 0);
  if ( !v5
    || (sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList,
        v5->fields.actType = actType,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleActionData___c__DisplayClass374_0__getSideEffectList_b__0__,
          0),
        !sideEffectList)
    || (All = System_Collections_Generic_List_object___FindAll(
                sideEffectList,
                (System_Predicate_T__o *)v9,
                (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0 )
  {
    sub_2213CDC(All, v7);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_object___ToArray(
                                     (System_Collections_Generic_List_object__o *)All,
                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
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
    LODWORD(skillInfo) = ((int32_t (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
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
  BattleActionData___c__DisplayClass259_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *summonServantList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5972E98 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
    sub_2213A60(&System_Predicate_BattleActionData_SummonServant__TypeInfo);
    sub_2213A60(&BattleActionData_SummonServant___TypeInfo);
    sub_2213A60(&Method_BattleActionData___c__DisplayClass259_0__getSummonServant_b__0__);
    sub_2213A60(&BattleActionData___c__DisplayClass259_0_TypeInfo);
    byte_5972E98 = 1;
  }
  v5 = (BattleActionData___c__DisplayClass259_0_o *)sub_2213CCC(BattleActionData___c__DisplayClass259_0_TypeInfo);
  BattleActionData___c__DisplayClass259_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_11;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  v5->fields.funcIndex = funcIndex;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_2213B20(BattleActionData_SummonServant___TypeInfo, 0);
  if ( funcIndex != -1 )
  {
    v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleActionData_SummonServant__TypeInfo);
    System_Predicate_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_BattleActionData___c__DisplayClass259_0__getSummonServant_b__0__,
      0);
    All = System_Collections_Generic_List_object___FindAll(
            summonServantList,
            (System_Predicate_T__o *)v9,
            (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_2213CDC(All, v7);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
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

  if ( (byte_5972EBA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_5972EBA = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
        (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v9) = *((_DWORD *)v10 + 6);
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_9;
    }
LABEL_19:
    sub_2213CE4(DamageTargets);
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
          *(_DWORD *)(v15 + 60),
          *(_DWORD *)(v15 + 60),
          (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_2213CDC(DamageTargets, v7);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v3,
           (const MethodInfo_3F928CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v4; // x1
  int32_t v5; // w19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x9
  __int64 v9; // x8
  int *v10; // x9
  int v11; // t1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972E86 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    byte_5972E86 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    damagedatalist,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v5 = 0;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v6 )
      break;
    if ( !v13.fields._current )
      sub_2213CDC(v6, v7);
    if ( *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&word_38) != 6 )
    {
      v8 = *(__int64 *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_70);
      if ( v8 )
      {
        if ( (int)*(int **)((char *)off_18 + v8) >= 1 )
        {
          v9 = (unsigned int)*(int **)((char *)off_18 + v8);
          v10 = (int *)(v8 + 32);
          do
          {
            v11 = *v10++;
            --v9;
            v5 += v11;
          }
          while ( v9 );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
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


bool BattleActionData__get_ExistTargetLock(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._ExistTargetLock_k__BackingField;
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


bool BattleActionData__get_HasDeferredBattleValueApply(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_o *v2; // x19
  struct System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__o *deferredBattleValueApplyList; // x8

  v2 = this;
  if ( (byte_5972EDE & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DeferredBattleValueApplyData__get_Count__);
    byte_5972EDE = 1;
  }
  deferredBattleValueApplyList = v2->fields.deferredBattleValueApplyList;
  if ( !deferredBattleValueApplyList )
    sub_2213CDC(this, method);
  return deferredBattleValueApplyList->fields._size > 0;
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


bool BattleActionData__get_IsResotreGlobalTargetAfterAction(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsResotreGlobalTargetAfterAction_k__BackingField;
}


bool BattleActionData__get_IsSkipUpdateHp(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields._IsSkipUpdateHp_k__BackingField;
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


System_Collections_Generic_Dictionary_int__float__o *BattleActionData__get_NpBuffShowDurationDict(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._NpBuffShowDurationDict_k__BackingField;
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


System_Collections_Generic_List_BattleActionData_TurnAnimEffectData__o *BattleActionData__get_TurnAnimEffectDataList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._TurnAnimEffectDataList_k__BackingField;
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
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5972E80 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    byte_5972E80 = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    this->fields._damagedatalist = (struct System_Collections_Generic_List_BattleActionData_DamageData__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._damagedatalist, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    return this->fields._damagedatalist;
  }
  return result;
}


void BattleActionData__initFuncTargetPlayerType(BattleActionData_o *this, int32_t length, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5972ED4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
    byte_5972ED4 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Int32Enum_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_3889858 *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v6 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                            v5,
                                                                            (const MethodInfo_38A0BF0 *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcTargetPlayerTypeList,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


bool BattleActionData__isActors(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 0;
}


bool BattleActionData__isArtsOrderAttack(BattleActionData_o *this, const MethodInfo *method)
{
  _BOOL4 flash; // w20
  int32_t type; // w19

  if ( (byte_5972E6D & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_5972E6D = 1;
  }
  flash = this->fields.flash;
  type = this->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  return flash & BattleCommand__isARTS(type, 0);
}


bool BattleActionData__isBoostSkill(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_5972E6A & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972E6A = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_BOOSTSKILL;
}


bool BattleActionData__isCommandAttack(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w20
  __int64 v4; // x1
  int32_t v5; // w20
  __int64 v6; // x1
  int32_t v7; // w20
  __int64 v8; // x1
  int32_t v10; // w19

  if ( (byte_5972E6C & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_5972E6C = 1;
  }
  type = this->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  if ( BattleCommand__isARTS(type, 0) )
    return 1;
  v5 = this->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v4);
  if ( BattleCommand__isQUICK(v5, 0) )
    return 1;
  v7 = this->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v6);
  if ( BattleCommand__isBUSTER(v7, 0) )
    return 1;
  v10 = this->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v8);
  return BattleCommand__isADDATTACK(v10, 0);
}


bool BattleActionData__isCommonEnemyAttack(BattleActionData_o *this, const MethodInfo *method)
{
  return (this->fields.type & 0xFFFFFFFE) == 10;
}


bool BattleActionData__isDeadMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_5972E67 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972E67 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
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
  bool v5; // w9

  if ( (byte_5972E6E & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_5972E6E = 1;
  }
  flash = this->fields.flash;
  type = this->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  v5 = BattleCommand__isARTS(type, 0) && flash;
  return v5 && this->fields.three;
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

  if ( (byte_5972ECD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
    byte_5972ECD = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    sub_2213CDC(0, pairAttackAndTarget);
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           pairAttackAndTarget,
           (const MethodInfo_43BA334 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_5972ECB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_5972ECB = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_2213CDC(0, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_5972E68 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972E68 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_RESURRECTION;
}


bool BattleActionData__isSkill(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_5972E69 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972E69 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_SKILL;
}


bool BattleActionData__isSkillCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  struct BattleSkillInfoData_o *skillInfo; // x0

  skillInfo = this->fields.skillInfo;
  if ( skillInfo )
    LOBYTE(skillInfo) = ((int (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
                          skillInfo,
                          skillInfo->klass->vtable._9_getCutInId.method) >= 1
                     && (this->fields.state & 0xFFFFFFFD) == 0;
  return (char)skillInfo;
}


bool BattleActionData__isSystem(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 1;
}


bool BattleActionData__isTypeEnemyCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EB2 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EB2 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_CUTIN == this->fields.type;
}


bool BattleActionData__isTypeEnemySpellCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EB3 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EB3 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ENEMY_SPELL_CUTIN == this->fields.type;
}


bool BattleActionData__isTypeMasterCommandSpell(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0
  int32_t type; // w19

  if ( (byte_5972EB1 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EB1 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return type == v3->static_fields->TYPE_COMMAND_SPELL;
}


bool BattleActionData__isTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EAD & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EAD = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERARTS == this->fields.type;
}


bool BattleActionData__isTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EAE & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EAE = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERBUSTER == this->fields.type;
}


bool BattleActionData__isTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EAF & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EAF = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  return v3->static_fields->TYPE_ORDERQUICK == this->fields.type;
}


bool BattleActionData__isTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EA9 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EA9 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
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
  int32_t v8; // w2
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v10; // x22
  int32_t v11; // w23
  int v12; // w8

  if ( (byte_5972ED2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_5972ED2 = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_16:
    sub_2213CDC(servantLogicResultList, v5);
  if ( *((int *)servantLogicResultList + 6) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *((_DWORD *)servantLogicResultList + 6);
      if ( v7 >= v8 )
        break;
      servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                 v7,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !servantLogicResultList || !data )
        goto LABEL_16;
      ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0);
      if ( ServantData )
      {
        v10 = ServantData;
        servantLogicResultList = this->fields.servantLogicResultList;
        if ( !servantLogicResultList )
          goto LABEL_16;
        servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                   v7,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
        if ( !servantLogicResultList )
          goto LABEL_16;
        v11 = *((_DWORD *)servantLogicResultList + 5);
        if ( v11 != -1 && BattleServantData__getNowHp(v10, 0) != v11 )
        {
          BattleServantData__setHp(v10, v11, 0, 0, 0);
          BattleServantData__updateHp(v10, 0, 0);
        }
      }
      servantLogicResultList = this->fields.servantLogicResultList;
      ++v7;
      if ( !servantLogicResultList )
        goto LABEL_16;
    }
    v12 = *((_DWORD *)servantLogicResultList + 7) + 1;
    *((_DWORD *)servantLogicResultList + 6) = 0;
    *((_DWORD *)servantLogicResultList + 7) = v12;
    if ( v8 >= 1 )
      System_Array__Clear(*((System_Array_o **)servantLogicResultList + 2), 0, v8, 0);
  }
}


void BattleActionData__saveServantLogicResult(BattleActionData_o *this, BattleData_o *data, const MethodInfo *method)
{
  void *servantLogicResultList; // x0
  int32_t v6; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v8; // x22
  Il2CppObject *Item; // x23

  if ( (byte_5972ED1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    byte_5972ED1 = 1;
  }
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_13:
    sub_2213CDC(servantLogicResultList, data);
  v6 = 0;
  while ( v6 < *((_DWORD *)servantLogicResultList + 6) )
  {
    servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)servantLogicResultList,
                               v6,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
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
  if ( (byte_5972ED3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__);
    this = (BattleActionData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__);
    byte_5972ED3 = 1;
  }
  servantLogicResultList = v2->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_2213CDC(this, method);
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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v11; // x21
  BattleActionData_BuffData_o *ParentActBuff_k__BackingField; // x8
  System_Collections_Generic_List_object__o *AddBuffDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  Il2CppClass **v17; // x0

  v11 = this;
  if ( (byte_5972E88 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__);
    byte_5972E88 = 1;
  }
  if ( vals )
  {
    if ( !data )
      goto LABEL_16;
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    this = (BattleActionData_o *)DataVals__isParam(vals, 36, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleActionData_o *)DataVals__GetParam(vals, 36, 0, 0);
      data->fields.statusEffectId = (int)this;
    }
  }
  ParentActBuff_k__BackingField = v11->fields._ParentActBuff_k__BackingField;
  if ( !ParentActBuff_k__BackingField )
    ParentActBuff_k__BackingField = parentBuffData;
  if ( !ParentActBuff_k__BackingField )
  {
    BattleActionData__AddBuffList(v11, data, (const MethodInfo *)vals);
    return;
  }
  AddBuffDataList = (System_Collections_Generic_List_object__o *)ParentActBuff_k__BackingField->fields.AddBuffDataList;
  if ( !AddBuffDataList
    || (items = AddBuffDataList->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__,
        ++AddBuffDataList->fields._version,
        !items) )
  {
LABEL_16:
    sub_2213CDC(this, data);
  }
  size = AddBuffDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      AddBuffDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    AddBuffDataList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v17 + 4),
      (int32_t)data,
      (System_String_o *)vals,
      (System_String_o *)parentBuffData,
      (int32_t)method,
      v5,
      v6,
      v7);
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
  BattleActionData_ChangeBg_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *changeBgList; // x8
  MissionNaviTransitionBoardItem_o *p_changeBgList; // x20
  System_Collections_Generic_List_object__o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0

  if ( (byte_5972EA0 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_ChangeBg_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    byte_5972EA0 = 1;
  }
  v11 = (BattleActionData_ChangeBg_o *)sub_2213CCC(BattleActionData_ChangeBg_TypeInfo);
  BattleActionData_ChangeBg___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_10;
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  v11->fields.bgNo = inbgNo;
  v11->fields.bgTp = inTp;
  v11->fields.priority = priority;
  v11->fields.IsLinkBgIndividuality = isLinkBgIndividuality;
  if ( !changeBgList )
  {
    p_changeBgList = (MissionNaviTransitionBoardItem_o *)&this->fields.changeBgList;
    v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    p_changeBgList->klass = (MissionNaviTransitionBoardItem_c *)v22;
    sub_2213A04(p_changeBgList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    changeBgList = (System_Collections_Generic_List_object__o *)p_changeBgList->klass;
    if ( !p_changeBgList->klass )
      goto LABEL_10;
  }
  items = changeBgList->fields._items;
  v30 = Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__;
  ++changeBgList->fields._version;
  if ( !items )
LABEL_10:
    sub_2213CDC(v12, v13);
  size = changeBgList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      changeBgList,
      (Il2CppObject *)v11,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    changeBgList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
  }
}


void BattleActionData__setCommand(BattleActionData_o *this, BattleCommandData_o *command, const MethodInfo *method)
{
  bool isPair; // w0
  int32_t chainCount; // w8
  int32_t actionIndex; // w10
  int32_t treasureDvc; // w9

  if ( command )
  {
    this->fields.flash = command->fields.flash;
    this->fields.three = BattleCommandData__isThree(command, 0);
    isPair = BattleCommandData__isPair(command, 0);
    chainCount = command->fields.chainCount;
    actionIndex = command->fields.actionIndex;
    this->fields.pair = isPair;
    treasureDvc = command->fields.treasureDvc;
    this->fields.chainCount = chainCount;
    this->fields.commandattack = actionIndex;
    this->fields.treasureDvcId = treasureDvc;
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BattleActionData_o *v17; // x8
  __int64 v18; // x9
  _QWORD *v19; // x10
  __int64 endcameraname_low; // x11
  __int64 v21; // x0

  v10 = this;
  if ( (byte_5972E81 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__);
    byte_5972E81 = 1;
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
    || (v17 = this,
        v18 = *(_QWORD *)&this->fields.state,
        v19 = Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v18) )
  {
LABEL_21:
    sub_2213CDC(this, data);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v18 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = v18 + 8 * endcameraname_low;
    LODWORD(v17->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v21 + 32) = data;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), (int32_t)data, v11, v12, v13, v14, v15, v16);
  }
}


void BattleActionData__setEffect(BattleActionData_o *this, System_Int32_array *effectList, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.effectlist = effectList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectlist,
    (int32_t)effectList,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__setEndCamera(BattleActionData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.endcameraname = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endcameraname,
    (int32_t)name,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_5972ED5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
    this = (BattleActionData_o *)sub_2213A60(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
    byte_5972ED5 = 1;
  }
  if ( isTargetEnemy )
    v7 = 2;
  else
    v7 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_2213CDC(this, *(_QWORD *)&index);
    if ( funcTargetPlayerTypeList->fields._size > index )
    {
      v9 = System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__)
         | v7;
      System_Collections_Generic_List_Int32Enum___set_Item(
        funcTargetPlayerTypeList,
        index,
        v9,
        (const MethodInfo_44697E4 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
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
  bool v16; // w27
  __int64 v17; // x22
  const MethodInfo *v18; // x3
  bool isShowForcedEffect; // w8
  _BOOL4 IsMultiTargetRevival_k__BackingField; // w8
  bool DeadKeepStanding_k__BackingField; // w10
  int32_t ExpelledUniqueId_k__BackingField; // w9
  bool v23; // w8

  v16 = isCommandAfter;
  if ( (byte_5972E8C & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_HealData_TypeInfo);
    byte_5972E8C = 1;
  }
  v17 = sub_2213CCC(BattleActionData_HealData_TypeInfo);
  *(_DWORD *)(v17 + 32) = -1;
  System_Object___ctor((Il2CppObject *)v17, 0);
  *(_DWORD *)(v17 + 48) = targetId;
  *(_DWORD *)(v17 + 52) = healPoint;
  *(_DWORD *)(v17 + 16) = funcIndex;
  *(_DWORD *)(v17 + 56) = bufId;
  *(_BYTE *)(v17 + 61) = v16;
  if ( vals )
    isShowForcedEffect = vals->fields.isShowForcedEffect;
  else
    isShowForcedEffect = 0;
  *(_BYTE *)(v17 + 62) = isShowForcedEffect;
  if ( healFuncApplyArgs )
  {
    IsMultiTargetRevival_k__BackingField = healFuncApplyArgs->fields._IsMultiTargetRevival_k__BackingField;
    DeadKeepStanding_k__BackingField = healFuncApplyArgs->fields._DeadKeepStanding_k__BackingField;
    *(_QWORD *)(v17 + 88) = *(_QWORD *)&healFuncApplyArgs->fields._RevivalTargetId_k__BackingField;
    ExpelledUniqueId_k__BackingField = healFuncApplyArgs->fields._ExpelledUniqueId_k__BackingField;
    *(_BYTE *)(v17 + 100) = DeadKeepStanding_k__BackingField;
    v23 = IsMultiTargetRevival_k__BackingField;
    *(_DWORD *)(v17 + 96) = ExpelledUniqueId_k__BackingField;
  }
  else
  {
    v23 = 0;
    *(_DWORD *)(v17 + 96) = -1;
    *(_BYTE *)(v17 + 100) = 0;
    *(_QWORD *)(v17 + 88) = 0xFFFFFFFF00000000LL;
  }
  *(_BYTE *)(v17 + 101) = v23;
  BattleActionData__setHealData_52561480(this, (BattleActionData_HealData_o *)v17, vals, v18);
  return (BattleActionData_HealData_o *)v17;
}


void BattleActionData__setHealData_52561480(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  struct System_String_o *StrParam; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( vals )
  {
    if ( !data )
      sub_2213CDC(this, 0);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 121, 0, 0);
    data->fields.popValueText = StrParam;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&data->fields.popValueText,
      (int32_t)StrParam,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


void BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5972E6B & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5972E6B = 1;
  }
  v5 = sub_2213B20(int___TypeInfo, 1);
  if ( !v5 )
    sub_2213CDC(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_2213CE4(v5);
  this->fields.pttargetIds = (struct System_Int32_array *)v5;
  *(_DWORD *)(v5 + 32) = pttargetId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.pttargetIds, v5, v7, v8, v9, v10, v11, v12);
}


void BattleActionData__setPTTargetId_52548796(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.pttargetIds = pttargetIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pttargetIds,
    (int32_t)pttargetIds,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  const MethodInfo *v12; // x2

  if ( (byte_5972E90 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_ReplaceMember_TypeInfo);
    byte_5972E90 = 1;
  }
  v11 = sub_2213CCC(BattleActionData_ReplaceMember_TypeInfo);
  *(_DWORD *)(v11 + 32) = -1;
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 52) = outUniqueId;
  *(_DWORD *)(v11 + 56) = inUniqueId;
  *(_DWORD *)(v11 + 48) = index;
  *(_DWORD *)(v11 + 16) = funcIndex;
  BattleActionData__setReplaceMember_52562316(this, (BattleActionData_ReplaceMember_o *)v11, v12);
}


void BattleActionData__setReplaceMember_52562316(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v9; // x20
  System_Collections_Generic_List_object__o *replacememberlist; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  Il2CppClass **v21; // x0

  v9 = this;
  if ( (byte_5972E91 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    this = (BattleActionData_o *)sub_2213A60(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    byte_5972E91 = 1;
  }
  replacememberlist = (System_Collections_Generic_List_object__o *)v9->fields.replacememberlist;
  if ( !replacememberlist )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    v9->fields.replacememberlist = (struct System_Collections_Generic_List_BattleActionData_ReplaceMember__o *)v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.replacememberlist,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    replacememberlist = (System_Collections_Generic_List_object__o *)v9->fields.replacememberlist;
    if ( !replacememberlist )
      goto LABEL_9;
  }
  items = replacememberlist->fields._items;
  v19 = Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__;
  ++replacememberlist->fields._version;
  if ( !items )
LABEL_9:
    sub_2213CDC(this, data);
  size = replacememberlist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replacememberlist,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    replacememberlist->fields._size = size + 1;
    v21[4] = (Il2CppClass *)data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 4),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_o *v9; // x20
  System_Collections_Generic_List_object__o *shiftServantList; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  Il2CppClass **v21; // x0

  v9 = this;
  if ( (byte_5972E9A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    this = (BattleActionData_o *)sub_2213A60(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    byte_5972E9A = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)v9->fields.shiftServantList;
  if ( !shiftServantList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    v9->fields.shiftServantList = (struct System_Collections_Generic_List_BattleActionData_ShiftServant__o *)v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.shiftServantList,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    shiftServantList = (System_Collections_Generic_List_object__o *)v9->fields.shiftServantList;
    if ( !shiftServantList )
      goto LABEL_9;
  }
  items = shiftServantList->fields._items;
  v19 = Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__;
  ++shiftServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_2213CDC(this, data);
  size = shiftServantList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      shiftServantList,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    shiftServantList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v21 + 4),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  BattleActionData_SummonServant_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *summonServantList; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0

  if ( (byte_5972E97 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    sub_2213A60(&BattleActionData_SummonServant_TypeInfo);
    byte_5972E97 = 1;
  }
  v13 = (BattleActionData_SummonServant_o *)sub_2213CCC(BattleActionData_SummonServant_TypeInfo);
  BattleActionData_SummonServant___ctor(v13, uniqueId, unloadUniqueId, funcIndex, isEffect, callSvtEffectId, 0);
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
  {
    v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    this->fields.summonServantList = (struct System_Collections_Generic_List_BattleActionData_SummonServant__o *)v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.summonServantList,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
    if ( !summonServantList )
      goto LABEL_9;
  }
  items = summonServantList->fields._items;
  v31 = Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__;
  ++summonServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_2213CDC(v14, v15);
  size = summonServantList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      summonServantList,
      (Il2CppObject *)v13,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    summonServantList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v13, v16, v17, v18, v19, v20, v21);
  }
}


void BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EAA & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EAA = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERARTS;
}


void BattleActionData__setTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EAB & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EAB = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERBUSTER;
}


void BattleActionData__setTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EAC & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EAC = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_ORDERQUICK;
}


void BattleActionData__setTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  BattleActionData_c *v3; // x0

  if ( (byte_5972EA8 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EA8 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  this->fields.type = v3->static_fields->TYPE_TW;
}


void BattleActionData__set_ChangeField(
        BattleActionData_o *this,
        BattleActionData_AfterChangeField_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ChangeField_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChangeField_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_ChangeModelList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ChangeModelList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChangeModelList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_DispMsgList(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DisplayMessageData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DispMsgList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DispMsgList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_ExistTargetLock(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._ExistTargetLock_k__BackingField = value;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._HpDecreaseFuncTargetHash_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_IntervalBuffDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_IsFuncTargetAllDead(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsFuncTargetAllDead_k__BackingField = value;
}


void BattleActionData__set_IsNotSkillSkip(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNotSkillSkip_k__BackingField = value;
}


void BattleActionData__set_IsResotreGlobalTargetAfterAction(
        BattleActionData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsResotreGlobalTargetAfterAction_k__BackingField = value;
}


void BattleActionData__set_IsSkipUpdateHp(BattleActionData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSkipUpdateHp_k__BackingField = value;
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


void BattleActionData__set_NpBuffShowDurationDict(
        BattleActionData_o *this,
        System_Collections_Generic_Dictionary_int__float__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._NpBuffShowDurationDict_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NpBuffShowDurationDict_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_ParentActBuff(
        BattleActionData_o *this,
        BattleActionData_BuffData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ParentActBuff_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ParentActBuff_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_ShiftGauge(
        BattleActionData_o *this,
        BattleActionData_BaseShiftGaugeData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ShiftGauge_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ShiftGauge_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_TdAfterChangeBgm(
        BattleActionData_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TdAfterChangeBgm_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TdAfterChangeBgm_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_WaitCond(
        BattleActionData_o *this,
        BattleActionWaitCond_Base_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._WaitCond_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WaitCond_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData__set_damagedatalist(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_DamageData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._damagedatalist = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._damagedatalist,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  Il2CppObject *v4; // x0
  __int64 *v5; // x8
  int v7; // [xsp+Ch] [xbp-24h] BYREF
  int v8; // [xsp+18h] [xbp-18h] BYREF
  int v9; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_5972EB4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19748/*"effect/BitEffect/bit_buster{0:00}"*/);
    sub_2213A60(&StringLiteral_19747/*"effect/BitEffect/bit_arts{0:00}"*/);
    sub_2213A60(&StringLiteral_19755/*"effect/BitEffect/bit_flash02"*/);
    sub_2213A60(&StringLiteral_19757/*"effect/BitEffect/bit_quick{0:00}"*/);
    byte_5972EB4 = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v8 = 1;
      v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
      v5 = &StringLiteral_19747/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v5, v4, 0);
    case 3:
      v7 = 1;
      v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v7);
      v5 = &StringLiteral_19757/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v5, v4, 0);
    case 2:
      v9 = 1;
      v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v9);
      v5 = &StringLiteral_19748/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v5, v4, 0);
    case 4:
      return (System_String_o *)StringLiteral_19755/*"effect/BitEffect/bit_flash02"*/;
    default:
      return 0;
  }
}


void BattleActionData_AfterChangeField___ctor(
        BattleActionData_AfterChangeField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  this->fields.fieldChange = fieldChange;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fieldChange,
    (int32_t)fieldChange,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  v8 = this;
  if ( (byte_59730E9 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_2213A60(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    byte_59730E9 = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v12 = (Generator_BGFromFieldChangeBGBuff_o *)sub_2213CCC(Generator_BGFromFieldChangeBGBuff_TypeInfo),
        Generator_BGFromFieldChangeBGBuff___ctor(v12, fieldChange, 0),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, const MethodInfo *))v11->klass->vtable._5_AddBackground.methodPtr)(
                                                        v11,
                                                        v12,
                                                        2,
                                                        v11->klass->vtable._5_AddBackground.method)) == 0 )
  {
    sub_2213CDC(this, perf);
  }
  v13 = (int)this;
  v14 = System_Int32__ToString((int)this + 28, 0);
  *bgName = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)bgName, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = System_Int32__ToString(v13 + 32, 0);
  *bgType = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)bgType, (int32_t)v21, v22, v23, v24, v25, v26, v27);
}


System_String_o *BattleActionData_AfterChangeField__GetPriorityBgmName(
        BattleActionData_AfterChangeField_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  BattleActionData_AfterChangeField_o *v6; // x20
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  BattleActionData_AfterChangeField_o *v8; // x22
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  BattleData_o *data; // x23
  BattleBuffData_FieldChangeData_o *v11; // x24
  BattleFieldEnvironmentData_o *v12; // x21
  Generator_BGMFromFieldChangeBGBuff_o *v13; // x22
  struct BattleBuffData_FieldChangeData_o *v14; // x8

  v6 = this;
  if ( (byte_59730EA & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_2213A60(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_59730EA = 1;
  }
  if ( !perf )
    goto LABEL_13;
  this = (BattleActionData_AfterChangeField_o *)BattlePerformance__get_FieldEnvData(perf, 0);
  if ( !this )
    goto LABEL_13;
  fieldChange = v6->fields.fieldChange;
  if ( !fieldChange )
    goto LABEL_13;
  v8 = (BattleActionData_AfterChangeField_o *)*((_QWORD *)this + 9);
  this = (BattleActionData_AfterChangeField_o *)System_String__IsNullOrEmpty(fieldChange->fields.bgmName, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0);
    data = perf->fields.data;
    v11 = v6->fields.fieldChange;
    v12 = FieldEnvData;
    v13 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_2213CCC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v13, data, v11, 0);
    if ( !v12 )
      goto LABEL_13;
    this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, struct AddBgmArgument_o *, const MethodInfo *))v12->klass->vtable._6_AddBGM.methodPtr)(
                                                    v12,
                                                    v13,
                                                    2,
                                                    v6->fields.addBgmArg,
                                                    v12->klass->vtable._6_AddBGM.method);
    v8 = this;
  }
  if ( !v8 )
LABEL_13:
    sub_2213CDC(this, perf);
  v14 = v8->fields.fieldChange;
  if ( v14 )
    return *(System_String_o **)&v14->fields.bgId;
  return defBgmName;
}


void BattleActionData_AfterChangeField__SetAddBgmArg(
        BattleActionData_AfterChangeField_o *this,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.addBgmArg = arg;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.addBgmArg,
    (int32_t)arg,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, method);
  return fieldChange->fields.isAllowSubBgmPlaying;
}


void BattleActionData_AfterChangeTakeOverField___ctor(
        BattleActionData_AfterChangeTakeOverField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  this->fields.fieldChange = fieldChange;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fieldChange,
    (int32_t)fieldChange,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !fieldEnvData
    || (CurBackGround_k__BackingField = fieldEnvData->fields._CurBackGround_k__BackingField) == 0
    || (v13 = ((__int64 (__fastcall *)(BattleActionData_AfterChangeTakeOverField_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._4_SetTakeOverBG.methodPtr)(
                this,
                *((unsigned int *)&CurBackGround_k__BackingField->fields.isActive + 1),
                (unsigned int)CurBackGround_k__BackingField->fields.id,
                this->klass->vtable._4_SetTakeOverBG.method),
        (CurBGM_k__BackingField = fieldEnvData->fields._CurBGM_k__BackingField) == 0)
    || (BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField) == 0 )
  {
    sub_2213CDC(v13, v14);
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
    sub_2213CDC(this, *(_QWORD *)&id);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  BgmMaster_o *v16; // x22
  struct BattleBuffData_FieldChangeData_o *v17; // x23
  struct BattleBuffData_FieldChangeData_o *v18; // x19

  if ( (byte_59730EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59730EB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, bgmName);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange
    || (v16 = (BgmMaster_o *)Master_object,
        fieldChange->fields.bgmName = bgmName,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&fieldChange->fields.bgmName,
          (int32_t)bgmName,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        !v16)
    || (v17 = this->fields.fieldChange,
        Master_object = (Il2CppObject *)BgmMaster__GetBgmIdFromFileName(v16, bgmName, bgmId, 0),
        !v17)
    || (v18 = this->fields.fieldChange, v17->fields.bgmId = (int)Master_object, !v18) )
  {
    sub_2213CDC(Master_object, v8);
  }
  if ( !v18->fields._HasBgmPriorityInVals_k__BackingField )
    v18->fields.bgmPriority = BgmMaster__GetBgmPriority(v16, v18->fields.bgmId, 0, 0);
}


void BattleActionData_AttackDamageData___ctor(BattleActionData_AttackDamageData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct System_Int32_array **v14; // x8
  struct System_Int32_array *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_5972EEF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_5972EEF = 1;
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  v14 = *(struct System_Int32_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.attackRatio = *v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.attackRatio, (int32_t)v15, v2, v3, v4, v5, v6, v7);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, v16);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_int__o *v18; // x0
  __int64 v19; // x1
  struct System_Int32_array *attackRatio; // x8
  unsigned __int64 v21; // x26
  int v22; // w24
  __int64 v23; // x27
  int32_t v24; // w28
  _BOOL4 v25; // w11
  int32_t v26; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10

  v5 = minimumDamageFlg;
  if ( (byte_5972EEE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5972EEE = 1;
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
    v11 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    *damageList = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)damageList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    v18 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                      (System_Collections_Generic_IEnumerable_int__o *)this->fields.attackRatio,
                                                      0);
    attackRatio = this->fields.attackRatio;
    if ( !attackRatio )
      goto LABEL_20;
    v21 = 0;
    v22 = 0;
    v23 = (int)v18;
    v24 = damage;
    while ( (__int64)v21 < (int)(attackRatio->max_length - 1) )
    {
      if ( v21 >= (unsigned int)attackRatio->max_length )
        sub_2213CE4(v18);
      v18 = *damageList;
      v25 = (int)(attackRatio->m_Items[v21] * (__int64)v24 / v23) < 1;
      if ( v25 && v5 )
        v26 = 1;
      else
        v26 = attackRatio->m_Items[v21] * (__int64)v24 / v23;
      if ( v25 && v5 )
        v24 = (v24 - 1) & ~((v24 - 1) >> 31);
      if ( v18 )
      {
        items = v18->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( items )
        {
          size = v18->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v18,
              v26,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            attackRatio = this->fields.attackRatio;
          }
          else
          {
            v18->fields._size = size + 1;
            items->m_Items[size] = v26;
          }
          v22 += v26;
          ++v21;
          damage = (damage - v26) & ~((damage - v26) >> 31);
          if ( attackRatio )
            continue;
        }
      }
      goto LABEL_20;
    }
    v18 = *damageList;
    if ( damage < 1 && v5 )
      damage = 1;
    if ( !v18
      || (v30 = v18->fields._items, v31 = Method_System_Collections_Generic_List_int__Add__,
                                    ++v18->fields._version,
                                    !v30) )
    {
LABEL_20:
      sub_2213CDC(v18, v19);
    }
    v32 = v18->fields._size;
    if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        damage,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = v32 + 1;
      v30->m_Items[v32] = damage;
    }
    damage += v22;
  }
  return damage;
}


void BattleActionData_AttackDamageData__SetAttackRatio(
        BattleActionData_AttackDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  System_Int32_array *v9; // x20
  BattleActionData_AttackDamageData_o *v10; // x19
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0

  v9 = ratio;
  v10 = this;
  if ( (byte_5972EED & 1) != 0 )
  {
    if ( ratio )
      goto LABEL_3;
  }
  else
  {
    this = (BattleActionData_AttackDamageData_o *)sub_2213A60(&Method_System_Array_Empty_int___);
    byte_5972EED = 1;
    if ( v9 )
    {
LABEL_3:
      if ( v10 )
        goto LABEL_4;
LABEL_15:
      sub_2213CDC(this, ratio);
    }
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, ratio);
  this = *(BattleActionData_AttackDamageData_o **)(v11[7] + 16LL);
  if ( (*(_WORD *)((char *)this + 309) & 1) == 0 )
    this = (BattleActionData_AttackDamageData_o *)sub_224B908(v8);
  v9 = **(System_Int32_array ***)&this->fields._ReactiveDamageGainHpBuffExecuteEffectId_k__BackingField;
  if ( !v10 )
    goto LABEL_15;
LABEL_4:
  v10->fields.attackRatio = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.attackRatio,
    (int32_t)v9,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_BaseData___ctor(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  this->fields._ShowBuffGroupId_k__BackingField = -1;
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

  if ( (byte_5972EE5 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_5972EE5 = 1;
  }
  v3 = BattleActionData_TypeInfo;
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v3 = BattleActionData_TypeInfo;
  }
  static_fields = v3->static_fields;
  addActionOrder = static_fields->addActionOrder;
  this->fields._AddOrder_k__BackingField = addActionOrder;
  static_fields->addActionOrder = addActionOrder + 1;
}


int32_t BattleActionData_BaseData__get_AddOrder(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  return this->fields._AddOrder_k__BackingField;
}


bool BattleActionData_BaseData__get_IsSubstituteBuffSkill(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  return this->fields._IsSubstituteBuffSkill_k__BackingField;
}


int32_t BattleActionData_BaseData__get_ShowBuffGroupId(BattleActionData_BaseData_o *this, const MethodInfo *method)
{
  return this->fields._ShowBuffGroupId_k__BackingField;
}


BattleActionData_TurnAnimEffectData_o *BattleActionData_BaseData__get_TurnAnimEffectData(
        BattleActionData_BaseData_o *this,
        const MethodInfo *method)
{
  return this->fields._TurnAnimEffectData_k__BackingField;
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


void BattleActionData_BaseData__set_ShowBuffGroupId(
        BattleActionData_BaseData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ShowBuffGroupId_k__BackingField = value;
}


void BattleActionData_BaseData__set_TurnAnimEffectData(
        BattleActionData_BaseData_o *this,
        BattleActionData_TurnAnimEffectData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TurnAnimEffectData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TurnAnimEffectData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_BaseShiftGaugeData___ctor(BattleActionData_BaseShiftGaugeData_o *this, const MethodInfo *method)
{
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_59730D6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_2213A60(&BattleAction_UpHpDataBeforeShift_TypeInfo);
    byte_59730D6 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v10 = (BattleAction_UpHpDataBeforeShift_o *)sub_2213CCC(BattleAction_UpHpDataBeforeShift_TypeInfo);
  BattleAction_UpHpDataBeforeShift___ctor(v10, curGaugeIndex, prevHp, curHp, 0);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v20 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_2213CDC(v11, v12);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v10,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v10, v13, v14, v15, v16, v17, v18);
  }
}


BattleServantHpShiftComponent_EffectData_o *BattleActionData_BaseShiftGaugeData__GetBeforeEffectData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1

  if ( (byte_59730D2 & 1) == 0 )
  {
    sub_2213A60(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_2213A60(&StringLiteral_20993/*"hp_iconeffect_before"*/);
    byte_59730D2 = 1;
  }
  v2 = sub_2213CCC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0);
  if ( !v2 )
    sub_2213CDC(v3, v4);
  v11 = StringLiteral_20993/*"hp_iconeffect_before"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_20993/*"hp_iconeffect_before"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 24), v11, v5, v6, v7, v8, v9, v10);
  return (BattleServantHpShiftComponent_EffectData_o *)v2;
}


BattleAction_ShiftHpData_o *BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0
  const MethodInfo_3814C2C *v5; // x3

  if ( (byte_59730D5 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_ShiftHpData___);
    byte_59730D5 = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  v5 = (const MethodInfo_3814C2C *)Method_BasicHelper_IndexValue_ShiftHpData___;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_object__58805292(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0,
                                         v5);
}


void BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData_o *v4; // x19
  System_Collections_Generic_List_ShiftHpData__c *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_59730D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShiftHpData___ctor__);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_2213A60(&System_Collections_Generic_List_ShiftHpData__TypeInfo);
    byte_59730D3 = 1;
  }
  if ( !svtData )
    sub_2213CDC(this, svtData);
  v5 = System_Collections_Generic_List_ShiftHpData__TypeInfo;
  v4->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v5);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v4->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._ShiftHpDataList_k__BackingField,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleActionData_BaseShiftGaugeData___c_c *v3; // x0
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__34_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59730D4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ShiftHpData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
    sub_2213A60(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__);
    sub_2213A60(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_59730D4 = 1;
  }
  v3 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__34_0 = (System_Action_object__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ShiftHpData__TypeInfo);
    System_Action_object____ctor(
      _9__34_0,
      v7,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      0);
    v8 = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    v8->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__34_0, (int32_t)_9__34_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_2213CDC(v3, method);
  System_Collections_Generic_List_object___ForEach(
    ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ShiftHpDataList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ShiftHpDataList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59730D7 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_BaseShiftGaugeData___c_TypeInfo);
    byte_59730D7 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleActionData_BaseShiftGaugeData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  BattleAction_ShiftHpData__InitHpIndex(x, 0);
}


void BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleBuffData_BuffData__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5972EF7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
    byte_5972EF7 = 1;
  }
  v3 = System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo;
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.removeBuffList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
  this->fields.AddBuffDataList = (struct System_Collections_Generic_List_BattleActionData_BuffData__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.AddBuffDataList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ShowBuffGroupId_k__BackingField = -1;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  MissionNaviTransitionBoardItem_o *p_effectProcList; // x19
  System_Collections_ICollection_o *effectProcList; // t1
  System_Collections_Generic_List_object__o *klass; // x20
  System_Action_object__o *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5972EF5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionEffect_Base__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
    sub_2213A60(&Method_BattleActionData_BuffData___c__DisplayClass72_0__ExecAfterEffectProc_b__0__);
    sub_2213A60(&BattleActionData_BuffData___c__DisplayClass72_0_TypeInfo);
    byte_5972EF5 = 1;
  }
  v5 = sub_2213CCC(BattleActionData_BuffData___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)data, v8, v9, v10, v11, v12, v13);
  effectProcList = (System_Collections_ICollection_o *)this->fields.effectProcList;
  p_effectProcList = (MissionNaviTransitionBoardItem_o *)&this->fields.effectProcList;
  if ( BasicHelper__IsNullOrEmpty(effectProcList, 0) )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
  v17 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionData_BuffData___c__DisplayClass72_0__ExecAfterEffectProc_b__0__,
    0);
  if ( !klass )
LABEL_7:
    sub_2213CDC(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    klass,
    (System_Action_T__o *)v17,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
  p_effectProcList->klass = 0;
  sub_2213A04(p_effectProcList, 0, v18, v19, v20, v21, v22, v23);
}


void BattleActionData_BuffData__ExecPreActionProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *effectProcList; // x19
  System_Action_object__o *v15; // x20

  if ( (byte_5972EF4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionEffect_Base__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
    sub_2213A60(&Method_BattleActionData_BuffData___c__DisplayClass71_0__ExecPreActionProc_b__0__);
    sub_2213A60(&BattleActionData_BuffData___c__DisplayClass71_0_TypeInfo);
    byte_5972EF4 = 1;
  }
  v5 = sub_2213CCC(BattleActionData_BuffData___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)data, v8, v9, v10, v11, v12, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0) )
    return;
  effectProcList = (System_Collections_Generic_List_object__o *)this->fields.effectProcList;
  v15 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionEffect_Base__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleActionData_BuffData___c__DisplayClass71_0__ExecPreActionProc_b__0__,
    0);
  if ( !effectProcList )
LABEL_7:
    sub_2213CDC(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    effectProcList,
    (System_Action_T__o *)v15,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
}


System_Int32_array *BattleActionData_BuffData__GetDisplayEffectIds(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  result = (BattleBuffData_o *)BattleData__getServantData(data, this->fields.targetId, 0);
  if ( result )
    return *(BattleBuffData_o **)&result[4].fields.wkflg;
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
    sub_2213CDC(this, 0);
  return !arg->fields.isTreasureDevice;
}


bool BattleActionData_BuffData__IsPopLabel(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.popLabel, 0) || this->fields._PopTextEffectId_k__BackingField > 0;
}


void BattleActionData_BuffData__OnUpdateBuffType(
        BattleActionData_BuffData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  this->fields._UpdateType_k__BackingField |= type;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData_BuffData_o *v9; // x20
  System_Collections_Generic_List_object__o *klass; // x8
  MissionNaviTransitionBoardItem_o *p_effectProcList; // x20
  System_Collections_Generic_List_object__o *effectProcList; // t1
  System_Collections_Generic_List_object__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  Il2CppClass **v23; // x0

  v9 = this;
  if ( (byte_5972EF3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    this = (BattleActionData_BuffData_o *)sub_2213A60(&System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    byte_5972EF3 = 1;
  }
  effectProcList = (System_Collections_Generic_List_object__o *)v9->fields.effectProcList;
  p_effectProcList = (MissionNaviTransitionBoardItem_o *)&v9->fields.effectProcList;
  klass = effectProcList;
  if ( !effectProcList )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    p_effectProcList->klass = (MissionNaviTransitionBoardItem_c *)v13;
    sub_2213A04(p_effectProcList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
    if ( !p_effectProcList->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v21 = Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__;
  ++klass->fields._version;
  if ( !items )
LABEL_9:
    sub_2213CDC(this, effectProc);
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)effectProc,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v23[4] = (Il2CppClass *)effectProc;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v23 + 4),
      (int32_t)effectProc,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void BattleActionData_BuffData__SetApplyTargetUpdateAfterShowBuff(
        BattleActionData_BuffData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleBuffData_BuffData_array *buffArray,
        bool isAddBuff,
        const MethodInfo *method)
{
  ;
}


void BattleActionData_BuffData__SetCheckHideWhenDeadInfo(
        BattleActionData_BuffData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972EF2 & 1) == 0 )
  {
    sub_2213A60(&DataVals_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972EF2 = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !vals )
  {
    vals = (DataVals_o *)sub_2213CCC(DataVals_TypeInfo);
    DataVals___ctor(vals, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  this->fields.dataVals = vals;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dataVals,
    (int32_t)vals,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_BuffData__SetFuncEntityData(
        BattleActionData_BuffData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *popupText; // x1
  BattleActionData_BuffData_o *v10; // x19
  System_Int32_array *EffectList; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( funcEnt )
  {
    popupText = funcEnt->fields.popupText;
    v10 = this;
    this->fields.popLabel = popupText;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.popLabel,
      (int32_t)popupText,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    *(_QWORD *)&v10->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
    EffectList = FunctionEntity__getEffectList(funcEnt, 0);
    v10->fields.effectList = EffectList;
    v10 = (BattleActionData_BuffData_o *)((char *)v10 + 96);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)EffectList, v12, v13, v14, v15, v16, v17);
    LODWORD(v10->monitor) = FunctionEntity__GetPopupTextEffectId(funcEnt, 0);
  }
}


void BattleActionData_BuffData__SetMultiMessage(
        BattleActionData_BuffData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleMultiMessageDisplay_Argument_o *v5; // x21
  struct BattleMultiMessageDisplay_Argument_o **p_MultiMessageArg_k__BackingField; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5972EF6 & 1) == 0 )
  {
    sub_2213A60(&BattleMultiMessageDisplay_Argument_TypeInfo);
    byte_5972EF6 = 1;
  }
  v5 = (BattleMultiMessageDisplay_Argument_o *)sub_2213CCC(BattleMultiMessageDisplay_Argument_TypeInfo);
  BattleMultiMessageDisplay_Argument___ctor(v5, dataVal, 0);
  this->fields._MultiMessageArg_k__BackingField = v5;
  p_MultiMessageArg_k__BackingField = &this->fields._MultiMessageArg_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_MultiMessageArg_k__BackingField,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  *((_BYTE *)p_MultiMessageArg_k__BackingField - 205) = 1;
}


void BattleActionData_BuffData__SetSaveTpTurn(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972EF1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_5972EF1 = 1;
  }
  v5 = 0;
  System_Nullable_int____ctor(
    (System_Nullable_int__o)&v5,
    value,
    (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  this->fields._SaveTpTurnValue_k__BackingField = v5;
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
  return this->fields._UpdateType_k__BackingField > 0;
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


int32_t BattleActionData_BuffData__get_UpdateType(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._UpdateType_k__BackingField;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MultiMessageArg_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MultiMessageArg_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void BattleActionData_BuffData__set_UpdateType(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UpdateType_k__BackingField = value;
}


void BattleActionData_BuffData__set_saveNpValue(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._saveNpValue_k__BackingField = value;
}


void BattleActionData_BuffData___c__DisplayClass71_0___ctor(
        BattleActionData_BuffData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_BuffData___c__DisplayClass71_0___ExecPreActionProc_b__0(
        BattleActionData_BuffData___c__DisplayClass71_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, const MethodInfo *))proc->klass->vtable._4_PreActionProc.methodPtr)(
    proc,
    this->fields.data,
    proc->klass->vtable._4_PreActionProc.method);
}


void BattleActionData_BuffData___c__DisplayClass72_0___ctor(
        BattleActionData_BuffData___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_BuffData___c__DisplayClass72_0___ExecAfterEffectProc_b__0(
        BattleActionData_BuffData___c__DisplayClass72_0_o *this,
        BattleActionEffect_Base_o *proc,
        const MethodInfo *method)
{
  if ( !proc )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(BattleActionEffect_Base_o *, struct BattleData_o *, const MethodInfo *))proc->klass->vtable._5_AfterEffectProc.methodPtr)(
    proc,
    this->fields.data,
    proc->klass->vtable._5_AfterEffectProc.method);
}


void BattleActionData_ChangeBg___ctor(BattleActionData_ChangeBg_o *this, const MethodInfo *method)
{
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
}


void BattleActionData_ChangeModelActionData___ctor(
        BattleActionData_ChangeModelActionData_o *this,
        int32_t funcTargetId,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  ChangeModelData_c *v7; // x0
  ChangeModelData_o *v8; // x21
  __int64 Value; // x0
  __int64 v10; // x1
  int32_t Param; // w0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59730E0 & 1) == 0 )
  {
    sub_2213A60(&ChangeModelData_TypeInfo);
    byte_59730E0 = 1;
  }
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  v7 = ChangeModelData_TypeInfo;
  this->fields._TargetId_k__BackingField = funcTargetId;
  v8 = (ChangeModelData_o *)sub_2213CCC(v7);
  ChangeModelData___ctor(v8, 0);
  if ( !dataVal || (Value = DataVals__GetValue(dataVal, 0), !v8) )
    sub_2213CDC(Value, v10);
  v8->fields.modelId = Value;
  Param = DataVals__GetParam(dataVal, 217, 0, 0);
  this->fields._ChangeData_k__BackingField = v8;
  v8->fields.isKeepChangeModelAfterContinue = Param;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChangeData_k__BackingField,
    (int32_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ChangeData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ChangeData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_DamageData___ctor(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BuffList_ACTION__c *v3; // x0
  System_Collections_Generic_List_T__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  long double v18; // q0
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  struct System_Int32_array **v23; // x8
  struct System_Int32_array *v24; // x1

  if ( (byte_5972EEC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo);
    byte_5972EEC = 1;
  }
  v3 = System_Collections_Generic_List_BuffList_ACTION__TypeInfo;
  this->fields.multiatk = 1;
  v4 = (System_Collections_Generic_List_T__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v4,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.attackSideEffectActList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v19 = Method_System_Array_Empty_int___;
  v20 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v20 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v20 = v19[7];
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
    v21 = sub_224B908(v18);
  if ( !*(_DWORD *)(v21 + 228) )
    *(__n128 *)&v18 = j_il2cpp_runtime_class_init_0(v21, v11);
  v22 = *(_QWORD *)(v19[7] + 16LL);
  if ( (*(_WORD *)(v22 + 309) & 1) == 0 )
    v22 = sub_224B908(v18);
  v23 = *(struct System_Int32_array ***)(v22 + 184);
  v24 = *v23;
  this->fields._ResetDamageArray_k__BackingField = *v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)v24,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._ShowBuffGroupId_k__BackingField = -1;
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

  if ( (byte_5972EEB & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    sub_2213A60(&Method_System_Linq_Enumerable_First_int___);
    byte_5972EEB = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.damageValueEffectIds, 0) )
    return -1;
  damageValueEffectIds = this->fields.damageValueEffectIds;
  if ( !damageValueEffectIds )
    sub_2213CDC(0, v5);
  if ( LODWORD(damageValueEffectIds->max_length) == 1 )
    return System_Linq_Enumerable__First_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)damageValueEffectIds,
             (const MethodInfo_387F7E0 *)Method_System_Linq_Enumerable_First_int___);
  else
    return BasicHelper__IndexValue_int_(
             damageValueEffectIds,
             index,
             -1,
             (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_5972EE7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5972EE7 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7
    || (items = v7->fields._items, v17 = Method_System_Collections_Generic_List_int__Add__,
                                   ++v7->fields._version,
                                   !items) )
  {
    sub_2213CDC(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      damage,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    items->m_Items[size] = damage;
  }
  *damageList = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)damageList, (int32_t)v7, v10, v11, v12, v13, v14, v15);
  return damage;
}


int32_t BattleActionData_DamageData__GetResetDamageValue(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_5972EE8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    byte_5972EE8 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields._ResetDamageArray_k__BackingField,
           index,
           0,
           (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
}


void BattleActionData_DamageData__SaveResetDamageArray(
        BattleActionData_DamageData_o *this,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  BattleActionData_DamageData_c *klass; // x8
  __int64 v8; // x1
  struct System_Int32_array *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_int__o *v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972EE9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5972EE9 = 1;
  }
  klass = this->klass;
  v16 = 0;
  ((void (__fastcall *)(BattleActionData_DamageData_o *, System_Collections_Generic_List_int__o **, _QWORD, bool, const MethodInfo *))klass->vtable._4_GetRatioDamageList.methodPtr)(
    this,
    &v16,
    (unsigned int)damage,
    minimumDamageFlg,
    klass->vtable._4_GetRatioDamageList.method);
  if ( !v16 )
    sub_2213CDC(0, v8);
  v9 = System_Collections_Generic_List_int___ToArray(
         v16,
         (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._ResetDamageArray_k__BackingField = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void BattleActionData_DamageData__SetEffectFlipProc(
        BattleActionData_DamageData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  ActEnemyEffectFlipProc_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5972EEA & 1) == 0 )
  {
    sub_2213A60(&ActEnemyEffectFlipProc_TypeInfo);
    byte_5972EEA = 1;
  }
  if ( funcEnt )
    funcEnt = (FunctionEntity_o *)FunctionEntity__GetActEnemyEffectFlipDataArray(funcEnt, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)funcEnt, 0) )
  {
    v5 = (ActEnemyEffectFlipProc_o *)sub_2213CCC(ActEnemyEffectFlipProc_TypeInfo);
    ActEnemyEffectFlipProc___ctor(v5, (EffectFlipData_array *)funcEnt, 0);
    this->fields._EffectFlipProc_k__BackingField = v5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._EffectFlipProc_k__BackingField,
      (int32_t)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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

  if ( (byte_5972EE6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__);
    byte_5972EE6 = 1;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_Int32Enum___Contains(
         attackSideEffectActList,
         act,
         (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
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
    sub_2213CDC(attackSideEffectActList, *(_QWORD *)&act);
  }
  size = attackSideEffectActList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      attackSideEffectActList,
      act,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    attackSideEffectActList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = act;
  }
}


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
    sub_2213CE4(this);
  return atknplist->m_Items[index];
}


int32_t BattleActionData_DamageData__getAttackCount(BattleActionData_DamageData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    sub_2213CDC(this, method);
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
    sub_2213CE4(this);
  return starlist->m_Items[index] > 0;
}


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
    sub_2213CE4(this);
  return starlist->m_Items[index];
}


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
    sub_2213CE4(this);
  return damagelist->m_Items[index];
}


System_Int32_array *BattleActionData_DamageData__getDamageList(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  return this->fields.damagelist;
}


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
    sub_2213CE4(this);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EffectFlipProc_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EffectFlipProc_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_DamageData__set_NoDamageAffectedBuff(
        BattleActionData_DamageData_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._NoDamageAffectedBuff_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NoDamageAffectedBuff_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ResetDamageArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_DamageValueFuncDamageData___ctor(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, (const MethodInfo *)ratio);
  this->fields.damageRates = ratio;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.damageRates, (int32_t)ratio, v5, v6, v7, v8, v9, v10);
}


int32_t BattleActionData_DamageValueFuncDamageData__GetRatioDamageList(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1
  struct System_Int32_array *damageRates; // x21
  il2cpp_array_size_t max_length; // x8
  __int64 v19; // x25
  unsigned __int64 v20; // x22
  struct System_Int32_array *items; // x8
  int32_t v22; // w10
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v25; // x21
  int v26; // w8
  int32_t v27; // w22
  int32_t Item; // w0
  System_Collections_Generic_List_int__o *v29; // x8
  int32_t v30; // w20
  __int64 v31; // x1
  int32_t v32; // w23
  int32_t v33; // w0

  if ( (byte_5972EF0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_5972EF0 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  *damageList = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)damageList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                    (System_Collections_Generic_IEnumerable_int__o *)this->fields.damageRates,
                                                    0);
  damageRates = this->fields.damageRates;
  if ( !damageRates )
    goto LABEL_19;
  max_length = damageRates->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = (int)v15;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        sub_2213CE4(v15);
      v15 = *damageList;
      if ( !*damageList )
        break;
      items = v15->fields._items;
      v22 = damageRates->m_Items[v20];
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        break;
      v16 = v22 * (__int64)damage / v19;
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          v16,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size] = v16;
      }
      LODWORD(max_length) = damageRates->max_length;
      if ( (__int64)++v20 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_2213CDC(v15, v16);
  }
LABEL_13:
  v25 = *damageList;
  if ( !*damageList )
    goto LABEL_19;
  v26 = v25->fields._size;
  v27 = v26 - 1;
  if ( v26 >= 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             *damageList,
             v27,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
    v29 = *damageList;
    v30 = Item;
    v32 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v29, 0);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
    v33 = System_Math__Max_77153260(0, damage - v32, 0);
    System_Collections_Generic_List_int___set_Item(
      v25,
      v27,
      v33 + v30,
      (const MethodInfo_4466FCC *)Method_System_Collections_Generic_List_int__set_Item__);
  }
  return damage;
}


void BattleActionData_DeferredBattleValueApplyData___ctor(
        BattleActionData_DeferredBattleValueApplyData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  Il2CppObject *Master_object; // x22
  BattleMessageEntity_o *v19; // x2
  const MethodInfo *v20; // x4
  int32_t DefInterval; // w0
  BattleActionData_DisplayMessageData_o *ScriptInt; // x0
  BattleMessageEntity_o *v23; // x2
  const MethodInfo *v24; // x4
  int32_t DefBaseTime; // w0
  BattleActionData_DisplayMessageData_o *v26; // x0
  BattleMessageEntity_o *v27; // x2
  const MethodInfo *v28; // x4
  int32_t DefTimePerChara; // w0
  int32_t v30; // w0
  System_Func_string__int__c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x22
  System_Func_object__int__o *v33; // x23
  int64_t MessageType_k__BackingField; // x2

  if ( (byte_59730E3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_string___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_15057/*"TimePerChara"*/);
    sub_2213A60(&StringLiteral_3183/*"BaseTime"*/);
    sub_2213A60(&StringLiteral_9411/*"MessageType"*/);
    sub_2213A60(&StringLiteral_8071/*"Interval"*/);
    byte_59730E3 = 1;
  }
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  if ( !ent )
    goto LABEL_15;
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(ent->fields.message, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_2213B20(string___TypeInfo, 0);
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
    sub_2213CDC(IsNullOrEmpty, v10);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Messages_k__BackingField,
    (int32_t)IsNullOrEmpty,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_object,
                  (ConstantMaster_o *)Master_object,
                  v19,
                  preMsg,
                  v20);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_8071/*"Interval"*/,
                                                         DefInterval,
                                                         0);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_object,
                  v23,
                  preMsg,
                  v24);
  v26 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_3183/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0);
  this->fields.baseTime = (int)v26;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v26,
                      (ConstantMaster_o *)Master_object,
                      v27,
                      preMsg,
                      v28);
  v30 = BattleMessageEntity__GetScriptInt(ent, (System_String_o *)StringLiteral_15057/*"TimePerChara"*/, DefTimePerChara, 0);
  v31 = System_Func_string__int__TypeInfo;
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  this->fields.timePerChara = v30;
  v33 = (System_Func_object__int__o *)sub_2213CCC(v31);
  System_Func_object__int____ctor(
    v33,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    0);
  this->fields.messageLen = System_Linq_Enumerable__Sum_object_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v33,
                              (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9411/*"MessageType"*/,
                                                MessageType_k__BackingField,
                                                0);
}


void BattleActionData_DisplayMessageData___ctor_52815272(
        BattleActionData_DisplayMessageData_o *this,
        ParseBattleMessage_o *parser,
        System_String_o *message,
        int32_t inBaseTime,
        const MethodInfo *method)
{
  struct System_String_array *IsNullOrEmpty; // x0
  struct System_String_array *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Func_string__int__c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x21
  System_Func_object__int__o *v19; // x20
  int32_t v20; // w0

  if ( (byte_59730E4 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_string___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_59730E4 = 1;
  }
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  IsNullOrEmpty = (struct System_String_array *)System_String__IsNullOrEmpty(message, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = (struct System_String_array *)sub_2213B20(string___TypeInfo, 0);
  }
  else
  {
    if ( !parser )
      goto LABEL_9;
    IsNullOrEmpty = ParseBattleMessage__Replace(parser, message, 0);
  }
  v10 = IsNullOrEmpty;
  if ( !this )
LABEL_9:
    sub_2213CDC(IsNullOrEmpty, v10);
  this->fields._Messages_k__BackingField = IsNullOrEmpty;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Messages_k__BackingField,
    (int32_t)IsNullOrEmpty,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = System_Func_string__int__TypeInfo;
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  this->fields.baseTime = inBaseTime;
  v19 = (System_Func_object__int__o *)sub_2213CCC(v17);
  System_Func_object__int____ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    0);
  v20 = System_Linq_Enumerable__Sum_object_(
          Messages_k__BackingField,
          (System_Func_TSource__int__o *)v19,
          (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_string___);
  this->fields._MessageType_k__BackingField = 0;
  this->fields.messageLen = v20;
}


int32_t BattleActionData_DisplayMessageData__GetDefBaseTime(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_59730E6 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_2213A60(&StringLiteral_2924/*"BATTLE_MSG_BASE_TIME"*/);
    byte_59730E6 = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_2213CDC(this, constMst);
  return ConstantMaster__GetValue_48903564(constMst, (System_String_o *)StringLiteral_2924/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0);
}


int32_t BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_59730E5 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_2213A60(&StringLiteral_2925/*"BATTLE_MSG_INTERVAL"*/);
    byte_59730E5 = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_2213CDC(this, constMst);
  return ConstantMaster__GetValue_48903564(constMst, (System_String_o *)StringLiteral_2925/*"BATTLE_MSG_INTERVAL"*/, 250, 0);
}


int32_t BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_59730E7 & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_2213A60(&StringLiteral_3006/*"BATTLE_TIME_PER_CHARA"*/);
    byte_59730E7 = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_2213CDC(this, constMst);
  return ConstantMaster__GetValue_48903564(constMst, (System_String_o *)StringLiteral_3006/*"BATTLE_TIME_PER_CHARA"*/, 15, 0);
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

  if ( (byte_59730E8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_59730E8 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text);
  v4 = LocalizationManager__ReplaceNameTag(text, 0, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v4 )
      sub_2213CDC(0, v5);
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

  if ( (byte_59730E2 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_59730E2 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  baseTime = this->fields.baseTime;
  p_timePerChara = &this->fields.timePerChara;
  timePerChara = this->fields.timePerChara;
  v6 = p_timePerChara[1];
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
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

  if ( (byte_59730E1 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_59730E1 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  interval = this->fields.interval;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Messages_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Messages_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_DownShiftGaugeData___ctor(BattleActionData_DownShiftGaugeData_o *this, const MethodInfo *method)
{
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_59730DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_2213A60(&BattleAction_ShiftDownHpData_TypeInfo);
    byte_59730DF = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftDownHpData_o *)sub_2213CCC(BattleAction_ShiftDownHpData_TypeInfo);
  BattleAction_ShiftDownHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v22 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_2213CDC(v13, v14);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
  }
}


BattleServantHpShiftComponent_EffectData_o *BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1

  if ( (byte_59730DE & 1) == 0 )
  {
    sub_2213A60(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_2213A60(&StringLiteral_20992/*"hp_iconeffect"*/);
    byte_59730DE = 1;
  }
  v2 = sub_2213CCC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0);
  if ( !v2 )
    sub_2213CDC(v3, v4);
  v11 = StringLiteral_20992/*"hp_iconeffect"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_20992/*"hp_iconeffect"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 24), v11, v5, v6, v7, v8, v9, v10);
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
    sub_2213CDC(this, svtData);
  shiftDeckIndex = svtData->fields.shiftDeckIndex;
  max_length = shiftDeckList->max_length;
  if ( max_length >= shiftDeckIndex + baseValue )
    max_length = shiftDeckIndex + baseValue;
  return max_length - shiftDeckIndex;
}


bool BattleActionData_DownShiftGaugeData__IsInvalid(
        BattleActionData_DownShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_2213CDC(this, 0);
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
  if ( (byte_59730DC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9136/*"MOTION_SHIFT_GAUGE_DOWN"*/);
    byte_59730DC = 1;
  }
  return (System_String_o *)StringLiteral_9136/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayDownShiftGaugeMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_59730DD & 1) == 0 )
  {
    sub_2213A60(&BattleAction_PlayDownShiftGaugeMain_TypeInfo);
    byte_59730DD = 1;
  }
  v3 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_2213CCC(BattleAction_PlayDownShiftGaugeMain_TypeInfo);
  BattleAction_PlayDownShiftGaugeMain___ctor(v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  return ((BattleAction_BasePlayShiftGauge_o *(__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, const MethodInfo *))v3->klass->vtable._7_Init.methodPtr)(
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.targetObject = argTargetObject;
  v6 = (BattleActionData_EntryAllAtOnceServantData_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.targetObject) = argUniqueId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)argTargetObject, v7, v8, v9, v10, v11, v12);
}


void BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  Il2CppClass *v7; // x0
  const MethodInfo_3CF8CCC *v8; // x4
  __int64 v9; // x2
  const MethodInfo_3CF8CCC *v10; // x4
  long double v11; // q0
  Il2CppObject *v12; // x21
  _QWORD *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  Il2CppObject **v17; // x8
  Il2CppObject *v18; // x2
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  BattleActionEffect_UpdateFieldInfo_o *v26; // x20
  const MethodInfo *v27; // x2
  System_ValueTuple_object__object__o v28; // [xsp+0h] [xbp-60h] BYREF
  System_ValueTuple_object__object__o v29; // [xsp+10h] [xbp-50h] BYREF
  System_ValueTuple_object__object__o v30; // 0:x0.16
  System_ValueTuple_object__object__o v31; // 0:x0.16

  if ( (byte_5972EF9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleActionData_BuffData_UpdateTargetType___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType______ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____TypeInfo);
    sub_2213A60(&BattleActionEffect_UpdateFieldInfo_TypeInfo);
    sub_2213A60(&BattleActionData_BuffData_UpdateTargetType___TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____ctor__);
    byte_5972EF9 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_3FAF074 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType______ctor__);
  v4 = sub_2213B20(BattleActionData_BuffData_UpdateTargetType___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_19;
  v6 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_20;
  v7 = BattleActionData_BuffData_UpdateTargetType___TypeInfo;
  *(_DWORD *)(v6 + 32) = 2;
  v4 = sub_2213B20(v7, 1);
  if ( !v4 )
    goto LABEL_19;
  v9 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_20;
  v30.fields.Item1 = (Il2CppObject *)&v29;
  v30.fields.Item2 = (Il2CppObject *)v6;
  *(_DWORD *)(v9 + 32) = 4;
  v29.fields.Item1 = 0;
  v29.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v30,
    (Il2CppObject *)v9,
    (Il2CppObject *)Method_System_ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____ctor__,
    v8);
  if ( !v3
    || (System_Collections_Generic_Dictionary_Int32Enum__ValueTuple_object__object____Add(
          v3,
          107,
          v29,
          (const MethodInfo_3FAFA28 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____Add__),
        (v4 = sub_2213B20(BattleActionData_BuffData_UpdateTargetType___TypeInfo, 1)) == 0) )
  {
LABEL_19:
    sub_2213CDC(v4, v5);
  }
  v12 = (Il2CppObject *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
LABEL_20:
    sub_2213CE4(v4);
  *(_DWORD *)(v4 + 32) = 1;
  v13 = Method_System_Array_Empty_BattleActionData_BuffData_UpdateTargetType___;
  v14 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_BuffData_UpdateTargetType___ + 7);
  if ( !v14 )
  {
    sub_224B964(Method_System_Array_Empty_BattleActionData_BuffData_UpdateTargetType___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908(v11);
  if ( !*(_DWORD *)(v15 + 228) )
    *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(v15, v5);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908(v11);
  v17 = *(Il2CppObject ***)(v16 + 184);
  v31.fields.Item1 = (Il2CppObject *)&v28;
  v31.fields.Item2 = v12;
  v18 = *v17;
  v28.fields.Item1 = 0;
  v28.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v31,
    v18,
    (Il2CppObject *)Method_System_ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____ctor__,
    v10);
  System_Collections_Generic_Dictionary_Int32Enum__ValueTuple_object__object____Add(
    v3,
    154,
    v28,
    (const MethodInfo_3FAFA28 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____Add__);
  this->fields.dictUpdateTargetEachBuffType = (struct System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dictUpdateTargetEachBuffType,
    (int32_t)v3,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, v25);
  v26 = (BattleActionEffect_UpdateFieldInfo_o *)sub_2213CCC(BattleActionEffect_UpdateFieldInfo_TypeInfo);
  BattleActionEffect_UpdateFieldInfo___ctor(v26, 0);
  BattleActionData_BuffData__SetActionEffectProc(
    (BattleActionData_BuffData_o *)this,
    (BattleActionEffect_Base_o *)v26,
    v27);
}


bool BattleActionData_FieldBuffData__DisplayBuff(
        BattleActionData_FieldBuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v6; // x21
  UnityEngine_Object_o *v7; // x22
  __int64 v8; // x1
  UnityEngine_Object_o *FieldEffectPos; // x23
  __int64 v10; // x1
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v6 = (BattleActionData_BuffData_o *)this;
  if ( (byte_5972EFA & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972EFA = 1;
  }
  if ( !perf )
    goto LABEL_22;
  this = (BattleActionData_FieldBuffData_o *)BattlePerformance__GetFieldPopupPos(perf, 0);
  if ( !arg )
    goto LABEL_22;
  v7 = (UnityEngine_Object_o *)this;
  FieldEffectPos = (UnityEngine_Object_o *)BattlePerformance__GetFieldEffectPos(perf, arg->fields.isTreasureDevice, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  this = (BattleActionData_FieldBuffData_o *)UnityEngine_Object__op_Equality(FieldEffectPos, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !arg->fields.isTreasureDevice )
  {
    if ( FieldEffectPos )
      goto LABEL_19;
LABEL_22:
    sub_2213CDC(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0);
  if ( !uicamera )
    goto LABEL_22;
  v17 = UnityEngine_Camera__WorldToViewportPoint_83198212(uicamera, position, 0);
  if ( !actorcamera )
    goto LABEL_22;
  v18 = UnityEngine_Camera__ViewportToWorldPoint_83198220(actorcamera, v17, 0);
  if ( !FieldEffectPos )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)FieldEffectPos, v18, 0);
LABEL_19:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldEffectPos, 0);
  BattlePerformance__DisplayFieldBuffEffect(perf, gameObject, v6, arg, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  BattlePerformance__DisplayFieldBuffPopup(
    perf,
    (UnityEngine_Transform_o *)v7,
    v6,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  BattleActionData_FieldBuffData__UpdateApplyTargetServant((BattleActionData_FieldBuffData_o *)v6, perf, arg, v15);
  return 1;
}


BattleBuffData_o *BattleActionData_FieldBuffData__GetTargetBattleBuffData(
        BattleActionData_FieldBuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionData_FieldBuffData_o *)data->fields._FieldEnvData_k__BackingField) == 0 )
    sub_2213CDC(this, data);
  return BattleFieldEnvironmentData__get_BuffData((BattleFieldEnvironmentData_o *)this, 0);
}


int32_t BattleActionData_FieldBuffData__GetUpdateType(
        BattleActionData_FieldBuffData_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 280;
  if ( isEnemy )
    v3 = 284;
  return *(_DWORD *)((char *)&this->klass + v3);
}


void BattleActionData_FieldBuffData__SetApplyTargetUpdateAfterShowBuff(
        BattleActionData_FieldBuffData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleBuffData_BuffData_array *buffArray,
        bool isAddBuff,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData___c_c *v9; // x0
  struct BattleActionData_FieldBuffData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__9_0; // x23
  Il2CppObject *v12; // x24
  struct BattleActionData_FieldBuffData___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  _DWORD *Entity; // x0
  __int64 v22; // x1
  _DWORD *v23; // x22
  struct BattleServantData_array *ApplyTargetSvtArray; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x4
  int v32; // w8
  int i; // w25
  char *v34; // x8
  BattleBuffData_BuffData_o *v35; // x23
  int32_t FieldBuffApplyTarget; // w21
  int32_t v37; // w1
  __int64 v38; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5972EFC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_BattleActionData_FieldBuffData___c__SetApplyTargetUpdateAfterShowBuff_b__9_0__);
    sub_2213A60(&BattleActionData_FieldBuffData___c_TypeInfo);
    byte_5972EFC = 1;
  }
  v9 = BattleActionData_FieldBuffData___c_TypeInfo;
  if ( !*(&BattleActionData_FieldBuffData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_FieldBuffData___c_TypeInfo, fieldEnv);
    v9 = BattleActionData_FieldBuffData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__9_0 = (System_Func_object__bool__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, fieldEnv);
      static_fields = BattleActionData_FieldBuffData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__9_0,
      v12,
      Method_BattleActionData_FieldBuffData___c__SetApplyTargetUpdateAfterShowBuff_b__9_0__,
      0);
    v13 = BattleActionData_FieldBuffData___c_TypeInfo->static_fields;
    v13->__9__9_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__9_0, (int32_t)_9__9_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__9_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  Entity = System_Linq_Enumerable__ToArray_object_(
             v20,
             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !fieldEnv
    || (v23 = Entity,
        ApplyTargetSvtArray = BattleFieldEnvironmentData__GetApplyTargetSvtArray(
                                fieldEnv,
                                (BattleBuffData_BuffData_array *)Entity,
                                0,
                                0),
        this->fields.ApplyTargetSvtArray = ApplyTargetSvtArray,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.ApplyTargetSvtArray,
          (int32_t)ApplyTargetSvtArray,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        !v23) )
  {
LABEL_25:
    sub_2213CDC(Entity, v22);
  }
  v32 = v23[6];
  if ( v32 >= 1 )
  {
    for ( i = 0; i < v32; ++i )
    {
      if ( i >= (unsigned int)v32 )
        sub_2213CE4(Entity);
      v34 = (char *)&v23[2 * i];
      v35 = (BattleBuffData_BuffData_o *)*((_QWORD *)v34 + 4);
      if ( !v35 )
        goto LABEL_25;
      FieldBuffApplyTarget = v35->fields.FieldBuffApplyTarget;
      BattleActionData_FieldBuffData__SetUpdateTargetType(
        this,
        FieldBuffApplyTarget,
        *((BattleBuffData_BuffData_o **)v34 + 4),
        isAddBuff,
        v31);
      Entity = BattleBuffData_BuffData__get_Entity(v35, 0);
      if ( Entity )
      {
        v37 = Entity[26];
        v38 = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v38,
          v37,
          (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v38 )
        {
          if ( SHIDWORD(v38) >= 1 )
          {
            switch ( FieldBuffApplyTarget )
            {
              case 3:
                goto LABEL_21;
              case 2:
                goto LABEL_22;
              case 1:
LABEL_21:
                this->fields.playerUpdateType |= 8u;
                if ( (FieldBuffApplyTarget & 0xFFFFFFFE) == 2 )
LABEL_22:
                  this->fields.enemyUpdateType |= 8u;
                break;
            }
          }
        }
      }
      v32 = v23[6];
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionData_FieldBuffData__SetUpdateTargetType(
        BattleActionData_FieldBuffData_o *this,
        int32_t applyTargetType,
        BattleBuffData_BuffData_o *buff,
        bool isAddBuff,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v8; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictUpdateTargetEachBuffType; // x23
  System_ValueTuple_object__object__o *p_Item2; // x8
  Il2CppObject *Item1; // x11
  void *monitor; // x9
  __int64 v13; // x8
  __int64 v14; // x9
  Il2CppObject *v15; // x11
  int klass; // w12
  System_ValueTuple_object__object__o v17; // [xsp+0h] [xbp-40h] BYREF

  v8 = this;
  if ( (byte_5972EFD & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____TryGetValue__);
    byte_5972EFD = 1;
  }
  v17.fields.Item1 = 0;
  v17.fields.Item2 = 0;
  if ( !buff )
    goto LABEL_20;
  dictUpdateTargetEachBuffType = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->fields.dictUpdateTargetEachBuffType;
  this = (BattleActionData_FieldBuffData_o *)BattleBuffData_BuffData__get_BuffType(buff, 0);
  if ( !dictUpdateTargetEachBuffType )
    goto LABEL_20;
  this = (BattleActionData_FieldBuffData_o *)System_Collections_Generic_Dictionary_Int32Enum__ValueTuple_object__object____TryGetValue(
                                               dictUpdateTargetEachBuffType,
                                               (int32_t)this,
                                               &v17,
                                               (const MethodInfo_3FB1454 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__ValueTuple_BattleActionData_BuffData_UpdateTargetType____BattleActionData_BuffData_UpdateTargetType_____TryGetValue__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  p_Item2 = (System_ValueTuple_object__object__o *)&v17.fields.Item2;
  if ( isAddBuff )
    p_Item2 = &v17;
  Item1 = p_Item2->fields.Item1;
  if ( !p_Item2->fields.Item1 )
LABEL_20:
    sub_2213CDC(this, *(_QWORD *)&applyTargetType);
  monitor = Item1[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v13 = (unsigned int)monitor & ~((int)monitor >> 31);
    v14 = (unsigned int)Item1[1].monitor;
    v15 = Item1 + 2;
    do
    {
      if ( !v14 )
        sub_2213CE4(this);
      klass = (int)v15->klass;
      switch ( applyTargetType )
      {
        case 3:
          goto LABEL_15;
        case 2:
          goto LABEL_16;
        case 1:
LABEL_15:
          v8->fields.playerUpdateType |= klass;
          if ( (applyTargetType & 0xFFFFFFFE) == 2 )
LABEL_16:
            v8->fields.enemyUpdateType |= klass;
          break;
      }
      --v13;
      v15 = (Il2CppObject *)((char *)v15 + 4);
      --v14;
    }
    while ( v13 );
  }
}


void BattleActionData_FieldBuffData__SetUpdateTargetType_52595736(
        BattleActionData_FieldBuffData_o *this,
        int32_t applyTargetType,
        int32_t updateType,
        const MethodInfo *method)
{
  if ( applyTargetType == 3 )
    goto LABEL_4;
  if ( applyTargetType != 2 )
  {
    if ( applyTargetType != 1 )
      return;
LABEL_4:
    this->fields.playerUpdateType |= updateType;
    if ( (applyTargetType & 0xFFFFFFFE) != 2 )
      return;
  }
  this->fields.enemyUpdateType |= updateType;
}


void BattleActionData_FieldBuffData__UpdateApplyTargetServant(
        BattleActionData_FieldBuffData_o *this,
        BattlePerformance_o *perf,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct BattleServantData_array *ApplyTargetSvtArray; // x25
  int max_length; // w8
  unsigned int v13; // w26
  BattleServantData_o *v14; // x23
  __int64 v15; // x8
  System_Action_object__o *v16; // x24
  int32_t uniqueId; // w23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5972EFB & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActorControl__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_BattleActionData_FieldBuffData___c__DisplayClass8_0__UpdateApplyTargetServant_b__0__);
    sub_2213A60(&BattleActionData_FieldBuffData___c__DisplayClass8_0_TypeInfo);
    byte_5972EFB = 1;
  }
  v7 = sub_2213CCC(BattleActionData_FieldBuffData___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.ApplyTargetSvtArray, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffMaster___);
    if ( !Master_object )
      goto LABEL_23;
    Master_object = (Il2CppObject *)BuffMaster__GetBuffEffectId(
                                      (BuffMaster_o *)Master_object,
                                      this->fields.buffId,
                                      -1,
                                      0);
    if ( !v7 )
      goto LABEL_23;
    ApplyTargetSvtArray = this->fields.ApplyTargetSvtArray;
    *(_DWORD *)(v7 + 16) = (_DWORD)Master_object;
    if ( !ApplyTargetSvtArray )
      goto LABEL_23;
    max_length = ApplyTargetSvtArray->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_2213CE4(Master_object);
        v14 = ApplyTargetSvtArray->m_Items[v13];
        if ( !v14 )
          break;
        if ( v14->fields.isEnemy )
          v15 = 284;
        else
          v15 = 280;
        BattleServantData__UpdateAfterShowBuff(v14, *(_DWORD *)((char *)&this->klass + v15), arg, 0);
        if ( *(int *)(v7 + 16) >= 1 )
        {
          v16 = *(System_Action_object__o **)(v7 + 24);
          uniqueId = v14->fields.uniqueId;
          if ( !v16 )
          {
            v16 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActorControl__TypeInfo);
            System_Action_object____ctor(
              v16,
              (Il2CppObject *)v7,
              Method_BattleActionData_FieldBuffData___c__DisplayClass8_0__UpdateApplyTargetServant_b__0__,
              0);
            *(_QWORD *)(v7 + 24) = v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v16, v18, v19, v20, v21, v22, v23);
          }
          if ( !perf )
            break;
          BattlePerformance__ExecActionServantActor(perf, uniqueId, (System_Action_BattleActorControl__o *)v16, 0);
        }
        max_length = ApplyTargetSvtArray->max_length;
        if ( (int)++v13 >= max_length )
          return;
      }
LABEL_23:
      sub_2213CDC(Master_object, v10);
    }
  }
}


void BattleActionData_FieldBuffData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972EFE & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_FieldBuffData___c_TypeInfo);
    byte_5972EFE = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleActionData_FieldBuffData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionData_FieldBuffData___c_TypeInfo->static_fields->__9 = (struct BattleActionData_FieldBuffData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleActionData_FieldBuffData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData_FieldBuffData___c___ctor(BattleActionData_FieldBuffData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData_FieldBuffData___c___SetApplyTargetUpdateAfterShowBuff_b__9_0(
        BattleActionData_FieldBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__get_IsApplyOther(x, 0);
}


void BattleActionData_FieldBuffData___c__DisplayClass8_0___ctor(
        BattleActionData_FieldBuffData___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData_FieldBuffData___c__DisplayClass8_0___UpdateApplyTargetServant_b__0(
        BattleActionData_FieldBuffData___c__DisplayClass8_0_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !actor )
    sub_2213CDC(this, 0);
  BattleActorControl__ActiveReservedBuffEffect(actor, this->fields.effectId, 0);
}


void BattleActionData_GimmickData___ctor(BattleActionData_GimmickData_o *this, const MethodInfo *method)
{
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
}


void BattleActionData_HealData___ctor(BattleActionData_HealData_o *this, const MethodInfo *method)
{
  this->fields._ShowBuffGroupId_k__BackingField = -1;
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
    sub_2213CDC(v5, v6);
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
    sub_2213CDC(this, perf);
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
    sub_2213CDC(this, method);
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


bool BattleActionData_MasterBuffData__get_ShowDuringNoblePhantasm(
        BattleActionData_MasterBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._ShowDuringNoblePhantasm_k__BackingField;
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


void BattleActionData_MasterBuffData__set_ShowDuringNoblePhantasm(
        BattleActionData_MasterBuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._ShowDuringNoblePhantasm_k__BackingField = value;
}


void BattleActionData_MoveToSubMember___ctor(
        BattleActionData_MoveToSubMember_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        bool isSucceeded,
        const MethodInfo *method)
{
  this->fields._ShowBuffGroupId_k__BackingField = -1;
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
  this->fields._ShowBuffGroupId_k__BackingField = -1;
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
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  this->fields.functionIndex = funcIndex;
}


void BattleActionData_ShiftServant__ResetBeforeWeapon(BattleActionData_ShiftServant_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.Weapon = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.Weapon, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59730D0 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_ShiftServant_WeaponData_TypeInfo);
    byte_59730D0 = 1;
  }
  v5 = (BattleActionData_ShiftServant_WeaponData_o *)sub_2213CCC(BattleActionData_ShiftServant_WeaponData_TypeInfo);
  BattleActionData_ShiftServant_WeaponData___ctor(v5, svtData, v6);
  this->fields.Weapon = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.Weapon, (int32_t)v5, v7, v8, v9, v10, v11, v12);
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
  int32_t CameraActionId; // w0
  int32_t overwriteSvtVoiceId; // w9
  int32_t uniqueId; // w8
  bool IsNoVoice; // w0
  bool isHideShadow; // w8
  struct ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( !svtData )
    sub_2213CDC(this, 0);
  this->fields.svtId = BattleServantData__getActorSvtId(svtData, 0);
  this->fields.limit = BattleServantData__getDispLimitCount(svtData, 1, 0);
  CameraActionId = BattleServantData__getCameraActionId(svtData, 0);
  overwriteSvtVoiceId = svtData->fields.overwriteSvtVoiceId;
  uniqueId = svtData->fields.uniqueId;
  this->fields.cameraId = CameraActionId;
  this->fields.overwriteSvtVoiceId = overwriteSvtVoiceId;
  this->fields.uniqueId = uniqueId;
  IsNoVoice = BattleServantData__IsNoVoice(svtData, 0);
  isHideShadow = svtData->fields.isHideShadow;
  LoadedAssetArgs_k__BackingField = svtData->fields._LoadedAssetArgs_k__BackingField;
  this->fields.isNoVoice = IsNoVoice;
  this->fields.isHideShadow = isHideShadow;
  this->fields.loadedAssetArgs = LoadedAssetArgs_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssetArgs,
    (int32_t)LoadedAssetArgs_k__BackingField,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
    sub_2213CDC(this, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AfterSvtCache_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AfterSvtCache_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(v5, v6);
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
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = this->fields._Color_k__BackingField.fields.r;
  result.fields.g = this->fields._Color_k__BackingField.fields.g;
  result.fields.b = this->fields._Color_k__BackingField.fields.b;
  result.fields.a = this->fields._Color_k__BackingField.fields.a;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5972EE4 & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    byte_5972EE4 = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_2213B20(BuffList_ACTION___TypeInfo, 0);
  this->fields.sideEffectActs = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sideEffectActs, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.targetId = targetId;
  this->fields.sideEffectActs = sideEffectActs;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sideEffectActs,
    (int32_t)sideEffectActs,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void BattleActionData_SkillShiftServant___ctor(
        BattleActionData_SkillShiftServant_o *this,
        BattleData_o *data,
        int32_t shiftNpcId,
        const MethodInfo *method)
{
  BattleActionData_SkillShiftServant_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  *(_QWORD *)&this->fields.displayType = -1;
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  v6->fields.data = data;
  v6 = (BattleActionData_SkillShiftServant_o *)((char *)v6 + 96);
  LODWORD(v6[-1].fields._TurnAnimEffectData_k__BackingField) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)data, v7, v8, v9, v10, v11, v12);
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
        this = (BattleActionData_SkillShiftServant_o *)svtData->fields.deckSvt,
        v3->fields.displayType = svtData->fields.displayType,
        !this) )
  {
    sub_2213CDC(this, svtData);
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
    sub_2213CDC(this, svtData);
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
  if ( (byte_59730D1 & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_2213A60(&int___TypeInfo);
    byte_59730D1 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  buffData = v3->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_2213B20(int___TypeInfo, 2);
  if ( !this )
    goto LABEL_11;
  v6 = *(_DWORD *)&this->fields.IsForceBuffEffect;
  targetData = (BattleServantData_o *)this;
  if ( !v6 || (this->fields._ShowBuffGroupId_k__BackingField = 10, v6 == 1) )
    sub_2213CE4(this);
  *(&this->fields._ShowBuffGroupId_k__BackingField + 1) = 24;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypePassiveBuff(buffData, (System_Int32_array *)this, 0),
        BattleServantData__setSkillShiftServant(v3, v4->fields.data, v4->fields.npcId, 0),
        (data = v4->fields.data) == 0)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0 )
  {
LABEL_11:
    sub_2213CDC(this, targetData);
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
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  this->fields.functionIndex = inFuncIndex;
  this->fields.uniqueId = inUniqueId;
  this->fields.unloadUniqueId = inUnloadUniqueId;
  this->fields.isEffectSummon = isEffect;
  this->fields.callSvtEffectId = callSvtEffectId;
}


void BattleActionData_ToFieldMasterBuffData___ctor(
        BattleActionData_ToFieldMasterBuffData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleActionEffect_UpdateFieldInfo_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5972EF8 & 1) == 0 )
  {
    sub_2213A60(&BattleActionEffect_UpdateFieldInfo_TypeInfo);
    byte_5972EF8 = 1;
  }
  BattleActionData_MasterBuffData___ctor((BattleActionData_MasterBuffData_o *)this, funcEnt, method);
  v5 = (BattleActionEffect_UpdateFieldInfo_o *)sub_2213CCC(BattleActionEffect_UpdateFieldInfo_TypeInfo);
  BattleActionEffect_UpdateFieldInfo___ctor(v5, 0);
  BattleActionData_BuffData__SetActionEffectProc(
    (BattleActionData_BuffData_o *)this,
    (BattleActionEffect_Base_o *)v5,
    v6);
}


BattleBuffData_o *BattleActionData_ToFieldMasterBuffData__GetTargetBattleBuffData(
        BattleActionData_ToFieldMasterBuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (BattleActionData_ToFieldMasterBuffData_o *)data->fields._FieldEnvData_k__BackingField) == 0 )
    sub_2213CDC(this, data);
  return BattleFieldEnvironmentData__get_BuffData((BattleFieldEnvironmentData_o *)this, 0);
}


void BattleActionData_TransformServant___ctor(
        BattleActionData_TransformServant_o *this,
        int32_t index,
        int32_t uniqueId,
        int32_t funcIndex,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  this->fields._ShowBuffGroupId_k__BackingField = -1;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
  this->fields.changeBgm = inChangeBgm;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeBgm,
    (int32_t)inChangeBgm,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  System_String_o *klass; // x8

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
    sub_2213CDC(this, perf);
  }
  klass = (System_String_o *)this->fields.changeBgm;
  if ( klass )
    klass = (System_String_o *)klass[1].klass;
  if ( klass )
    return klass;
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
    sub_2213CDC(this, method);
  return changeBgm->fields.isAllowSubBgmPlaying;
}


void BattleActionData_TurnAnimEffectData___ctor(
        BattleActionData_TurnAnimEffectData_o *this,
        int32_t executePriority,
        int32_t targetId,
        int32_t effectId,
        int32_t turnCount,
        int32_t showBuffGroupId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ExecutePriority_k__BackingField = executePriority;
  this->fields._TargetId_k__BackingField = targetId;
  this->fields._EffectId_k__BackingField = effectId;
  this->fields._TurnCount_k__BackingField = turnCount;
  this->fields._ShowBuffGroupId_k__BackingField = showBuffGroupId;
}


int32_t BattleActionData_TurnAnimEffectData__get_EffectId(
        BattleActionData_TurnAnimEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectId_k__BackingField;
}


int32_t BattleActionData_TurnAnimEffectData__get_ExecutePriority(
        BattleActionData_TurnAnimEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields._ExecutePriority_k__BackingField;
}


int32_t BattleActionData_TurnAnimEffectData__get_ShowBuffGroupId(
        BattleActionData_TurnAnimEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields._ShowBuffGroupId_k__BackingField;
}


int32_t BattleActionData_TurnAnimEffectData__get_TargetId(
        BattleActionData_TurnAnimEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


int32_t BattleActionData_TurnAnimEffectData__get_TurnCount(
        BattleActionData_TurnAnimEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields._TurnCount_k__BackingField;
}


void BattleActionData_UpShiftGaugeData___ctor(BattleActionData_UpShiftGaugeData_o *this, const MethodInfo *method)
{
  BattleActionData_BaseData___ctor((BattleActionData_BaseData_o *)this, 0);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_59730DB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShiftHpData__Add__);
    sub_2213A60(&BattleAction_ShiftUpHpData_TypeInfo);
    byte_59730DB = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_ShiftUpHpData_o *)sub_2213CCC(BattleAction_ShiftUpHpData_TypeInfo);
  BattleAction_ShiftUpHpData___ctor(v12, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v22 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_2213CDC(v13, v14);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
  }
}


BattleServantHpShiftComponent_EffectData_o *BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1

  if ( (byte_59730DA & 1) == 0 )
  {
    sub_2213A60(&BattleServantHpShiftComponent_EffectData_TypeInfo);
    sub_2213A60(&StringLiteral_20990/*"hp_iconcharge"*/);
    byte_59730DA = 1;
  }
  v2 = sub_2213CCC(BattleServantHpShiftComponent_EffectData_TypeInfo);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v2, 0);
  if ( !v2 )
    sub_2213CDC(v3, v4);
  v11 = StringLiteral_20990/*"hp_iconcharge"*/;
  *(_QWORD *)(v2 + 24) = StringLiteral_20990/*"hp_iconcharge"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 24), v11, v5, v6, v7, v8, v9, v10);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return svtData->fields.shiftDeckIndex <= svtData->fields.shiftSubCount;
}


void BattleActionData_UpShiftGaugeData__UpdateMaxShift(
        BattleActionData_UpShiftGaugeData_o *this,
        BattleServantData_o *targetSvtData,
        bool isChangeMaxBreakGauge,
        const MethodInfo *method)
{
  int shiftSubCount; // w8

  if ( isChangeMaxBreakGauge )
  {
    if ( targetSvtData )
    {
      shiftSubCount = targetSvtData->fields.lowLimitShift - 1;
      if ( targetSvtData->fields.shiftSubCount > shiftSubCount )
        shiftSubCount = targetSvtData->fields.shiftSubCount;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(this, targetSvtData);
  }
  if ( !targetSvtData )
    goto LABEL_10;
  shiftSubCount = targetSvtData->fields.lowLimitShift;
  if ( shiftSubCount >= targetSvtData->fields.shiftDeckIndex )
    shiftSubCount = targetSvtData->fields.shiftDeckIndex;
LABEL_9:
  targetSvtData->fields.lowLimitShift = shiftSubCount;
}


System_String_o *BattleActionData_UpShiftGaugeData__get_Motion(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  if ( (byte_59730D8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9137/*"MOTION_SHIFT_GAUGE_UP"*/);
    byte_59730D8 = 1;
  }
  return (System_String_o *)StringLiteral_9137/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  BattleAction_PlayUpShiftGaugeUpMain_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_59730D9 & 1) == 0 )
  {
    sub_2213A60(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
    byte_59730D9 = 1;
  }
  v3 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_2213CCC(BattleAction_PlayUpShiftGaugeUpMain_TypeInfo);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  return ((BattleAction_BasePlayShiftGauge_o *(__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, const MethodInfo *))v3->klass->vtable._7_Init.methodPtr)(
           v3,
           this,
           v3->klass->vtable._7_Init.method);
}


void BattleActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59730EC & 1) == 0 )
  {
    sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_59730EC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleActionData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionData___c_TypeInfo->static_fields->__9 = (struct BattleActionData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleActionData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData___c___ctor(BattleActionData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c___AddDisplayTriggerIntervalBuff_b__203_0(
        BattleActionData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_2213CDC(this, 0);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__Update(intervalData, buff, method);
}


BattleActionData_o *BattleActionData___c___AddSideEffectAfterAction_b__379_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_2213CDC(this, 0);
  return act->fields.afterActionData;
}


void BattleActionData___c___EnableSubstituteBuffSkillFlag_b__406_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields._IsSubstituteBuffSkill_k__BackingField = 1;
}


void BattleActionData___c___EnableSubstituteBuffSkillFlag_b__406_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields._IsSubstituteBuffSkill_k__BackingField = 1;
}


void BattleActionData___c___EnableSubstituteBuffSkillFlag_b__406_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields._IsSubstituteBuffSkill_k__BackingField = 1;
}


System_Collections_Generic_List_BattleActionData_BuffData__o *BattleActionData___c___EnumerateAllBuffData_b__174_0(
        BattleActionData___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( x )
    return x->fields.buffdatalist;
  else
    return 0;
}


System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *BattleActionData___c___EnumerateAllBuffData_b__174_1(
        BattleActionData___c_o *this,
        System_Collections_Generic_List_BattleActionData_BuffData__o *x,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_BattleActionData_BuffData__o *)x;
}


bool BattleActionData___c___ExecUnappliedProcess_b__175_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleActionData_BuffData__get_ExistEffectProc(x, 0);
}


bool BattleActionData___c___ExistFuncSideEffectTrigger_b__209_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t BattleActionData___c___GetExecOrderArrayEx_b__177_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_2213CDC(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t BattleActionData___c___GetExecOrderArray_b__176_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_2213CDC(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


bool BattleActionData___c___GetFuncTargetIds_b__351_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  return x != 0;
}


bool BattleActionData___c___GetFuncTargetIds_b__351_3(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  return x != 0;
}


bool BattleActionData___c___PreActionProcess_b__173_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleActionData_BuffData__get_ExistEffectProc(x, 0);
}


int32_t BattleActionData___c___PreActionProcess_b__173_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._AddOrder_k__BackingField;
}


void BattleActionData___c___ResetAllCheckDead_b__234_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleActionData_BuffData__ResetCheckHideWhenDead(x, 0);
}


int32_t BattleActionData___c___SetFuncSideEffectTrigger_b__178_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.functionIndex;
}


void BattleActionData___c___SetFuncSideEffectTrigger_b__178_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool BattleActionData___c___SetFuncTargetAllDead_b__190_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__isAliveLogic(x, 0, 0);
}


bool BattleActionData___c___SetNpBuffShowDurationDict_b__410_0(
        BattleActionData___c_o *this,
        WellFired_USFGOActorBattleActionEvent_o *action,
        const MethodInfo *method)
{
  if ( !action )
    sub_2213CDC(this, 0);
  return WellFired_USFGOActorBattleActionEvent__IsBuffDebuffActionType(action, 0);
}


float BattleActionData___c___SetNpBuffShowDurationDict_b__410_1(
        BattleActionData___c_o *this,
        WellFired_USFGOActorBattleActionEvent_o *action,
        const MethodInfo *method)
{
  if ( !action )
    sub_2213CDC(this, 0);
  return action->fields.firetime;
}


void BattleActionData___c___SetPopupOnce_b__179_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.isOncePop = 1;
}


int32_t BattleActionData___c___SetSideEffectCountByTarget_b__366_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.targetId;
}


int32_t BattleActionData___c___SetSideEffectCountByTarget_b__366_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.targetId;
}


void BattleActionData___c___UpdateForceBuffEffectAllTrue_b__210_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.IsForceBuffEffect = 1;
}


void BattleActionData___c___UpdateForceBuffEffectAllTrue_b__210_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.IsForceBuffEffect = 1;
}


void BattleActionData___c___UpdateIntervalBuff_b__200_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_2213CDC(this, 0);
  BattleServantData__updateBuff(svt, 1, 1, 0);
}


int32_t BattleActionData___c___UpdateTargetRangeOfTreasureDevice_b__355_0(
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
    sub_2213CDC(this, funcUnit);
  }
  return funcEnt->fields.targetType;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__358_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__358_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__358_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__358_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__358_4(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleActionData_DamageData__GetAttackCountExceptFirst(x, 0);
}


int32_t BattleActionData___c___getListFunctionIndexEx_b__358_5(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


int32_t BattleActionData___c___getListFunctionIndex_b__357_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndex_b__357_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex;
}


int32_t BattleActionData___c___getListFunctionIndex_b__357_2(
        BattleActionData___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return a - b;
}


void BattleActionData___c__DisplayClass142_0___ctor(
        BattleActionData___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass142_0___SetTurnAnimEffectData_b__0(
        BattleActionData___c__DisplayClass142_0_o *this,
        BattleActionData_BuffData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleActionData_TurnAnimEffectData_o *turnAnimEffectData; // x8

  if ( !data )
    sub_2213CDC(this, 0);
  turnAnimEffectData = this->fields.turnAnimEffectData;
  data->fields._TurnAnimEffectData_k__BackingField = turnAnimEffectData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&data->fields._TurnAnimEffectData_k__BackingField,
    (int32_t)turnAnimEffectData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData___c__DisplayClass142_0___SetTurnAnimEffectData_b__1(
        BattleActionData___c__DisplayClass142_0_o *this,
        BattleActionData_HealData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleActionData_TurnAnimEffectData_o *turnAnimEffectData; // x8

  if ( !data )
    sub_2213CDC(this, 0);
  turnAnimEffectData = this->fields.turnAnimEffectData;
  data->fields._TurnAnimEffectData_k__BackingField = turnAnimEffectData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&data->fields._TurnAnimEffectData_k__BackingField,
    (int32_t)turnAnimEffectData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData___c__DisplayClass142_0___SetTurnAnimEffectData_b__2(
        BattleActionData___c__DisplayClass142_0_o *this,
        BattleActionData_DamageData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleActionData_TurnAnimEffectData_o *turnAnimEffectData; // x8

  if ( !data )
    sub_2213CDC(this, 0);
  turnAnimEffectData = this->fields.turnAnimEffectData;
  data->fields._TurnAnimEffectData_k__BackingField = turnAnimEffectData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&data->fields._TurnAnimEffectData_k__BackingField,
    (int32_t)turnAnimEffectData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionData___c__DisplayClass173_0___ctor(
        BattleActionData___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass173_0___PreActionProcess_b__2(
        BattleActionData___c__DisplayClass173_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleActionData_BuffData__ExecPreActionProc(x, this->fields.data, 0);
}


void BattleActionData___c__DisplayClass175_0___ctor(
        BattleActionData___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass175_0___ExecUnappliedProcess_b__1(
        BattleActionData___c__DisplayClass175_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleActionData_BuffData__ExecAfterEffectProc(x, this->fields.data, 0);
}


void BattleActionData___c__DisplayClass176_0___ctor(
        BattleActionData___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass176_0___GetExecOrderArray_b__0(
        BattleActionData___c__DisplayClass176_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData___c__DisplayClass176_0_o *v9; // x20
  System_Collections_Generic_List_object__o *execOrderList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_59730ED & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass176_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_59730ED = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)v9->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_2213CDC(this, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)x;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)x,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void BattleActionData___c__DisplayClass176_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass176_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActionData___c__DisplayClass176_0_o *v9; // x20
  System_Collections_Generic_List_object__o *execOrderList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_59730EE & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass176_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__);
    byte_59730EE = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)v9->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_2213CDC(this, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)x;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)x,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void BattleActionData___c__DisplayClass178_0___ctor(
        BattleActionData___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass178_0___SetFuncSideEffectTrigger_b__1(
        BattleActionData___c__DisplayClass178_0_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.functionIndex == this->fields.lastIndex;
}


void BattleActionData___c__DisplayClass190_0___ctor(
        BattleActionData___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass190_0___SetFuncTargetAllDead_b__0(
        BattleActionData___c__DisplayClass190_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.isEnemy != this->fields.isActorEnemy;
}


void BattleActionData___c__DisplayClass202_0___ctor(
        BattleActionData___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass202_0___UpdateDirectIntervalBuffData_b__0(
        BattleActionData___c__DisplayClass202_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !buff )
    sub_2213CDC(this, 0);
  return BattleBuffData_BuffData__EqualBuffType(buff, this->fields.buffMst, this->fields.targetType, v3);
}


void BattleActionData___c__DisplayClass220_0___ctor(
        BattleActionData___c__DisplayClass220_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass220_0___getDamageList_b__0(
        BattleActionData___c__DisplayClass220_0_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass225_0___ctor(
        BattleActionData___c__DisplayClass225_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass225_0___GetDamageArrayDistinctIndex_b__0(
        BattleActionData___c__DisplayClass225_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct BattleActionData_DamageData_o *damage; // x8

  if ( !x || (damage = this->fields.damage) == 0 )
    sub_2213CDC(this, x);
  return x->fields.functionIndex == damage->fields.functionIndex;
}


void BattleActionData___c__DisplayClass233_0___ctor(
        BattleActionData___c__DisplayClass233_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass233_0___getBuffList_b__0(
        BattleActionData___c__DisplayClass233_0_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass240_0___ctor(
        BattleActionData___c__DisplayClass240_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass240_0___getHealList_b__0(
        BattleActionData___c__DisplayClass240_0_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass241_0___ctor(
        BattleActionData___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass241_0___TryGetRevivedServantHealDataArray_b__0(
        BattleActionData___c__DisplayClass241_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  int32_t entryIndex; // w9

  if ( !x )
    sub_2213CDC(this, 0);
  if ( !BattleActionData_HealData__get_IsRevival(x, 0) )
    return 0;
  entryIndex = this->fields.entryIndex;
  return x->fields._EntryIndex_k__BackingField == entryIndex || entryIndex < 0;
}


void BattleActionData___c__DisplayClass246_0___ctor(
        BattleActionData___c__DisplayClass246_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass246_0___getReplaceMember_b__0(
        BattleActionData___c__DisplayClass246_0_o *this,
        BattleActionData_ReplaceMember_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass259_0___ctor(
        BattleActionData___c__DisplayClass259_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass259_0___getSummonServant_b__0(
        BattleActionData___c__DisplayClass259_0_o *this,
        BattleActionData_SummonServant_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.functionIndex == this->fields.funcIndex;
}


void BattleActionData___c__DisplayClass279_0___ctor(
        BattleActionData___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass279_0___TryGetUseInFsmFuncParamValue_b__0(
        BattleActionData___c__DisplayClass279_0_o *this,
        UseInFsmFuncParam_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return UseInFsmFuncParam__IsMatch(x, this->fields.condData, 0);
}


void BattleActionData___c__DisplayClass286_0___ctor(
        BattleActionData___c__DisplayClass286_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass286_0___TryGetChangeModelData_b__0(
        BattleActionData___c__DisplayClass286_0_o *this,
        BattleActionData_ChangeModelActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._TargetId_k__BackingField == this->fields.funcTargetId;
}


void BattleActionData___c__DisplayClass351_0___ctor(
        BattleActionData___c__DisplayClass351_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass351_0___GetFuncTargetIds_b__0(
        BattleActionData___c__DisplayClass351_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass351_0_o *v4; // x20

  v4 = this;
  if ( (byte_59730EF & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass351_0_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59730EF = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass351_0_o *)v4->fields.ids) == 0 )
    sub_2213CDC(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void BattleActionData___c__DisplayClass351_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass351_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass351_0_o *v4; // x20

  v4 = this;
  if ( (byte_59730F0 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass351_0_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59730F0 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass351_0_o *)v4->fields.ids) == 0 )
    sub_2213CDC(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void BattleActionData___c__DisplayClass351_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass351_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass351_0_o *v4; // x20

  v4 = this;
  if ( (byte_59730F1 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass351_0_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59730F1 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass351_0_o *)v4->fields.ids) == 0 )
    sub_2213CDC(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void BattleActionData___c__DisplayClass359_0___ctor(
        BattleActionData___c__DisplayClass359_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass359_0___GetFunctionIndexArrayNearByCuriousFunc_b__0(
        BattleActionData___c__DisplayClass359_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // x0

  if ( (byte_59730F2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__get_Value__);
    byte_59730F2 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_45E4324 *)Method_System_Nullable_int__get_Value__) > x;
}


bool BattleActionData___c__DisplayClass359_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass359_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // x0

  if ( (byte_59730F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__get_Value__);
    byte_59730F3 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_45E4324 *)Method_System_Nullable_int__get_Value__) == x;
}


bool BattleActionData___c__DisplayClass359_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass359_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // x0

  if ( (byte_59730F4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__get_Value__);
    byte_59730F4 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_45E4324 *)Method_System_Nullable_int__get_Value__) < x;
}


void BattleActionData___c__DisplayClass365_0___ctor(
        BattleActionData___c__DisplayClass365_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass365_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass365_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0);
}


void BattleActionData___c__DisplayClass366_0___ctor(
        BattleActionData___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass366_0___SetSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass366_0_o *v2; // x19
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  BattleActionData___c_c *v5; // x0
  System_Collections_Generic_List_int__o *targetList; // x20
  struct BattleActionData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__366_1; // x22
  Il2CppObject *v9; // x23
  struct BattleActionData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  BattleActionData___c_c *v18; // x0
  System_Collections_Generic_List_int__o *v19; // x19
  struct BattleActionData___c_StaticFields *v20; // x8
  System_Func_object__int__o *_9__366_2; // x21
  Il2CppObject *v22; // x22
  struct BattleActionData___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  v2 = this;
  if ( (byte_59730F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    sub_2213A60(&System_Func_BattleActionData_HealData__int__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__366_1__);
    sub_2213A60(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__366_2__);
    this = (BattleActionData___c__DisplayClass366_0_o *)sub_2213A60(&BattleActionData___c_TypeInfo);
    byte_59730F5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v5 = BattleActionData___c_TypeInfo;
    targetList = v2->fields.targetList;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v5 = BattleActionData___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__366_1 = (System_Func_object__int__o *)static_fields->__9__366_1;
    if ( !_9__366_1 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, method);
        static_fields = BattleActionData___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__366_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleActionData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__366_1,
        v9,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__366_1__,
        0);
      v10 = BattleActionData___c_TypeInfo->static_fields;
      v10->__9__366_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__366_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->__9__366_1,
        (int32_t)_9__366_1,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    this = (BattleActionData___c__DisplayClass366_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__366_1,
                                                          (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_23;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_23;
  }
  healdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.healdatalist;
  if ( healdatalist )
  {
    v18 = BattleActionData___c_TypeInfo;
    v19 = v2->fields.targetList;
    if ( !*(&BattleActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v18 = BattleActionData___c_TypeInfo;
    }
    v20 = v18->static_fields;
    _9__366_2 = (System_Func_object__int__o *)v20->__9__366_2;
    if ( !_9__366_2 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, method);
        v20 = BattleActionData___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__366_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleActionData_HealData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__366_2,
        v22,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__366_2__,
        0);
      v23 = BattleActionData___c_TypeInfo->static_fields;
      v23->__9__366_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__366_2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v23->__9__366_2,
        (int32_t)_9__366_2,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    this = (BattleActionData___c__DisplayClass366_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__366_2,
                                                          (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v19 )
    {
      System_Collections_Generic_List_int___AddRange(
        v19,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_23:
    sub_2213CDC(this, method);
  }
}


void BattleActionData___c__DisplayClass367_0___ctor(
        BattleActionData___c__DisplayClass367_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass367_0___GetMaxSideEffectCountByTarget_b__0(
        BattleActionData___c__DisplayClass367_0_o *this,
        BattleActionData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  BattleActionData__SetSideEffectCountByTarget(data, &this->fields.dicTarget, 0);
}


void BattleActionData___c__DisplayClass374_0___ctor(
        BattleActionData___c__DisplayClass374_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass374_0___getSideEffectList_b__0(
        BattleActionData___c__DisplayClass374_0_o *this,
        BattleActionData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_2213CDC(this, 0);
  return s->fields.actType == this->fields.actType;
}


void BattleActionData___c__DisplayClass375_0___ctor(
        BattleActionData___c__DisplayClass375_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass375_0___GetTriggerFuncIndexMatchSideEffectArray_b__0(
        BattleActionData___c__DisplayClass375_0_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.actType == this->fields.actionType
      && BattleActionData__IsMatchSideEffectTriggerFuncIndex(x, this->fields.funcIndex, 0);
}


void BattleActionData___c__DisplayClass379_0___ctor(
        BattleActionData___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass379_0___AddSideEffectAfterAction_b__0(
        BattleActionData___c__DisplayClass379_0_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || !act )
    sub_2213CDC(this, act);
  return BattleActionData__ExistsAddableAfterAction(act, perf->fields.data, 0);
}


void BattleActionData___c__DisplayClass389_0___ctor(
        BattleActionData___c__DisplayClass389_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionData___c__DisplayClass389_0___addReflectLogicResultServantId_b__0(
        BattleActionData___c__DisplayClass389_0_o *this,
        BattleActionData_ServantLogicResultData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}


void BattleActionData___c__DisplayClass407_0___ctor(
        BattleActionData___c__DisplayClass407_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionData___c__DisplayClass407_0___OverwirteFuncIndex_b__0(
        BattleActionData___c__DisplayClass407_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.functionIndex = this->fields.overwriteFuncIndex;
}


void BattleActionData___c__DisplayClass407_0___OverwirteFuncIndex_b__1(
        BattleActionData___c__DisplayClass407_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.functionIndex = this->fields.overwriteFuncIndex;
}


void BattleActionData___c__DisplayClass407_0___OverwirteFuncIndex_b__2(
        BattleActionData___c__DisplayClass407_0_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields.functionIndex = this->fields.overwriteFuncIndex;
}