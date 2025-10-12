void BattlePointGaugeCellTypeComponent___ctor(BattlePointGaugeCellTypeComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.lastStepUpEffectIdInTween = -1;
  this->fields.lastUpPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePointGaugeCellTypeComponent__UpdateProgressGauge(
        BattlePointGaugeCellTypeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *progressGaugeCells; // x0
  int32_t v6; // w21

  if ( (byte_4C3AFB7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C3AFB7 = 1;
  }
  progressGaugeCells = (System_Collections_Generic_List_object__o *)this->fields.progressGaugeCells;
  if ( !progressGaugeCells )
LABEL_9:
    sub_1C32E7C(progressGaugeCells);
  v6 = 0;
  while ( v6 < progressGaugeCells->fields._size )
  {
    progressGaugeCells = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        progressGaugeCells,
                                                                        v6,
                                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( entity )
    {
      if ( progressGaugeCells )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressGaugeCells, v6 < entity->fields.phase, 0);
        progressGaugeCells = (System_Collections_Generic_List_object__o *)this->fields.progressGaugeCells;
        ++v6;
        if ( progressGaugeCells )
          continue;
      }
    }
    goto LABEL_9;
  }
}


void BattlePointGaugeCellTypeComponent__ValidateSerializedField(
        BattlePointGaugeCellTypeComponent_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0
  int32_t v4; // w20

  if ( (byte_4C3AFB6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4C3AFB6 = 1;
  }
  setting = this->fields.setting;
  if ( !setting
    || (BattlePointGaugeSetting__ValidateSerializedField(setting, method),
        (setting = (BattlePointGaugeSetting_o *)this->fields.progressGaugeCells) == 0) )
  {
LABEL_8:
    sub_1C32E7C(setting);
  }
  v4 = 0;
  while ( v4 < SLODWORD(setting->fields.sprite) )
  {
    System_Collections_Generic_List_object___get_Item(
      (System_Collections_Generic_List_object__o *)setting,
      v4,
      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    setting = (BattlePointGaugeSetting_o *)this->fields.progressGaugeCells;
    ++v4;
    if ( !setting )
      goto LABEL_8;
  }
}