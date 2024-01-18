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
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o *v19; // x8
  int32_t funcType; // w9
  int32_t targetType; // w9
  struct FunctionEntity_o *v22; // x8
  FunctionGroupMaster_o *v23; // x22
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x21
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **baseFuncId; // x2

  if ( (byte_418A36E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A36E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_24;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.funcEntity,
    (System_Int32_array **)funcEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v22 = this->fields.funcEntity;
  if ( !v22 )
    goto LABEL_24;
  v23 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(
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
      baseFuncId = (System_String_array **)(unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(
                                          v23,
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
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
          (System_Int32_array **)funcGroupEntity,
          baseFuncId,
          v25,
          v26,
          v27,
          v28,
          v29);
        funcGroupEntity = *p_funcGroupEntity;
        if ( *p_funcGroupEntity )
          goto LABEL_22;
      }
    }
LABEL_24:
    sub_B2C434(Instance, funcGroupEntity);
  }
LABEL_23:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  this->fields.addCount = dropInfo->fields.addCount;
  this->fields.rateCount = dropInfo->fields.rateCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventDropItemUpValInfo___ctor_29736308(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o **p_funcEntity; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct FunctionEntity_o *v26; // x8
  unsigned int funcType; // w8
  struct FunctionEntity_o *v28; // x8
  FunctionGroupMaster_o *v29; // x22
  struct FunctionGroupEntity_o *Entity; // x0
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct FunctionEntity_o *v38; // x8
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **baseFuncId; // x2

  if ( (byte_418A36F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A36F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_18;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.funcEntity,
    (System_Int32_array **)funcEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v26 = this->fields.funcEntity;
  if ( !v26 )
    goto LABEL_18;
  this->fields.baseFuncId = v26->fields.id;
  funcType = v26->fields.funcType;
  this->fields.itemEntity = itemEntity;
  *(_QWORD *)&this->fields.baseFuncType = funcType;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v28 = *p_funcEntity;
  if ( !*p_funcEntity )
    goto LABEL_18;
  v29 = (FunctionGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity((FunctionGroupMaster_o *)Instance, v28->fields.id, this->fields.eventId, 0LL);
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  this->fields.funcGroupEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.funcGroupEntity,
    (System_Int32_array **)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = this->fields.funcEntity;
  if ( !v38 )
    goto LABEL_18;
  Instance = (DataManager_o *)FunctionGroupMaster__TryGetEntity(
                                v29,
                                &this->fields.funcGroupEntity,
                                v38->fields.id,
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
                                          v29,
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
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.baseFuncGroupEntity,
          (System_Int32_array **)funcGroupEntity,
          baseFuncId,
          v39,
          v40,
          v41,
          v42,
          v43);
        funcGroupEntity = *p_funcGroupEntity;
        if ( *p_funcGroupEntity )
          goto LABEL_16;
      }
    }
LABEL_18:
    sub_B2C434(Instance, funcGroupEntity);
  }
LABEL_17:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  this->fields.addCount = dropInfo->fields.addCount;
  this->fields.rateCount = dropInfo->fields.rateCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}