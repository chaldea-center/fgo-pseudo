void CharaGraphServantCollectionListViewItem___ctor(
        CharaGraphServantCollectionListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_ServantEntity_k__BackingField; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4CB55A7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB55A7 = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtCollectionEntity);
  this->fields._UserServantCollectionEntity_k__BackingField = userSvtCollectionEntity;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
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
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v20, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_10:
    sub_1C6BC60(Master_object, v12);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._SvtId_k__BackingField,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  p_ServantEntity_k__BackingField = &this->fields._ServantEntity_k__BackingField;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_ServantEntity_k__BackingField, (int32_t)Entity, v18, v19);
  *((_BYTE *)p_ServantEntity_k__BackingField - 78) = 1;
}


int64_t CharaGraphServantCollectionListViewItem__get_ObjectId(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  CharaGraphServantCollectionListViewItem_o *v2; // x19
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4CB55A4 & 1) == 0 )
  {
    this = (CharaGraphServantCollectionListViewItem_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB55A4 = 1;
  }
  UserServantCollectionEntity_k__BackingField = v2->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    sub_1C6BC60(this, method);
  v5 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v7, 0);
}


int32_t CharaGraphServantCollectionListViewItem__get_Rarity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantCollectionListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_1C6BC60(0, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *CharaGraphServantCollectionListViewItem__get_ServantClassEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantClassEntity_o *servantClassEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB55A5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_4CB55A5 = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_1C6BC60(Master_object, v5);
    servantClassEntity = (struct ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantEntity_k__BackingField->fields.classId,
                                                          (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this->fields.servantClassEntity = servantClassEntity;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantClassEntity, (int32_t)servantClassEntity, v7, v8);
  }
  return servantClassEntity;
}


ServantEntity_o *CharaGraphServantCollectionListViewItem__get_ServantEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEntity_k__BackingField;
}


ServantLimitEntity_o *CharaGraphServantCollectionListViewItem__get_ServantLimitEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *servantLimitEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  int32_t SvtId_k__BackingField; // w1
  CGThumbnailListItem_o *p_servantLimitEntity; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB55A6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB55A6 = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
    if ( !UserServantCollectionEntity_k__BackingField || !Master_object )
      sub_1C6BC60(Master_object, v5);
    SvtId_k__BackingField = this->fields._SvtId_k__BackingField;
    p_servantLimitEntity = (CGThumbnailListItem_o *)&this->fields.servantLimitEntity;
    servantLimitEntity = ServantLimitMaster__GetEntity(
                           (ServantLimitMaster_o *)Master_object,
                           SvtId_k__BackingField,
                           UserServantCollectionEntity_k__BackingField->fields.maxLimitCount,
                           0);
    p_servantLimitEntity->klass = (CGThumbnailListItem_c *)servantLimitEntity;
    sub_1C6B9AC(p_servantLimitEntity, (int32_t)servantLimitEntity, v9, v10);
  }
  return servantLimitEntity;
}


int32_t CharaGraphServantCollectionListViewItem__get_SortPriority(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantClassEntity_o *ServantClassEntity; // x0
  __int64 v3; // x1

  ServantClassEntity = CharaGraphServantCollectionListViewItem__get_ServantClassEntity(this, method);
  if ( !ServantClassEntity )
    sub_1C6BC60(0, v3);
  return ServantClassEntity->fields.priority;
}


int32_t CharaGraphServantCollectionListViewItem__get_SvtId(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


UserServantCollectionEntity_o *CharaGraphServantCollectionListViewItem__get_UserServantCollectionEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantCollectionEntity_k__BackingField;
}


void CharaGraphServantCollectionListViewItem__set_ServantEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantEntity_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphServantCollectionListViewItem__set_SvtId(
        CharaGraphServantCollectionListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void CharaGraphServantCollectionListViewItem__set_UserServantCollectionEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        UserServantCollectionEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserServantCollectionEntity_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}