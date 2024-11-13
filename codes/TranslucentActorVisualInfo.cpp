void __fastcall TranslucentActorVisualInfo___ctor(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TranslucentActorVisualInfo__ResetProperties(
        TranslucentActorVisualInfo_o *this,
        const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = 0;
  this->fields._Alpha_k__BackingField = 1.0;
  this->fields._IsDrawShadow_k__BackingField = 1;
}


void __fastcall TranslucentActorVisualInfo__UpdateByBuffs(
        TranslucentActorVisualInfo_o *this,
        BattleBuffData_BuffData_array *buffDataArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x20
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  BuffEntity_o *v20; // x20
  System_Nullable_float__o BattleCharaAlpha; // x0
  float value; // s0
  char IsDrawShadowDespiteBattleCharaInvisible; // w8

  if ( (byte_4B18F9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_BattleBuffData_BuffData___, buffDataArray, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B18F9A = 1;
  }
  v15 = BasicHelper__IndexValue_object_(
          (System_Object_array *)buffDataArray,
          0,
          0LL,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_BattleBuffData_BuffData___);
  if ( !v15 )
    goto LABEL_10;
  v16 = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v18);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             (int32_t)v16[1].klass,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( Entity )
  {
    v20 = (BuffEntity_o *)Entity;
    this->fields._IsActive_k__BackingField = 1;
    BattleCharaAlpha = BuffEntity__GetBattleCharaAlpha((BuffEntity_o *)Entity, 0LL);
    value = 0.2;
    if ( BattleCharaAlpha.fields.hasValue )
      value = BattleCharaAlpha.fields.value;
    this->fields._Alpha_k__BackingField = value;
    IsDrawShadowDespiteBattleCharaInvisible = BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(v20, 0LL);
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


float __fastcall TranslucentActorVisualInfo__get_Alpha(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  return this->fields._Alpha_k__BackingField;
}


bool __fastcall TranslucentActorVisualInfo__get_IsActive(TranslucentActorVisualInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsActive_k__BackingField;
}


bool __fastcall TranslucentActorVisualInfo__get_IsDrawShadow(
        TranslucentActorVisualInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDrawShadow_k__BackingField;
}


void __fastcall TranslucentActorVisualInfo__set_Alpha(
        TranslucentActorVisualInfo_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Alpha_k__BackingField = value;
}


void __fastcall TranslucentActorVisualInfo__set_IsActive(
        TranslucentActorVisualInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsActive_k__BackingField = value;
}


void __fastcall TranslucentActorVisualInfo__set_IsDrawShadow(
        TranslucentActorVisualInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDrawShadow_k__BackingField = value;
}