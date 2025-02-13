void __fastcall SelectTdCommandController___ctor(
        SelectTdCommandController_o *this,
        BattleServantData_o *inputSvtData,
        SelectTreasureDeviceInfo_o *inputSelectTreasureDeviceInfo,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtData = inputSvtData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)inputSvtData, v7, v8, v9, v10, v11, v12);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = inputSelectTreasureDeviceInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int64_t)inputSelectTreasureDeviceInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_String_o *__fastcall SelectTdCommandController__GetDefaultMessageOnSelected(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFA08 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2911/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_NOW"*/);
    byte_4BDFA08 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2911/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_NOW"*/, 0LL);
}


System_String_o *__fastcall SelectTdCommandController__GetDefaultTitle(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  BattleServantData_o *svtData; // x8
  System_String_o *v6; // x19
  Il2CppObject *ServantShortName; // x1

  if ( (byte_4BDFA07 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2912/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_TITLE"*/);
    byte_4BDFA07 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2912/*"BATTLE_DIALOG_TREASURE_DEVICE_CHANGE_TITLE"*/, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1C22094(v3, v4);
  v6 = v3;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(svtData, 0LL);
  return System_String__Format(v6, ServantShortName, 0LL);
}


System_String_o *__fastcall SelectTdCommandController__GetMessageOnSelected(
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
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return (System_String_o *)((__int64 (__fastcall *)(SelectTdCommandController_o *, void *))v3->klass->vtable._7_GetDefaultMessageOnSelected.method)(
                                v3,
                                v3->klass[1]._1.image);
  v5 = v3->fields._SelectTreasureDeviceInfo_k__BackingField;
  if ( !v5 )
LABEL_6:
    sub_1C22094(this, method);
  return v5->fields.messageOnSelected;
}


int32_t __fastcall SelectTdCommandController__GetNowSelectingCommandIndex(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  int32_t v5; // w19
  System_Collections_Generic_IEnumerable_TSource__o *treasureDevices; // x20
  SelectTdCommandController___c_c *v7; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v9; // x22
  struct SelectTdCommandController___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Int32_array *v18; // x0

  if ( (byte_4BDFA06 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_SelectTreasureDeviceInfo_TdChangeParam__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__TypeInfo);
    sub_1C21E38(&Method_SelectTdCommandController___c__GetNowSelectingCommandIndex_b__8_0__);
    sub_1C21E38(&SelectTdCommandController___c_TypeInfo);
    byte_4BDFA06 = 1;
  }
  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL),
        (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL) )
  {
    sub_1C22094(svtData, method);
  }
  v5 = (int)svtData;
  treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices;
  v7 = SelectTdCommandController___c_TypeInfo;
  if ( !SelectTdCommandController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandController___c_TypeInfo);
    v7 = SelectTdCommandController___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v7->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SelectTdCommandController___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__8_0,
      v9,
      Method_SelectTdCommandController___c__GetNowSelectingCommandIndex_b__8_0__,
      0LL);
    static_fields = SelectTdCommandController___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__o *)_9__8_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               treasureDevices,
                                                               (System_Func_TSource__TResult__o *)_9__8_0,
                                                               (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_SelectTreasureDeviceInfo_TdChangeParam__int___);
  v18 = System_Linq_Enumerable__ToArray_int_(
          v17,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Array__IndexOf_int_(v18, v5, (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
}


UnityEngine_Vector3_o __fastcall SelectTdCommandController__GetNowTypeFrameOffset(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = 0.0;
  v3 = 4.0;
  v4 = 0.0;
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


System_String_o *__fastcall SelectTdCommandController__GetTitle(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
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
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return (System_String_o *)((__int64 (__fastcall *)(SelectTdCommandController_o *, Il2CppMethodPointer))v3->klass->vtable._6_GetDefaultTitle.method)(
                                v3,
                                v3->klass->vtable._7_GetDefaultMessageOnSelected.methodPtr);
  v6 = v3->fields._SelectTreasureDeviceInfo_k__BackingField;
  if ( !v6 )
LABEL_6:
    sub_1C22094(this, method);
  return SelectTdCommandController__ReplaceTag(v3, v6->fields.title, v4);
}


SelectTdCommandController_o *__fastcall SelectTdCommandController__MakeController(
        BattleServantData_o *svtData,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo; // x0
  SelectTreasureDeviceInfo_o *v7; // x20
  SelectTdCommandController_o *v8; // x21
  const MethodInfo *v9; // x3
  SelectTdCommandTypeController_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4BDFA0A & 1) == 0 )
  {
    sub_1C21E38(&SelectTdCommandController_TypeInfo);
    sub_1C21E38(&SelectTdCommandTypeController_TypeInfo);
    byte_4BDFA0A = 1;
  }
  if ( skillInfo
    && (SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL)) != 0LL
    && (SelectTreasureDeviceInfo = SkillLvEntity__GetSelectTreasureDeviceInfo(SelfSkillLvEntity, 0LL)) != 0LL )
  {
    v7 = SelectTreasureDeviceInfo;
    v8 = (SelectTdCommandController_o *)sub_1C22084(SelectTdCommandController_TypeInfo);
    SelectTdCommandController___ctor(v8, svtData, v7, v9);
    return v8;
  }
  else
  {
    v11 = (SelectTdCommandTypeController_o *)sub_1C22084(SelectTdCommandTypeController_TypeInfo);
    SelectTdCommandTypeController___ctor(v11, svtData, v12);
    return (SelectTdCommandController_o *)v11;
  }
}


System_String_o *__fastcall SelectTdCommandController__ReplaceTag(
        SelectTdCommandController_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v5; // x21
  __int64 v6; // x1
  BattleServantData_o *svtData; // x0
  System_String_o *v8; // x19

  if ( (byte_4BDFA09 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C21E38(&StringLiteral_16320/*"\\[\\s*servantName\\s*\\]"*/);
    byte_4BDFA09 = 1;
  }
  v5 = (System_Text_RegularExpressions_Regex_o *)sub_1C22084(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(v5, (System_String_o *)StringLiteral_16320/*"\\[\\s*servantName\\s*\\]"*/, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getServantShortName(svtData, 0LL), !v5) )
    sub_1C22094(svtData, v6);
  v8 = System_Text_RegularExpressions_Regex__Replace_69673460(v5, text, (System_String_o *)svtData, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(v8, 1, 0LL);
}


SelectTreasureDeviceInfo_o *__fastcall SelectTdCommandController__get_SelectTreasureDeviceInfo(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectTreasureDeviceInfo_k__BackingField;
}


void __fastcall SelectTdCommandController__set_SelectTreasureDeviceInfo(
        SelectTdCommandController_o *this,
        SelectTreasureDeviceInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SelectTreasureDeviceInfo_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SelectTdCommandController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDFA0B & 1) == 0 )
  {
    sub_1C21E38(&SelectTdCommandController___c_TypeInfo);
    byte_4BDFA0B = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SelectTdCommandController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SelectTdCommandController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandController___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SelectTdCommandController___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SelectTdCommandController___c___ctor(SelectTdCommandController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SelectTdCommandController___c___GetNowSelectingCommandIndex_b__8_0(
        SelectTdCommandController___c_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.id;
}