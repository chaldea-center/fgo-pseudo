void MessageBattleLogicTask___ctor(MessageBattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.value = -1;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 56;
}


BattleActionData_o *MessageBattleLogicTask__CreateInitActionData(
        MessageBattleLogicTask_o *this,
        BattleMessageEntity_o *msgEnt,
        const MethodInfo *method)
{
  BattleActionData_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *actorIdlist; // x8
  int v10; // w8
  BattleActionData_o *result; // x0

  if ( (byte_4C2A452 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    byte_4C2A452 = 1;
  }
  v5 = (BattleActionData_o *)sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v5, 0);
  actorIdlist = this->fields.actorIdlist;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C2D6F4(v6, v7, v8);
    v10 = actorIdlist->m_Items[0];
    if ( !v5 )
LABEL_10:
      sub_1C2D6EC(v6, v7);
  }
  else
  {
    v10 = -1;
    if ( !v5 )
      goto LABEL_10;
  }
  v5->fields.actorId = v10;
  if ( !msgEnt )
    goto LABEL_10;
  result = v5;
  v5->fields.motionId = msgEnt->fields.motionId;
  v5->fields.state = 2 * ((this->fields.actortype & 0xFFFFFFFB) == 1);
  v5->fields.isForcedSpeedOne = this->fields.isForcedSpeedOne;
  return result;
}


void MessageBattleLogicTask__Init(
        MessageBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  if ( !aiActEnt || (this->fields.isMsgGroup = aiActEnt->fields.type == 73, !aiEnt) )
    sub_1C2D6EC(this, aiActEnt);
  this->fields.value = AiBaseEntity__getActionValue(aiEnt, 0);
}


BattleActionData_o *MessageBattleLogicTask__MakeActionData(
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

  v4 = this;
  if ( (byte_4C2A451 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BattleMessageMaster___);
    this = (MessageBattleLogicTask_o *)sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2A451 = 1;
  }
  if ( v4->fields.isMsgGroup )
  {
    if ( !logic )
      goto LABEL_31;
    data = logic->fields.data;
    if ( !data )
      goto LABEL_31;
    this = (MessageBattleLogicTask_o *)data->fields._DrawLotsDispMsg_k__BackingField;
    if ( !this )
      goto LABEL_31;
    value = DrawLotsDisplayMessage__DrawLots((DrawLotsDisplayMessage_o *)this, v4->fields.value, -1, 0);
  }
  else
  {
    value = v4->fields.value;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MessageBattleLogicTask_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !this )
LABEL_31:
    sub_1C2D6EC(this, logic);
  Entities = BattleMessageMaster__GetEntities((BattleMessageMaster_o *)this, value, 0);
  this = (MessageBattleLogicTask_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Entities )
    {
      if ( !LODWORD(Entities->max_length) )
LABEL_32:
        sub_1C2D6F4(this, logic, v8);
      this = (MessageBattleLogicTask_o *)MessageBattleLogicTask__CreateInitActionData(v4, Entities->m_Items[0], v8);
      if ( logic )
      {
        InitActionData = (BattleActionData_o *)this;
        this = (MessageBattleLogicTask_o *)((__int64 (__fastcall *)(MessageBattleLogicTask_o *, MessageBattleLogicTask_o *, struct BattlePerformance_o *, const MethodInfo *))v4->klass->vtable._4_InterruptAction.methodPtr)(
                                             v4,
                                             this,
                                             logic->fields.perf,
                                             v4->klass->vtable._4_InterruptAction.method);
        max_length = Entities->max_length;
        if ( max_length >= 1 )
        {
          v11 = 0;
          v12 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v11 >= max_length )
              goto LABEL_32;
            v13 = Entities->m_Items[v11];
            if ( !v13 )
              goto LABEL_31;
            motionId = v13->fields.motionId;
            if ( motionId < 1 )
              goto LABEL_26;
            if ( !InitActionData )
              goto LABEL_31;
            if ( InitActionData->fields.motionId != motionId )
              break;
            this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0);
LABEL_27:
            this = (MessageBattleLogicTask_o *)BattleActionData__AddDisplayMessage(
                                                 InitActionData,
                                                 v13,
                                                 (ParseBattleMessage_o *)this,
                                                 v12,
                                                 0);
            max_length = Entities->max_length;
            ++v11;
            v12 = (BattleActionData_DisplayMessageData_o *)this;
            if ( (int)v11 >= max_length )
              goto LABEL_28;
          }
          this = (MessageBattleLogicTask_o *)logic->fields.perf;
          if ( !this )
            goto LABEL_31;
          BattlePerformance__addActionData_44828792((BattlePerformance_o *)this, InitActionData, 0);
          InitActionData = MessageBattleLogicTask__CreateInitActionData(v4, v13, v15);
LABEL_26:
          this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0);
          if ( !InitActionData )
            goto LABEL_31;
          goto LABEL_27;
        }
LABEL_28:
        this = (MessageBattleLogicTask_o *)logic->fields.perf;
        if ( this )
        {
          BattlePerformance__addActionData_44828792((BattlePerformance_o *)this, InitActionData, 0);
          return 0;
        }
      }
    }
    goto LABEL_31;
  }
  return 0;
}