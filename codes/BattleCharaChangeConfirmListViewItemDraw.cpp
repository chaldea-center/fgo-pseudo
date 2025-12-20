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
    sub_1C942F0(this, method);
  return nextFrameSprite->fields.mHeight;
}


int32_t BattleCharaChangeConfirmListViewItemDraw__GetNowFrameHeight(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *nowFrameSprite; // x8

  nowFrameSprite = this->fields.nowFrameSprite;
  if ( !nowFrameSprite )
    sub_1C942F0(this, method);
  return nowFrameSprite->fields.mHeight;
}


void BattleCharaChangeConfirmListViewItemDraw__Init(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  UILabel_o *nowTitleLabel; // x0

  if ( (byte_4D27788 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11946/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27788 = 1;
  }
  this->fields.drawKind = kind;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0);
  this->fields.modifyColor = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.modifyColor, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (nowTitleLabel = this->fields.nextTitleLabel) == 0) )
  {
    sub_1C942F0(nowTitleLabel, v12);
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