void TranslucentActorVisualInfo___ctor(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TranslucentActorVisualInfo__ResetProperties(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = 0;
  this->fields._Alpha_k__BackingField = 1.0;
  this->fields._IsDrawShadow_k__BackingField = 1;
}


void TranslucentActorVisualInfo__UpdateByBuffs(
        TranslucentActorVisualInfo_o *this,
        BattleBuffData_BuffData_array *buffDataArray,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  Il2CppObject *v6; // x20
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  BuffEntity_o *v9; // x20
  System_Nullable_float__o BattleCharaAlpha; // x0
  float value; // s0
  char IsDrawShadowDespiteBattleCharaInvisible; // w8

  if ( (byte_4C3AD8E & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_float__get_HasValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3AD8E = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)buffDataArray,
         0,
         0,
         (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_BattleBuffData_BuffData___);
  if ( !v5 )
    goto LABEL_10;
  v6 = v5;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             (int32_t)v6[1].klass,
             (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = (BuffEntity_o *)Entity;
    this->fields._IsActive_k__BackingField = 1;
    BattleCharaAlpha = BuffEntity__GetBattleCharaAlpha((BuffEntity_o *)Entity, 0);
    value = 0.2;
    if ( BattleCharaAlpha.fields.hasValue )
      value = BattleCharaAlpha.fields.value;
    this->fields._Alpha_k__BackingField = value;
    IsDrawShadowDespiteBattleCharaInvisible = BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(v9, 0);
  }
  else
  {
LABEL_10:
    this->fields._IsActive_k__BackingField = 0;
    this->fields._Alpha_k__BackingField = 1.0;
    IsDrawShadowDespiteBattleCharaInvisible = 1;
  }
  this->fields._IsDrawShadow_k__BackingField = IsDrawShadowDespiteBattleCharaInvisible;
}


float TranslucentActorVisualInfo__get_Alpha(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  return this->fields._Alpha_k__BackingField;
}


bool TranslucentActorVisualInfo__get_IsActive(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsActive_k__BackingField;
}


bool TranslucentActorVisualInfo__get_IsDrawShadow(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsDrawShadow_k__BackingField;
}


void TranslucentActorVisualInfo__set_Alpha(TranslucentActorVisualInfo_o *this, float value, const MethodInfo *method)
{
  this->fields._Alpha_k__BackingField = value;
}


void TranslucentActorVisualInfo__set_IsActive(TranslucentActorVisualInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = value;
}


void TranslucentActorVisualInfo__set_IsDrawShadow(
        TranslucentActorVisualInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDrawShadow_k__BackingField = value;
}