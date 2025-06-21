void __fastcall WarBoardWallData___ctor(
        WarBoardWallData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserWallData_o *wallData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct System_Int32_array *Individuality; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t breakPoint; // w8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t defeatPoint; // w8
  WarBoardStageWallEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A13E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarBoardStageWallMaster___, layout);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1A13E = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout )
    goto LABEL_12;
  *(_QWORD *)&this->fields._stageId_k__BackingField = *(_QWORD *)&layout->fields.stageId;
  this->fields._wallId_k__BackingField = layout->fields.effectId;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._individuality_k__BackingField, (int32_t)Individuality, v11, v12);
  breakPoint = layout->fields.breakPoint;
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarBoardStageWallMaster___)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(Instance, v9);
  }
  if ( WarBoardStageWallMaster__TryGetEntity(
         (WarBoardStageWallMaster_o *)Instance,
         &entity,
         this->fields._stageId_k__BackingField,
         this->fields._wallId_k__BackingField,
         0LL) )
  {
    v16 = (int)entity;
    this->fields.wallEntity = entity;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.wallEntity, v16, v14, v15);
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


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardWallData__DecrementBreakPointPerformance(
        WarBoardWallData_o *this,
        int32_t decPoint,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x1
  WarBoardWallComponent_o *component; // x0
  int32_t breakPoint_k__BackingField; // w1

  if ( (byte_4B1A142 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, *(_QWORD *)&decPoint);
    sub_1BCAFF8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v5);
    byte_4B1A142 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  component = this->fields.component;
  if ( !component )
    goto LABEL_9;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  if ( breakPoint_k__BackingField - decPoint < 1 )
  {
    WarBoardWallComponent__OnBreak(
      component,
      breakPoint_k__BackingField,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v6,
      0,
      0LL);
    component = this->fields.component;
    if ( component )
    {
      WarBoardWallComponent__OnDead(component, (System_Collections_Generic_List_WarBoardTaskBase__o *)v6, 0LL);
      this->fields._isDestroy_k__BackingField = 1;
      return (System_Collections_Generic_List_WarBoardTaskBase__o *)v6;
    }
LABEL_9:
    sub_1BCB254(component, v7);
  }
  WarBoardWallComponent__OnBreak(
    component,
    breakPoint_k__BackingField,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v6,
    breakPoint_k__BackingField - decPoint,
    0LL);
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v6;
}


System_Int32_array *__fastcall WarBoardWallData__GetIndividuality(
        WarBoardWallData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


WarBoardStageWallEntity_o *__fastcall WarBoardWallData__GetWallEntity(
        WarBoardWallData_o *this,
        const MethodInfo *method)
{
  return this->fields.wallEntity;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallData__SetBreakPoint(WarBoardWallData_o *this, int32_t point, const MethodInfo *method)
{
  if ( (byte_4B1A141 & 1) == 0 )
  {
    sub_1BCAFF8(&AStarSearch_TypeInfo, *(_QWORD *)&point);
    byte_4B1A141 = 1;
  }
  this->fields._breakPoint_k__BackingField = point;
  if ( point <= 0 )
  {
    this->fields._isDestroy_k__BackingField = 1;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__CacheClear(0LL);
  }
}


void __fastcall WarBoardWallData__SetComponent(
        WarBoardWallData_o *this,
        WarBoardWallComponent_o *component,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.component = component;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.component, (int32_t)component, (int32_t)method, v3);
}


void __fastcall WarBoardWallData__SetTouchEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BCB254(0LL, enable);
  WarBoardWallComponent__SetTouchEnable(component, enable, 0LL);
}


void __fastcall WarBoardWallData__SetWallEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BCB254(0LL, enable);
  WarBoardWallComponent__SetColliderEnable(component, enable, 0LL);
}


int32_t __fastcall WarBoardWallData__get_AiTargetSortPrimeIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return 2;
}


int32_t __fastcall WarBoardWallData__get_AiTargetSortSecondIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


WarBoardWallComponent_o *__fastcall WarBoardWallData__get_Component(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields.component;
}


bool __fastcall WarBoardWallData__get_IsAiTargetable(WarBoardWallData_o *this, const MethodInfo *method)
{
  return !this->fields._isDestroy_k__BackingField;
}


bool __fastcall WarBoardWallData__get_IsPutInit(WarBoardWallData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall WarBoardWallData__get_NowSquareIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardWallData__get_PutSquareIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardWallData__get_breakPoint(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._breakPoint_k__BackingField;
}


int32_t __fastcall WarBoardWallData__get_breakPointMax(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._breakPointMax_k__BackingField;
}


System_Int32_array *__fastcall WarBoardWallData__get_individuality(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool __fastcall WarBoardWallData__get_isDestroy(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._isDestroy_k__BackingField;
}


int32_t __fastcall WarBoardWallData__get_squareIndex(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardWallData__get_stageId(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._stageId_k__BackingField;
}


int32_t __fastcall WarBoardWallData__get_wallAttackForceId(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    return wallEntity->fields.attackForceId;
  else
    return -1;
}


int32_t __fastcall WarBoardWallData__get_wallDestroyEffectId(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    return wallEntity->fields.destroyEffectId;
  else
    return 0;
}


int32_t __fastcall WarBoardWallData__get_wallId(WarBoardWallData_o *this, const MethodInfo *method)
{
  return this->fields._wallId_k__BackingField;
}


int32_t __fastcall WarBoardWallData__get_wallImageId(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    return wallEntity->fields.imageId;
  else
    return 0;
}


System_String_o *__fastcall WarBoardWallData__get_wallMessage(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  struct System_String_StaticFields *p_message; // x8

  if ( (byte_4B1A140 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    byte_4B1A140 = 1;
  }
  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    p_message = (struct System_String_StaticFields *)&wallEntity->fields.message;
  else
    p_message = string_TypeInfo->static_fields;
  return p_message->Empty;
}


System_String_o *__fastcall WarBoardWallData__get_wallName(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_4B1A13F & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    byte_4B1A13F = 1;
  }
  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    p_name = (struct System_String_StaticFields *)&wallEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


void __fastcall WarBoardWallData__set_breakPoint(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._breakPoint_k__BackingField = value;
}


void __fastcall WarBoardWallData__set_breakPointMax(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._breakPointMax_k__BackingField = value;
}


void __fastcall WarBoardWallData__set_individuality(
        WarBoardWallData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._individuality_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall WarBoardWallData__set_isDestroy(WarBoardWallData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDestroy_k__BackingField = value;
}


void __fastcall WarBoardWallData__set_squareIndex(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void __fastcall WarBoardWallData__set_stageId(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._stageId_k__BackingField = value;
}


void __fastcall WarBoardWallData__set_wallId(WarBoardWallData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._wallId_k__BackingField = value;
}


void __fastcall WarBoardWallData_SaveData___ctor(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isDestroy = 0;
  *(_QWORD *)&this->fields.wallId = -1LL;
  this->fields.breakPoint = 0;
}


void __fastcall WarBoardWallData_SaveData___ctor_37328680(
        WarBoardWallData_SaveData_o *this,
        WarBoardWallData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct WarBoardWallData_o *v10; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  v10 = this->fields.owner;
  if ( !v10 )
    sub_1BCB254(0LL, v7);
  this->fields.wallId = v10->fields._wallId_k__BackingField;
  this->fields.squareIndex = v10->fields._squareIndex_k__BackingField;
  this->fields.isDestroy = v10->fields._isDestroy_k__BackingField;
  this->fields.breakPoint = v10->fields._breakPoint_k__BackingField;
  v10->fields.localSaveData = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10->fields.localSaveData, (int32_t)this, v8, v9);
}


void __fastcall WarBoardWallData_SaveData__Load(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
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


void __fastcall WarBoardWallData_SaveData__Save(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
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


void __fastcall WarBoardWallData_SaveData__SetOwner(
        WarBoardWallData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *Wall; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct WarBoardWallData_o *owner; // x0

  if ( !data )
    sub_1BCB254(this, 0LL);
  Wall = WarBoardData__GetWall(data, this->fields.squareIndex, 1, 0LL);
  this->fields.owner = Wall;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.owner, (int32_t)Wall, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1BCAF9C((CGThumbnailListItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}