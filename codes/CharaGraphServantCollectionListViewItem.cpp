void CharaGraphServantCollectionListViewItem___ctor(
        CharaGraphServantCollectionListViewItem_o *this,
        int32_t index,
        CharaGraphListViewPatternBase_o *listViewPattern,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  __int64 v19; // x20
  __int64 v20; // x21
  int32_t v21; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  DataManager_c *v24; // x8
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_ServantEntity_k__BackingField; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_596FA9D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596FA9D = 1;
  }
  CharaGraphListViewItemBase___ctor(
    (CharaGraphListViewItemBase_o *)this,
    index,
    listViewPattern,
    (const MethodInfo *)userSvtCollectionEntity);
  this->fields._UserServantCollectionEntity_k__BackingField = userSvtCollectionEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int32_t)userSvtCollectionEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    goto LABEL_10;
  v19 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
  *(_QWORD *)&v33.fields.currentCryptoKey = v19;
  *(_QWORD *)&v33.fields.fakeValue = v20;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v33, 0);
  v24 = DataManager_TypeInfo;
  this->fields._SvtId_k__BackingField = v21;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v22, v23);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
LABEL_10:
    sub_2213CDC(Master_object, v16);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._SvtId_k__BackingField,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  p_ServantEntity_k__BackingField = &this->fields._ServantEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_ServantEntity_k__BackingField,
    (int32_t)Entity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *((_BYTE *)p_ServantEntity_k__BackingField - 78) = 1;
}


int64_t CharaGraphServantCollectionListViewItem__get_ObjectId(
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
  if ( (byte_596FA9A & 1) == 0 )
  {
    this = (CharaGraphServantCollectionListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596FA9A = 1;
  }
  UserServantCollectionEntity_k__BackingField = v3->fields._UserServantCollectionEntity_k__BackingField;
  if ( !UserServantCollectionEntity_k__BackingField )
    sub_2213CDC(this, method);
  v5 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UserServantCollectionEntity_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0);
}


int32_t CharaGraphServantCollectionListViewItem__get_Rarity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  ServantLimitEntity_o *ServantLimitEntity; // x0
  __int64 v3; // x1

  ServantLimitEntity = CharaGraphServantCollectionListViewItem__get_ServantLimitEntity(this, method);
  if ( !ServantLimitEntity )
    sub_2213CDC(0, v3);
  return ServantLimitEntity->fields.rarity;
}


ServantClassEntity_o *CharaGraphServantCollectionListViewItem__get_ServantClassEntity(
        CharaGraphServantCollectionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantClassEntity_o *servantClassEntity; // x21
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596FA9B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_596FA9B = 1;
  }
  servantClassEntity = this->fields.servantClassEntity;
  if ( !servantClassEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField || !Master_object )
      sub_2213CDC(Master_object, v6);
    servantClassEntity = (struct ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantEntity_k__BackingField->fields.classId,
                                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    this->fields.servantClassEntity = servantClassEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantClassEntity,
      (int32_t)servantClassEntity,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
  __int64 v2; // x2
  struct ServantLimitEntity_o *servantLimitEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserServantCollectionEntity_o *UserServantCollectionEntity_k__BackingField; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596FA9C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596FA9C = 1;
  }
  servantLimitEntity = this->fields.servantLimitEntity;
  if ( !servantLimitEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    UserServantCollectionEntity_k__BackingField = this->fields._UserServantCollectionEntity_k__BackingField;
    if ( !UserServantCollectionEntity_k__BackingField || !Master_object )
      sub_2213CDC(Master_object, v6);
    servantLimitEntity = ServantLimitMaster__GetEntity(
                           (ServantLimitMaster_o *)Master_object,
                           this->fields._SvtId_k__BackingField,
                           UserServantCollectionEntity_k__BackingField->fields.maxLimitCount,
                           0);
    this->fields.servantLimitEntity = servantLimitEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantLimitEntity,
      (int32_t)servantLimitEntity,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    sub_2213CDC(0, v3);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServantCollectionEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantCollectionEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}