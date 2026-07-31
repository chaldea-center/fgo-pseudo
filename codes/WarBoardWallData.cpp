void WarBoardWallData___ctor(
        WarBoardWallData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserWallData_o *wallData,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct System_Int32_array *Individuality; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t breakPoint; // w8
  const MethodInfo_476E8C0 *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  int32_t breakPoint_k__BackingField; // w8
  WarBoardStageWallEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593618D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardStageWallMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593618D = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !layout )
    goto LABEL_12;
  *(_QWORD *)&this->fields._stageId_k__BackingField = *(_QWORD *)&layout->fields.stageId;
  this->fields._wallId_k__BackingField = layout->fields.effectId;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0);
  this->fields._individuality_k__BackingField = Individuality;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  breakPoint = layout->fields.breakPoint;
  v17 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  Instance = SingletonMonoBehaviour_object___get_Instance(v17);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardStageWallMaster___)) == 0 )
  {
LABEL_12:
    sub_21FFECC(Instance, v8);
  }
  if ( WarBoardStageWallMaster__TryGetEntity(
         (WarBoardStageWallMaster_o *)Instance,
         &entity,
         this->fields._stageId_k__BackingField,
         this->fields._wallId_k__BackingField,
         0) )
  {
    v24 = (int)entity;
    this->fields.wallEntity = entity;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.wallEntity, v24, v18, v19, v20, v21, v22, v23);
  }
  if ( wallData )
  {
    this->fields._wallId_k__BackingField = wallData->fields.id;
    breakPoint_k__BackingField = *(_QWORD *)&wallData->fields.defeatPoint;
    *(int32x2_t *)&this->fields._squareIndex_k__BackingField = vrev64_s32(*(int32x2_t *)&wallData->fields.defeatPoint);
  }
  else
  {
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  }
  this->fields._isDestroy_k__BackingField = breakPoint_k__BackingField < 1;
}


System_Collections_Generic_List_WarBoardTaskBase__o *WarBoardWallData__DecrementBreakPointPerformance(
        WarBoardWallData_o *this,
        int32_t decPoint,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 breakPoint_k__BackingField; // x1
  WarBoardWallComponent_o *component; // x0

  if ( (byte_593618F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_593618F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = (unsigned int)this->fields._breakPoint_k__BackingField;
  component = this->fields.component;
  if ( (int)breakPoint_k__BackingField - decPoint < 1 )
  {
    if ( component )
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
    }
LABEL_10:
    sub_21FFECC(component, breakPoint_k__BackingField);
  }
  if ( !component )
    goto LABEL_10;
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


// local variable allocation has failed, the output may be wrong!
void WarBoardWallData__SetBreakPoint(WarBoardWallData_o *this, int32_t point, const MethodInfo *method)
{
  if ( (byte_593618E & 1) == 0 )
  {
    sub_21FFC50(&AStarSearch_TypeInfo);
    byte_593618E = 1;
  }
  this->fields._breakPoint_k__BackingField = point;
  if ( point <= 0 )
  {
    this->fields._isDestroy_k__BackingField = 1;
    if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, *(_QWORD *)&point, method);
    AStarSearch__CacheClear(0);
  }
}


void WarBoardWallData__SetComponent(
        WarBoardWallData_o *this,
        WarBoardWallComponent_o *component,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.component = component;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.component,
    (int32_t)component,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardWallData__SetTouchEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
  WarBoardWallComponent__SetTouchEnable(component, enable, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardWallData__SetWallEnable(WarBoardWallData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardWallComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
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
  System_String_o **p_message; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    p_message = &wallEntity->fields.message;
  else
    p_message = *(System_String_o ***)(qword_594C0B8 + 184);
  return *p_message;
}


System_String_o *WarBoardWallData__get_wallName(WarBoardWallData_o *this, const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o **p_name; // x8

  wallEntity = this->fields.wallEntity;
  if ( wallEntity )
    p_name = &wallEntity->fields.name;
  else
    p_name = *(System_String_o ***)(qword_594C0B8 + 184);
  return *p_name;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._individuality_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  this->fields.breakPoint = 0;
  *(_QWORD *)&this->fields.wallId = -1;
}


void WarBoardWallData_SaveData___ctor_45001012(
        WarBoardWallData_SaveData_o *this,
        WarBoardWallData_o *owner,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct WarBoardWallData_o *v18; // x0
  MissionNaviTransitionBoardItem_o *p_localSaveData; // x0
  int32_t IconName_k__BackingField_high; // w9
  int32_t Name_k__BackingField; // w11
  char QuestId_k__BackingField; // w10

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_21FFECC(0, v11);
  v18->fields.localSaveData = this;
  p_localSaveData = (MissionNaviTransitionBoardItem_o *)&v18->fields.localSaveData;
  IconName_k__BackingField_high = HIDWORD(p_localSaveData[-1].fields._IconName_k__BackingField);
  Name_k__BackingField = (int32_t)p_localSaveData[-1].fields._Name_k__BackingField;
  QuestId_k__BackingField = p_localSaveData[-1].fields._QuestId_k__BackingField;
  this->fields.wallId = *(_DWORD *)&p_localSaveData[-1].fields._IsNotDisplayQuestInfo_k__BackingField;
  this->fields.squareIndex = IconName_k__BackingField_high;
  this->fields.isDestroy = QuestId_k__BackingField;
  this->fields.breakPoint = Name_k__BackingField;
  sub_21FFBF4(p_localSaveData, (int32_t)this, v12, v13, v14, v15, v16, v17);
}


void WarBoardWallData_SaveData__Load(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *owner; // x8
  int32_t squareIndex; // w11
  bool isDestroy; // w10
  int32_t breakPoint; // w9

  owner = this->fields.owner;
  if ( owner )
  {
    squareIndex = this->fields.squareIndex;
    isDestroy = this->fields.isDestroy;
    owner->fields._wallId_k__BackingField = this->fields.wallId;
    breakPoint = this->fields.breakPoint;
    owner->fields._isDestroy_k__BackingField = isDestroy;
    owner->fields._squareIndex_k__BackingField = squareIndex;
    owner->fields._breakPoint_k__BackingField = breakPoint;
  }
}


void WarBoardWallData_SaveData__Save(WarBoardWallData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *owner; // x8
  int32_t wallId_k__BackingField; // w9
  bool isDestroy_k__BackingField; // w11
  int32_t breakPoint_k__BackingField; // w8
  int32_t squareIndex_k__BackingField; // w10

  owner = this->fields.owner;
  if ( owner )
  {
    wallId_k__BackingField = owner->fields._wallId_k__BackingField;
    isDestroy_k__BackingField = owner->fields._isDestroy_k__BackingField;
    squareIndex_k__BackingField = owner->fields._squareIndex_k__BackingField;
    breakPoint_k__BackingField = owner->fields._breakPoint_k__BackingField;
    this->fields.isDestroy = isDestroy_k__BackingField;
    this->fields.wallId = wallId_k__BackingField;
    this->fields.squareIndex = squareIndex_k__BackingField;
    this->fields.breakPoint = breakPoint_k__BackingField;
  }
}


void WarBoardWallData_SaveData__SetOwner(
        WarBoardWallData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *Wall; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct WarBoardWallData_o *owner; // x0

  if ( !data )
    sub_21FFECC(this, 0);
  Wall = WarBoardData__GetWall(data, this->fields.squareIndex, 1, 0);
  this->fields.owner = Wall;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)Wall, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&owner->fields.localSaveData,
      (int32_t)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}