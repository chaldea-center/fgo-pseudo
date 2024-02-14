// local variable allocation has failed, the output may be wrong!
void __fastcall EventDropItemUpValInfo___ctor(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        bool isEquip,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o *v18; // x8
  int32_t funcType; // w9
  int32_t targetType; // w9
  struct FunctionEntity_o *v21; // x8
  FunctionGroupMaster_o *v22; // x22
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x21
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **baseFuncId; // x2

  if ( (byte_4216F4F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4216F4F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_24;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.funcEntity,
    (System_Int32_array **)funcEntity,
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v21 = this->fields.funcEntity;
  if ( !v21 )
    goto LABEL_24;
  v22 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(
                                (FunctionGroupMaster_o *)Instance,
                                &this->fields.funcGroupEntity,
                                v21->fields.id,
                                this->fields.eventId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = (System_String_array **)(unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(
                                          v22,
                                          &this->fields.baseFuncGroupEntity,
                                          (int32_t)baseFuncId,
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
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
          (System_Int32_array **)funcGroupEntity,
          baseFuncId,
          v24,
          v25,
          v26,
          v27,
          v28);
        funcGroupEntity = *p_funcGroupEntity;
        if ( *p_funcGroupEntity )
          goto LABEL_22;
      }
    }
LABEL_24:
    sub_B0D97C(Instance);
  }
LABEL_23:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  this->fields.addCount = dropInfo->fields.addCount;
  this->fields.rateCount = dropInfo->fields.rateCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventDropItemUpValInfo___ctor_28902220(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o **p_funcEntity; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct FunctionEntity_o *v25; // x8
  unsigned int funcType; // w8
  struct FunctionEntity_o *v27; // x8
  FunctionGroupMaster_o *v28; // x22
  struct FunctionGroupEntity_o *Entity; // x0
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct FunctionEntity_o *v37; // x8
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **baseFuncId; // x2

  if ( (byte_4216F50 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4216F50 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_18;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.funcEntity,
    (System_Int32_array **)funcEntity,
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v27 = *p_funcEntity;
  if ( !*p_funcEntity )
    goto LABEL_18;
  v28 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity((FunctionGroupMaster_o *)Instance, v27->fields.id, this->fields.eventId, 0LL);
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  this->fields.funcGroupEntity = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.funcGroupEntity,
    (System_Int32_array **)Entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = this->fields.funcEntity;
  if ( !v37 )
    goto LABEL_18;
  Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(
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
      baseFuncId = (System_String_array **)(unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(
                                          v28,
                                          &this->fields.baseFuncGroupEntity,
                                          (int32_t)baseFuncId,
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
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
          (System_Int32_array **)funcGroupEntity,
          baseFuncId,
          v38,
          v39,
          v40,
          v41,
          v42);
        funcGroupEntity = *p_funcGroupEntity;
        if ( *p_funcGroupEntity )
          goto LABEL_16;
      }
    }
LABEL_18:
    sub_B0D97C(Instance);
  }
LABEL_17:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  this->fields.addCount = dropInfo->fields.addCount;
  this->fields.rateCount = dropInfo->fields.rateCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}