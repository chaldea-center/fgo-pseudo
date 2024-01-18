void __fastcall ClassBoardEffectListDialogSkillDetailComponent___ctor(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.detailMinHeight = xmmword_31A3BE0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillDetailComponent__Awake(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardEffectListDialogSkillDetailComponent__Init(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        ClassBoardEffectListDialogSkillListComponent_o *listComponent,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.listComponent = listComponent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listComponent,
    (System_Int32_array **)listComponent,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


float __fastcall ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
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
  double v17; // d0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  struct ClassBoardEffectListDialogSkillListComponent_o *listComponent; // x8
  System_String_o *v21; // x2

  if ( (byte_41894D2 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility_TypeInfo, name);
    byte_41894D2 = 1;
  }
  effectNameLabel = this->fields.effectNameLabel;
  if ( !effectNameLabel )
    goto LABEL_17;
  UILabel__set_text(effectNameLabel, name, 0LL);
  effectNameLabel = this->fields.effectNameLabel;
  if ( !effectNameLabel )
    goto LABEL_17;
  UILabel__UpdateCondensedScaleComponent(effectNameLabel, 0LL);
  ContentHeight = ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(this, detail, v14);
  effectNameLabel = (UILabel_o *)this->fields.background;
  if ( !effectNameLabel )
    goto LABEL_17;
  v16 = ContentHeight;
  if ( ContentHeight == INFINITY )
    v17 = -ContentHeight;
  else
    v17 = ContentHeight;
  UIWidget__set_height((UIWidget_o *)effectNameLabel, (int)v17, 0LL);
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  effectNameLabel = (UILabel_o *)ClassBoardUtility__GetClassBoardSkillIconName(iconId, skillType, v18);
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
LABEL_17:
    sub_B2C434(effectNameLabel, name);
  }
  return v16 + (float)this->fields.adjustSetPosY;
}


float __fastcall ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        System_String_o *detail,
        const MethodInfo *method)
{
  UILabel_o *effectDetailLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  struct UILabel_o *v8; // x8
  int32_t detailMinHeight; // s3
  float result; // s0

  effectDetailLabel = this->fields.effectDetailLabel;
  if ( !effectDetailLabel
    || (UILabel__SetDefaultFont(effectDetailLabel, 0LL),
        WrapControlText__textBBCodeAdjust(
          this->fields.effectDetailLabel,
          detail,
          this->fields.detailFontSize,
          this->fields.detailFontSize,
          this->fields.detailMaxHeight,
          0LL),
        (effectDetailLabel = this->fields.effectDetailLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectDetailLabel, 0LL),
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL),
        (v8 = this->fields.effectDetailLabel) == 0LL) )
  {
    sub_B2C434(effectDetailLabel, detail);
  }
  detailMinHeight = this->fields.detailMinHeight;
  result = (float)(fabsf(LocalPositionY) + (float)v8->fields.mHeight) + (float)this->fields.detailUnderMargin;
  if ( result < (float)detailMinHeight )
    return (float)detailMinHeight;
  return result;
}


void __fastcall ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !atlasManagerUnit )
    sub_B2C434(this, 0LL);
  AtlasManagerUnit__SetUI(atlasManagerUnit, this->fields.effectIcon, spriteName, 0LL);
}