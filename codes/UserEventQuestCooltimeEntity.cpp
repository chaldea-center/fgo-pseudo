void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421369B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_421369B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4213698 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, *(_QWORD *)&eventId);
    byte_4213698 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_1713D94 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePrimaryKey(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return UserEventQuestCooltimeEntity__CreatePK(
           this->fields.userId,
           this->fields.eventId,
           this->fields.questId,
           this->fields.phase,
           v2);
}


EventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeEntity__GetMasterEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array *v7; // x20
  DataManager_o *Instance; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x19
  System_String_o *v44; // x19
  __int64 v46; // x0
  __int64 v47; // x0

  v2 = (int)this;
  if ( (byte_4213699 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&string___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v6);
    byte_4213699 = 1;
  }
  v7 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0LL);
  if ( !v7 )
LABEL_28:
    sub_B0D97C(Instance);
  v15 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( !v7->max_length )
    goto LABEL_26;
  v7->m_Items[0] = (System_String_o *)v15;
  sub_B0D840((BattleServantConfConponent_o *)v7->m_Items, v15, v9, v10, v11, v12, v13, v14);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v22 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_26;
  v7->m_Items[1] = (System_String_o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0LL);
  v29 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_26;
  v7->m_Items[2] = (System_String_o *)v29;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  Instance = (DataManager_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v36 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_26;
  v7->m_Items[3] = (System_String_o *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0LL);
  v43 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B0D964(Instance, v7->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_27:
      v47 = sub_B0D99C();
      sub_B0D948(v47, 0LL);
    }
  }
  if ( v7->max_length <= 4 )
  {
LABEL_26:
    v46 = sub_B0D9A8(Instance);
    sub_B0D948(v46, 0LL);
  }
  v7->m_Items[4] = (System_String_o *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  v44 = System_String__Concat_43930028(v7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
  if ( !Instance )
    goto LABEL_28;
  return (EventQuestCooltimeEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                         (DataMasterBase_o *)Instance,
                                         v44,
                                         (const MethodInfo_1714D50 *)Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0

  if ( (byte_421369A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_421369A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}