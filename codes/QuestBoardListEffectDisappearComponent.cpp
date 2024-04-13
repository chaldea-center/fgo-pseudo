void __fastcall QuestBoardListEffectDisappearComponent___ctor(
        QuestBoardListEffectDisappearComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewItemDraw_c *v5; // x0

  if ( (byte_42EA01C & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA01C = 1;
  }
  this->fields.boardMoveeasingType = 17;
  *(_QWORD *)&this->fields.boardMovingStartTime = 0x3F8000003FD47AE1LL;
  v5 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v5 = QuestBoardListViewItemDraw_TypeInfo;
  }
  this->fields.disappearEffectShiftPosY = (float)v5->static_fields->POS_Y_ITVL_AREA;
  *(_OWORD *)&this->fields.bgmFadeOutTime = xmmword_32A4800;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}