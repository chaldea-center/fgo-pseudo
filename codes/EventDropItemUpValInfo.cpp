void __fastcall EventDropItemUpValInfo___ctor(
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
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o *v14; // x9
  int32_t funcType; // w10
  int32_t targetType; // w10
  struct FunctionEntity_o *v17; // x8
  FunctionGroupMaster_o *v18; // x21
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  int32_t v20; // w3
  int32_t baseFuncId; // w2

  if ( (byte_4A5AD0D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD0D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_24;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcEntity, (int32_t)funcEntity, v11, v12);
  v14 = this->fields.funcEntity;
  if ( !v14 )
    goto LABEL_24;
  this->fields.baseFuncId = v14->fields.id;
  funcType = v14->fields.funcType;
  this->fields.baseFuncType = funcType;
  if ( funcType != 111
    || (dropInfo->fields.individuality != 1 ? (targetType = 7) : (targetType = 0),
        dropInfo->fields.individuality != 1 && isEquip) )
  {
    targetType = v14->fields.targetType;
  }
  this->fields.targetType = targetType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v17 = this->fields.funcEntity;
  if ( !v17 )
    goto LABEL_24;
  v18 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               (FunctionGroupMaster_o *)Instance,
                               &this->fields.funcGroupEntity,
                               v17->fields.id,
                               this->fields.eventId,
                               0LL);
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
                                         0LL),
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
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v20);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_22;
      }
    }
LABEL_24:
    sub_1B8880C(Instance, funcGroupEntity);
  }
LABEL_23:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}


void __fastcall EventDropItemUpValInfo___ctor_38889060(
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
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o **p_funcEntity; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct FunctionEntity_o *v17; // x8
  unsigned int funcType; // w8
  FunctionGroupMaster_o *v19; // x21
  struct FunctionGroupEntity_o *Entity; // x0
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  struct FunctionEntity_o *v24; // x8
  int32_t v25; // w3
  int32_t baseFuncId; // w2

  if ( (byte_4A5AD0E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionGroupMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD0E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_18;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcEntity, (int32_t)funcEntity, v11, v12);
  v17 = this->fields.funcEntity;
  if ( !v17 )
    goto LABEL_18;
  this->fields.baseFuncId = v17->fields.id;
  funcType = v17->fields.funcType;
  this->fields.itemEntity = itemEntity;
  *(_QWORD *)&this->fields.baseFuncType = funcType;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEntity, (int32_t)itemEntity, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  if ( !*p_funcEntity )
    goto LABEL_18;
  v19 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity(
             (FunctionGroupMaster_o *)Instance,
             (*p_funcEntity)->fields.id,
             this->fields.eventId,
             0LL);
  this->fields.funcGroupEntity = Entity;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcGroupEntity, (int32_t)Entity, v22, v23);
  v24 = this->fields.funcEntity;
  if ( !v24 )
    goto LABEL_18;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               v19,
                               &this->fields.funcGroupEntity,
                               v24->fields.id,
                               this->fields.eventId,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = funcGroupEntity->fields.baseFuncId;
      if ( baseFuncId >= 1
        && (Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                                         v19,
                                         &this->fields.baseFuncGroupEntity,
                                         baseFuncId,
                                         this->fields.eventId,
                                         0LL),
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
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.baseFuncGroupEntity,
          (int32_t)funcGroupEntity,
          baseFuncId,
          v25);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_16;
      }
    }
LABEL_18:
    sub_1B8880C(Instance, funcGroupEntity);
  }
LABEL_17:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}