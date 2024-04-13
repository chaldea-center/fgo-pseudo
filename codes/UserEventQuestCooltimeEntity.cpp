void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E70AF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_42E70AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, eventId, questId, *(_QWORD *)&phase);
    byte_42E70AC = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_1AE3A38 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w19
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
  System_String_array *v17; // x20
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x19
  System_String_o *v55; // x19
  __int64 v57; // x0
  __int64 v58; // x0

  v4 = (int)this;
  if ( (byte_42E70AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v14, v15, v16);
    byte_42E70AD = 1;
  }
  v17 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v4 + 24, 0LL);
  if ( !v17 )
LABEL_28:
    sub_B5D69C(Instance, v19);
  v26 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( !v17->max_length )
    goto LABEL_26;
  v17->m_Items[0] = (System_String_o *)v26;
  sub_B5D560((BattleServantConfConponent_o *)v17->m_Items, v26, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v33 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_26;
  v17->m_Items[1] = (System_String_o *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  Instance = (DataManager_o *)System_Int32__ToString(v4 + 28, 0LL);
  v40 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_26;
  v17->m_Items[2] = (System_String_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  Instance = (DataManager_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v47 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_26;
  v17->m_Items[3] = (System_String_o *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  Instance = (DataManager_o *)System_Int32__ToString(v4 + 32, 0LL);
  v54 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B5D684(Instance, v17->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_27:
      v58 = sub_B5D6BC();
      sub_B5D668(v58, 0LL);
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_26:
    v57 = sub_B5D6C8(Instance);
    sub_B5D668(v57, 0LL);
  }
  v17->m_Items[4] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  v55 = System_String__Concat_44657912(v17, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
  if ( !Instance )
    goto LABEL_28;
  return (EventQuestCooltimeEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                         (DataMasterBase_o *)Instance,
                                         v55,
                                         (const MethodInfo_1AE49F4 *)Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E70AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E70AE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}