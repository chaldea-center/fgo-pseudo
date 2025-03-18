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

  if ( (byte_4C23501 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1C3B764(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_0__, v5);
    sub_1C3B764(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__, v6);
    byte_4C23501 = 1;
  }
  if ( type == 5 )
  {
    v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    v8 = &Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__;
    goto LABEL_7;
  }
  if ( type == 4 )
  {
    v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C23500 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23500 = 1;
  }
  syncFromLabel = (UnityEngine_Object_o *)this->fields.syncFromLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(syncFromLabel, 0LL, 0LL);
}


void __fastcall SyncWidgetFromUILabel__InitSync(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UIWidget_o *syncFrom; // x8
  UILabel_c *v10; // x9
  __int64 methodPtr_low; // x10
  struct UIWidget_o *v12; // x11
  int64_t v13; // x1
  struct UILabel_o **p_syncFromLabel; // x19

  if ( (byte_4C234FF & 1) == 0 )
  {
    sub_1C3B764(&UILabel_TypeInfo, method);
    byte_4C234FF = 1;
  }
  syncFrom = this->fields.syncFrom;
  if ( syncFrom )
  {
    v10 = UILabel_TypeInfo;
    methodPtr_low = LOBYTE(UILabel_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(syncFrom->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UILabel_c *)syncFrom->klass->_2.typeHierarchy[methodPtr_low - 1] == UILabel_TypeInfo )
        v12 = this->fields.syncFrom;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    this->fields.syncFromLabel = (struct UILabel_o *)v12;
    p_syncFromLabel = &this->fields.syncFromLabel;
    if ( LOBYTE(syncFrom->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UILabel_c *)syncFrom->klass->_2.typeHierarchy[methodPtr_low - 1] == v10 )
        v13 = (int64_t)syncFrom;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
    this->fields.syncFromLabel = 0LL;
    p_syncFromLabel = &this->fields.syncFromLabel;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)p_syncFromLabel, v13, v2, v3, v4, v5, v6, v7);
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
    sub_1C3B9C0(syncFromLabel, method);
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
    sub_1C3B9C0(syncFromLabel, method);
  v6 = printedSize.fields.y + (float)(this->fields.blankSize.fields.y + this->fields.blankSize.fields.y);
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_height(self, v7, 0LL);
}