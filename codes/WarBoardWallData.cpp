void __fastcall WarBoardWallData___ctor(
        WarBoardWallData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserWallData_o *wallData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_Int32_array *Individuality; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t breakPoint; // w8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  int32_t defeatPoint; // w8
  WarBoardStageWallEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435268C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_WarBoardStageWallMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435268C = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout )
    goto LABEL_12;
  this->fields._squareIndex_k__BackingField = layout->fields.squareIndex;
  this->fields._stageId_k__BackingField = layout->fields.stageId;
  this->fields._wallId_k__BackingField = layout->fields.effectId;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)Individuality,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  breakPoint = layout->fields.breakPoint;
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarBoardStageWallMaster___)) == 0LL )
  {
LABEL_12:
    sub_B7076C(Instance, v8);
  }
  if ( WarBoardStageWallMaster__TryGetEntity(
         (WarBoardStageWallMaster_o *)Instance,
         &entity,
         this->fields._stageId_k__BackingField,
         this->fields._wallId_k__BackingField,
         0LL) )
  {
    v23 = (System_Int32_array **)entity;
    this->fields.wallEntity = entity;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.wallEntity, v23, v17, v18, v19, v20, v21, v22);
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


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardWallData__DecrementBreakPointPerformance(
        WarBoardWallData_o *this,
        int32_t decPoint,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  WarBoardWallComponent_o *component; // x0
  int32_t breakPoint_k__BackingField; // w1
  const MethodInfo *v10; // x2

  if ( (byte_4352690 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_4352690 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
      v7);
    component = this->fields.component;
    if ( component )
    {
      WarBoardWallComponent__OnDead(component, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, v10);
      this->fields._isDestroy_k__BackingField = 1;
      return (System_Collections_Generic_List_WarBoardTaskBase__o *)v5;
    }
LABEL_9:
    sub_B7076C(component, v6);
  }
  WarBoardWallComponent__OnBreak(
    component,
    breakPoint_k__BackingField,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v5,
    breakPoint_k__BackingField - decPoint,
    v7);
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v5;
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


void __fastcall WarBoardWallData__SetBreakPoint(WarBoardWallData_o *this, int32_t point, const MethodInfo *method)
{
  if ( (byte_435268F & 1) == 0 )
  {
    sub_B70694(&AStarSearch_TypeInfo);
    byte_435268F = 1;
  }
  this->fields._breakPoint_k__BackingField = point;
  if ( point <= 0 )
  {
    this->fields._isDestroy_k__BackingField = 1;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__CacheClear(0LL);
  }
}


void __fastcall WarBoardWallData__SetComponent(
        WarBoardWallData_o *this,
        WarBoardWallComponent_o *component,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.component = component;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.component,
    (System_Int32_array **)component,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardWallData__SetTouchEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B7076C(0LL, enable);
  WarBoardWallComponent__SetTouchEnable(component, enable, method);
}


void __fastcall WarBoardWallData__SetWallEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B7076C(0LL, enable);
  WarBoardWallComponent__SetColliderEnable(component, enable, method);
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

  if ( (byte_435268E & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_435268E = 1;
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

  if ( (byte_435268D & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_435268D = 1;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall WarBoardWallData_SaveData___ctor_21479212(
        WarBoardWallData_SaveData_o *this,
        WarBoardWallData_o *owner,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct WarBoardWallData_o *v18; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_B7076C(0LL, v11);
  this->fields.wallId = v18->fields._wallId_k__BackingField;
  this->fields.squareIndex = v18->fields._squareIndex_k__BackingField;
  this->fields.isDestroy = v18->fields._isDestroy_k__BackingField;
  this->fields.breakPoint = v18->fields._breakPoint_k__BackingField;
  v18->fields.localSaveData = this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v18->fields.localSaveData,
    (System_Int32_array **)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall WarBoardWallData_SaveData__Load(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *owner; // x8
  struct WarBoardWallData_o *v3; // x8
  struct WarBoardWallData_o *v4; // x8
  struct WarBoardWallData_o *v5; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields._wallId_k__BackingField = this->fields.wallId;
    v3 = this->fields.owner;
    if ( !v3
      || (v3->fields._squareIndex_k__BackingField = this->fields.squareIndex, (v4 = this->fields.owner) == 0LL)
      || (v4->fields._isDestroy_k__BackingField = this->fields.isDestroy, (v5 = this->fields.owner) == 0LL) )
    {
      sub_B7076C(this, method);
    }
    v5->fields._breakPoint_k__BackingField = this->fields.breakPoint;
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardWallData_o *owner; // x0

  if ( !data )
    sub_B7076C(this, 0LL);
  Wall = WarBoardData__GetWall(data, this->fields.squareIndex, 1, 0LL);
  this->fields.owner = Wall;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)Wall, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B70630(
      (BattleServantConfConponent_o *)&owner->fields.localSaveData,
      (System_Int32_array **)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}