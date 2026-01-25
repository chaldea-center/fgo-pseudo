void EventDropUpValInfo___ctor(
        EventDropUpValInfo_o *this,
        int32_t eventId,
        FunctionEntity_o *funcEntity,
        const MethodInfo *method)
{
  EventDropUpValInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.funcEntity = funcEntity;
  v6 = (EventDropUpValInfo_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields.isInvalid = eventId;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v6, (int32_t)funcEntity, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = 0;
}


void EventDropUpValInfo___ctor_42292180(
        EventDropUpValInfo_o *this,
        int32_t eventId,
        FunctionEntity_o *funcEntity,
        int32_t individuality,
        const MethodInfo *method)
{
  EventDropUpValInfo_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.funcEntity = funcEntity;
  v8 = (EventDropUpValInfo_o *)((char *)v8 + 24);
  *(_DWORD *)&v8[-1].fields.isInvalid = eventId;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v8, (int32_t)funcEntity, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = individuality;
}


int32_t EventDropUpValInfo__GetFuncType(EventDropUpValInfo_o *this, const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_1C7BD40(this, method);
  return funcEntity->fields.funcType;
}


void EventDropUpValInfo__SetAddCount(
        EventDropUpValInfo_o *this,
        int32_t v,
        bool isEquipUp,
        bool isInvalid,
        const MethodInfo *method)
{
  this->fields.addCount = v;
  this->fields.isEquipUp = isEquipUp;
  this->fields.isInvalid = isInvalid;
}


void EventDropUpValInfo__SetGroupId(EventDropUpValInfo_o *this, int32_t inGroupId, const MethodInfo *method)
{
  this->fields.groupId = inGroupId;
}


void EventDropUpValInfo__SetRateCount(
        EventDropUpValInfo_o *this,
        int32_t v,
        bool isEquipUp,
        bool isInvalid,
        const MethodInfo *method)
{
  this->fields.rateCount = v;
  this->fields.isEquipUp = isEquipUp;
  this->fields.isInvalid = isInvalid;
}