void QuestBoardListEffectDisappearComponent___ctor(
        QuestBoardListEffectDisappearComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardListViewItemDraw_c *v4; // x0
  int v5; // w8
  int POS_Y_ITVL_AREA; // s0

  if ( (byte_5935185 & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardListViewItemDraw_TypeInfo);
    byte_5935185 = 1;
  }
  v4 = QuestBoardListViewItemDraw_TypeInfo;
  this->fields.boardMoveeasingType = 17;
  v5 = *(&v4->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.boardMovingStartTime = 0x3F8000003FD47AE1LL;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = QuestBoardListViewItemDraw_TypeInfo;
  }
  POS_Y_ITVL_AREA = v4->static_fields->POS_Y_ITVL_AREA;
  this->fields.bgmFadeOutTime = 2.0;
  this->fields.disappearEffectShiftPosY = (float)POS_Y_ITVL_AREA;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}