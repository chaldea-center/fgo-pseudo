// local variable allocation has failed, the output may be wrong!
void __fastcall EventDropItemUpValInfo___ctor(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        bool isEquip,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o *v17; // x8
  int32_t funcType; // w9
  int32_t targetType; // w9
  WebViewManager_o *Instance; // x0
  FunctionGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct FunctionEntity_o *v22; // x8
  FunctionGroupMaster_o *v23; // x22
  struct FunctionGroupEntity_o **p_funcGroupEntity; // x21
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **baseFuncId; // x2
  bool Entity; // w0

  if ( (byte_40FC637 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC637 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_24;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.funcEntity,
    (System_Int32_array **)funcEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = this->fields.funcEntity;
  if ( !v17 )
    goto LABEL_24;
  this->fields.baseFuncId = v17->fields.id;
  funcType = v17->fields.funcType;
  this->fields.baseFuncType = funcType;
  if ( funcType != 111
    || (dropInfo->fields.individuality != 1 ? (targetType = 7) : (targetType = 0),
        dropInfo->fields.individuality != 1 && isEquip) )
  {
    targetType = v17->fields.targetType;
  }
  this->fields.targetType = targetType;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (FunctionGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v22 = this->fields.funcEntity;
  if ( !v22 )
    goto LABEL_24;
  v23 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  if ( FunctionGroupMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &this->fields.funcGroupEntity,
         v22->fields.id,
         this->fields.eventId,
         0LL) )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = (System_String_array **)(unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (Entity = FunctionGroupMaster__TryGetEntity(
                       v23,
                       &this->fields.baseFuncGroupEntity,
                       (int32_t)baseFuncId,
                       this->fields.eventId,
                       0LL),
            funcGroupEntity = this->fields.funcGroupEntity,
            Entity) )
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
        sub_B16F98(
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
    sub_B170D4();
  }
LABEL_23:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  this->fields.addCount = dropInfo->fields.addCount;
  this->fields.rateCount = dropInfo->fields.rateCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventDropItemUpValInfo___ctor_29425368(
        EventDropItemUpValInfo_o *this,
        int32_t member,
        EventDropUpValInfo_o *dropInfo,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct FunctionEntity_o *funcEntity; // x1
  struct FunctionEntity_o **p_funcEntity; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct FunctionEntity_o *v24; // x8
  unsigned int funcType; // w8
  WebViewManager_o *Instance; // x0
  FunctionGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
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
  struct FunctionGroupEntity_o *funcGroupEntity; // x1
  System_String_array **baseFuncId; // x2
  bool v46; // w0

  if ( (byte_40FC638 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionGroupMaster___, *(_QWORD *)&member);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC638 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dropInfo )
    goto LABEL_18;
  this->fields.eventId = dropInfo->fields.eventId;
  this->fields.member = member;
  funcEntity = dropInfo->fields.funcEntity;
  p_funcEntity = &this->fields.funcEntity;
  this->fields.funcEntity = funcEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.funcEntity,
    (System_Int32_array **)funcEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v24 = this->fields.funcEntity;
  if ( !v24 )
    goto LABEL_18;
  this->fields.baseFuncId = v24->fields.id;
  funcType = v24->fields.funcType;
  this->fields.itemEntity = itemEntity;
  *(_QWORD *)&this->fields.baseFuncType = funcType;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (FunctionGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionGroupMaster___);
  v28 = *p_funcEntity;
  if ( !*p_funcEntity )
    goto LABEL_18;
  v29 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = FunctionGroupMaster__GetEntity(MasterData_WarQuestSelectionMaster, v28->fields.id, this->fields.eventId, 0LL);
  p_funcGroupEntity = &this->fields.funcGroupEntity;
  this->fields.funcGroupEntity = Entity;
  sub_B16F98(
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
  if ( FunctionGroupMaster__TryGetEntity(v29, &this->fields.funcGroupEntity, v38->fields.id, this->fields.eventId, 0LL) )
  {
    funcGroupEntity = *p_funcGroupEntity;
    if ( *p_funcGroupEntity )
    {
      baseFuncId = (System_String_array **)(unsigned int)funcGroupEntity->fields.baseFuncId;
      if ( (int)baseFuncId >= 1
        && (v46 = FunctionGroupMaster__TryGetEntity(
                    v29,
                    &this->fields.baseFuncGroupEntity,
                    (int32_t)baseFuncId,
                    this->fields.eventId,
                    0LL),
            funcGroupEntity = this->fields.funcGroupEntity,
            v46) )
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
        sub_B16F98(
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
    sub_B170D4();
  }
LABEL_17:
  this->fields.isEquipUp = dropInfo->fields.isEquipUp;
  this->fields.addCount = dropInfo->fields.addCount;
  this->fields.rateCount = dropInfo->fields.rateCount;
  this->fields.isInvalid = dropInfo->fields.isInvalid;
}