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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)inputSvtData, v7, v8, v9, v10, v11, v12);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = inputSelectTreasureDeviceInfo;
  sub_1C3B708(
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
  __int64 v2; // x1

  if ( (byte_4C254D5 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_2897/*"BECAME VISIBLE"*/, v2);
    byte_4C254D5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2897/*"BECAME VISIBLE"*/, 0LL);
}


System_String_o *__fastcall SelectTdCommandController__GetDefaultTitle(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  BattleServantData_o *svtData; // x8
  System_String_o *v7; // x19
  Il2CppObject *ServantShortName; // x1

  if ( (byte_4C254D4 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_2898/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/, v3);
    byte_4C254D4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2898/*"BEFORE_CHANGE_FREE_DRAW_NUM"*/, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1C3B9C0(v4, v5);
  v7 = v4;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(svtData, 0LL);
  return System_String__Format(v7, ServantShortName, 0LL);
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
    sub_1C3B9C0(this, method);
  return v5->fields.messageOnSelected;
}


int32_t __fastcall SelectTdCommandController__GetNowSelectingCommandIndex(
        SelectTdCommandController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantData_o *svtData; // x0
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  int32_t v10; // w19
  System_Collections_Generic_IEnumerable_TSource__o *treasureDevices; // x20
  SelectTdCommandController___c_c *v12; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v14; // x22
  struct SelectTdCommandController___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0

  if ( (byte_4C254D3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_SelectTreasureDeviceInfo_TdChangeParam__int___, v3);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1C3B764(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__TypeInfo, v5);
    sub_1C3B764(&Method_SelectTdCommandController___c__GetNowSelectingCommandIndex_b__8_0__, v6);
    sub_1C3B764(&SelectTdCommandController___c_TypeInfo, v7);
    byte_4C254D3 = 1;
  }
  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL),
        (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL) )
  {
    sub_1C3B9C0(svtData, method);
  }
  v10 = (int)svtData;
  treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices;
  v12 = SelectTdCommandController___c_TypeInfo;
  if ( !SelectTdCommandController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandController___c_TypeInfo);
    v12 = SelectTdCommandController___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v12->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = SelectTdCommandController___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__8_0,
      v14,
      Method_SelectTdCommandController___c__GetNowSelectingCommandIndex_b__8_0__,
      0LL);
    static_fields = SelectTdCommandController___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_SelectTreasureDeviceInfo_TdChangeParam__int__o *)_9__8_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               treasureDevices,
                                                               (System_Func_TSource__TResult__o *)_9__8_0,
                                                               (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_SelectTreasureDeviceInfo_TdChangeParam__int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Array__IndexOf_int_(v23, v10, (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
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
    sub_1C3B9C0(this, method);
  return SelectTdCommandController__ReplaceTag(v3, v6->fields.title, v4);
}


SelectTdCommandController_o *__fastcall SelectTdCommandController__MakeController(
        BattleServantData_o *svtData,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo; // x0
  SelectTreasureDeviceInfo_o *v8; // x20
  SelectTdCommandController_o *v9; // x21
  const MethodInfo *v10; // x3
  SelectTdCommandTypeController_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4C254D7 & 1) == 0 )
  {
    sub_1C3B764(&SelectTdCommandController_TypeInfo, skillInfo);
    sub_1C3B764(&SelectTdCommandTypeController_TypeInfo, v5);
    byte_4C254D7 = 1;
  }
  if ( skillInfo
    && (SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(skillInfo, 0LL)) != 0LL
    && (SelectTreasureDeviceInfo = SkillLvEntity__GetSelectTreasureDeviceInfo(SelfSkillLvEntity, 0LL)) != 0LL )
  {
    v8 = SelectTreasureDeviceInfo;
    v9 = (SelectTdCommandController_o *)sub_1C3B9B0(SelectTdCommandController_TypeInfo);
    SelectTdCommandController___ctor(v9, svtData, v8, v10);
    return v9;
  }
  else
  {
    v12 = (SelectTdCommandTypeController_o *)sub_1C3B9B0(SelectTdCommandTypeController_TypeInfo);
    SelectTdCommandTypeController___ctor(v12, svtData, v13);
    return (SelectTdCommandController_o *)v12;
  }
}


System_String_o *__fastcall SelectTdCommandController__ReplaceTag(
        SelectTdCommandController_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Text_RegularExpressions_Regex_o *v7; // x21
  __int64 v8; // x1
  BattleServantData_o *svtData; // x0
  System_String_o *v10; // x19

  if ( (byte_4C254D6 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, text);
    sub_1C3B764(&System_Text_RegularExpressions_Regex_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_16361/*"aes256wrap"*/, v6);
    byte_4C254D6 = 1;
  }
  v7 = (System_Text_RegularExpressions_Regex_o *)sub_1C3B9B0(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(v7, (System_String_o *)StringLiteral_16361/*"aes256wrap"*/, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getServantShortName(svtData, 0LL), !v7) )
    sub_1C3B9C0(svtData, v8);
  v10 = System_Text_RegularExpressions_Regex__Replace_69926596(v7, text, (System_String_o *)svtData, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(v10, 1, 0LL);
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
  sub_1C3B708(
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C254D8 & 1) == 0 )
  {
    sub_1C3B764(&SelectTdCommandController___c_TypeInfo, v1);
    byte_4C254D8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(SelectTdCommandController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectTdCommandController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandController___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)SelectTdCommandController___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.id;
}