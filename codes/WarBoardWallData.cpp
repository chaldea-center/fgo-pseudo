void WarBoardWallData___ctor(
        WarBoardWallData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserWallData_o *wallData,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct System_Int32_array *Individuality; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t breakPoint; // w8
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  int32_t defeatPoint; // w8
  WarBoardStageWallEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEC199 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarBoardStageWallMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEC199 = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !layout )
    goto LABEL_12;
  *(_QWORD *)&this->fields._stageId_k__BackingField = *(_QWORD *)&layout->fields.stageId;
  this->fields._wallId_k__BackingField = layout->fields.effectId;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0);
  this->fields._individuality_k__BackingField = Individuality;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  breakPoint = layout->fields.breakPoint;
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarBoardStageWallMaster___)) == 0 )
  {
LABEL_12:
    sub_1C7BD40(Instance, v8);
  }
  if ( WarBoardStageWallMaster__TryGetEntity(
         (WarBoardStageWallMaster_o *)Instance,
         &entity,
         this->fields._stageId_k__BackingField,
         this->fields._wallId_k__BackingField,
         0) )
  {
    v23 = (int)entity;
    this->fields.wallEntity = entity;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.wallEntity, v23, v17, v18, v19, v20, v21, v22);
  }
  if ( wallData )
  {
    this->fields._squareIndex_k__BackingField = wallData->fields.squareIndex;
    this->fields._wallId_k__BackingField = wallData->fields.id;
    defeatPoint = wallData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
  }
  else
  {
    defeatPoint = this->fields._breakPoint_k__BackingField;
  }
  this->fields._isDestroy_k__BackingField = defeatPoint < 1;
}


System_Collections_Generic_List_WarBoardTaskBase__o *WarBoardWallData__DecrementBreakPointPerformance(
        WarBoardWallData_o *this,
        int32_t decPoint,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  WarBoardWallComponent_o *component; // x0
  int32_t breakPoint_k__BackingField; // w1

  if ( (byte_4CEC19D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_4CEC19D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  component = this->fields.component;
  if ( !component )
    goto LABEL_9;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  if ( breakPoint_k__BackingField - decPoint < 1 )
  {
    WarBoardWallComponent__OnBreak(
      component,
      breakPoint_k__BackingField,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v5,
      0,
      0);
    component = this->fields.component;
    if ( component )
    {
      WarBoardWallComponent__OnDead(component, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0);
      this->fields._isDestroy_k__BackingField = 1;
      return (System_Collections_Generic_List_WarBoardTaskBase__o *)v5;
    }
LABEL_9:
    sub_1C7BD40(component, v6);
  }
  WarBoardWallComponent__OnBreak(
    component,
    breakPoint_k__BackingField,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v5,
    breakPoint_k__BackingField - decPoint,
    0);
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v5;
}


System_Int32_array *WarBoardWallData__GetIndividuality(
        WarBoardWallData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


WarBoardStageWallEntity_o *WarBoardWallData__GetWallEntity(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields.wallEntity;
}


void WarBoardWallData__SetBreakPoint(WarBoardWallData_o *this, int32_t point, const MethodInfo *method)
{
  if ( (byte_4CEC19C & 1) == 0 )
  {
    sub_1C7BAE8(&AStarSearch_TypeInfo);
    byte_4CEC19C = 1;
  }
  this->fields._breakPoint_k__BackingField = point;
  if ( point <= 0 )
  {
    this->fields._isDestroy_k__BackingField = 1;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__CacheClear(0);
  }
}


void WarBoardWallData__SetComponent(
        WarBoardWallData_o *this,
        WarBoardWallComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.component = component;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.component,
    (int32_t)component,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardWallData__SetTouchEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C7BD40(0, enable);
  WarBoardWallComponent__SetTouchEnable(component, enable, 0);
}


void WarBoardWallData__SetWallEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C7BD40(0, enable);
  WarBoardWallComponent__SetColliderEnable(component, enable, 0);
}


int32_t WarBoardWallData__get_AiTargetSortPrimeIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return 2;
}


int32_t WarBoardWallData__get_AiTargetSortSecondIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


WarBoardWallComponent_o *WarBoardWallData__get_Component(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields.component;
}


bool WarBoardWallData__get_IsAiTargetable(WarBoardWallData_o *this, const MethodInfo *method)
{
  return !this->fields._isDestroy_k__BackingField;
}


bool WarBoardWallData__get_IsPutInit(WarBoardWallData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t WarBoardWallData__get_NowSquareIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardWallData__get_PutSquareIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardWallData__get_breakPoint(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._breakPoint_k__BackingField;
}


int32_t WarBoardWallData__get_breakPointMax(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._breakPointMax_k__BackingField;
}


System_Int32_array *WarBoardWallData__get_individuality(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool WarBoardWallData__get_isDestroy(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._isDestroy_k__BackingField;
}


int32_t WarBoardWallData__get_squareIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardWallData__get_stageId(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._stageId_k__BackingField;
}


int32_t WarBoardWallData__get_wallAttackForceId(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    return wallEntity->fields.attackForceId;
  else
    return -1;
}


int32_t WarBoardWallData__get_wallDestroyEffectId(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    return wallEntity->fields.destroyEffectId;
  else
    return 0;
}


int32_t WarBoardWallData__get_wallId(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._wallId_k__BackingField;
}


int32_t WarBoardWallData__get_wallImageId(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    return wallEntity->fields.imageId;
  else
    return 0;
}


System_String_o *WarBoardWallData__get_wallMessage(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  struct System_String_StaticFields *p_message; // x8

  if ( (byte_4CEC19B & 1) == 0 )
  {
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEC19B = 1;
  }
  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    p_message = (struct System_String_StaticFields *)&wallEntity->fields.message;
  else
    p_message = string_TypeInfo->static_fields;
  return p_message->Empty;
}


System_String_o *WarBoardWallData__get_wallName(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_4CEC19A & 1) == 0 )
  {
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEC19A = 1;
  }
  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    p_name = (struct System_String_StaticFields *)&wallEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


void WarBoardWallData__set_breakPoint(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._breakPoint_k__BackingField = value;
}


void WarBoardWallData__set_breakPointMax(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._breakPointMax_k__BackingField = value;
}


void WarBoardWallData__set_individuality(WarBoardWallData_o *this, System_Int32_array *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardWallData__set_isDestroy(WarBoardWallData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDestroy_k__BackingField = value;
}


void WarBoardWallData__set_squareIndex(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void WarBoardWallData__set_stageId(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._stageId_k__BackingField = value;
}


void WarBoardWallData__set_wallId(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._wallId_k__BackingField = value;
}


void WarBoardWallData_SaveData___ctor(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isDestroy = 0;
  *(_QWORD *)&this->fields.wallId = -1;
  this->fields.breakPoint = 0;
}


void WarBoardWallData_SaveData___ctor_38590056(
        WarBoardWallData_SaveData_o *this,
        WarBoardWallData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct WarBoardWallData_o *v18; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_1C7BD40(0, v11);
  this->fields.wallId = v18->fields._wallId_k__BackingField;
  this->fields.squareIndex = v18->fields._squareIndex_k__BackingField;
  this->fields.isDestroy = v18->fields._isDestroy_k__BackingField;
  this->fields.breakPoint = v18->fields._breakPoint_k__BackingField;
  v18->fields.localSaveData = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->fields.localSaveData, (int32_t)this, v12, v13, v14, v15, v16, v17);
}


void WarBoardWallData_SaveData__Load(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields._wallId_k__BackingField = this->fields.wallId;
    owner->fields._squareIndex_k__BackingField = this->fields.squareIndex;
    owner->fields._isDestroy_k__BackingField = this->fields.isDestroy;
    owner->fields._breakPoint_k__BackingField = this->fields.breakPoint;
  }
}


void WarBoardWallData_SaveData__Save(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    this->fields.wallId = owner->fields._wallId_k__BackingField;
    this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
    this->fields.isDestroy = owner->fields._isDestroy_k__BackingField;
    this->fields.breakPoint = owner->fields._breakPoint_k__BackingField;
  }
}


void WarBoardWallData_SaveData__SetOwner(
        WarBoardWallData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *Wall; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct WarBoardWallData_o *owner; // x0

  if ( !data )
    sub_1C7BD40(this, 0);
  Wall = WarBoardData__GetWall(data, this->fields.squareIndex, 1, 0);
  this->fields.owner = Wall;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)Wall, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&owner->fields.localSaveData,
      (int32_t)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}