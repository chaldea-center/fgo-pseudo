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
  const MethodInfo *v13; // x3
  int64_t Master_object; // x0
  __int64 v15; // x1
  struct UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  UserCommandCodeEntity_o *v19; // x8
  struct System_Int32_array *CategoryIdList; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  struct UserCommandCodeEntity_o *v27; // x8
  __int128 v28; // q1
  System_Func_long__bool__o *v29; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4C265D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_long___);
    sub_1C2D490(&Method_DataManager_GetMaster_CommandCodeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&System_Func_long__bool__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__);
    sub_1C2D490(&CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo);
    byte_4C265D1 = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userCommandCodeEntity);
  v11 = (Il2CppObject *)sub_1C2D6DC(CharaGraphCommandCodeListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor(v11, 0);
  this->fields._UserCommandCodeEntity_k__BackingField = userCommandCodeEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)userCommandCodeEntity,
    v12,
    v13);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_15;
  v18 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&UserCommandCodeEntity_k__BackingField->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v18;
  *(_QWORD *)&v32.fields.fakeValue = v17;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v32, 0);
  v19 = this->fields._UserCommandCodeEntity_k__BackingField;
  this->fields._CommandCodeId_k__BackingField = Master_object;
  if ( !v19 )
    goto LABEL_15;
  CategoryIdList = UserCommandCodeEntity__GetCategoryIdList(v19, 0);
  this->fields._CommandCodeCategoryIdArray_k__BackingField = CategoryIdList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (int32_t)CategoryIdList,
    v21,
    v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CommandCodeId_k__BackingField,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields._CommandCodeEntity_k__BackingField = (struct CommandCodeEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._CommandCodeEntity_k__BackingField, (int32_t)Entity, v24, v25);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v26);
  v27 = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !v27 )
    goto LABEL_15;
  v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v30 = v31;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
  if ( !v11 )
LABEL_15:
    sub_1C2D6EC(Master_object, v15);
  v11[1].klass = (Il2CppClass *)Master_object;
  v29 = (System_Func_long__bool__o *)sub_1C2D6DC(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v29,
    v11,
    Method_CharaGraphCommandCodeListViewItem___c__DisplayClass20_0___ctor_b__0__,
    0);
  this->fields._IsUse_k__BackingField = BasicHelper__Any_long_(
                                          attachUserCommandCodeList,
                                          (System_Func_T__bool__o *)v29,
                                          (const MethodInfo_30B7C54 *)Method_BasicHelper_Any_long___);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4C265D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C265D2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  UserCommandCodeEntity_k__BackingField = this->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    goto LABEL_10;
  v7 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v13, 0);
  if ( !v8 )
LABEL_10:
    sub_1C2D6EC(Master_object, v5);
  Entity = DataMasterBase_object__object__long___GetEntity(
             v8,
             Master_object,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  this->fields._UserCommandCodeEntity_k__BackingField = (struct UserCommandCodeEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField, (int32_t)Entity, v10, v11);
  CharaGraphCommandCodeListViewItem__UpdateProperties(this, v12);
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
    sub_1C2D6EC(UserCommandCodeEntity_k__BackingField, method);
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
  if ( (byte_4C265D0 & 1) == 0 )
  {
    this = (CharaGraphCommandCodeListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C265D0 = 1;
  }
  UserCommandCodeEntity_k__BackingField = v2->fields._UserCommandCodeEntity_k__BackingField;
  if ( !UserCommandCodeEntity_k__BackingField )
    sub_1C2D6EC(this, method);
  v4 = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&UserCommandCodeEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
}


int32_t CharaGraphCommandCodeListViewItem__get_Rarity(
        CharaGraphCommandCodeListViewItem_o *this,
        const MethodInfo *method)
{
  struct CommandCodeEntity_o *CommandCodeEntity_k__BackingField; // x8

  CommandCodeEntity_k__BackingField = this->fields._CommandCodeEntity_k__BackingField;
  if ( !CommandCodeEntity_k__BackingField )
    sub_1C2D6EC(this, method);
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
  const MethodInfo *v3; // x3

  this->fields._CommandCodeCategoryIdArray_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeCategoryIdArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphCommandCodeListViewItem__set_CommandCodeEntity(
        CharaGraphCommandCodeListViewItem_o *this,
        CommandCodeEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CommandCodeEntity_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3

  this->fields._UserCommandCodeEntity_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._UserCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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