void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4350675 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4350675 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4350672 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
    byte_4350672 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_1CA2D8C *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  System_String_array *v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
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
  System_Int32_array **v40; // x19
  System_String_o *v41; // x19
  __int64 v43; // x0
  __int64 v44; // x0

  v2 = (int)this;
  if ( (byte_4350673 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_B70694(&Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4350673 = 1;
  }
  v3 = (System_String_array *)sub_B706AC(string___TypeInfo, 5LL);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 24, 0LL);
  if ( !v3 )
LABEL_28:
    sub_B7076C(Instance, v5);
  v12 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v3->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( !v3->max_length )
    goto LABEL_26;
  v3->m_Items[0] = (System_String_o *)v12;
  sub_B70630((BattleServantConfConponent_o *)v3->m_Items, v12, v6, v7, v8, v9, v10, v11);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v3->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v19 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_26;
  v3->m_Items[1] = (System_String_o *)v19;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[1], v19, v13, v14, v15, v16, v17, v18);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 28, 0LL);
  v26 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v3->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_26;
  v3->m_Items[2] = (System_String_o *)v26;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[2], v26, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)StringLiteral_1250/*":"*/;
  if ( StringLiteral_1250/*":"*/ )
  {
    Instance = (DataManager_o *)sub_B70754(StringLiteral_1250/*":"*/, v3->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_27;
    v33 = (System_Int32_array **)StringLiteral_1250/*":"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_26;
  v3->m_Items[3] = (System_String_o *)v33;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[3], v33, v27, v28, v29, v30, v31, v32);
  Instance = (DataManager_o *)System_Int32__ToString(v2 + 32, 0LL);
  v40 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (DataManager_o *)sub_B70754(Instance, v3->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_27:
      v44 = sub_B7078C();
      sub_B70738(v44, 0LL);
    }
  }
  if ( v3->max_length <= 4 )
  {
LABEL_26:
    v43 = sub_B70798(Instance);
    sub_B70738(v43, 0LL);
  }
  v3->m_Items[4] = (System_String_o *)v40;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[4], v40, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Concat_44838292(v3, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
  if ( !Instance )
    goto LABEL_28;
  return (EventQuestCooltimeEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                         (DataMasterBase_o *)Instance,
                                         v41,
                                         (const MethodInfo_1CA3D48 *)Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4350674 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350674 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.questId, 0LL);
}