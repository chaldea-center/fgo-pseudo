void __fastcall QuestBoardListEffectAppearComponent___ctor(
        QuestBoardListEffectAppearComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewItemDraw_c *v10; // x0
  int32_t POS_Y_ITVL_AREA; // w8

  if ( (byte_42EA015 & 1) == 0 )
  {
    sub_B5D5C4(&QuestBoardListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA015 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.boardMovingStartTime = _D0;
  this->fields.boardMoveEasingType = 17;
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  POS_Y_ITVL_AREA = v10->static_fields->POS_Y_ITVL_AREA;
  this->fields.bgmfadeTime = 2.0;
  this->fields.targetBoardForceShiftPosY = (float)-POS_Y_ITVL_AREA;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}