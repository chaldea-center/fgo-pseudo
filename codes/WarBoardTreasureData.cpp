void __fastcall WarBoardTreasureData___ctor(
        WarBoardTreasureData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  struct System_Int32_array *Individuality; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Entity; // x0
  struct WarBoardTreasureEntity_o **p_treasureEntity; // x19
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FA262 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardTreasureMaster___, layout);
    sub_1B640C8(&Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FA262 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields._treasureId_k__BackingField = layout->fields.effectId,
        Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL),
        this->fields._individuality_k__BackingField = Individuality,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
          (int32_t)Individuality,
          v9,
          v10),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardTreasureMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields._treasureId_k__BackingField,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarBoardTreasureMaster__WarBoardTreasureEntity__int__GetEntity__);
  this->fields.treasureEntity = (struct WarBoardTreasureEntity_o *)Entity;
  p_treasureEntity = &this->fields.treasureEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_treasureEntity, (int32_t)Entity, v13, v14);
  *((_BYTE *)p_treasureEntity - 20) = 0;
}


bool __fastcall WarBoardTreasureData__Get(
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
    sub_1B64324(this);
  WarBoardTreasureComponent__OnUse(
    (WarBoardTreasureComponent_o *)this,
    piece->fields._nowSquareIndex_k__BackingField,
    endCallback,
    0LL);
  return 1;
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
  int32_t v3; // w3

  this->fields.component = component;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.component, (int32_t)component, (int32_t)method, v3);
}


void __fastcall WarBoardTreasureData__SetTouchEnable(
        WarBoardTreasureData_o *this,
        bool enable,
        const MethodInfo *method)
{
  WarBoardTreasureComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FA263 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FA263 = 1;
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
  int32_t v3; // w3

  this->fields._individuality_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall WarBoardTreasureData_SaveData___ctor_35241300(
        WarBoardTreasureData_SaveData_o *this,
        WarBoardTreasureData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardTreasureData_o *v9; // x0
  struct WarBoardTreasureEntity_o *treasureEntity; // x8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  v9 = this->fields.owner;
  if ( !v9 )
    sub_1B64324(0LL);
  this->fields.squareIndex = v9->fields._squareIndex_k__BackingField;
  this->fields.isUse = v9->fields._isUse_k__BackingField;
  this->fields.treasureId = v9->fields._treasureId_k__BackingField;
  treasureEntity = v9->fields.treasureEntity;
  if ( treasureEntity )
    LODWORD(treasureEntity) = treasureEntity->fields.rarity;
  this->fields.iconId = (int)treasureEntity;
  v9->fields.localSaveData = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->fields.localSaveData, (int32_t)this, v7, v8);
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
  struct WarBoardTreasureData_o *owner; // x8
  struct WarBoardTreasureEntity_o *treasureEntity; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    this->fields.squareIndex = owner->fields._squareIndex_k__BackingField;
    this->fields.isUse = owner->fields._isUse_k__BackingField;
    this->fields.treasureId = owner->fields._treasureId_k__BackingField;
    treasureEntity = owner->fields.treasureEntity;
    if ( treasureEntity )
      LODWORD(treasureEntity) = treasureEntity->fields.rarity;
    this->fields.iconId = (int)treasureEntity;
  }
}


void __fastcall WarBoardTreasureData_SaveData__SetOwner(
        WarBoardTreasureData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardTreasureData_o *Treasure; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardTreasureData_o *owner; // x0

  if ( !data )
    sub_1B64324(this);
  Treasure = WarBoardData__GetTreasure(data, this->fields.squareIndex, 0LL);
  this->fields.owner = Treasure;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)Treasure, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


int32_t __fastcall WarBoardTreasureData_SaveData__get_Effect(
        WarBoardTreasureData_SaveData_o *this,
        const MethodInfo *method)
{
  WarBoardTreasureComponent_c *v3; // x0
  int32_t iconId; // w19

  if ( (byte_49FA265 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardTreasureComponent_TypeInfo, method);
    byte_49FA265 = 1;
  }
  v3 = WarBoardTreasureComponent_TypeInfo;
  iconId = this->fields.iconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v3 = WarBoardTreasureComponent_TypeInfo;
  }
  return iconId / v3->static_fields->RARITY_TYPE;
}


int32_t __fastcall WarBoardTreasureData_SaveData__get_Rarity(
        WarBoardTreasureData_SaveData_o *this,
        const MethodInfo *method)
{
  WarBoardTreasureComponent_c *v3; // x0
  int32_t iconId; // w19

  if ( (byte_49FA264 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardTreasureComponent_TypeInfo, method);
    byte_49FA264 = 1;
  }
  v3 = WarBoardTreasureComponent_TypeInfo;
  iconId = this->fields.iconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v3 = WarBoardTreasureComponent_TypeInfo;
  }
  return iconId % v3->static_fields->RARITY_TYPE;
}