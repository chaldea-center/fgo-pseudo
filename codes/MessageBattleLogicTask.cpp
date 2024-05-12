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
  BattleActionData_o *v5; // x21
  __int64 ActorId; // x0
  __int64 v7; // x1
  BattleActionData_o *result; // x0

  if ( (byte_4389AD3 & 1) == 0 )
  {
    sub_B775C4(&BattleActionData_TypeInfo);
    byte_4389AD3 = 1;
  }
  v5 = (BattleActionData_o *)sub_B77694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v5, 0LL);
  ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0LL);
  if ( !v5 || (v5->fields.actorId = ActorId, !msgEnt) )
    sub_B7769C(ActorId, v7);
  v5->fields.motionId = msgEnt->fields.motionId;
  v5->fields.state = BattleLogicTask__ConvertActorToActionState((BattleLogicTask_o *)this, 0LL);
  result = v5;
  v5->fields.isForcedSpeedOne = this->fields.isForcedSpeedOne;
  return result;
}


void __fastcall MessageBattleLogicTask__Init(
        MessageBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  if ( !aiActEnt || (this->fields.isMsgGroup = aiActEnt->fields.type == 73, !aiEnt) )
    sub_B7769C(this, aiActEnt);
  this->fields.value = AiBaseEntity__getActionValue(aiEnt, 0LL);
}


BattleActionData_o *__fastcall MessageBattleLogicTask__MakeActionData(
        MessageBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v4; // x20
  struct BattleData_o *data; // x8
  int32_t value; // w21
  BattleMessageEntity_array *Entities; // x21
  const MethodInfo *v8; // x2
  BattleActionData_o *InitActionData; // x22
  int max_length; // w8
  __int64 v11; // x25
  BattleActionData_DisplayMessageData_o *v12; // x23
  BattleMessageEntity_o *v13; // x24
  int motionId; // w8
  const MethodInfo *v15; // x2
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4389AD2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BattleMessageMaster___);
    this = (MessageBattleLogicTask_o *)sub_B775C4(&DataManager_TypeInfo);
    byte_4389AD2 = 1;
  }
  if ( v4->fields.isMsgGroup )
  {
    if ( !logic )
      goto LABEL_32;
    data = logic->fields.data;
    if ( !data )
      goto LABEL_32;
    this = (MessageBattleLogicTask_o *)data->fields._DrawLotsDispMsg_k__BackingField;
    if ( !this )
      goto LABEL_32;
    value = DrawLotsDisplayMessage__DrawLots((DrawLotsDisplayMessage_o *)this, v4->fields.value, -1, 0LL);
  }
  else
  {
    value = v4->fields.value;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MessageBattleLogicTask_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !this )
LABEL_32:
    sub_B7769C(this, logic);
  Entities = BattleMessageMaster__GetEntities((BattleMessageMaster_o *)this, value, 0LL);
  this = (MessageBattleLogicTask_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Entities )
    {
      if ( !Entities->max_length )
      {
LABEL_33:
        v17 = sub_B776C8(this);
        sub_B77668(v17, 0LL);
      }
      this = (MessageBattleLogicTask_o *)MessageBattleLogicTask__CreateInitActionData(v4, Entities->m_Items[0], v8);
      if ( logic )
      {
        InitActionData = (BattleActionData_o *)this;
        this = (MessageBattleLogicTask_o *)((__int64 (__fastcall *)(MessageBattleLogicTask_o *, MessageBattleLogicTask_o *, struct BattlePerformance_o *, Il2CppMethodPointer))v4->klass->vtable._4_InterruptAction.method)(
                                             v4,
                                             this,
                                             logic->fields.perf,
                                             v4->klass->vtable._5_MakeActionTask.methodPtr);
        max_length = Entities->max_length;
        if ( max_length >= 1 )
        {
          v11 = 0LL;
          v12 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v11 >= max_length )
              goto LABEL_33;
            v13 = Entities->m_Items[v11];
            if ( !v13 )
              goto LABEL_32;
            motionId = v13->fields.motionId;
            if ( motionId < 1 )
              goto LABEL_27;
            if ( !InitActionData )
              goto LABEL_32;
            if ( InitActionData->fields.motionId != motionId )
              break;
            this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
LABEL_28:
            this = (MessageBattleLogicTask_o *)BattleActionData__AddDisplayMessage(
                                                 InitActionData,
                                                 v13,
                                                 (ParseBattleMessage_o *)this,
                                                 v12,
                                                 0LL);
            max_length = Entities->max_length;
            ++v11;
            v12 = (BattleActionData_DisplayMessageData_o *)this;
            if ( (int)v11 >= max_length )
              goto LABEL_29;
          }
          this = (MessageBattleLogicTask_o *)logic->fields.perf;
          if ( !this )
            goto LABEL_32;
          BattlePerformance__addActionData_18230268((BattlePerformance_o *)this, InitActionData, 0LL);
          InitActionData = MessageBattleLogicTask__CreateInitActionData(v4, v13, v15);
LABEL_27:
          this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
          if ( !InitActionData )
            goto LABEL_32;
          goto LABEL_28;
        }
LABEL_29:
        this = (MessageBattleLogicTask_o *)logic->fields.perf;
        if ( this )
        {
          BattlePerformance__addActionData_18230268((BattlePerformance_o *)this, InitActionData, 0LL);
          return 0LL;
        }
      }
    }
    goto LABEL_32;
  }
  return 0LL;
}