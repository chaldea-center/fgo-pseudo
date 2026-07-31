void BattleCharaChangeConfirmListViewItemDraw___ctor(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDraw__Awake(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


float BattleCharaChangeConfirmListViewItemDraw__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0.0;
}


int32_t BattleCharaChangeConfirmListViewItemDraw__GetKind(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.drawKind;
}


int32_t BattleCharaChangeConfirmListViewItemDraw__GetNextFrameHeight(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *nextFrameSprite; // x8

  nextFrameSprite = this->fields.nextFrameSprite;
  if ( !nextFrameSprite )
    sub_21FFECC(this, method);
  return nextFrameSprite->fields.mHeight;
}


int32_t BattleCharaChangeConfirmListViewItemDraw__GetNowFrameHeight(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *nowFrameSprite; // x8

  nowFrameSprite = this->fields.nowFrameSprite;
  if ( !nowFrameSprite )
    sub_21FFECC(this, method);
  return nowFrameSprite->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaChangeConfirmListViewItemDraw__Init(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  LocalizationManager_c *v5; // x0
  int v6; // w8
  struct System_String_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  UILabel_o *nowTitleLabel; // x0

  if ( (byte_5933916 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12387/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933916 = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.drawKind = kind;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&kind, method);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12387/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0);
  this->fields.modifyColor = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.modifyColor, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nextTitleLabel) == 0) )
  {
    sub_21FFECC(nowTitleLabel, v14);
  }
  UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void BattleCharaChangeConfirmListViewItemDraw__RePosition(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCharaChangeConfirmListViewItemDraw__ReSize(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCharaChangeConfirmListViewItemDraw__SetArrowPositionY(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        float posY,
        const MethodInfo *method)
{
  ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.arrowSprite, posY, 0);
}


void BattleCharaChangeConfirmListViewItemDraw__SetItem(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.dispMode = mode;
}