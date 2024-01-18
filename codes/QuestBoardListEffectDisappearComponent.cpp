void __fastcall QuestBoardListEffectDisappearComponent___ctor(
        QuestBoardListEffectDisappearComponent_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v3; // x0

  if ( (byte_418A276 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_418A276 = 1;
  }
  this->fields.boardMoveeasingType = 17;
  *(_QWORD *)&this->fields.boardMovingStartTime = 0x3F8000003FD47AE1LL;
  v3 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v3 = QuestBoardListViewItemDraw_TypeInfo;
  }
  this->fields.disappearEffectShiftPosY = (float)v3->static_fields->POS_Y_ITVL_AREA;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_31B3170;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}