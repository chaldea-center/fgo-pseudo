void __fastcall SelectTdCommandTypeController___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Array_o *v7; // x0
  struct BattleCommand_TYPE_array *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_4B195BD & 1) == 0 )
  {
    sub_1BCA7E0(&SelectTdCommandTypeController_TypeInfo, v1, v2);
    sub_1BCA7E0(&BattleCommand_TYPE___TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v5,
      v6);
    byte_4B195BD = 1;
  }
  v7 = (System_Array_o *)sub_1BCA888(BattleCommand_TYPE___TypeInfo, 3LL);
  v15.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  v8 = (struct BattleCommand_TYPE_array *)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v7, v15, 0LL);
  SelectTdCommandTypeController_TypeInfo->static_fields->CommandTypeOrder = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SelectTdCommandTypeController_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall SelectTdCommandTypeController___ctor(
        SelectTdCommandTypeController_o *this,
        BattleServantData_o *inputSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  SelectTdCommandController___ctor((SelectTdCommandController_o *)this, inputSvtData, 0LL, v3);
  SelectTreasureDeviceInfo = SelectTdCommandTypeController__MakeSelectTreasureDeviceInfo(this, v5);
  this->fields._SelectTreasureDeviceInfo_k__BackingField = SelectTreasureDeviceInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SelectTreasureDeviceInfo_k__BackingField,
    (int64_t)SelectTreasureDeviceInfo,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


System_Int32_array *__fastcall SelectTdCommandTypeController__GetCommandTypeArray(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x19
  int64_t v32; // x1
  void *svtData; // x0
  __int64 v34; // x1
  int32_t TreasureDvcId; // w20
  Il2CppObject *Entity; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  SelectTdCommandTypeController_c *v40; // x8
  TreasureDvcEntity_o *v41; // x21
  SelectTdCommandTypeController___c_c *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeOrder; // x20
  System_Func_T__TResult__o *_9__7_0; // x22
  Il2CppObject *v45; // x23
  struct SelectTdCommandTypeController___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  long double inited; // q0
  _QWORD *v62; // x21
  __int64 v63; // x8
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Func_int__bool__o *v68; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0

  if ( (byte_4B195BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v15, v16);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Func_BattleCommand_TYPE__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&SelectTdCommandTypeController_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__, v23, v24);
    sub_1BCA7E0(&Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__, v25, v26);
    sub_1BCA7E0(&SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&SelectTdCommandTypeController___c_TypeInfo, v29, v30);
    byte_4B195BB = 1;
  }
  v31 = sub_1BCAA2C(SelectTdCommandTypeController___c__DisplayClass7_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_28;
  TreasureDvcId = BattleServantData__getTreasureDvcId((BattleServantData_o *)svtData, 0, 0LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  svtData = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !svtData )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)svtData,
             TreasureDvcId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v40 = SelectTdCommandTypeController_TypeInfo;
  v41 = (TreasureDvcEntity_o *)Entity;
  if ( !SelectTdCommandTypeController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController_TypeInfo, v37);
    v40 = SelectTdCommandTypeController_TypeInfo;
  }
  v42 = SelectTdCommandTypeController___c_TypeInfo;
  CommandTypeOrder = (System_Collections_Generic_IEnumerable_TSource__o *)v40->static_fields->CommandTypeOrder;
  if ( !SelectTdCommandTypeController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTdCommandTypeController___c_TypeInfo, v37);
    v42 = SelectTdCommandTypeController___c_TypeInfo;
  }
  _9__7_0 = (System_Func_T__TResult__o *)v42->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42, v37);
      v42 = SelectTdCommandTypeController___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__7_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_BattleCommand_TYPE__int__TypeInfo, v37, v38, v39);
    System_Func_Int32Enum__int____ctor(
      _9__7_0,
      v45,
      Method_SelectTdCommandTypeController___c__GetCommandTypeArray_b__7_0__,
      0LL);
    static_fields = SelectTdCommandTypeController___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_BattleCommand_TYPE__int__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v47, v48, v49, v50, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__int_(
                                                               CommandTypeOrder,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_2F41F6C *)Method_System_Linq_Enumerable_Select_BattleCommand_TYPE__int___);
  svtData = System_Linq_Enumerable__ToArray_int_(
              v53,
              (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v41 )
    goto LABEL_28;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)svtData;
  svtData = TreasureDvcEntity__GetExcludeTdChangeTypes(v41, 0LL, 0LL);
  v32 = (int64_t)svtData;
  if ( !svtData )
  {
    v62 = Method_System_Array_Empty_int___;
    v63 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v63 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, 0LL);
      v63 = v62[7];
    }
    v64 = *(_QWORD *)(v63 + 16);
    if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
      v64 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v64 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v64, v32);
    svtData = *(void **)(v62[7] + 16LL);
    if ( (*((_BYTE *)svtData + 309) & 1) == 0 )
      svtData = (void *)sub_1C1C6BC(inited);
    v32 = **((_QWORD **)svtData + 23);
  }
  if ( !v31 )
LABEL_28:
    sub_1BCAA3C(svtData, v32);
  *(_QWORD *)(v31 + 16) = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), v32, v55, v56, v57, v58, v59, v60);
  v68 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v65, v66, v67);
  System_Func_int__bool____ctor(
    v68,
    (Il2CppObject *)v31,
    Method_SelectTdCommandTypeController___c__DisplayClass7_0__GetCommandTypeArray_b__1__,
    0LL);
  v69 = System_Linq_Enumerable__Where_int_(
          v54,
          (System_Func_TSource__bool__o *)v68,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v69,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall SelectTdCommandTypeController__GetDefaultMessageOnSelected(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B195B9 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2894/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, v3, v4);
    byte_4B195B9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2894/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
}


System_String_o *__fastcall SelectTdCommandTypeController__GetDefaultTitle(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  __int64 v7; // x1
  BattleServantData_o *svtData; // x8
  System_String_o *v9; // x19
  Il2CppObject *ServantShortName; // x1

  if ( (byte_4B195B8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2896/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, v4, v5);
    byte_4B195B8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2896/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData )
    sub_1BCAA3C(v6, v7);
  v9 = v6;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(svtData, 0LL);
  return System_String__Format(v9, ServantShortName, 0LL);
}


int32_t __fastcall SelectTdCommandTypeController__GetNowCommandTypeId(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SelectTdCommandTypeController_o *v3; // x19
  struct BattleServantData_o *svtData; // x1
  int32_t *v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  struct BattleServantData_o *v8; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v3 = this;
  if ( (byte_4B195BC & 1) == 0 )
  {
    this = (SelectTdCommandTypeController_o *)sub_1BCA7E0(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                method,
                                                v2);
    byte_4B195BC = 1;
  }
  svtData = v3->fields.svtData;
  if ( !svtData )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)svtData->fields.buffData;
  if ( !this )
    goto LABEL_16;
  this = (SelectTdCommandTypeController_o *)BattleBuffData__isTDTypeChange((BattleBuffData_o *)this, svtData, 0LL, 0LL);
  svtData = v3->fields.svtData;
  if ( !svtData )
    goto LABEL_16;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    this = (SelectTdCommandTypeController_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v10,
                                                0LL);
    v8 = v3->fields.svtData;
    if ( v8 )
    {
      this = (SelectTdCommandTypeController_o *)ServantTreasureDvcMaster__getEntityFromIDID(
                                                  (int32_t)this,
                                                  v8->fields.treasuredvcId,
                                                  0LL);
      if ( this )
      {
        v5 = (int32_t *)&this[2];
        return *v5;
      }
    }
LABEL_16:
    sub_1BCAA3C(this, svtData);
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
  v5 = (int32_t *)&this->fields._SelectTreasureDeviceInfo_k__BackingField + 1;
  return *v5;
}


int32_t __fastcall SelectTdCommandTypeController__GetNowSelectingCommandIndex(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  Il2CppObject *NowCommandTypeId; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureDevices; // x21
  System_Func_object__bool__o *v21; // x22
  struct SelectTreasureDeviceInfo_o *v22; // x8

  if ( (byte_4B195B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___, v5, v6);
    sub_1BCA7E0(&System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__, v9, v10);
    sub_1BCA7E0(&SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo, v11, v12);
    byte_4B195B7 = 1;
  }
  v13 = sub_1BCAA2C(SelectTdCommandTypeController___c__DisplayClass2_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  NowCommandTypeId = (Il2CppObject *)SelectTdCommandTypeController__GetNowCommandTypeId(this, v14);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = (_DWORD)NowCommandTypeId,
        (SelectTreasureDeviceInfo_k__BackingField = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL)
    || (treasureDevices = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
        v21 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_SelectTreasureDeviceInfo_TdChangeParam__bool__TypeInfo,
                                               v16,
                                               v17,
                                               v18),
        System_Func_object__bool____ctor(
          v21,
          (Il2CppObject *)v13,
          Method_SelectTdCommandTypeController___c__DisplayClass2_0__GetNowSelectingCommandIndex_b__0__,
          0LL),
        NowCommandTypeId = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                             treasureDevices,
                             (System_Func_TSource__bool__o *)v21,
                             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectTreasureDeviceInfo_TdChangeParam___),
        (v22 = this->fields._SelectTreasureDeviceInfo_k__BackingField) == 0LL) )
  {
    sub_1BCAA3C(NowCommandTypeId, v16);
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v22->fields.treasureDevices,
           NowCommandTypeId,
           (const MethodInfo_300EB38 *)Method_System_Array_IndexOf_SelectTreasureDeviceInfo_TdChangeParam___);
}


UnityEngine_Vector3_o __fastcall SelectTdCommandTypeController__GetNowTypeFrameOffset(
        SelectTdCommandTypeController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  const MethodInfo *v16; // x1
  BattleServantData_o *svtData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandTypeArray; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_T__TResult__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Object_array *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  SelectTreasureDeviceInfo_o *v28; // x20

  if ( (byte_4B195BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___, v5, v6);
    sub_1BCA7E0(&System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo, v7, v8);
    sub_1BCA7E0(&SelectTreasureDeviceInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(
      &Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__,
      v11,
      v12);
    sub_1BCA7E0(&SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo, v13, v14);
    byte_4B195BA = 1;
  }
  v15 = sub_1BCAA2C(SelectTdCommandTypeController___c__DisplayClass6_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  svtData = this->fields.svtData;
  if ( !svtData || (svtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(svtData, 0, 0LL, 0LL), !v15) )
    sub_1BCAA3C(svtData, v16);
  *(_DWORD *)(v15 + 16) = (_DWORD)svtData;
  CommandTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)SelectTdCommandTypeController__GetCommandTypeArray(
                                                                            this,
                                                                            v16);
  v22 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_int__SelectTreasureDeviceInfo_TdChangeParam__TypeInfo,
                                       v19,
                                       v20,
                                       v21);
  System_Func_int__object____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_SelectTdCommandTypeController___c__DisplayClass6_0__MakeSelectTreasureDeviceInfo_b__0__,
    0LL);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               CommandTypeArray,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__SelectTreasureDeviceInfo_TdChangeParam___);
  v24 = System_Linq_Enumerable__ToArray_object_(
          v23,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_SelectTreasureDeviceInfo_TdChangeParam___);
  v28 = (SelectTreasureDeviceInfo_o *)sub_1BCAA2C(SelectTreasureDeviceInfo_TypeInfo, v25, v26, v27);
  SelectTreasureDeviceInfo___ctor_39601672(v28, (SelectTreasureDeviceInfo_TdChangeParam_array *)v24, 0LL);
  return v28;
}


void __fastcall SelectTdCommandTypeController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B195BE & 1) == 0 )
  {
    sub_1BCA7E0(&SelectTdCommandTypeController___c_TypeInfo, v1, v2);
    byte_4B195BE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SelectTdCommandTypeController___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SelectTdCommandTypeController___c_TypeInfo->static_fields->__9 = (struct SelectTdCommandTypeController___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SelectTdCommandTypeController___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  int32_t tdId; // w20
  SelectTreasureDeviceInfo_TdChangeParam_o *v7; // x21

  if ( (byte_4B195BF & 1) == 0 )
  {
    sub_1BCA7E0(&SelectTreasureDeviceInfo_TdChangeParam_TypeInfo, *(_QWORD *)&x, method);
    byte_4B195BF = 1;
  }
  tdId = this->fields.tdId;
  v7 = (SelectTreasureDeviceInfo_TdChangeParam_o *)sub_1BCAA2C(
                                                     SelectTreasureDeviceInfo_TdChangeParam_TypeInfo,
                                                     *(_QWORD *)&x,
                                                     method,
                                                     v3);
  SelectTreasureDeviceInfo_TdChangeParam___ctor_39602092(v7, tdId, x, x, 0LL, 0LL);
  return v7;
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
  if ( (byte_4B195C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x, method);
    byte_4B195C0 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.excludeCardTypes,
            x,
            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}