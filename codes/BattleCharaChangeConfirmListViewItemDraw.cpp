void __fastcall BattleCharaChangeConfirmListViewItemDraw___ctor(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDraw__Awake(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


float __fastcall BattleCharaChangeConfirmListViewItemDraw__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0.0;
}


int32_t __fastcall BattleCharaChangeConfirmListViewItemDraw__GetKind(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.drawKind;
}


int32_t __fastcall BattleCharaChangeConfirmListViewItemDraw__GetNextFrameHeight(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *nextFrameSprite; // x8

  nextFrameSprite = this->fields.nextFrameSprite;
  if ( !nextFrameSprite )
    sub_1BDBAD4(this, method);
  return nextFrameSprite->fields.mHeight;
}


int32_t __fastcall BattleCharaChangeConfirmListViewItemDraw__GetNowFrameHeight(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *nowFrameSprite; // x8

  nowFrameSprite = this->fields.nowFrameSprite;
  if ( !nowFrameSprite )
    sub_1BDBAD4(this, method);
  return nowFrameSprite->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDraw__Init(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UILabel_o *nowTitleLabel; // x0

  if ( (byte_4B40298 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&StringLiteral_11868/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B40298 = 1;
  }
  this->fields.drawKind = kind;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11868/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_MODIFY_COLOR"*/, 0LL);
  this->fields.modifyColor = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.modifyColor, (int32_t)v7, v8, v9);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (nowTitleLabel = this->fields.nextTitleLabel) == 0LL) )
  {
    sub_1BDBAD4(nowTitleLabel, v10);
  }
  UILabel__set_text(nowTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDraw__RePosition(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCharaChangeConfirmListViewItemDraw__ReSize(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCharaChangeConfirmListViewItemDraw__SetArrowPositionY(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        float posY,
        const MethodInfo *method)
{
  ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.arrowSprite, posY, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDraw__SetItem(
        BattleCharaChangeConfirmListViewItemDraw_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.dispMode = mode;
}