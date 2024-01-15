void __fastcall UserEventQuestCooltimeEntity___ctor(UserEventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FABB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FABB5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventQuestCooltimeEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_40FABB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int__int__int___, *(_QWORD *)&eventId);
    byte_40FABB2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           eventId,
           questId,
           phase,
           (const MethodInfo_18C2A70 *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
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
  __int64 v2; // x2
  int v3; // w19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_array *v8; // x20
  System_String_o *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x19
  System_String_o *v40; // x19
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0

  v3 = (int)this;
  if ( (byte_40FABB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v7);
    byte_40FABB3 = 1;
  }
  v8 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v2);
  v9 = System_Int32__ToString(v3 + 24, 0LL);
  if ( !v8 )
LABEL_28:
    sub_B170D4();
  v17 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_27;
  }
  if ( !v8->max_length )
    goto LABEL_26;
  v8->m_Items[0] = (System_String_o *)v17;
  sub_B16F98((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  v9 = (System_String_o *)StringLiteral_1223/*":"*/;
  if ( StringLiteral_1223/*":"*/ )
  {
    v9 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_27;
    v10 = (System_Int32_array **)StringLiteral_1223/*":"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_26;
  v8->m_Items[1] = (System_String_o *)v10;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[1], v10, v11, v18, v19, v20, v21, v22);
  v9 = System_Int32__ToString(v3 + 28, 0LL);
  v28 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_27;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_26;
  v8->m_Items[2] = (System_String_o *)v28;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[2], v28, v11, v23, v24, v25, v26, v27);
  v9 = (System_String_o *)StringLiteral_1223/*":"*/;
  if ( StringLiteral_1223/*":"*/ )
  {
    v9 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_27;
    v10 = (System_Int32_array **)StringLiteral_1223/*":"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_26;
  v8->m_Items[3] = (System_String_o *)v10;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[3], v10, v11, v29, v30, v31, v32, v33);
  v9 = System_Int32__ToString(v3 + 32, 0LL);
  v39 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_27:
      sub_B170F4(v9);
      sub_B170A0();
    }
  }
  if ( v8->max_length <= 4 )
  {
LABEL_26:
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  v8->m_Items[4] = (System_String_o *)v39;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[4], v39, v11, v34, v35, v36, v37, v38);
  v40 = System_String__Concat_43823856(v8, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  return (EventQuestCooltimeEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                         MasterData_WarQuestSelectionMaster,
                                         v40,
                                         (const MethodInfo_18C3A2C *)Method_DataMasterBase_getEntityFromKey_EventQuestCooltimeEntity___);
}


QuestEntity_o *__fastcall UserEventQuestCooltimeEntity__GetQuestEntity(
        UserEventQuestCooltimeEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FABB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FABB4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return QuestMaster__getQuestEntity(MasterData_WarQuestSelectionMaster, this->fields.questId, 0LL);
}