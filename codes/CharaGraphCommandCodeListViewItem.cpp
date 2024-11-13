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
  __int64 v29; // x3
  Il2CppObject *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t Master_object; // x0
  __int64 v38; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  UserCommandCodeEntity_o *v42; // x8
  struct System_Int32_array *CategoryIdList; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  Il2CppObject *Entity; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  const MethodInfo *v58; // x1
  struct UserCommandCodeEntity_o *v59; // x8
  __int128 v60; // q1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Func_long__bool__o *v63; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4B1557A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_long___, *(_QWORD *)&index, listViewPattern);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommandCodeMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&System_Func_long__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__, v23, v24);
    sub_1BCA7E0(&CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo, v25, v26);
    byte_4B1557A = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userCommandCodeEntity);
  v30 = (Il2CppObject *)sub_1BCAA2C(CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo, v27, v28, v29);
  System_Object___ctor(v30, 0LL);
  this->fields._UserCommandCodeEntity_k__BackingField = userCommandCodeEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)userCommandCodeEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_15;
  v41 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
  *(_QWORD *)&v66.fields.currentCryptoKey = v41;
  *(_QWORD *)&v66.fields.fakeValue = v40;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  v42 = this->fields._UserCommandCodeEntity_k__BackingField;
  this->fields._CommandCodeId_k__BackingField = Master_object;
  if ( !v42 )
    goto LABEL_15;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(v42, 0LL);
  this->fields._CommandCodeCategoryIdArray_k__BackingField = CategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (int64_t)CategoryIdList,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v50);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CommandCodeId_k__BackingField,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields._CommandCodeEntity_k__BackingField = (struct CommandCodeEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (int64_t)Entity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v58);
  v59 = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !v59 )
    goto LABEL_15;
  v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v60;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
  v64 = v65;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  if ( !v30 )
LABEL_15:
    sub_1BCAA3C(Master_object, v38);
  v30[1].klass = (Il2CppClass *)Master_object;
  v63 = (System_Func_long__bool__o *)sub_1BCAA2C(System_Func_long__bool__TypeInfo, v38, v61, v62);
  System_Func_long__bool____ctor(
    v63,
    v30,
    Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__,
    0LL);
  this->fields._IsUse_k__BackingField = BasicHelper__Any_long_(
                                          attachUserCommandCodeList,
                                          (System_Func_T__bool__o *)v63,
                                          (const MethodInfo_2EFDBF8 *)Method_BasicHelper_Any_long___);
  this->fields._IsEnabled_k__BackingField = 1;
}


void __fastcall CharaGraphCommandCodeListViewItem__ModifyLocal(
        CharaGraphCommandCodeListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Master_object; // x0
  __int64 v11; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v13; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  Il2CppObject *Entity; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1557B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserCommandCodeMaster___, args, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    byte_4B1557B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, args);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_10;
  v13 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v23 = v24;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v23, 0LL);
  if ( !v14 )
LABEL_10:
    sub_1BCAA3C(Master_object, v11);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v14,
             Master_object,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  this->fields._UserCommandCodeEntity_k__BackingField = (struct UserCommandCodeEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int64_t)Entity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v22);
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
    sub_1BCAA3C(UserCommandCodeEntity_k__BackingField, method);
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
  __int64 v2; // x2
  CharaGraphCommandCodeListViewItem_o *v3; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B15579 & 1) == 0 )
  {
    this = (CharaGraphCommandCodeListViewItem_o *)sub_1BCA7E0(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                    method,
                                                    v2);
    byte_4B15579 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v3->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}


int32_t __fastcall CharaGraphCommandCodeListViewItem__get_Rarity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8

  CommandCodeEntity_k__BackingField = this->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    sub_1BCAA3C(this, method);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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