void EventDropItemUpValInfo___ctor(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        bool isEquip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o *v18; // x9
  int32_t funcType; // w10
  int32_t targetType; // w10
  struct FunctionEntity_o *v21; // x8
  FunctionGroupMaster_o *v22; // x21
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t baseFuncId; // w2

  if ( (byte_4D3053E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3053E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dropInfo )
    goto LABEL_24;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.funcEntity,
    (int32_t)funcEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = this->fields.funcEntity;
  if ( !v18 )
    goto LABEL_24;
  this->fields.baseFuncId = v18->fields.id;
  funcType = v18->fields.funcType;
  this->fields.baseFuncType = funcType;
  if ( funcType != 111
    || (dropInfo->fields.individuality != 1 ? (targetType = 7) : (targetType = 0),
        dropInfo->fields.individuality != 1 && isEquip) )
  {
    targetType = v18->fields.targetType;
  }
  this->fields.targetType = targetType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v21 = this->fields.funcEntity;
  if ( !v21 )
    goto LABEL_24;
  v22 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               (FunctionGroupMaster_o *)Instance,
                               &this->fields.funcGroupEntity,
                               v21->fields.id,
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
                                         v22,
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
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v24,
          v25,
          v26,
          v27,
          v28);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_22;
      }
    }
LABEL_24:
    sub_1C93D2C(Instance, funcGroupEntity);
  }
LABEL_23:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
  this->fields.groupId = dropInfo->fields.groupId;
}


void EventDropItemUpValInfo___ctor_42446352(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o **p_funcEntity; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct FunctionEntity_o *v25; // x8
  unsigned int funcType; // w8
  FunctionGroupMaster_o *v27; // x21
  struct FunctionGroupEntity_o *Entity; // x0
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct FunctionEntity_o *v36; // x8
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t baseFuncId; // w2

  if ( (byte_4D3053F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3053F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dropInfo )
    goto LABEL_18;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.funcEntity,
    (int32_t)funcEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v25 = this->fields.funcEntity;
  if ( !v25 )
    goto LABEL_18;
  this->fields.baseFuncId = v25->fields.id;
  funcType = v25->fields.funcType;
  this->fields.itemEntity = itemEntity;
  *(_QWORD *)&this->fields.baseFuncType = funcType;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemEntity,
    (int32_t)itemEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  if ( !*p_funcEntity )
    goto LABEL_18;
  v27 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity(
             (FunctionGroupMaster_o *)Instance,
             (*p_funcEntity)->fields.id,
             this->fields.eventId,
             0);
  this->fields.funcGroupEntity = Entity;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.funcGroupEntity,
    (int32_t)Entity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.funcEntity;
  if ( !v36 )
    goto LABEL_18;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               v27,
                               &this->fields.funcGroupEntity,
                               v36->fields.id,
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
                                         v27,
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
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v37,
          v38,
          v39,
          v40,
          v41);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C93D2C(Instance, funcGroupEntity);
  }
LABEL_17:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
  this->fields.groupId = dropInfo->fields.groupId;
}