void __fastcall ClassBoardDialogSkillDetailPartsComponent___ctor(
        ClassBoardDialogSkillDetailPartsComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.detailMinHeight = 0x1F400000064LL;
  *(_QWORD *)&this->fields.detailFontSize = 0x4080000000000014LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardDialogSkillDetailPartsComponent__Awake(
        ClassBoardDialogSkillDetailPartsComponent_o *this,
        const MethodInfo *method)
{
  ;
}


float __fastcall ClassBoardDialogSkillDetailPartsComponent__SetDetail(
        ClassBoardDialogSkillDetailPartsComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  UILabel_o *effectNameLabel; // x0
  UnityEngine_Component_o *effectDetailLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  struct UILabel_o *v15; // x8
  int32_t detailMinHeight; // s3
  UIWidget_o *background; // x0
  float v18; // s0
  float v19; // s8
  double v20; // d0
  const MethodInfo *v21; // x2
  System_String_o *ClassBoardSkillIconName; // x20
  AtlasManagerUnit_o *IconAtlasManagerUnit; // x0

  if ( (byte_40FB92C & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility_TypeInfo, name);
    byte_40FB92C = 1;
  }
  effectNameLabel = this->fields.effectNameLabel;
  if ( !effectNameLabel )
    goto LABEL_18;
  UILabel__set_text(effectNameLabel, name, 0LL);
  WrapControlText__textBBCodeAdjust(
    this->fields.effectDetailLabel,
    detail,
    this->fields.detailFontSize,
    this->fields.detailFontSize,
    this->fields.detailMaxHeight,
    0LL);
  effectDetailLabel = (UnityEngine_Component_o *)this->fields.effectDetailLabel;
  if ( !effectDetailLabel )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(effectDetailLabel, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  v15 = this->fields.effectDetailLabel;
  if ( !v15 )
    goto LABEL_18;
  detailMinHeight = this->fields.detailMinHeight;
  background = (UIWidget_o *)this->fields.background;
  v18 = this->fields.detailUnderMargin + (float)(fabsf(LocalPositionY) + (float)v15->fields.mHeight);
  v19 = v18 >= (float)detailMinHeight ? v18 : (float)detailMinHeight;
  if ( !background )
    goto LABEL_18;
  v20 = v19 == INFINITY ? -v19 : v19;
  UIWidget__set_height(background, (int)v20, 0LL);
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  ClassBoardSkillIconName = ClassBoardUtility__GetClassBoardSkillIconName(iconId, skillType, v21);
  IconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)ClassBoardSkillIconName);
  if ( !IconAtlasManagerUnit )
LABEL_18:
    sub_B170D4();
  AtlasManagerUnit__SetUI(IconAtlasManagerUnit, this->fields.effectIcon, ClassBoardSkillIconName, 0LL);
  return v19;
}