void QuestBoardListEffectAppearComponent___ctor(QuestBoardListEffectAppearComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardListViewItemDraw_c *v9; // x0
  int v10; // w8
  float v11; // s0

  if ( (byte_596D26B & 1) == 0 )
  {
    sub_2213A60(&QuestBoardListViewItemDraw_TypeInfo);
    byte_596D26B = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  v9 = QuestBoardListViewItemDraw_TypeInfo;
  this->fields.boardMoveEasingType = 17;
  v10 = *(&v9->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.boardMovingStartTime = _D0;
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(v9, method, v2);
    v9 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v11 = (float)-v9->static_fields->POS_Y_ITVL_AREA;
  this->fields.bgmFadeOutTime = 2.0;
  this->fields.targetBoardForceShiftPosY = v11;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}