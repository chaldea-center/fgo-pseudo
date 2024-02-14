void __fastcall WarBoardTreasureData___ctor(
        WarBoardTreasureData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  struct System_Int32_array *Individuality; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct WarBoardTreasureEntity_o *Entity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4215641 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___, layout);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215641 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields._treasureId_k__BackingField = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
          (System_Int32_array **)Individuality,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (struct WarBoardTreasureEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                this->fields._treasureId_k__BackingField,
                                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
  this->fields.treasureEntity = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.treasureEntity,
    (System_Int32_array **)Entity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields._isUse_k__BackingField = 0;
}


bool __fastcall WarBoardTreasureData__Get(
        WarBoardTreasureData_o *this,
        WarBoardPieceData_o *piece,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  WarBoardTreasureData_o *v5; // x21

  if ( !piece )
    goto LABEL_6;
  v5 = this;
  if ( WarBoardPieceData__get_isPlayerGroup(piece, 0LL) )
  {
    this = (WarBoardTreasureData_o *)v5->fields.component;
    if ( this )
    {
      WarBoardTreasureComponent__OnUse(
        (WarBoardTreasureComponent_o *)this,
        piece->fields._nowSquareIndex_k__BackingField,
        endCallback,
        0LL);
      return 1;
    }
LABEL_6:
    sub_B0D97C(this);
  }
  return 0;
}


System_Int32_array *__fastcall WarBoardTreasureData__GetIndividuality(
        WarBoardTreasureData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


WarBoardTreasureEntity_o *__fastcall WarBoardTreasureData__GetTreasureEntity(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureEntity;
}


void __fastcall WarBoardTreasureData__SetComponent(
        WarBoardTreasureData_o *this,
        WarBoardTreasureComponent_o *component,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.component = component;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.component,
    (System_Int32_array **)component,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardTreasureData__SetTouchEnable(
        WarBoardTreasureData_o *this,
        bool enable,
        const MethodInfo *method)
{
  WarBoardTreasureComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B0D97C(0LL);
  WarBoardTreasureComponent__SetTouchEnable(component, enable, 0LL);
}


void __fastcall WarBoardTreasureData__SetTreasureEnable(
        WarBoardTreasureData_o *this,
        bool enable,
        const MethodInfo *method)
{
  WarBoardTreasureComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B0D97C(0LL);
  WarBoardTreasureComponent__SetColliderEnable(component, enable, 0LL);
}


void __fastcall WarBoardTreasureData__Use(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = 1;
}


int32_t __fastcall WarBoardTreasureData__get_AiTargetSortPrimeIndex(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall WarBoardTreasureData__get_AiTargetSortSecondIndex(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


WarBoardTreasureComponent_o *__fastcall WarBoardTreasureData__get_Component(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  return this->fields.component;
}


bool __fastcall WarBoardTreasureData__get_IsAiTargetable(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return !this->fields._isUse_k__BackingField;
}


bool __fastcall WarBoardTreasureData__get_IsPutInit(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall WarBoardTreasureData__get_NowSquareIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardTreasureData__get_PutSquareIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


System_Int32_array *__fastcall WarBoardTreasureData__get_individuality(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool __fastcall WarBoardTreasureData__get_isUse(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._isUse_k__BackingField;
}


int32_t __fastcall WarBoardTreasureData__get_squareIndex(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


int32_t __fastcall WarBoardTreasureData__get_treasureIconId(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureEntity_o *treasureEntity; // x8

  treasureEntity = this->fields.treasureEntity;
  if ( treasureEntity )
    return treasureEntity->fields.rarity;
  else
    return 0;
}


int32_t __fastcall WarBoardTreasureData__get_treasureId(WarBoardTreasureData_o *this, const MethodInfo *method)
{
  return this->fields._treasureId_k__BackingField;
}


System_String_o *__fastcall WarBoardTreasureData__get_treasureName(
        WarBoardTreasureData_o *this,
        const MethodInfo *method)
{
  struct WarBoardTreasureEntity_o *treasureEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_4215642 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    byte_4215642 = 1;
  }
  treasureEntity = this->fields.treasureEntity;
  if ( treasureEntity )
    p_name = (struct System_String_StaticFields *)&treasureEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


void __fastcall WarBoardTreasureData__set_individuality(
        WarBoardTreasureData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardTreasureData__set_isUse(WarBoardTreasureData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = value;
}


void __fastcall WarBoardTreasureData__set_squareIndex(
        WarBoardTreasureData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}


void __fastcall WarBoardTreasureData__set_treasureId(
        WarBoardTreasureData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._treasureId_k__BackingField = value;
}


void __fastcall WarBoardTreasureData_SaveData___ctor(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareIndex = -1;
  this->fields.isUse = 0;
  *(_QWORD *)&this->fields.treasureId = 0x1FFFFFFFFLL;
}


void __fastcall WarBoardTreasureData_SaveData___ctor_19713628(
        WarBoardTreasureData_SaveData_o *this,
        WarBoardTreasureData_o *owner,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  struct WarBoardTreasureData_o *v6; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B0D840(&this->fields.owner, owner);
  WarBoardTreasureData_SaveData__Save(this, v5);
  v6 = this->fields.owner;
  if ( !v6 )
    sub_B0D97C(0LL);
  v6->fields.localSaveData = this;
  sub_B0D840(&v6->fields.localSaveData, this);
}


void __fastcall WarBoardTreasureData_SaveData__Load(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
    owner->fields._isUse_k__BackingField = this->fields.isUse;
}


void __fastcall WarBoardTreasureData_SaveData__Save(WarBoardTreasureData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *owner; // x0

  owner = this->fields.owner;
  if ( owner )
  {
    this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
    this->fields.isUse = owner->fields._isUse_k__BackingField;
    this->fields.treasureId = owner->fields._treasureId_k__BackingField;
    this->fields.iconId = WarBoardTreasureData__get_treasureIconId(owner, 0LL);
  }
}


void __fastcall WarBoardTreasureData_SaveData__SetOwner(
        WarBoardTreasureData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardTreasureData_o *Treasure; // x0
  struct WarBoardTreasureData_o *owner; // x0

  if ( !data )
    sub_B0D97C(this);
  Treasure = WarBoardData__GetTreasure(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Treasure;
  sub_B0D840(&this->fields.owner, Treasure);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B0D840(&owner->fields.localSaveData, this);
  }
}


int32_t __fastcall WarBoardTreasureData_SaveData__get_Effect(
        WarBoardTreasureData_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t iconId; // w19
  WarBoardTreasureComponent_c *v4; // x0

  if ( (byte_4211F24 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardTreasureComponent_TypeInfo, method);
    byte_4211F24 = 1;
  }
  iconId = this->fields.iconId;
  v4 = WarBoardTreasureComponent_TypeInfo;
  if ( (BYTE3(WarBoardTreasureComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v4 = WarBoardTreasureComponent_TypeInfo;
  }
  return iconId / v4->static_fields->RARITY_TYPE;
}


int32_t __fastcall WarBoardTreasureData_SaveData__get_Rarity(
        WarBoardTreasureData_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t iconId; // w19
  WarBoardTreasureComponent_c *v4; // x0

  if ( (byte_4211F23 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardTreasureComponent_TypeInfo, method);
    byte_4211F23 = 1;
  }
  iconId = this->fields.iconId;
  v4 = WarBoardTreasureComponent_TypeInfo;
  if ( (BYTE3(WarBoardTreasureComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v4 = WarBoardTreasureComponent_TypeInfo;
  }
  return iconId % v4->static_fields->RARITY_TYPE;
}