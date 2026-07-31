void ClassBoardEffectListDialogSkillDetailComponent___ctor(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  this->fields.detailUnderMargin = 4;
  *(_QWORD *)&this->fields.detailMinHeight = 0x1200000064LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardEffectListDialogSkillDetailComponent__Awake(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardEffectListDialogSkillDetailComponent__Init(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        ClassBoardEffectListDialogSkillListComponent_o *listComponent,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.listComponent = listComponent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listComponent,
    (int32_t)listComponent,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


float ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        int32_t iconId,
        int32_t skillType,
        bool fromBattleSvtWindow,
        const MethodInfo *method)
{
  UILabel_o *effectNameLabel; // x0
  const MethodInfo *v14; // x2
  float ContentHeight; // s0
  float v16; // s8
  int32_t v17; // w1
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  struct ClassBoardEffectListDialogSkillListComponent_o *listComponent; // x8
  System_String_o *v21; // x2

  if ( (byte_593C45A & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    byte_593C45A = 1;
  }
  effectNameLabel = this->fields.effectNameLabel;
  if ( !effectNameLabel )
    goto LABEL_16;
  UILabel__set_text(effectNameLabel, name, 0);
  effectNameLabel = this->fields.effectNameLabel;
  if ( !effectNameLabel )
    goto LABEL_16;
  UILabel__UpdateCondensedScaleComponent(effectNameLabel, 0);
  ContentHeight = ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(this, detail, v14);
  effectNameLabel = (UILabel_o *)this->fields.background;
  if ( !effectNameLabel )
    goto LABEL_16;
  v16 = ContentHeight;
  if ( ContentHeight == INFINITY )
    v17 = 0x80000000;
  else
    v17 = (int)ContentHeight;
  UIWidget__set_height((UIWidget_o *)effectNameLabel, v17, 0);
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v18);
  effectNameLabel = (UILabel_o *)ClassBoardUtility__GetClassBoardSkillIconName(iconId, skillType, 0);
  if ( !fromBattleSvtWindow )
  {
    listComponent = this->fields.listComponent;
    if ( listComponent )
    {
      v21 = (System_String_o *)effectNameLabel;
      effectNameLabel = (UILabel_o *)listComponent->fields.dialog;
      if ( effectNameLabel )
      {
        ClassBoardEffectListDialog__SetIcon(
          (ClassBoardEffectListDialog_o *)effectNameLabel,
          this->fields.effectIcon,
          v21,
          v19);
        return v16 + (float)this->fields.adjustSetPosY;
      }
    }
LABEL_16:
    sub_21FFECC(effectNameLabel, name);
  }
  return v16 + (float)this->fields.adjustSetPosY;
}


float ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        System_String_o *detail,
        const MethodInfo *method)
{
  UILabel_o *effectDetailLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  struct UILabel_o *v8; // x8
  int32_t detailMinHeight; // s2
  float result; // s0

  effectDetailLabel = this->fields.effectDetailLabel;
  if ( !effectDetailLabel
    || (UILabel__SetDefaultFont(effectDetailLabel, 0),
        WrapControlText__textBBCodeAdjust(
          this->fields.effectDetailLabel,
          detail,
          this->fields.detailFontSize,
          this->fields.detailFontSize,
          0),
        (effectDetailLabel = this->fields.effectDetailLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectDetailLabel, 0),
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0),
        (v8 = this->fields.effectDetailLabel) == 0) )
  {
    sub_21FFECC(effectDetailLabel, detail);
  }
  detailMinHeight = this->fields.detailMinHeight;
  result = (float)(fabsf(LocalPositionY) + (float)v8->fields.mHeight) + (float)this->fields.detailUnderMargin;
  if ( result < (float)detailMinHeight )
    return (float)detailMinHeight;
  return result;
}


void ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !atlasManagerUnit )
    sub_21FFECC(this, 0);
  AtlasManagerUnit__SetUI(atlasManagerUnit, this->fields.effectIcon, spriteName, 0);
}


UISprite_o *ClassBoardEffectListDialogSkillDetailComponent__get_Background(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.background;
}


UISprite_o *ClassBoardEffectListDialogSkillDetailComponent__get_Line(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.line;
}