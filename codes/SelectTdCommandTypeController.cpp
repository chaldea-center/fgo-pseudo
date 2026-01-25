void SelectTdCommandTypeController___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct BattleCommand_TYPE_array *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF20F3 & 1) == 0 )
  {
    sub_1C7BAE8(&SelectTdCommandTypeController_TypeInfo);
    sub_1C7BAE8(&BattleCommand_TYPE___TypeInfo);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB);
    byte_4CF20F3 = 1;
  }
  v1 = (System_Array_o *)sub_1C7BB90(BattleCommand_TYPE___TypeInfo, 3);
  v2.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  v3 = (struct BattleCommand_TYPE_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v1, v2, 0);
  SelectTdCommandTypeController_TypeInfo->static_fields->CommandTypeOrder = v3;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SelectTdCommandTypeController_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void SelectTdCommandTypeController___ctor(
        SelectTdCommandTypeController_o *this,
        BattleServantData_o *inputSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  SelectTdCommandController___ctor((SelectTdCommandController_o *)this, inputSvtData, 0, v3);
  SelectTreasureDeviceInfo = SelectTdCommandTypeController__MakeSelectTreasureDeviceInfo(this, v5);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = SelectTreasureDeviceInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int32_t)SelectTreasureDeviceInfo,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


System_Int32_array *SelectTdCommandTypeController__GetCommandTypeArray(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  BattleServantData_o *v4; // x1
  BattleServantData_o *svtData; // x0
  int32_t TreasureDvcId; // w20
  Il2CppObject *Entity; // x0
  SelectTdCommandTypeController_c *v8; // x8
  TreasureDvcEntity_o *v9; // x21
  SelectTdCommandTypeController___c_c *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeOrder; // x20
  System_Func_T__TResult__o *_9__7_0; // x22
  Il2CppObject *v13; // x23
  struct SelectTdCommandTypeController___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  long double inited; // q0
  _QWORD *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x0
  System_Func_int__bool__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_4CF20F1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_BattleCommand_TYPE__int__TypeInfo);
    sub_1C7BAE8(&SelectTdCommandTypeController_TypeInfo);
    sub_1C7BAE8(&Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__);
    sub_1C7BAE8(&Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__);
    sub_1C7BAE8(&SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo);
    sub_1C7BAE8(&SelectTdCommandTypeController___c_TypeInfo);
    byte_4CF20F1 = 1;
  }
  v3 = sub_1C7BD34(SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_28;
  TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 0, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !svtData )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)svtData,
             TreasureDvcId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v8 = SelectTdCommandTypeController_TypeInfo;
  v9 = (TreasureDvcEntity_o *)Entity;
  if ( !SelectTdCommandTypeController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController_TypeInfo);
    v8 = SelectTdCommandTypeController_TypeInfo;
  }
  v10 = SelectTdCommandTypeController___c_TypeInfo;
  CommandTypeOrder = (System_Collections_Generic_IEnumerable_TSource__o *)v8->static_fields->CommandTypeOrder;
  if ( !SelectTdCommandTypeController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController___c_TypeInfo);
    v10 = SelectTdCommandTypeController___c_TypeInfo;
  }
  _9__7_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SelectTdCommandTypeController___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__7_0 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_BattleCommand_TYPE__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(
      _9__7_0,
      v13,
      Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__,
      0);
    static_fields = SelectTdCommandTypeController___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_BattleCommand_TYPE__int__o *)_9__7_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__int_(
                                                               CommandTypeOrder,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_31A3E54 *)Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
  svtData = (BattleServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                     v21,
                                     (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v9 )
    goto LABEL_28;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)svtData;
  svtData = (BattleServantData_o *)TreasureDvcEntity__GetExcludeTdChangeTypes(v9, 0, 0);
  v4 = svtData;
  if ( !svtData )
  {
    v30 = Method_System_Array_Empty_int___;
    v31 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v31 )
    {
      sub_1C51BD8(Method_System_Array_Empty_int___);
      v31 = v30[7];
    }
    v32 = *(_QWORD *)(v31 + 16);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v32 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v32);
    svtData = *(BattleServantData_o **)(v30[7] + 16LL);
    if ( (BYTE5(svtData->fields.svtlimitaddent) & 1) == 0 )
      svtData = (BattleServantData_o *)sub_1C51B7C(inited);
    v4 = **(BattleServantData_o ***)&svtData->fields._ExistIndividualityServant_k__BackingField;
  }
  if ( !v3 )
LABEL_28:
    sub_1C7BD40(svtData, v4);
  *(_QWORD *)(v3 + 16) = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v4, v23, v24, v25, v26, v27, v28);
  v33 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v33,
    (Il2CppObject *)v3,
    Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__,
    0);
  v34 = System_Linq_Enumerable__Where_int_(
          v22,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *SelectTdCommandTypeController__GetDefaultMessageOnSelected(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF20EF & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2753/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/);
    byte_4CF20EF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2753/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0);
}


System_String_o *SelectTdCommandTypeController__GetDefaultTitle(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  BattleServantData_o *svtData; // x8
  System_String_o *v6; // x19
  Il2CppObject *ServantShortName; // x1

  if ( (byte_4CF20EE & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2755/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/);
    byte_4CF20EE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2755/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1C7BD40(v3, v4);
  v6 = v3;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(svtData, 0);
  return System_String__Format(v6, ServantShortName, 0);
}


int32_t SelectTdCommandTypeController__GetNowCommandTypeId(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  SelectTdCommandTypeController_o *v2; // x19
  struct BattleServantData_o *svtData; // x1
  int32_t *v4; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  struct BattleServantData_o *v7; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4CF20F2 & 1) == 0 )
  {
    this = (SelectTdCommandTypeController_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CF20F2 = 1;
  }
  svtData = v2->fields.svtData;
  if ( !svtData )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)svtData->fields.buffData;
  if ( !this )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)BattleBuffData__isTDTypeChange((BattleBuffData_o *)this, svtData, 0, 0);
  svtData = v2->fields.svtData;
  if ( !svtData )
    goto LABEL_16;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v6 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    this = (SelectTdCommandTypeController_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v9, 0);
    v7 = v2->fields.svtData;
    if ( v7 )
    {
      this = (SelectTdCommandTypeController_o *)ServantTreasureDvcMaster__getEntityFromIDID(
                                                  (int32_t)this,
                                                  v7->fields.treasuredvcId,
                                                  0);
      if ( this )
      {
        v4 = (int32_t *)&this[2];
        return *v4;
      }
    }
LABEL_16:
    sub_1C7BD40(this, svtData);
  }
  this = (SelectTdCommandTypeController_o *)svtData->fields.buffData;
  if ( !this )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)BattleBuffData__getTDTypeChangeBuffData(
                                              (BattleBuffData_o *)this,
                                              svtData,
                                              0,
                                              0);
  if ( !this )
    goto LABEL_16;
  v4 = (int32_t *)&this->fields._SelectTreasureDeviceInfo_k__BackingField + 1;
  return *v4;
}


int32_t SelectTdCommandTypeController__GetNowSelectingCommandIndex(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NowCommandTypeId; // x0
  __int64 v6; // x1
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureDevices; // x21
  System_Func_object__bool__o *v9; // x22
  struct SelectTreasureDeviceInfo_o *v10; // x8

  if ( (byte_4CF20ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C7BAE8(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo);
    sub_1C7BAE8(&Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__);
    sub_1C7BAE8(&SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo);
    byte_4CF20ED = 1;
  }
  v3 = sub_1C7BD34(SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  NowCommandTypeId = (Il2CppObject *)SelectTdCommandTypeController__GetNowCommandTypeId(this, v4);
  if ( !v3
    || (*(_DWORD *)(v3 + 16) = (_DWORD)NowCommandTypeId,
        (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0)
    || (treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
        v9 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v9,
          (Il2CppObject *)v3,
          Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__,
          0),
        NowCommandTypeId = System_Linq_Enumerable__FirstOrDefault_object__52006308(
                             treasureDevices,
                             (System_Func_TSource__bool__o *)v9,
                             (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___),
        (v10 = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0) )
  {
    sub_1C7BD40(NowCommandTypeId, v6);
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v10->fields.treasureDevices,
           NowCommandTypeId,
           (const MethodInfo_3275398 *)Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
}


UnityEngine_Vector3_o SelectTdCommandTypeController__GetNowTypeFrameOffset(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


SelectTreasureDeviceInfo_o *SelectTdCommandTypeController__MakeSelectTreasureDeviceInfo(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  BattleServantData_o *svtData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeArray; // x19
  System_Func_T__TResult__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Object_array *v9; // x19
  SelectTreasureDeviceInfo_o *v10; // x20

  if ( (byte_4CF20F0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C7BAE8(&System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
    sub_1C7BAE8(&SelectTreasureDeviceInfo_TypeInfo);
    sub_1C7BAE8(&Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__);
    sub_1C7BAE8(&SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo);
    byte_4CF20F0 = 1;
  }
  v3 = sub_1C7BD34(SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 0, 0, 0), !v3) )
    sub_1C7BD40(svtData, v4);
  *(_DWORD *)(v3 + 16) = (_DWORD)svtData;
  CommandTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTdCommandTypeController__GetCommandTypeArray(
                                                                            this,
                                                                            v4);
  v7 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
  System_Func_int__object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__,
    0);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              CommandTypeArray,
                                                              (System_Func_TSource__TResult__o *)v7,
                                                              (const MethodInfo_31A3214 *)Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v8,
         (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
  v10 = (SelectTreasureDeviceInfo_o *)sub_1C7BD34(SelectTreasureDeviceInfo_TypeInfo);
  SelectTreasureDeviceInfo___ctor_42285040(v10, (SelectTreasureDeviceInfo_TdChangeParam_array *)v9, 0);
  return v10;
}


void SelectTdCommandTypeController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF20F4 & 1) == 0 )
  {
    sub_1C7BAE8(&SelectTdCommandTypeController___c_TypeInfo);
    byte_4CF20F4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SelectTdCommandTypeController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectTdCommandTypeController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandTypeController___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SelectTdCommandTypeController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SelectTdCommandTypeController___c___ctor(SelectTdCommandTypeController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SelectTdCommandTypeController___c___GetCommandTypeArray_b__7_0(
        SelectTdCommandTypeController___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void SelectTdCommandTypeController___c__DisplayClass2_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectTdCommandTypeController___c__DisplayClass2_0___GetNowSelectingCommandIndex_b__0(
        SelectTdCommandTypeController___c__DisplayClass2_0_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.type == this->fields.nowCommandTypeId;
}


void SelectTdCommandTypeController___c__DisplayClass6_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


SelectTreasureDeviceInfo_TdChangeParam_o *SelectTdCommandTypeController___c__DisplayClass6_0___MakeSelectTreasureDeviceInfo_b__0(
        SelectTdCommandTypeController___c__DisplayClass6_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t tdId; // w20
  SelectTreasureDeviceInfo_TdChangeParam_o *v6; // x21

  if ( (byte_4CF20F5 & 1) == 0 )
  {
    sub_1C7BAE8(&SelectTreasureDeviceInfo_TdChangeParam_TypeInfo);
    byte_4CF20F5 = 1;
  }
  tdId = this->fields.tdId;
  v6 = (SelectTreasureDeviceInfo_TdChangeParam_o *)sub_1C7BD34(SelectTreasureDeviceInfo_TdChangeParam_TypeInfo);
  SelectTreasureDeviceInfo_TdChangeParam___ctor_42285460(v6, tdId, x, x, 0, 0);
  return v6;
}


void SelectTdCommandTypeController___c__DisplayClass7_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectTdCommandTypeController___c__DisplayClass7_0___GetCommandTypeArray_b__1(
        SelectTdCommandTypeController___c__DisplayClass7_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4CF20F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CF20F6 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.excludeCardTypes,
            x,
            (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
}