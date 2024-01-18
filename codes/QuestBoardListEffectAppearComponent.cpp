void __fastcall QuestBoardListEffectAppearComponent___ctor(
        QuestBoardListEffectAppearComponent_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v8; // x0
  int32_t POS_Y_ITVL_AREA; // w8

  if ( (byte_418A26F & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_418A26F = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.boardMovingStartTime = _D0;
  this->fields.boardMoveEasingType = 17;
  v8 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v8 = QuestBoardListViewItemDraw_TypeInfo;
  }
  POS_Y_ITVL_AREA = v8->static_fields->POS_Y_ITVL_AREA;
  this->fields.bgmfadeTime = 2.0;
  this->fields.targetBoardForceShiftPosY = (float)-POS_Y_ITVL_AREA;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}