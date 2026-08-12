void BattlePointGaugeCellTypeComponent___ctor(BattlePointGaugeCellTypeComponent_o *this, const MethodInfo *method)
{
  if ( (byte_597413F & 1) == 0 )
  {
    sub_2213A60(&BattlePointGaugeComponent_TypeInfo);
    byte_597413F = 1;
  }
  if ( !*(&BattlePointGaugeComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePointGaugeComponent_TypeInfo, method);
  this->fields.lastStepUpEffectIdInTween = -1;
  *(_QWORD *)&this->fields.currentMaxValueCache = 0x8000000080000000LL;
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePointGaugeCellTypeComponent__UpdateProgressGauge(
        BattlePointGaugeCellTypeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *progressGaugeCells; // x0
  int32_t v6; // w21

  if ( (byte_597413E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_597413E = 1;
  }
  progressGaugeCells = (System_Collections_Generic_List_object__o *)this->fields.progressGaugeCells;
  if ( !progressGaugeCells )
LABEL_9:
    sub_2213CDC(progressGaugeCells, entity);
  v6 = 0;
  while ( v6 < progressGaugeCells->fields._size )
  {
    progressGaugeCells = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        progressGaugeCells,
                                                                        v6,
                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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

  if ( (byte_597413D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_597413D = 1;
  }
  setting = this->fields.setting;
  if ( !setting
    || (BattlePointGaugeSetting__ValidateSerializedField(setting, method),
        (setting = (BattlePointGaugeSetting_o *)this->fields.progressGaugeCells) == 0) )
  {
LABEL_8:
    sub_2213CDC(setting, method);
  }
  v4 = 0;
  while ( v4 < SLODWORD(setting->fields.sprite) )
  {
    System_Collections_Generic_List_object___get_Item(
      (System_Collections_Generic_List_object__o *)setting,
      v4,
      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    setting = (BattlePointGaugeSetting_o *)this->fields.progressGaugeCells;
    ++v4;
    if ( !setting )
      goto LABEL_8;
  }
}