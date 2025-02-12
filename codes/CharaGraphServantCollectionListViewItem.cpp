// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphServantCollectionListViewItem___ctor(
        CharaGraphServantCollectionListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v21; // x20
  __int64 v22; // x21
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_ServantEntity_k__BackingField; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4BC6E23 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&index);
    sub_1C1ABD4(&DataManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BC6E23 = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtCollectionEntity);
  this->fields._UserServantCollectionEntity_k__BackingField = userSvtCollectionEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int64_t)userSvtCollectionEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    goto LABEL_10;
  v22 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v22;
  *(_QWORD *)&v31.fields.fakeValue = v21;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v31, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_10:
    sub_1C1AE30(Master_object, v19);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._SvtId_k__BackingField,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  p_ServantEntity_k__BackingField = &this->fields._ServantEntity_k__BackingField;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)p_ServantEntity_k__BackingField,
    (int64_t)Entity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  *((_BYTE *)p_ServantEntity_k__BackingField - 78) = 1;
}


int64_t __fastcall CharaGraphServantCollectionListViewItem__get_ObjectId(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v2; // x19
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4BC6E20 & 1) == 0 )
  {
    this = (CharaGraphServantCollectionListViewItem_o *)sub_1C1ABD4(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          method);
    byte_4BC6E20 = 1;
  }
  UserServantCollectionEntity_k__BackingField = v2->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    sub_1C1AE30(this, method);
  v5 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v7, 0LL);
}


int32_t __fastcall CharaGraphServantCollectionListViewItem__get_Rarity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantCollectionListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_1C1AE30(0LL, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *__fastcall CharaGraphServantCollectionListViewItem__get_ServantClassEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantClassEntity_o *servantClassEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BC6E21 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantClassMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    byte_4BC6E21 = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_1C1AE30(Master_object, v7);
    servantClassEntity = (struct ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantEntity_k__BackingField->fields.classId,
                                                          (const MethodInfo_3248678 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this->fields.servantClassEntity = servantClassEntity;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.servantClassEntity,
      (int64_t)servantClassEntity,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return servantClassEntity;
}


ServantEntity_o *__fastcall CharaGraphServantCollectionListViewItem__get_ServantEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEntity_k__BackingField;
}


ServantLimitEntity_o *__fastcall CharaGraphServantCollectionListViewItem__get_ServantLimitEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantLimitEntity_o *servantLimitEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BC6E22 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ServantLimitMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC6E22 = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
    if ( !UserServantCollectionEntity_k__BackingField || !Master_object )
      sub_1C1AE30(Master_object, v6);
    servantLimitEntity = ServantLimitMaster__GetEntity(
                           (ServantLimitMaster_o *)Master_object,
                           this->fields._SvtId_k__BackingField,
                           UserServantCollectionEntity_k__BackingField->fields.maxLimitCount,
                           0LL);
    this->fields.servantLimitEntity = servantLimitEntity;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.servantLimitEntity,
      (int64_t)servantLimitEntity,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return servantLimitEntity;
}


int32_t __fastcall CharaGraphServantCollectionListViewItem__get_SortPriority(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantClassEntity_o *ServantClassEntity; // x0
  __int64 v3; // x1

  ServantClassEntity = CharaGraphServantCollectionListViewItem__get_ServantClassEntity(this, method);
  if ( !ServantClassEntity )
    sub_1C1AE30(0LL, v3);
  return ServantClassEntity->fields.priority;
}


int32_t __fastcall CharaGraphServantCollectionListViewItem__get_SvtId(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


UserServantCollectionEntity_o *__fastcall CharaGraphServantCollectionListViewItem__get_UserServantCollectionEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantCollectionEntity_k__BackingField;
}


void __fastcall CharaGraphServantCollectionListViewItem__set_ServantEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantEntity_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._ServantEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphServantCollectionListViewItem__set_SvtId(
        CharaGraphServantCollectionListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void __fastcall CharaGraphServantCollectionListViewItem__set_UserServantCollectionEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServantCollectionEntity_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}