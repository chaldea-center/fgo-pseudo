void SelectTdCommandTypeController___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct BattleCommand_TYPE_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974548 & 1) == 0 )
  {
    sub_2213A60(&SelectTdCommandTypeController_TypeInfo);
    sub_2213A60(&BattleCommand_TYPE___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB);
    byte_5974548 = 1;
  }
  v1 = (System_Array_o *)sub_2213B20(BattleCommand_TYPE___TypeInfo, 3);
  v2.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  v3 = (struct BattleCommand_TYPE_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v1, v2, 0);
  SelectTdCommandTypeController_TypeInfo->static_fields->CommandTypeOrder = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SelectTdCommandTypeController_TypeInfo->static_fields,
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  SelectTdCommandController___ctor((SelectTdCommandController_o *)this, inputSvtData, 0, v3);
  SelectTreasureDeviceInfo = SelectTdCommandTypeController__MakeSelectTreasureDeviceInfo(this, v5);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = SelectTreasureDeviceInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
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
  void *v4; // x1
  void *svtData; // x0
  __int64 v6; // x1
  int32_t TreasureDvcId; // w20
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  SelectTdCommandTypeController_c *v10; // x8
  TreasureDvcEntity_o *v11; // x20
  SelectTdCommandTypeController___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeOrder; // x21
  struct SelectTdCommandTypeController___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__7_0; // x22
  Il2CppObject *v16; // x23
  struct SelectTdCommandTypeController___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  long double v32; // q0
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x0
  System_Func_int__bool__o *v36; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_5974546 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleCommand_TYPE__int__TypeInfo);
    sub_2213A60(&SelectTdCommandTypeController_TypeInfo);
    sub_2213A60(&Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__);
    sub_2213A60(&Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__);
    sub_2213A60(&SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo);
    sub_2213A60(&SelectTdCommandTypeController___c_TypeInfo);
    byte_5974546 = 1;
  }
  v3 = sub_2213CCC(SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_28;
  TreasureDvcId = BattleServantData__getTreasureDvcId((BattleServantData_o *)svtData, 0, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  svtData = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !svtData )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)svtData,
             TreasureDvcId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v10 = SelectTdCommandTypeController_TypeInfo;
  v11 = (TreasureDvcEntity_o *)Entity;
  if ( !*(&SelectTdCommandTypeController_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController_TypeInfo, v9);
    v10 = SelectTdCommandTypeController_TypeInfo;
  }
  v12 = SelectTdCommandTypeController___c_TypeInfo;
  CommandTypeOrder = (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->CommandTypeOrder;
  if ( !*(&SelectTdCommandTypeController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController___c_TypeInfo, v9);
    v12 = SelectTdCommandTypeController___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__7_0 = (System_Func_T__TResult__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v9);
      static_fields = SelectTdCommandTypeController___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_BattleCommand_TYPE__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(
      _9__7_0,
      v16,
      Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__,
      0);
    v17 = SelectTdCommandTypeController___c_TypeInfo->static_fields;
    v17->__9__7_0 = (struct System_Func_BattleCommand_TYPE__int__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__7_0, (int32_t)_9__7_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__int_(
                                                               CommandTypeOrder,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_388EBA8 *)Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
  svtData = System_Linq_Enumerable__ToArray_int_(
              v24,
              (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v11 )
    goto LABEL_28;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)svtData;
  svtData = TreasureDvcEntity__GetExcludeTdChangeTypes(v11, 0, 0);
  v4 = svtData;
  if ( !svtData )
  {
    v33 = Method_System_Array_Empty_int___;
    v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v34 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v34 = v33[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
      v35 = sub_224B908(v32);
    if ( !*(_DWORD *)(v35 + 228) )
      *(__n128 *)&v32 = j_il2cpp_runtime_class_init_0(v35, v4);
    svtData = *(void **)(v33[7] + 16LL);
    if ( (*(_WORD *)((_BYTE *)svtData + 309) & 1) == 0 )
      svtData = (void *)sub_224B908(v32);
    v4 = (void *)**((_QWORD **)svtData + 23);
  }
  if ( !v3 )
LABEL_28:
    sub_2213CDC(svtData, v4);
  *(_QWORD *)(v3 + 16) = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v26, v27, v28, v29, v30, v31);
  v36 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v36,
    (Il2CppObject *)v3,
    Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__,
    0);
  v37 = System_Linq_Enumerable__Where_int_(
          v25,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v37,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *SelectTdCommandTypeController__GetDefaultMessageOnSelected(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974544 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2869/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/);
    byte_5974544 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2869/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0);
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

  if ( (byte_5974543 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2871/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/);
    byte_5974543 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2871/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_2213CDC(v3, v4);
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
  if ( (byte_5974547 & 1) == 0 )
  {
    this = (SelectTdCommandTypeController_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974547 = 1;
  }
  svtData = v2->fields.svtData;
  if ( !svtData )
    goto LABEL_17;
  this = (SelectTdCommandTypeController_o *)svtData->fields.buffData;
  if ( !this )
    goto LABEL_17;
  this = (SelectTdCommandTypeController_o *)BattleBuffData__isTDTypeChange((BattleBuffData_o *)this, svtData, 0, 0);
  svtData = v2->fields.svtData;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( svtData )
    {
      v5 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v6 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData);
      *(_QWORD *)&v9.fields.currentCryptoKey = v5;
      *(_QWORD *)&v9.fields.fakeValue = v6;
      this = (SelectTdCommandTypeController_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                  v9,
                                                  0);
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
    }
LABEL_17:
    sub_2213CDC(this, svtData);
  }
  if ( !svtData )
    goto LABEL_17;
  this = (SelectTdCommandTypeController_o *)svtData->fields.buffData;
  if ( !this )
    goto LABEL_17;
  this = (SelectTdCommandTypeController_o *)BattleBuffData__getTDTypeChangeBuffData(
                                              (BattleBuffData_o *)this,
                                              svtData,
                                              0,
                                              0);
  if ( !this )
    goto LABEL_17;
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

  if ( (byte_5974542 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_2213A60(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo);
    sub_2213A60(&Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__);
    sub_2213A60(&SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo);
    byte_5974542 = 1;
  }
  v3 = sub_2213CCC(SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  NowCommandTypeId = (Il2CppObject *)SelectTdCommandTypeController__GetNowCommandTypeId(this, v4);
  if ( !v3
    || (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField,
        *(_DWORD *)(v3 + 16) = (_DWORD)NowCommandTypeId,
        !SelectTreasureDeviceInfo_k__BackingField)
    || (treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
        v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v9,
          (Il2CppObject *)v3,
          Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__,
          0),
        NowCommandTypeId = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                             treasureDevices,
                             (System_Func_TSource__bool__o *)v9,
                             (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___),
        (v10 = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0) )
  {
    sub_2213CDC(NowCommandTypeId, v6);
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v10->fields.treasureDevices,
           NowCommandTypeId,
           (const MethodInfo_3A2E6EC *)Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
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

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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

  if ( (byte_5974545 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_2213A60(&System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
    sub_2213A60(&SelectTreasureDeviceInfo_TypeInfo);
    sub_2213A60(&Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__);
    sub_2213A60(&SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo);
    byte_5974545 = 1;
  }
  v3 = sub_2213CCC(SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 0, 0, 0), !v3) )
    sub_2213CDC(svtData, v4);
  *(_DWORD *)(v3 + 16) = (_DWORD)svtData;
  CommandTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTdCommandTypeController__GetCommandTypeArray(
                                                                            this,
                                                                            v4);
  v7 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
  System_Func_int__object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__,
    0);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              CommandTypeArray,
                                                              (System_Func_TSource__TResult__o *)v7,
                                                              (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v8,
         (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
  v10 = (SelectTreasureDeviceInfo_o *)sub_2213CCC(SelectTreasureDeviceInfo_TypeInfo);
  SelectTreasureDeviceInfo___ctor_48715348(v10, (SelectTreasureDeviceInfo_TdChangeParam_array *)v9, 0);
  return v10;
}


void SelectTdCommandTypeController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974549 & 1) == 0 )
  {
    sub_2213A60(&SelectTdCommandTypeController___c_TypeInfo);
    byte_5974549 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SelectTdCommandTypeController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectTdCommandTypeController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandTypeController___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SelectTdCommandTypeController___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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

  if ( (byte_597454A & 1) == 0 )
  {
    sub_2213A60(&SelectTreasureDeviceInfo_TdChangeParam_TypeInfo);
    byte_597454A = 1;
  }
  tdId = this->fields.tdId;
  v6 = (SelectTreasureDeviceInfo_TdChangeParam_o *)sub_2213CCC(SelectTreasureDeviceInfo_TdChangeParam_TypeInfo);
  SelectTreasureDeviceInfo_TdChangeParam___ctor_48715720(v6, tdId, x, x, 0, 0);
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
  if ( (byte_597454B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_597454B = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.excludeCardTypes,
            x,
            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}