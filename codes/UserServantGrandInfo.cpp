void UserServantGrandInfo___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38E6F & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C38E6F = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(UserServantGrandInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantGrandInfo_TypeInfo->static_fields->Empty = (struct UserServantGrandInfo_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UserServantGrandInfo_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserServantGrandInfo___ctor(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantGrandInfo___ctor_43457052(
        UserServantGrandInfo_o *this,
        UserServantEntity_o *userSvtEntity,
        bool notCheckUserServantGrand,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x23
  __int64 v9; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  int64_t Entity; // x0
  int64_t v12; // x21
  Il2CppObject *v13; // x23
  __int64 v14; // x20
  __int64 v15; // x22
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  __int128 v17; // q1
  UserServantGrandEntity_o *v18; // x20
  struct GrandGraphDetailEntity_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C38E6B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C38E6B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
    v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = v9;
    *(_QWORD *)&v24.fields.fakeValue = v8;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v24, 0);
    if ( v10 )
    {
      Entity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v10,
                          Entity,
                          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v13 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
        if ( notCheckUserServantGrand )
        {
          v15 = *(_QWORD *)(v12 + 16);
          v14 = *(_QWORD *)(v12 + 24);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v25.fields.currentCryptoKey = v15;
          *(_QWORD *)&v25.fields.fakeValue = v14;
          Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v25, 0);
          if ( !v13 )
            goto LABEL_28;
          EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId((UserServantGrandMaster_o *)v13, Entity, 0);
        }
        else
        {
          v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v23.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = v23;
          Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v22, 0);
          if ( !v13 )
            goto LABEL_28;
          EntityFromSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)v13, Entity, 0);
        }
        v18 = EntityFromSvtId;
        if ( !EntityFromSvtId )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        if ( Entity )
        {
          v19 = GrandGraphDetailMaster__GetEntity(
                  (GrandGraphDetailMaster_o *)Entity,
                  v18->fields.grandGraphId,
                  *(_DWORD *)(v12 + 80),
                  0);
          this->fields.svtGrandDetailEntity = v19;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v19, v20, v21);
          return;
        }
      }
    }
LABEL_28:
    sub_1C32E7C(Entity);
  }
}


void UserServantGrandInfo___ctor_43457628(
        UserServantGrandInfo_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  GrandGraphDetailEntity_array *Entity; // x0
  GrandGraphDetailEntity_array *v10; // x21
  int32_t grandGraphId; // w22
  struct GrandGraphDetailEntity_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct GrandGraphDetailEntity_o *v15; // x1
  UserServantGrandInfo_Fields *p_fields; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C38E6C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C38E6C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( servantLeaderInfo && servantLeaderInfo->fields.grandSvt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
    v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v7;
    *(_QWORD *)&v17.fields.fakeValue = v6;
    Entity = (GrandGraphDetailEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v17, 0);
    if ( !v8 )
      goto LABEL_23;
    Entity = (GrandGraphDetailEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                               v8,
                                               (int32_t)Entity,
                                               (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_23;
    v10 = Entity;
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
    {
      grandGraphId = servantLeaderInfo->fields.grandGraphId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Entity = (GrandGraphDetailEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
      if ( grandGraphId < 1 )
      {
        if ( Entity )
        {
          Entity = GrandGraphDetailMaster__GetEntitiesByBaseClassId(
                     (GrandGraphDetailMaster_o *)Entity,
                     (int32_t)v10->m_Items[6],
                     0);
          if ( Entity )
          {
            if ( !LODWORD(Entity->max_length) )
              sub_1C32E84(Entity);
            v15 = Entity->m_Items[0];
            this->fields.svtGrandDetailEntity = v15;
            p_fields = &this->fields;
            goto LABEL_22;
          }
        }
      }
      else if ( Entity )
      {
        v12 = GrandGraphDetailMaster__GetEntity(
                (GrandGraphDetailMaster_o *)Entity,
                servantLeaderInfo->fields.grandGraphId,
                (int32_t)v10->m_Items[6],
                0);
        LODWORD(v15) = (_DWORD)v12;
        this->fields.svtGrandDetailEntity = v12;
        p_fields = &this->fields;
LABEL_22:
        sub_1C32BC4((CGThumbnailListItem_o *)p_fields, (int32_t)v15, v13, v14);
        return;
      }
LABEL_23:
      sub_1C32E7C(Entity);
    }
  }
}


bool UserServantGrandInfo__IsValid(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  return this->fields.svtGrandDetailEntity != 0;
}


UserServantGrandInfo_o *UserServantGrandInfo__Make(
        UserServantEntity_o *userSvtEntity,
        bool notCheckUserServantGrand,
        const MethodInfo *method)
{
  UserServantGrandInfo_c *v5; // x0
  UserServantGrandInfo_o *Empty; // x21
  const MethodInfo *v7; // x3
  UserServantGrandInfo_c *v8; // x0

  if ( (byte_4C38E6D & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C38E6D = 1;
  }
  v5 = UserServantGrandInfo_TypeInfo;
  if ( userSvtEntity )
  {
    Empty = (UserServantGrandInfo_o *)sub_1C32E6C(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_43457052(Empty, userSvtEntity, notCheckUserServantGrand, v7);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_1C32E7C(v5);
  }
  if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    v5 = UserServantGrandInfo_TypeInfo;
  }
  Empty = v5->static_fields->Empty;
  if ( !Empty )
    goto LABEL_13;
LABEL_5:
  if ( !Empty->fields.svtGrandDetailEntity )
  {
    v8 = UserServantGrandInfo_TypeInfo;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      v8 = UserServantGrandInfo_TypeInfo;
    }
    return v8->static_fields->Empty;
  }
  return Empty;
}


UserServantGrandInfo_o *UserServantGrandInfo__Make_43374116(
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  UserServantGrandInfo_c *v3; // x0
  UserServantGrandInfo_o *Empty; // x20
  const MethodInfo *v5; // x2
  UserServantGrandInfo_c *v6; // x0

  if ( (byte_4C38E6E & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C38E6E = 1;
  }
  v3 = UserServantGrandInfo_TypeInfo;
  if ( servantLeaderInfo )
  {
    Empty = (UserServantGrandInfo_o *)sub_1C32E6C(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_43457628(Empty, servantLeaderInfo, v5);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_1C32E7C(v3);
  }
  if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    v3 = UserServantGrandInfo_TypeInfo;
  }
  Empty = v3->static_fields->Empty;
  if ( !Empty )
    goto LABEL_13;
LABEL_5:
  if ( !Empty->fields.svtGrandDetailEntity )
  {
    v6 = UserServantGrandInfo_TypeInfo;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      v6 = UserServantGrandInfo_TypeInfo;
    }
    return v6->static_fields->Empty;
  }
  return Empty;
}


int32_t UserServantGrandInfo__get_AddedAtk(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  svtGrandDetailEntity = this->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    return svtGrandDetailEntity->fields.adjustAtk;
  else
    return 0;
}


int32_t UserServantGrandInfo__get_AddedHp(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  struct GrandGraphDetailEntity_o *svtGrandDetailEntity; // x8

  svtGrandDetailEntity = this->fields.svtGrandDetailEntity;
  if ( svtGrandDetailEntity )
    return svtGrandDetailEntity->fields.adjustHp;
  else
    return 0;
}