void __fastcall CharaGraphServantCollectionListViewItem___ctor(
        CharaGraphServantCollectionListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_ServantEntity_k__BackingField; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A5A513 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A513 = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtCollectionEntity);
  this->fields._UserServantCollectionEntity_k__BackingField = userSvtCollectionEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int32_t)userSvtCollectionEntity,
    v9,
    v10);
  UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    goto LABEL_10;
  v15 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_10:
    sub_1B8880C(Master_object, v12);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._SvtId_k__BackingField,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  p_ServantEntity_k__BackingField = &this->fields._ServantEntity_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_ServantEntity_k__BackingField, (int32_t)Entity, v18, v19);
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
  if ( (byte_4A5A510 & 1) == 0 )
  {
    this = (CharaGraphServantCollectionListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A510 = 1;
  }
  UserServantCollectionEntity_k__BackingField = v2->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    sub_1B8880C(this, method);
  v5 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
}


int32_t __fastcall CharaGraphServantCollectionListViewItem__get_Rarity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantCollectionListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_1B8880C(0LL, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *__fastcall CharaGraphServantCollectionListViewItem__get_ServantClassEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantClassEntity_o *servantClassEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5A511 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_4A5A511 = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_1B8880C(Master_object, v5);
    servantClassEntity = (struct ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantEntity_k__BackingField->fields.classId,
                                                          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this->fields.servantClassEntity = servantClassEntity;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.servantClassEntity,
      (int32_t)servantClassEntity,
      v7,
      v8);
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
  struct ServantLimitEntity_o *servantLimitEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5A512 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A512 = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
    if ( !UserServantCollectionEntity_k__BackingField || !Master_object )
      sub_1B8880C(Master_object, v5);
    servantLimitEntity = ServantLimitMaster__GetEntity(
                           (ServantLimitMaster_o *)Master_object,
                           this->fields._SvtId_k__BackingField,
                           UserServantCollectionEntity_k__BackingField->fields.maxLimitCount,
                           0LL);
    this->fields.servantLimitEntity = servantLimitEntity;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.servantLimitEntity,
      (int32_t)servantLimitEntity,
      v7,
      v8);
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
    sub_1B8880C(0LL, v3);
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

  this->fields._ServantEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._UserServantCollectionEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}