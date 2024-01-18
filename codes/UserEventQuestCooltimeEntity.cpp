void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188B93 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188B93 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4188B90 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, *(_QWORD *)&eventId);
    byte_4188B90 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_17331D8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x19
  System_String_o *v45; // x19
  __int64 v47; // x0
  __int64 v48; // x0

  v2 = (int)this;
  if ( (byte_4188B91 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v6);
    byte_4188B91 = 1;
  }
  v7 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0LL);
  if ( !v7 )
LABEL_28:
    sub_B2C434(Instance, v9);
  v16 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B2C41C(Instance, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( !v7->max_length )
    goto LABEL_26;
  v7->m_Items[0] = (System_String_o *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  Instance = (DataManager_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v23 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_26;
  v7->m_Items[1] = (System_String_o *)v23;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0LL);
  v30 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B2C41C(Instance, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_26;
  v7->m_Items[2] = (System_String_o *)v30;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  Instance = (DataManager_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v7->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v37 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_26;
  v7->m_Items[3] = (System_String_o *)v37;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0LL);
  v44 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B2C41C(Instance, v7->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_27:
      v48 = sub_B2C454(Instance);
      sub_B2C400(v48, 0LL);
    }
  }
  if ( v7->max_length <= 4 )
  {
LABEL_26:
    v47 = sub_B2C460(Instance);
    sub_B2C400(v47, 0LL);
  }
  v7->m_Items[4] = (System_String_o *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  v45 = System_String__Concat_44385656(v7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
  if ( !Instance )
    goto LABEL_28;
  return (EventQuestCooltimeEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                         (DataMasterBase_o *)Instance,
                                         v45,
                                         (const MethodInfo_1734194 *)Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188B92 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188B92 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}