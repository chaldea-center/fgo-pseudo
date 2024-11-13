// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphServantCollectionListViewItem___ctor(
        CharaGraphServantCollectionListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v24; // x20
  __int64 v25; // x21
  __int64 v26; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_ServantEntity_k__BackingField; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4B1557F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&index, listViewPattern);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    byte_4B1557F = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtCollectionEntity);
  this->fields._UserServantCollectionEntity_k__BackingField = userSvtCollectionEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int64_t)userSvtCollectionEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    goto LABEL_10;
  v25 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v35.fields.currentCryptoKey = v25;
  *(_QWORD *)&v35.fields.fakeValue = v24;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_10:
    sub_1BCAA3C(Master_object, v22);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._SvtId_k__BackingField,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  p_ServantEntity_k__BackingField = &this->fields._ServantEntity_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_ServantEntity_k__BackingField,
    (int64_t)Entity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *((_BYTE *)p_ServantEntity_k__BackingField - 78) = 1;
}


int64_t __fastcall CharaGraphServantCollectionListViewItem__get_ObjectId(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CharaGraphServantCollectionListViewItem_o *v3; // x19
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_4B1557C & 1) == 0 )
  {
    this = (CharaGraphServantCollectionListViewItem_o *)sub_1BCA7E0(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          method,
                                                          v2);
    byte_4B1557C = 1;
  }
  UserServantCollectionEntity_k__BackingField = v3->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    sub_1BCAA3C(this, method);
  v6 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
}


int32_t __fastcall CharaGraphServantCollectionListViewItem__get_Rarity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantCollectionListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_1BCAA3C(0LL, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *__fastcall CharaGraphServantCollectionListViewItem__get_ServantClassEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantClassEntity_o *servantClassEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B1557D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6, v7);
    byte_4B1557D = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_1BCAA3C(Master_object, v10);
    servantClassEntity = (struct ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantEntity_k__BackingField->fields.classId,
                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this->fields.servantClassEntity = servantClassEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.servantClassEntity,
      (int64_t)servantClassEntity,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ServantLimitEntity_o *servantLimitEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B1557E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1557E = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
    if ( !UserServantCollectionEntity_k__BackingField || !Master_object )
      sub_1BCAA3C(Master_object, v8);
    servantLimitEntity = ServantLimitMaster__GetEntity(
                           (ServantLimitMaster_o *)Master_object,
                           this->fields._SvtId_k__BackingField,
                           UserServantCollectionEntity_k__BackingField->fields.maxLimitCount,
                           0LL);
    this->fields.servantLimitEntity = servantLimitEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.servantLimitEntity,
      (int64_t)servantLimitEntity,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
    sub_1BCAA3C(0LL, v3);
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
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}