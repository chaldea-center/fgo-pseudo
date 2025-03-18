// local variable allocation has failed, the output may be wrong!
void __fastcall EventDropItemUpValInfo___ctor(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        bool isEquip,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o *v19; // x9
  int32_t funcType; // w10
  int32_t targetType; // w10
  struct FunctionEntity_o *v22; // x8
  FunctionGroupMaster_o *v23; // x21
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t baseFuncId; // x2

  if ( (byte_4C21AF3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C21AF3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_24;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.funcEntity, (int64_t)funcEntity, v12, v13, v14, v15, v16, v17);
  v19 = this->fields.funcEntity;
  if ( !v19 )
    goto LABEL_24;
  this->fields.baseFuncId = v19->fields.id;
  funcType = v19->fields.funcType;
  this->fields.baseFuncType = funcType;
  if ( funcType != 111
    || (dropInfo->fields.individuality != 1 ? (targetType = 7) : (targetType = 0),
        dropInfo->fields.individuality != 1 && isEquip) )
  {
    targetType = v19->fields.targetType;
  }
  this->fields.targetType = targetType;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v22 = this->fields.funcEntity;
  if ( !v22 )
    goto LABEL_24;
  v23 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               (FunctionGroupMaster_o *)Instance,
                               &this->fields.funcGroupEntity,
                               v22->fields.id,
                               this->fields.eventId,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = (unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                                         v23,
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
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.baseFuncGroupEntity,
          (int64_t)funcGroupEntity,
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
    sub_1C3B9C0(Instance, funcGroupEntity);
  }
LABEL_23:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventDropItemUpValInfo___ctor_40330524(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o **p_funcEntity; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct FunctionEntity_o *v26; // x8
  unsigned int funcType; // w8
  FunctionGroupMaster_o *v28; // x21
  struct FunctionGroupEntity_o *Entity; // x0
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct FunctionEntity_o *v37; // x8
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t baseFuncId; // x2

  if ( (byte_4C21AF4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C21AF4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_18;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.funcEntity, (int64_t)funcEntity, v12, v13, v14, v15, v16, v17);
  v26 = this->fields.funcEntity;
  if ( !v26 )
    goto LABEL_18;
  this->fields.baseFuncId = v26->fields.id;
  funcType = v26->fields.funcType;
  this->fields.itemEntity = itemEntity;
  *(_QWORD *)&this->fields.baseFuncType = funcType;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemEntity, (int64_t)itemEntity, v20, v21, v22, v23, v24, v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  if ( !*p_funcEntity )
    goto LABEL_18;
  v28 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity(
             (FunctionGroupMaster_o *)Instance,
             (*p_funcEntity)->fields.id,
             this->fields.eventId,
             0LL);
  this->fields.funcGroupEntity = Entity;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.funcGroupEntity,
    (int64_t)Entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = this->fields.funcEntity;
  if ( !v37 )
    goto LABEL_18;
  Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                               v28,
                               &this->fields.funcGroupEntity,
                               v37->fields.id,
                               this->fields.eventId,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = (unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Instance = (Il2CppObject *)FunctionGroupMaster__TryGetEntity(
                                         v28,
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
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.baseFuncGroupEntity,
          (int64_t)funcGroupEntity,
          baseFuncId,
          v38,
          v39,
          v40,
          v41,
          v42);
        funcGroupEntity = this->fields.funcGroupEntity;
        if ( funcGroupEntity )
          goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C3B9C0(Instance, funcGroupEntity);
  }
LABEL_17:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  *(_QWORD *)&this->fields.addCount = *(_QWORD *)&dropInfo->fields.addCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}