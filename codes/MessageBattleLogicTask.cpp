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
  BattleActionData_o *v6; // x21
  __int64 ActorId; // x0
  __int64 v8; // x1
  BattleActionData_o *result; // x0

  if ( (byte_42E8710 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)msgEnt, (_DWORD)method, v3);
    byte_42E8710 = 1;
  }
  v6 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v6, 0LL);
  ActorId = BattleLogicTask__getActorId((BattleLogicTask_o *)this, 0LL);
  if ( !v6 || (v6->fields.actorId = ActorId, !msgEnt) )
    sub_B5D69C(ActorId, v8);
  v6->fields.motionId = msgEnt->fields.motionId;
  v6->fields.state = BattleLogicTask__ConvertActorToActionState((BattleLogicTask_o *)this, 0LL);
  result = v6;
  v6->fields.isForcedSpeedOne = this->fields.isForcedSpeedOne;
  return result;
}


void __fastcall MessageBattleLogicTask__Init(
        MessageBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  if ( !aiActEnt || (this->fields.isMsgGroup = aiActEnt->fields.type == 73, !aiEnt) )
    sub_B5D69C(this, aiActEnt);
  this->fields.value = AiBaseEntity__getActionValue(aiEnt, 0LL);
}


BattleActionData_o *__fastcall MessageBattleLogicTask__MakeActionData(
        MessageBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MessageBattleLogicTask_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattleData_o *data; // x8
  int32_t value; // w21
  BattleMessageEntity_array *Entities; // x21
  const MethodInfo *v12; // x2
  BattleActionData_o *InitActionData; // x22
  int max_length; // w8
  __int64 v15; // x25
  BattleActionData_DisplayMessageData_o *v16; // x23
  BattleMessageEntity_o *v17; // x24
  int motionId; // w8
  const MethodInfo *v19; // x2
  __int64 v21; // x0

  v5 = this;
  if ( (byte_42E870F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMessageMaster___, (_DWORD)logic, (_DWORD)method, v3);
    this = (MessageBattleLogicTask_o *)sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E870F = 1;
  }
  if ( v5->fields.isMsgGroup )
  {
    if ( !logic )
      goto LABEL_32;
    data = logic->fields.data;
    if ( !data )
      goto LABEL_32;
    this = (MessageBattleLogicTask_o *)data->fields._DrawLotsDispMsg_k__BackingField;
    if ( !this )
      goto LABEL_32;
    value = DrawLotsDisplayMessage__DrawLots((DrawLotsDisplayMessage_o *)this, v5->fields.value, -1, 0LL);
  }
  else
  {
    value = v5->fields.value;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MessageBattleLogicTask_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !this )
LABEL_32:
    sub_B5D69C(this, logic);
  Entities = BattleMessageMaster__GetEntities((BattleMessageMaster_o *)this, value, 0LL);
  this = (MessageBattleLogicTask_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Entities )
    {
      if ( !Entities->max_length )
      {
LABEL_33:
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      this = (MessageBattleLogicTask_o *)MessageBattleLogicTask__CreateInitActionData(v5, Entities->m_Items[0], v12);
      if ( logic )
      {
        InitActionData = (BattleActionData_o *)this;
        this = (MessageBattleLogicTask_o *)((__int64 (__fastcall *)(MessageBattleLogicTask_o *, MessageBattleLogicTask_o *, struct BattlePerformance_o *, Il2CppMethodPointer))v5->klass->vtable._4_InterruptAction.method)(
                                             v5,
                                             this,
                                             logic->fields.perf,
                                             v5->klass->vtable._5_MakeActionTask.methodPtr);
        max_length = Entities->max_length;
        if ( max_length >= 1 )
        {
          v15 = 0LL;
          v16 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v15 >= max_length )
              goto LABEL_33;
            v17 = Entities->m_Items[v15];
            if ( !v17 )
              goto LABEL_32;
            motionId = v17->fields.motionId;
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
                                                 v17,
                                                 (ParseBattleMessage_o *)this,
                                                 v16,
                                                 0LL);
            max_length = Entities->max_length;
            ++v15;
            v16 = (BattleActionData_DisplayMessageData_o *)this;
            if ( (int)v15 >= max_length )
              goto LABEL_29;
          }
          this = (MessageBattleLogicTask_o *)logic->fields.perf;
          if ( !this )
            goto LABEL_32;
          BattlePerformance__addActionData_18561148((BattlePerformance_o *)this, InitActionData, 0LL);
          InitActionData = MessageBattleLogicTask__CreateInitActionData(v5, v17, v19);
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
          BattlePerformance__addActionData_18561148((BattlePerformance_o *)this, InitActionData, 0LL);
          return 0LL;
        }
      }
    }
    goto LABEL_32;
  }
  return 0LL;
}