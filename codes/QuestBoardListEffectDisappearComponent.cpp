void QuestBoardListEffectDisappearComponent___ctor(
        QuestBoardListEffectDisappearComponent_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0

  if ( (byte_4D2D582 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4D2D582 = 1;
  }
  this->fields.boardMoveeasingType = 17;
  *(_QWORD *)&this->fields.boardMovingStartTime = 0x3F8000003FD47AE1LL;
  v3 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v3 = QuestBoardListViewItemDraw_TypeInfo;
  }
  this->fields.disappearEffectShiftPosY = (float)v3->static_fields->POS_Y_ITVL_AREA;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_D00A10;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}