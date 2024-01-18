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
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  struct UILabel_o *effectDetailLabel; // x8
  int32_t detailMinHeight; // s3
  float v16; // s0
  float v17; // s8
  double v18; // d0
  const MethodInfo *v19; // x2
  System_String_o *ClassBoardSkillIconName; // x20

  if ( (byte_41894B2 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility_TypeInfo, name);
    byte_41894B2 = 1;
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
  effectNameLabel = this->fields.effectDetailLabel;
  if ( !effectNameLabel )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectNameLabel, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  effectDetailLabel = this->fields.effectDetailLabel;
  if ( !effectDetailLabel )
    goto LABEL_18;
  detailMinHeight = this->fields.detailMinHeight;
  effectNameLabel = (UILabel_o *)this->fields.background;
  v16 = this->fields.detailUnderMargin + (float)(fabsf(LocalPositionY) + (float)effectDetailLabel->fields.mHeight);
  v17 = v16 >= (float)detailMinHeight ? v16 : (float)detailMinHeight;
  if ( !effectNameLabel )
    goto LABEL_18;
  v18 = v17 == INFINITY ? -v17 : v17;
  UIWidget__set_height((UIWidget_o *)effectNameLabel, (int)v18, 0LL);
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  ClassBoardSkillIconName = ClassBoardUtility__GetClassBoardSkillIconName(iconId, skillType, v19);
  effectNameLabel = (UILabel_o *)ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)ClassBoardSkillIconName);
  if ( !effectNameLabel )
LABEL_18:
    sub_B2C434(effectNameLabel, name);
  AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)effectNameLabel, this->fields.effectIcon, ClassBoardSkillIconName, 0LL);
  return v17;
}