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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v21; // x0
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v22; // x20
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v26; // x20
  float v27; // s0
  char IsDrawShadowDespiteBattleCharaInvisible; // w8

  if ( (byte_42EAC7A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_BattleBuffData_BuffData___, (_DWORD)buffDataArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Nullable_float__GetValueOrDefault__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_float__get_HasValue__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EAC7A = 1;
  }
  v21 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)buffDataArray,
          0,
          0LL,
          (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_BattleBuffData_BuffData___);
  if ( !v21 )
    goto LABEL_11;
  v22 = v21;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v24);
  }
  Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             v22->fields.weight,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !Entity )
  {
LABEL_11:
    this->fields._IsActive_k__BackingField = 0;
    this->fields._Alpha_k__BackingField = 1.0;
    IsDrawShadowDespiteBattleCharaInvisible = 1;
    goto LABEL_12;
  }
  v26 = Entity;
  this->fields._IsActive_k__BackingField = 1;
  Instance = (DataManager_o *)BuffEntity__GetBattleCharaAlpha(Entity, 0LL);
  if ( !this )
    goto LABEL_13;
  v27 = 0.2;
  if ( ((unsigned __int64)Instance & 0xFF00000000LL) != 0 )
    v27 = *(float *)&Instance;
  this->fields._Alpha_k__BackingField = v27;
  IsDrawShadowDespiteBattleCharaInvisible = BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(v26, 0LL);
LABEL_12:
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