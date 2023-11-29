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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v10; // x0
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v11; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  BuffEntity_o *Entity; // x0
  BuffEntity_o *v15; // x20
  System_Nullable_float__o BattleCharaAlpha; // x0
  float value; // s0
  char IsDrawShadowDespiteBattleCharaInvisible; // w8

  if ( (byte_40FB843 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleBuffData_BuffData___, buffDataArray);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Nullable_float__GetValueOrDefault__, v7);
    sub_B16FFC(&Method_System_Nullable_float__get_HasValue__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FB843 = 1;
  }
  v10 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)buffDataArray,
          0,
          0LL,
          (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_BattleBuffData_BuffData___);
  if ( !v10 )
    goto LABEL_11;
  v11 = v10;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             MasterData_WarQuestSelectionMaster,
                             v11->fields.weight,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !Entity )
  {
LABEL_11:
    this->fields._IsActive_k__BackingField = 0;
    this->fields._Alpha_k__BackingField = 1.0;
    IsDrawShadowDespiteBattleCharaInvisible = 1;
    goto LABEL_12;
  }
  v15 = Entity;
  this->fields._IsActive_k__BackingField = 1;
  BattleCharaAlpha = BuffEntity__GetBattleCharaAlpha(Entity, 0LL);
  if ( !this )
    goto LABEL_13;
  value = 0.2;
  if ( (*(_QWORD *)&BattleCharaAlpha & 0xFF00000000LL) != 0 )
    value = BattleCharaAlpha.fields.value;
  this->fields._Alpha_k__BackingField = value;
  IsDrawShadowDespiteBattleCharaInvisible = BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(v15, 0LL);
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