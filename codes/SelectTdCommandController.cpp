void SelectTdCommandController___ctor(
        SelectTdCommandController_o *this,
        BattleServantData_o *inputSvtData,
        SelectTreasureDeviceInfo_o *inputSelectTreasureDeviceInfo,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtData = inputSvtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)inputSvtData, v7, v8, v9, v10, v11, v12);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = inputSelectTreasureDeviceInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int32_t)inputSelectTreasureDeviceInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_String_o *SelectTdCommandController__GetDefaultMessageOnSelected(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C306 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2866/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_NOW"*/);
    byte_593C306 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_NOW"*/, 0);
}


System_String_o *SelectTdCommandController__GetDefaultTitle(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  BattleServantData_o *svtData; // x8
  System_String_o *v6; // x19
  Il2CppObject *ServantShortName; // x1

  if ( (byte_593C305 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2867/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_TITLE"*/);
    byte_593C305 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_TITLE"*/, 0);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_21FFECC(v3, v4);
  v6 = v3;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(svtData, 0);
  return System_String__Format(v6, ServantShortName, 0);
}


System_String_o *SelectTdCommandController__GetMessageOnSelected(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  SelectTdCommandController_o *v3; // x19
  struct SelectTreasureDeviceInfo_o *v5; // x8

  SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField;
  if ( !SelectTreasureDeviceInfo_k__BackingField )
    goto LABEL_6;
  v3 = this;
  this = (SelectTdCommandController_o *)System_String__IsNullOrEmpty(
                                          SelectTreasureDeviceInfo_k__BackingField->fields.messageOnSelected,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return (System_String_o *)((__int64 (__fastcall *)(SelectTdCommandController_o *, const MethodInfo *))v3->klass->vtable._7_GetDefaultMessageOnSelected.methodPtr)(
                                v3,
                                v3->klass->vtable._7_GetDefaultMessageOnSelected.method);
  v5 = v3->fields._SelectTreasureDeviceInfo_k__BackingField;
  if ( !v5 )
LABEL_6:
    sub_21FFECC(this, method);
  return v5->fields.messageOnSelected;
}


int32_t SelectTdCommandController__GetNowSelectingCommandIndex(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  int32_t v5; // w19
  System_Collections_Generic_IEnumerable_TSource__o *treasureDevices; // x20
  SelectTdCommandController___c_c *v7; // x0
  struct SelectTdCommandController___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v10; // x22
  struct SelectTdCommandController___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x0

  if ( (byte_593C304 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_SelectTreasureDeviceInfo_TdChangeParam__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__TypeInfo);
    sub_21FFC50(&Method_SelectTdCommandController___c__GetNowSelectingCommandIndex_b__8_0__);
    sub_21FFC50(&SelectTdCommandController___c_TypeInfo);
    byte_593C304 = 1;
  }
  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0, 0),
        (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0) )
  {
    sub_21FFECC(svtData, method);
  }
  v5 = (int)svtData;
  treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices;
  v7 = SelectTdCommandController___c_TypeInfo;
  if ( !*(&SelectTdCommandController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandController___c_TypeInfo, method);
    v7 = SelectTdCommandController___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__8_0 = (System_Func_object__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, method);
      static_fields = SelectTdCommandController___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__8_0,
      v10,
      Method_SelectTdCommandController___c__GetNowSelectingCommandIndex_b__8_0__,
      0);
    v11 = SelectTdCommandController___c_TypeInfo->static_fields;
    v11->__9__8_0 = (struct System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__o *)_9__8_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__8_0, (int32_t)_9__8_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               treasureDevices,
                                                               (System_Func_TSource__TResult__o *)_9__8_0,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_SelectTreasureDeviceInfo_TdChangeParam__int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Array__IndexOf_int_(v19, v5, (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
}


UnityEngine_Vector3_o SelectTdCommandController__GetNowTypeFrameOffset(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s2
  float v4; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = 0.0;
  v3 = 0.0;
  v4 = 4.0;
  result.fields.z = v3;
  result.fields.y = v4;
  result.fields.x = v2;
  return result;
}


System_String_o *SelectTdCommandController__GetTitle(SelectTdCommandController_o *this, const MethodInfo *method)
{
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  SelectTdCommandController_o *v3; // x19
  const MethodInfo *v4; // x2
  struct SelectTreasureDeviceInfo_o *v6; // x8

  SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField;
  if ( !SelectTreasureDeviceInfo_k__BackingField )
    goto LABEL_6;
  v3 = this;
  this = (SelectTdCommandController_o *)System_String__IsNullOrEmpty(
                                          SelectTreasureDeviceInfo_k__BackingField->fields.title,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return (System_String_o *)((__int64 (__fastcall *)(SelectTdCommandController_o *, const MethodInfo *))v3->klass->vtable._6_GetDefaultTitle.methodPtr)(
                                v3,
                                v3->klass->vtable._6_GetDefaultTitle.method);
  v6 = v3->fields._SelectTreasureDeviceInfo_k__BackingField;
  if ( !v6 )
LABEL_6:
    sub_21FFECC(this, method);
  return SelectTdCommandController__ReplaceTag(v3, v6->fields.title, v4);
}


SelectTdCommandController_o *SelectTdCommandController__MakeController(
        BattleServantData_o *svtData,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo; // x0
  SelectTreasureDeviceInfo_o *v7; // x21
  SelectTdCommandController_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_593C308 & 1) == 0 )
  {
    sub_21FFC50(&SelectTdCommandController_TypeInfo);
    sub_21FFC50(&SelectTdCommandTypeController_TypeInfo);
    byte_593C308 = 1;
  }
  if ( skillInfo
    && (SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0)) != 0
    && (SelectTreasureDeviceInfo = SkillLvEntity__GetSelectTreasureDeviceInfo(SelfSkillLvEntity, 0)) != 0 )
  {
    v7 = SelectTreasureDeviceInfo;
    v8 = (SelectTdCommandController_o *)sub_21FFEBC(SelectTdCommandController_TypeInfo);
    SelectTdCommandController___ctor(v8, svtData, v7, v9);
  }
  else
  {
    v8 = (SelectTdCommandController_o *)sub_21FFEBC(SelectTdCommandTypeController_TypeInfo);
    SelectTdCommandTypeController___ctor((SelectTdCommandTypeController_o *)v8, svtData, v10);
  }
  return v8;
}


System_String_o *SelectTdCommandController__ReplaceTag(
        SelectTdCommandController_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v5; // x21
  __int64 v6; // x1
  BattleServantData_o *svtData; // x0
  __int64 v8; // x1
  System_String_o *v9; // x19

  if ( (byte_593C307 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_21FFC50(&StringLiteral_16637/*"\\[\\s*servantName\\s*\\]"*/);
    byte_593C307 = 1;
  }
  v5 = (System_Text_RegularExpressions_Regex_o *)sub_21FFEBC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_81846528(v5, (System_String_o *)StringLiteral_16637/*"\\[\\s*servantName\\s*\\]"*/, 0);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getServantShortName(svtData, 0), !v5) )
    sub_21FFECC(svtData, v6);
  v9 = System_Text_RegularExpressions_Regex__Replace_81843212(v5, text, (System_String_o *)svtData, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  return LocalizationManager__ReplaceCommonTag(v9, 1, 0);
}


SelectTreasureDeviceInfo_o *SelectTdCommandController__get_SelectTreasureDeviceInfo(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectTreasureDeviceInfo_k__BackingField;
}


void SelectTdCommandController__set_SelectTreasureDeviceInfo(
        SelectTdCommandController_o *this,
        SelectTreasureDeviceInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SelectTreasureDeviceInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SelectTdCommandController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C309 & 1) == 0 )
  {
    sub_21FFC50(&SelectTdCommandController___c_TypeInfo);
    byte_593C309 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SelectTdCommandController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectTdCommandController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandController___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SelectTdCommandController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SelectTdCommandController___c___ctor(SelectTdCommandController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SelectTdCommandController___c___GetNowSelectingCommandIndex_b__8_0(
        SelectTdCommandController___c_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.id;
}