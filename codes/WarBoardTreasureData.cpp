void WarBoardTreasureData___ctor(
        WarBoardTreasureData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t effectId; // w9
  struct System_Int32_array *Individuality; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Entity; // x0
  struct WarBoardTreasureEntity_o **p_treasureEntity; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_593617D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593617D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !layout )
    goto LABEL_7;
  effectId = layout->fields.effectId;
  this->fields._squareIndex_k__BackingField = layout->fields.squareIndex;
  this->fields._treasureId_k__BackingField = effectId;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0);
  this->fields._individuality_k__BackingField = Individuality;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___)) == 0 )
  {
LABEL_7:
    sub_21FFECC(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields._treasureId_k__BackingField,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
  this->fields.treasureEntity = (struct WarBoardTreasureEntity_o *)Entity;
  p_treasureEntity = &this->fields.treasureEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_treasureEntity, (int32_t)Entity, v17, v18, v19, v20, v21, v22);
  *((_BYTE *)p_treasureEntity - 20) = 0;
}


bool WarBoardTreasureData__Get(
        WarBoardTreasureData_o *this,
        WarBoardPieceData_o *piece,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  if ( !piece )
    goto LABEL_7;
  if ( piece->fields._forceId_k__BackingField || piece->fields._groupId_k__BackingField )
    return 0;
  this = (WarBoardTreasureData_o *)this->fields.component;
  if ( !this )
LABEL_7:
    sub_21FFECC(this, piece);
  WarBoardTreasureComponent__OnUse(
    (WarBoardTreasureComponent_o *)this,
    piece->fields._nowSquareIndex_k__BackingField,
    endCallback,
    0);
  return 1;
}


System_Int32_array *WarBoardTreasureData__GetIndividuality(
        WarBoardTreasureData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


WarBoardTreasureEntity_o *WarBoardTreasureData__GetTreasureEntity(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureEntity;
}


void WarBoardTreasureData__SetComponent(
        WarBoardTreasureData_o *this,
        WarBoardTreasureComponent_o *component,
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
void WarBoardTreasureData__SetTouchEnable(WarBoardTreasureData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardTreasureComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
  WarBoardTreasureComponent__SetTouchEnable(component, enable, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardTreasureData__SetTreasureEnable(WarBoardTreasureData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardTreasureComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
  WarBoardTreasureComponent__SetColliderEnable(component, enable, 0);
}


void WarBoardTreasureData__Use(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = 1;
}


int32_t WarBoardTreasureData__get_AiTargetSortPrimeIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t WarBoardTreasureData__get_AiTargetSortSecondIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


WarBoardTreasureComponent_o *WarBoardTreasureData__get_Component(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  return this->fields.component;
}


bool WarBoardTreasureData__get_IsAiTargetable(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return !this->fields._isUse_k__BackingField;
}


bool WarBoardTreasureData__get_IsPutInit(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t WarBoardTreasureData__get_NowSquareIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardTreasureData__get_PutSquareIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


System_Int32_array *WarBoardTreasureData__get_individuality(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool WarBoardTreasureData__get_isUse(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._isUse_k__BackingField;
}


int32_t WarBoardTreasureData__get_squareIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t WarBoardTreasureData__get_treasureIconId(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureEntity_o *treasureEntity; // x8

  treasureEntity = this->fields.treasureEntity;
  if ( treasureEntity )
    return treasureEntity->fields.rarity;
  else
    return 0;
}


int32_t WarBoardTreasureData__get_treasureId(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._treasureId_k__BackingField;
}


System_String_o *WarBoardTreasureData__get_treasureName(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureEntity_o *treasureEntity; // x8
  System_String_o **p_name; // x8

  treasureEntity = this->fields.treasureEntity;
  if ( treasureEntity )
    p_name = &treasureEntity->fields.name;
  else
    p_name = *(System_String_o ***)(qword_594C0B8 + 184);
  return *p_name;
}


void WarBoardTreasureData__set_individuality(
        WarBoardTreasureData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
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


void WarBoardTreasureData__set_isUse(WarBoardTreasureData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = value;
}


void WarBoardTreasureData__set_squareIndex(WarBoardTreasureData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void WarBoardTreasureData__set_treasureId(WarBoardTreasureData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._treasureId_k__BackingField = value;
}


void WarBoardTreasureData_SaveData___ctor(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isUse = 0;
  this->fields.squareIndex = -1;
  *(_QWORD *)&this->fields.treasureId = 0x1FFFFFFFFLL;
}


void WarBoardTreasureData_SaveData___ctor_45000896(
        WarBoardTreasureData_SaveData_o *this,
        WarBoardTreasureData_o *owner,
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
  struct WarBoardTreasureData_o *v18; // x0
  bool isUse_k__BackingField; // w10
  int32_t treasureId_k__BackingField; // w11
  struct WarBoardTreasureEntity_o *treasureEntity; // x8

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_21FFECC(0, v11);
  isUse_k__BackingField = v18->fields._isUse_k__BackingField;
  treasureId_k__BackingField = v18->fields._treasureId_k__BackingField;
  treasureEntity = v18->fields.treasureEntity;
  this->fields.squareIndex = v18->fields._squareIndex_k__BackingField;
  this->fields.isUse = isUse_k__BackingField;
  this->fields.treasureId = treasureId_k__BackingField;
  if ( treasureEntity )
    LODWORD(treasureEntity) = treasureEntity->fields.rarity;
  v18->fields.localSaveData = this;
  this->fields.iconId = (int)treasureEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v18->fields.localSaveData,
    (int32_t)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void WarBoardTreasureData_SaveData__Load(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
    owner->fields._isUse_k__BackingField = this->fields.isUse;
}


void WarBoardTreasureData_SaveData__Save(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *owner; // x8
  int32_t squareIndex_k__BackingField; // w9
  bool isUse_k__BackingField; // w10
  int32_t treasureId_k__BackingField; // w11
  struct WarBoardTreasureEntity_o *treasureEntity; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    squareIndex_k__BackingField = owner->fields._squareIndex_k__BackingField;
    isUse_k__BackingField = owner->fields._isUse_k__BackingField;
    treasureId_k__BackingField = owner->fields._treasureId_k__BackingField;
    treasureEntity = owner->fields.treasureEntity;
    this->fields.squareIndex = squareIndex_k__BackingField;
    this->fields.isUse = isUse_k__BackingField;
    this->fields.treasureId = treasureId_k__BackingField;
    if ( treasureEntity )
      LODWORD(treasureEntity) = treasureEntity->fields.rarity;
    this->fields.iconId = (int)treasureEntity;
  }
}


void WarBoardTreasureData_SaveData__SetOwner(
        WarBoardTreasureData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardTreasureData_o *Treasure; // x0
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
  struct WarBoardTreasureData_o *owner; // x0

  if ( !data )
    sub_21FFECC(this, 0);
  Treasure = WarBoardData__GetTreasure(data, this->fields.squareIndex, 0);
  this->fields.owner = Treasure;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)Treasure, v5, v6, v7, v8, v9, v10);
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


int32_t WarBoardTreasureData_SaveData__get_Effect(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardTreasureComponent_c *v4; // x0
  int32_t iconId; // w19

  if ( (byte_593617F & 1) == 0 )
  {
    sub_21FFC50(&WarBoardTreasureComponent_TypeInfo);
    byte_593617F = 1;
  }
  v4 = WarBoardTreasureComponent_TypeInfo;
  iconId = this->fields.iconId;
  if ( !*(&WarBoardTreasureComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo, method, v2);
    v4 = WarBoardTreasureComponent_TypeInfo;
  }
  return iconId / v4->static_fields->RARITY_TYPE;
}


int32_t WarBoardTreasureData_SaveData__get_Rarity(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardTreasureComponent_c *v4; // x0
  int32_t iconId; // w19

  if ( (byte_593617E & 1) == 0 )
  {
    sub_21FFC50(&WarBoardTreasureComponent_TypeInfo);
    byte_593617E = 1;
  }
  v4 = WarBoardTreasureComponent_TypeInfo;
  iconId = this->fields.iconId;
  if ( !*(&WarBoardTreasureComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo, method, v2);
    v4 = WarBoardTreasureComponent_TypeInfo;
  }
  return iconId % v4->static_fields->RARITY_TYPE;
}