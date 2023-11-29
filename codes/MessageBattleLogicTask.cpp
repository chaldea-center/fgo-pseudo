void __fastcall MessageBattleLogicTask___ctor(MessageBattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.value = -1;
  BaseAiActBattleLogicTask___ctor((BaseAiActBattleLogicTask_o *)this, 56, 0LL);
}


BattleActionData_o *__fastcall MessageBattleLogicTask__CreateInitActionData(
        MessageBattleLogicTask_o *this,
        BattleMessageEntity_o *msgEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActionData_o *v7; // x21
  int32_t ActorId; // w0
  BattleActionData_o *result; // x0

  if ( (byte_40F7BA3 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, msgEnt);
    byte_40F7BA3 = 1;
  }
  v7 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, msgEnt, method, v3, v4);
  BattleActionData___ctor(v7, 0LL);
  ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0LL);
  if ( !v7 || (v7->fields.actorId = ActorId, !msgEnt) )
    sub_B170D4();
  v7->fields.motionId = msgEnt->fields.motionId;
  v7->fields.state = BattleLogicTask__ConvertActorToActionState((BattleLogicTask_o *)this, 0LL);
  result = v7;
  v7->fields.isForcedSpeedOne = this->fields.isForcedSpeedOne;
  return result;
}


void __fastcall MessageBattleLogicTask__Init(
        MessageBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  if ( !aiActEnt || (this->fields.isMsgGroup = aiActEnt->fields.type == 73, !aiEnt) )
    sub_B170D4();
  this->fields.value = AiBaseEntity__getActionValue(aiEnt, 0LL);
}


BattleActionData_o *__fastcall MessageBattleLogicTask__MakeActionData(
        MessageBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattleData_o *data; // x8
  DrawLotsDisplayMessage_o *DrawLotsDispMsg_k__BackingField; // x0
  int32_t value; // w21
  BattleMessageMaster_o *Master_WarQuestSelectionMaster; // x0
  BattleMessageEntity_array *Entities; // x21
  BattleActionData_DisplayMessageData_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  BattleActionData_o *InitActionData; // x0
  BattleActionData_o *v15; // x22
  int max_length; // w8
  __int64 v17; // x25
  BattleActionData_DisplayMessageData_o *v18; // x23
  BattleMessageEntity_o *v19; // x24
  int motionId; // w8
  ParseBattleMessage_o *ParseBattleMsg; // x0
  BattlePerformance_o *perf; // x0
  const MethodInfo *v23; // x2
  BattlePerformance_o *v24; // x0

  if ( (byte_40F7BA2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMessageMaster___, logic);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40F7BA2 = 1;
  }
  if ( this->fields.isMsgGroup )
  {
    if ( !logic )
      goto LABEL_32;
    data = logic->fields.data;
    if ( !data )
      goto LABEL_32;
    DrawLotsDispMsg_k__BackingField = data->fields._DrawLotsDispMsg_k__BackingField;
    if ( !DrawLotsDispMsg_k__BackingField )
      goto LABEL_32;
    value = DrawLotsDisplayMessage__DrawLots(DrawLotsDispMsg_k__BackingField, this->fields.value, -1, 0LL);
  }
  else
  {
    value = this->fields.value;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleMessageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_32:
    sub_B170D4();
  Entities = BattleMessageMaster__GetEntities(Master_WarQuestSelectionMaster, value, 0LL);
  IsNullOrEmpty = (BattleActionData_DisplayMessageData_o *)BasicHelper__IsNullOrEmpty(
                                                             (System_Collections_ICollection_o *)Entities,
                                                             0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( Entities )
    {
      if ( !Entities->max_length )
      {
LABEL_33:
        sub_B17100(IsNullOrEmpty, v12, v13);
        sub_B170A0();
      }
      InitActionData = MessageBattleLogicTask__CreateInitActionData(this, Entities->m_Items[0], v13);
      if ( logic )
      {
        v15 = InitActionData;
        IsNullOrEmpty = (BattleActionData_DisplayMessageData_o *)((__int64 (__fastcall *)(MessageBattleLogicTask_o *, BattleActionData_o *, struct BattlePerformance_o *, Il2CppMethodPointer))this->klass->vtable._4_InterruptAction.method)(
                                                                   this,
                                                                   InitActionData,
                                                                   logic->fields.perf,
                                                                   this->klass->vtable._5_MakeActionTask.methodPtr);
        max_length = Entities->max_length;
        if ( max_length >= 1 )
        {
          v17 = 0LL;
          v18 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v17 >= max_length )
              goto LABEL_33;
            v19 = Entities->m_Items[v17];
            if ( !v19 )
              goto LABEL_32;
            motionId = v19->fields.motionId;
            if ( motionId < 1 )
              goto LABEL_27;
            if ( !v15 )
              goto LABEL_32;
            if ( v15->fields.motionId != motionId )
              break;
            ParseBattleMsg = BattleLogic__get_ParseBattleMsg(logic, 0LL);
LABEL_28:
            IsNullOrEmpty = BattleActionData__AddDisplayMessage(v15, v19, ParseBattleMsg, v18, 0LL);
            max_length = Entities->max_length;
            ++v17;
            v18 = IsNullOrEmpty;
            if ( (int)v17 >= max_length )
              goto LABEL_29;
          }
          perf = logic->fields.perf;
          if ( !perf )
            goto LABEL_32;
          BattlePerformance__addActionData_18918748(perf, v15, 0LL);
          v15 = MessageBattleLogicTask__CreateInitActionData(this, v19, v23);
LABEL_27:
          ParseBattleMsg = BattleLogic__get_ParseBattleMsg(logic, 0LL);
          if ( !v15 )
            goto LABEL_32;
          goto LABEL_28;
        }
LABEL_29:
        v24 = logic->fields.perf;
        if ( v24 )
        {
          BattlePerformance__addActionData_18918748(v24, v15, 0LL);
          return 0LL;
        }
      }
    }
    goto LABEL_32;
  }
  return 0LL;
}