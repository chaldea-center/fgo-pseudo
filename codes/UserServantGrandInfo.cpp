void UserServantGrandInfo___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC88CE & 1) == 0 )
  {
    sub_1C713B0(&UserServantGrandInfo_TypeInfo);
    byte_4CC88CE = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(UserServantGrandInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantGrandInfo_TypeInfo->static_fields->Empty = (struct UserServantGrandInfo_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)UserServantGrandInfo_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantGrandInfo___ctor(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantGrandInfo___ctor_43852716(
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
  __int64 v12; // x1
  int64_t v13; // x21
  Il2CppObject *v14; // x23
  __int64 v15; // x20
  __int64 v16; // x22
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  __int128 v18; // q1
  UserServantGrandEntity_o *v19; // x20
  struct GrandGraphDetailEntity_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4CC88CA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC88CA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
    v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v9;
    *(_QWORD *)&v29.fields.fakeValue = v8;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v29, 0);
    if ( v10 )
    {
      Entity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v10,
                          Entity,
                          (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity )
      {
        v13 = Entity;
        if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v14 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
        if ( notCheckUserServantGrand )
        {
          v16 = *(_QWORD *)(v13 + 16);
          v15 = *(_QWORD *)(v13 + 24);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v30.fields.currentCryptoKey = v16;
          *(_QWORD *)&v30.fields.fakeValue = v15;
          Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v30, 0);
          if ( !v14 )
            goto LABEL_28;
          EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId((UserServantGrandMaster_o *)v14, Entity, 0);
        }
        else
        {
          v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v28.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v28;
          Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v27, 0);
          if ( !v14 )
            goto LABEL_28;
          EntityFromSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)v14, Entity, 0);
        }
        v19 = EntityFromSvtId;
        if ( !EntityFromSvtId )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Entity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        if ( Entity )
        {
          v20 = GrandGraphDetailMaster__GetEntity(
                  (GrandGraphDetailMaster_o *)Entity,
                  v19->fields.grandGraphId,
                  *(_DWORD *)(v13 + 80),
                  0);
          this->fields.svtGrandDetailEntity = v20;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v20, v21, v22, v23, v24, v25, v26);
          return;
        }
      }
    }
LABEL_28:
    sub_1C71608(Entity, v12);
  }
}


void UserServantGrandInfo___ctor_43853292(
        UserServantGrandInfo_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  GrandGraphDetailEntity_array *Entity; // x0
  __int64 v10; // x1
  GrandGraphDetailEntity_array *v11; // x21
  int32_t grandGraphId; // w22
  struct GrandGraphDetailEntity_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct GrandGraphDetailEntity_o *v20; // x1
  UserServantGrandInfo_Fields *p_fields; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4CC88CB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC88CB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( servantLeaderInfo && servantLeaderInfo->fields.grandSvt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
    v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v7;
    *(_QWORD *)&v22.fields.fakeValue = v6;
    Entity = (GrandGraphDetailEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v22, 0);
    if ( !v8 )
      goto LABEL_23;
    Entity = (GrandGraphDetailEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                               v8,
                                               (int32_t)Entity,
                                               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_23;
    v11 = Entity;
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
    {
      grandGraphId = servantLeaderInfo->fields.grandGraphId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Entity = (GrandGraphDetailEntity_array *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
      if ( grandGraphId < 1 )
      {
        if ( Entity )
        {
          Entity = GrandGraphDetailMaster__GetEntitiesByBaseClassId(
                     (GrandGraphDetailMaster_o *)Entity,
                     (int32_t)v11->m_Items[6],
                     0);
          if ( Entity )
          {
            if ( !LODWORD(Entity->max_length) )
              sub_1C71610(Entity);
            v20 = Entity->m_Items[0];
            this->fields.svtGrandDetailEntity = v20;
            p_fields = &this->fields;
            goto LABEL_22;
          }
        }
      }
      else if ( Entity )
      {
        v13 = GrandGraphDetailMaster__GetEntity(
                (GrandGraphDetailMaster_o *)Entity,
                servantLeaderInfo->fields.grandGraphId,
                (int32_t)v11->m_Items[6],
                0);
        LODWORD(v20) = (_DWORD)v13;
        this->fields.svtGrandDetailEntity = v13;
        p_fields = &this->fields;
LABEL_22:
        sub_1C71354((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)v20, v14, v15, v16, v17, v18, v19);
        return;
      }
LABEL_23:
      sub_1C71608(Entity, v10);
    }
  }
}


bool UserServantGrandInfo__IsValid(UserServantGrandInfo_o *this, const MethodInfo *method)
{
  return this->fields.svtGrandDetailEntity != 0;
}


// local variable allocation has failed, the output may be wrong!
UserServantGrandInfo_o *UserServantGrandInfo__Make(
        UserServantEntity_o *userSvtEntity,
        bool notCheckUserServantGrand,
        const MethodInfo *method)
{
  UserServantGrandInfo_c *v5; // x0
  UserServantGrandInfo_o *Empty; // x21
  const MethodInfo *v7; // x3
  UserServantGrandInfo_c *v8; // x0

  if ( (byte_4CC88CC & 1) == 0 )
  {
    sub_1C713B0(&UserServantGrandInfo_TypeInfo);
    byte_4CC88CC = 1;
  }
  v5 = UserServantGrandInfo_TypeInfo;
  if ( userSvtEntity )
  {
    Empty = (UserServantGrandInfo_o *)sub_1C715FC(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_43852716(Empty, userSvtEntity, notCheckUserServantGrand, v7);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_1C71608(v5, notCheckUserServantGrand);
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


UserServantGrandInfo_o *UserServantGrandInfo__Make_43769012(
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  UserServantGrandInfo_c *v3; // x0
  UserServantGrandInfo_o *Empty; // x20
  const MethodInfo *v5; // x2
  UserServantGrandInfo_c *v6; // x0

  if ( (byte_4CC88CD & 1) == 0 )
  {
    sub_1C713B0(&UserServantGrandInfo_TypeInfo);
    byte_4CC88CD = 1;
  }
  v3 = UserServantGrandInfo_TypeInfo;
  if ( servantLeaderInfo )
  {
    Empty = (UserServantGrandInfo_o *)sub_1C715FC(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_43853292(Empty, servantLeaderInfo, v5);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_1C71608(v3, method);
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