void MessageBattleLogicTask___ctor(MessageBattleLogicTask_o *this, const MethodInfo *method)
{
  *((_DWORD *)&this->fields.gimmickFixedReelOrder + 1) = -1;
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
  struct System_Int32_array *actorIdlist; // x8
  int v9; // w8
  BattleActionData_o *result; // x0
  unsigned int v11; // w8

  if ( (byte_593BB42 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    byte_593BB42 = 1;
  }
  v5 = (BattleActionData_o *)sub_21FFEBC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v5, 0);
  actorIdlist = this->fields.actorIdlist;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_21FFED4(v6);
    v9 = actorIdlist->m_Items[0];
    if ( !v5 )
LABEL_10:
      sub_21FFECC(v6, v7);
  }
  else
  {
    v9 = -1;
    if ( !v5 )
      goto LABEL_10;
  }
  v5->fields.actorId = v9;
  if ( !msgEnt )
    goto LABEL_10;
  result = v5;
  v11 = this->fields.actortype & 0xFFFFFFFB;
  v5->fields.isForcedSpeedOne = this->fields.isForcedSpeedOne;
  v5->fields.motionId = msgEnt->fields.motionId;
  v5->fields.state = 2 * (v11 == 1);
  return result;
}


void MessageBattleLogicTask__Init(
        MessageBattleLogicTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  if ( !aiActEnt || (*(&this->fields.gimmickFixedReelOrder + 1) = aiActEnt->fields.type == 73, !aiEnt) )
    sub_21FFECC(this, aiActEnt);
  *((_DWORD *)&this->fields.gimmickFixedReelOrder + 1) = AiBaseEntity__getActionValue(aiEnt, 0);
}


BattleActionData_o *MessageBattleLogicTask__MakeActionData(
        MessageBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v4; // x20
  struct BattleData_o *data; // x8
  int32_t v6; // w21
  struct System_Int32_array *actorIdlist; // x8
  int32_t v8; // w3
  BattleMessageEntity_array *Entities; // x21
  const MethodInfo *v10; // x2
  BattleActionData_o *InitActionData; // x22
  int max_length; // w8
  __int64 v13; // x25
  BattleActionData_DisplayMessageData_o *v14; // x23
  BattleMessageEntity_o *v15; // x24
  int motionId; // w8
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_593BB41 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BattleMessageMaster___);
    this = (MessageBattleLogicTask_o *)sub_21FFC50(&DataManager_TypeInfo);
    byte_593BB41 = 1;
  }
  if ( *(&v4->fields.gimmickFixedReelOrder + 1) )
  {
    if ( !logic )
      goto LABEL_35;
    data = logic->fields.data;
    if ( !data )
      goto LABEL_35;
    this = (MessageBattleLogicTask_o *)data->fields._DrawLotsDispMsg_k__BackingField;
    if ( !this )
      goto LABEL_35;
    v6 = DrawLotsDisplayMessage__DrawLots(
           (DrawLotsDisplayMessage_o *)this,
           *((_DWORD *)&v4->fields.gimmickFixedReelOrder + 1),
           -1,
           0);
  }
  else
  {
    v6 = *((_DWORD *)&v4->fields.gimmickFixedReelOrder + 1);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, logic);
  this = (MessageBattleLogicTask_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !logic )
LABEL_35:
    sub_21FFECC(this, logic);
  actorIdlist = v4->fields.actorIdlist;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_36;
    v8 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_35;
  }
  else
  {
    v8 = -1;
    if ( !this )
      goto LABEL_35;
  }
  Entities = BattleMessageMaster__GetEntities((BattleMessageMaster_o *)this, v6, logic->fields.data, v8, 0);
  this = (MessageBattleLogicTask_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Entities, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Entities )
    goto LABEL_35;
  if ( !LODWORD(Entities->max_length) )
LABEL_36:
    sub_21FFED4(this);
  InitActionData = MessageBattleLogicTask__CreateInitActionData(v4, Entities->m_Items[0], v10);
  this = (MessageBattleLogicTask_o *)((__int64 (__fastcall *)(MessageBattleLogicTask_o *, BattleActionData_o *, struct BattlePerformance_o *, const MethodInfo *))v4->klass->vtable._4_InterruptAction.methodPtr)(
                                       v4,
                                       InitActionData,
                                       logic->fields.perf,
                                       v4->klass->vtable._4_InterruptAction.method);
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        goto LABEL_36;
      v15 = Entities->m_Items[v13];
      if ( !v15 )
        goto LABEL_35;
      motionId = v15->fields.motionId;
      if ( motionId < 1 )
        goto LABEL_30;
      if ( !InitActionData )
        goto LABEL_35;
      if ( InitActionData->fields.motionId != motionId )
        break;
      this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0);
LABEL_31:
      this = (MessageBattleLogicTask_o *)BattleActionData__AddDisplayMessage(
                                           InitActionData,
                                           v15,
                                           (ParseBattleMessage_o *)this,
                                           v14,
                                           0);
      max_length = Entities->max_length;
      ++v13;
      v14 = (BattleActionData_DisplayMessageData_o *)this;
      if ( (int)v13 >= max_length )
        goto LABEL_32;
    }
    this = (MessageBattleLogicTask_o *)logic->fields.perf;
    if ( !this )
      goto LABEL_35;
    BattlePerformance__addActionData_52021980((BattlePerformance_o *)this, InitActionData, 0);
    InitActionData = MessageBattleLogicTask__CreateInitActionData(v4, v15, v17);
LABEL_30:
    this = (MessageBattleLogicTask_o *)BattleLogic__get_ParseBattleMsg(logic, 0);
    if ( !InitActionData )
      goto LABEL_35;
    goto LABEL_31;
  }
LABEL_32:
  this = (MessageBattleLogicTask_o *)logic->fields.perf;
  if ( !this )
    goto LABEL_35;
  BattlePerformance__addActionData_52021980((BattlePerformance_o *)this, InitActionData, 0);
  return 0;
}