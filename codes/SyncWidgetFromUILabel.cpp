// local variable allocation has failed, the output may be wrong!
System_Action_o *__fastcall SyncWidgetFromUILabel__ConvertTypeToAction(
        SyncWidgetFromUILabel_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *v7; // x0
  __int64 *v8; // x8
  System_Action_o *v9; // x20

  if ( (byte_4B1DC6B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_0__, v5);
    sub_1BCAFF8(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__, v6);
    byte_4B1DC6B = 1;
  }
  if ( type == 5 )
  {
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v8 = &Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__;
    goto LABEL_7;
  }
  if ( type == 4 )
  {
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v8 = &Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_0__;
LABEL_7:
    v9 = v7;
    System_Action___ctor(v7, (Il2CppObject *)this, *v8, 0LL);
    return v9;
  }
  return SyncWidget__ConvertTypeToAction((SyncWidget_o *)this, type, method);
}


bool __fastcall SyncWidgetFromUILabel__DisabledSync(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *syncFromLabel; // x19

  if ( (byte_4B1DC6A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1DC6A = 1;
  }
  syncFromLabel = (UnityEngine_Object_o *)this->fields.syncFromLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(syncFromLabel, 0LL, 0LL);
}


void __fastcall SyncWidgetFromUILabel__InitSync(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UIWidget_o *syncFrom; // x8
  UILabel_c *v6; // x9
  __int64 methodPtr_low; // x10
  struct UIWidget_o *v8; // x11
  int32_t v9; // w1
  struct UILabel_o **p_syncFromLabel; // x19

  if ( (byte_4B1DC69 & 1) == 0 )
  {
    sub_1BCAFF8(&UILabel_TypeInfo, method);
    byte_4B1DC69 = 1;
  }
  syncFrom = this->fields.syncFrom;
  if ( syncFrom )
  {
    v6 = UILabel_TypeInfo;
    methodPtr_low = LOBYTE(UILabel_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(syncFrom->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UILabel_c *)syncFrom->klass->_2.typeHierarchy[methodPtr_low - 1] == UILabel_TypeInfo )
        v8 = this->fields.syncFrom;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    this->fields.syncFromLabel = (struct UILabel_o *)v8;
    p_syncFromLabel = &this->fields.syncFromLabel;
    if ( LOBYTE(syncFrom->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UILabel_c *)syncFrom->klass->_2.typeHierarchy[methodPtr_low - 1] == v6 )
        v9 = (int)syncFrom;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = 0;
    this->fields.syncFromLabel = 0LL;
    p_syncFromLabel = &this->fields.syncFromLabel;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)p_syncFromLabel, v9, v2, v3);
}


void __fastcall SyncWidgetFromUILabel___ConvertTypeToAction_b__3_0(
        SyncWidgetFromUILabel_o *this,
        const MethodInfo *method)
{
  UILabel_o *syncFromLabel; // x0
  UIWidget_o *self; // x19
  float v5; // s0
  float v6; // s0
  int32_t v7; // w1

  syncFromLabel = this->fields.syncFromLabel;
  if ( !syncFromLabel
    || (self = this->fields.self, LODWORD(v5) = *(_QWORD *)&UILabel__get_printedSize(syncFromLabel, 0LL), !self) )
  {
    sub_1BCB254(syncFromLabel, method);
  }
  v6 = v5 + (float)(this->fields.blankSize.fields.x + this->fields.blankSize.fields.x);
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_width(self, v7, 0LL);
}


void __fastcall SyncWidgetFromUILabel___ConvertTypeToAction_b__3_1(
        SyncWidgetFromUILabel_o *this,
        const MethodInfo *method)
{
  UILabel_o *syncFromLabel; // x0
  UIWidget_o *self; // x19
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v6; // s0
  int32_t v7; // w1

  syncFromLabel = this->fields.syncFromLabel;
  if ( !syncFromLabel || (self = this->fields.self, printedSize = UILabel__get_printedSize(syncFromLabel, 0LL), !self) )
    sub_1BCB254(syncFromLabel, method);
  v6 = printedSize.fields.y + (float)(this->fields.blankSize.fields.y + this->fields.blankSize.fields.y);
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_height(self, v7, 0LL);
}