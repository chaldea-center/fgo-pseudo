void __fastcall BattleActionData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BattleActionData_StaticFields *static_fields; // x8

  if ( (byte_4B18473 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, v1, v2);
    byte_4B18473 = 1;
  }
  static_fields = BattleActionData_TypeInfo->static_fields;
  static_fields->addActionOrder = 0;
  *(_OWORD *)&static_fields->TYPE_DEAD = xmmword_BD3030;
  *(_OWORD *)&static_fields->TYPE_RESURRECTION = xmmword_BD3B10;
  *(_OWORD *)&static_fields->TYPE_ORDERBUSTER = xmmword_BD3320;
}


void __fastcall BattleActionData___ctor(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_int__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_KeyValuePair_int__int___o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_T__o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Collections_Generic_List_int__o *v73; // x20
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Collections_Generic_HashSet_int__o *v83; // x20
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v93; // x20
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  void *v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  System_Collections_Generic_List_object__o *v110; // x20
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7

  if ( (byte_4B18472 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__,
      method,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B18472 = 1;
  }
  *(_QWORD *)&this->fields.motionId = -1LL;
  this->fields.commandType = -1;
  *(_QWORD *)&this->fields.commandattack = -1LL;
  this->fields.systemTime = -1.0;
  this->fields.npPer = -1;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  v33 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.damageSideEffectedSvtIds = v33;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.damageSideEffectedSvtIds,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v43 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1BCAA2C(
                                                                       System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo,
                                                                       v40,
                                                                       v41,
                                                                       v42);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v43,
    (const MethodInfo_34EED88 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  this->fields.attackSideEffectedSvtIds = v43;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.attackSideEffectedSvtIds,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleActionData_ServantLogicResultData__TypeInfo,
                                                       v50,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData___ctor__);
  this->fields.servantLogicResultList = (struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *)v53;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantLogicResultList,
    (int64_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.funcResult = 1;
  v63 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_Target_PlayerTypeFlag__TypeInfo,
                                                  v60,
                                                  v61,
                                                  v62);
  System_Collections_Generic_List_Int32Enum____ctor(
    v63,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag___ctor__);
  this->fields.funcTargetPlayerTypeList = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)v63;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.funcTargetPlayerTypeList,
    (int64_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v73 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v70,
                                                    v71,
                                                    v72);
  System_Collections_Generic_List_int____ctor(
    v73,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.funcTargetList = v73;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.funcTargetList, (int64_t)v73, v74, v75, v76, v77, v78, v79);
  this->fields._FirstAtkMainTargetId_k__BackingField = -1;
  v83 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v80,
                                                       v81,
                                                       v82);
  System_Collections_Generic_HashSet_int____ctor(
    v83,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields._HpDecreaseFuncTargetHash_k__BackingField = v83;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int64_t)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v93 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___TypeInfo,
                                                                   v90,
                                                                   v91,
                                                                   v92);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object____ctor(
    v93,
    (const MethodInfo_31C016C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData____ctor__);
  this->fields._IntervalBuffDict_k__BackingField = (struct System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___o *)v93;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int64_t)v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v100 = StringLiteral_1/*""*/;
  this->fields.skillCutInMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillCutInMessage,
    (int64_t)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v110 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_BattleActionData__TypeInfo,
                                                        v107,
                                                        v108,
                                                        v109);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
  this->fields.sideEffectList = (struct System_Collections_Generic_List_BattleActionData__o *)v110;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.sideEffectList,
    (int64_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__AddAfterActionData(
        BattleActionData_o *this,
        BattleActionData_o *afterActionData,
        bool isPreActCheckDead,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleActionData_o **p_afterActionData; // x20

  this->fields.afterActionData = afterActionData;
  p_afterActionData = &this->fields.afterActionData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.afterActionData,
    (int64_t)afterActionData,
    isPreActCheckDead,
    (int32_t)method,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *buffdatalist; // x0
  PartyOrganizationUtility_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4B1842E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v12, v13);
    byte_4B1842E = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (PartyOrganizationUtility_o *)&this->fields.buffdatalist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo,
                                                         data,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (PartyOrganizationUtility_c *)v16;
    sub_1BCA784(p_buffdatalist, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
    if ( !p_buffdatalist->klass )
      goto LABEL_11;
  }
  items = buffdatalist->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleActionData_BuffData__Add__;
  ++buffdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1BCAA3C(buffdatalist, data);
  size = buffdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      buffdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    buffdatalist->fields._size = size + 1;
    v26[4] = (Il2CppClass *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  BattleActionData_DisplayMessageData_o *v15; // x19
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  int64_t v18; // x2
  __int64 v19; // x3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *DispMsgList_k__BackingField; // x0
  PartyOrganizationUtility_o *p_DispMsgList_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8

  if ( (byte_4B18443 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_DisplayMessageData_TypeInfo, ent, parser);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo, v13, v14);
    byte_4B18443 = 1;
  }
  v15 = (BattleActionData_DisplayMessageData_o *)sub_1BCAA2C(
                                                   BattleActionData_DisplayMessageData_TypeInfo,
                                                   ent,
                                                   parser,
                                                   preMsg);
  BattleActionData_DisplayMessageData___ctor(v15, ent, parser, preMsg, v16);
  DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._DispMsgList_k__BackingField;
  if ( !DispMsgList_k__BackingField )
  {
    p_DispMsgList_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._DispMsgList_k__BackingField;
    v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo,
                                                         v17,
                                                         v18,
                                                         v19);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    p_DispMsgList_k__BackingField->klass = (PartyOrganizationUtility_c *)v26;
    sub_1BCA784(p_DispMsgList_k__BackingField, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    DispMsgList_k__BackingField = (System_Collections_Generic_List_object__o *)p_DispMsgList_k__BackingField->klass;
    if ( !p_DispMsgList_k__BackingField->klass )
      goto LABEL_10;
  }
  items = DispMsgList_k__BackingField->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
  ++DispMsgList_k__BackingField->fields._version;
  if ( !items )
LABEL_10:
    sub_1BCAA3C(DispMsgList_k__BackingField, v17);
  size = DispMsgList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DispMsgList_k__BackingField,
      (Il2CppObject *)v15,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    DispMsgList_k__BackingField->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v15, v18, v19, v20, v21, v22, v23);
  }
  return v15;
}


BattleActionData_o *__fastcall BattleActionData__AddDisplayTriggerIntervalBuff(
        BattleActionData_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  BattleActionData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  BattleServantData_o *key; // x21
  System_Action_object__o *v16; // x22
  Il2CppObject *v17; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v6 = this;
  if ( (byte_4B18423 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, task, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Key__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      v9,
      v10);
    sub_1BCA7E0(&Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__151_0__, v11, v12);
    this = (BattleActionData_o *)sub_1BCA7E0(&BattleActionData___c_TypeInfo, v13, v14);
    byte_4B18423 = 1;
  }
  if ( !task )
    goto LABEL_12;
  key = task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key;
  this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, task);
    this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
  }
  v16 = *(System_Action_object__o **)(*(_QWORD *)&this->fields.commandAssistId + 80LL);
  if ( !v16 )
  {
    if ( !*(_DWORD *)&this->fields.funcResult )
    {
      j_il2cpp_runtime_class_init_0(this, task);
      this = (BattleActionData_o *)BattleActionData___c_TypeInfo;
    }
    v17 = **(Il2CppObject ***)&this->fields.commandAssistId;
    v16 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData_BuffData__TypeInfo, task, method, v3);
    System_Action_object____ctor(v16, v17, Method_BattleActionData___c__AddDisplayTriggerIntervalBuff_b__151_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__151_0 = (struct System_Action_BattleBuffData_BuffData__o *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__151_0, (int64_t)v16, v19, v20, v21, v22, v23, v24);
  }
  if ( !v6 )
LABEL_12:
    sub_1BCAA3C(this, task);
  BattleActionData__AddUpdateIntervalBuffDict(
    v6,
    key,
    (System_Action_BattleBuffData_BuffData__o *)v16,
    task->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value,
    v4);
  return v6;
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_object__o *v16; // x23
  const MethodInfo *v17; // x4

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1841E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, data, method);
    this = (BattleActionData_o *)sub_1BCA7E0(&Method_BattleActionData_UpdateIntervalCurrent__, v5, v6);
    byte_4B1841E = 1;
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
        sub_1BCAA44(this, data);
      v10 = &v8->klass + (int)v9;
      v11 = (BattleServantData_o *)v10[4];
      if ( !v11 )
        break;
      this = (BattleActionData_o *)BattleServantData__get_BuffData((BattleServantData_o *)v10[4], 0LL);
      if ( !this )
        break;
      UpdateWaitIntervalBuffArray = BattleBuffData__GetUpdateWaitIntervalBuffArray((BattleBuffData_o *)this, 0LL);
      v16 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData_BuffData__TypeInfo, v13, v14, v15);
      System_Action_object____ctor(v16, v4, Method_BattleActionData_UpdateIntervalCurrent__, 0LL);
      BattleActionData__AddUpdateIntervalBuffDict(
        (BattleActionData_o *)v4,
        v11,
        (System_Action_BattleBuffData_BuffData__o *)v16,
        UpdateWaitIntervalBuffArray,
        v17);
      endcameraname = (int)v8->fields.endcameraname;
      if ( (int)++v9 >= endcameraname )
        return ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable[5].method)(
                 v4,
                 v4->klass->vtable[6].methodPtr);
    }
LABEL_12:
    sub_1BCAA3C(this, data);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *healdatalist; // x0
  PartyOrganizationUtility_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4B18432 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_HealData__Add__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v12, v13);
    byte_4B18432 = 1;
  }
  if ( data )
    BattleActionData_BaseData__InitAddOrder((BattleActionData_BaseData_o *)data, (const MethodInfo *)data);
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (PartyOrganizationUtility_o *)&this->fields.healdatalist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_HealData__TypeInfo,
                                                         data,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (PartyOrganizationUtility_c *)v16;
    sub_1BCA784(p_healdatalist, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
    if ( !p_healdatalist->klass )
      goto LABEL_11;
  }
  items = healdatalist->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleActionData_HealData__Add__;
  ++healdatalist->fields._version;
  if ( !items )
LABEL_11:
    sub_1BCAA3C(healdatalist, data);
  size = healdatalist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      healdatalist,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    healdatalist->fields._size = size + 1;
    v26[4] = (Il2CppClass *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  bool IsRelatedHpDecrease; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_int__o *v15; // x21

  if ( (byte_4B1841C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&funcType, targets);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v7, v8);
    sub_1BCA7E0(&Method_BattleActionData__AddHpDecreaseFuncTargets_b__133_0__, v9, v10);
    byte_4B1841C = 1;
  }
  IsRelatedHpDecrease = FuncList__IsRelatedHpDecrease(funcType, 0LL);
  if ( targets )
  {
    if ( IsRelatedHpDecrease )
    {
      v15 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v12, v13, v14);
      System_Action_int____ctor(
        v15,
        (Il2CppObject *)this,
        Method_BattleActionData__AddHpDecreaseFuncTargets_b__133_0__,
        0LL);
      BasicHelper__ForEach_int_(
        (System_Collections_Generic_IEnumerable_T__o *)targets,
        (System_Action_T__o *)v15,
        (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___);
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
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  int64_t v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B18437 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
      *(_QWORD *)&index,
      *(_QWORD *)&uniqueId);
    sub_1BCA7E0(&BattleActionData_MoveToSubMember_TypeInfo, v11, v12);
    byte_4B18437 = 1;
  }
  BattleActionData__InitMoveToSubMemberList(this, *(const MethodInfo **)&index);
  moveToSubMemberList = (System_Collections_Generic_List_object__o *)this->fields.moveToSubMemberList;
  v17 = sub_1BCAA2C(BattleActionData_MoveToSubMember_TypeInfo, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_DWORD *)(v17 + 28) = index;
  *(_DWORD *)(v17 + 32) = uniqueId;
  *(_DWORD *)(v17 + 16) = funcIndex;
  *(_BYTE *)(v17 + 36) = isSucceeded;
  if ( !moveToSubMemberList
    || (items = moveToSubMemberList->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__Add__,
        ++moveToSubMemberList->fields._version,
        !items) )
  {
    sub_1BCAA3C(v18, v19);
  }
  size = moveToSubMemberList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      moveToSubMemberList,
      (Il2CppObject *)v17,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    moveToSubMemberList->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v17;
    sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), v17, v20, v21, v22, v23, v24, v25);
  }
}


void __fastcall BattleActionData__AddSideEffectAfterAction(
        BattleActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x22
  BattlePerformance_o *v23; // x0
  BattleActionData_array *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  BattlePerformance_o **v31; // x19
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Func_object__bool__o *v36; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  BattleActionData___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  System_Func_object__object__o *_9__305_1; // x21
  Il2CppObject *v44; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0

  if ( (byte_4B18465 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___, perf, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleActionData___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActionData___, v8, v9);
    sub_1BCA7E0(&System_Func_BattleActionData__BattleActionData__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_BattleActionData__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleActionData___c__AddSideEffectAfterAction_b__305_1__, v14, v15);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass305_0__AddSideEffectAfterAction_b__0__, v16, v17);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass305_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v20, v21);
    byte_4B18465 = 1;
  }
  v22 = sub_1BCAA2C(BattleActionData___c__DisplayClass305_0_TypeInfo, perf, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_15;
  *(_QWORD *)(v22 + 16) = perf;
  v31 = (BattlePerformance_o **)(v22 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)perf, v25, v26, v27, v28, v29, v30);
  sideEffectList = this->fields.sideEffectList;
  v36 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleActionData__bool__TypeInfo, v33, v34, v35);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v22,
    Method_BattleActionData___c__DisplayClass305_0__AddSideEffectAfterAction_b__0__,
    0LL);
  v37 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)sideEffectList,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActionData___);
  v41 = BattleActionData___c_TypeInfo;
  v42 = v37;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v38);
    v41 = BattleActionData___c_TypeInfo;
  }
  _9__305_1 = (System_Func_object__object__o *)v41->static_fields->__9__305_1;
  if ( !_9__305_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v38);
      v41 = BattleActionData___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__305_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_BattleActionData__BattleActionData__TypeInfo,
                                                   v38,
                                                   v39,
                                                   v40);
    System_Func_object__object____ctor(
      _9__305_1,
      v44,
      Method_BattleActionData___c__AddSideEffectAfterAction_b__305_1__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__305_1 = (struct System_Func_BattleActionData__BattleActionData__o *)_9__305_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__305_1,
      (int64_t)_9__305_1,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v42,
                                                               (System_Func_TSource__TResult__o *)_9__305_1,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleActionData__BattleActionData___);
  v23 = (BattlePerformance_o *)System_Linq_Enumerable__ToArray_object_(
                                 v52,
                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleActionData___);
  if ( !v23 )
    goto LABEL_15;
  v24 = (BattleActionData_array *)v23;
  if ( v23->fields.m_CancellationTokenSource )
  {
    v23 = *v31;
    if ( *v31 )
    {
      BattlePerformance__addActionData(v23, v24, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(v23, v24);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  int64_t v16; // x19
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *transformServantlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4B18439 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
      *(_QWORD *)&index,
      *(_QWORD *)&uniqueId);
    sub_1BCA7E0(&BattleActionData_TransformServant_TypeInfo, v11, v12);
    byte_4B18439 = 1;
  }
  BattleActionData__TryInitTransformServant(this, *(const MethodInfo **)&index);
  v16 = sub_1BCAA2C(BattleActionData_TransformServant_TypeInfo, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(_DWORD *)(v16 + 28) = index;
  *(_DWORD *)(v16 + 32) = uniqueId;
  *(_DWORD *)(v16 + 16) = funcIndex;
  *(_DWORD *)(v16 + 36) = overwriteLimitCount;
  transformServantlist = (System_Collections_Generic_List_object__o *)this->fields.transformServantlist;
  if ( !transformServantlist
    || (items = transformServantlist->fields._items,
        v26 = Method_System_Collections_Generic_List_BattleActionData_TransformServant__Add__,
        ++transformServantlist->fields._version,
        !items) )
  {
    sub_1BCAA3C(transformServantlist, v17);
  }
  size = transformServantlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      transformServantlist,
      (Il2CppObject *)v16,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    transformServantlist->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), v16, v18, v19, v20, v21, v22, v23);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo_34D9170 *v21; // x4
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v26; // x21
  Il2CppObject *key; // x22
  Il2CppObject *value; // x23
  System_Collections_Generic_List_object__o *v29; // x24
  System_Collections_Generic_KeyValuePair_object__object__o v30; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v31; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v32; // 0:x1.16

  if ( (byte_4B1841F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__,
      svtData,
      updateAction);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19, v20);
    byte_4B1841F = 1;
  }
  v30.fields.key = 0LL;
  v30.fields.value = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)intervalArray, 0LL) )
  {
    v31.fields.key = (Il2CppObject *)&v30;
    v31.fields.value = (Il2CppObject *)svtData;
    System_Collections_Generic_KeyValuePair_object__object____ctor(
      v31,
      (Il2CppObject *)updateAction,
      (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____ctor__,
      v21);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_12;
    if ( !System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___ContainsKey(
            IntervalBuffDict_k__BackingField,
            v30,
            (const MethodInfo_31C0D5C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___ContainsKey__) )
    {
      v26 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
      key = v30.fields.key;
      value = v30.fields.value;
      v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                           v22,
                                                           v24,
                                                           v25);
      System_Collections_Generic_List_object____ctor(
        v29,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
      if ( !v26 )
        goto LABEL_12;
      v32.fields.key = key;
      v32.fields.value = value;
      System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___set_Item(
        v26,
        v32,
        (Il2CppObject *)v29,
        (const MethodInfo_31C0B3C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___set_Item__);
    }
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( IntervalBuffDict_k__BackingField )
    {
      IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___get_Item(
                                                                                                    IntervalBuffDict_k__BackingField,
                                                                                                    v30,
                                                                                                    (const MethodInfo_31C0AA4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Item__);
      if ( IntervalBuffDict_k__BackingField )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IntervalBuffDict_k__BackingField,
          (System_Collections_Generic_IEnumerable_T__o *)intervalArray,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(IntervalBuffDict_k__BackingField, v22);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x20
  BattleActionData___c_c *v33; // x0
  System_Func_object__bool__o *_9__123_0; // x21
  Il2CppObject *v35; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_T__o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_object__o *v47; // x21

  if ( (byte_4B18417 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_BuffData__TypeInfo, data, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v8, v9);
    sub_1BCA7E0(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleActionData___c__ExecUnappliedProcess_b__123_0__, v12, v13);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass123_0__ExecUnappliedProcess_b__1__, v14, v15);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass123_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v18, v19);
    byte_4B18417 = 1;
  }
  v20 = sub_1BCAA2C(BattleActionData___c__DisplayClass123_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v21, v22);
  *(_QWORD *)(v20 + 16) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)data, v23, v24, v25, v26, v27, v28);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v33 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v29);
      v33 = BattleActionData___c_TypeInfo;
    }
    _9__123_0 = (System_Func_object__bool__o *)v33->static_fields->__9__123_0;
    if ( !_9__123_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33, v29);
        v33 = BattleActionData___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__123_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_BattleActionData_BuffData__bool__TypeInfo,
                                                   v29,
                                                   v30,
                                                   v31);
      System_Func_object__bool____ctor(
        _9__123_0,
        v35,
        Method_BattleActionData___c__ExecUnappliedProcess_b__123_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__123_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__123_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__123_0,
        (int64_t)_9__123_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
                                                           (System_Func_TSource__bool__o *)_9__123_0,
                                                           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v47 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData_BuffData__TypeInfo, v44, v45, v46);
    System_Action_object____ctor(
      v47,
      (Il2CppObject *)v20,
      Method_BattleActionData___c__DisplayClass123_0__ExecUnappliedProcess_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v43,
      (System_Action_T__o *)v47,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


bool __fastcall BattleActionData__ExistFuncSideEffectTrigger(
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BattleActionData___c_c *v14; // x0
  System_Func_object__bool__o *_9__157_0; // x20
  Il2CppObject *v16; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B18424 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleActionData_BaseData___, method, v2);
    sub_1BCA7E0(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__157_0__, v6, v7);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v8, v9);
    byte_4B18424 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actBaseDataArray, 0LL) )
    return 0;
  v14 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v10);
    v14 = BattleActionData___c_TypeInfo;
  }
  _9__157_0 = (System_Func_object__bool__o *)v14->static_fields->__9__157_0;
  if ( !_9__157_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, v10);
      v14 = BattleActionData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__157_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_BattleActionData_BaseData__bool__TypeInfo,
                                                 v10,
                                                 v11,
                                                 v12);
    System_Func_object__bool____ctor(
      _9__157_0,
      v16,
      Method_BattleActionData___c__ExistFuncSideEffectTrigger_b__157_0__,
      0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__157_0 = (struct System_Func_BattleActionData_BaseData__bool__o *)_9__157_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__157_0,
      (int64_t)_9__157_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  return BasicHelper__Any_object__49274176(
           (System_Object_array *)actBaseDataArray,
           (System_Func_T__bool__o *)_9__157_0,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleActionData_BaseData___);
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
    sub_1BCAA3C(this, 0LL);
  ServantData = BattleData__getServantData(data, afterActionData->fields.actorId, 0LL);
  return !ServantData || !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetBuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4B18454 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&funcIdx, method);
    byte_4B18454 = 1;
  }
  return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_DamageData_array *__fastcall BattleActionData__GetDamageArrayDistinctIndex(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  const MethodInfo *v21; // x2
  BattleActionData_DamageData_array *DamageList; // x0
  Il2CppObject *v23; // x1
  int64_t v24; // x2
  __int64 v25; // x3
  BattleActionData_DamageData_array *v26; // x20
  unsigned __int64 v27; // x24
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Func_object__bool__o *v39; // x23
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0

  if ( (byte_4B1842D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleActionData_DamageData___, *(_QWORD *)&funcIndex, method);
    sub_1BCA7E0(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass173_0__GetDamageArrayDistinctIndex_b__0__, v16, v17);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass173_0_TypeInfo, v18, v19);
    byte_4B1842D = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
  DamageList = BattleActionData__getDamageList(this, funcIndex, v21);
  if ( !DamageList )
    goto LABEL_17;
  v26 = DamageList;
  if ( (int)DamageList->max_length >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      v28 = sub_1BCAA2C(BattleActionData___c__DisplayClass173_0_TypeInfo, v23, v24, v25);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      if ( v27 >= v26->max_length )
        sub_1BCAA44(DamageList, v23);
      if ( !v28 )
        break;
      v35 = (int64_t)v26->m_Items[v27];
      *(_QWORD *)(v28 + 16) = v35;
      sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 16), v35, v29, v30, v31, v32, v33, v34);
      v39 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_BattleActionData_DamageData__bool__TypeInfo,
                                             v36,
                                             v37,
                                             v38);
      System_Func_object__bool____ctor(
        v39,
        (Il2CppObject *)v28,
        Method_BattleActionData___c__DisplayClass173_0__GetDamageArrayDistinctIndex_b__0__,
        0LL);
      DamageList = (BattleActionData_DamageData_array *)BasicHelper__Any_object_(
                                                          (System_Collections_Generic_List_T__o *)v20,
                                                          (System_Func_T__bool__o *)v39,
                                                          (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_BattleActionData_DamageData___);
      if ( ((unsigned __int8)DamageList & 1) == 0 )
      {
        if ( !v20 )
          break;
        v23 = *(Il2CppObject **)(v28 + 16);
        items = v20->fields._items;
        v45 = Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v23,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v23;
          sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v23, v24, v25, v40, v41, v42, v43);
        }
      }
      if ( (__int64)++v27 >= (int)v26->max_length )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCAA3C(DamageList, v23);
  }
LABEL_15:
  if ( !v20 )
    goto LABEL_17;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(
                                                v20,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDamageTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v15; // x1
  System_Int32_array *v16; // x19
  const MethodInfo *v17; // x1
  il2cpp_array_size_t i; // w22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  char *v21; // x9
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18453 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__,
      *(_QWORD *)&funcIdx,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__get_Count__, v12, v13);
    byte_4B18453 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                  this,
                                                                  *(const MethodInfo **)&funcIdx);
  if ( !damagedatalist
    || (v16 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)damagedatalist->fields._size),
        (damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v17)) == 0LL) )
  {
    sub_1BCAA3C(damagedatalist, v15);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    damagedatalist,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v19 )
      break;
    if ( !v23.fields._current )
      sub_1BCAA3C(v19, v20);
    if ( !v16 )
      sub_1BCAA3C(v19, v20);
    if ( i >= v16->max_length )
      sub_1BCAA44(v19, v20);
    v21 = (char *)v16 + 4 * (int)i;
    *((_DWORD *)v21 + 8) = HIDWORD(v23.fields._current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetDebuffTargets(
        BattleActionData_o *this,
        int32_t funcIdx,
        const MethodInfo *method)
{
  if ( (byte_4B18455 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&funcIdx, method);
    byte_4B18455 = 1;
  }
  return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArray(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x23
  BattleActionData___c_c *v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  BattleActionData___c_c **v45; // x21
  const MethodInfo *v46; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_object__o *v51; // x24
  const MethodInfo *v52; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_object__o *v57; // x20
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_List_object__o *v60; // x19
  System_Comparison_T__o *_9__124_2; // x20
  Il2CppObject *v62; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4B18418 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_HealData__TypeInfo, *(_QWORD *)&funcIndex, method);
    sub_1BCA7E0(&System_Action_BattleActionData_BuffData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v8, v9);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v10, v11);
    sub_1BCA7E0(&System_Comparison_BattleActionData_BaseData__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_BattleActionData___c__GetExecOrderArray_b__124_2__, v22, v23);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__0__, v24, v25);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__1__, v26, v27);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass124_0_TypeInfo, v28, v29);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v30, v31);
    byte_4B18418 = 1;
  }
  v32 = sub_1BCAA2C(BattleActionData___c__DisplayClass124_0_TypeInfo, *(_QWORD *)&funcIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  if ( !v32 )
    goto LABEL_13;
  *(_QWORD *)(v32 + 16) = v36;
  v45 = (BattleActionData___c_c **)(v32 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)v36, v39, v40, v41, v42, v43, v44);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v46);
  v51 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData_BuffData__TypeInfo, v48, v49, v50);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)v32,
    Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    BuffList,
    (System_Action_T__o *)v51,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v52);
  v57 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData_HealData__TypeInfo, v54, v55, v56);
  System_Action_object____ctor(
    v57,
    (Il2CppObject *)v32,
    Method_BattleActionData___c__DisplayClass124_0__GetExecOrderArray_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    HealList,
    (System_Action_T__o *)v57,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  v37 = BattleActionData___c_TypeInfo;
  v60 = *(System_Collections_Generic_List_object__o **)(v32 + 16);
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v38);
    v37 = BattleActionData___c_TypeInfo;
  }
  _9__124_2 = (System_Comparison_T__o *)v37->static_fields->__9__124_2;
  if ( !_9__124_2 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37, v38);
      v37 = BattleActionData___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v37->static_fields->__9;
    _9__124_2 = (System_Comparison_T__o *)sub_1BCAA2C(
                                            System_Comparison_BattleActionData_BaseData__TypeInfo,
                                            v38,
                                            v58,
                                            v59);
    System_Comparison_object____ctor(_9__124_2, v62, Method_BattleActionData___c__GetExecOrderArray_b__124_2__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__124_2 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__124_2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__124_2,
      (int64_t)_9__124_2,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !v60
    || (System_Collections_Generic_List_object___Sort_56244000(
          v60,
          _9__124_2,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__),
        (v37 = *v45) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(v37, v38);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)v37,
                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_BaseData_array *__fastcall BattleActionData__GetExecOrderArrayEx(
        BattleActionData_o *this,
        int32_t funcIndex,
        bool isSort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *BuffList; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_T__o *HealList; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  BattleActionData___c_c *v32; // x0
  System_Comparison_T__o *_9__125_0; // x20
  Il2CppObject *v34; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B18419 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_BattleActionData_BaseData__TypeInfo, *(_QWORD *)&funcIndex, isSort);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_BattleActionData___c__GetExecOrderArrayEx_b__125_0__, v17, v18);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v19, v20);
    byte_4B18419 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleActionData_BaseData__TypeInfo,
                                                       *(_QWORD *)&funcIndex,
                                                       isSort,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_BaseData___ctor__);
  BuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getBuffList(this, funcIndex, v22);
  if ( !v21 )
    sub_1BCAA3C(BuffList, v24);
  System_Collections_Generic_List_object___AddRange(
    v21,
    BuffList,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  HealList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getHealList(this, funcIndex, v25);
  System_Collections_Generic_List_object___AddRange(
    v21,
    HealList,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, funcIndex, v27);
  System_Collections_Generic_List_object___AddRange(
    v21,
    DamageList,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__AddRange__);
  if ( isSort )
  {
    v32 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v29);
      v32 = BattleActionData___c_TypeInfo;
    }
    _9__125_0 = (System_Comparison_T__o *)v32->static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32, v29);
        v32 = BattleActionData___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__125_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                              System_Comparison_BattleActionData_BaseData__TypeInfo,
                                              v29,
                                              v30,
                                              v31);
      System_Comparison_object____ctor(_9__125_0, v34, Method_BattleActionData___c__GetExecOrderArrayEx_b__125_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__125_0 = (struct System_Comparison_BattleActionData_BaseData__o *)_9__125_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__125_0,
        (int64_t)_9__125_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v21,
      _9__125_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__Sort__);
  }
  return (BattleActionData_BaseData_array *)System_Collections_Generic_List_object___ToArray(
                                              v21,
                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_BaseData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_array *__fastcall BattleActionData__GetFuncSideEffectTargetServants(
        BattleActionData_o *this,
        BattleData_o *bData,
        bool isMainOnly,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  long double inited; // q0
  _QWORD *v33; // x19
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  System_Int32_array *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_int__bool__o *v42; // x23
  __int64 targetId; // x0
  System_Func_T__TResult__o *v44; // x21
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *v46; // x0

  if ( (byte_4B18410 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleServantData___, bData, isMainOnly);
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, v9, v10);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattleServantData___, v11, v12);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, v13, v14);
    sub_1BCA7E0(&Method_BattleActionData__GetFuncSideEffectTargetServants_b__107_0__, v15, v16);
    sub_1BCA7E0(&Method_BattleData_getServantData__, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v21, v22);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_int__BattleServantData__TypeInfo, v25, v26);
    sub_1BCA7E0(&int___TypeInfo, v27, v28);
    byte_4B18410 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetIds, 0LL) )
  {
    v33 = Method_System_Array_Empty_BattleServantData___;
    v34 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v34 )
    {
      sub_1C1C718(Method_System_Array_Empty_BattleServantData___, v29);
      v34 = v33[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v35 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v35, v29);
    v36 = *(_QWORD *)(v33[7] + 16LL);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C1C6BC(inited);
    return **(BattleServantData_array ***)(v36 + 184);
  }
  else
  {
    if ( isMainOnly )
    {
      v38 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
      v42 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v39, v40, v41);
      System_Func_int__bool____ctor(
        v42,
        (Il2CppObject *)this,
        Method_BattleActionData__GetFuncSideEffectTargetServants_b__107_0__,
        0LL);
      if ( BasicHelper__Any_int__49273364(
             targetIds,
             (System_Func_T__bool__o *)v42,
             (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
      {
        targetId = (unsigned int)this->fields.targetId;
      }
      else
      {
        targetId = BasicHelper__IndexValue_int_(
                     targetIds,
                     0,
                     -1,
                     (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
      }
      if ( !v38 )
        sub_1BCAA3C(targetId, v29);
      if ( !v38->max_length )
        sub_1BCAA44(targetId, v29);
      targetIds = v38;
      v38->m_Items[1] = targetId;
    }
    v44 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__BattleServantData__TypeInfo, v29, v30, v31);
    System_Func_int__object____ctor(v44, (Il2CppObject *)bData, Method_BattleData_getServantData__, 0LL);
    v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                           (System_Func_TSource__TResult__o *)v44,
                                                           (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v46 = BasicHelper__ExcludeNull_object_(
            v45,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetFuncTargetIds(
        BattleActionData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_HashSet_int__o *v48; // x22
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  const MethodInfo *v57; // x2
  System_Collections_Generic_IEnumerable_T__o *DamageList; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Action_object__o *v62; // x23
  const MethodInfo *v63; // x2
  BattleActionData_BuffData_array *BuffList; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  BattleActionData___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x22
  System_Func_object__bool__o *_9__284_1; // x23
  Il2CppObject *v71; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_T__o *v79; // x22
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Action_object__o *v83; // x23
  const MethodInfo *v84; // x2
  BattleActionData_HealData_array *HealList; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  BattleActionData___c_c *v89; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x19
  System_Func_object__bool__o *_9__284_3; // x20
  Il2CppObject *v92; // x22
  struct BattleActionData___c_StaticFields *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  System_Collections_Generic_IEnumerable_T__o *v100; // x19
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  System_Action_object__o *v104; // x20

  if ( (byte_4B18459 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_DamageData__TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&System_Action_BattleActionData_HealData__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Action_BattleActionData_BuffData__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v10, v11);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_DamageData___, v12, v13);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_HealData___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___, v20, v21);
    sub_1BCA7E0(&System_Func_BattleActionData_HealData__bool__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_BattleActionData___c__GetFuncTargetIds_b__284_1__, v30, v31);
    sub_1BCA7E0(&Method_BattleActionData___c__GetFuncTargetIds_b__284_3__, v32, v33);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__0__, v34, v35);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__2__, v36, v37);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__4__, v38, v39);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass284_0_TypeInfo, v40, v41);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v42, v43);
    byte_4B18459 = 1;
  }
  v44 = sub_1BCAA2C(BattleActionData___c__DisplayClass284_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  v48 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v45,
                                                       v46,
                                                       v47);
  System_Collections_Generic_HashSet_int____ctor(
    v48,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v44 )
    sub_1BCAA3C(v49, v50);
  *(_QWORD *)(v44 + 16) = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 16), (int64_t)v48, v51, v52, v53, v54, v55, v56);
  DamageList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getDamageList(this, index, v57);
  v62 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData_DamageData__TypeInfo, v59, v60, v61);
  System_Action_object____ctor(
    v62,
    (Il2CppObject *)v44,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    DamageList,
    (System_Action_T__o *)v62,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_DamageData___);
  BuffList = BattleActionData__getBuffList(this, index, v63);
  v68 = BattleActionData___c_TypeInfo;
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v65);
    v68 = BattleActionData___c_TypeInfo;
  }
  _9__284_1 = (System_Func_object__bool__o *)v68->static_fields->__9__284_1;
  if ( !_9__284_1 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68, v65);
      v68 = BattleActionData___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__284_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_BattleActionData_BuffData__bool__TypeInfo,
                                                 v65,
                                                 v66,
                                                 v67);
    System_Func_object__bool____ctor(_9__284_1, v71, Method_BattleActionData___c__GetFuncTargetIds_b__284_1__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__284_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__284_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__284_1,
      (int64_t)_9__284_1,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  v79 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v69,
                                                         (System_Func_TSource__bool__o *)_9__284_1,
                                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
  v83 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData_BuffData__TypeInfo, v80, v81, v82);
  System_Action_object____ctor(
    v83,
    (Il2CppObject *)v44,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__2__,
    0LL);
  BasicHelper__ForEach_object_(
    v79,
    (System_Action_T__o *)v83,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  HealList = BattleActionData__getHealList(this, index, v84);
  v89 = BattleActionData___c_TypeInfo;
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v86);
    v89 = BattleActionData___c_TypeInfo;
  }
  _9__284_3 = (System_Func_object__bool__o *)v89->static_fields->__9__284_3;
  if ( !_9__284_3 )
  {
    if ( !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89, v86);
      v89 = BattleActionData___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v89->static_fields->__9;
    _9__284_3 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_BattleActionData_HealData__bool__TypeInfo,
                                                 v86,
                                                 v87,
                                                 v88);
    System_Func_object__bool____ctor(_9__284_3, v92, Method_BattleActionData___c__GetFuncTargetIds_b__284_3__, 0LL);
    v93 = BattleActionData___c_TypeInfo->static_fields;
    v93->__9__284_3 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__284_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v93->__9__284_3, (int64_t)_9__284_3, v94, v95, v96, v97, v98, v99);
  }
  v100 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          v90,
                                                          (System_Func_TSource__bool__o *)_9__284_3,
                                                          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
  v104 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData_HealData__TypeInfo, v101, v102, v103);
  System_Action_object____ctor(
    v104,
    (Il2CppObject *)v44,
    Method_BattleActionData___c__DisplayClass284_0__GetFuncTargetIds_b__4__,
    0LL);
  BasicHelper__ForEach_object_(
    v100,
    (System_Action_T__o *)v104,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_HealData___);
  return System_Linq_Enumerable__ToArray_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v44 + 16),
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleActionData__GetFunctionIndexArrayNearByCuriousFunc(
        BattleActionData_o *this,
        int32_t effectTiming,
        System_Int32_array *resultOnGetFailed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x22
  BattleSkillInfoData_o *skillInfo; // x0
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  System_Nullable_int__o FuncIndexForSplitFuncSequence; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ListFunctionIndex; // x21
  System_Func_int__bool__o *v30; // x0
  __int64 *v31; // x8
  System_Func_TSource__bool__o *v33; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4B1845C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&effectTiming, resultOnGetFailed);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v7, v8);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v11, v12);
    sub_1BCA7E0(
      &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__,
      v17,
      v18);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass287_0_TypeInfo, v19, v20);
    byte_4B1845C = 1;
  }
  v21 = sub_1BCAA2C(
          BattleActionData___c__DisplayClass287_0_TypeInfo,
          *(_QWORD *)&effectTiming,
          resultOnGetFailed,
          method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    return resultOnGetFailed;
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL);
  if ( !SelfSkillLvEntity )
    return resultOnGetFailed;
  FuncIndexForSplitFuncSequence = SkillLvEntity__GetFuncIndexForSplitFuncSequence(SelfSkillLvEntity, 0LL);
  if ( !v21 )
    sub_1BCAA3C(FuncIndexForSplitFuncSequence, v25);
  *(System_Nullable_int__o *)(v21 + 16) = FuncIndexForSplitFuncSequence;
  if ( !FuncIndexForSplitFuncSequence.fields.hasValue )
    return resultOnGetFailed;
  ListFunctionIndex = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getListFunctionIndex(
                                                                             this,
                                                                             v25);
  if ( effectTiming == 2 )
  {
    v30 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v26, v27, v28);
    v31 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__2__;
    goto LABEL_14;
  }
  if ( effectTiming == 1 )
  {
    v30 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v26, v27, v28);
    v31 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__1__;
    goto LABEL_14;
  }
  if ( effectTiming )
    return resultOnGetFailed;
  v30 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v26, v27, v28);
  v31 = &Method_BattleActionData___c__DisplayClass287_0__GetFunctionIndexArrayNearByCuriousFunc_b__0__;
LABEL_14:
  v33 = (System_Func_TSource__bool__o *)v30;
  System_Func_int__bool____ctor(v30, (Il2CppObject *)v21, *v31, 0LL);
  v34 = System_Linq_Enumerable__Where_int_(
          ListFunctionIndex,
          v33,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget(
        BattleActionData_o *this,
        bool isAtkFirst,
        bool isAtkLast,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_Dictionary_int__int__o *v25; // x24
  System_Collections_Generic_Dictionary_int__int__o *v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_Dictionary_int__int__o **v34; // x22
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_object__o *v40; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4B1845E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData__TypeInfo, isAtkFirst, isAtkLast);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData__ForEach__, v15, v16);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass292_0__GetMaxSideEffectCountByTarget_b__0__, v17, v18);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass292_0_TypeInfo, v19, v20);
    byte_4B1845E = 1;
  }
  v21 = sub_1BCAA2C(BattleActionData___c__DisplayClass292_0_TypeInfo, isAtkFirst, isAtkLast, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v22,
                                                               v23,
                                                               v24);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v25,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v21 )
    goto LABEL_13;
  *(_QWORD *)(v21 + 16) = v25;
  v34 = (System_Collections_Generic_Dictionary_int__int__o **)(v21 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)v25, v28, v29, v30, v31, v32, v33);
  if ( isAtkFirst || isAtkLast )
  {
    BattleActionData__SetSideEffectCountByTarget(
      this,
      (System_Collections_Generic_Dictionary_int__int__o **)(v21 + 16),
      v35);
    sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList;
    v40 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData__TypeInfo, v37, v38, v39);
    System_Action_object____ctor(
      v40,
      (Il2CppObject *)v21,
      Method_BattleActionData___c__DisplayClass292_0__GetMaxSideEffectCountByTarget_b__0__,
      0LL);
    if ( !sideEffectList )
      goto LABEL_13;
    System_Collections_Generic_List_object___ForEach(
      sideEffectList,
      (System_Action_T__o *)v40,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleActionData__ForEach__);
  }
  v26 = *v34;
  if ( !*v34 )
LABEL_13:
    sub_1BCAA3C(v26, v27);
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v26,
         (const MethodInfo_31FCF28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v26 = *v34;
    if ( *v34 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v26,
                 (const MethodInfo_31FD088 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
    goto LABEL_13;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData__GetMaxSideEffectCountByTarget_43114932(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_Dictionary_int__int__o *v24; // x23
  System_Collections_Generic_Dictionary_int__int__o *v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_Dictionary_int__int__o **v33; // x21
  const MethodInfo *v34; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_object__o *v39; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0

  if ( (byte_4B18460 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData__TypeInfo, *(_QWORD *)&targetType, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass294_0__GetMaxSideEffectCountByTarget_b__0__, v16, v17);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass294_0_TypeInfo, v18, v19);
    byte_4B18460 = 1;
  }
  v20 = sub_1BCAA2C(BattleActionData___c__DisplayClass294_0_TypeInfo, *(_QWORD *)&targetType, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v21,
                                                               v22,
                                                               v23);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v24,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v20 )
    goto LABEL_9;
  *(_QWORD *)(v20 + 16) = v24;
  v33 = (System_Collections_Generic_Dictionary_int__int__o **)(v20 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)v24, v27, v28, v29, v30, v31, v32);
  SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                    this,
                                                                    targetType,
                                                                    v34);
  v39 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData__TypeInfo, v36, v37, v38);
  System_Action_object____ctor(
    v39,
    (Il2CppObject *)v20,
    Method_BattleActionData___c__DisplayClass294_0__GetMaxSideEffectCountByTarget_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    SideEffectList,
    (System_Action_T__o *)v39,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData___);
  v25 = *(System_Collections_Generic_Dictionary_int__int__o **)(v20 + 16);
  if ( !v25 )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__int___get_Count(
         v25,
         (const MethodInfo_31FCF28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) >= 1 )
  {
    v25 = *v33;
    if ( *v33 )
    {
      Values = System_Collections_Generic_Dictionary_int__int___get_Values(
                 v25,
                 (const MethodInfo_31FD088 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
      return System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
    }
LABEL_9:
    sub_1BCAA3C(v25, v26);
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

  if ( (byte_4B1845D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int___, *(_QWORD *)&effectIndex, *(_QWORD *)&resultOnGetFailed);
    byte_4B1845D = 1;
  }
  OptionalBattleEffectIdList = (System_Collections_Generic_List_T__o *)BattleActionData__GetOptionalBattleEffectIdList(
                                                                         this,
                                                                         0LL,
                                                                         *(const MethodInfo **)&resultOnGetFailed);
  return BasicHelper__IndexValue_int__49288952(
           OptionalBattleEffectIdList,
           effectIndex,
           resultOnGetFailed,
           (const MethodInfo_2F016F8 *)Method_BasicHelper_IndexValue_int___);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  PartyOrganizationUtility_o *p_moveToSubMemberList; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18438 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo, v5, v6);
    byte_4B18438 = 1;
  }
  if ( !this->fields.moveToSubMemberList )
  {
    p_moveToSubMemberList = (PartyOrganizationUtility_o *)&this->fields.moveToSubMemberList;
    v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_BattleActionData_MoveToSubMember__TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember___ctor__);
    p_moveToSubMemberList->klass = (PartyOrganizationUtility_c *)v8;
    sub_1BCA784(p_moveToSubMemberList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v3; // x3
  __int64 v6; // x21
  const MethodInfo *v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B18464 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&type, method);
    byte_4B18464 = 1;
  }
  v6 = sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&type, method, v3);
  BattleActionData___ctor((BattleActionData_o *)v6, v7);
  if ( !v6 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)&this->fields.actorId;
  BattleActionData__addSideEffectActionData(this, (BattleActionData_o *)v6, type, v10);
  return (BattleActionData_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleActionData__MakeSideEffectActionData_43116680(
        BattleActionData_o *this,
        int32_t targetType,
        int32_t overwriteTargetId,
        const MethodInfo *method)
{
  BattleActionData_o *result; // x0
  __int64 v6; // x1

  result = BattleActionData__MakeSideEffectActionData(this, targetType, *(const MethodInfo **)&overwriteTargetId);
  if ( !result )
    sub_1BCAA3C(0LL, v6);
  result->fields.targetId = overwriteTargetId;
  return result;
}


void __fastcall BattleActionData__PreActionProcess(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  struct System_Collections_Generic_List_BattleActionData_BuffData__o *buffdatalist; // x21
  BattleActionData___c_c *v35; // x0
  System_Func_object__bool__o *_9__122_0; // x20
  Il2CppObject *v37; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_object__o *v50; // x21

  if ( (byte_4B18416 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_BuffData__TypeInfo, data, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_BuffData___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___, v10, v11);
    sub_1BCA7E0(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleActionData___c__PreActionProcess_b__122_0__, v14, v15);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass122_0__PreActionProcess_b__1__, v16, v17);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass122_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v20, v21);
    byte_4B18416 = 1;
  }
  v22 = sub_1BCAA2C(BattleActionData___c__DisplayClass122_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_QWORD *)(v22 + 16) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)data, v25, v26, v27, v28, v29, v30);
  buffdatalist = this->fields.buffdatalist;
  if ( buffdatalist && !this->fields.isExecPreActionProc )
  {
    this->fields.isExecPreActionProc = 1;
    v35 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v31);
      v35 = BattleActionData___c_TypeInfo;
    }
    _9__122_0 = (System_Func_object__bool__o *)v35->static_fields->__9__122_0;
    if ( !_9__122_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35, v31);
        v35 = BattleActionData___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__122_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_BattleActionData_BuffData__bool__TypeInfo,
                                                   v31,
                                                   v32,
                                                   v33);
      System_Func_object__bool____ctor(_9__122_0, v37, Method_BattleActionData___c__PreActionProcess_b__122_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__122_0 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__122_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__122_0,
        (int64_t)_9__122_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)buffdatalist,
            (System_Func_TSource__bool__o *)_9__122_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    v46 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_object_(
                                                           v45,
                                                           (const MethodInfo_2F3C430 *)Method_System_Linq_Enumerable_Reverse_BattleActionData_BuffData___);
    v50 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData_BuffData__TypeInfo, v47, v48, v49);
    System_Action_object____ctor(
      v50,
      (Il2CppObject *)v22,
      Method_BattleActionData___c__DisplayClass122_0__PreActionProcess_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v46,
      (System_Action_T__o *)v50,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_BuffData___);
  }
}


void __fastcall BattleActionData__ResetAllCheckDead(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *buffdatalist; // x19
  BattleActionData___c_c *v12; // x0
  System_Action_object__o *_9__181_0; // x20
  Il2CppObject *v14; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B18430 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_BuffData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_BattleActionData___c__ResetAllCheckDead_b__181_0__, v7, v8);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v9, v10);
    byte_4B18430 = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v12 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v12 = BattleActionData___c_TypeInfo;
    }
    _9__181_0 = (System_Action_object__o *)v12->static_fields->__9__181_0;
    if ( !_9__181_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12, method);
        v12 = BattleActionData___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__181_0 = (System_Action_object__o *)sub_1BCAA2C(
                                               System_Action_BattleActionData_BuffData__TypeInfo,
                                               method,
                                               v2,
                                               v3);
      System_Action_object____ctor(_9__181_0, v14, Method_BattleActionData___c__ResetAllCheckDead_b__181_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__181_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__181_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__181_0,
        (int64_t)_9__181_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__181_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
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
  __int64 v12; // x2
  int64_t v13; // x2
  __int64 v14; // x3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x23
  const MethodInfo *v20; // x3
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleActionData_AfterChangeField_o *ChangeField_k__BackingField; // x0

  v10 = this;
  if ( (byte_4B18444 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_AfterChangeField_TypeInfo, fieldChange, baseVals);
    this = (BattleActionData_o *)sub_1BCA7E0(&BattleActionData_AfterChangeTakeOverField_TypeInfo, v11, v12);
    byte_4B18444 = 1;
  }
  if ( !baseVals )
    goto LABEL_13;
  this = (BattleActionData_o *)DataVals__isParam(baseVals, 106, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = sub_1BCAA2C(BattleActionData_AfterChangeTakeOverField_TypeInfo, fieldChange, v13, v14);
    BattleActionData_AfterChangeTakeOverField___ctor(
      (BattleActionData_AfterChangeTakeOverField_o *)v19,
      fieldChange,
      fieldEnvData,
      v20);
    goto LABEL_9;
  }
  if ( !fieldChange )
LABEL_13:
    sub_1BCAA3C(this, fieldChange);
  if ( fieldChange->fields.bgId < 1 )
    goto LABEL_10;
  v19 = sub_1BCAA2C(BattleActionData_AfterChangeField_TypeInfo, fieldChange, v13, v14);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  *(_QWORD *)(v19 + 32) = fieldChange;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)fieldChange, v27, v28, v29, v30, v31, v32);
LABEL_9:
  v10->fields._ChangeField_k__BackingField = (struct BattleActionData_AfterChangeField_o *)v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields._ChangeField_k__BackingField,
    v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
LABEL_10:
  ChangeField_k__BackingField = v10->fields._ChangeField_k__BackingField;
  if ( ChangeField_k__BackingField )
  {
    ChangeField_k__BackingField->fields.addBgmArg = addBgmArg;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&ChangeField_k__BackingField->fields.addBgmArg,
      (int64_t)addBgmArg,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void __fastcall BattleActionData__SetFirstAtkMainTargetId(
        BattleActionData_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_int__bool__o *v12; // x21
  int32_t targetId; // w0

  if ( (byte_4B1840F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, targetIds, method);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, v6, v7);
    sub_1BCA7E0(&Method_BattleActionData__SetFirstAtkMainTargetId_b__106_0__, v8, v9);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v10, v11);
    byte_4B1840F = 1;
  }
  if ( this->fields._FirstAtkMainTargetId_k__BackingField == -1 )
  {
    v12 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, targetIds, method, v3);
    System_Func_int__bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleActionData__SetFirstAtkMainTargetId_b__106_0__,
      0LL);
    if ( BasicHelper__Any_int__49273364(
           targetIds,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
    {
      targetId = this->fields.targetId;
    }
    else
    {
      targetId = BasicHelper__IndexValue_int_(
                   targetIds,
                   0,
                   -1,
                   (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
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
    sub_1BCAA3C(this, data);
  BattleActionData_DamageData__SetEffectFlipProc(data, vals->fields.funcEnt, (const MethodInfo *)vals);
  BattleActionData__setDamageData(this, data, vals, 0, 0, v7);
}


void __fastcall BattleActionData__SetFuncSideEffectTrigger(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x19
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ExecOrderArray; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  BattleActionData___c_c *v31; // x0
  System_Func_object__int__o *_9__126_0; // x21
  Il2CppObject *v33; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Func_object__bool__o *v45; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  BattleActionData___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_T__o *v51; // x19
  System_Action_object__o *_9__126_2; // x20
  Il2CppObject *v53; // x21
  struct BattleActionData___c_StaticFields *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B1841A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_BaseData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___, v9, v10);
    sub_1BCA7E0(&System_Func_BattleActionData_BaseData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_BattleActionData_BaseData__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_0__, v15, v16);
    sub_1BCA7E0(&Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_2__, v17, v18);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass126_0__SetFuncSideEffectTrigger_b__1__, v19, v20);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass126_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v23, v24);
    byte_4B1841A = 1;
  }
  v25 = sub_1BCAA2C(BattleActionData___c__DisplayClass126_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  ExecOrderArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__GetExecOrderArrayEx(
                                                                          this,
                                                                          -1,
                                                                          0,
                                                                          v26);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExecOrderArray, 0LL) )
  {
    v31 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v28);
      v31 = BattleActionData___c_TypeInfo;
    }
    _9__126_0 = (System_Func_object__int__o *)v31->static_fields->__9__126_0;
    if ( !_9__126_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31, v28);
        v31 = BattleActionData___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__126_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_BattleActionData_BaseData__int__TypeInfo,
                                                  v28,
                                                  v29,
                                                  v30);
      System_Func_object__int____ctor(
        _9__126_0,
        v33,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__126_0 = (struct System_Func_BattleActionData_BaseData__int__o *)_9__126_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__126_0,
        (int64_t)_9__126_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    v41 = System_Linq_Enumerable__Max_object_(
            ExecOrderArray,
            (System_Func_TSource__int__o *)_9__126_0,
            (const MethodInfo_2F3A048 *)Method_System_Linq_Enumerable_Max_BattleActionData_BaseData___);
    if ( !v25 )
      sub_1BCAA3C(v41, v42);
    *(_DWORD *)(v25 + 16) = v41;
    v45 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_BattleActionData_BaseData__bool__TypeInfo,
                                           v42,
                                           v43,
                                           v44);
    System_Func_object__bool____ctor(
      v45,
      (Il2CppObject *)v25,
      Method_BattleActionData___c__DisplayClass126_0__SetFuncSideEffectTrigger_b__1__,
      0LL);
    v46 = System_Linq_Enumerable__Where_object_(
            ExecOrderArray,
            (System_Func_TSource__bool__o *)v45,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActionData_BaseData___);
    v50 = BattleActionData___c_TypeInfo;
    v51 = (System_Collections_Generic_IEnumerable_T__o *)v46;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v47);
      v50 = BattleActionData___c_TypeInfo;
    }
    _9__126_2 = (System_Action_object__o *)v50->static_fields->__9__126_2;
    if ( !_9__126_2 )
    {
      if ( !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50, v47);
        v50 = BattleActionData___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v50->static_fields->__9;
      _9__126_2 = (System_Action_object__o *)sub_1BCAA2C(
                                               System_Action_BattleActionData_BaseData__TypeInfo,
                                               v47,
                                               v48,
                                               v49);
      System_Action_object____ctor(
        _9__126_2,
        v53,
        Method_BattleActionData___c__SetFuncSideEffectTrigger_b__126_2__,
        0LL);
      v54 = BattleActionData___c_TypeInfo->static_fields;
      v54->__9__126_2 = (struct System_Action_BattleActionData_BaseData__o *)_9__126_2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v54->__9__126_2, (int64_t)_9__126_2, v55, v56, v57, v58, v59, v60);
    }
    BasicHelper__ForEach_object_(
      v51,
      (System_Action_T__o *)_9__126_2,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
  }
}


void __fastcall BattleActionData__SetFuncTargetAllDead(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  _BOOL8 isEnemyID; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  struct System_Collections_Generic_HashSet_int__o *HpDecreaseFuncTargetHash_k__BackingField; // x22
  System_Func_T__TResult__o *v34; // x23
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_IEnumerable_T__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Func_object__bool__o *v40; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Object_array *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  BattleActionData___c_c *v46; // x0
  System_Func_object__bool__o *_9__138_1; // x21
  Il2CppObject *v48; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B1841D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleServantData____76840008, data, method);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattleServantData___, v6, v7);
    sub_1BCA7E0(&Method_BattleData_getServantData__, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v14, v15);
    sub_1BCA7E0(&System_Func_int__BattleServantData__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_BattleActionData___c__SetFuncTargetAllDead_b__138_1__, v20, v21);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass138_0__SetFuncTargetAllDead_b__0__, v22, v23);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass138_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v26, v27);
    byte_4B1841D = 1;
  }
  v28 = sub_1BCAA2C(BattleActionData___c__DisplayClass138_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !data || (isEnemyID = BattleData__isEnemyID(data, this->fields.actorId, 0LL), !v28) )
    sub_1BCAA3C(isEnemyID, v30);
  *(_BYTE *)(v28 + 16) = isEnemyID;
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  v34 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__BattleServantData__TypeInfo, v30, v31, v32);
  System_Func_int__object____ctor(v34, (Il2CppObject *)data, Method_BattleData_getServantData__, 0LL);
  v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)HpDecreaseFuncTargetHash_k__BackingField,
                                                         (System_Func_TSource__TResult__o *)v34,
                                                         (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v36 = BasicHelper__ExcludeNull_object_(
          v35,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v40 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v37, v38, v39);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)v28,
    Method_BattleActionData___c__DisplayClass138_0__SetFuncTargetAllDead_b__0__,
    0LL);
  v41 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v42 = System_Linq_Enumerable__ToArray_object_(
          v41,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v42, 0LL) )
  {
    v46 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v43);
      v46 = BattleActionData___c_TypeInfo;
    }
    _9__138_1 = (System_Func_object__bool__o *)v46->static_fields->__9__138_1;
    if ( !_9__138_1 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46, v43);
        v46 = BattleActionData___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v46->static_fields->__9;
      _9__138_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_BattleServantData__bool__TypeInfo,
                                                   v43,
                                                   v44,
                                                   v45);
      System_Func_object__bool____ctor(
        _9__138_1,
        v48,
        Method_BattleActionData___c__SetFuncTargetAllDead_b__138_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__138_1 = (struct System_Func_BattleServantData__bool__o *)_9__138_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__138_1,
        (int64_t)_9__138_1,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    this->fields._IsFuncTargetAllDead_k__BackingField = !BasicHelper__Any_object__49274176(
                                                           v42,
                                                           (System_Func_T__bool__o *)_9__138_1,
                                                           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleServantData____76840008);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattleActionData_GimmickData_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B18442 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_GimmickData_TypeInfo, indexArray, startArray);
    byte_4B18442 = 1;
  }
  v11 = (Il2CppObject *)sub_1BCAA2C(BattleActionData_GimmickData_TypeInfo, indexArray, startArray, resultArray);
  System_Object___ctor(v11, 0LL);
  this->fields.gimmickData = (struct BattleActionData_GimmickData_o *)v11;
  p_gimmickData = &this->fields.gimmickData;
  sub_1BCA784((PartyOrganizationUtility_o *)p_gimmickData, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  v26 = *p_gimmickData;
  if ( !*p_gimmickData )
    goto LABEL_8;
  v26->fields.indexArray = indexArray;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.indexArray, (int64_t)indexArray, v20, v21, v22, v23, v24, v25);
  v26 = *p_gimmickData;
  if ( !*p_gimmickData
    || (v26->fields.startVoiceIdArray = startArray,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v26->fields.startVoiceIdArray,
          (int64_t)startArray,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        (v26 = *p_gimmickData) == 0LL)
    || (v26->fields.resultVoiceIdArray = resultArray,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v26->fields.resultVoiceIdArray,
          (int64_t)resultArray,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (v26 = *p_gimmickData) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(v26, v19);
  }
  v26->fields.animationTypes = types;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.animationTypes, (int64_t)types, v39, v40, v41, v42, v43, v44);
}


void __fastcall BattleActionData__SetPopupOnce(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleActionData_BaseData_array *ExecOrderArray; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  BattleActionData___c_c *v16; // x0
  System_Action_object__o *_9__127_0; // x20
  Il2CppObject *v18; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1841B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_BaseData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData_BaseData___, v5, v6);
    sub_1BCA7E0(&Method_BattleActionData___c__SetPopupOnce_b__127_0__, v7, v8);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v9, v10);
    byte_4B1841B = 1;
  }
  ExecOrderArray = BattleActionData__GetExecOrderArrayEx(this, -1, 0, v3);
  if ( ExecOrderArray )
  {
    v15 = (System_Collections_Generic_IEnumerable_T__o *)ExecOrderArray;
    v16 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v12);
      v16 = BattleActionData___c_TypeInfo;
    }
    _9__127_0 = (System_Action_object__o *)v16->static_fields->__9__127_0;
    if ( !_9__127_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, v12);
        v16 = BattleActionData___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__127_0 = (System_Action_object__o *)sub_1BCAA2C(
                                               System_Action_BattleActionData_BaseData__TypeInfo,
                                               v12,
                                               v13,
                                               v14);
      System_Action_object____ctor(_9__127_0, v18, Method_BattleActionData___c__SetPopupOnce_b__127_0__, 0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__127_0 = (struct System_Action_BattleActionData_BaseData__o *)_9__127_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__127_0,
        (int64_t)_9__127_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    BasicHelper__ForEach_object_(
      v15,
      (System_Action_T__o *)_9__127_0,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData_BaseData___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ShiftGauge_k__BackingField = shiftGauge;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ShiftGauge_k__BackingField,
    (int64_t)shiftGauge,
    (int64_t)method,
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x21
  System_Collections_Generic_List_int__o *v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_int__o *v38; // x22
  System_Collections_Generic_List_int__o **v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x22
  __int64 v50; // x1
  int32_t current; // w20
  __int64 v52; // x1
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+0h] [xbp-80h] BYREF
  int32_t value; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v55; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1845F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, dicTarget, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass293_0__SetSideEffectCountByTarget_b__0__, v22, v23);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass293_0_TypeInfo, v24, v25);
    byte_4B1845F = 1;
  }
  memset(&v55, 0, sizeof(v55));
  value = 0;
  v26 = sub_1BCAA2C(BattleActionData___c__DisplayClass293_0_TypeInfo, dicTarget, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_14;
  *(_QWORD *)(v26 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)this, v29, v30, v31, v32, v33, v34);
  v38 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v35,
                                                    v36,
                                                    v37);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v26 + 24) = v38;
  v39 = (System_Collections_Generic_List_int__o **)(v26 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)v38, v40, v41, v42, v43, v44, v45);
  v49 = sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(
    (System_Action_o *)v49,
    (Il2CppObject *)v26,
    Method_BattleActionData___c__DisplayClass293_0__SetSideEffectCountByTarget_b__0__,
    0LL);
  if ( !v49
    || ((*(void (__fastcall **)(_QWORD, _QWORD))(v49 + 24))(*(_QWORD *)(v49 + 64), *(_QWORD *)(v49 + 40)),
        (v27 = *v39) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(v27, v28);
  }
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v27,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v55 = v53;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v55,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !*dicTarget )
      sub_1BCAA3C(0LL, v50);
    current = v55.fields._current;
    System_Collections_Generic_Dictionary_int__int___TryGetValue(
      *dicTarget,
      v55.fields._current,
      &value,
      (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    if ( !*dicTarget )
      sub_1BCAA3C(0LL, v52);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      *dicTarget,
      current,
      value + 1,
      (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v55,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v3; // x3
  int64_t v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B18445 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo, changeBgm, method);
    byte_4B18445 = 1;
  }
  v6 = sub_1BCAA2C(BattleActionData_TreasureDvcAfterChangeBgm_TypeInfo, changeBgm, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 32) = changeBgm;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)changeBgm, v7, v8, v9, v10, v11, v12);
  this->fields._TdAfterChangeBgm_k__BackingField = (struct BattleActionData_TreasureDvcAfterChangeBgm_o *)v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TdAfterChangeBgm_k__BackingField,
    v6,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__SetTypeEnemyCutIn(
        BattleActionData_o *this,
        int32_t effectType,
        const MethodInfo *method)
{
  BattleActionData_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4B1844E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&effectType, method);
    byte_4B1844E = 1;
  }
  this->fields.state = 4;
  if ( effectType == 2 )
  {
    v5 = BattleActionData_TypeInfo;
    if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, *(_QWORD *)&effectType);
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
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, *(_QWORD *)&effectType);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = cond;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._WaitCond_k__BackingField,
    (int64_t)cond,
    (int64_t)method,
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
  int32_t MaxSideEffectCountByTarget_43114932; // w0

  *interval = 0.0;
  MaxSideEffectCountByTarget_43114932 = BattleActionData__GetMaxSideEffectCountByTarget_43114932(
                                          this,
                                          4,
                                          (const MethodInfo *)existTriggerFunc);
  if ( MaxSideEffectCountByTarget_43114932 >= 1 )
    *interval = totalTime / (float)(MaxSideEffectCountByTarget_43114932 + existTriggerFunc);
  return MaxSideEffectCountByTarget_43114932 > 0;
}


void __fastcall BattleActionData__TryInitTransformServant(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  PartyOrganizationUtility_o *p_transformServantlist; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1843A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo, v5, v6);
    byte_4B1843A = 1;
  }
  if ( !this->fields.transformServantlist )
  {
    p_transformServantlist = (PartyOrganizationUtility_o *)&this->fields.transformServantlist;
    v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_BattleActionData_TransformServant__TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant___ctor__);
    p_transformServantlist->klass = (PartyOrganizationUtility_c *)v8;
    sub_1BCA784(p_transformServantlist, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__UpdateDirectIntervalBuffData(
        BattleActionData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  Il2CppObject *Master_object; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Func_object__bool__o **v43; // x20
  System_Action_T__o *v44; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Func_object__bool__o *v49; // x23
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  __int128 v57; // [xsp+0h] [xbp-90h] BYREF
  __int128 v58; // [xsp+10h] [xbp-80h]
  __int128 v59; // [xsp+20h] [xbp-70h]

  if ( (byte_4B18422 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, *(_QWORD *)&targetType, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v18,
      v19);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v26,
      v27);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass150_0__UpdateDirectIntervalBuffData_b__0__, v28, v29);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass150_0_TypeInfo, v30, v31);
    byte_4B18422 = 1;
  }
  v58 = 0u;
  v59 = 0u;
  v57 = 0u;
  v32 = sub_1BCAA2C(BattleActionData___c__DisplayClass150_0_TypeInfo, *(_QWORD *)&targetType, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_16;
  *(_DWORD *)(v32 + 24) = targetType;
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
         0LL) )
  {
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
  *(_QWORD *)(v32 + 16) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)Master_object, v37, v38, v39, v40, v41, v42);
  IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
  if ( !IntervalBuffDict_k__BackingField )
LABEL_16:
    sub_1BCAA3C(IntervalBuffDict_k__BackingField, v34);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v57,
    IntervalBuffDict_k__BackingField,
    (const MethodInfo_31C0FC8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
  v43 = (System_Func_object__bool__o **)(v32 + 32);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v57,
            (const MethodInfo_334A510 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__) )
  {
    v44 = (System_Action_T__o *)*((_QWORD *)&v58 + 1);
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v59;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v59, 0LL) )
    {
      v49 = *v43;
      if ( !*v43 )
      {
        v49 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                               v46,
                                               v47,
                                               v48);
        System_Func_object__bool____ctor(
          v49,
          (Il2CppObject *)v32,
          Method_BattleActionData___c__DisplayClass150_0__UpdateDirectIntervalBuffData_b__0__,
          0LL);
        *v43 = v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v49, v50, v51, v52, v53, v54, v55);
      }
      v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v45,
                                                             (System_Func_TSource__bool__o *)v49,
                                                             (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
      BasicHelper__ForEach_object_(
        v56,
        v44,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v57,
    (const MethodInfo_334A644 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
}


void __fastcall BattleActionData__UpdateForceBuffEffectAllTrue(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *buffdatalist; // x20
  BattleActionData___c_c *v18; // x0
  System_Action_object__o *_9__158_0; // x21
  Il2CppObject *v20; // x22
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_object__o *healdatalist; // x19
  BattleActionData___c_c *v29; // x0
  System_Action_object__o *_9__158_1; // x20
  Il2CppObject *v31; // x21
  struct BattleActionData___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B18425 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_HealData__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_BattleActionData_BuffData__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__, v9, v10);
    sub_1BCA7E0(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_0__, v11, v12);
    sub_1BCA7E0(&Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_1__, v13, v14);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v15, v16);
    byte_4B18425 = 1;
  }
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v18 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v18 = BattleActionData___c_TypeInfo;
    }
    _9__158_0 = (System_Action_object__o *)v18->static_fields->__9__158_0;
    if ( !_9__158_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, method);
        v18 = BattleActionData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__158_0 = (System_Action_object__o *)sub_1BCAA2C(
                                               System_Action_BattleActionData_BuffData__TypeInfo,
                                               method,
                                               v2,
                                               v3);
      System_Action_object____ctor(
        _9__158_0,
        v20,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__158_0 = (struct System_Action_BattleActionData_BuffData__o *)_9__158_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__158_0,
        (int64_t)_9__158_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    System_Collections_Generic_List_object___ForEach(
      buffdatalist,
      (System_Action_T__o *)_9__158_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ForEach__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v29 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v29 = BattleActionData___c_TypeInfo;
    }
    _9__158_1 = (System_Action_object__o *)v29->static_fields->__9__158_1;
    if ( !_9__158_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, method);
        v29 = BattleActionData___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__158_1 = (System_Action_object__o *)sub_1BCAA2C(
                                               System_Action_BattleActionData_HealData__TypeInfo,
                                               method,
                                               v2,
                                               v3);
      System_Action_object____ctor(
        _9__158_1,
        v31,
        Method_BattleActionData___c__UpdateForceBuffEffectAllTrue_b__158_1__,
        0LL);
      v32 = BattleActionData___c_TypeInfo->static_fields;
      v32->__9__158_1 = (struct System_Action_BattleActionData_HealData__o *)_9__158_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v32->__9__158_1, (int64_t)_9__158_1, v33, v34, v35, v36, v37, v38);
    }
    System_Collections_Generic_List_object___ForEach(
      healdatalist,
      (System_Action_T__o *)_9__158_1,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ForEach__);
  }
}


void __fastcall BattleActionData__UpdateIntervalBuff(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleActionData___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  System_Action_object__o *_9__148_0; // x20
  Il2CppObject *v17; // x21
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B18420 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleServantData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleServantData___, v4, v5);
    sub_1BCA7E0(&Method_BattleActionData___c__UpdateIntervalBuff_b__148_0__, v6, v7);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v8, v9);
    byte_4B18420 = 1;
  }
  v10 = ((__int64 (__fastcall *)(BattleActionData_o *, Il2CppMethodPointer))this->klass->vtable._7_UpdateIntervalBuffData.method)(
          this,
          this->klass->vtable._8_FixDisplayWaitingIntervalBuff.methodPtr);
  v14 = BattleActionData___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)v10;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v11);
    v14 = BattleActionData___c_TypeInfo;
  }
  _9__148_0 = (System_Action_object__o *)v14->static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, v11);
      v14 = BattleActionData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__148_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleServantData__TypeInfo, v11, v12, v13);
    System_Action_object____ctor(_9__148_0, v17, Method_BattleActionData___c__UpdateIntervalBuff_b__148_0__, 0LL);
    static_fields = BattleActionData___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = (struct System_Action_BattleServantData__o *)_9__148_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__148_0,
      (int64_t)_9__148_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  BasicHelper__ForEach_object_(
    v15,
    (System_Action_T__o *)_9__148_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleServantData___);
}


System_Collections_Generic_HashSet_BattleServantData__o *__fastcall BattleActionData__UpdateIntervalBuffData(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_HashSet_T__o *v29; // x20
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *IntervalBuffDict_k__BackingField; // x0
  System_Collections_Generic_List_object__o *v32; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  __int128 v37[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v38; // [xsp+30h] [xbp-70h] BYREF
  System_Action_T__o *action[2]; // [xsp+40h] [xbp-60h]
  __int128 v40; // [xsp+50h] [xbp-50h]

  if ( (byte_4B18421 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Key__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Key__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData___get_Value__,
      v23,
      v24);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___get_Value__,
      v25,
      v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v27, v28);
    byte_4B18421 = 1;
  }
  *(_OWORD *)action = 0u;
  v40 = 0u;
  v38 = 0u;
  v29 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_BattleServantData__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_HashSet_object____ctor(
    v29,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._IntervalBuffDict_k__BackingField,
          0LL) )
  {
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v37,
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_31C0FC8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___GetEnumerator__);
    v38 = v37[0];
    *(_OWORD *)action = v37[1];
    v40 = v37[2];
    v32 = 0LL;
    while ( 1 )
    {
      v33 = System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v38,
              (const MethodInfo_334A510 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___MoveNext__);
      if ( !v33 )
        break;
      v35 = (Il2CppObject *)action[0];
      if ( (_QWORD)v40 )
        v32 = (System_Collections_Generic_List_object__o *)v40;
      if ( (_QWORD)v40 )
      {
        if ( !v32 )
          sub_1BCAA3C(v33, v34);
        System_Collections_Generic_List_object___ForEach(
          v32,
          action[1],
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      }
      if ( v35 )
      {
        if ( !v29 )
          sub_1BCAA3C(v33, v34);
        System_Collections_Generic_HashSet_object___Add(
          v29,
          v35,
          (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___object___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v38,
      (const MethodInfo_334A644 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Dispose__);
    IntervalBuffDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._IntervalBuffDict_k__BackingField;
    if ( !IntervalBuffDict_k__BackingField )
LABEL_20:
      sub_1BCAA3C(IntervalBuffDict_k__BackingField, v30);
    System_Collections_Generic_Dictionary_KeyValuePair_object__object___object___Clear(
      IntervalBuffDict_k__BackingField,
      (const MethodInfo_31C0CF0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_BattleServantData__Action_BattleBuffData_BuffData____List_BattleBuffData_BuffData___Clear__);
  }
  return (System_Collections_Generic_HashSet_BattleServantData__o *)v29;
}


void __fastcall BattleActionData__UpdateIntervalCurrent(
        BattleActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B18474 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x, method);
    byte_4B18474 = 1;
  }
  HpDecreaseFuncTargetHash_k__BackingField = this->fields._HpDecreaseFuncTargetHash_k__BackingField;
  if ( !HpDecreaseFuncTargetHash_k__BackingField )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    HpDecreaseFuncTargetHash_k__BackingField,
    x,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *damagedatalist; // x21
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2

  if ( (byte_4B18456 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_BuffData___, addData, method);
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___, v5, v6);
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_HealData___, v7, v8);
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___, v9, v10);
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___, v11, v12);
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___, v13, v14);
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_SummonServant___, v15, v16);
    sub_1BCA7E0(&Method_BattleActionData_addBattleData_BattleActionData_TransformServant___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__, v19, v20);
    byte_4B18456 = 1;
  }
  if ( addData )
  {
    damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(
                                                                    this,
                                                                    (const MethodInfo *)addData);
    v23 = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(addData, v22);
    if ( !damagedatalist )
      sub_1BCAA3C(v23, v24);
    System_Collections_Generic_List_object___AddRange(
      damagedatalist,
      v23,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__AddRange__);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.buffdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.buffdatalist,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_BuffData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.healdatalist,
      (System_Collections_Generic_List_T__o **)&this->fields.healdatalist,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_HealData___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.replacememberlist,
      (System_Collections_Generic_List_T__o **)&this->fields.replacememberlist,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_ReplaceMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.moveToSubMemberList,
      (System_Collections_Generic_List_T__o **)&this->fields.moveToSubMemberList,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_MoveToSubMember___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.transformServantlist,
      (System_Collections_Generic_List_T__o **)&this->fields.transformServantlist,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_TransformServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.summonServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.summonServantList,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_SummonServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.shiftServantList,
      (System_Collections_Generic_List_T__o **)&this->fields.shiftServantList,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_ShiftServant___);
    BattleActionData__addBattleData_object_(
      this,
      (System_Collections_Generic_List_T__o *)addData->fields.changeBgList,
      (System_Collections_Generic_List_T__o **)&this->fields.changeBgList,
      (const MethodInfo_2F031FC *)Method_BattleActionData_addBattleData_BattleActionData_ChangeBg___);
    this->fields.redrawCommandCard |= addData->fields.redrawCommandCard;
    BattleActionData__addReflectLogicResultServantIds(this, addData->fields.servantLogicResultList, v25);
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
        const MethodInfo_2F032A4 *method)
{
  long double v4; // q0
  System_Collections_Generic_List_T__o *v8; // x0
  Il2CppClass *_0_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_T__o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_1C1C718(method, addDataList);
    if ( !addDataList )
      return;
  }
  v8 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1C1C6BC(v4);
    v10 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                    _0_System_Collections_Generic_List_T,
                                                    addDataList,
                                                    dataList,
                                                    method);
    method->rgctx_data->_2_System_Collections_Generic_List_T___ctor->methodPointer();
    *dataList = v10;
    sub_1BCA784((PartyOrganizationUtility_o *)dataList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    v8 = *dataList;
    if ( !*dataList )
      sub_1BCAA3C(0LL, v17);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_T__o *, System_Collections_Generic_List_T__o *))method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange->methodPointer)(
    v8,
    addDataList);
}


void __fastcall BattleActionData__addBattleData_object_(
        BattleActionData_o *this,
        System_Collections_Generic_List_T__o *addDataList,
        System_Collections_Generic_List_T__o **dataList,
        const MethodInfo_2F031FC *method)
{
  long double v4; // q0
  System_Collections_Generic_List_T__o *v8; // x0
  Il2CppClass *_0_System_Collections_Generic_List_T; // x0
  System_Collections_Generic_List_object__o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1

  if ( method->rgctx_data )
  {
    if ( !addDataList )
      return;
  }
  else
  {
    sub_1C1C718(method, addDataList);
    if ( !addDataList )
      return;
  }
  v8 = *dataList;
  if ( !*dataList )
  {
    _0_System_Collections_Generic_List_T = method->rgctx_data->_0_System_Collections_Generic_List_T_;
    if ( (BYTE5(_0_System_Collections_Generic_List_T->vtable[0].methodPtr) & 1) == 0 )
      _0_System_Collections_Generic_List_T = (Il2CppClass *)sub_1C1C6BC(v4);
    v10 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         _0_System_Collections_Generic_List_T,
                                                         addDataList,
                                                         dataList,
                                                         method);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_35A1428 *)method->rgctx_data->_2_System_Collections_Generic_List_T___ctor);
    *dataList = (System_Collections_Generic_List_T__o *)v10;
    sub_1BCA784((PartyOrganizationUtility_o *)dataList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    v8 = *dataList;
    if ( !*dataList )
      sub_1BCAA3C(0LL, v17);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)addDataList,
    (const MethodInfo_35A1E68 *)method->rgctx_data->_3_System_Collections_Generic_List_T__AddRange);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t targetId; // w22
  BuffList_ACTION_array *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleActionData_SideEffectData_o *v21; // x21
  const MethodInfo *v22; // x3
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct BattleActionData_SideEffectData_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w8

  if ( (byte_4B1842B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__, sideEffectList, damage);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BuffList_ACTION__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BuffList_ACTION__get_Count__, v12, v13);
    this = (BattleActionData_o *)sub_1BCA7E0(&BattleActionData_SideEffectData_TypeInfo, v14, v15);
    byte_4B1842B = 1;
  }
  if ( !actList )
    goto LABEL_13;
  if ( actList->fields._size < 1 )
    return;
  if ( !damage
    || (targetId = damage->fields.targetId,
        v17 = (BuffList_ACTION_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                         (System_Collections_Generic_List_T__o *)actList,
                                         (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_BuffList_ACTION__ToArray__),
        v21 = (BattleActionData_SideEffectData_o *)sub_1BCAA2C(BattleActionData_SideEffectData_TypeInfo, v18, v19, v20),
        BattleActionData_SideEffectData___ctor(v21, targetId, v17, v22),
        !sideEffectList)
    || (items = sideEffectList->fields._items,
        v30 = Method_System_Collections_Generic_List_BattleActionData_SideEffectData__Add__,
        ++sideEffectList->fields._version,
        !items) )
  {
LABEL_13:
    sub_1BCAA3C(this, sideEffectList);
  }
  size = sideEffectList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (Il2CppObject *)v21,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    sideEffectList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v21, v23, v24, v25, v26, v27, v28);
  }
  v33 = actList->fields._version + 1;
  actList->fields._size = 0;
  actList->fields._version = v33;
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

  if ( (byte_4B18469 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__, pairAttackAndTarget, method);
    byte_4B18469 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds
    || (items = attackSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__,
        ++attackSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_1BCAA3C(attackSideEffectedSvtIds, pairAttackAndTarget);
  }
  size = attackSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    v9 = pairAttackAndTarget;
    System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
      attackSideEffectedSvtIds,
      v9,
      *(const MethodInfo_34EF5DC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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

  if ( (byte_4B18467 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&uniqueSvtId, method);
    byte_4B18467 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds
    || (items = damageSideEffectedSvtIds->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++damageSideEffectedSvtIds->fields._version,
        !items) )
  {
    sub_1BCAA3C(damageSideEffectedSvtIds, *(_QWORD *)&uniqueSvtId);
  }
  size = damageSideEffectedSvtIds->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      damageSideEffectedSvtIds,
      uniqueSvtId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *servantLogicResultList; // x21
  System_Predicate_object__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4B1846B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
      *(_QWORD *)&uniqueSvtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__, v6, v7);
    sub_1BCA7E0(&System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleActionData_ServantLogicResultData_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass315_0__addReflectLogicResultServantId_b__0__, v12, v13);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass315_0_TypeInfo, v14, v15);
    byte_4B1846B = 1;
  }
  v16 = sub_1BCAA2C(BattleActionData___c__DisplayClass315_0_TypeInfo, *(_QWORD *)&uniqueSvtId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_DWORD *)(v16 + 16) = uniqueSvtId;
  servantLogicResultList = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v22 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BattleActionData_ServantLogicResultData__TypeInfo,
                                        v18,
                                        v19,
                                        v20);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_BattleActionData___c__DisplayClass315_0__addReflectLogicResultServantId_b__0__,
    0LL);
  if ( !servantLogicResultList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_object___FindIndex(
         servantLogicResultList,
         (System_Predicate_T__o *)v22,
         (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__FindIndex__) != -1 )
    return;
  v26 = (System_Collections_Generic_List_object__o *)this->fields.servantLogicResultList;
  v27 = sub_1BCAA2C(BattleActionData_ServantLogicResultData_TypeInfo, v23, v24, v25);
  *(_DWORD *)(v27 + 20) = -1;
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  *(_DWORD *)(v27 + 16) = *(_DWORD *)(v16 + 16);
  if ( !v26
    || (items = v26->fields._items,
        v35 = Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Add__,
        ++v26->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BCAA3C(v17, v18);
  }
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v27,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v27;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v27, v28, v29, v30, v31, v32, v33);
  }
}


void __fastcall BattleActionData__addReflectLogicResultServantIds(
        BattleActionData_o *this,
        System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *addLogicResultList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t v7; // w21
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1846A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
      addLogicResultList,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v5, v6);
    byte_4B1846A = 1;
  }
  if ( addLogicResultList && addLogicResultList->fields._size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)addLogicResultList,
               v7,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !Item )
        sub_1BCAA3C(0LL, v9);
      BattleActionData__addReflectLogicResultServantId(this, (int32_t)Item[1].klass, v10);
      ++v7;
    }
    while ( v7 < addLogicResultList->fields._size );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__addSideEffectActionData(
        BattleActionData_o *this,
        BattleActionData_o *sideEffectActionData,
        int32_t actType,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActionData_o *v10; // x21
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 endcameraname_low; // x10
  __int64 v14; // x8

  v10 = this;
  if ( (byte_4B18462 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1BCA7E0(
                                   &Method_System_Collections_Generic_List_BattleActionData__Add__,
                                   sideEffectActionData,
                                   *(_QWORD *)&actType);
    byte_4B18462 = 1;
  }
  if ( !sideEffectActionData
    || (sideEffectActionData->fields.actType = actType, (this = (BattleActionData_o *)v10->fields.sideEffectList) == 0LL)
    || (v11 = *(_QWORD *)&this->fields.state,
        v12 = Method_System_Collections_Generic_List_BattleActionData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v11) )
  {
    sub_1BCAA3C(this, sideEffectActionData);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)sideEffectActionData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = v11 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v14 + 32) = sideEffectActionData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v14 + 32),
      (int64_t)sideEffectActionData,
      *(int64_t *)&actType,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
}


bool __fastcall BattleActionData__checkSummonServantList(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_BattleActionData_SummonServant__o *summonServantList; // x8

  if ( (byte_4B1843D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__get_Count__, method, v2);
    byte_4B1843D = 1;
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
  __int64 v3; // x3
  int32_t v4; // w19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  PartyOrganizationUtility_o *p_buffdatalist; // x20
  System_Collections_Generic_List_object__o *v25; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Predicate_object__o *v32; // x19
  const MethodInfo_35A37B4 *v33; // x1

  v4 = funcIndex;
  if ( (byte_4B1842F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__,
      *(_QWORD *)&funcIndex,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Predicate_BattleActionData_BuffData__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass180_0__getBuffList_b__0__, v14, v15);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass180_0_TypeInfo, v16, v17);
    byte_4B1842F = 1;
  }
  v18 = sub_1BCAA2C(BattleActionData___c__DisplayClass180_0_TypeInfo, *(_QWORD *)&funcIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_DWORD *)(v18 + 16) = v4;
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( !buffdatalist )
  {
    p_buffdatalist = (PartyOrganizationUtility_o *)&this->fields.buffdatalist;
    v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_BuffData__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_BuffData___ctor__);
    p_buffdatalist->klass = (PartyOrganizationUtility_c *)v25;
    sub_1BCA784(p_buffdatalist, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    v4 = *(_DWORD *)(v18 + 16);
    buffdatalist = (System_Collections_Generic_List_object__o *)p_buffdatalist->klass;
  }
  if ( v4 == -1 )
  {
    if ( buffdatalist )
    {
      v33 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)buffdatalist;
      return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v33);
    }
LABEL_13:
    sub_1BCAA3C(All, v20);
  }
  v32 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleActionData_BuffData__TypeInfo, v20, v21, v22);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass180_0__getBuffList_b__0__,
    0LL);
  if ( !buffdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          buffdatalist,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v33 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ToArray__;
  return (BattleActionData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v33);
}


BattleActionData_ChangeBg_o *__fastcall BattleActionData__getChangeBg(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *changeBgList; // x0

  if ( (byte_4B18441 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__, v4, v5);
    byte_4B18441 = 1;
  }
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( changeBgList && changeBgList->fields._size >= 1 )
    return (BattleActionData_ChangeBg_o *)System_Collections_Generic_List_object___get_Item(
                                            changeBgList,
                                            0,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg__get_Item__);
  else
    return 0LL;
}


int32_t __fastcall BattleActionData__getCountActionForPerformance(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  StageEntity_c *v4; // x0
  int32_t actionIndex; // w21
  int32_t DEFAULT_ENEMY_ACTION_COUNT; // w8

  if ( (byte_4B18461 & 1) == 0 )
  {
    sub_1BCA7E0(&StageEntity_TypeInfo, method, v2);
    byte_4B18461 = 1;
  }
  v4 = StageEntity_TypeInfo;
  actionIndex = this->fields.actionIndex;
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, method);
    v4 = StageEntity_TypeInfo;
  }
  DEFAULT_ENEMY_ACTION_COUNT = v4->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  if ( actionIndex < DEFAULT_ENEMY_ACTION_COUNT )
    return this->fields.actionIndex + 1;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    return StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return DEFAULT_ENEMY_ACTION_COUNT;
}


BattleActionData_SideEffectData_array *__fastcall BattleActionData__getDamageAttackSideEffectList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x19
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x4
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1842A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo, v15, v16);
    byte_4B1842A = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleActionData_SideEffectData__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v18);
  if ( !damagedatalist )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    damagedatalist,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v21 )
      break;
    if ( !v25.fields._current )
      sub_1BCAA3C(v21, v22);
    BattleActionData__addDamageSideEffect(
      (BattleActionData_o *)v21,
      (System_Collections_Generic_List_BattleActionData_SideEffectData__o *)v17,
      (BattleActionData_DamageData_o *)v25.fields._current,
      (System_Collections_Generic_List_BuffList_ACTION__o *)v25.fields._current[5].klass,
      v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  if ( !v17 )
LABEL_11:
    sub_1BCAA3C(damagedatalist, v20);
  return (BattleActionData_SideEffectData_array *)System_Collections_Generic_List_object___ToArray(
                                                    v17,
                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_SideEffectData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_DamageData_array *__fastcall BattleActionData__getDamageList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  bool v19; // zf
  System_Collections_Generic_List_object__o *v20; // x19
  System_Predicate_object__o *v21; // x20
  const MethodInfo_35A37B4 *v22; // x1

  if ( (byte_4B18428 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__,
      *(_QWORD *)&funcIndex,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__, v6, v7);
    sub_1BCA7E0(&System_Predicate_BattleActionData_DamageData__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass168_0__getDamageList_b__0__, v10, v11);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass168_0_TypeInfo, v12, v13);
    byte_4B18428 = 1;
  }
  v14 = sub_1BCAA2C(BattleActionData___c__DisplayClass168_0_TypeInfo, *(_QWORD *)&funcIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_DWORD *)(v14 + 16) = funcIndex;
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v16);
  v19 = funcIndex == -1;
  v20 = damagedatalist;
  if ( v19 )
  {
    if ( damagedatalist )
    {
      v22 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
      return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v22);
    }
LABEL_11:
    sub_1BCAA3C(damagedatalist, v16);
  }
  v21 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleActionData_DamageData__TypeInfo, v16, v17, v18);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_BattleActionData___c__DisplayClass168_0__getDamageList_b__0__,
    0LL);
  if ( !v20 )
    goto LABEL_11;
  damagedatalist = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                  v20,
                                                                  (System_Predicate_T__o *)v21,
                                                                  (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__FindAll__);
  if ( !damagedatalist )
    goto LABEL_11;
  v22 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ToArray__;
  return (BattleActionData_DamageData_array *)System_Collections_Generic_List_object___ToArray(damagedatalist, v22);
}


System_Int32_array *__fastcall BattleActionData__getDamageTargetIdList(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_HashSet_int__o *v19; // x19
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18429 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v17, v18);
    byte_4B18429 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, v20);
  if ( !damagedatalist )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    damagedatalist,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v23 )
      break;
    if ( !v26.fields._current )
      sub_1BCAA3C(v23, v24);
    if ( !v19 )
      sub_1BCAA3C(v23, v24);
    System_Collections_Generic_HashSet_int___Add(
      v19,
      HIDWORD(v26.fields._current[1].monitor),
      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v19,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
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
    sub_1BCAA44(this, index);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w21
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18471 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__,
      *(_QWORD *)&index,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v13, v14);
    byte_4B18471 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( (index & 0x80000000) != 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
    if ( funcTargetPlayerTypeList )
    {
      System_Collections_Generic_List_Int32Enum___GetEnumerator(
        &v18,
        funcTargetPlayerTypeList,
        (const MethodInfo_3587F38 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__GetEnumerator__);
      v15 = 0;
      while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                &v18,
                (const MethodInfo_331380C *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__MoveNext__) )
        v15 |= LODWORD(v18.fields._current);
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
        &v18,
        (const MethodInfo_3313808 *)Method_System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag__Dispose__);
      return v15;
    }
LABEL_13:
    sub_1BCAA3C(funcTargetPlayerTypeList, *(_QWORD *)&index);
  }
  v15 = 0;
  funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)this->fields.funcTargetPlayerTypeList;
  if ( !funcTargetPlayerTypeList )
    goto LABEL_13;
  if ( funcTargetPlayerTypeList->fields._size > index )
    return System_Collections_Generic_List_Int32Enum___get_Item(
             funcTargetPlayerTypeList,
             index,
             (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_HealData_array *__fastcall BattleActionData__getHealList(
        BattleActionData_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *healdatalist; // x22
  PartyOrganizationUtility_o *p_healdatalist; // x20
  System_Collections_Generic_List_object__o *v25; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Predicate_object__o *v32; // x19
  const MethodInfo_35A37B4 *v33; // x1

  v4 = funcIndex;
  if ( (byte_4B18433 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__,
      *(_QWORD *)&funcIndex,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_HealData__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Predicate_BattleActionData_HealData__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass187_0__getHealList_b__0__, v14, v15);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass187_0_TypeInfo, v16, v17);
    byte_4B18433 = 1;
  }
  v18 = sub_1BCAA2C(BattleActionData___c__DisplayClass187_0_TypeInfo, *(_QWORD *)&funcIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_DWORD *)(v18 + 16) = v4;
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
  {
    p_healdatalist = (PartyOrganizationUtility_o *)&this->fields.healdatalist;
    v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_HealData__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_HealData___ctor__);
    p_healdatalist->klass = (PartyOrganizationUtility_c *)v25;
    sub_1BCA784(p_healdatalist, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    v4 = *(_DWORD *)(v18 + 16);
    healdatalist = (System_Collections_Generic_List_object__o *)p_healdatalist->klass;
  }
  if ( v4 == -1 )
  {
    if ( healdatalist )
    {
      v33 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
      All = (System_Collections_Generic_List_T__o *)healdatalist;
      return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)All,
                                                  v33);
    }
LABEL_13:
    sub_1BCAA3C(All, v20);
  }
  v32 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleActionData_HealData__TypeInfo, v20, v21, v22);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass187_0__getHealList_b__0__,
    0LL);
  if ( !healdatalist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          healdatalist,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleActionData_HealData__FindAll__);
  if ( !All )
    goto LABEL_13;
  v33 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_HealData__ToArray__;
  return (BattleActionData_HealData_array *)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)All,
                                              v33);
}


System_Int32_array *__fastcall BattleActionData__getInfluenceIds(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__int__o *v13; // x19
  System_Int32_array *DamageTargets; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct System_Int32_array *pttargetIds; // x22
  __int64 v18; // x8
  unsigned __int64 v19; // x23
  __int64 v20; // x8
  System_Int32_array *v21; // x20
  unsigned __int64 v22; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_4B18457 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    byte_4B18457 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v13 )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v13,
    this->fields.actorId,
    this->fields.actorId,
    (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    v13,
    this->fields.targetId,
    this->fields.targetId,
    (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  pttargetIds = this->fields.pttargetIds;
  if ( pttargetIds )
  {
    v18 = *(_QWORD *)&pttargetIds->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( v19 < (unsigned int)v18 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v13,
          pttargetIds->m_Items[v19 + 1],
          pttargetIds->m_Items[v19 + 1],
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        LODWORD(v18) = pttargetIds->max_length;
        if ( (__int64)++v19 >= (int)v18 )
          goto LABEL_9;
      }
LABEL_15:
      sub_1BCAA44(DamageTargets, v15);
    }
  }
LABEL_9:
  DamageTargets = BattleActionData__GetDamageTargets(this, v15, v16);
  if ( !DamageTargets )
LABEL_16:
    sub_1BCAA3C(DamageTargets, v15);
  v20 = *(_QWORD *)&DamageTargets->max_length;
  v21 = DamageTargets;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( v22 < (unsigned int)v20 )
    {
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v13,
        v21->m_Items[v22 + 1],
        v21->m_Items[v22 + 1],
        (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v20) = v21->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v13,
           (const MethodInfo_31FCF38 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndex(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_int__o *v33; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *buffdatalist; // x21
  BattleActionData___c_c *v38; // x0
  System_Converter_object__int__o *_9__285_0; // x22
  Il2CppObject *v40; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  void *v48; // x0
  System_Collections_Generic_List_object__o *healdatalist; // x20
  BattleActionData___c_c *v50; // x0
  System_Converter_object__int__o *_9__285_1; // x21
  Il2CppObject *v52; // x22
  PartyOrganizationUtility_o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Comparison_int__o *v60; // x20
  Il2CppObject *v61; // x21
  struct BattleActionData___c_StaticFields *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0

  if ( (byte_4B1845A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Converter_BattleActionData_HealData__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort___76787584, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndex_b__285_0__, v25, v26);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndex_b__285_1__, v27, v28);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndex_b__285_2__, v29, v30);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v31, v32);
    byte_4B1845A = 1;
  }
  v33 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v38 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v34);
      v38 = BattleActionData___c_TypeInfo;
    }
    _9__285_0 = (System_Converter_object__int__o *)v38->static_fields->__9__285_0;
    if ( !_9__285_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38, v34);
        v38 = BattleActionData___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__285_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                       System_Converter_BattleActionData_BuffData__int__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
      System_Converter_object__int____ctor(
        _9__285_0,
        v40,
        Method_BattleActionData___c__getListFunctionIndex_b__285_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__285_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__285_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__285_0,
        (int64_t)_9__285_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    v48 = System_Collections_Generic_List_object___ConvertAll_int_(
            buffdatalist,
            (System_Converter_T__TOutput__o *)_9__285_0,
            (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v33 )
      goto LABEL_29;
    System_Collections_Generic_List_int___AddRange(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)v48,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( !healdatalist )
    goto LABEL_21;
  v50 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v34);
    v50 = BattleActionData___c_TypeInfo;
  }
  _9__285_1 = (System_Converter_object__int__o *)v50->static_fields->__9__285_1;
  if ( !_9__285_1 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50, v34);
      v50 = BattleActionData___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v50->static_fields->__9;
    _9__285_1 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                     System_Converter_BattleActionData_HealData__int__TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36);
    System_Converter_object__int____ctor(
      _9__285_1,
      v52,
      Method_BattleActionData___c__getListFunctionIndex_b__285_1__,
      0LL);
    v53 = (PartyOrganizationUtility_o *)BattleActionData___c_TypeInfo->static_fields;
    v53[1].klass = (PartyOrganizationUtility_c *)_9__285_1;
    sub_1BCA784(v53 + 1, (int64_t)_9__285_1, v54, v55, v56, v57, v58, v59);
  }
  v48 = System_Collections_Generic_List_object___ConvertAll_int_(
          healdatalist,
          (System_Converter_T__TOutput__o *)_9__285_1,
          (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
  if ( !v33 )
LABEL_29:
    sub_1BCAA3C(v48, v34);
  System_Collections_Generic_List_int___AddRange(
    v33,
    (System_Collections_Generic_IEnumerable_T__o *)v48,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
LABEL_21:
  v48 = BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v34);
    v48 = BattleActionData___c_TypeInfo;
  }
  v60 = *(System_Comparison_int__o **)(*((_QWORD *)v48 + 23) + 152LL);
  if ( !v60 )
  {
    if ( !*((_DWORD *)v48 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v48, v34);
      v48 = BattleActionData___c_TypeInfo;
    }
    v61 = (Il2CppObject *)**((_QWORD **)v48 + 23);
    v60 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, v34, v35, v36);
    System_Comparison_int____ctor(v60, v61, Method_BattleActionData___c__getListFunctionIndex_b__285_2__, 0LL);
    v62 = BattleActionData___c_TypeInfo->static_fields;
    v62->__9__285_2 = v60;
    sub_1BCA784((PartyOrganizationUtility_o *)&v62->__9__285_2, (int64_t)v60, v63, v64, v65, v66, v67, v68);
  }
  if ( !v33 )
    goto LABEL_29;
  System_Collections_Generic_List_int___Sort_56125020(
    v33,
    (System_Comparison_T__o *)v60,
    (const MethodInfo_358665C *)Method_System_Collections_Generic_List_int__Sort___76787584);
  v69 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v69,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleActionData__getListFunctionIndexEx(
        BattleActionData_o *this,
        int32_t *displayFuncNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_int__o *v46; // x20
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_object__o *buffdatalist; // x22
  BattleActionData___c_c *v51; // x0
  System_Converter_object__int__o *_9__286_0; // x23
  Il2CppObject *v53; // x24
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Int32_array *result; // x0
  const MethodInfo *v62; // x1
  System_Collections_Generic_List_object__o *healdatalist; // x22
  BattleActionData___c_c *v64; // x0
  System_Converter_object__int__o *_9__286_1; // x23
  Il2CppObject *v66; // x24
  struct BattleActionData___c_StaticFields *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x2
  __int64 v77; // x3
  BattleActionData___c_c *v78; // x8
  System_Collections_Generic_List_object__o *v79; // x22
  System_Converter_object__int__o *_9__286_2; // x23
  Il2CppObject *v81; // x24
  struct BattleActionData___c_StaticFields *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  const MethodInfo *v89; // x2
  BattleActionData_DamageData_array *DamageArrayDistinctIndex; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  BattleActionData___c_c *v94; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x21
  System_Func_object__int__o *_9__286_3; // x22
  Il2CppObject *v97; // x23
  struct BattleActionData___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int32_t v105; // w21
  System_Comparison_int__o *v106; // x22
  Il2CppObject *v107; // x23
  struct BattleActionData___c_StaticFields *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0

  if ( (byte_4B1845B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, displayFuncNum, method);
    sub_1BCA7E0(&System_Converter_BattleActionData_BuffData__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Converter_BattleActionData_HealData__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Converter_BattleActionData_DamageData__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v16, v17);
    sub_1BCA7E0(&System_Func_BattleActionData_DamageData__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort___76787584, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_0__, v34, v35);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_1__, v36, v37);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_2__, v38, v39);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_3__, v40, v41);
    sub_1BCA7E0(&Method_BattleActionData___c__getListFunctionIndexEx_b__286_4__, v42, v43);
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v44, v45);
    byte_4B1845B = 1;
  }
  v46 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    displayFuncNum,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  buffdatalist = (System_Collections_Generic_List_object__o *)this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v51 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v47);
      v51 = BattleActionData___c_TypeInfo;
    }
    _9__286_0 = (System_Converter_object__int__o *)v51->static_fields->__9__286_0;
    if ( !_9__286_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v47);
        v51 = BattleActionData___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__286_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                       System_Converter_BattleActionData_BuffData__int__TypeInfo,
                                                       v47,
                                                       v48,
                                                       v49);
      System_Converter_object__int____ctor(
        _9__286_0,
        v53,
        Method_BattleActionData___c__getListFunctionIndexEx_b__286_0__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__286_0 = (struct System_Converter_BattleActionData_BuffData__int__o *)_9__286_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__286_0,
        (int64_t)_9__286_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     buffdatalist,
                                     (System_Converter_T__TOutput__o *)_9__286_0,
                                     (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_BattleActionData_BuffData__ConvertAll_int___);
    if ( !v46 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v46,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  healdatalist = (System_Collections_Generic_List_object__o *)this->fields.healdatalist;
  if ( healdatalist )
  {
    v64 = BattleActionData___c_TypeInfo;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v47);
      v64 = BattleActionData___c_TypeInfo;
    }
    _9__286_1 = (System_Converter_object__int__o *)v64->static_fields->__9__286_1;
    if ( !_9__286_1 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64, v47);
        v64 = BattleActionData___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v64->static_fields->__9;
      _9__286_1 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                       System_Converter_BattleActionData_HealData__int__TypeInfo,
                                                       v47,
                                                       v48,
                                                       v49);
      System_Converter_object__int____ctor(
        _9__286_1,
        v66,
        Method_BattleActionData___c__getListFunctionIndexEx_b__286_1__,
        0LL);
      v67 = BattleActionData___c_TypeInfo->static_fields;
      v67->__9__286_1 = (struct System_Converter_BattleActionData_HealData__int__o *)_9__286_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v67->__9__286_1, (int64_t)_9__286_1, v68, v69, v70, v71, v72, v73);
    }
    result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                     healdatalist,
                                     (System_Converter_T__TOutput__o *)_9__286_1,
                                     (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_BattleActionData_HealData__ConvertAll_int___);
    if ( !v46 )
      goto LABEL_47;
    System_Collections_Generic_List_int___AddRange(
      v46,
      (System_Collections_Generic_IEnumerable_T__o *)result,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( !BattleActionData__get_damagedatalist(this, v47) )
  {
    v105 = 0;
    goto LABEL_38;
  }
  result = (System_Int32_array *)BattleActionData__get_damagedatalist(this, v62);
  v78 = BattleActionData___c_TypeInfo;
  v79 = (System_Collections_Generic_List_object__o *)result;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v62);
    v78 = BattleActionData___c_TypeInfo;
  }
  _9__286_2 = (System_Converter_object__int__o *)v78->static_fields->__9__286_2;
  if ( !_9__286_2 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78, v62);
      v78 = BattleActionData___c_TypeInfo;
    }
    v81 = (Il2CppObject *)v78->static_fields->__9;
    _9__286_2 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                     System_Converter_BattleActionData_DamageData__int__TypeInfo,
                                                     v62,
                                                     v76,
                                                     v77);
    System_Converter_object__int____ctor(
      _9__286_2,
      v81,
      Method_BattleActionData___c__getListFunctionIndexEx_b__286_2__,
      0LL);
    v82 = BattleActionData___c_TypeInfo->static_fields;
    v82->__9__286_2 = (struct System_Converter_BattleActionData_DamageData__int__o *)_9__286_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v82->__9__286_2, (int64_t)_9__286_2, v83, v84, v85, v86, v87, v88);
  }
  if ( !v79
    || (result = (System_Int32_array *)System_Collections_Generic_List_object___ConvertAll_int_(
                                         v79,
                                         (System_Converter_T__TOutput__o *)_9__286_2,
                                         (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__ConvertAll_int___),
        !v46) )
  {
LABEL_47:
    sub_1BCAA3C(result, v62);
  }
  System_Collections_Generic_List_int___AddRange(
    v46,
    (System_Collections_Generic_IEnumerable_T__o *)result,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  DamageArrayDistinctIndex = BattleActionData__GetDamageArrayDistinctIndex(this, -1, v89);
  v94 = BattleActionData___c_TypeInfo;
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)DamageArrayDistinctIndex;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v91);
    v94 = BattleActionData___c_TypeInfo;
  }
  _9__286_3 = (System_Func_object__int__o *)v94->static_fields->__9__286_3;
  if ( !_9__286_3 )
  {
    if ( !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94, v91);
      v94 = BattleActionData___c_TypeInfo;
    }
    v97 = (Il2CppObject *)v94->static_fields->__9;
    _9__286_3 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_BattleActionData_DamageData__int__TypeInfo,
                                                v91,
                                                v92,
                                                v93);
    System_Func_object__int____ctor(_9__286_3, v97, Method_BattleActionData___c__getListFunctionIndexEx_b__286_3__, 0LL);
    v98 = BattleActionData___c_TypeInfo->static_fields;
    v98->__9__286_3 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__286_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v98->__9__286_3, (int64_t)_9__286_3, v99, v100, v101, v102, v103, v104);
  }
  v105 = System_Linq_Enumerable__Sum_object_(
           v95,
           (System_Func_TSource__int__o *)_9__286_3,
           (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_BattleActionData_DamageData___);
LABEL_38:
  result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, v62);
    result = (System_Int32_array *)BattleActionData___c_TypeInfo;
  }
  v106 = *(System_Comparison_int__o **)(*(_QWORD *)&result->m_Items[39] + 192LL);
  if ( !v106 )
  {
    if ( !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result, v62);
      result = (System_Int32_array *)BattleActionData___c_TypeInfo;
    }
    v107 = **(Il2CppObject ***)&result->m_Items[39];
    v106 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, v62, v74, v75);
    System_Comparison_int____ctor(v106, v107, Method_BattleActionData___c__getListFunctionIndexEx_b__286_4__, 0LL);
    v108 = BattleActionData___c_TypeInfo->static_fields;
    v108->__9__286_4 = v106;
    sub_1BCA784((PartyOrganizationUtility_o *)&v108->__9__286_4, (int64_t)v106, v109, v110, v111, v112, v113, v114);
  }
  if ( !v46 )
    goto LABEL_47;
  System_Collections_Generic_List_int___Sort_56125020(
    v46,
    (System_Comparison_T__o *)v106,
    (const MethodInfo_358665C *)Method_System_Collections_Generic_List_int__Sort___76787584);
  v115 = System_Linq_Enumerable__Distinct_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v46,
           (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
  result = System_Linq_Enumerable__ToArray_int_(
             v115,
             (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !result )
    goto LABEL_47;
  *displayFuncNum = v105 + result->max_length;
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
  __int64 v3; // x3
  int32_t v4; // w19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *replacememberlist; // x22
  PartyOrganizationUtility_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v25; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Predicate_object__o *v32; // x19
  const MethodInfo_35A37B4 *v33; // x1

  v4 = funcIndex;
  if ( (byte_4B18436 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__,
      *(_QWORD *)&funcIndex,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Predicate_BattleActionData_ReplaceMember__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass192_0__getReplaceMember_b__0__, v14, v15);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass192_0_TypeInfo, v16, v17);
    byte_4B18436 = 1;
  }
  v18 = sub_1BCAA2C(BattleActionData___c__DisplayClass192_0_TypeInfo, *(_QWORD *)&funcIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_DWORD *)(v18 + 16) = v4;
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (PartyOrganizationUtility_o *)&this->fields.replacememberlist;
    v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (PartyOrganizationUtility_c *)v25;
    sub_1BCA784(p_replacememberlist, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    v4 = *(_DWORD *)(v18 + 16);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
  }
  if ( v4 == -1 )
  {
    if ( replacememberlist )
    {
      v33 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
      All = (System_Collections_Generic_List_T__o *)replacememberlist;
      return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       v33);
    }
LABEL_13:
    sub_1BCAA3C(All, v20);
  }
  v32 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BattleActionData_ReplaceMember__TypeInfo,
                                        v20,
                                        v21,
                                        v22);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v18,
    Method_BattleActionData___c__DisplayClass192_0__getReplaceMember_b__0__,
    0LL);
  if ( !replacememberlist )
    goto LABEL_13;
  All = System_Collections_Generic_List_object___FindAll(
          replacememberlist,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__FindAll__);
  if ( !All )
    goto LABEL_13;
  v33 = (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__ToArray__;
  return (BattleActionData_ReplaceMember_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   v33);
}


BattleActionData_ShiftServant_o *__fastcall BattleActionData__getShiftServant(
        BattleActionData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *shiftServantList; // x0

  if ( (byte_4B1843F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__, v4, v5);
    byte_4B1843F = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( shiftServantList && shiftServantList->fields._size >= 1 )
    return (BattleActionData_ShiftServant_o *)System_Collections_Generic_List_object___get_Item(
                                                shiftServantList,
                                                0,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant__get_Item__);
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_array *__fastcall BattleActionData__getSideEffectList(
        BattleActionData_o *this,
        int32_t actType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *sideEffectList; // x19
  System_Predicate_object__o *v20; // x20

  if ( (byte_4B18463 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData__FindAll__, *(_QWORD *)&actType, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData__ToArray__, v6, v7);
    sub_1BCA7E0(&System_Predicate_BattleActionData__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass301_0__getSideEffectList_b__0__, v10, v11);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass301_0_TypeInfo, v12, v13);
    byte_4B18463 = 1;
  }
  v14 = sub_1BCAA2C(BattleActionData___c__DisplayClass301_0_TypeInfo, *(_QWORD *)&actType, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = actType,
        sideEffectList = (System_Collections_Generic_List_object__o *)this->fields.sideEffectList,
        v20 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleActionData__TypeInfo, v16, v17, v18),
        System_Predicate_object____ctor(
          v20,
          (Il2CppObject *)v14,
          Method_BattleActionData___c__DisplayClass301_0__getSideEffectList_b__0__,
          0LL),
        !sideEffectList)
    || (All = System_Collections_Generic_List_object___FindAll(
                sideEffectList,
                (System_Predicate_T__o *)v20,
                (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleActionData__FindAll__)) == 0LL )
  {
    sub_1BCAA3C(All, v16);
  }
  return (BattleActionData_array *)System_Collections_Generic_List_object___ToArray(
                                     (System_Collections_Generic_List_object__o *)All,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *summonServantList; // x20
  System_Predicate_object__o *v22; // x19

  if ( (byte_4B1843C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__,
      *(_QWORD *)&funcIndex,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__, v6, v7);
    sub_1BCA7E0(&System_Predicate_BattleActionData_SummonServant__TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleActionData_SummonServant___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleActionData___c__DisplayClass205_0__getSummonServant_b__0__, v12, v13);
    sub_1BCA7E0(&BattleActionData___c__DisplayClass205_0_TypeInfo, v14, v15);
    byte_4B1843C = 1;
  }
  v16 = sub_1BCAA2C(BattleActionData___c__DisplayClass205_0_TypeInfo, *(_QWORD *)&funcIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_DWORD *)(v16 + 16) = funcIndex;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
    return (BattleActionData_SummonServant_array *)sub_1BCA888(BattleActionData_SummonServant___TypeInfo, 0LL);
  if ( funcIndex != -1 )
  {
    v22 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_BattleActionData_SummonServant__TypeInfo,
                                          v18,
                                          v19,
                                          v20);
    System_Predicate_object____ctor(
      v22,
      (Il2CppObject *)v16,
      Method_BattleActionData___c__DisplayClass205_0__getSummonServant_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            summonServantList,
            (System_Predicate_T__o *)v22,
            (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__FindAll__);
    if ( All )
      return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)All,
                                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
LABEL_11:
    sub_1BCAA3C(All, v18);
  }
  All = (System_Collections_Generic_List_T__o *)summonServantList;
  return (BattleActionData_SummonServant_array *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)All,
                                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant__ToArray__);
}


System_Int32_array *__fastcall BattleActionData__getTargetIds(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__int__o *v13; // x19
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  _QWORD *DamageTargets; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  _QWORD *v20; // x21
  unsigned __int64 v21; // x23
  __int64 v22; // x8
  _QWORD *v23; // x20
  unsigned __int64 v24; // x21
  __int64 v25; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0

  if ( (byte_4B18458 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    byte_4B18458 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  DamageTargets = BattleActionData__GetDamageTargets(this, v14, v15);
  if ( !DamageTargets )
    goto LABEL_20;
  v19 = DamageTargets[3];
  v20 = DamageTargets;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    while ( v21 < (unsigned int)v19 )
    {
      if ( !v13 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v13,
        *((_DWORD *)v20 + v21 + 8),
        *((_DWORD *)v20 + v21 + 8),
        (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      LODWORD(v19) = *((_DWORD *)v20 + 6);
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_9;
    }
LABEL_19:
    sub_1BCAA44(DamageTargets, v17);
  }
LABEL_9:
  DamageTargets = BattleActionData__getBuffList(this, -1, v18);
  if ( !DamageTargets )
    goto LABEL_20;
  v22 = DamageTargets[3];
  v23 = DamageTargets;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    while ( v24 < (unsigned int)v22 )
    {
      v25 = v23[v24 + 4];
      if ( v25 )
      {
        if ( !v13 )
          goto LABEL_20;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v13,
          *(_DWORD *)(v25 + 40),
          *(_DWORD *)(v25 + 40),
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      LODWORD(v22) = *((_DWORD *)v23 + 6);
      if ( (__int64)++v24 >= (int)v22 )
        goto LABEL_17;
    }
    goto LABEL_19;
  }
LABEL_17:
  if ( !v13 )
LABEL_20:
    sub_1BCAA3C(DamageTargets, v17);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v13,
           (const MethodInfo_31FCF38 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleActionData__getTotalDamage(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *damagedatalist; // x0
  __int64 v11; // x1
  int32_t v12; // w19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppClass *klass; // x11
  unsigned __int64 namespaze; // x9
  unsigned __int64 v17; // x8
  Il2CppType *p_byval_arg; // x11
  int v19; // w12
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1842C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__, v8, v9);
    byte_4B1842C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  damagedatalist = (System_Collections_Generic_List_object__o *)BattleActionData__get_damagedatalist(this, method);
  if ( !damagedatalist )
    sub_1BCAA3C(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    damagedatalist,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
  v12 = 0;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    if ( !v13 )
      break;
    if ( !v21.fields._current )
      sub_1BCAA3C(v13, v14);
    klass = v21.fields._current[6].klass;
    if ( klass && (int)klass->_1.namespaze >= 1 )
    {
      namespaze = (unsigned int)klass->_1.namespaze;
      v17 = 0LL;
      p_byval_arg = &klass->_1.byval_arg;
      do
      {
        if ( v17 >= namespaze )
          sub_1BCAA44(v13, v14);
        v19 = *((_DWORD *)&p_byval_arg->data + v17++);
        v12 += v19;
      }
      while ( (__int64)v17 < (int)namespaze );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
  return v12;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_BattleActionData_DamageData__o *result; // x0
  PartyOrganizationUtility_o *p_damagedatalist; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B18426 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo, v5, v6);
    byte_4B18426 = 1;
  }
  result = this->fields._damagedatalist;
  if ( !result )
  {
    p_damagedatalist = (PartyOrganizationUtility_o *)&this->fields._damagedatalist;
    v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_BattleActionData_DamageData__TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_DamageData___ctor__);
    p_damagedatalist->klass = (PartyOrganizationUtility_c *)v9;
    sub_1BCA784(p_damagedatalist, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1846F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___, *(_QWORD *)&length, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___, v5, v6);
    byte_4B1846F = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_Int32Enum_(
                                                              0,
                                                              length,
                                                              (const MethodInfo_2F3BF1C *)Method_System_Linq_Enumerable_Repeat_Target_PlayerTypeFlag___);
  v8 = (struct System_Collections_Generic_List_Target_PlayerTypeFlag__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                            v7,
                                                                            (const MethodInfo_2F4F574 *)Method_System_Linq_Enumerable_ToList_Target_PlayerTypeFlag___);
  this->fields.funcTargetPlayerTypeList = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.funcTargetPlayerTypeList,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  __int64 v2; // x2
  BattleActionData_c *v4; // x0
  int32_t type; // w19

  if ( (byte_4B18414 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18414 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
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
  __int64 v2; // x2
  BattleActionData_c *v4; // x0
  int32_t type; // w19

  if ( (byte_4B18411 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18411 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
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

  if ( (byte_4B18468 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__, pairAttackAndTarget, method);
    byte_4B18468 = 1;
  }
  attackSideEffectedSvtIds = this->fields.attackSideEffectedSvtIds;
  if ( !attackSideEffectedSvtIds )
    sub_1BCAA3C(0LL, pairAttackAndTarget);
  v7 = pairAttackAndTarget;
  return System_Collections_Generic_List_KeyValuePair_int__int____Contains(
           attackSideEffectedSvtIds,
           v7,
           (const MethodInfo_34EF954 *)Method_System_Collections_Generic_List_KeyValuePair_int__int___Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData__isReflectedDamageSideEffect(
        BattleActionData_o *this,
        int32_t uniqueSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *damageSideEffectedSvtIds; // x0

  if ( (byte_4B18466 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&uniqueSvtId, method);
    byte_4B18466 = 1;
  }
  damageSideEffectedSvtIds = this->fields.damageSideEffectedSvtIds;
  if ( !damageSideEffectedSvtIds )
    sub_1BCAA3C(0LL, *(_QWORD *)&uniqueSvtId);
  return System_Collections_Generic_List_int___Contains(
           damageSideEffectedSvtIds,
           uniqueSvtId,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActionData__isResurrectionMotion(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0
  int32_t type; // w19

  if ( (byte_4B18412 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18412 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return type == v4->static_fields->TYPE_RESURRECTION;
}


bool __fastcall BattleActionData__isSkill(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0
  int32_t type; // w19

  if ( (byte_4B18413 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18413 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
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
      && (this->fields.state & 0xFFFFFFFD) == 0;
}


bool __fastcall BattleActionData__isSystem(BattleActionData_o *this, const MethodInfo *method)
{
  return this->fields.state == 1;
}


bool __fastcall BattleActionData__isTypeEnemyCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B18450 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18450 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return v4->static_fields->TYPE_ENEMY_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeEnemySpellCutIn(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B18451 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18451 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return v4->static_fields->TYPE_ENEMY_SPELL_CUTIN == this->fields.type;
}


bool __fastcall BattleActionData__isTypeMasterCommandSpell(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0
  int32_t type; // w19

  if ( (byte_4B1844F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B1844F = 1;
  }
  v4 = BattleActionData_TypeInfo;
  type = this->fields.type;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return type == v4->static_fields->TYPE_COMMAND_SPELL;
}


bool __fastcall BattleActionData__isTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B1844B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B1844B = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return v4->static_fields->TYPE_ORDERARTS == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B1844C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B1844C = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return v4->static_fields->TYPE_ORDERBUSTER == this->fields.type;
}


bool __fastcall BattleActionData__isTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B1844D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B1844D = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return v4->static_fields->TYPE_ORDERQUICK == this->fields.type;
}


bool __fastcall BattleActionData__isTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B18447 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18447 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  return v4->static_fields->TYPE_TW == this->fields.type;
}


void __fastcall BattleActionData__reflectServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  void *servantLogicResultList; // x0
  int32_t v11; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w2
  int v16; // w8

  if ( (byte_4B1846D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v7, v8);
    byte_4B1846D = 1;
  }
  BattleActionData__ExecUnappliedProcess(this, data, method);
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_19:
    sub_1BCAA3C(servantLogicResultList, v9);
  if ( *((int *)servantLogicResultList + 6) >= 1 )
  {
    v11 = 0;
    do
    {
      servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                 v11,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      if ( !servantLogicResultList || !data )
        goto LABEL_19;
      ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0LL);
      if ( ServantData )
      {
        v13 = ServantData;
        servantLogicResultList = this->fields.servantLogicResultList;
        if ( !servantLogicResultList )
          goto LABEL_19;
        servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)servantLogicResultList,
                                   v11,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
        if ( !servantLogicResultList )
          goto LABEL_19;
        v14 = *((_DWORD *)servantLogicResultList + 5);
        if ( v14 != -1 && BattleServantData__getNowHp(v13, 0LL) != v14 )
        {
          BattleServantData__setHp(v13, v14, 0, 0LL);
          BattleServantData__updateHp(v13, 0LL);
        }
      }
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_19;
      v15 = *((_DWORD *)servantLogicResultList + 6);
      ++v11;
    }
    while ( v11 < v15 );
    v16 = *((_DWORD *)servantLogicResultList + 7) + 1;
    *((_DWORD *)servantLogicResultList + 6) = 0;
    *((_DWORD *)servantLogicResultList + 7) = v16;
    if ( v15 >= 1 )
      System_Array__Clear(*((System_Array_o **)servantLogicResultList + 2), 0, v15, 0LL);
  }
}


void __fastcall BattleActionData__saveServantLogicResult(
        BattleActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  void *servantLogicResultList; // x0
  int32_t v8; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v10; // x22
  Il2CppObject *Item; // x23

  if ( (byte_4B1846C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
      data,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__, v5, v6);
    byte_4B1846C = 1;
  }
  servantLogicResultList = this->fields.servantLogicResultList;
  if ( !servantLogicResultList )
LABEL_13:
    sub_1BCAA3C(servantLogicResultList, data);
  v8 = 0;
  while ( v8 < *((_DWORD *)servantLogicResultList + 6) )
  {
    servantLogicResultList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)servantLogicResultList,
                               v8,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
    if ( !servantLogicResultList || !data )
      goto LABEL_13;
    ServantData = BattleData__getServantData(data, *((_DWORD *)servantLogicResultList + 4), 0LL);
    if ( ServantData )
    {
      v10 = ServantData;
      servantLogicResultList = this->fields.servantLogicResultList;
      if ( !servantLogicResultList )
        goto LABEL_13;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)servantLogicResultList,
               v8,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Item__);
      servantLogicResultList = (void *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v10->klass->vtable._13_get_resultHp.method)(
                                         v10,
                                         v10->klass->vtable._14_set_resultHp.methodPtr);
      if ( !Item )
        goto LABEL_13;
      HIDWORD(Item[1].klass) = (_DWORD)servantLogicResultList;
    }
    servantLogicResultList = this->fields.servantLogicResultList;
    ++v8;
    if ( !servantLogicResultList )
      goto LABEL_13;
  }
}


void __fastcall BattleActionData__servantLogicResultClear(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_BattleActionData_ServantLogicResultData__o *servantLogicResultList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v9; // w9

  v3 = this;
  if ( (byte_4B1846E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__Clear__, method, v2);
    this = (BattleActionData_o *)sub_1BCA7E0(
                                   &Method_System_Collections_Generic_List_BattleActionData_ServantLogicResultData__get_Count__,
                                   v4,
                                   v5);
    byte_4B1846E = 1;
  }
  servantLogicResultList = v3->fields.servantLogicResultList;
  if ( !servantLogicResultList )
    sub_1BCAA3C(this, method);
  size = servantLogicResultList->fields._size;
  if ( size >= 1 )
  {
    items = (System_Array_o *)servantLogicResultList->fields._items;
    v9 = servantLogicResultList->fields._version + 1;
    servantLogicResultList->fields._size = 0;
    servantLogicResultList->fields._version = v9;
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
      sub_1BCAA3C(this, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x19
  System_Collections_Generic_List_object__o *changeBgList; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  __int64 v21; // x3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  PartyOrganizationUtility_o *p_changeBgList; // x20
  System_Collections_Generic_List_object__o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8

  if ( (byte_4B18440 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_ChangeBg_TypeInfo, *(_QWORD *)&inbgNo, *(_QWORD *)&inTp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo, v15, v16);
    byte_4B18440 = 1;
  }
  v17 = sub_1BCAA2C(BattleActionData_ChangeBg_TypeInfo, *(_QWORD *)&inbgNo, *(_QWORD *)&inTp, *(_QWORD *)&priority);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_DWORD *)(v17 + 28) = inbgNo;
  *(_DWORD *)(v17 + 32) = inTp;
  *(_DWORD *)(v17 + 36) = priority;
  *(_BYTE *)(v17 + 40) = isLinkBgIndividuality;
  changeBgList = (System_Collections_Generic_List_object__o *)this->fields.changeBgList;
  if ( !changeBgList )
  {
    p_changeBgList = (PartyOrganizationUtility_o *)&this->fields.changeBgList;
    v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_ChangeBg__TypeInfo,
                                                         v19,
                                                         v20,
                                                         v21);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_ChangeBg___ctor__);
    p_changeBgList->klass = (PartyOrganizationUtility_c *)v27;
    sub_1BCA784(p_changeBgList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    changeBgList = (System_Collections_Generic_List_object__o *)p_changeBgList->klass;
    if ( !p_changeBgList->klass )
      goto LABEL_10;
  }
  items = changeBgList->fields._items;
  v35 = Method_System_Collections_Generic_List_BattleActionData_ChangeBg__Add__;
  ++changeBgList->fields._version;
  if ( !items )
LABEL_10:
    sub_1BCAA3C(changeBgList, v19);
  size = changeBgList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      changeBgList,
      (Il2CppObject *)v17,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    changeBgList->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v17;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v17, v20, v21, v22, v23, v24, v25);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 endcameraname_low; // x10
  __int64 v20; // x8

  v10 = this;
  if ( (byte_4B18427 & 1) == 0 )
  {
    this = (BattleActionData_o *)sub_1BCA7E0(
                                   &Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
                                   data,
                                   vals);
    byte_4B18427 = 1;
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
    || (v17 = *(_QWORD *)&this->fields.state,
        v18 = Method_System_Collections_Generic_List_BattleActionData_DamageData__Add__,
        ++HIDWORD(this->fields.endcameraname),
        !v17) )
  {
LABEL_21:
    sub_1BCAA3C(this, data);
  }
  endcameraname_low = SLODWORD(this->fields.endcameraname);
  if ( (unsigned int)endcameraname_low >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = v17 + 8 * endcameraname_low;
    LODWORD(this->fields.endcameraname) = endcameraname_low + 1;
    *(_QWORD *)(v20 + 32) = data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)data, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall BattleActionData__setEffect(
        BattleActionData_o *this,
        System_Int32_array *effectList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.effectlist = effectList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.effectlist,
    (int64_t)effectList,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.endcameraname = name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endcameraname,
    (int64_t)name,
    (int64_t)method,
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int v11; // w21
  System_Collections_Generic_List_T__o *funcTargetPlayerTypeList; // x20
  int v13; // w2

  v6 = this;
  if ( (byte_4B18470 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Count__,
      *(_QWORD *)&index,
      isTargetEnemy);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__, v7, v8);
    this = (BattleActionData_o *)sub_1BCA7E0(
                                   &Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__,
                                   v9,
                                   v10);
    byte_4B18470 = 1;
  }
  if ( isTargetEnemy )
    v11 = 2;
  else
    v11 = 1;
  if ( (index & 0x80000000) == 0 )
  {
    funcTargetPlayerTypeList = (System_Collections_Generic_List_T__o *)v6->fields.funcTargetPlayerTypeList;
    if ( !funcTargetPlayerTypeList )
      sub_1BCAA3C(this, *(_QWORD *)&index);
    if ( funcTargetPlayerTypeList->fields._size > index )
    {
      v13 = System_Collections_Generic_List_Int32Enum___get_Item(
              funcTargetPlayerTypeList,
              index,
              (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__get_Item__) | v11;
      System_Collections_Generic_List_Int32Enum___set_Item(
        funcTargetPlayerTypeList,
        index,
        v13,
        (const MethodInfo_35871C8 *)Method_System_Collections_Generic_List_Target_PlayerTypeFlag__set_Item__);
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

  if ( (byte_4B18431 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_HealData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&healPoint);
    byte_4B18431 = 1;
  }
  v15 = sub_1BCAA2C(
          BattleActionData_HealData_TypeInfo,
          *(_QWORD *)&targetId,
          *(_QWORD *)&healPoint,
          *(_QWORD *)&funcIndex);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
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
  BattleActionData__setHealData_43100192(this, (BattleActionData_HealData_o *)v15, vals, v18);
  return (BattleActionData_HealData_o *)v15;
}


void __fastcall BattleActionData__setHealData_43100192(
        BattleActionData_o *this,
        BattleActionData_HealData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  struct System_String_o *StrParam; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( vals )
  {
    if ( !data )
      sub_1BCAA3C(this, 0LL);
    data->fields.isOverCharge = vals->fields._isOverCharge_k__BackingField;
    StrParam = DataVals__GetStrParam(vals, 117, 0LL, 0LL);
    data->fields.popValueText = StrParam;
    sub_1BCA784((PartyOrganizationUtility_o *)&data->fields.popValueText, (int64_t)StrParam, v7, v8, v9, v10, v11, v12);
  }
  BattleActionData__AddHealList(this, data, (const MethodInfo *)vals);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData__setPTTargetId(BattleActionData_o *this, int32_t pttargetId, const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B18415 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&pttargetId, method);
    byte_4B18415 = 1;
  }
  v5 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1BCAA3C(0LL, v6);
  if ( !v5->max_length )
    sub_1BCAA44(v5, v5);
  v5->m_Items[1] = pttargetId;
  this->fields.pttargetIds = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pttargetIds, (int64_t)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BattleActionData__setPTTargetId_43088432(
        BattleActionData_o *this,
        System_Int32_array *pttargetIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.pttargetIds = pttargetIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.pttargetIds,
    (int64_t)pttargetIds,
    (int64_t)method,
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
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4B18434 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_ReplaceMember_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&inUniqueId);
    byte_4B18434 = 1;
  }
  v11 = sub_1BCAA2C(
          BattleActionData_ReplaceMember_TypeInfo,
          *(_QWORD *)&index,
          *(_QWORD *)&inUniqueId,
          *(_QWORD *)&outUniqueId);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  *(_DWORD *)(v11 + 32) = outUniqueId;
  *(_DWORD *)(v11 + 36) = inUniqueId;
  *(_DWORD *)(v11 + 28) = index;
  *(_DWORD *)(v11 + 16) = funcIndex;
  BattleActionData__setReplaceMember_43100716(this, (BattleActionData_ReplaceMember_o *)v11, v14);
}


void __fastcall BattleActionData__setReplaceMember_43100716(
        BattleActionData_o *this,
        BattleActionData_ReplaceMember_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *replacememberlist; // x0
  PartyOrganizationUtility_o *p_replacememberlist; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4B18435 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo, v12, v13);
    byte_4B18435 = 1;
  }
  replacememberlist = (System_Collections_Generic_List_object__o *)this->fields.replacememberlist;
  if ( !replacememberlist )
  {
    p_replacememberlist = (PartyOrganizationUtility_o *)&this->fields.replacememberlist;
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_ReplaceMember__TypeInfo,
                                                         data,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_ReplaceMember___ctor__);
    p_replacememberlist->klass = (PartyOrganizationUtility_c *)v16;
    sub_1BCA784(p_replacememberlist, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    replacememberlist = (System_Collections_Generic_List_object__o *)p_replacememberlist->klass;
    if ( !p_replacememberlist->klass )
      goto LABEL_9;
  }
  items = replacememberlist->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleActionData_ReplaceMember__Add__;
  ++replacememberlist->fields._version;
  if ( !items )
LABEL_9:
    sub_1BCAA3C(replacememberlist, data);
  size = replacememberlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      replacememberlist,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    replacememberlist->fields._size = size + 1;
    v26[4] = (Il2CppClass *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall BattleActionData__setShiftServant(
        BattleActionData_o *this,
        BattleActionData_ShiftServant_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *shiftServantList; // x0
  PartyOrganizationUtility_o *p_shiftServantList; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4B1843E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo, v12, v13);
    byte_4B1843E = 1;
  }
  shiftServantList = (System_Collections_Generic_List_object__o *)this->fields.shiftServantList;
  if ( !shiftServantList )
  {
    p_shiftServantList = (PartyOrganizationUtility_o *)&this->fields.shiftServantList;
    v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_ShiftServant__TypeInfo,
                                                         data,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_ShiftServant___ctor__);
    p_shiftServantList->klass = (PartyOrganizationUtility_c *)v16;
    sub_1BCA784(p_shiftServantList, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    shiftServantList = (System_Collections_Generic_List_object__o *)p_shiftServantList->klass;
    if ( !p_shiftServantList->klass )
      goto LABEL_9;
  }
  items = shiftServantList->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleActionData_ShiftServant__Add__;
  ++shiftServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1BCAA3C(shiftServantList, data);
  size = shiftServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      shiftServantList,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    shiftServantList->fields._size = size + 1;
    v26[4] = (Il2CppClass *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x19
  __int64 v20; // x1
  int64_t v21; // x2
  __int64 v22; // x3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *summonServantList; // x0
  PartyOrganizationUtility_o *p_summonServantList; // x20
  System_Collections_Generic_List_object__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8

  if ( (byte_4B1843B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__,
      *(_QWORD *)&uniqueId,
      *(_QWORD *)&unloadUniqueId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo, v15, v16);
    sub_1BCA7E0(&BattleActionData_SummonServant_TypeInfo, v17, v18);
    byte_4B1843B = 1;
  }
  v19 = sub_1BCAA2C(
          BattleActionData_SummonServant_TypeInfo,
          *(_QWORD *)&uniqueId,
          *(_QWORD *)&unloadUniqueId,
          *(_QWORD *)&funcIndex);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  *(_DWORD *)(v19 + 16) = funcIndex;
  *(_DWORD *)(v19 + 28) = uniqueId;
  *(_DWORD *)(v19 + 32) = unloadUniqueId;
  *(_BYTE *)(v19 + 36) = isEffect;
  *(_DWORD *)(v19 + 40) = callSvtEffectId;
  summonServantList = (System_Collections_Generic_List_object__o *)this->fields.summonServantList;
  if ( !summonServantList )
  {
    p_summonServantList = (PartyOrganizationUtility_o *)&this->fields.summonServantList;
    v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionData_SummonServant__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_SummonServant___ctor__);
    p_summonServantList->klass = (PartyOrganizationUtility_c *)v29;
    sub_1BCA784(p_summonServantList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
    summonServantList = (System_Collections_Generic_List_object__o *)p_summonServantList->klass;
    if ( !p_summonServantList->klass )
      goto LABEL_9;
  }
  items = summonServantList->fields._items;
  v37 = Method_System_Collections_Generic_List_BattleActionData_SummonServant__Add__;
  ++summonServantList->fields._version;
  if ( !items )
LABEL_9:
    sub_1BCAA3C(summonServantList, v20);
  size = summonServantList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      summonServantList,
      (Il2CppObject *)v19,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    summonServantList->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v19, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall BattleActionData__setTargetId(BattleActionData_o *this, int32_t targetId, const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleActionData__setTypeOrderArts(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B18448 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18448 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  this->fields.type = v4->static_fields->TYPE_ORDERARTS;
}


void __fastcall BattleActionData__setTypeOrderBuster(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B18449 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18449 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  this->fields.type = v4->static_fields->TYPE_ORDERBUSTER;
}


void __fastcall BattleActionData__setTypeOrderQuick(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B1844A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B1844A = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  this->fields.type = v4->static_fields->TYPE_ORDERQUICK;
}


void __fastcall BattleActionData__setTypeTA(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActionData_c *v4; // x0

  if ( (byte_4B18446 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18446 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  this->fields.type = v4->static_fields->TYPE_TW;
}


void __fastcall BattleActionData__set_ChangeField(
        BattleActionData_o *this,
        BattleActionData_AfterChangeField_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ChangeField_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ChangeField_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DispMsgList_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DispMsgList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._HpDecreaseFuncTargetHash_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._HpDecreaseFuncTargetHash_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IntervalBuffDict_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IntervalBuffDict_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ShiftGauge_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ShiftGauge_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData__set_TdAfterChangeBgm(
        BattleActionData_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TdAfterChangeBgm_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TdAfterChangeBgm_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._WaitCond_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._WaitCond_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._damagedatalist = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._damagedatalist,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *__fastcall BattleActionData__toCutinName(BattleActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t type; // w8
  Il2CppObject *v13; // x0
  __int64 *v14; // x8
  int v16; // [xsp+Ch] [xbp-24h] BYREF
  int v17; // [xsp+18h] [xbp-18h] BYREF
  int v18; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4B18452 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19067/*"effect/BitEffect/bit_buster{0:00}"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_19066/*"effect/BitEffect/bit_arts{0:00}"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_19074/*"effect/BitEffect/bit_flash02"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19076/*"effect/BitEffect/bit_quick{0:00}"*/, v10, v11);
    byte_4B18452 = 1;
  }
  type = this->fields.type;
  switch ( type )
  {
    case 1:
      v17 = 1;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
      v14 = &StringLiteral_19066/*"effect/BitEffect/bit_arts{0:00}"*/;
      return System_String__Format((System_String_o *)*v14, v13, 0LL);
    case 3:
      v16 = 1;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      v14 = &StringLiteral_19076/*"effect/BitEffect/bit_quick{0:00}"*/;
      return System_String__Format((System_String_o *)*v14, v13, 0LL);
    case 2:
      v18 = 1;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      v14 = &StringLiteral_19067/*"effect/BitEffect/bit_buster{0:00}"*/;
      return System_String__Format((System_String_o *)*v14, v13, 0LL);
    case 4:
      return (System_String_o *)StringLiteral_19074/*"effect/BitEffect/bit_flash02"*/;
    default:
      return 0LL;
  }
}


void __fastcall BattleActionData_AfterChangeField___ctor(
        BattleActionData_AfterChangeField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fieldChange, (int64_t)fieldChange, v5, v6, v7, v8, v9, v10);
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
  __int64 v14; // x3
  Generator_BGFromFieldChangeBGBuff_o *v15; // x22
  int v16; // w21
  System_String_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  v8 = this;
  if ( (byte_4B1849F & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1BCA7E0(&Generator_BGFromFieldChangeBGBuff_TypeInfo, perf, bgName);
    byte_4B1849F = 1;
  }
  if ( !perf
    || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL),
        fieldChange = v8->fields.fieldChange,
        v11 = FieldEnvData,
        v15 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1BCAA2C(
                                                       Generator_BGFromFieldChangeBGBuff_TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14),
        Generator_BGFromFieldChangeBGBuff___ctor(v15, fieldChange, 0LL),
        !v11)
    || (this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._5_AddBackground.method)(
                                                        v11,
                                                        v15,
                                                        2LL,
                                                        v11->klass->vtable._6_AddBGM.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(this, perf);
  }
  v16 = (int)this;
  v17 = System_Int32__ToString((int)this + 28, 0LL);
  *bgName = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)bgName, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = System_Int32__ToString(v16 + 32, 0LL);
  *bgType = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)bgType, (int64_t)v24, v25, v26, v27, v28, v29, v30);
}


System_String_o *__fastcall BattleActionData_AfterChangeField__GetPriorityBgmName(
        BattleActionData_AfterChangeField_o *this,
        BattlePerformance_o *perf,
        System_String_o *defBgmName,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  BattleActionData_AfterChangeField_o *v6; // x20
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  _QWORD *p_image; // x22
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  BattleData_o *data; // x23
  BattleBuffData_FieldChangeData_o *v11; // x24
  BattleFieldEnvironmentData_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  Generator_BGMFromFieldChangeBGBuff_o *v16; // x22
  __int64 v17; // x8

  v4 = defBgmName;
  v6 = this;
  if ( (byte_4B184A0 & 1) == 0 )
  {
    this = (BattleActionData_AfterChangeField_o *)sub_1BCA7E0(
                                                    &Generator_BGMFromFieldChangeBGBuff_TypeInfo,
                                                    perf,
                                                    defBgmName);
    byte_4B184A0 = 1;
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
    v16 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1BCAA2C(
                                                    Generator_BGMFromFieldChangeBGBuff_TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15);
    Generator_BGMFromFieldChangeBGBuff___ctor(v16, data, v11, 0LL);
    if ( !v12 )
      goto LABEL_13;
    this = (BattleActionData_AfterChangeField_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, struct AddBgmArgument_o *, Il2CppMethodPointer))v12->klass->vtable._6_AddBGM.method)(
                                                    v12,
                                                    v16,
                                                    2LL,
                                                    v6->fields.addBgmArg,
                                                    v12->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    p_image = &this->klass;
  }
  if ( !p_image )
LABEL_13:
    sub_1BCAA3C(this, perf);
  v17 = p_image[6];
  if ( v17 )
    return *(System_String_o **)(v17 + 24);
  return v4;
}


void __fastcall BattleActionData_AfterChangeField__SetAddBgmArg(
        BattleActionData_AfterChangeField_o *this,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.addBgmArg = arg;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addBgmArg, (int64_t)arg, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, method);
  return fieldChange->fields.isAllowSubBgmPlaying;
}


void __fastcall BattleActionData_AfterChangeTakeOverField___ctor(
        BattleActionData_AfterChangeTakeOverField_o *this,
        BattleBuffData_FieldChangeData_o *fieldChange,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.fieldChange = fieldChange;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fieldChange, (int64_t)fieldChange, v7, v8, v9, v10, v11, v12);
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
    sub_1BCAA3C(v13, v14);
  }
  ((void (__fastcall *)(BattleActionData_AfterChangeTakeOverField_o *, struct System_String_o *, _QWORD, void *))this->klass->vtable._5_SetTakeOverBgmName.method)(
    this,
    BgmData_k__BackingField->fields._BgmName_k__BackingField,
    (unsigned int)BgmData_k__BackingField->fields._BgmId_k__BackingField,
    this->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_AfterChangeTakeOverField__SetTakeOverBG(
        BattleActionData_AfterChangeTakeOverField_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8

  fieldChange = this->fields.fieldChange;
  if ( !fieldChange )
    sub_1BCAA3C(this, *(_QWORD *)&id);
  fieldChange->fields.bgId = id;
  fieldChange->fields.bgType = type;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_AfterChangeTakeOverField__SetTakeOverBgmName(
        BattleActionData_AfterChangeTakeOverField_o *this,
        System_String_o *bgmName,
        int32_t bgmId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleBuffData_FieldChangeData_o *fieldChange; // x8
  BgmMaster_o *v18; // x22
  struct BattleBuffData_FieldChangeData_o *v19; // x23
  struct BattleBuffData_FieldChangeData_o *v20; // x19

  if ( (byte_4B184A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, bgmName, *(_QWORD *)&bgmId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B184A1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, bgmName);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
  fieldChange = this->fields.fieldChange;
  if ( !fieldChange
    || (fieldChange->fields.bgmName = bgmName,
        v18 = (BgmMaster_o *)Master_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&fieldChange->fields.bgmName,
          (int64_t)bgmName,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        !v18)
    || (v19 = this->fields.fieldChange,
        Master_object = (Il2CppObject *)BgmMaster__GetBgmIdFromFileName(v18, bgmName, bgmId, 0LL),
        !v19)
    || (v19->fields.bgmId = (int)Master_object, (v20 = this->fields.fieldChange) == 0LL) )
  {
    sub_1BCAA3C(Master_object, v10);
  }
  if ( !v20->fields._HasBgmPriorityInVals_k__BackingField )
    v20->fields.bgmPriority = BgmMaster__GetBgmPriority(v18, v20->fields.bgmId, 0, 0LL);
}


void __fastcall BattleActionData_AttackDamageData___ctor(
        BattleActionData_AttackDamageData_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct System_Int32_array **v14; // x8
  struct System_Int32_array *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_4B1847F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    byte_4B1847F = 1;
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, method);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(inited);
  v14 = *(struct System_Int32_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.attackRatio = *v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.attackRatio, (int64_t)v15, v2, v3, v4, v5, v6, v7);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, v16);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_AttackDamageData__GetRatioDamageList(
        BattleActionData_AttackDamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  _BOOL4 v5; // w21
  int32_t v6; // w19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  const MethodInfo *v17; // x4
  System_Collections_Generic_List_int__o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x1
  struct System_Int32_array *attackRatio; // x8
  unsigned __int64 v28; // x26
  int v29; // w24
  __int64 v30; // x27
  int v31; // w28
  _BOOL4 v32; // w10
  int32_t v33; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10

  v5 = minimumDamageFlg;
  v6 = damage;
  if ( (byte_4B1847E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, damageList, *(_QWORD *)&damage);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B1847E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.attackRatio, 0LL);
  if ( IsNullOrEmpty )
  {
    BattleActionData_DamageData__GetRatioDamageList(
      (BattleActionData_DamageData_o *)IsNullOrEmpty,
      damageList,
      v6,
      0,
      v17);
  }
  else
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v14,
                                                      v15,
                                                      v16);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    *damageList = v18;
    sub_1BCA784((PartyOrganizationUtility_o *)damageList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    v25 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                      (System_Collections_Generic_IEnumerable_int__o *)this->fields.attackRatio,
                                                      0LL);
    attackRatio = this->fields.attackRatio;
    if ( !attackRatio )
      goto LABEL_20;
    v28 = 0LL;
    v29 = 0;
    v30 = (int)v25;
    v31 = v6;
    while ( (__int64)v28 < (int)(*(_QWORD *)&attackRatio->max_length - 1) )
    {
      if ( v28 >= (unsigned int)*(_QWORD *)&attackRatio->max_length )
        sub_1BCAA44(v25, v26);
      v25 = *damageList;
      v32 = (int)(attackRatio->m_Items[v28 + 1] * (__int64)v31 / v30) < 1;
      if ( v32 && v5 )
        v33 = 1;
      else
        v33 = attackRatio->m_Items[v28 + 1] * (__int64)v31 / v30;
      if ( v32 && v5 )
        v31 = (v31 - 1) & ~((v31 - 1) >> 31);
      if ( v25 )
      {
        items = v25->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v25->fields._version;
        if ( items )
        {
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v25,
              v33,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            attackRatio = this->fields.attackRatio;
          }
          else
          {
            v25->fields._size = size + 1;
            items->m_Items[size + 1] = v33;
          }
          v29 += v33;
          v6 = (v6 - v33) & ~((v6 - v33) >> 31);
          ++v28;
          if ( attackRatio )
            continue;
        }
      }
      goto LABEL_20;
    }
    v25 = *damageList;
    if ( v6 < 1 && v5 )
      v6 = 1;
    if ( !v25
      || (v37 = v25->fields._items, v38 = Method_System_Collections_Generic_List_int__Add__,
                                    ++v25->fields._version,
                                    !v37) )
    {
LABEL_20:
      sub_1BCAA3C(v25, v26);
    }
    v39 = v25->fields._size;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v25,
        v6,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = v39 + 1;
      v37->m_Items[v39 + 1] = v6;
    }
    v6 += v29;
  }
  return v6;
}


void __fastcall BattleActionData_AttackDamageData__SetAttackRatio(
        BattleActionData_AttackDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  struct System_Int32_array *klass; // x20
  BattleActionData_AttackDamageData_o *v10; // x19
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0

  klass = ratio;
  v10 = this;
  if ( (byte_4B1847D & 1) != 0 )
  {
    if ( ratio )
      goto LABEL_3;
  }
  else
  {
    this = (BattleActionData_AttackDamageData_o *)sub_1BCA7E0(&Method_System_Array_Empty_int___, ratio, method);
    byte_4B1847D = 1;
    if ( klass )
    {
LABEL_3:
      if ( v10 )
        goto LABEL_4;
LABEL_15:
      sub_1BCAA3C(this, ratio);
    }
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, ratio);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13, ratio);
  this = *(BattleActionData_AttackDamageData_o **)(v11[7] + 16LL);
  if ( (BYTE5(this[1].fields.defnplist) & 1) == 0 )
    this = (BattleActionData_AttackDamageData_o *)sub_1C1C6BC(inited);
  klass = (struct System_Int32_array *)this->fields.attackRatio->obj.klass;
  if ( !v10 )
    goto LABEL_15;
LABEL_4:
  v10->fields.attackRatio = klass;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields.attackRatio,
    (int64_t)klass,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v2; // x2
  BattleActionData_c *v4; // x0
  struct BattleActionData_StaticFields *static_fields; // x8
  int32_t addActionOrder; // w9

  if ( (byte_4B18476 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B18476 = 1;
  }
  v4 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
    v4 = BattleActionData_TypeInfo;
  }
  static_fields = v4->static_fields;
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
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_UpHpDataBeforeShift_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B1848E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShiftHpData__Add__, *(_QWORD *)&curGaugeIndex, prevHp);
    sub_1BCA7E0(&BattleAction_UpHpDataBeforeShift_TypeInfo, v9, v10);
    byte_4B1848E = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v12 = (BattleAction_UpHpDataBeforeShift_o *)sub_1BCAA2C(
                                                BattleAction_UpHpDataBeforeShift_TypeInfo,
                                                *(_QWORD *)&curGaugeIndex,
                                                prevHp,
                                                curHp);
  BattleAction_UpHpDataBeforeShift___ctor(v12, curGaugeIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v22 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BCAA3C(v13, v14);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v12,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v12, v15, v16, v17, v18, v19, v20);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetBeforeEffectData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1

  if ( (byte_4B1848A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20189/*"hp_iconeffect_before"*/, v4, v5);
    byte_4B1848A = 1;
  }
  v6 = sub_1BCAA2C(BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2, v3);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v6, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  v15 = StringLiteral_20189/*"hp_iconeffect_before"*/;
  *(_QWORD *)(v6 + 24) = StringLiteral_20189/*"hp_iconeffect_before"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 24), v15, v9, v10, v11, v12, v13, v14);
  return (BattleServantHpShiftComponent_EffectData_o *)v6;
}


BattleAction_ShiftHpData_o *__fastcall BattleActionData_BaseShiftGaugeData__GetHpData(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t hpDataIndex; // w1
  System_Collections_Generic_List_T__o *ShiftHpDataList_k__BackingField; // x0

  if ( (byte_4B1848D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_ShiftHpData___, method, v2);
    byte_4B1848D = 1;
  }
  hpDataIndex = this->fields.hpDataIndex;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_T__o *)this->fields._ShiftHpDataList_k__BackingField;
  this->fields.hpDataIndex = hpDataIndex + 1;
  return (BattleAction_ShiftHpData_o *)BasicHelper__IndexValue_object__49289180(
                                         ShiftHpDataList_k__BackingField,
                                         hpDataIndex,
                                         0LL,
                                         (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_ShiftHpData___);
}


void __fastcall BattleActionData_BaseShiftGaugeData__Init(
        BattleActionData_BaseShiftGaugeData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActionData_BaseShiftGaugeData_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v5 = this;
  if ( (byte_4B1848B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShiftHpData___ctor__, svtData, method);
    this = (BattleActionData_BaseShiftGaugeData_o *)sub_1BCA7E0(
                                                      &System_Collections_Generic_List_ShiftHpData__TypeInfo,
                                                      v6,
                                                      v7);
    byte_4B1848B = 1;
  }
  if ( !svtData )
    sub_1BCAA3C(this, svtData);
  v5->fields._TargetId_k__BackingField = svtData->fields.uniqueId;
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ShiftHpData__TypeInfo,
                                                      svtData,
                                                      method,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShiftHpData___ctor__);
  v5->fields._ShiftHpDataList_k__BackingField = (struct System_Collections_Generic_List_ShiftHpData__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v5->fields._ShiftHpDataList_k__BackingField,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall BattleActionData_BaseShiftGaugeData__InitShiftHpPos(
        BattleActionData_BaseShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleActionData_BaseShiftGaugeData___c_c *v11; // x0
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  System_Action_object__o *_9__34_0; // x20
  Il2CppObject *v14; // x21
  struct BattleActionData_BaseShiftGaugeData___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1848C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ShiftHpData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShiftHpData__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__, v7, v8);
    sub_1BCA7E0(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v9, v10);
    byte_4B1848C = 1;
  }
  this->fields.hpDataIndex = 0;
  v11 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  if ( !BattleActionData_BaseShiftGaugeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_BaseShiftGaugeData___c_TypeInfo, method);
    v11 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
  }
  _9__34_0 = (System_Action_object__o *)v11->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleActionData_BaseShiftGaugeData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__34_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ShiftHpData__TypeInfo, method, v2, v3);
    System_Action_object____ctor(
      _9__34_0,
      v14,
      Method_BattleActionData_BaseShiftGaugeData___c__InitShiftHpPos_b__34_0__,
      0LL);
    static_fields = BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Action_ShiftHpData__o *)_9__34_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__34_0,
      (int64_t)_9__34_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !ShiftHpDataList_k__BackingField )
    sub_1BCAA3C(v11, method);
  System_Collections_Generic_List_object___ForEach(
    ShiftHpDataList_k__BackingField,
    (System_Action_T__o *)_9__34_0,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_ShiftHpData__ForEach__);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ShiftHpDataList_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ShiftHpDataList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1848F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_BaseShiftGaugeData___c_TypeInfo, v1, v2);
    byte_4B1848F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleActionData_BaseShiftGaugeData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields->__9 = (struct BattleActionData_BaseShiftGaugeData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleActionData_BaseShiftGaugeData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  BattleAction_ShiftHpData__InitHpIndex(x, 0LL);
}


void __fastcall BattleActionData_BuffData___ctor(BattleActionData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18486 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v5, v6);
    byte_4B18486 = 1;
  }
  this->fields.statusEffectId = -1;
  this->fields.isUpdateShowBuffAfter = 1;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.removeBuffList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_o *p_effectProcList; // x19
  System_Collections_ICollection_o *effectProcList; // t1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *klass; // x20
  System_Action_object__o *v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B18485 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionEffect_Base__TypeInfo, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_BattleActionData_BuffData___c__DisplayClass57_0__ExecAfterEffectProc_b__0__, v8, v9);
    sub_1BCA7E0(&BattleActionData_BuffData___c__DisplayClass57_0_TypeInfo, v10, v11);
    byte_4B18485 = 1;
  }
  v12 = sub_1BCAA2C(BattleActionData_BuffData___c__DisplayClass57_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  *(_QWORD *)(v12 + 16) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)data, v15, v16, v17, v18, v19, v20);
  effectProcList = (System_Collections_ICollection_o *)this->fields.effectProcList;
  p_effectProcList = (PartyOrganizationUtility_o *)&this->fields.effectProcList;
  if ( BasicHelper__IsNullOrEmpty(effectProcList, 0LL) )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
  v27 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionEffect_Base__TypeInfo, v23, v24, v25);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v12,
    Method_BattleActionData_BuffData___c__DisplayClass57_0__ExecAfterEffectProc_b__0__,
    0LL);
  if ( !klass )
LABEL_7:
    sub_1BCAA3C(v13, v14);
  System_Collections_Generic_List_object___ForEach(
    klass,
    (System_Action_T__o *)v27,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
  p_effectProcList->klass = 0LL;
  sub_1BCA784(p_effectProcList, 0LL, v28, v29, v30, v31, v32, v33);
}


void __fastcall BattleActionData_BuffData__ExecPreActionProc(
        BattleActionData_BuffData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_object__o *effectProcList; // x19
  System_Action_object__o *v25; // x20

  if ( (byte_4B18484 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionEffect_Base__TypeInfo, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_BattleActionData_BuffData___c__DisplayClass56_0__ExecPreActionProc_b__0__, v8, v9);
    sub_1BCA7E0(&BattleActionData_BuffData___c__DisplayClass56_0_TypeInfo, v10, v11);
    byte_4B18484 = 1;
  }
  v12 = sub_1BCAA2C(BattleActionData_BuffData___c__DisplayClass56_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  *(_QWORD *)(v12 + 16) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)data, v15, v16, v17, v18, v19, v20);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.effectProcList, 0LL) )
    return;
  effectProcList = (System_Collections_Generic_List_object__o *)this->fields.effectProcList;
  v25 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionEffect_Base__TypeInfo, v21, v22, v23);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_BattleActionData_BuffData___c__DisplayClass56_0__ExecPreActionProc_b__0__,
    0LL);
  if ( !effectProcList )
LABEL_7:
    sub_1BCAA3C(v13, v14);
  System_Collections_Generic_List_object___ForEach(
    effectProcList,
    (System_Action_T__o *)v25,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleActionEffect_Base__ForEach__);
}


System_Int32_array *__fastcall BattleActionData_BuffData__GetDisplayEffectIds(
        BattleActionData_BuffData_o *this,
        DisplayEffectArgument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *klass; // x0
  PartyOrganizationUtility_o *p_effectProcList; // x20
  struct System_Collections_Generic_List_BattleActionEffect_Base__o *effectProcList; // t1
  System_Collections_Generic_List_object__o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_4B18483 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__, effectProc, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo, v12, v13);
    byte_4B18483 = 1;
  }
  effectProcList = this->fields.effectProcList;
  p_effectProcList = (PartyOrganizationUtility_o *)&this->fields.effectProcList;
  klass = (System_Collections_Generic_List_object__o *)effectProcList;
  if ( !effectProcList )
  {
    v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleActionEffect_Base__TypeInfo,
                                                         effectProc,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionEffect_Base___ctor__);
    p_effectProcList->klass = (PartyOrganizationUtility_c *)v17;
    sub_1BCA784(p_effectProcList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    klass = (System_Collections_Generic_List_object__o *)p_effectProcList->klass;
    if ( !p_effectProcList->klass )
      goto LABEL_9;
  }
  items = klass->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleActionEffect_Base__Add__;
  ++klass->fields._version;
  if ( !items )
LABEL_9:
    sub_1BCAA3C(klass, effectProc);
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)effectProc,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v27[4] = (Il2CppClass *)effectProc;
    sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)effectProc, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall BattleActionData_BuffData__SetCheckHideWhenDeadInfo(
        BattleActionData_BuffData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DataVals_o *v8; // x20
  __int64 v10; // x1
  __int64 v11; // x2

  v8 = vals;
  if ( (byte_4B18482 & 1) == 0 )
  {
    sub_1BCA7E0(&DataVals_TypeInfo, vals, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B18482 = 1;
  }
  this->fields._IsCheckHideWhenDead_k__BackingField = 1;
  if ( !v8 )
  {
    v8 = (DataVals_o *)sub_1BCAA2C(DataVals_TypeInfo, vals, method, v3);
    DataVals___ctor(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  this->fields.dataVals = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dataVals, (int64_t)v8, (int64_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_BuffData__SetSaveTpTurn(
        BattleActionData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct System_Nullable_int__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v6; // 0:x0.8

  if ( (byte_4B18481 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, *(_QWORD *)&value, method);
    byte_4B18481 = 1;
  }
  v6 = (System_Nullable_int__o)&v5;
  v5 = 0LL;
  System_Nullable_int____ctor(v6, value, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_T__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  long double inited; // q0
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  struct System_Int32_array **v28; // x8
  struct System_Int32_array *v29; // x1

  if ( (byte_4B1847C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BuffList_ACTION___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_BuffList_ACTION__TypeInfo, v7, v8);
    byte_4B1847C = 1;
  }
  this->fields.multiatk = 1;
  v9 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                 System_Collections_Generic_List_BuffList_ACTION__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_BuffList_ACTION___ctor__);
  this->fields.attackSideEffectActList = (struct System_Collections_Generic_List_BuffList_ACTION__o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.attackSideEffectActList,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v24 = Method_System_Array_Empty_int___;
  v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v25 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v16);
    v25 = v24[7];
  }
  v26 = *(_QWORD *)(v25 + 16);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v26 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v26, v16);
  v27 = *(_QWORD *)(v24[7] + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C1C6BC(inited);
  v28 = *(struct System_Int32_array ***)(v27 + 184);
  v29 = *v28;
  this->fields._ResetDamageArray_k__BackingField = *v28;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int64_t)v29,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__GetRatioDamageList(
        BattleActionData_DamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4B18478 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, damageList, *(_QWORD *)&damage);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B18478 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    damageList,
                                                    *(_QWORD *)&damage,
                                                    minimumDamageFlg);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v11
    || (items = v11->fields._items,
        v21 = Method_System_Collections_Generic_List_int__Add__,
        ++v11->fields._version,
        !items) )
  {
    sub_1BCAA3C(v12, v13);
  }
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      damage,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = size + 1;
    items->m_Items[size + 1] = damage;
  }
  *damageList = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)damageList, (int64_t)v11, v14, v15, v16, v17, v18, v19);
  return damage;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageData__GetResetDamageValue(
        BattleActionData_DamageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4B18479 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, *(_QWORD *)&index, method);
    byte_4B18479 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields._ResetDamageArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_int__o *v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1847A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&damage, minimumDamageFlg);
    byte_4B1847A = 1;
  }
  v15 = 0LL;
  ((void (__fastcall *)(BattleActionData_DamageData_o *, System_Collections_Generic_List_int__o **, _QWORD, bool, void *))this->klass->vtable._4_GetRatioDamageList.method)(
    this,
    &v15,
    (unsigned int)damage,
    minimumDamageFlg,
    this->klass[1]._1.image);
  if ( !v15 )
    sub_1BCAA3C(0LL, v7);
  v8 = System_Collections_Generic_List_int___ToArray(
         v15,
         (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields._ResetDamageArray_k__BackingField = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall BattleActionData_DamageData__SetEffectFlipProc(
        BattleActionData_DamageData_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  FunctionEntity_o *ActEnemyEffectFlipDataArray; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  ActEnemyEffectFlipProc_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  ActEnemyEffectFlipDataArray = funcEnt;
  if ( (byte_4B1847B & 1) == 0 )
  {
    sub_1BCA7E0(&ActEnemyEffectFlipProc_TypeInfo, funcEnt, method);
    byte_4B1847B = 1;
  }
  if ( ActEnemyEffectFlipDataArray )
    ActEnemyEffectFlipDataArray = (FunctionEntity_o *)FunctionEntity__GetActEnemyEffectFlipDataArray(
                                                        ActEnemyEffectFlipDataArray,
                                                        0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ActEnemyEffectFlipDataArray, 0LL) )
  {
    v8 = (ActEnemyEffectFlipProc_o *)sub_1BCAA2C(ActEnemyEffectFlipProc_TypeInfo, v5, v6, v7);
    ActEnemyEffectFlipProc___ctor(v8, (EffectFlipData_array *)ActEnemyEffectFlipDataArray, 0LL);
    this->fields._EffectFlipProc_k__BackingField = v8;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._EffectFlipProc_k__BackingField,
      (int64_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionData_DamageData__addAttackSideEffectAction(
        BattleActionData_DamageData_o *this,
        int32_t act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_T__o *attackSideEffectActList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4B18477 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BuffList_ACTION__Add__, *(_QWORD *)&act, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BuffList_ACTION__Contains__, v5, v6);
    byte_4B18477 = 1;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_Int32Enum___Contains(
         attackSideEffectActList,
         act,
         (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_BuffList_ACTION__Contains__) )
  {
    return;
  }
  attackSideEffectActList = (System_Collections_Generic_List_T__o *)this->fields.attackSideEffectActList;
  if ( !attackSideEffectActList
    || (items = attackSideEffectActList->fields._items,
        v9 = Method_System_Collections_Generic_List_BuffList_ACTION__Add__,
        ++attackSideEffectActList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BCAA3C(attackSideEffectActList, *(_QWORD *)&act);
  }
  size = attackSideEffectActList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      attackSideEffectActList,
      act,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_1BCAA44(this, index);
  return atknplist->m_Items[index + 1];
}


int32_t __fastcall BattleActionData_DamageData__getAttackCount(
        BattleActionData_DamageData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  damagelist = this->fields.damagelist;
  if ( !damagelist )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA44(this, index);
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
    sub_1BCAA44(this, index);
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
    sub_1BCAA44(this, index);
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
    sub_1BCAA44(this, index);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EffectFlipProc_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EffectFlipProc_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData_DamageData__set_NoDamageAffectedBuff(
        BattleActionData_DamageData_o *this,
        BattleBuffData_BuffData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._NoDamageAffectedBuff_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._NoDamageAffectedBuff_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData_DamageData__set_ResetDamageArray(
        BattleActionData_DamageData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ResetDamageArray_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ResetDamageArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionData_DamageValueFuncDamageData___ctor(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Int32_array *ratio,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)this, (const MethodInfo *)ratio);
  this->fields.damageRates = ratio;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.damageRates, (int64_t)ratio, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActionData_DamageValueFuncDamageData__GetRatioDamageList(
        BattleActionData_DamageValueFuncDamageData_o *this,
        System_Collections_Generic_List_int__o **damageList,
        int32_t damage,
        bool minimumDamageFlg,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_int__o *v27; // x0
  __int64 v28; // x1
  struct System_Int32_array *damageRates; // x21
  __int64 v30; // x8
  unsigned __int64 v31; // x22
  __int64 v32; // x25
  __int64 v33; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v37; // x21
  int v38; // w8
  int32_t v39; // w22
  int32_t Item; // w0
  System_Collections_Generic_List_int__o *v41; // x8
  int32_t v42; // w20
  __int64 v43; // x1
  int32_t v44; // w23
  int32_t v45; // w0

  if ( (byte_4B18480 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, damageList, *(_QWORD *)&damage);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__set_Item__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Math_TypeInfo, v18, v19);
    byte_4B18480 = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    damageList,
                                                    *(_QWORD *)&damage,
                                                    minimumDamageFlg);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  *damageList = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)damageList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__Sum(
                                                    (System_Collections_Generic_IEnumerable_int__o *)this->fields.damageRates,
                                                    0LL);
  damageRates = this->fields.damageRates;
  if ( !damageRates )
    goto LABEL_19;
  v30 = *(_QWORD *)&damageRates->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    v32 = (int)v27;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
        sub_1BCAA44(v27, v28);
      v27 = *damageList;
      if ( !*damageList )
        break;
      v33 = damageRates->m_Items[v31 + 1];
      items = v27->fields._items;
      v35 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !items )
        break;
      size = v27->fields._size;
      v28 = v33 * damage / v32;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          v28,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = size + 1;
        items->m_Items[size + 1] = v28;
      }
      LODWORD(v30) = damageRates->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_13;
    }
LABEL_19:
    sub_1BCAA3C(v27, v28);
  }
LABEL_13:
  v37 = *damageList;
  if ( !*damageList )
    goto LABEL_19;
  v38 = v37->fields._size;
  v39 = v38 - 1;
  if ( v38 >= 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             *damageList,
             v39,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    v41 = *damageList;
    v42 = Item;
    v44 = System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)v41, 0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v43);
    v45 = System_Math__Max_63220196(0, damage - v44, 0LL);
    System_Collections_Generic_List_int___set_Item(
      v37,
      v39,
      v45 + v42,
      (const MethodInfo_358499C *)Method_System_Collections_Generic_List_int__set_Item__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t IsNullOrEmpty; // x0
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  Il2CppObject *Master_object; // x22
  BattleMessageEntity_o *v37; // x2
  const MethodInfo *v38; // x4
  int32_t DefInterval; // w0
  BattleActionData_DisplayMessageData_o *ScriptInt; // x0
  BattleMessageEntity_o *v41; // x2
  const MethodInfo *v42; // x4
  int32_t DefBaseTime; // w0
  BattleActionData_DisplayMessageData_o *v44; // x0
  BattleMessageEntity_o *v45; // x2
  const MethodInfo *v46; // x4
  int32_t DefTimePerChara; // w0
  System_Collections_Generic_IEnumerable_TSource__o *Messages_k__BackingField; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Func_object__int__o *v52; // x23
  int64_t MessageType_k__BackingField; // x2

  if ( (byte_4B1849A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantMaster___, ent, parser);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleActionData_DisplayMessageData_StrlenByDisp__, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_string___, v13, v14);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&string___TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_14614/*"TimePerChara"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3206/*"BaseTime"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_9131/*"MessageType"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_7809/*"Interval"*/, v25, v26);
    byte_4B1849A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !ent )
    goto LABEL_15;
  IsNullOrEmpty = System_String__IsNullOrEmpty(ent->fields.message, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = sub_1BCA888(string___TypeInfo, 0LL);
  }
  else
  {
    if ( !parser )
      goto LABEL_15;
    IsNullOrEmpty = (int64_t)ParseBattleMessage__Replace(parser, ent->fields.message, 0LL);
  }
  v28 = IsNullOrEmpty;
  if ( !this )
LABEL_15:
    sub_1BCAA3C(IsNullOrEmpty, v28);
  this->fields._Messages_k__BackingField = (struct System_String_array *)IsNullOrEmpty;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Messages_k__BackingField,
    IsNullOrEmpty,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantMaster___);
  DefInterval = BattleActionData_DisplayMessageData__GetDefInterval(
                  (BattleActionData_DisplayMessageData_o *)Master_object,
                  (ConstantMaster_o *)Master_object,
                  v37,
                  preMsg,
                  v38);
  ScriptInt = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                         ent,
                                                         (System_String_o *)StringLiteral_7809/*"Interval"*/,
                                                         DefInterval,
                                                         0LL);
  this->fields.interval = (int)ScriptInt;
  DefBaseTime = BattleActionData_DisplayMessageData__GetDefBaseTime(
                  ScriptInt,
                  (ConstantMaster_o *)Master_object,
                  v41,
                  preMsg,
                  v42);
  v44 = (BattleActionData_DisplayMessageData_o *)BattleMessageEntity__GetScriptInt(
                                                   ent,
                                                   (System_String_o *)StringLiteral_3206/*"BaseTime"*/,
                                                   DefBaseTime,
                                                   0LL);
  this->fields.baseTime = (int)v44;
  DefTimePerChara = BattleActionData_DisplayMessageData__GetDefTimePerChara(
                      v44,
                      (ConstantMaster_o *)Master_object,
                      v45,
                      preMsg,
                      v46);
  this->fields.timePerChara = BattleMessageEntity__GetScriptInt(
                                ent,
                                (System_String_o *)StringLiteral_14614/*"TimePerChara"*/,
                                DefTimePerChara,
                                0LL);
  Messages_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Messages_k__BackingField;
  v52 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v49, v50, v51);
  System_Func_object__int____ctor(
    v52,
    (Il2CppObject *)this,
    Method_BattleActionData_DisplayMessageData_StrlenByDisp__,
    0LL);
  this->fields.messageLen = System_Linq_Enumerable__Sum_object_(
                              Messages_k__BackingField,
                              (System_Func_TSource__int__o *)v52,
                              (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_string___);
  if ( preMsg )
    MessageType_k__BackingField = preMsg->fields._MessageType_k__BackingField;
  else
    MessageType_k__BackingField = 0LL;
  this->fields._MessageType_k__BackingField = BattleMessageEntity__GetScriptInt(
                                                ent,
                                                (System_String_o *)StringLiteral_9131/*"MessageType"*/,
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
  if ( (byte_4B1849C & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1BCA7E0(&StringLiteral_2947/*"BATTLE_MSG_BASE_TIME"*/, constMst, ent);
    byte_4B1849C = 1;
  }
  if ( preMsg )
    return preMsg->fields.baseTime;
  if ( !constMst )
    sub_1BCAA3C(this, constMst);
  return ConstantMaster__GetValue_39773052(constMst, (System_String_o *)StringLiteral_2947/*"BATTLE_MSG_BASE_TIME"*/, 1000, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefInterval(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4B1849B & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1BCA7E0(&StringLiteral_2948/*"BATTLE_MSG_INTERVAL"*/, constMst, ent);
    byte_4B1849B = 1;
  }
  if ( preMsg )
    return preMsg->fields.interval;
  if ( !constMst )
    sub_1BCAA3C(this, constMst);
  return ConstantMaster__GetValue_39773052(constMst, (System_String_o *)StringLiteral_2948/*"BATTLE_MSG_INTERVAL"*/, 250, 0LL);
}


int32_t __fastcall BattleActionData_DisplayMessageData__GetDefTimePerChara(
        BattleActionData_DisplayMessageData_o *this,
        ConstantMaster_o *constMst,
        BattleMessageEntity_o *ent,
        BattleActionData_DisplayMessageData_o *preMsg,
        const MethodInfo *method)
{
  if ( (byte_4B1849D & 1) == 0 )
  {
    this = (BattleActionData_DisplayMessageData_o *)sub_1BCA7E0(&StringLiteral_3020/*"BATTLE_TIME_PER_CHARA"*/, constMst, ent);
    byte_4B1849D = 1;
  }
  if ( preMsg )
    return preMsg->fields.timePerChara;
  if ( !constMst )
    sub_1BCAA3C(this, constMst);
  return ConstantMaster__GetValue_39773052(constMst, (System_String_o *)StringLiteral_3020/*"BATTLE_TIME_PER_CHARA"*/, 15, 0LL);
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

  if ( (byte_4B1849E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, text, method);
    byte_4B1849E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text);
  v4 = LocalizationManager__ReplaceNameTag(text, 0, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4, 0LL);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !v4 )
      sub_1BCAA3C(0LL, v5);
    return v4->fields._stringLength;
  }
  return result;
}


float __fastcall BattleActionData_DisplayMessageData__get_DispTime(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleDataDefine_c *v4; // x0
  int32_t baseTime; // w22
  int32_t timePerChara; // w19
  int32_t v7; // w21
  int32_t *p_timePerChara; // t2

  if ( (byte_4B18499 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B18499 = 1;
  }
  v4 = BattleDataDefine_TypeInfo;
  baseTime = this->fields.baseTime;
  p_timePerChara = &this->fields.timePerChara;
  timePerChara = this->fields.timePerChara;
  v7 = p_timePerChara[1];
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v4 = BattleDataDefine_TypeInfo;
  }
  return (float)(baseTime + timePerChara * v7) / v4->static_fields->PERMILLAGE_DENOMINATOR;
}


float __fastcall BattleActionData_DisplayMessageData__get_Interval(
        BattleActionData_DisplayMessageData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleDataDefine_c *v4; // x0
  int32_t interval; // w19

  if ( (byte_4B18498 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B18498 = 1;
  }
  v4 = BattleDataDefine_TypeInfo;
  interval = this->fields.interval;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Messages_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Messages_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_ShiftDownHpData_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B18497 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ShiftHpData__Add__,
      *(_QWORD *)&curGaugeIndex,
      *(_QWORD *)&maxGaugeIconIndex);
    sub_1BCA7E0(&BattleAction_ShiftDownHpData_TypeInfo, v11, v12);
    byte_4B18497 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v14 = (BattleAction_ShiftDownHpData_o *)sub_1BCAA2C(
                                            BattleAction_ShiftDownHpData_TypeInfo,
                                            *(_QWORD *)&curGaugeIndex,
                                            *(_QWORD *)&maxGaugeIconIndex,
                                            prevHp);
  BattleAction_ShiftDownHpData___ctor(v14, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v24 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BCAA3C(v15, v16);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v14,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v14;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_DownShiftGaugeData__GetMainEffectData(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1

  if ( (byte_4B18496 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20188/*"hp_iconeffect"*/, v4, v5);
    byte_4B18496 = 1;
  }
  v6 = sub_1BCAA2C(BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2, v3);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v6, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  v15 = StringLiteral_20188/*"hp_iconeffect"*/;
  *(_QWORD *)(v6 + 24) = StringLiteral_20188/*"hp_iconeffect"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 24), v15, v9, v10, v11, v12, v13, v14);
  return (BattleServantHpShiftComponent_EffectData_o *)v6;
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
    sub_1BCAA3C(this, svtData);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2

  if ( (byte_4B18494 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8859/*"MOTION_SHIFT_GAUGE_DOWN"*/, method, v2);
    byte_4B18494 = 1;
  }
  return (System_String_o *)StringLiteral_8859/*"MOTION_SHIFT_GAUGE_DOWN"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_DownShiftGaugeData__get_PlayMain(
        BattleActionData_DownShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleAction_PlayDownShiftGaugeMain_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B18495 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAction_PlayDownShiftGaugeMain_TypeInfo, method, v2);
    byte_4B18495 = 1;
  }
  v5 = (BattleAction_PlayDownShiftGaugeMain_o *)sub_1BCAA2C(
                                                  BattleAction_PlayDownShiftGaugeMain_TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  BattleAction_PlayDownShiftGaugeMain___ctor(v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayDownShiftGaugeMain_o *, BattleActionData_DownShiftGaugeData_o *, Il2CppMethodPointer))v5->klass->vtable._7_Init.method)(
                                                v5,
                                                this,
                                                v5->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData_EnemyCountChangeData___ctor(
        BattleActionData_EnemyCountChangeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionData_FieldBuffData___ctor(BattleActionData_FieldBuffData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  BattleActionEffect_UpdateFieldInfo_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B18487 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionEffect_UpdateFieldInfo_TypeInfo, method, v2);
    byte_4B18487 = 1;
  }
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)this, method);
  v7 = (BattleActionEffect_UpdateFieldInfo_o *)sub_1BCAA2C(BattleActionEffect_UpdateFieldInfo_TypeInfo, v4, v5, v6);
  BattleActionEffect_UpdateFieldInfo___ctor(v7, 0LL);
  BattleActionData_BuffData__SetActionEffectProc(
    (BattleActionData_BuffData_o *)this,
    (BattleActionEffect_Base_o *)v7,
    v8);
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
  __int64 v8; // x1
  UnityEngine_Object_o *FieldEffectPos; // x23
  __int64 v10; // x1
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  int v14; // s0
  int v17; // s0
  int v20; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x2

  v6 = (BattleActionData_BuffData_o *)this;
  if ( (byte_4B18488 & 1) == 0 )
  {
    this = (BattleActionData_FieldBuffData_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, perf, arg);
    byte_4B18488 = 1;
  }
  if ( !perf )
    goto LABEL_22;
  this = (BattleActionData_FieldBuffData_o *)BattlePerformance__GetFieldPopupPos(perf, 0LL);
  if ( !arg )
    goto LABEL_22;
  v7 = (UnityEngine_Object_o *)this;
  FieldEffectPos = (UnityEngine_Object_o *)BattlePerformance__GetFieldEffectPos(perf, arg->fields.isTreasureDevice, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  this = (BattleActionData_FieldBuffData_o *)UnityEngine_Object__op_Equality(FieldEffectPos, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !arg->fields.isTreasureDevice )
  {
    if ( FieldEffectPos )
      goto LABEL_19;
LABEL_22:
    sub_1BCAA3C(this, perf);
  }
  if ( !v7 )
    goto LABEL_22;
  actorcamera = perf->fields.actorcamera;
  uicamera = perf->fields.uicamera;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v7, 0LL);
  if ( !uicamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Camera__WorldToViewportPoint_69960456(
                                     uicamera,
                                     *(UnityEngine_Vector3_o *)&v14,
                                     0LL);
  if ( !actorcamera )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Camera__ViewportToWorldPoint_69960464(
                                     actorcamera,
                                     *(UnityEngine_Vector3_o *)&v17,
                                     0LL);
  if ( !FieldEffectPos )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)FieldEffectPos,
    *(UnityEngine_Vector3_o *)&v20,
    0LL);
LABEL_19:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldEffectPos, 0LL);
  BattlePerformance__DisplayFieldBuffEffect(perf, gameObject, v6, arg, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v24, v25);
    byte_4B109C1 = 1;
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
    sub_1BCAA3C(this, data);
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
    sub_1BCAA3C(v5, v6);
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
    sub_1BCAA3C(this, perf);
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
    sub_1BCAA3C(this, method);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( !svtData )
    sub_1BCAA3C(this, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadedAssetArgs,
    (int64_t)LoadedAssetArgs_k__BackingField,
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
    sub_1BCAA3C(this, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AfterSvtCache_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AfterSvtCache_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B18475 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_ACTION___TypeInfo, *(_QWORD *)&targetId, sideEffectActs);
    byte_4B18475 = 1;
  }
  v7 = (struct BuffList_ACTION_array *)sub_1BCA888(BuffList_ACTION___TypeInfo, 0LL);
  this->fields.sideEffectActs = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sideEffectActs, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetId = targetId;
  this->fields.sideEffectActs = sideEffectActs;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.sideEffectActs,
    (int64_t)sideEffectActs,
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = this;
  *(_QWORD *)&this->fields.displayType = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.data = data;
  v6 = (BattleActionData_SkillShiftServant_o *)((char *)v6 + 80);
  v6[-1].fields.weapon = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)v6, (int64_t)data, v7, v8, v9, v10, v11, v12);
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
    sub_1BCAA3C(this, svtData);
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
    sub_1BCAA3C(this, svtData);
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
  if ( (byte_4B18489 & 1) == 0 )
  {
    this = (BattleActionData_SkillShiftServant_o *)sub_1BCA7E0(&int___TypeInfo, targetData, method);
    byte_4B18489 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  buffData = v3->fields.buffData;
  this = (BattleActionData_SkillShiftServant_o *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_11;
  v6 = *(_DWORD *)&this->fields.IsForceBuffEffect;
  targetData = (BattleServantData_o *)this;
  if ( !v6 || (this->fields.svtId = 10, v6 == 1) )
    sub_1BCAA44(this, this);
  this->fields.limit = 24;
  if ( !buffData
    || (BattleBuffData__RemoveSkillTypePassiveBuff(buffData, (System_Int32_array *)this, 0LL),
        BattleServantData__setSkillShiftServant(v3, v4->fields.data, v4->fields.npcId, 0LL),
        (data = v4->fields.data) == 0LL)
    || (this = (BattleActionData_SkillShiftServant_o *)data->fields.logic) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(this, targetData);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.changeBgm = inChangeBgm;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.changeBgm, (int64_t)inChangeBgm, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, perf);
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
    sub_1BCAA3C(this, method);
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
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *ShiftHpDataList_k__BackingField; // x19
  BattleAction_ShiftUpHpData_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B18493 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ShiftHpData__Add__,
      *(_QWORD *)&curGaugeIndex,
      *(_QWORD *)&maxGaugeIconIndex);
    sub_1BCA7E0(&BattleAction_ShiftUpHpData_TypeInfo, v11, v12);
    byte_4B18493 = 1;
  }
  ShiftHpDataList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ShiftHpDataList_k__BackingField;
  v14 = (BattleAction_ShiftUpHpData_o *)sub_1BCAA2C(
                                          BattleAction_ShiftUpHpData_TypeInfo,
                                          *(_QWORD *)&curGaugeIndex,
                                          *(_QWORD *)&maxGaugeIconIndex,
                                          prevHp);
  BattleAction_ShiftUpHpData___ctor(v14, curGaugeIndex, maxGaugeIconIndex, prevHp, curHp, 0LL);
  if ( !ShiftHpDataList_k__BackingField
    || (items = ShiftHpDataList_k__BackingField->fields._items,
        v24 = Method_System_Collections_Generic_List_ShiftHpData__Add__,
        ++ShiftHpDataList_k__BackingField->fields._version,
        !items) )
  {
    sub_1BCAA3C(v15, v16);
  }
  size = ShiftHpDataList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ShiftHpDataList_k__BackingField,
      (Il2CppObject *)v14,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    ShiftHpDataList_k__BackingField->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v14;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
}


BattleServantHpShiftComponent_EffectData_o *__fastcall BattleActionData_UpShiftGaugeData__GetMainEffectData(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1

  if ( (byte_4B18492 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20187/*"hp_iconcharge"*/, v4, v5);
    byte_4B18492 = 1;
  }
  v6 = sub_1BCAA2C(BattleServantHpShiftComponent_EffectData_TypeInfo, method, v2, v3);
  BattleServantHpShiftComponent_EffectData___ctor((BattleServantHpShiftComponent_EffectData_o *)v6, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  v15 = StringLiteral_20187/*"hp_iconcharge"*/;
  *(_QWORD *)(v6 + 24) = StringLiteral_20187/*"hp_iconcharge"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 24), v15, v9, v10, v11, v12, v13, v14);
  return (BattleServantHpShiftComponent_EffectData_o *)v6;
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2

  if ( (byte_4B18490 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8860/*"MOTION_SHIFT_GAUGE_UP"*/, method, v2);
    byte_4B18490 = 1;
  }
  return (System_String_o *)StringLiteral_8860/*"MOTION_SHIFT_GAUGE_UP"*/;
}


BattleAction_BasePlayShiftGauge_o *__fastcall BattleActionData_UpShiftGaugeData__get_PlayMain(
        BattleActionData_UpShiftGaugeData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleAction_PlayUpShiftGaugeUpMain_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B18491 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAction_PlayUpShiftGaugeUpMain_TypeInfo, method, v2);
    byte_4B18491 = 1;
  }
  v5 = (BattleAction_PlayUpShiftGaugeUpMain_o *)sub_1BCAA2C(
                                                  BattleAction_PlayUpShiftGaugeUpMain_TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  BattleAction_PlayUpShiftGaugeUpMain___ctor(v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  return (BattleAction_BasePlayShiftGauge_o *)((__int64 (__fastcall *)(BattleAction_PlayUpShiftGaugeUpMain_o *, BattleActionData_UpShiftGaugeData_o *, Il2CppMethodPointer))v5->klass->vtable._7_Init.method)(
                                                v5,
                                                this,
                                                v5->klass->vtable._8_PlayEffectMain.methodPtr);
}


void __fastcall BattleActionData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B184A2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData___c_TypeInfo, v1, v2);
    byte_4B184A2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleActionData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleActionData___c_TypeInfo->static_fields->__9 = (struct BattleActionData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleActionData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  BattleBuffData_BuffData__UpdateInterval(buff, 0LL);
}


BattleActionData_o *__fastcall BattleActionData___c___AddSideEffectAfterAction_b__305_1(
        BattleActionData___c_o *this,
        BattleActionData_o *act,
        const MethodInfo *method)
{
  if ( !act )
    sub_1BCAA3C(this, 0LL);
  return act->fields.afterActionData;
}


bool __fastcall BattleActionData___c___ExecUnappliedProcess_b__123_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


bool __fastcall BattleActionData___c___ExistFuncSideEffectTrigger_b__157_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isFuncSideEffectTrigger;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArrayEx_b__125_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BCAA3C(this, x);
  return x->fields._AddOrder_k__BackingField - y->fields._AddOrder_k__BackingField;
}


int32_t __fastcall BattleActionData___c___GetExecOrderArray_b__124_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        BattleActionData_BaseData_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)x->fields.effectProcList, 0LL);
}


void __fastcall BattleActionData___c___ResetAllCheckDead_b__181_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  x->fields._IsCheckHideWhenDead_k__BackingField = 0;
}


int32_t __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__126_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.functionIndex;
}


void __fastcall BattleActionData___c___SetFuncSideEffectTrigger_b__126_2(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  x->fields.isFuncSideEffectTrigger = 1;
}


bool __fastcall BattleActionData___c___SetFuncTargetAllDead_b__138_1(
        BattleActionData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__isAliveLogic(x, 0, 0LL);
}


void __fastcall BattleActionData___c___SetPopupOnce_b__127_0(
        BattleActionData___c_o *this,
        BattleActionData_BaseData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  x->fields.isOncePop = 1;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__293_1(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.targetId;
}


int32_t __fastcall BattleActionData___c___SetSideEffectCountByTarget_b__293_2(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__158_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateForceBuffEffectAllTrue_b__158_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  x->fields.IsForceBuffEffect = 1;
}


void __fastcall BattleActionData___c___UpdateIntervalBuff_b__148_0(
        BattleActionData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1BCAA3C(this, 0LL);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_0(
        BattleActionData___c_o *this,
        BattleActionData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BCAA3C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BCAA3C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_2(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BCAA3C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndexEx_b__286_3(
        BattleActionData___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  struct System_Int32_array *damagelist; // x8

  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return s->fields.functionIndex;
}


int32_t __fastcall BattleActionData___c___getListFunctionIndex_b__285_1(
        BattleActionData___c_o *this,
        BattleActionData_HealData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4B184A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x, method);
    byte_4B184A3 = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1BCAA3C(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)x;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)x, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall BattleActionData___c__DisplayClass124_0___GetExecOrderArray_b__1(
        BattleActionData___c__DisplayClass124_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *execOrderList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4B184A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__, x, method);
    byte_4B184A4 = 1;
  }
  execOrderList = (System_Collections_Generic_List_object__o *)this->fields.execOrderList;
  if ( !execOrderList
    || (items = execOrderList->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleActionData_BaseData__Add__,
        ++execOrderList->fields._version,
        !items) )
  {
    sub_1BCAA3C(execOrderList, x);
  }
  size = execOrderList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      execOrderList,
      (Il2CppObject *)x,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    execOrderList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)x;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)x, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B184A5 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1BCA7E0(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x,
                                                          method);
    byte_4B184A5 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1BCAA3C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetFuncTargetIds_b__2(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B184A6 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1BCA7E0(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x,
                                                          method);
    byte_4B184A6 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1BCAA3C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleActionData___c__DisplayClass284_0___GetFuncTargetIds_b__4(
        BattleActionData___c__DisplayClass284_0_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  BattleActionData___c__DisplayClass284_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B184A7 & 1) == 0 )
  {
    this = (BattleActionData___c__DisplayClass284_0_o *)sub_1BCA7E0(
                                                          &Method_System_Collections_Generic_HashSet_int__Add__,
                                                          x,
                                                          method);
    byte_4B184A7 = 1;
  }
  if ( !x || (this = (BattleActionData___c__DisplayClass284_0_o *)v4->fields.ids) == 0LL )
    sub_1BCAA3C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields.targetId,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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

  if ( (byte_4B184A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x, method);
    byte_4B184A8 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_36BEAB8 *)Method_System_Nullable_int__get_Value__) > x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__1(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4B184A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x, method);
    byte_4B184A9 = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_36BEAB8 *)Method_System_Nullable_int__get_Value__) == x;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActionData___c__DisplayClass287_0___GetFunctionIndexArrayNearByCuriousFunc_b__2(
        BattleActionData___c__DisplayClass287_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Nullable_int__o p_fields; // 0:x0.8

  if ( (byte_4B184AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_int__get_Value__, *(_QWORD *)&x, method);
    byte_4B184AA = 1;
  }
  p_fields = (System_Nullable_int__o)&this->fields;
  return System_Nullable_int___get_Value(p_fields, (const MethodInfo_36BEAB8 *)Method_System_Nullable_int__get_Value__) < x;
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActionData___c__DisplayClass293_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct BattleActionData_o *_4__this; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x21
  BattleActionData___c_c *v21; // x0
  System_Collections_Generic_List_int__o *targetList; // x20
  System_Func_object__int__o *_9__293_1; // x22
  Il2CppObject *v24; // x23
  struct BattleActionData___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *healdatalist; // x20
  BattleActionData___c_c *v33; // x0
  System_Collections_Generic_List_int__o *v34; // x19
  System_Func_object__int__o *_9__293_2; // x21
  Il2CppObject *v36; // x22
  struct BattleActionData___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  v4 = this;
  if ( (byte_4B184AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___, v5, v6);
    sub_1BCA7E0(&System_Func_BattleActionData_HealData__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_BattleActionData_BuffData__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_1__, v13, v14);
    sub_1BCA7E0(&Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_2__, v15, v16);
    this = (BattleActionData___c__DisplayClass293_0_o *)sub_1BCA7E0(&BattleActionData___c_TypeInfo, v17, v18);
    byte_4B184AB = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.buffdatalist;
  if ( buffdatalist )
  {
    v21 = BattleActionData___c_TypeInfo;
    targetList = v4->fields.targetList;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v21 = BattleActionData___c_TypeInfo;
    }
    _9__293_1 = (System_Func_object__int__o *)v21->static_fields->__9__293_1;
    if ( !_9__293_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21, method);
        v21 = BattleActionData___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v21->static_fields->__9;
      _9__293_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_BattleActionData_BuffData__int__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
      System_Func_object__int____ctor(
        _9__293_1,
        v24,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_1__,
        0LL);
      static_fields = BattleActionData___c_TypeInfo->static_fields;
      static_fields->__9__293_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__293_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__293_1,
        (int64_t)_9__293_1,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    this = (BattleActionData___c__DisplayClass293_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          buffdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__293_1,
                                                          (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    if ( !targetList )
      goto LABEL_23;
    System_Collections_Generic_List_int___AddRange(
      targetList,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_23;
  }
  healdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.healdatalist;
  if ( healdatalist )
  {
    v33 = BattleActionData___c_TypeInfo;
    v34 = v4->fields.targetList;
    if ( !BattleActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData___c_TypeInfo, method);
      v33 = BattleActionData___c_TypeInfo;
    }
    _9__293_2 = (System_Func_object__int__o *)v33->static_fields->__9__293_2;
    if ( !_9__293_2 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33, method);
        v33 = BattleActionData___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__293_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_BattleActionData_HealData__int__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
      System_Func_object__int____ctor(
        _9__293_2,
        v36,
        Method_BattleActionData___c__SetSideEffectCountByTarget_b__293_2__,
        0LL);
      v37 = BattleActionData___c_TypeInfo->static_fields;
      v37->__9__293_2 = (struct System_Func_BattleActionData_HealData__int__o *)_9__293_2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v37->__9__293_2, (int64_t)_9__293_2, v38, v39, v40, v41, v42, v43);
    }
    this = (BattleActionData___c__DisplayClass293_0_o *)System_Linq_Enumerable__Select_object__int_(
                                                          healdatalist,
                                                          (System_Func_TSource__TResult__o *)_9__293_2,
                                                          (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleActionData_HealData__int___);
    if ( v34 )
    {
      System_Collections_Generic_List_int___AddRange(
        v34,
        (System_Collections_Generic_IEnumerable_T__o *)this,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      return;
    }
LABEL_23:
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, act);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueSvtId;
}