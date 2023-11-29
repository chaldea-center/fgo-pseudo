void __fastcall ClassBoardEffectListDialogSkillDetailComponent___ctor(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.detailMinHeight = xmmword_3137710;
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
  sub_B16F98(
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
  UILabel_o *v14; // x0
  const MethodInfo *v15; // x2
  float ContentHeight; // s0
  UIWidget_o *background; // x0
  float v18; // s8
  double v19; // d0
  const MethodInfo *v20; // x2
  System_String_o *ClassBoardSkillIconName; // x0
  const MethodInfo *v22; // x3
  struct ClassBoardEffectListDialogSkillListComponent_o *listComponent; // x8
  System_String_o *v24; // x2
  ClassBoardEffectListDialog_o *dialog; // x0

  if ( (byte_40FB94C & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility_TypeInfo, name);
    byte_40FB94C = 1;
  }
  effectNameLabel = this->fields.effectNameLabel;
  if ( !effectNameLabel )
    goto LABEL_17;
  UILabel__set_text(effectNameLabel, name, 0LL);
  v14 = this->fields.effectNameLabel;
  if ( !v14 )
    goto LABEL_17;
  UILabel__UpdateCondensedScaleComponent(v14, 0LL);
  ContentHeight = ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(this, detail, v15);
  background = (UIWidget_o *)this->fields.background;
  if ( !background )
    goto LABEL_17;
  v18 = ContentHeight;
  if ( ContentHeight == INFINITY )
    v19 = -ContentHeight;
  else
    v19 = ContentHeight;
  UIWidget__set_height(background, (int)v19, 0LL);
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  ClassBoardSkillIconName = ClassBoardUtility__GetClassBoardSkillIconName(iconId, skillType, v20);
  if ( !fromBattleSvtWindow )
  {
    listComponent = this->fields.listComponent;
    if ( listComponent )
    {
      v24 = ClassBoardSkillIconName;
      dialog = listComponent->fields.dialog;
      if ( dialog )
      {
        ClassBoardEffectListDialog__SetIcon(dialog, this->fields.effectIcon, v24, v22);
        return v18 + (float)this->fields.adjustSetPosY;
      }
    }
LABEL_17:
    sub_B170D4();
  }
  return v18 + (float)this->fields.adjustSetPosY;
}


float __fastcall ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
        ClassBoardEffectListDialogSkillDetailComponent_o *this,
        System_String_o *detail,
        const MethodInfo *method)
{
  UILabel_o *effectDetailLabel; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  struct UILabel_o *v9; // x8
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
        (v6 = (UnityEngine_Component_o *)this->fields.effectDetailLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL),
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL),
        (v9 = this->fields.effectDetailLabel) == 0LL) )
  {
    sub_B170D4();
  }
  detailMinHeight = this->fields.detailMinHeight;
  result = (float)(fabsf(LocalPositionY) + (float)v9->fields.mHeight) + (float)this->fields.detailUnderMargin;
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
    sub_B170D4();
  AtlasManagerUnit__SetUI(atlasManagerUnit, this->fields.effectIcon, spriteName, 0LL);
}