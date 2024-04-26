System_Action_o *__fastcall SyncWidgetFromUILabel__ConvertTypeToAction(
        SyncWidgetFromUILabel_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Action_o *v5; // x0
  __int64 *v6; // x8
  System_Action_o *v7; // x20

  if ( (byte_434EDF3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_0__);
    sub_B70694(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__);
    byte_434EDF3 = 1;
  }
  if ( type == 5 )
  {
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    v6 = &Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__;
    goto LABEL_7;
  }
  if ( type == 4 )
  {
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    v6 = &Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_0__;
LABEL_7:
    v7 = v5;
    System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0LL);
    return v7;
  }
  return SyncWidget__ConvertTypeToAction((SyncWidget_o *)this, type, method);
}


bool __fastcall SyncWidgetFromUILabel__DisabledSync(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *syncFromLabel; // x19

  if ( (byte_434EDF2 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434EDF2 = 1;
  }
  syncFromLabel = (UnityEngine_Object_o *)this->fields.syncFromLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(syncFromLabel, 0LL, 0LL);
}


void __fastcall SyncWidgetFromUILabel__InitSync(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x8
  __int64 v4; // x11
  struct UIWidget_o *v5; // x1

  if ( (byte_434EDF1 & 1) == 0 )
  {
    sub_B70694(&UILabel_TypeInfo);
    byte_434EDF1 = 1;
  }
  syncFrom = this->fields.syncFrom;
  if ( syncFrom
    && (v4 = *(&UILabel_TypeInfo->_2.bitflags2 + 1), *(&syncFrom->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (UILabel_c *)syncFrom->klass->_2.typeHierarchy[v4 - 1] == UILabel_TypeInfo )
      v5 = this->fields.syncFrom;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  this->fields.syncFromLabel = (struct UILabel_o *)v5;
  sub_B70630(&this->fields.syncFromLabel);
}


void __fastcall SyncWidgetFromUILabel___ConvertTypeToAction_b__3_0(
        SyncWidgetFromUILabel_o *this,
        const MethodInfo *method)
{
  UILabel_o *syncFromLabel; // x0
  UIWidget_o *self; // x19
  float v5; // s0
  float v6; // s0
  double v7; // d0

  syncFromLabel = this->fields.syncFromLabel;
  if ( !syncFromLabel
    || (self = this->fields.self, LODWORD(v5) = *(_QWORD *)&UILabel__get_printedSize(syncFromLabel, 0LL), !self) )
  {
    sub_B7076C(syncFromLabel, method);
  }
  v6 = v5 + (float)(this->fields.blankSize.fields.x + this->fields.blankSize.fields.x);
  if ( v6 == INFINITY )
    v7 = -v6;
  else
    v7 = v6;
  UIWidget__set_width(self, (int)v7, 0LL);
}


void __fastcall SyncWidgetFromUILabel___ConvertTypeToAction_b__3_1(
        SyncWidgetFromUILabel_o *this,
        const MethodInfo *method)
{
  UILabel_o *syncFromLabel; // x0
  UIWidget_o *self; // x19
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v6; // s0
  double v7; // d0

  syncFromLabel = this->fields.syncFromLabel;
  if ( !syncFromLabel || (self = this->fields.self, printedSize = UILabel__get_printedSize(syncFromLabel, 0LL), !self) )
    sub_B7076C(syncFromLabel, method);
  v6 = printedSize.fields.y + (float)(this->fields.blankSize.fields.y + this->fields.blankSize.fields.y);
  if ( v6 == INFINITY )
    v7 = -v6;
  else
    v7 = v6;
  UIWidget__set_height(self, (int)v7, 0LL);
}