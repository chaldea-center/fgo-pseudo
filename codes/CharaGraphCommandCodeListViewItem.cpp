void CharaGraphCommandCodeListViewItem___ctor(
        CharaGraphCommandCodeListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        System_Int64_array *attachUserCommandCodeList,
        const MethodInfo *method)
{
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int64_t Master_object; // x0
  __int64 v19; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  UserCommandCodeEntity_o *v23; // x8
  struct System_Int32_array *CategoryIdList; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *Entity; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // x1
  struct UserCommandCodeEntity_o *v39; // x8
  __int128 v40; // q1
  System_Func_long__bool__o *v41; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4D2BB24 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_long___);
    sub_1C94098(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C94098(&System_Func_long__bool__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__);
    sub_1C94098(&CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo);
    byte_4D2BB24 = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userCommandCodeEntity);
  v11 = (Il2CppObject *)sub_1C942E4(CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor(v11, 0);
  this->fields._UserCommandCodeEntity_k__BackingField = userCommandCodeEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)userCommandCodeEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_15;
  v22 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v21;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v44, 0);
  v23 = this->fields._UserCommandCodeEntity_k__BackingField;
  this->fields._CommandCodeId_k__BackingField = Master_object;
  if ( !v23 )
    goto LABEL_15;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(v23, 0);
  this->fields._CommandCodeCategoryIdArray_k__BackingField = CategoryIdList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (int32_t)CategoryIdList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CommandCodeId_k__BackingField,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields._CommandCodeEntity_k__BackingField = (struct CommandCodeEntity_o *)Entity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (int32_t)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v38);
  v39 = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !v39 )
    goto LABEL_15;
  v40 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v42, 0);
  if ( !v11 )
LABEL_15:
    sub_1C942F0(Master_object, v19);
  v11[1].klass = (Il2CppClass *)Master_object;
  v41 = (System_Func_long__bool__o *)sub_1C942E4(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v41,
    v11,
    Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__,
    0);
  this->fields._IsUse_k__BackingField = BasicHelper__Any_long_(
                                          attachUserCommandCodeList,
                                          (System_Func_T__bool__o *)v41,
                                          (const MethodInfo_31853CC *)Method_BasicHelper_Any_long___);
  this->fields._IsEnabled_k__BackingField = 1;
}


void CharaGraphCommandCodeListViewItem__ModifyLocal(
        CharaGraphCommandCodeListViewItem_o *this,
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *args,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v5; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v7; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]

  if ( (byte_4D2BB25 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2BB25 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_10;
  v7 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v17, 0);
  if ( !v8 )
LABEL_10:
    sub_1C942F0(Master_object, v5);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v8,
             Master_object,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  this->fields._UserCommandCodeEntity_k__BackingField = (struct UserCommandCodeEntity_o *)Entity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)Entity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v16);
}


void CharaGraphCommandCodeListViewItem__UpdateProperties(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x0
  UserCommandCodeEntity_o *v4; // x8

  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField
    || (UserCommandCodeEntity_k__BackingField = (UserCommandCodeEntity_o *)UserCommandCodeEntity__IsLock(
                                                                             UserCommandCodeEntity_k__BackingField,
                                                                             0),
        v4 = this->fields._UserCommandCodeEntity_k__BackingField,
        this->fields._IsLock_k__BackingField = (unsigned __int8)UserCommandCodeEntity_k__BackingField & 1,
        !v4) )
  {
    sub_1C942F0(UserCommandCodeEntity_k__BackingField, method);
  }
  this->fields._IsChoice_k__BackingField = UserCommandCodeEntity__IsChoice(v4, 0);
}


System_Int32_array *CharaGraphCommandCodeListViewItem__get_CommandCodeCategoryIdArray(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeCategoryIdArray_k__BackingField;
}


CommandCodeEntity_o *CharaGraphCommandCodeListViewItem__get_CommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeEntity_k__BackingField;
}


int32_t CharaGraphCommandCodeListViewItem__get_CommandCodeId(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeId_k__BackingField;
}


int64_t CharaGraphCommandCodeListViewItem__get_ObjectId(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  CharaGraphCommandCodeListViewItem_o *v2; // x19
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4D2BB23 & 1) == 0 )
  {
    this = (CharaGraphCommandCodeListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2BB23 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1C942F0(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v6, 0);
}


int32_t CharaGraphCommandCodeListViewItem__get_Rarity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8

  CommandCodeEntity_k__BackingField = this->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    sub_1C942F0(this, method);
  return CommandCodeEntity_k__BackingField->fields.rarity;
}


UserCommandCodeEntity_o *CharaGraphCommandCodeListViewItem__get_UserCommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserCommandCodeEntity_k__BackingField;
}


void CharaGraphCommandCodeListViewItem__set_CommandCodeCategoryIdArray(
        CharaGraphCommandCodeListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CommandCodeCategoryIdArray_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphCommandCodeListViewItem__set_CommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        CommandCodeEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CommandCodeEntity_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphCommandCodeListViewItem__set_CommandCodeId(
        CharaGraphCommandCodeListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandCodeId_k__BackingField = value;
}


void CharaGraphCommandCodeListViewItem__set_UserCommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        UserCommandCodeEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor(
        CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CharaGraphCommandCodeListViewItem___c__DisplayClass20_0____ctor_b__0(
        CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_o *this,
        int64_t x,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeId == x;
}