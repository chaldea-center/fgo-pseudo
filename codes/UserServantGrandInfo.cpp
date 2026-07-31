void UserServantGrandInfo___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939C6C & 1) == 0 )
  {
    sub_21FFC50(&UserServantGrandInfo_TypeInfo);
    byte_5939C6C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserServantGrandInfo_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantGrandInfo_TypeInfo->static_fields->Empty = (struct UserServantGrandInfo_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserServantGrandInfo_TypeInfo->static_fields,
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


void UserServantGrandInfo___ctor_50587068(
        UserServantGrandInfo_o *this,
        UserServantEntity_o *userSvtEntity,
        bool notCheckUserServantGrand,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  int64_t Entity; // x0
  __int64 v14; // x1
  int64_t v15; // x20
  __int64 v16; // x1
  int v17; // w8
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  __int64 v21; // x23
  UserServantGrandMaster_o *v22; // x21
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  __int128 v27; // q1
  UserServantGrandEntity_o *v28; // x21
  struct GrandGraphDetailEntity_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_5939C68 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5939C68 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( userSvtEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
    v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    *(_QWORD *)&v38.fields.currentCryptoKey = v10;
    *(_QWORD *)&v38.fields.fakeValue = v11;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v38, 0);
    if ( v12 )
    {
      Entity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v12,
                          Entity,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( Entity )
      {
        v15 = Entity;
        if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
          return;
        v17 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
        if ( notCheckUserServantGrand )
        {
          if ( !v17 )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
          v18 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
          v20 = *(_QWORD *)(v15 + 16);
          v21 = *(_QWORD *)(v15 + 24);
          v22 = (UserServantGrandMaster_o *)v18;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v39.fields.currentCryptoKey = v20;
          *(_QWORD *)&v39.fields.fakeValue = v21;
          Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v39, 0);
          if ( !v22 )
            goto LABEL_30;
          EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId(v22, Entity, 0);
        }
        else
        {
          if ( !v17 )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
          v26 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
          v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v37.fields.fakeValue = v27;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
          v36 = v37;
          Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v36, 0);
          if ( !v26 )
            goto LABEL_30;
          EntityFromSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)v26, Entity, 0);
        }
        v28 = EntityFromSvtId;
        if ( !EntityFromSvtId )
          return;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
        Entity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        if ( Entity )
        {
          v29 = GrandGraphDetailMaster__GetEntity(
                  (GrandGraphDetailMaster_o *)Entity,
                  v28->fields.grandGraphId,
                  *(_DWORD *)(v15 + 80),
                  0);
          this->fields.svtGrandDetailEntity = v29;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v29, v30, v31, v32, v33, v34, v35);
          return;
        }
      }
    }
LABEL_30:
    sub_21FFECC(Entity, v14);
  }
}


void UserServantGrandInfo___ctor_50587676(
        UserServantGrandInfo_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  GrandGraphDetailEntity_array *Entity; // x0
  __int64 v11; // x1
  GrandGraphDetailEntity_array *v12; // x21
  __int64 v13; // x1
  int v14; // w8
  struct GrandGraphDetailEntity_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct GrandGraphDetailEntity_o *v22; // x1
  MissionNaviTransitionBoardItem_o *p_fields; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_5939C69 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939C69 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( servantLeaderInfo && servantLeaderInfo->fields.grandSvt )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
    v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    *(_QWORD *)&v24.fields.currentCryptoKey = v8;
    *(_QWORD *)&v24.fields.fakeValue = v9;
    Entity = (GrandGraphDetailEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v24, 0);
    if ( !Master_object )
      goto LABEL_25;
    Entity = (GrandGraphDetailEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                               (int32_t)Entity,
                                               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_25;
    v12 = Entity;
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
    {
      v14 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
      if ( servantLeaderInfo->fields.grandGraphId < 1 )
      {
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
        Entity = (GrandGraphDetailEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        if ( Entity )
        {
          Entity = GrandGraphDetailMaster__GetEntitiesByBaseClassId(
                     (GrandGraphDetailMaster_o *)Entity,
                     (int32_t)v12->m_Items[6],
                     0);
          if ( Entity )
          {
            if ( !LODWORD(Entity->max_length) )
              sub_21FFED4(Entity);
            v22 = Entity->m_Items[0];
            this->fields.svtGrandDetailEntity = v22;
            p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
            goto LABEL_24;
          }
        }
      }
      else
      {
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
        Entity = (GrandGraphDetailEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        if ( Entity )
        {
          v15 = GrandGraphDetailMaster__GetEntity(
                  (GrandGraphDetailMaster_o *)Entity,
                  servantLeaderInfo->fields.grandGraphId,
                  (int32_t)v12->m_Items[6],
                  0);
          LODWORD(v22) = (_DWORD)v15;
          this->fields.svtGrandDetailEntity = v15;
          p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
LABEL_24:
          sub_21FFBF4(p_fields, (int32_t)v22, v16, v17, v18, v19, v20, v21);
          return;
        }
      }
LABEL_25:
      sub_21FFECC(Entity, v11);
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
  UserServantGrandInfo_o *Empty; // x20
  const MethodInfo *v7; // x3
  UserServantGrandInfo_c *v8; // x0

  if ( (byte_5939C6A & 1) == 0 )
  {
    sub_21FFC50(&UserServantGrandInfo_TypeInfo);
    byte_5939C6A = 1;
  }
  v5 = UserServantGrandInfo_TypeInfo;
  if ( userSvtEntity )
  {
    Empty = (UserServantGrandInfo_o *)sub_21FFEBC(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_50587068(Empty, userSvtEntity, notCheckUserServantGrand, v7);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_21FFECC(v5, notCheckUserServantGrand);
  }
  if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, notCheckUserServantGrand);
    v5 = UserServantGrandInfo_TypeInfo;
  }
  Empty = v5->static_fields->Empty;
  if ( !Empty )
    goto LABEL_13;
LABEL_5:
  if ( !Empty->fields.svtGrandDetailEntity )
  {
    v8 = UserServantGrandInfo_TypeInfo;
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, notCheckUserServantGrand);
      v8 = UserServantGrandInfo_TypeInfo;
    }
    return v8->static_fields->Empty;
  }
  return Empty;
}


UserServantGrandInfo_o *UserServantGrandInfo__Make_50517132(
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  UserServantGrandInfo_c *v3; // x0
  UserServantGrandInfo_o *Empty; // x19
  const MethodInfo *v5; // x2
  UserServantGrandInfo_c *v6; // x0

  if ( (byte_5939C6B & 1) == 0 )
  {
    sub_21FFC50(&UserServantGrandInfo_TypeInfo);
    byte_5939C6B = 1;
  }
  v3 = UserServantGrandInfo_TypeInfo;
  if ( servantLeaderInfo )
  {
    Empty = (UserServantGrandInfo_o *)sub_21FFEBC(UserServantGrandInfo_TypeInfo);
    UserServantGrandInfo___ctor_50587676(Empty, servantLeaderInfo, v5);
    if ( Empty )
      goto LABEL_5;
LABEL_13:
    sub_21FFECC(v3, method);
  }
  if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method);
    v3 = UserServantGrandInfo_TypeInfo;
  }
  Empty = v3->static_fields->Empty;
  if ( !Empty )
    goto LABEL_13;
LABEL_5:
  if ( !Empty->fields.svtGrandDetailEntity )
  {
    v6 = UserServantGrandInfo_TypeInfo;
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method);
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