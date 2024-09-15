void __fastcall BattlePointGaugeCellTypeComponent___ctor(
        BattlePointGaugeCellTypeComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.lastStepUpEffectIdInTween = -1LL;
  this->fields.lastUpPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePointGaugeCellTypeComponent__UpdateProgressGauge(
        BattlePointGaugeCellTypeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *progressGaugeCells; // x0
  int32_t v7; // w21

  if ( (byte_4A30ECF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__get_Count__, entity);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5);
    byte_4A30ECF = 1;
  }
  progressGaugeCells = (System_Collections_Generic_List_object__o *)this->fields.progressGaugeCells;
  if ( !progressGaugeCells )
LABEL_9:
    sub_1B7641C(progressGaugeCells, entity);
  v7 = 0;
  while ( v7 < progressGaugeCells->fields._size )
  {
    progressGaugeCells = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        progressGaugeCells,
                                                                        v7,
                                                                        (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( entity )
    {
      if ( progressGaugeCells )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)progressGaugeCells,
          v7 < entity->fields.phase,
          0LL);
        progressGaugeCells = (System_Collections_Generic_List_object__o *)this->fields.progressGaugeCells;
        ++v7;
        if ( progressGaugeCells )
          continue;
      }
    }
    goto LABEL_9;
  }
}


void __fastcall BattlePointGaugeCellTypeComponent__ValidateSerializedField(
        BattlePointGaugeCellTypeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePointGaugeSetting_o *setting; // x0
  int32_t v5; // w20

  if ( (byte_4A30ECE & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    byte_4A30ECE = 1;
  }
  setting = this->fields.setting;
  if ( !setting
    || (BattlePointGaugeSetting__ValidateSerializedField(setting, method),
        (setting = (BattlePointGaugeSetting_o *)this->fields.progressGaugeCells) == 0LL) )
  {
LABEL_8:
    sub_1B7641C(setting, method);
  }
  v5 = 0;
  while ( v5 < SLODWORD(setting->fields.sprite) )
  {
    System_Collections_Generic_List_object___get_Item(
      (System_Collections_Generic_List_object__o *)setting,
      v5,
      (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    setting = (BattlePointGaugeSetting_o *)this->fields.progressGaugeCells;
    ++v5;
    if ( !setting )
      goto LABEL_8;
  }
}