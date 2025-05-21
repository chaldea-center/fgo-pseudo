void __fastcall MessageBattleLogicTask___ctor(MessageBattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.value = -1;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 56;
}


BattleActionData_o *__fastcall MessageBattleLogicTask__CreateInitActionData(
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

  if ( (byte_4B47B58 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_TypeInfo, msgEnt);
    byte_4B47B58 = 1;
  }
  v5 = (BattleActionData_o *)sub_1BDBAC4(BattleActionData_TypeInfo);
  BattleActionData___ctor(v5, 0LL);
  actorIdlist = this->fields.actorIdlist;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1BDBADC(v6, v7, v8);
    v10 = actorIdlist->m_Items[1];
    if ( !v5 )
LABEL_10:
      sub_1BDBAD4(v6, v7);
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


void __fastcall MessageBattleLogicTask__Init(
        MessageBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  if ( !aiActEnt || (this->fields.isMsgGroup = aiActEnt->fields.type == 73, !aiEnt) )
    sub_1BDBAD4(this, aiActEnt);
  this->fields.value = AiBaseEntity__getActionValue(aiEnt, 0LL);
}


BattleActionData_o *__fastcall MessageBattleLogicTask__MakeActionData(
        MessageBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v4; // x20
  __int64 v5; // x1
  struct BattleData_o *data; // x8
  int32_t value; // w21
  BattleMessageEntity_array *Entities; // x21
  const MethodInfo *v9; // x2
  BattleActionData_o *InitActionData; // x22
  int max_length; // w8
  __int64 v12; // x25
  BattleActionData_DisplayMessageData_o *v13; // x23
  BattleMessageEntity_o *v14; // x24
  int motionId; // w8
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4B47B57 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_BattleMessageMaster___, logic);
    this = (MessageBattleLogicTask_o *)sub_1BDB878(&DataManager_TypeInfo, v5);
    byte_4B47B57 = 1;
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
    value = DrawLotsDisplayMessage__DrawLots((DrawLotsDisplayMessage_o *)this, v4->fields.value, -1, 0LL);
  }
  else
  {
    value = v4->fields.value;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MessageBattleLogicTask_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !this )
LABEL_31:
    sub_1BDBAD4(this, logic);
  Entities = BattleMessageMaster__GetEntities((BattleMessageMaster_o *)this, value, 0LL);
  this = (MessageBattleLogicTask_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Entities )
    {
      if ( !Entities->max_length )
LABEL_32:
        sub_1BDBADC(this, logic, v9);
      this = (MessageBattleLogicTask_o *)MessageBattleLogicTask__CreateInitActionData(v4, Entities->m_Items[0], v9);
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
          v12 = 0LL;
          v13 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v12 >= max_length )
              goto LABEL_32;
            v14 = Entities->m_Items[v12];
            if ( !v14 )
              goto LABEL_31;
            motionId = v14->fields.motionId;
            if ( motionId < 1 )
              goto LABEL_26;
            if ( !InitActionData )
              goto LABEL_31;
            if ( InitActionData->fields.motionId != motionId )
              break;
            this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
LABEL_27:
            this = (MessageBattleLogicTask_o *)BattleActionData__AddDisplayMessage(
                                                 InitActionData,
                                                 v14,
                                                 (ParseBattleMessage_o *)this,
                                                 v13,
                                                 0LL);
            max_length = Entities->max_length;
            ++v12;
            v13 = (BattleActionData_DisplayMessageData_o *)this;
            if ( (int)v12 >= max_length )
              goto LABEL_28;
          }
          this = (MessageBattleLogicTask_o *)logic->fields.perf;
          if ( !this )
            goto LABEL_31;
          BattlePerformance__addActionData_43977964((BattlePerformance_o *)this, InitActionData, 0LL);
          InitActionData = MessageBattleLogicTask__CreateInitActionData(v4, v14, v16);
LABEL_26:
          this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
          if ( !InitActionData )
            goto LABEL_31;
          goto LABEL_27;
        }
LABEL_28:
        this = (MessageBattleLogicTask_o *)logic->fields.perf;
        if ( this )
        {
          BattlePerformance__addActionData_43977964((BattlePerformance_o *)this, InitActionData, 0LL);
          return 0LL;
        }
      }
    }
    goto LABEL_31;
  }
  return 0LL;
}