// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphCommandCodeListViewItem___ctor(
        CharaGraphCommandCodeListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t Master_object; // x0
  __int64 v27; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  UserCommandCodeEntity_o *v31; // x8
  struct System_Int32_array *CategoryIdList; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *Entity; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x1
  struct UserCommandCodeEntity_o *v47; // x8
  __int128 v48; // q1
  System_Func_long__bool__o *v49; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B65F2D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_long___, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommandCodeMaster___, v11);
    sub_1BE4ACC(&DataManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v13);
    sub_1BE4ACC(&System_Func_long__bool__TypeInfo, v14);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BE4ACC(&Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__, v17);
    sub_1BE4ACC(&CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo, v18);
    byte_4B65F2D = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userCommandCodeEntity);
  v19 = (Il2CppObject *)sub_1BE4D18(CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor(v19, 0LL);
  this->fields._UserCommandCodeEntity_k__BackingField = userCommandCodeEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)userCommandCodeEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_15;
  v30 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v30;
  *(_QWORD *)&v52.fields.fakeValue = v29;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v52, 0LL);
  v31 = this->fields._UserCommandCodeEntity_k__BackingField;
  this->fields._CommandCodeId_k__BackingField = Master_object;
  if ( !v31 )
    goto LABEL_15;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(v31, 0LL);
  this->fields._CommandCodeCategoryIdArray_k__BackingField = CategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (int64_t)CategoryIdList,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CommandCodeId_k__BackingField,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields._CommandCodeEntity_k__BackingField = (struct CommandCodeEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (int64_t)Entity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v46);
  v47 = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !v47 )
    goto LABEL_15;
  v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v50 = v51;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v50, 0LL);
  if ( !v19 )
LABEL_15:
    sub_1BE4D28(Master_object, v27);
  v19[1].klass = (Il2CppClass *)Master_object;
  v49 = (System_Func_long__bool__o *)sub_1BE4D18(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v49,
    v19,
    Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__,
    0LL);
  this->fields._IsUse_k__BackingField = BasicHelper__Any_long_(
                                          attachUserCommandCodeList,
                                          (System_Func_T__bool__o *)v49,
                                          (const MethodInfo_2F43FE0 *)Method_BasicHelper_Any_long___);
  this->fields._IsEnabled_k__BackingField = 1;
}


void __fastcall CharaGraphCommandCodeListViewItem__ModifyLocal(
        CharaGraphCommandCodeListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Master_object; // x0
  __int64 v8; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v10; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  Il2CppObject *Entity; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  if ( (byte_4B65F2E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserCommandCodeMaster___, args);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4B65F2E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_10;
  v10 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v20, 0LL);
  if ( !v11 )
LABEL_10:
    sub_1BE4D28(Master_object, v8);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             Master_object,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  this->fields._UserCommandCodeEntity_k__BackingField = (struct UserCommandCodeEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)Entity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v19);
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
    sub_1BE4D28(UserCommandCodeEntity_k__BackingField, method);
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
  CharaGraphCommandCodeListViewItem_o *v2; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B65F2C & 1) == 0 )
  {
    this = (CharaGraphCommandCodeListViewItem_o *)sub_1BE4ACC(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                    method);
    byte_4B65F2C = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1BE4D28(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v6, 0LL);
}


int32_t __fastcall CharaGraphCommandCodeListViewItem__get_Rarity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8

  CommandCodeEntity_k__BackingField = this->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    sub_1BE4D28(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CommandCodeCategoryIdArray_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CommandCodeEntity_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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