void __fastcall SelectTdCommandTypeController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct BattleCommand_TYPE_array *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B48189 & 1) == 0 )
  {
    sub_1BDB878(&SelectTdCommandTypeController_TypeInfo, v1);
    sub_1BDB878(&BattleCommand_TYPE___TypeInfo, v2);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v3);
    byte_4B48189 = 1;
  }
  v4 = (System_Array_o *)sub_1BDB920(BattleCommand_TYPE___TypeInfo, 3LL);
  v8.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  v5 = (struct BattleCommand_TYPE_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v4, v8, 0LL);
  SelectTdCommandTypeController_TypeInfo->static_fields->CommandTypeOrder = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)SelectTdCommandTypeController_TypeInfo->static_fields, (int32_t)v5, v6, v7);
}


void __fastcall SelectTdCommandTypeController___ctor(
        SelectTdCommandTypeController_o *this,
        BattleServantData_o *inputSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  SelectTdCommandController___ctor((SelectTdCommandController_o *)this, inputSvtData, 0LL, v3);
  SelectTreasureDeviceInfo = SelectTdCommandTypeController__MakeSelectTreasureDeviceInfo(this, v5);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = SelectTreasureDeviceInfo;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int32_t)SelectTreasureDeviceInfo,
    v7,
    v8);
}


System_Int32_array *__fastcall SelectTdCommandTypeController__GetCommandTypeArray(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  BattleServantData_o *v17; // x1
  BattleServantData_o *svtData; // x0
  int32_t TreasureDvcId; // w20
  Il2CppObject *Entity; // x0
  SelectTdCommandTypeController_c *v21; // x8
  TreasureDvcEntity_o *v22; // x21
  SelectTdCommandTypeController___c_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeOrder; // x20
  System_Func_T__TResult__o *_9__7_0; // x22
  Il2CppObject *v26; // x23
  struct SelectTdCommandTypeController___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  long double inited; // q0
  _QWORD *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x0
  System_Func_int__bool__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4B48187 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_TreasureDvcMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v9);
    sub_1BDB878(&System_Func_BattleCommand_TYPE__int__TypeInfo, v10);
    sub_1BDB878(&SelectTdCommandTypeController_TypeInfo, v11);
    sub_1BDB878(&Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__, v12);
    sub_1BDB878(&Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__, v13);
    sub_1BDB878(&SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo, v14);
    sub_1BDB878(&SelectTdCommandTypeController___c_TypeInfo, v15);
    byte_4B48187 = 1;
  }
  v16 = sub_1BDBAC4(SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_28;
  TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 0, 0LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !svtData )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)svtData,
             TreasureDvcId,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v21 = SelectTdCommandTypeController_TypeInfo;
  v22 = (TreasureDvcEntity_o *)Entity;
  if ( !SelectTdCommandTypeController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController_TypeInfo);
    v21 = SelectTdCommandTypeController_TypeInfo;
  }
  v23 = SelectTdCommandTypeController___c_TypeInfo;
  CommandTypeOrder = (System_Collections_Generic_IEnumerable_TSource__o *)v21->static_fields->CommandTypeOrder;
  if ( !SelectTdCommandTypeController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController___c_TypeInfo);
    v23 = SelectTdCommandTypeController___c_TypeInfo;
  }
  _9__7_0 = (System_Func_T__TResult__o *)v23->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = SelectTdCommandTypeController___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__7_0 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_BattleCommand_TYPE__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(
      _9__7_0,
      v26,
      Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__,
      0LL);
    static_fields = SelectTdCommandTypeController___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_BattleCommand_TYPE__int__o *)_9__7_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__int_(
                                                               CommandTypeOrder,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_306668C *)Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
  svtData = (BattleServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                     v30,
                                     (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v22 )
    goto LABEL_28;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)svtData;
  svtData = (BattleServantData_o *)TreasureDvcEntity__GetExcludeTdChangeTypes(v22, 0LL, 0LL);
  v17 = svtData;
  if ( !svtData )
  {
    v35 = Method_System_Array_Empty_int___;
    v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v36 )
    {
      sub_1C2BF64(Method_System_Array_Empty_int___);
      v36 = v35[7];
    }
    v37 = *(_QWORD *)(v36 + 16);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v37 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v37);
    svtData = *(BattleServantData_o **)(v35[7] + 16LL);
    if ( (BYTE5(svtData->fields.deckSvt) & 1) == 0 )
      svtData = (BattleServantData_o *)sub_1C2BF08(inited);
    v17 = **(BattleServantData_o ***)&svtData->fields._ExistIndividualityServant_k__BackingField;
  }
  if ( !v16 )
LABEL_28:
    sub_1BDBAD4(svtData, v17);
  *(_QWORD *)(v16 + 16) = v17;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)v17, v32, v33);
  v38 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v38,
    (Il2CppObject *)v16,
    Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__,
    0LL);
  v39 = System_Linq_Enumerable__Where_int_(
          v31,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_307716C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v39,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall SelectTdCommandTypeController__GetDefaultMessageOnSelected(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B48185 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_2783/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, v2);
    byte_4B48185 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2783/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
}


System_String_o *__fastcall SelectTdCommandTypeController__GetDefaultTitle(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1
  BattleServantData_o *svtData; // x8
  System_String_o *v7; // x19
  Il2CppObject *ServantShortName; // x1

  if ( (byte_4B48184 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_2785/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, v3);
    byte_4B48184 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2785/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1BDBAD4(v4, v5);
  v7 = v4;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(svtData, 0LL);
  return System_String__Format(v7, ServantShortName, 0LL);
}


int32_t __fastcall SelectTdCommandTypeController__GetNowCommandTypeId(
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
  if ( (byte_4B48188 & 1) == 0 )
  {
    this = (SelectTdCommandTypeController_o *)sub_1BDB878(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                method);
    byte_4B48188 = 1;
  }
  svtData = v2->fields.svtData;
  if ( !svtData )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)svtData->fields.buffData;
  if ( !this )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)BattleBuffData__isTDTypeChange((BattleBuffData_o *)this, svtData, 0LL, 0LL);
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
    this = (SelectTdCommandTypeController_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                v9,
                                                0LL);
    v7 = v2->fields.svtData;
    if ( v7 )
    {
      this = (SelectTdCommandTypeController_o *)ServantTreasureDvcMaster__getEntityFromIDID(
                                                  (int32_t)this,
                                                  v7->fields.treasuredvcId,
                                                  0LL);
      if ( this )
      {
        v4 = (int32_t *)&this[2];
        return *v4;
      }
    }
LABEL_16:
    sub_1BDBAD4(this, svtData);
  }
  this = (SelectTdCommandTypeController_o *)svtData->fields.buffData;
  if ( !this )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)BattleBuffData__getTDTypeChangeBuffData(
                                              (BattleBuffData_o *)this,
                                              svtData,
                                              0LL,
                                              0LL);
  if ( !this )
    goto LABEL_16;
  v4 = (int32_t *)&this->fields._SelectTreasureDeviceInfo_k__BackingField + 1;
  return *v4;
}


int32_t __fastcall SelectTdCommandTypeController__GetNowSelectingCommandIndex(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  const MethodInfo *v8; // x1
  Il2CppObject *NowCommandTypeId; // x0
  __int64 v10; // x1
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureDevices; // x21
  System_Func_object__bool__o *v13; // x22
  struct SelectTreasureDeviceInfo_o *v14; // x8

  if ( (byte_4B48183 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___, v3);
    sub_1BDB878(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo, v4);
    sub_1BDB878(&Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__, v5);
    sub_1BDB878(&SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo, v6);
    byte_4B48183 = 1;
  }
  v7 = sub_1BDBAC4(SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  NowCommandTypeId = (Il2CppObject *)SelectTdCommandTypeController__GetNowCommandTypeId(this, v8);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = (_DWORD)NowCommandTypeId,
        (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL)
    || (treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
        v13 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v13,
          (Il2CppObject *)v7,
          Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__,
          0LL),
        NowCommandTypeId = System_Linq_Enumerable__FirstOrDefault_object__50698552(
                             treasureDevices,
                             (System_Func_TSource__bool__o *)v13,
                             (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___),
        (v14 = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL) )
  {
    sub_1BDBAD4(NowCommandTypeId, v10);
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v14->fields.treasureDevices,
           NowCommandTypeId,
           (const MethodInfo_31330C0 *)Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
}


UnityEngine_Vector3_o __fastcall SelectTdCommandTypeController__GetNowTypeFrameOffset(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B3E911 = 1;
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


SelectTreasureDeviceInfo_o *__fastcall SelectTdCommandTypeController__MakeSelectTreasureDeviceInfo(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  const MethodInfo *v9; // x1
  BattleServantData_o *svtData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeArray; // x19
  System_Func_T__TResult__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *v14; // x19
  SelectTreasureDeviceInfo_o *v15; // x20

  if ( (byte_4B48186 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___, v3);
    sub_1BDB878(&System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo, v4);
    sub_1BDB878(&SelectTreasureDeviceInfo_TypeInfo, v5);
    sub_1BDB878(&Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__, v6);
    sub_1BDB878(&SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo, v7);
    byte_4B48186 = 1;
  }
  v8 = sub_1BDBAC4(SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 0, 0LL, 0LL), !v8) )
    sub_1BDBAD4(svtData, v9);
  *(_DWORD *)(v8 + 16) = (_DWORD)svtData;
  CommandTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTdCommandTypeController__GetCommandTypeArray(
                                                                            this,
                                                                            v9);
  v12 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
  System_Func_int__object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__,
    0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               CommandTypeArray,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_3065ABC *)Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
  v15 = (SelectTreasureDeviceInfo_o *)sub_1BDBAC4(SelectTreasureDeviceInfo_TypeInfo);
  SelectTreasureDeviceInfo___ctor_40709724(v15, (SelectTreasureDeviceInfo_TdChangeParam_array *)v14, 0LL);
  return v15;
}


void __fastcall SelectTdCommandTypeController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4818A & 1) == 0 )
  {
    sub_1BDB878(&SelectTdCommandTypeController___c_TypeInfo, v1);
    byte_4B4818A = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(SelectTdCommandTypeController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectTdCommandTypeController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandTypeController___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)SelectTdCommandTypeController___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SelectTdCommandTypeController___c___ctor(
        SelectTdCommandTypeController___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SelectTdCommandTypeController___c___GetCommandTypeArray_b__7_0(
        SelectTdCommandTypeController___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall SelectTdCommandTypeController___c__DisplayClass2_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SelectTdCommandTypeController___c__DisplayClass2_0___GetNowSelectingCommandIndex_b__0(
        SelectTdCommandTypeController___c__DisplayClass2_0_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.type == this->fields.nowCommandTypeId;
}


void __fastcall SelectTdCommandTypeController___c__DisplayClass6_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SelectTreasureDeviceInfo_TdChangeParam_o *__fastcall SelectTdCommandTypeController___c__DisplayClass6_0___MakeSelectTreasureDeviceInfo_b__0(
        SelectTdCommandTypeController___c__DisplayClass6_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t tdId; // w20
  SelectTreasureDeviceInfo_TdChangeParam_o *v6; // x21

  if ( (byte_4B4818B & 1) == 0 )
  {
    sub_1BDB878(&SelectTreasureDeviceInfo_TdChangeParam_TypeInfo, *(_QWORD *)&x);
    byte_4B4818B = 1;
  }
  tdId = this->fields.tdId;
  v6 = (SelectTreasureDeviceInfo_TdChangeParam_o *)sub_1BDBAC4(SelectTreasureDeviceInfo_TdChangeParam_TypeInfo);
  SelectTreasureDeviceInfo_TdChangeParam___ctor_40710144(v6, tdId, x, x, 0LL, 0LL);
  return v6;
}


void __fastcall SelectTdCommandTypeController___c__DisplayClass7_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SelectTdCommandTypeController___c__DisplayClass7_0___GetCommandTypeArray_b__1(
        SelectTdCommandTypeController___c__DisplayClass7_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4B4818C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_4B4818C = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.excludeCardTypes,
            x,
            (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
}