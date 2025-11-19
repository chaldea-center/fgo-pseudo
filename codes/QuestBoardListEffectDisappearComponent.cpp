void QuestBoardListEffectDisappearComponent___ctor(
        QuestBoardListEffectDisappearComponent_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0

  if ( (byte_4CB2F3B & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardListViewItemDraw_TypeInfo);
    byte_4CB2F3B = 1;
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
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_CEC2C0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}