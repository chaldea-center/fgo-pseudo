System_Action_o *SyncWidgetFromUILabel__ConvertTypeToAction(
        SyncWidgetFromUILabel_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Action_o *v5; // x0
  intptr_t *v6; // x8
  System_Action_o *v7; // x20

  if ( (byte_4CEFDF0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_0__);
    sub_1C7BAE8(&Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__);
    byte_4CEFDF0 = 1;
  }
  if ( type == 5 )
  {
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    v6 = &Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_1__;
    goto LABEL_7;
  }
  if ( type == 4 )
  {
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    v6 = &Method_SyncWidgetFromUILabel__ConvertTypeToAction_b__3_0__;
LABEL_7:
    v7 = v5;
    System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0);
    return v7;
  }
  return SyncWidget__ConvertTypeToAction((SyncWidget_o *)this, type, method);
}


bool SyncWidgetFromUILabel__DisabledSync(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *syncFromLabel; // x19

  if ( (byte_4CEFDEF & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFDEF = 1;
  }
  syncFromLabel = (UnityEngine_Object_o *)this->fields.syncFromLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(syncFromLabel, 0, 0);
}


void SyncWidgetFromUILabel__InitSync(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UIWidget_o *syncFrom; // x8
  UILabel_c *v10; // x9
  __int64 naturalAligment; // x10
  struct UIWidget_o *v12; // x11
  int32_t v13; // w1
  struct UILabel_o **p_syncFromLabel; // x19

  if ( (byte_4CEFDEE & 1) == 0 )
  {
    sub_1C7BAE8(&UILabel_TypeInfo);
    byte_4CEFDEE = 1;
  }
  syncFrom = this->fields.syncFrom;
  if ( syncFrom )
  {
    v10 = UILabel_TypeInfo;
    naturalAligment = UILabel_TypeInfo->_2.naturalAligment;
    if ( syncFrom->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UILabel_c *)syncFrom->klass->_2.typeHierarchy[naturalAligment - 1] == UILabel_TypeInfo )
        v12 = this->fields.syncFrom;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    this->fields.syncFromLabel = (struct UILabel_o *)v12;
    p_syncFromLabel = &this->fields.syncFromLabel;
    if ( syncFrom->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UILabel_c *)syncFrom->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
        v13 = (int)syncFrom;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = 0;
    this->fields.syncFromLabel = 0;
    p_syncFromLabel = &this->fields.syncFromLabel;
  }
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_syncFromLabel, v13, v2, v3, v4, v5, v6, v7);
}


void SyncWidgetFromUILabel___ConvertTypeToAction_b__3_0(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  UILabel_o *syncFromLabel; // x0
  UIWidget_o *self; // x19
  float v5; // s0
  float v6; // s0
  int32_t v7; // w1

  syncFromLabel = this->fields.syncFromLabel;
  if ( !syncFromLabel
    || (self = this->fields.self, LODWORD(v5) = *(_QWORD *)&UILabel__get_printedSize(syncFromLabel, 0), !self) )
  {
    sub_1C7BD40(syncFromLabel, method);
  }
  v6 = v5 + (float)(this->fields.blankSize.fields.x + this->fields.blankSize.fields.x);
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_width(self, v7, 0);
}


void SyncWidgetFromUILabel___ConvertTypeToAction_b__3_1(SyncWidgetFromUILabel_o *this, const MethodInfo *method)
{
  UILabel_o *syncFromLabel; // x0
  UIWidget_o *self; // x19
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v6; // s0
  int32_t v7; // w1

  syncFromLabel = this->fields.syncFromLabel;
  if ( !syncFromLabel || (self = this->fields.self, printedSize = UILabel__get_printedSize(syncFromLabel, 0), !self) )
    sub_1C7BD40(syncFromLabel, method);
  v6 = printedSize.fields.y + (float)(this->fields.blankSize.fields.y + this->fields.blankSize.fields.y);
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_height(self, v7, 0);
}