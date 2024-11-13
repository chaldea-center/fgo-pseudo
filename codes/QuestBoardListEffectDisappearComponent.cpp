void __fastcall QuestBoardListEffectDisappearComponent___ctor(
        QuestBoardListEffectDisappearComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardListViewItemDraw_c *v4; // x0

  if ( (byte_4B13094 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardListViewItemDraw_TypeInfo, method, v2);
    byte_4B13094 = 1;
  }
  this->fields.boardMoveeasingType = 17;
  *(_QWORD *)&this->fields.boardMovingStartTime = 0x3F8000003FD47AE1LL;
  v4 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo, method);
    v4 = QuestBoardListViewItemDraw_TypeInfo;
  }
  this->fields.disappearEffectShiftPosY = (float)v4->static_fields->POS_Y_ITVL_AREA;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_BD27C0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}