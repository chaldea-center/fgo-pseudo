void EventDropItemUpValInfo___ctor(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        bool isEquip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o *v13; // x9
  int32_t funcType; // w10
  int32_t targetType; // w10
  struct FunctionEntity_o *v16; // x8
  FunctionGroupMaster_o *v17; // x21
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  const MethodInfo *v19; // x3
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t baseFuncId; // w2

  if ( (byte_4C374FF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C374FF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dropInfo )
    goto LABEL_24;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.funcEntity, (int32_t)funcEntity, v10, v11);
  v13 = this->fields.funcEntity;
  if ( !v13 )
    goto LABEL_24;
  this->fields.baseFuncId = v13->fields.id;
  funcType = v13->fields.funcType;
  this->fields.baseFuncType = funcType;
  if ( funcType != 111
    || (dropInfo->fields.individuality != 1 ? (targetType = 7) : (targetType = 0),
        dropInfo->fields.individuality != 1 && isEquip) )
  {
    targetType = v13->fields.targetType;
  }
  this->fields.targetType = targetType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v16 = this->fields.funcEntity;
  if ( !v16 )
    goto LABEL_24;
  v17 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               (FunctionGroupMaster_o *)Instance,
                               &this->fields.funcGroupEntity,
                               v16->fields.id,
                               this->fields.eventId,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = funcGroupEntity->fields.baseFuncId;
      if ( baseFuncId >= 1
        && (Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                                         v17,
                                         &this->fields.baseFuncGroupEntity,
                                         baseFuncId,
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
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v19);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_22;
      }
    }
LABEL_24:
    sub_1C32E7C(Instance);
  }
LABEL_23:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
  this->fields.groupId = dropInfo->fields.groupId;
}


void EventDropItemUpValInfo___ctor_41617156(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o **p_funcEntity; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct FunctionEntity_o *v16; // x8
  unsigned int funcType; // w8
  FunctionGroupMaster_o *v18; // x21
  struct FunctionGroupEntity_o *Entity; // x0
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct FunctionEntity_o *v23; // x8
  const MethodInfo *v24; // x3
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t baseFuncId; // w2

  if ( (byte_4C37500 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37500 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dropInfo )
    goto LABEL_18;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.funcEntity, (int32_t)funcEntity, v10, v11);
  v16 = this->fields.funcEntity;
  if ( !v16 )
    goto LABEL_18;
  this->fields.baseFuncId = v16->fields.id;
  funcType = v16->fields.funcType;
  this->fields.itemEntity = itemEntity;
  *(_QWORD *)&this->fields.baseFuncType = funcType;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  if ( !*p_funcEntity )
    goto LABEL_18;
  v18 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity(
             (FunctionGroupMaster_o *)Instance,
             (*p_funcEntity)->fields.id,
             this->fields.eventId,
             0);
  this->fields.funcGroupEntity = Entity;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.funcGroupEntity, (int32_t)Entity, v21, v22);
  v23 = this->fields.funcEntity;
  if ( !v23 )
    goto LABEL_18;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               v18,
                               &this->fields.funcGroupEntity,
                               v23->fields.id,
                               this->fields.eventId,
                               0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = funcGroupEntity->fields.baseFuncId;
      if ( baseFuncId >= 1
        && (Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                                         v18,
                                         &this->fields.baseFuncGroupEntity,
                                         baseFuncId,
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
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v24);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C32E7C(Instance);
  }
LABEL_17:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
  this->fields.groupId = dropInfo->fields.groupId;
}