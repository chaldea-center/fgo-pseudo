void EventDropItemUpValInfo___ctor(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        bool isEquip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct FunctionEntity_o *funcEntity; // x1
  int32_t eventId; // w8
  struct FunctionEntity_o *v19; // x8
  int32_t funcType; // w11
  int32_t targetType; // w10
  const MethodInfo_47A29F8 *v22; // x0
  struct FunctionEntity_o *v23; // x8
  FunctionGroupMaster_o *v24; // x21
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *baseFuncId; // x2
  bool isEquipUp; // w8
  bool isInvalid; // w9
  int32_t groupId; // w8

  if ( (byte_5970360 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970360 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dropInfo )
    goto LABEL_24;
  funcEntity = dropInfo->fields.funcEntity;
  eventId = dropInfo->fields.eventId;
  this->fields.funcEntity = funcEntity;
  this->fields.eventId = eventId;
  this->fields.member = member;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcEntity,
    (int32_t)funcEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v19 = this->fields.funcEntity;
  if ( !v19 )
    goto LABEL_24;
  funcType = v19->fields.funcType;
  this->fields.baseFuncId = v19->fields.id;
  this->fields.baseFuncType = funcType;
  if ( funcType != 111
    || (dropInfo->fields.individuality == 1 ? (targetType = 0) : (targetType = 7),
        dropInfo->fields.individuality != 1 && isEquip) )
  {
    targetType = v19->fields.targetType;
  }
  v22 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.targetType = targetType;
  Instance = SingletonMonoBehaviour_object___get_Instance(v22);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v23 = this->fields.funcEntity;
  if ( !v23 )
    goto LABEL_24;
  v24 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               (FunctionGroupMaster_o *)Instance,
                               &this->fields.funcGroupEntity,
                               v23->fields.id,
                               this->fields.eventId,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = this->fields.funcGroupEntity;
    if ( funcGroupEntity )
    {
      baseFuncId = (System_String_o *)(unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                                         v24,
                                         &this->fields.baseFuncGroupEntity,
                                         (int32_t)baseFuncId,
                                         this->fields.eventId,
                                         0),
            funcGroupEntity = this->fields.funcGroupEntity,
            ((unsigned __int8)Instance & 1) != 0) )
      {
        if ( funcGroupEntity )
        {
          this->fields.baseFuncId = funcGroupEntity->fields.baseFuncId;
LABEL_22:
          this->fields.priority = funcGroupEntity->fields.priority;
          goto LABEL_23;
        }
      }
      else
      {
        this->fields.baseFuncGroupEntity = funcGroupEntity;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v25,
          v26,
          v27,
          v28,
          v29);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_22;
      }
    }
LABEL_24:
    sub_2213CDC(Instance, funcGroupEntity);
  }
LABEL_23:
  isEquipUp = dropInfo->fields.isEquipUp;
  isInvalid = dropInfo->fields.isInvalid;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isEquipUp = isEquipUp;
  groupId = dropInfo->fields.groupId;
  this->fields.isInvalid = isInvalid;
  this->fields.groupId = groupId;
}


void EventDropItemUpValInfo___ctor_48721868(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct FunctionEntity_o *funcEntity; // x1
  int32_t eventId; // w8
  struct FunctionEntity_o **p_funcEntity; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct FunctionEntity_o *v26; // x8
  int32_t id; // w9
  unsigned int funcType; // w8
  FunctionGroupMaster_o *v29; // x21
  struct FunctionGroupEntity_o *Entity; // x0
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct FunctionEntity_o *v38; // x8
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *baseFuncId; // x2
  bool isEquipUp; // w8
  bool isInvalid; // w9
  int32_t groupId; // w8

  if ( (byte_5970361 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970361 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dropInfo )
    goto LABEL_18;
  funcEntity = dropInfo->fields.funcEntity;
  eventId = dropInfo->fields.eventId;
  this->fields.funcEntity = funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  this->fields.eventId = eventId;
  this->fields.member = member;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcEntity,
    (int32_t)funcEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v26 = this->fields.funcEntity;
  if ( !v26 )
    goto LABEL_18;
  id = v26->fields.id;
  funcType = v26->fields.funcType;
  this->fields.itemEntity = itemEntity;
  this->fields.baseFuncId = id;
  *(_QWORD *)&this->fields.baseFuncType = funcType;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemEntity,
    (int32_t)itemEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  if ( !*p_funcEntity )
    goto LABEL_18;
  v29 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity(
             (FunctionGroupMaster_o *)Instance,
             (*p_funcEntity)->fields.id,
             this->fields.eventId,
             0);
  this->fields.funcGroupEntity = Entity;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.funcGroupEntity,
    (int32_t)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = this->fields.funcEntity;
  if ( !v38 )
    goto LABEL_18;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               v29,
                               &this->fields.funcGroupEntity,
                               v38->fields.id,
                               this->fields.eventId,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = (System_String_o *)(unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                                         v29,
                                         &this->fields.baseFuncGroupEntity,
                                         (int32_t)baseFuncId,
                                         this->fields.eventId,
                                         0),
            funcGroupEntity = this->fields.funcGroupEntity,
            ((unsigned __int8)Instance & 1) != 0) )
      {
        if ( funcGroupEntity )
        {
          this->fields.baseFuncId = funcGroupEntity->fields.baseFuncId;
LABEL_16:
          this->fields.priority = funcGroupEntity->fields.priority;
          goto LABEL_17;
        }
      }
      else
      {
        this->fields.baseFuncGroupEntity = funcGroupEntity;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v39,
          v40,
          v41,
          v42,
          v43);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_16;
      }
    }
LABEL_18:
    sub_2213CDC(Instance, funcGroupEntity);
  }
LABEL_17:
  isEquipUp = dropInfo->fields.isEquipUp;
  isInvalid = dropInfo->fields.isInvalid;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isEquipUp = isEquipUp;
  groupId = dropInfo->fields.groupId;
  this->fields.isInvalid = isInvalid;
  this->fields.groupId = groupId;
}