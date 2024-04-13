void __fastcall CharaGraphCommandCodeListViewItem___ctor(
        CharaGraphCommandCodeListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v46; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int64 v48; // x22
  __int64 v49; // x23
  UserCommandCodeEntity_o *v50; // x8
  struct System_Int32_array *CategoryIdList; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x1
  struct UserCommandCodeEntity_o *v66; // x8
  __int128 v67; // q1
  System_Func_long__bool__o *v68; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42E9647 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_long___, index, (_DWORD)listViewPattern, userCommandCodeEntity);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommandCodeMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_long__bool___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_long__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__, v32, v33, v34);
    sub_B5D5C4(&CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo, v35, v36, v37);
    byte_42E9647 = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userCommandCodeEntity);
  v38 = (CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_o *)sub_B5D694(CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo);
  CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor(v38, 0LL);
  this->fields._UserCommandCodeEntity_k__BackingField = userCommandCodeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (System_Int32_array **)userCommandCodeEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_18;
  v49 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v71.fields.currentCryptoKey = v49;
  *(_QWORD *)&v71.fields.fakeValue = v48;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  v50 = this->fields._UserCommandCodeEntity_k__BackingField;
  this->fields._CommandCodeId_k__BackingField = Master_WarQuestSelectionMaster;
  if ( !v50 )
    goto LABEL_18;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(v50, 0LL);
  this->fields._CommandCodeCategoryIdArray_k__BackingField = CategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (System_Int32_array **)CategoryIdList,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                           this->fields._CommandCodeId_k__BackingField,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields._CommandCodeEntity_k__BackingField = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (System_Int32_array **)Entity,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v65);
  v66 = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !v66 )
    goto LABEL_18;
  v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v67;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v69 = v70;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v69, 0LL);
  if ( !v38 )
LABEL_18:
    sub_B5D69C(Master_WarQuestSelectionMaster, v46);
  v38->fields.userCommandCodeId = Master_WarQuestSelectionMaster;
  v68 = (System_Func_long__bool__o *)sub_B5D694(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v68,
    (Il2CppObject *)v38,
    Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__,
    (const MethodInfo_2C2C440 *)Method_System_Func_long__bool___ctor__);
  this->fields._IsUse_k__BackingField = BasicHelper__Any_long_(
                                          attachUserCommandCodeList,
                                          (System_Func_T__bool__o *)v68,
                                          (const MethodInfo_1AD6C90 *)Method_BasicHelper_Any_long___);
  this->fields._IsEnabled_k__BackingField = 1;
}


void __fastcall CharaGraphCommandCodeListViewItem__ModifyLocal(
        CharaGraphCommandCodeListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v17; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x21
  UserServantEntity_o *Entity; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-40h]

  if ( (byte_42E9648 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserCommandCodeMaster___, (_DWORD)args, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    byte_42E9648 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_12;
  v17 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  v18 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v27 = v28;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v27, 0LL);
  if ( !v18 )
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v18,
             Master_WarQuestSelectionMaster,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  this->fields._UserCommandCodeEntity_k__BackingField = (struct UserCommandCodeEntity_o *)Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (System_Int32_array **)Entity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v26);
}


void __fastcall CharaGraphCommandCodeListViewItem__UpdateProperties(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0
  UserCommandCodeEntity_o *v4; // x8

  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField
    || (UserCommandCodeEntity_k__BackingField = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(
                                                                             UserCommandCodeEntity_k__BackingField,
                                                                             0LL),
        v4 = this->fields._UserCommandCodeEntity_k__BackingField,
        this->fields._IsLock_k__BackingField = (unsigned __int8)UserCommandCodeEntity_k__BackingField & 1,
        !v4) )
  {
    sub_B5D69C(UserCommandCodeEntity_k__BackingField, method);
  }
  this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(v4, 0LL);
}


System_Int32_array *__fastcall CharaGraphCommandCodeListViewItem__get_CommandCodeCategoryIdArray(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeCategoryIdArray_k__BackingField;
}


CommandCodeEntity_o *__fastcall CharaGraphCommandCodeListViewItem__get_CommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeEntity_k__BackingField;
}


int32_t __fastcall CharaGraphCommandCodeListViewItem__get_CommandCodeId(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeId_k__BackingField;
}


int64_t __fastcall CharaGraphCommandCodeListViewItem__get_ObjectId(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CharaGraphCommandCodeListViewItem_o *v4; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42E9646 & 1) == 0 )
  {
    this = (CharaGraphCommandCodeListViewItem_o *)sub_B5D5C4(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                    (_DWORD)method,
                                                    v2,
                                                    v3);
    byte_42E9646 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v4->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_B5D69C(this, method);
  v6 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
}


int32_t __fastcall CharaGraphCommandCodeListViewItem__get_Rarity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8

  CommandCodeEntity_k__BackingField = this->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    sub_B5D69C(this, method);
  return CommandCodeEntity_k__BackingField->fields.rarity;
}


UserCommandCodeEntity_o *__fastcall CharaGraphCommandCodeListViewItem__get_UserCommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserCommandCodeEntity_k__BackingField;
}


void __fastcall CharaGraphCommandCodeListViewItem__set_CommandCodeCategoryIdArray(
        CharaGraphCommandCodeListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CommandCodeCategoryIdArray_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphCommandCodeListViewItem__set_CommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        CommandCodeEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CommandCodeEntity_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphCommandCodeListViewItem__set_CommandCodeId(
        CharaGraphCommandCodeListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCodeId_k__BackingField = value;
}


void __fastcall CharaGraphCommandCodeListViewItem__set_UserCommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor(
        CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphCommandCodeListViewItem___c__DisplayClass20_0____ctor_b__0(
        CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_o *this,
        int64_t x,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeId == x;
}