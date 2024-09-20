void __fastcall SelectTdCommandTypeController___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  struct BattleCommand_TYPE_array *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_RuntimeFieldHandle_o v5; // 0:w1.4

  if ( (byte_4A5E48F & 1) == 0 )
  {
    sub_1B885B0(&SelectTdCommandTypeController_TypeInfo);
    sub_1B885B0(&BattleCommand_TYPE___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB);
    byte_4A5E48F = 1;
  }
  v1 = (System_Array_o *)sub_1B88658(BattleCommand_TYPE___TypeInfo, 3LL);
  v5.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  v2 = (struct BattleCommand_TYPE_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v1, v5, 0LL);
  SelectTdCommandTypeController_TypeInfo->static_fields->CommandTypeOrder = v2;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SelectTdCommandTypeController_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  int32_t v8; // w3

  SelectTdCommandController___ctor((SelectTdCommandController_o *)this, inputSvtData, 0LL, v3);
  SelectTreasureDeviceInfo = SelectTdCommandTypeController__MakeSelectTreasureDeviceInfo(this, v5);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = SelectTreasureDeviceInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int32_t)SelectTreasureDeviceInfo,
    v7,
    v8);
}


System_Int32_array *__fastcall SelectTdCommandTypeController__GetCommandTypeArray(
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
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x0
  System_Func_int__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4A5E48D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleCommand_TYPE__int__TypeInfo);
    sub_1B885B0(&SelectTdCommandTypeController_TypeInfo);
    sub_1B885B0(&Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__);
    sub_1B885B0(&Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__);
    sub_1B885B0(&SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo);
    sub_1B885B0(&SelectTdCommandTypeController___c_TypeInfo);
    byte_4A5E48D = 1;
  }
  v3 = sub_1B887FC(SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_28;
  TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 0, 0LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  svtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !svtData )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)svtData,
             TreasureDvcId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
    _9__7_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_BattleCommand_TYPE__int__TypeInfo);
    System_Func_Int32Enum__int____ctor(
      _9__7_0,
      v13,
      Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__,
      0LL);
    static_fields = SelectTdCommandTypeController___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_BattleCommand_TYPE__int__o *)_9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__int_(
                                                               CommandTypeOrder,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_2EAE908 *)Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
  svtData = (BattleServantData_o *)System_Linq_Enumerable__ToArray_int_(
                                     v17,
                                     (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v9 )
    goto LABEL_28;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)svtData;
  svtData = (BattleServantData_o *)TreasureDvcEntity__GetExcludeTdChangeTypes(v9, 0LL, 0LL);
  v4 = svtData;
  if ( !svtData )
  {
    v21 = Method_System_Array_Empty_int___;
    v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v22 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1BDA48C(v23);
    if ( !*(_DWORD *)(v23 + 224) )
      j_il2cpp_runtime_class_init_0(v23);
    svtData = *(BattleServantData_o **)(v21[7] + 16LL);
    if ( (BYTE5(svtData->fields._aiStateManager) & 1) == 0 )
      svtData = (BattleServantData_o *)sub_1BDA48C(svtData);
    v4 = *(BattleServantData_o **)svtData->fields.transformUserSvtId;
  }
  if ( !v3 )
LABEL_28:
    sub_1B8880C(svtData, v4);
  *(_QWORD *)(v3 + 16) = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v4, v19, v20);
  v24 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__,
    0LL);
  v25 = System_Linq_Enumerable__Where_int_(
          v18,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall SelectTdCommandTypeController__GetDefaultMessageOnSelected(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E48B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2873/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/);
    byte_4A5E48B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2873/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
}


System_String_o *__fastcall SelectTdCommandTypeController__GetDefaultTitle(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  BattleServantData_o *svtData; // x8
  System_String_o *v6; // x19
  Il2CppObject *ServantShortName; // x1

  if ( (byte_4A5E48A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2875/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/);
    byte_4A5E48A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2875/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1B8880C(v3, v4);
  v6 = v3;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(svtData, 0LL);
  return System_String__Format(v6, ServantShortName, 0LL);
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
  if ( (byte_4A5E48E & 1) == 0 )
  {
    this = (SelectTdCommandTypeController_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E48E = 1;
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
    this = (SelectTdCommandTypeController_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
    sub_1B8880C(this, svtData);
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
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *NowCommandTypeId; // x0
  __int64 v6; // x1
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureDevices; // x21
  System_Func_object__bool__o *v9; // x22
  struct SelectTreasureDeviceInfo_o *v10; // x8

  if ( (byte_4A5E489 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1B885B0(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo);
    sub_1B885B0(&Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__);
    sub_1B885B0(&SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo);
    byte_4A5E489 = 1;
  }
  v3 = sub_1B887FC(SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  NowCommandTypeId = (Il2CppObject *)SelectTdCommandTypeController__GetNowCommandTypeId(this, v4);
  if ( !v3
    || (*(_DWORD *)(v3 + 16) = (_DWORD)NowCommandTypeId,
        (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL)
    || (treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
        v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v9,
          (Il2CppObject *)v3,
          Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__,
          0LL),
        NowCommandTypeId = System_Linq_Enumerable__FirstOrDefault_object__48907856(
                             treasureDevices,
                             (System_Func_TSource__bool__o *)v9,
                             (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___),
        (v10 = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL) )
  {
    sub_1B8880C(NowCommandTypeId, v6);
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v10->fields.treasureDevices,
           NowCommandTypeId,
           (const MethodInfo_2F7A570 *)Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
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

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  BattleServantData_o *svtData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeArray; // x19
  System_Func_T__TResult__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Object_array *v9; // x19
  SelectTreasureDeviceInfo_o *v10; // x20

  if ( (byte_4A5E48C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1B885B0(&System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
    sub_1B885B0(&SelectTreasureDeviceInfo_TypeInfo);
    sub_1B885B0(&Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__);
    sub_1B885B0(&SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo);
    byte_4A5E48C = 1;
  }
  v3 = sub_1B887FC(SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 0, 0LL, 0LL), !v3) )
    sub_1B8880C(svtData, v4);
  *(_DWORD *)(v3 + 16) = (_DWORD)svtData;
  CommandTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTdCommandTypeController__GetCommandTypeArray(
                                                                            this,
                                                                            v4);
  v7 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
  System_Func_int__object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__,
    0LL);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                              CommandTypeArray,
                                                              (System_Func_TSource__TResult__o *)v7,
                                                              (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         v8,
         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
  v10 = (SelectTreasureDeviceInfo_o *)sub_1B887FC(SelectTreasureDeviceInfo_TypeInfo);
  SelectTreasureDeviceInfo___ctor_38882172(v10, (SelectTreasureDeviceInfo_TdChangeParam_array *)v9, 0LL);
  return v10;
}


void __fastcall SelectTdCommandTypeController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E490 & 1) == 0 )
  {
    sub_1B885B0(&SelectTdCommandTypeController___c_TypeInfo);
    byte_4A5E490 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SelectTdCommandTypeController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SelectTdCommandTypeController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandTypeController___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SelectTdCommandTypeController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.type == this->fields.nowCommandTypeId;
}


void __fastcall SelectTdCommandTypeController___c__DisplayClass6_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


SelectTreasureDeviceInfo_TdChangeParam_o *__fastcall SelectTdCommandTypeController___c__DisplayClass6_0___MakeSelectTreasureDeviceInfo_b__0(
        SelectTdCommandTypeController___c__DisplayClass6_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t tdId; // w20
  SelectTreasureDeviceInfo_TdChangeParam_o *v6; // x21

  if ( (byte_4A5E491 & 1) == 0 )
  {
    sub_1B885B0(&SelectTreasureDeviceInfo_TdChangeParam_TypeInfo);
    byte_4A5E491 = 1;
  }
  tdId = this->fields.tdId;
  v6 = (SelectTreasureDeviceInfo_TdChangeParam_o *)sub_1B887FC(SelectTreasureDeviceInfo_TdChangeParam_TypeInfo);
  SelectTreasureDeviceInfo_TdChangeParam___ctor_38882592(v6, tdId, x, x, 0LL, 0LL);
  return v6;
}


void __fastcall SelectTdCommandTypeController___c__DisplayClass7_0___ctor(
        SelectTdCommandTypeController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SelectTdCommandTypeController___c__DisplayClass7_0___GetCommandTypeArray_b__1(
        SelectTdCommandTypeController___c__DisplayClass7_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4A5E492 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5E492 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.excludeCardTypes,
            x,
            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}